#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_u_39;
ATerm term_z_38;
ATerm term_b_38;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_m_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_e_17;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_k_15;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_m_10;
ATerm term_d_10;
ATerm term_p_9;
ATerm term_f_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_k_8;
void init_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Op_2, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Call_2, term_u_15, (ATerm) ATempty);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Match_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Where_1, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Build_1, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_15, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_z_15);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_15, term_v_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_LChoice_2, term_w_15, term_w_15);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Choice_2, term_w_15, term_w_15);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_y_26);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_33);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_y_26);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_y_26);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_x_35, term_y_35);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_y_26);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__3, term_x_35, term_y_35, (ATerm) ATempty);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_114 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm p_124 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm Op_2 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_123 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm d_103 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_108 (ATerm), ATerm w_108 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_108 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm Con_3 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm t_97 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_96 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_114 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_114 (ATerm));
ATerm scope_2 (ATerm, ATerm j_114 (ATerm), ATerm k_114 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm e_96 (ATerm));
ATerm innermost_1 (ATerm, ATerm j_111 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm i_84 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_84 (ATerm), ATerm z_84 (ATerm));
ATerm Match_1 (ATerm, ATerm h_84 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm h_98 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm e_121 (ATerm), ATerm f_121 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_120 (ATerm), ATerm q_120 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_120 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm d_124 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm Let_2 (ATerm, ATerm p_85 (ATerm), ATerm q_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm m_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm z_123 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm r_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm p_106 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm));
ATerm crush_3 (ATerm, ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_106 (ATerm), ATerm u_106 (ATerm));
ATerm diff_1 (ATerm, ATerm l_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_109 (ATerm), ATerm n_109 (ATerm));
ATerm for_3 (ATerm, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm y_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm r_121 (ATerm), ATerm s_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm));
ATerm zip_1 (ATerm, ATerm y_102 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm l_121 (ATerm), ATerm m_121 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm w_121 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm k_112 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm u_111 (ATerm));
ATerm rename_4 (ATerm, ATerm g_121 (ATerm, ATerm (ATerm)), ATerm h_121 (ATerm), ATerm i_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_114 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_114 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_86 (ATerm));
ATerm Signature_1 (ATerm, ATerm s_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_86 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_101 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm w_115 (ATerm));
ATerm debug_1 (ATerm, ATerm s_114 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_107 (ATerm), ATerm h_107 (ATerm));
ATerm crush_2 (ATerm, ATerm e_106 (ATerm), ATerm f_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_124 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_115 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_119 (ATerm));
ATerm map_1 (ATerm, ATerm s_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_119 (ATerm));
ATerm Program_1 (ATerm, ATerm b_95 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_95 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_118 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_84 (ATerm), ATerm c_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_116 (ATerm), ATerm k_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_116 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm i_8;
  i_8 = t;
  {
    ATerm w_1 = NULL;
    ATerm q_6 = NULL;
    q_6 = t;
    if(((w_1 != NULL) && (w_1 != q_6)))
      _fail(q_6);
    else
      w_1 = q_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(w_1)));
      t = printnl_0(t);
    }
  }
  t = i_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_114 (ATerm))
{
  ATerm l_8;
  l_8 = t;
  {
    t = t_114(t);
    t = debug_0(t);
  }
  t = l_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm g_7 = NULL;
        ATerm h_7 = NULL;
        t = term_q_8;
        {
          t = get_config_0(t);
          {
            h_7 = t;
            if(((g_7 != NULL) && (g_7 != h_7)))
              _fail(h_7);
            else
              g_7 = h_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_v_8);
          t = geq_0(t);
        }
      }
      t = o_8;
      t = p_124(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
      }
    }
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  t_8 = t;
  r_8 :
  if(match_cons(t_8, sym_ExplodeCong_2))
    {
      u_8 = ATgetArgument(t_8, 0);
      s_8 = ATgetArgument(t_8, 1);
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
        ATerm b_9 = NULL;
        ATerm c_9 = NULL;
        t = new_0(t);
        {
          b_9 = t;
          {
            if(((x_8 != NULL) && (x_8 != b_9)))
              _fail(b_9);
            else
              x_8 = b_9;
            {
              ATerm d_9 = NULL;
              t = new_0(t);
              {
                c_9 = t;
                {
                  if(((y_8 != NULL) && (y_8 != c_9)))
                    _fail(c_9);
                  else
                    y_8 = c_9;
                  {
                    ATerm e_9 = NULL;
                    t = new_0(t);
                    {
                      d_9 = t;
                      {
                        if(((z_8 != NULL) && (z_8 != d_9)))
                          _fail(d_9);
                        else
                          z_8 = d_9;
                        {
                          t = new_0(t);
                          {
                            e_9 = t;
                            if(((a_9 != NULL) && (a_9 != e_9)))
                              _fail(e_9);
                            else
                              a_9 = e_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), not_null(z_8)), not_null(y_8)), not_null(x_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8)))))));
      }
    }
  else
    {
      if(match_cons(t_8, sym_Build_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          {
            ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
            ATerm k_9 = NULL;
            ATerm o_9 = NULL;
            t = new_0(t);
            {
              k_9 = t;
              {
                if(((i_9 != NULL) && (i_9 != k_9)))
                  _fail(k_9);
                else
                  i_9 = k_9;
                {
                  t = not_null(u_8);
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                      l_9 = t;
                      j_8 :
                      if(match_cons(l_9, sym_Explode_2))
                        {
                          m_9 = ATgetArgument(l_9, 0);
                          n_9 = ATgetArgument(l_9, 1);
                          {
                            if(((g_9 != NULL) && (g_9 != m_9)))
                              _fail(m_9);
                            else
                              g_9 = m_9;
                            {
                              if(((h_9 != NULL) && (h_9 != n_9)))
                                _fail(n_9);
                              else
                                h_9 = n_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, c_0);
                    {
                      o_9 = t;
                      if(((j_9 != NULL) && (j_9 != o_9)))
                        _fail(o_9);
                      else
                        j_9 = o_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_9)), not_null(g_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_9)))));
          }
        }
      else
        {
          if(match_cons(t_8, sym_Match_1))
            {
              u_8 = ATgetArgument(t_8, 0);
              {
                ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
                ATerm v_9 = NULL;
                ATerm w_9 = NULL;
                t = new_0(t);
                {
                  v_9 = t;
                  {
                    if(((s_9 != NULL) && (s_9 != v_9)))
                      _fail(v_9);
                    else
                      s_9 = v_9;
                    {
                      ATerm a_10 = NULL;
                      t = new_0(t);
                      {
                        w_9 = t;
                        {
                          if(((t_9 != NULL) && (t_9 != w_9)))
                            _fail(w_9);
                          else
                            t_9 = w_9;
                          {
                            t = not_null(u_8);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
                                x_9 = t;
                                p_8 :
                                if(match_cons(x_9, sym_Explode_2))
                                  {
                                    y_9 = ATgetArgument(x_9, 0);
                                    z_9 = ATgetArgument(x_9, 1);
                                    {
                                      if(((q_9 != NULL) && (q_9 != y_9)))
                                        _fail(y_9);
                                      else
                                        q_9 = y_9;
                                      {
                                        if(((r_9 != NULL) && (r_9 != z_9)))
                                          _fail(z_9);
                                        else
                                          r_9 = z_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_9));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, e_0);
                              {
                                a_10 = t;
                                if(((u_9 != NULL) && (u_9 != a_10)))
                                  _fail(a_10);
                                else
                                  u_9 = a_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_f_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_9)), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_9)), not_null(q_9)))))));
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
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_Match_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
            ATerm m_11 = NULL;
            ATerm q_11 = NULL;
            t = new_0(t);
            {
              m_11 = t;
              {
                if(((k_11 != NULL) && (k_11 != m_11)))
                  _fail(m_11);
                else
                  k_11 = m_11;
                {
                  t = not_null(g_11);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
                      n_11 = t;
                      u_10 :
                      if(match_cons(n_11, sym_Anno_2))
                        {
                          o_11 = ATgetArgument(n_11, 0);
                          p_11 = ATgetArgument(n_11, 1);
                          {
                            if(((i_11 != NULL) && (i_11 != o_11)))
                              _fail(o_11);
                            else
                              i_11 = o_11;
                            {
                              if(((j_11 != NULL) && (j_11 != p_11)))
                                _fail(p_11);
                              else
                                j_11 = p_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_11)), not_null(i_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      q_11 = t;
                      if(((l_11 != NULL) && (l_11 != q_11)))
                        _fail(q_11);
                      else
                        l_11 = q_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_11))))));
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
                  ATerm v_11 = NULL;
                  ATerm y_11 = NULL;
                  t = new_0(t);
                  {
                    v_11 = t;
                    {
                      if(((t_11 != NULL) && (t_11 != v_11)))
                        _fail(v_11);
                      else
                        t_11 = v_11;
                      {
                        t = not_null(g_11);
                        {
                          ATerm t_0 (ATerm t)
                          {
                            ATerm w_11 = NULL,x_11 = NULL;
                            w_11 = t;
                            y_10 :
                            if(match_cons(w_11, sym_RootApp_1))
                              {
                                x_11 = ATgetArgument(w_11, 0);
                                {
                                  if(((s_11 != NULL) && (s_11 != x_11)))
                                    _fail(x_11);
                                  else
                                    s_11 = x_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11));
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
                            y_11 = t;
                            if(((u_11 != NULL) && (u_11 != y_11)))
                              _fail(y_11);
                            else
                              u_11 = y_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11))), not_null(s_11))));
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  {
                    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
                    ATerm e_12 = NULL;
                    ATerm i_12 = NULL;
                    t = new_0(t);
                    {
                      e_12 = t;
                      {
                        if(((c_12 != NULL) && (c_12 != e_12)))
                          _fail(e_12);
                        else
                          c_12 = e_12;
                        {
                          t = not_null(g_11);
                          {
                            ATerm u_0 (ATerm t)
                            {
                              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
                              f_12 = t;
                              c_11 :
                              if(match_cons(f_12, sym_App_2))
                                {
                                  g_12 = ATgetArgument(f_12, 0);
                                  h_12 = ATgetArgument(f_12, 1);
                                  {
                                    if(((b_12 != NULL) && (b_12 != g_12)))
                                      _fail(g_12);
                                    else
                                      b_12 = g_12;
                                    {
                                      if(((a_12 != NULL) && (a_12 != h_12)))
                                        _fail(h_12);
                                      else
                                        a_12 = h_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, u_0);
                            {
                              i_12 = t;
                              if(((d_12 != NULL) && (d_12 != i_12)))
                                _fail(i_12);
                              else
                                d_12 = i_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_12)), not_null(b_12)))));
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
  x_12 :
  if(match_cons(z_12, sym_Match_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      y_12 :
      if(match_cons(a_13, sym_RootApp_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          t = not_null(b_13);
        }
      else
        {
          if(match_cons(a_13, sym_App_2))
            {
              b_13 = ATgetArgument(a_13, 0);
              c_13 = ATgetArgument(a_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_13), not_null(c_13));
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
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Match_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm r_13 = NULL,s_13 = NULL;
        ATerm w_13 = NULL;
        t = not_null(p_13);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
            t_13 = t;
            k_13 :
            if(match_cons(t_13, sym_RootApp_1))
              {
                u_13 = ATgetArgument(t_13, 0);
                l_13 :
                if(match_cons(u_13, sym_Match_1))
                  {
                    v_13 = ATgetArgument(u_13, 0);
                    {
                      if(((r_13 != NULL) && (r_13 != v_13)))
                        _fail(v_13);
                      else
                        r_13 = v_13;
                      t = not_null(r_13);
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
          t = pat_td_1(t, w_0);
          {
            w_13 = t;
            if(((s_13 != NULL) && (s_13 != w_13)))
              _fail(w_13);
            else
              s_13 = w_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_13));
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
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Build_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
            ATerm x_14 = NULL;
            ATerm b_15 = NULL;
            t = new_0(t);
            {
              x_14 = t;
              {
                if(((v_14 != NULL) && (v_14 != x_14)))
                  _fail(x_14);
                else
                  v_14 = x_14;
                {
                  t = not_null(r_14);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
                      y_14 = t;
                      f_14 :
                      if(match_cons(y_14, sym_Anno_2))
                        {
                          z_14 = ATgetArgument(y_14, 0);
                          a_15 = ATgetArgument(y_14, 1);
                          {
                            if(((t_14 != NULL) && (t_14 != z_14)))
                              _fail(z_14);
                            else
                              t_14 = z_14;
                            {
                              if(((u_14 != NULL) && (u_14 != a_15)))
                                _fail(a_15);
                              else
                                u_14 = a_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14));
                            }
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
                      b_15 = t;
                      if(((w_14 != NULL) && (w_14 != b_15)))
                        _fail(b_15);
                      else
                        w_14 = b_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(t_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_14))));
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                  ATerm g_15 = NULL;
                  ATerm j_15 = NULL;
                  t = new_0(t);
                  {
                    g_15 = t;
                    {
                      if(((e_15 != NULL) && (e_15 != g_15)))
                        _fail(g_15);
                      else
                        e_15 = g_15;
                      {
                        t = not_null(r_14);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm h_15 = NULL,i_15 = NULL;
                            h_15 = t;
                            j_14 :
                            if(match_cons(h_15, sym_RootApp_1))
                              {
                                i_15 = ATgetArgument(h_15, 0);
                                {
                                  if(((d_15 != NULL) && (d_15 != i_15)))
                                    _fail(i_15);
                                  else
                                    d_15 = i_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15));
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
                            j_15 = t;
                            if(((f_15 != NULL) && (f_15 != j_15)))
                              _fail(j_15);
                            else
                              f_15 = j_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_15))));
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = n_10;
                  {
                    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
                    ATerm p_15 = NULL;
                    ATerm t_15 = NULL;
                    t = new_0(t);
                    {
                      p_15 = t;
                      {
                        if(((n_15 != NULL) && (n_15 != p_15)))
                          _fail(p_15);
                        else
                          n_15 = p_15;
                        {
                          t = not_null(r_14);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                              q_15 = t;
                              n_14 :
                              if(match_cons(q_15, sym_App_2))
                                {
                                  r_15 = ATgetArgument(q_15, 0);
                                  s_15 = ATgetArgument(q_15, 1);
                                  {
                                    if(((l_15 != NULL) && (l_15 != r_15)))
                                      _fail(r_15);
                                    else
                                      l_15 = r_15;
                                    {
                                      if(((m_15 != NULL) && (m_15 != s_15)))
                                        _fail(s_15);
                                      else
                                        m_15 = s_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15));
                                    }
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
                              t_15 = t;
                              if(((o_15 != NULL) && (o_15 != t_15)))
                                _fail(t_15);
                              else
                                o_15 = t_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_15), not_null(m_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_15))));
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
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  k_16 = t;
  i_16 :
  if(match_cons(k_16, sym_Build_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      j_16 :
      if(match_cons(l_16, sym_RootApp_1))
        {
          m_16 = ATgetArgument(l_16, 0);
          t = not_null(m_16);
        }
      else
        {
          if(match_cons(l_16, sym_App_2))
            {
              m_16 = ATgetArgument(l_16, 0);
              n_16 = ATgetArgument(l_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_16)), not_null(m_16));
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
ATerm As_2 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_As_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(z_16));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(a_17);
          {
            ATerm j_17 = NULL;
            t = g_88(t);
            {
              h_17 = t;
              {
                t = not_null(b_17);
                {
                  ATerm l_17 = NULL;
                  t = h_88(t);
                  {
                    j_17 = t;
                    {
                      ATerm m_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_17), not_null(j_17)), not_null(f_17));
                      {
                        m_17 = t;
                        if(((l_17 != NULL) && (l_17 != m_17)))
                          _fail(m_17);
                        else
                          l_17 = m_17;
                      }
                      t = not_null(l_17);
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
ATerm Prim_2 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_Prim_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm i_18 = NULL;
            t = d_84(t);
            {
              g_18 = t;
              {
                t = not_null(a_18);
                {
                  ATerm k_18 = NULL;
                  t = e_84(t);
                  {
                    i_18 = t;
                    {
                      ATerm l_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(g_18), not_null(i_18)), not_null(e_18));
                      {
                        l_18 = t;
                        if(((k_18 != NULL) && (k_18 != l_18)))
                          _fail(l_18);
                        else
                          k_18 = l_18;
                      }
                      t = not_null(k_18);
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
ATerm Explode_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Explode_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = c_88(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = d_88(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Op_2 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Op_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm c_20 = NULL,e_20 = NULL;
        ATerm d_20 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
        }
        {
          t = not_null(x_19);
          {
            ATerm g_20 = NULL;
            t = h_86(t);
            {
              e_20 = t;
              {
                t = not_null(y_19);
                {
                  ATerm i_20 = NULL;
                  t = i_86(t);
                  {
                    g_20 = t;
                    {
                      ATerm j_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_20), not_null(g_20)), not_null(c_20));
                      {
                        j_20 = t;
                        if(((i_20 != NULL) && (i_20 != j_20)))
                          _fail(j_20);
                        else
                          i_20 = j_20;
                      }
                      t = not_null(i_20);
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
ATerm pat_td_1 (ATerm t, ATerm g_123 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_123(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                t = pat_td_1(t, g_123);
                return(t);
              }
              t = fetch_1(t, b_1);
              return(t);
            }
            t = Op_2(t, _id, a_1);
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm t_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_123);
                    return(t);
                  }
                  t = Explode_2(t, _id, c_1);
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = t_10;
                  {
                    ATerm w_10 = t;
                    int x_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_123);
                          return(t);
                        }
                        t = Explode_2(t, d_1, _id);
                        LocalPopChoice(x_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm z_10 = t;
                          int a_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_1 (ATerm t)
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_123);
                                  return(t);
                                }
                                t = fetch_1(t, f_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, e_1);
                              LocalPopChoice(a_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_123);
                                  return(t);
                                }
                                t = As_2(t, _id, g_1);
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
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Build_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL,e_21 = NULL;
            ATerm i_21 = NULL;
            t = not_null(b_21);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
                f_21 = t;
                s_20 :
                if(match_cons(f_21, sym_RootApp_1))
                  {
                    g_21 = ATgetArgument(f_21, 0);
                    t_20 :
                    if(match_cons(g_21, sym_Build_1))
                      {
                        h_21 = ATgetArgument(g_21, 0);
                        {
                          if(((d_21 != NULL) && (d_21 != h_21)))
                            _fail(h_21);
                          else
                            d_21 = h_21;
                          t = not_null(d_21);
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
              t = pat_td_1(t, h_1);
              {
                i_21 = t;
                if(((e_21 != NULL) && (e_21 != i_21)))
                  _fail(i_21);
                else
                  e_21 = i_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_21));
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            {
              ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
              ATerm r_21 = NULL;
              t = not_null(b_21);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                  n_21 = t;
                  w_20 :
                  if(match_cons(n_21, sym_App_2))
                    {
                      o_21 = ATgetArgument(n_21, 0);
                      q_21 = ATgetArgument(n_21, 1);
                      x_20 :
                      if(match_cons(o_21, sym_Build_1))
                        {
                          p_21 = ATgetArgument(o_21, 0);
                          {
                            if(((l_21 != NULL) && (l_21 != p_21)))
                              _fail(p_21);
                            else
                              l_21 = p_21;
                            {
                              if(((k_21 != NULL) && (k_21 != q_21)))
                                _fail(q_21);
                              else
                                k_21 = q_21;
                              t = not_null(l_21);
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
                t = pat_td_1(t, i_1);
                {
                  r_21 = t;
                  if(((m_21 != NULL) && (m_21 != r_21)))
                    _fail(r_21);
                  else
                    m_21 = r_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_21));
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
  ATerm h_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = h_11;
      {
        ATerm z_11 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = z_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  l_22 :
  if(match_cons(s_22, sym_Lets_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_22), not_null(u_22));
    }
  else
    {
      if(match_cons(s_22, sym_LChoices_1))
        {
          t_22 = ATgetArgument(s_22, 0);
          m_22 :
          if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
            {
              p_22 = ATgetFirst((ATermList) t_22);
              q_22 = (ATerm) ATgetNext((ATermList) t_22);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_22)));
            }
          else
            {
              if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                {
                  t = term_k_12;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_22, sym_Choices_1))
            {
              t_22 = ATgetArgument(s_22, 0);
              n_22 :
              if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                {
                  p_22 = ATgetFirst((ATermList) t_22);
                  q_22 = (ATerm) ATgetNext((ATermList) t_22);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_22)));
                }
              else
                {
                  if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                    {
                      t = term_k_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_22, sym_Seqs_1))
                {
                  t_22 = ATgetArgument(s_22, 0);
                  o_22 :
                  if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                    {
                      p_22 = ATgetFirst((ATermList) t_22);
                      q_22 = (ATerm) ATgetNext((ATermList) t_22);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_22)));
                    }
                  else
                    {
                      if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                        {
                          t = term_l_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_22, sym_DefaultVarDec_1))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_22), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_12), term_o_12));
                    }
                  else
                    {
                      if(match_cons(s_22, sym_InfixApp_3))
                        {
                          t_22 = ATgetArgument(s_22, 0);
                          u_22 = ATgetArgument(s_22, 1);
                          r_22 = ATgetArgument(s_22, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_22), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), not_null(t_22))));
                        }
                      else
                        {
                          if(match_cons(s_22, sym_BAM_3))
                            {
                              t_22 = ATgetArgument(s_22, 0);
                              u_22 = ATgetArgument(s_22, 1);
                              r_22 = ATgetArgument(s_22, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_22))), not_null(t_22)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_22))));
                            }
                          else
                            {
                              if(match_cons(s_22, sym_AM_2))
                                {
                                  t_22 = ATgetArgument(s_22, 0);
                                  u_22 = ATgetArgument(s_22, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_22)));
                                }
                              else
                                {
                                  if(match_cons(s_22, sym_MA_2))
                                    {
                                      t_22 = ATgetArgument(s_22, 0);
                                      u_22 = ATgetArgument(s_22, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_22)), not_null(u_22));
                                    }
                                  else
                                    {
                                      if(match_cons(s_22, sym_BA_2))
                                        {
                                          t_22 = ATgetArgument(s_22, 0);
                                          u_22 = ATgetArgument(s_22, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_22)), not_null(t_22));
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
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  h_24 = t;
  e_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      l_24 = ATgetArgument(h_24, 1);
      f_24 :
      if(match_cons(i_24, sym__2))
        {
          j_24 = ATgetArgument(i_24, 0);
          k_24 = ATgetArgument(i_24, 1);
          g_24 :
          if(match_cons(l_24, sym__2))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_24)), not_null(j_24)), (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(k_24)));
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  u_24 :
  if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
    {
      w_24 = ATgetFirst((ATermList) v_24);
      x_24 = (ATerm) ATgetNext((ATermList) v_24);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), not_null(x_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  c_25 :
  if(((ATgetType(d_25) == AT_LIST) && ATisEmpty(d_25)))
    {
      t = term_p_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm d_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, d_103);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm p_25 (ATerm t)
  {
    ATerm m_25 = NULL;
    ATerm n_25 = NULL;
    t = not_null(j_25);
    {
      ATerm q_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_12;
        }
      {
        t = new_0(t);
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))));
    return(t);
  }
  ATerm q_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))));
    return(t);
  }
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Var_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = q_25(t);
          }
      }
    }
  else
    {
      t = p_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Prim_2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = not_null(z_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm t_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_12;
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          {
            t = not_null(z_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm k_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, k_1);
                {
                  f_26 = t;
                  u_25 :
                  if(match_cons(f_26, sym__2))
                    {
                      g_26 = ATgetArgument(f_26, 0);
                      h_26 = ATgetArgument(f_26, 1);
                      v_25 :
                      if(match_cons(h_26, sym__2))
                        {
                          i_26 = ATgetArgument(h_26, 0);
                          j_26 = ATgetArgument(h_26, 1);
                          {
                            if(((c_26 != NULL) && (c_26 != g_26)))
                              _fail(g_26);
                            else
                              c_26 = g_26;
                            {
                              if(((d_26 != NULL) && (d_26 != i_26)))
                                _fail(i_26);
                              else
                                d_26 = i_26;
                              if(((e_26 != NULL) && (e_26 != j_26)))
                                _fail(j_26);
                              else
                                e_26 = j_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_25), not_null(e_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm v_108 (ATerm), ATerm w_108 (ATerm))
{
  ATerm m_26 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_108(t);
        t = m_26(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = w_108(t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_108 (ATerm))
{
  t = repeat_2(t, y_108, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_Wld_0))
    {
      ATerm t_26 = NULL,v_26 = NULL;
      ATerm w_12;
      w_12 = t;
      {
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      t = w_12;
      {
        ATerm w_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(t_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        t = not_null(v_26);
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
  ATerm d_13 = t;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, l_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_App_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm q_27 = NULL;
            t = w_87(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = x_87(t);
                  {
                    q_27 = t;
                    {
                      ATerm t_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(o_27), not_null(q_27)), not_null(m_27));
                      {
                        t_27 = t;
                        if(((s_27 != NULL) && (s_27 != t_27)))
                          _fail(t_27);
                        else
                          s_27 = t_27;
                      }
                      t = not_null(s_27);
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
ATerm Con_3 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Con_3))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm s_28 = NULL;
            t = t_87(t);
            {
              q_28 = t;
              {
                t = not_null(i_28);
                {
                  ATerm u_28 = NULL;
                  t = u_87(t);
                  {
                    s_28 = t;
                    {
                      t = not_null(j_28);
                      {
                        ATerm w_28 = NULL;
                        t = v_87(t);
                        {
                          u_28 = t;
                          {
                            ATerm x_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(q_28), not_null(s_28), not_null(u_28)), not_null(o_28));
                            {
                              x_28 = t;
                              if(((w_28 != NULL) && (w_28 != x_28)))
                                _fail(x_28);
                              else
                                w_28 = x_28;
                            }
                            t = not_null(w_28);
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
  ATerm g_13 = t;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, m_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  i_29 = t;
  g_29 :
  if(match_cons(i_29, sym_SRule_1))
    {
      j_29 = ATgetArgument(i_29, 0);
      h_29 :
      if(match_cons(j_29, sym_StratRule_3))
        {
          k_29 = ATgetArgument(j_29, 0);
          l_29 = ATgetArgument(j_29, 1);
          m_29 = ATgetArgument(j_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), not_null(k_29)));
        }
      else
        {
          if(match_cons(j_29, sym_Rule_3))
            {
              k_29 = ATgetArgument(j_29, 0);
              l_29 = ATgetArgument(j_29, 1);
              m_29 = ATgetArgument(j_29, 2);
              {
                t = not_null(k_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(l_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(l_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_29))));
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
ATerm oncetd_1 (ATerm t, ATerm t_97 (ATerm))
{
  ATerm v_29 (ATerm t)
  {
    ATerm j_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_97(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = j_13;
        t = _one(t, v_29);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  i_30 :
  if(match_cons(k_30, sym_SRule_1))
    {
      l_30 = ATgetArgument(k_30, 0);
      j_30 :
      if(match_cons(l_30, sym_Rule_3))
        {
          m_30 = ATgetArgument(l_30, 0);
          n_30 = ATgetArgument(l_30, 1);
          o_30 = ATgetArgument(l_30, 2);
          {
            ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
            ATerm a_31 = NULL;
            ATerm g_31 = NULL;
            t = new_0(t);
            {
              a_31 = t;
              {
                if(((x_30 != NULL) && (x_30 != a_31)))
                  _fail(a_31);
                else
                  x_30 = a_31;
                {
                  t = not_null(m_30);
                  {
                    ATerm o_31 = NULL;
                    ATerm n_1 (ATerm t)
                    {
                      ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
                      b_31 = t;
                      z_29 :
                      if(match_cons(b_31, sym_Con_3))
                        {
                          c_31 = ATgetArgument(b_31, 0);
                          e_31 = ATgetArgument(b_31, 1);
                          f_31 = ATgetArgument(b_31, 2);
                          a_30 :
                          if(match_cons(c_31, sym_Var_1))
                            {
                              d_31 = ATgetArgument(c_31, 0);
                              {
                                if(((w_30 != NULL) && (w_30 != d_31)))
                                  _fail(d_31);
                                else
                                  w_30 = d_31;
                                {
                                  if(((u_30 != NULL) && (u_30 != e_31)))
                                    _fail(e_31);
                                  else
                                    u_30 = e_31;
                                  {
                                    if(((s_30 != NULL) && (s_30 != f_31)))
                                      _fail(f_31);
                                    else
                                      s_30 = f_31;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30));
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
                    t = oncetd_1(t, n_1);
                    {
                      g_31 = t;
                      {
                        if(((y_30 != NULL) && (y_30 != g_31)))
                          _fail(g_31);
                        else
                          y_30 = g_31;
                        {
                          t = not_null(n_30);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
                              h_31 = t;
                              d_30 :
                              if(match_cons(h_31, sym_Con_3))
                                {
                                  i_31 = ATgetArgument(h_31, 0);
                                  k_31 = ATgetArgument(h_31, 1);
                                  l_31 = ATgetArgument(h_31, 2);
                                  e_30 :
                                  if(match_cons(i_31, sym_Var_1))
                                    {
                                      j_31 = ATgetArgument(i_31, 0);
                                      f_30 :
                                      if(match_cons(l_31, sym_Call_2))
                                        {
                                          m_31 = ATgetArgument(l_31, 0);
                                          n_31 = ATgetArgument(l_31, 1);
                                          g_30 :
                                          if(((ATgetType(n_31) == AT_LIST) && ATisEmpty(n_31)))
                                            {
                                              {
                                                if(((w_30 != NULL) && (w_30 != j_31)))
                                                  _fail(j_31);
                                                else
                                                  w_30 = j_31;
                                                {
                                                  if(((v_30 != NULL) && (v_30 != k_31)))
                                                    _fail(k_31);
                                                  else
                                                    v_30 = k_31;
                                                  {
                                                    if(((t_30 != NULL) && (t_30 != m_31)))
                                                      _fail(m_31);
                                                    else
                                                      t_30 = m_31;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
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
                            t = oncetd_1(t, o_1);
                            {
                              o_31 = t;
                              if(((z_30 != NULL) && (z_30 != o_31)))
                                _fail(o_31);
                              else
                                z_30 = o_31;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_30), not_null(z_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(t_30), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_30), not_null(v_30), term_l_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30)))))));
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
  ATerm q_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm a_14 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(b_14);
              }
            else
              {
                t = a_14;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(x_13);
    }
  else
    {
      t = q_13;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm d_96 (ATerm))
{
  t = d_96(t);
  {
    ATerm p_1 (ATerm t)
    {
      t = topdown_1(t, d_96);
      return(t);
    }
    t = _all(t, p_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        {
        }
      }
    {
      ATerm r_1 (ATerm t)
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(g_14);
          }
        else
          {
            t = e_14;
            {
              ATerm h_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(i_14);
                }
              else
                {
                  t = h_14;
                  {
                    ATerm k_14 = t;
                    int l_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(l_14);
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm m_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(o_14);
                            }
                          else
                            {
                              t = m_14;
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
      t = repeat_2(t, r_1, _id);
    }
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,v_33 = NULL,p_35 = NULL,q_35 = NULL,a_36 = NULL,b_36 = NULL;
  w_32 = t;
  m_32 :
  if(match_cons(w_32, sym_Seq_2))
    {
      x_32 = ATgetArgument(w_32, 0);
      b_33 = ATgetArgument(w_32, 1);
      n_32 :
      if(match_cons(x_32, sym_Call_2))
        {
          y_32 = ATgetArgument(x_32, 0);
          a_33 = ATgetArgument(x_32, 1);
          o_32 :
          if(match_cons(y_32, sym_SVar_1))
            {
              z_32 = ATgetArgument(y_32, 0);
              p_32 :
              if(match_string(z_32, "mark"))
                {
                  q_32 :
                  if(((ATgetType(a_33) == AT_LIST) && ATisEmpty(a_33)))
                    {
                      r_32 :
                      if(match_cons(b_33, sym_Seq_2))
                        {
                          c_33 = ATgetArgument(b_33, 0);
                          v_33 = ATgetArgument(b_33, 1);
                          s_32 :
                          if(match_cons(c_33, sym_Match_1))
                            {
                              d_33 = ATgetArgument(c_33, 0);
                              t_32 :
                              if(match_cons(v_33, sym_Seq_2))
                                {
                                  p_35 = ATgetArgument(v_33, 0);
                                  a_36 = ATgetArgument(v_33, 1);
                                  u_32 :
                                  if(match_cons(p_35, sym_Where_1))
                                    {
                                      q_35 = ATgetArgument(p_35, 0);
                                      v_32 :
                                      if(match_cons(a_36, sym_Build_1))
                                        {
                                          b_36 = ATgetArgument(a_36, 0);
                                          {
                                            ATerm s_14 = t;
                                            int c_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
                                                ATerm j_36 = NULL,k_36 = NULL,m_36 = NULL;
                                                t = term_c_16;
                                                {
                                                  ATerm s_1 (ATerm t)
                                                  {
                                                    t = term_d_16;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, s_1);
                                                  {
                                                    j_36 = t;
                                                    b_32 :
                                                    if(match_cons(j_36, sym_Defined_2))
                                                      {
                                                        k_36 = ATgetArgument(j_36, 0);
                                                        m_36 = ATgetArgument(j_36, 1);
                                                        c_32 :
                                                        if(match_string(k_36, "s_0"))
                                                          {
                                                            ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
                                                            if(((g_36 != NULL) && (g_36 != m_36)))
                                                              _fail(m_36);
                                                            else
                                                              g_36 = m_36;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(g_36), not_null(d_33), (ATerm) ATmakeAppl(sym__2, not_null(q_35), not_null(b_36)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  n_36 = t;
                                                                  a_32 :
                                                                  if(match_cons(n_36, sym__2))
                                                                    {
                                                                      o_36 = ATgetArgument(n_36, 0);
                                                                      p_36 = ATgetArgument(n_36, 1);
                                                                      {
                                                                        if(((h_36 != NULL) && (h_36 != o_36)))
                                                                          _fail(o_36);
                                                                        else
                                                                          h_36 = o_36;
                                                                        if(((i_36 != NULL) && (i_36 != p_36)))
                                                                          _fail(p_36);
                                                                        else
                                                                          i_36 = p_36;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(h_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_36))));
                                                LocalPopChoice(c_15);
                                              }
                                            else
                                              {
                                                t = s_14;
                                                {
                                                  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
                                                  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
                                                  t = term_c_16;
                                                  {
                                                    ATerm t_1 (ATerm t)
                                                    {
                                                      t = term_d_16;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, t_1);
                                                    {
                                                      z_36 = t;
                                                      k_32 :
                                                      if(match_cons(z_36, sym_Defined_2))
                                                        {
                                                          a_37 = ATgetArgument(z_36, 0);
                                                          b_37 = ATgetArgument(z_36, 1);
                                                          l_32 :
                                                          if(match_string(a_37, "h_0"))
                                                            {
                                                              ATerm c_37 = NULL;
                                                              if(((u_36 != NULL) && (u_36 != b_37)))
                                                                _fail(b_37);
                                                              else
                                                                u_36 = b_37;
                                                              {
                                                                ATerm d_37 = NULL;
                                                                t = not_null(u_36);
                                                                {
                                                                  c_37 = t;
                                                                  {
                                                                    if(((w_36 != NULL) && (w_36 != c_37)))
                                                                      _fail(c_37);
                                                                    else
                                                                      w_36 = c_37;
                                                                    {
                                                                      t = not_null(d_33);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          d_37 = t;
                                                                          {
                                                                            if(((v_36 != NULL) && (v_36 != d_37)))
                                                                              _fail(d_37);
                                                                            else
                                                                              v_36 = d_37;
                                                                            {
                                                                              ATerm u_1 (ATerm t)
                                                                              {
                                                                                t = term_e_16;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm e_37 = NULL,g_37 = NULL;
                                                                                  ATerm f_37 = NULL;
                                                                                  f_37 = t;
                                                                                  if(((e_37 != NULL) && (e_37 != f_37)))
                                                                                    _fail(f_37);
                                                                                  else
                                                                                    e_37 = f_37;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37));
                                                                                    {
                                                                                      g_37 = t;
                                                                                      {
                                                                                        ATerm f_16;
                                                                                        f_16 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(w_36), not_null(g_37)), term_h_16);
                                                                                          {
                                                                                            ATerm a_2 (ATerm t)
                                                                                            {
                                                                                              t = term_e_16;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, a_2);
                                                                                          }
                                                                                        }
                                                                                        t = f_16;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, z_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_35), not_null(b_36));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      i_37 = t;
                                                                                      j_32 :
                                                                                      if(match_cons(i_37, sym__2))
                                                                                        {
                                                                                          j_37 = ATgetArgument(i_37, 0);
                                                                                          k_37 = ATgetArgument(i_37, 1);
                                                                                          {
                                                                                            if(((x_36 != NULL) && (x_36 != j_37)))
                                                                                              _fail(j_37);
                                                                                            else
                                                                                              x_36 = j_37;
                                                                                            if(((y_36 != NULL) && (y_36 != k_37)))
                                                                                              _fail(k_37);
                                                                                            else
                                                                                              y_36 = k_37;
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
                                                                              t = scope_2(t, u_1, y_1);
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(x_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_36))));
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  ATerm k_39 (ATerm t)
  {
    ATerm c_39 = NULL,d_39 = NULL;
    t = not_null(r_38);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_e_16;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        c_39 = t;
        f_38 :
        if(match_cons(c_39, sym_Defined_1))
          {
            d_39 = ATgetArgument(c_39, 0);
            g_38 :
            if(!(match_string(d_39, "m_0")))
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
    t = not_null(t_38);
    return(t);
  }
  ATerm l_39 (ATerm t)
  {
    ATerm h_39 = NULL,i_39 = NULL;
    t = not_null(r_38);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_e_16;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        h_39 = t;
        h_38 :
        if(match_cons(h_39, sym_Defined_1))
          {
            i_39 = ATgetArgument(h_39, 0);
            i_38 :
            if(!(match_string(i_39, "j_0")))
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
    t = not_null(t_38);
    return(t);
  }
  r_38 = t;
  j_38 :
  if(match_cons(r_38, sym_App_2))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      k_38 :
      if(match_cons(t_38, sym_Var_1))
        {
          q_38 = ATgetArgument(t_38, 0);
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_38 = NULL,y_38 = NULL;
                t = not_null(r_38);
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_e_16;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    x_38 = t;
                    d_38 :
                    if(match_cons(x_38, sym_Defined_1))
                      {
                        y_38 = ATgetArgument(x_38, 0);
                        e_38 :
                        if(!(match_string(y_38, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38));
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                {
                  ATerm q_16 = t;
                  int r_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_39(t);
                      LocalPopChoice(r_16);
                    }
                  else
                    {
                      t = q_16;
                      t = l_39(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_39(t);
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
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
ATerm Tl_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(((ATgetType(o_39) == AT_LIST) && !(ATisEmpty(o_39))))
    {
      p_39 = ATgetFirst((ATermList) o_39);
      q_39 = (ATerm) ATgetNext((ATermList) o_39);
      t = not_null(q_39);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym__2))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      {
        ATerm u_16;
        u_16 = t;
        {
          ATerm b_40 = NULL;
          ATerm c_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(y_39));
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = (ATerm) ATempty;
              }
            {
              c_40 = t;
              if(((b_40 != NULL) && (b_40 != c_40)))
                _fail(c_40);
              else
                b_40 = c_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_39), not_null(y_39), not_null(b_40));
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
ATerm end_scope_1 (ATerm t, ATerm i_114 (ATerm))
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm m_40 = NULL;
    ATerm n_40 = NULL,s_40 = NULL,t_40 = NULL;
    t = i_114(t);
    {
      m_40 = t;
      {
        if(((l_40 != NULL) && (l_40 != m_40)))
          _fail(m_40);
        else
          l_40 = m_40;
        {
          ATerm c_17 = t;
          int d_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), term_e_17);
              t = table_get_0(t);
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_40 = t;
            i_40 :
            if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
              {
                s_40 = ATgetFirst((ATermList) n_40);
                t_40 = (ATerm) ATgetNext((ATermList) n_40);
                {
                  if(((k_40 != NULL) && (k_40 != s_40)))
                    _fail(s_40);
                  else
                    k_40 = s_40;
                  {
                    if(((j_40 != NULL) && (j_40 != t_40)))
                      _fail(t_40);
                    else
                      j_40 = t_40;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_40), term_e_17, not_null(j_40));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_40);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm u_40 = NULL;
                              u_40 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), not_null(u_40));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_2);
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
  t = x_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm i_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_99(t);
      t = s_99(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = i_17;
      {
        t = s_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_114 (ATerm))
{
  ATerm j_41 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    ATerm k_41 = NULL;
    ATerm l_41 = NULL;
    t = h_114(t);
    {
      k_41 = t;
      {
        if(((j_41 != NULL) && (j_41 != k_41)))
          _fail(k_41);
        else
          j_41 = k_41;
        {
          ATerm m_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), term_e_17);
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = (ATerm) ATempty;
              }
            {
              m_41 = t;
              if(((l_41 != NULL) && (l_41 != m_41)))
                _fail(m_41);
              else
                l_41 = m_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_41), term_e_17, (ATerm) ATinsert(CheckATermList(not_null(l_41)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm j_114 (ATerm), ATerm k_114 (ATerm))
{
  t = begin_scope_1(t, j_114);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, j_114);
      return(t);
    }
    t = restore_always_2(t, k_114, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym__3))
    {
      u_41 = ATgetArgument(t_41, 0);
      v_41 = ATgetArgument(t_41, 1);
      w_41 = ATgetArgument(t_41, 2);
      {
        ATerm a_42 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_e_16;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm d_42 = NULL;
          t = not_null(v_41);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm b_42 = NULL;
                b_42 = t;
                {
                  ATerm q_17;
                  q_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(u_41), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_42))), term_s_17);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_e_16;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = q_17;
                }
                return(t);
              }
              t = map_1(t, i_2);
              {
                t = not_null(w_41);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    d_42 = t;
                    if(((a_42 != NULL) && (a_42 != d_42)))
                      _fail(d_42);
                    else
                      a_42 = d_42;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(a_42);
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
  ATerm j_43 = NULL,k_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  j_43 = t;
  v_42 :
  if(match_cons(j_43, sym_Seq_2))
    {
      k_43 = ATgetArgument(j_43, 0);
      r_43 = ATgetArgument(j_43, 1);
      w_42 :
      if(match_cons(k_43, sym_Call_2))
        {
          o_43 = ATgetArgument(k_43, 0);
          q_43 = ATgetArgument(k_43, 1);
          x_42 :
          if(match_cons(o_43, sym_SVar_1))
            {
              p_43 = ATgetArgument(o_43, 0);
              y_42 :
              if(match_string(p_43, "mark"))
                {
                  z_42 :
                  if(((ATgetType(q_43) == AT_LIST) && ATisEmpty(q_43)))
                    {
                      a_43 :
                      if(match_cons(r_43, sym_Seq_2))
                        {
                          s_43 = ATgetArgument(r_43, 0);
                          u_43 = ATgetArgument(r_43, 1);
                          d_43 :
                          if(match_cons(s_43, sym_Match_1))
                            {
                              t_43 = ATgetArgument(s_43, 0);
                              e_43 :
                              if(match_cons(u_43, sym_Build_1))
                                {
                                  v_43 = ATgetArgument(u_43, 0);
                                  {
                                    ATerm t_17 = t;
                                    int u_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_44 = NULL,i_44 = NULL;
                                        ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
                                        t = term_w_17;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_b_18;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            j_44 = t;
                                            l_42 :
                                            if(match_cons(j_44, sym_Defined_2))
                                              {
                                                k_44 = ATgetArgument(j_44, 0);
                                                l_44 = ATgetArgument(j_44, 1);
                                                m_42 :
                                                if(match_string(k_44, "p_0"))
                                                  {
                                                    ATerm m_44 = NULL;
                                                    if(((h_44 != NULL) && (h_44 != l_44)))
                                                      _fail(l_44);
                                                    else
                                                      h_44 = l_44;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_44), not_null(t_43), not_null(v_43));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          m_44 = t;
                                                          if(((i_44 != NULL) && (i_44 != m_44)))
                                                            _fail(m_44);
                                                          else
                                                            i_44 = m_44;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_44)));
                                        LocalPopChoice(u_17);
                                      }
                                    else
                                      {
                                        t = t_17;
                                        {
                                          ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
                                          ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
                                          t = term_w_17;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_b_18;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              u_44 = t;
                                              t_42 :
                                              if(match_cons(u_44, sym_Defined_2))
                                                {
                                                  v_44 = ATgetArgument(u_44, 0);
                                                  w_44 = ATgetArgument(u_44, 1);
                                                  u_42 :
                                                  if(match_string(v_44, "f_0"))
                                                    {
                                                      ATerm x_44 = NULL;
                                                      if(((q_44 != NULL) && (q_44 != w_44)))
                                                        _fail(w_44);
                                                      else
                                                        q_44 = w_44;
                                                      {
                                                        ATerm y_44 = NULL;
                                                        t = not_null(q_44);
                                                        {
                                                          x_44 = t;
                                                          {
                                                            if(((s_44 != NULL) && (s_44 != x_44)))
                                                              _fail(x_44);
                                                            else
                                                              s_44 = x_44;
                                                            {
                                                              t = not_null(t_43);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  y_44 = t;
                                                                  {
                                                                    if(((r_44 != NULL) && (r_44 != y_44)))
                                                                      _fail(y_44);
                                                                    else
                                                                      r_44 = y_44;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_e_16;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm d_45 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm z_44 = NULL,b_45 = NULL;
                                                                          ATerm a_45 = NULL;
                                                                          a_45 = t;
                                                                          if(((z_44 != NULL) && (z_44 != a_45)))
                                                                            _fail(a_45);
                                                                          else
                                                                            z_44 = a_45;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_44));
                                                                            {
                                                                              b_45 = t;
                                                                              {
                                                                                ATerm c_18;
                                                                                c_18 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(s_44), not_null(b_45)), term_h_18);
                                                                                  {
                                                                                    ATerm p_2 (ATerm t)
                                                                                    {
                                                                                      t = term_e_16;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, p_2);
                                                                                  }
                                                                                }
                                                                                t = c_18;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, o_2);
                                                                        {
                                                                          t = not_null(v_43);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              d_45 = t;
                                                                              if(((t_44 != NULL) && (t_44 != d_45)))
                                                                                _fail(d_45);
                                                                              else
                                                                                t_44 = d_45;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, m_2, n_2);
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_44)));
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
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  y_45 = t;
  r_45 :
  if(match_cons(y_45, sym_App_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      f_46 = ATgetArgument(y_45, 1);
      s_45 :
      if(match_cons(z_45, sym_Call_2))
        {
          a_46 = ATgetArgument(z_45, 0);
          c_46 = ATgetArgument(z_45, 1);
          t_45 :
          if(match_cons(a_46, sym_SVar_1))
            {
              b_46 = ATgetArgument(a_46, 0);
              u_45 :
              if(match_string(b_46, "bottomup_1"))
                {
                  v_45 :
                  if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
                    {
                      d_46 = ATgetFirst((ATermList) c_46);
                      e_46 = (ATerm) ATgetNext((ATermList) c_46);
                      w_45 :
                      if(((ATgetType(e_46) == AT_LIST) && ATisEmpty(e_46)))
                        {
                          x_45 :
                          if(match_cons(f_46, sym_Op_2))
                            {
                              g_46 = ATgetArgument(f_46, 0);
                              h_46 = ATgetArgument(f_46, 1);
                              {
                                ATerm l_46 = NULL;
                                ATerm o_46 = NULL;
                                t = not_null(h_46);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm m_46 = NULL;
                                    m_46 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, not_null(d_46))), not_null(m_46));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    o_46 = t;
                                    if(((l_46 != NULL) && (l_46 != o_46)))
                                      _fail(o_46);
                                    else
                                      l_46 = o_46;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_46), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_46), not_null(l_46)));
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
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  v_46 = t;
  t_46 :
  if(match_cons(v_46, sym_Seq_2))
    {
      w_46 = ATgetArgument(v_46, 0);
      y_46 = ATgetArgument(v_46, 1);
      u_46 :
      if(match_cons(w_46, sym_Build_1))
        {
          x_46 = ATgetArgument(w_46, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(y_46), not_null(x_46)));
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
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  j_47 = t;
  f_47 :
  if(match_cons(j_47, sym_LChoice_2))
    {
      k_47 = ATgetArgument(j_47, 0);
      n_47 = ATgetArgument(j_47, 1);
      g_47 :
      if(match_cons(k_47, sym_LChoice_2))
        {
          l_47 = ATgetArgument(k_47, 0);
          m_47 = ATgetArgument(k_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_47), not_null(n_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_47, sym_Seq_2))
        {
          k_47 = ATgetArgument(j_47, 0);
          n_47 = ATgetArgument(j_47, 1);
          h_47 :
          if(match_cons(k_47, sym_Seq_2))
            {
              l_47 = ATgetArgument(k_47, 0);
              m_47 = ATgetArgument(k_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_47), not_null(n_47)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_47, sym_Choice_2))
            {
              k_47 = ATgetArgument(j_47, 0);
              n_47 = ATgetArgument(j_47, 1);
              i_47 :
              if(match_cons(k_47, sym_Choice_2))
                {
                  l_47 = ATgetArgument(k_47, 0);
                  m_47 = ATgetArgument(k_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_47), not_null(n_47)));
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  d_48 = t;
  b_48 :
  if(match_cons(d_48, sym_Seq_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      h_48 = ATgetArgument(d_48, 1);
      c_48 :
      if(match_cons(e_48, sym_Scope_2))
        {
          f_48 = ATgetArgument(e_48, 0);
          g_48 = ATgetArgument(e_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_48), not_null(h_48)));
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
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  r_48 = t;
  p_48 :
  if(match_cons(r_48, sym_Seq_2))
    {
      s_48 = ATgetArgument(r_48, 0);
      v_48 = ATgetArgument(r_48, 1);
      q_48 :
      if(match_cons(s_48, sym_LChoice_2))
        {
          t_48 = ATgetArgument(s_48, 0);
          u_48 = ATgetArgument(s_48, 1);
          {
            ATerm a_49 = NULL,b_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_n_18, not_null(v_48));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_o_18;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                a_49 = t;
                n_48 :
                if(match_cons(a_49, sym_Defined_1))
                  {
                    b_49 = ATgetArgument(a_49, 0);
                    o_48 :
                    if(!(match_string(b_49, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(t_48), not_null(v_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_48), not_null(v_48)));
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  i_49 = t;
  g_49 :
  if(match_cons(i_49, sym_Seq_2))
    {
      j_49 = ATgetArgument(i_49, 0);
      m_49 = ATgetArgument(i_49, 1);
      h_49 :
      if(match_cons(j_49, sym_Choice_2))
        {
          k_49 = ATgetArgument(j_49, 0);
          l_49 = ATgetArgument(j_49, 1);
          {
            ATerm r_49 = NULL,s_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_18, not_null(m_49));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_q_18;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                r_49 = t;
                e_49 :
                if(match_cons(r_49, sym_Defined_1))
                  {
                    s_49 = ATgetArgument(r_49, 0);
                    f_49 :
                    if(!(match_string(s_49, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(k_49), not_null(m_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_49), not_null(m_49)));
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
  ATerm t_2 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(u_18);
            }
          else
            {
              t = t_18;
              {
                ATerm v_18 = t;
                int a_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(a_19);
                  }
                else
                  {
                    t = v_18;
                    {
                      ATerm b_19 = t;
                      int c_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          LocalPopChoice(c_19);
                        }
                      else
                        {
                          t = b_19;
                          {
                            ATerm g_19 = t;
                            int i_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                LocalPopChoice(i_19);
                              }
                            else
                              {
                                t = g_19;
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
  t = innermost_1(t, t_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  x_49 = t;
  v_49 :
  if(match_cons(x_49, sym_Seq_2))
    {
      y_49 = ATgetArgument(x_49, 0);
      z_49 = ATgetArgument(x_49, 1);
      w_49 :
      if(match_cons(z_49, sym_Scope_2))
        {
          a_50 = ATgetArgument(z_49, 0);
          b_50 = ATgetArgument(z_49, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_49), not_null(b_50)));
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Seq_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      i_50 :
      if(match_cons(l_50, sym_LChoice_2))
        {
          m_50 = ATgetArgument(l_50, 0);
          n_50 = ATgetArgument(l_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(k_50), not_null(m_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_50), not_null(n_50)));
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
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  v_50 = t;
  t_50 :
  if(match_cons(v_50, sym_Seq_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      u_50 :
      if(match_cons(x_50, sym_Choice_2))
        {
          y_50 = ATgetArgument(x_50, 0);
          z_50 = ATgetArgument(x_50, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(w_50), not_null(y_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_50), not_null(z_50)));
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
ATerm bottomup_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, e_96);
    return(t);
  }
  t = _all(t, u_2);
  t = e_96(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm j_111 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_111(t);
        t = bottomup_1(t, v_2);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, v_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, w_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm k_51 = NULL,l_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym_Build_1))
    {
      l_51 = ATgetArgument(k_51, 0);
      {
        ATerm o_51 = NULL,q_51 = NULL;
        ATerm p_51 = NULL;
        t = SSLgetAnnotations(not_null(k_51));
        {
          p_51 = t;
          if(((o_51 != NULL) && (o_51 != p_51)))
            _fail(p_51);
          else
            o_51 = p_51;
        }
        {
          t = not_null(l_51);
          {
            ATerm s_51 = NULL;
            t = i_84(t);
            {
              q_51 = t;
              {
                ATerm t_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(q_51)), not_null(o_51));
                {
                  t_51 = t;
                  if(((s_51 != NULL) && (s_51 != t_51)))
                    _fail(t_51);
                  else
                    s_51 = t_51;
                }
                t = not_null(s_51);
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
ATerm Seq_2 (ATerm t, ATerm y_84 (ATerm), ATerm z_84 (ATerm))
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Seq_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm k_52 = NULL,m_52 = NULL;
        ATerm l_52 = NULL;
        t = SSLgetAnnotations(not_null(e_52));
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
        {
          t = not_null(f_52);
          {
            ATerm o_52 = NULL;
            t = y_84(t);
            {
              m_52 = t;
              {
                t = not_null(g_52);
                {
                  ATerm t_52 = NULL;
                  t = z_84(t);
                  {
                    o_52 = t;
                    {
                      ATerm u_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(m_52), not_null(o_52)), not_null(k_52));
                      {
                        u_52 = t;
                        if(((t_52 != NULL) && (t_52 != u_52)))
                          _fail(u_52);
                        else
                          t_52 = u_52;
                      }
                      t = not_null(t_52);
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
ATerm Match_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Match_1))
    {
      g_53 = ATgetArgument(f_53, 0);
      {
        ATerm j_53 = NULL,l_53 = NULL;
        ATerm k_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
        {
          t = not_null(g_53);
          {
            ATerm n_53 = NULL;
            t = h_84(t);
            {
              l_53 = t;
              {
                ATerm o_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_53)), not_null(j_53));
                {
                  o_53 = t;
                  if(((n_53 != NULL) && (n_53 != o_53)))
                    _fail(o_53);
                  else
                    n_53 = o_53;
                }
                t = not_null(n_53);
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
ATerm LChoice_2 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_LChoice_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm f_54 = NULL,h_54 = NULL;
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm j_54 = NULL;
            t = c_85(t);
            {
              h_54 = t;
              {
                t = not_null(b_54);
                {
                  ATerm l_54 = NULL;
                  t = d_85(t);
                  {
                    j_54 = t;
                    {
                      ATerm m_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(h_54), not_null(j_54)), not_null(f_54));
                      {
                        m_54 = t;
                        if(((l_54 != NULL) && (l_54 != m_54)))
                          _fail(m_54);
                        else
                          l_54 = m_54;
                      }
                      t = not_null(l_54);
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
ATerm Choice_2 (ATerm t, ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym_Choice_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm e_55 = NULL,g_55 = NULL;
        ATerm f_55 = NULL;
        t = SSLgetAnnotations(not_null(y_54));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        {
          t = not_null(z_54);
          {
            ATerm i_55 = NULL;
            t = a_85(t);
            {
              g_55 = t;
              {
                t = not_null(a_55);
                {
                  ATerm k_55 = NULL;
                  t = b_85(t);
                  {
                    i_55 = t;
                    {
                      ATerm l_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(g_55), not_null(i_55)), not_null(e_55));
                      {
                        l_55 = t;
                        if(((k_55 != NULL) && (k_55 != l_55)))
                          _fail(l_55);
                        else
                          k_55 = l_55;
                      }
                      t = not_null(k_55);
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
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2(t, inline_rules_0, inline_rules_0);
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = LChoice_2(t, inline_rules_0, inline_rules_0);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                {
                  ATerm b_20 = t;
                  int f_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        ATerm y_2 (ATerm t)
                        {
                          t = Match_1(t, _id);
                          return(t);
                        }
                        ATerm z_2 (ATerm t)
                        {
                          t = Build_1(t, _id);
                          return(t);
                        }
                        t = Seq_2(t, y_2, z_2);
                        return(t);
                      }
                      t = Scope_2(t, _id, x_2);
                      LocalPopChoice(f_20);
                    }
                  else
                    {
                      t = b_20;
                      {
                        ATerm h_20 = t;
                        int k_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm b_3 (ATerm t)
                              {
                                t = Match_1(t, _id);
                                return(t);
                              }
                              ATerm c_3 (ATerm t)
                              {
                                ATerm d_3 (ATerm t)
                                {
                                  t = Build_1(t, _id);
                                  return(t);
                                }
                                t = Seq_2(t, _id, d_3);
                                return(t);
                              }
                              t = Seq_2(t, b_3, c_3);
                              return(t);
                            }
                            t = Scope_2(t, _id, a_3);
                            LocalPopChoice(k_20);
                          }
                        else
                          {
                            t = h_20;
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
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      {
      }
    }
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm t_55 = NULL;
  t_55 = t;
  {
    ATerm l_20;
    l_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATmakeAppl(sym_Defined_2, term_m_20, not_null(t_55)));
      {
        ATerm e_3 (ATerm t)
        {
          t = term_b_18;
          return(t);
        }
        t = assert_1(t, e_3);
      }
    }
    t = l_20;
    {
      ATerm n_20;
      n_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATmakeAppl(sym_Defined_2, term_o_20, not_null(t_55)));
        {
          ATerm f_3 (ATerm t)
          {
            t = term_d_16;
            return(t);
          }
          t = assert_1(t, f_3);
        }
      }
      t = n_20;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  {
    ATerm p_20;
    p_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_p_18, not_null(x_55)), term_r_20);
      {
        ATerm g_3 (ATerm t)
        {
          t = term_q_18;
          return(t);
        }
        t = assert_1(t, g_3);
      }
    }
    t = p_20;
    {
      ATerm u_20;
      u_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_n_18, not_null(x_55)), term_y_20);
        {
          ATerm h_3 (ATerm t)
          {
            t = term_o_18;
            return(t);
          }
          t = assert_1(t, h_3);
        }
      }
      t = u_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  i_56 = t;
  d_56 :
  if(match_cons(i_56, sym_Call_2))
    {
      j_56 = ATgetArgument(i_56, 0);
      l_56 = ATgetArgument(i_56, 1);
      e_56 :
      if(match_cons(j_56, sym_SVar_1))
        {
          k_56 = ATgetArgument(j_56, 0);
          f_56 :
          if(match_string(k_56, "innermost_1"))
            {
              g_56 :
              if(((ATgetType(l_56) == AT_LIST) && !(ATisEmpty(l_56))))
                {
                  m_56 = ATgetFirst((ATermList) l_56);
                  n_56 = (ATerm) ATgetNext((ATermList) l_56);
                  h_56 :
                  if(((ATgetType(n_56) == AT_LIST) && ATisEmpty(n_56)))
                    {
                      {
                        ATerm p_56 = NULL,r_56 = NULL;
                        ATerm i_3 (ATerm t)
                        {
                          ATerm j_3 (ATerm t)
                          {
                            t = term_c_21;
                            return(t);
                          }
                          t = say_1(t, j_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, i_3);
                        {
                          ATerm j_21;
                          j_21 = t;
                          {
                            ATerm q_56 = NULL;
                            t = new_0(t);
                            {
                              q_56 = t;
                              if(((p_56 != NULL) && (p_56 != q_56)))
                                _fail(q_56);
                              else
                                p_56 = q_56;
                            }
                          }
                          t = j_21;
                          {
                            ATerm s_21;
                            s_21 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_56)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = s_21;
                            {
                              ATerm t_21;
                              t_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_56)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = t_21;
                              {
                                ATerm s_56 = NULL;
                                t = not_null(m_56);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    s_56 = t;
                                    if(((r_56 != NULL) && (r_56 != s_56)))
                                      _fail(s_56);
                                    else
                                      r_56 = s_56;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(p_56), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_v_15, not_null(r_56)), (ATerm) ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_56)), (ATerm) ATempty)))), term_l_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm k_3 (ATerm t)
                                        {
                                          ATerm u_21 = t;
                                          int v_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(v_21);
                                            }
                                          else
                                            {
                                              t = u_21;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, k_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm l_3 (ATerm t)
                                            {
                                              ATerm m_3 (ATerm t)
                                              {
                                                t = term_w_21;
                                                return(t);
                                              }
                                              t = say_1(t, m_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, l_3);
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
ATerm alltd_1 (ATerm t, ATerm h_98 (ATerm))
{
  ATerm w_56 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_98(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = _all(t, w_56);
      }
    return(t);
  }
  t = w_56(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm m_57 = NULL;
  ATerm z_21;
  z_21 = t;
  {
    ATerm n_57 = NULL;
    t = new_0(t);
    {
      n_57 = t;
      {
        if(((m_57 != NULL) && (m_57 != n_57)))
          _fail(n_57);
        else
          m_57 = n_57;
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_57)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = term_c_22;
                    return(t);
                  }
                  t = say_1(t, o_3);
                  return(t);
                }
                t = if_verbose2_1(t, n_3);
                _fail(t);
              }
            }
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_57 = NULL,p_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
                o_57 = t;
                z_56 :
                if(match_cons(o_57, sym_Seq_2))
                  {
                    p_57 = ATgetArgument(o_57, 0);
                    c_58 = ATgetArgument(o_57, 1);
                    a_57 :
                    if(match_cons(p_57, sym_All_1))
                      {
                        t_57 = ATgetArgument(p_57, 0);
                        b_57 :
                        if(match_cons(t_57, sym_Call_2))
                          {
                            u_57 = ATgetArgument(t_57, 0);
                            w_57 = ATgetArgument(t_57, 1);
                            c_57 :
                            if(match_cons(u_57, sym_SVar_1))
                              {
                                v_57 = ATgetArgument(u_57, 0);
                                d_57 :
                                if(match_string(v_57, "bottomup_1"))
                                  {
                                    e_57 :
                                    if(((ATgetType(w_57) == AT_LIST) && !(ATisEmpty(w_57))))
                                      {
                                        x_57 = ATgetFirst((ATermList) w_57);
                                        b_58 = (ATerm) ATgetNext((ATermList) w_57);
                                        f_57 :
                                        if(match_cons(x_57, sym_Call_2))
                                          {
                                            y_57 = ATgetArgument(x_57, 0);
                                            a_58 = ATgetArgument(x_57, 1);
                                            g_57 :
                                            if(match_cons(y_57, sym_SVar_1))
                                              {
                                                z_57 = ATgetArgument(y_57, 0);
                                                h_57 :
                                                if(((ATgetType(a_58) == AT_LIST) && ATisEmpty(a_58)))
                                                  {
                                                    i_57 :
                                                    if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                                                      {
                                                        j_57 :
                                                        if(match_cons(c_58, sym_Call_2))
                                                          {
                                                            d_58 = ATgetArgument(c_58, 0);
                                                            f_58 = ATgetArgument(c_58, 1);
                                                            k_57 :
                                                            if(match_cons(d_58, sym_SVar_1))
                                                              {
                                                                e_58 = ATgetArgument(d_58, 0);
                                                                l_57 :
                                                                if(((ATgetType(f_58) == AT_LIST) && ATisEmpty(f_58)))
                                                                  {
                                                                    {
                                                                      if(((m_57 != NULL) && (m_57 != z_57)))
                                                                        _fail(z_57);
                                                                      else
                                                                        m_57 = z_57;
                                                                      if(((m_57 != NULL) && (m_57 != e_58)))
                                                                        _fail(e_58);
                                                                      else
                                                                        m_57 = e_58;
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
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm q_3 (ATerm t)
                    {
                      t = term_f_22;
                      return(t);
                    }
                    t = debug_1(t, q_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, p_3);
                  _fail(t);
                }
              }
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  t = term_g_22;
                  return(t);
                }
                t = say_1(t, s_3);
                return(t);
              }
              t = if_verbose2_1(t, r_3);
            }
          }
        }
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  ATerm h_22;
  h_22 = t;
  {
    ATerm h_59 = NULL;
    t = new_0(t);
    {
      h_59 = t;
      {
        if(((f_59 != NULL) && (f_59 != h_59)))
          _fail(h_59);
        else
          f_59 = h_59;
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_59)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = term_w_22;
                    return(t);
                  }
                  t = say_1(t, u_3);
                  return(t);
                }
                t = if_verbose2_1(t, t_3);
                _fail(t);
              }
            }
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
                k_59 = t;
                k_58 :
                if(match_cons(k_59, sym_Call_2))
                  {
                    l_59 = ATgetArgument(k_59, 0);
                    n_59 = ATgetArgument(k_59, 1);
                    l_58 :
                    if(match_cons(l_59, sym_SVar_1))
                      {
                        m_59 = ATgetArgument(l_59, 0);
                        m_58 :
                        if(match_string(m_59, "bottomup_1"))
                          {
                            n_58 :
                            if(((ATgetType(n_59) == AT_LIST) && !(ATisEmpty(n_59))))
                              {
                                o_59 = ATgetFirst((ATermList) n_59);
                                g_60 = (ATerm) ATgetNext((ATermList) n_59);
                                o_58 :
                                if(match_cons(o_59, sym_Rec_2))
                                  {
                                    p_59 = ATgetArgument(o_59, 0);
                                    q_59 = ATgetArgument(o_59, 1);
                                    p_58 :
                                    if(match_cons(q_59, sym_LChoice_2))
                                      {
                                        r_59 = ATgetArgument(q_59, 0);
                                        f_60 = ATgetArgument(q_59, 1);
                                        q_58 :
                                        if(match_cons(r_59, sym_Seq_2))
                                          {
                                            s_59 = ATgetArgument(r_59, 0);
                                            w_59 = ATgetArgument(r_59, 1);
                                            r_58 :
                                            if(match_cons(s_59, sym_Call_2))
                                              {
                                                t_59 = ATgetArgument(s_59, 0);
                                                v_59 = ATgetArgument(s_59, 1);
                                                s_58 :
                                                if(match_cons(t_59, sym_SVar_1))
                                                  {
                                                    u_59 = ATgetArgument(t_59, 0);
                                                    t_58 :
                                                    if(((ATgetType(v_59) == AT_LIST) && ATisEmpty(v_59)))
                                                      {
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
                                                                if(match_string(y_59, "bottomup_1"))
                                                                  {
                                                                    x_58 :
                                                                    if(((ATgetType(z_59) == AT_LIST) && !(ATisEmpty(z_59))))
                                                                      {
                                                                        a_60 = ATgetFirst((ATermList) z_59);
                                                                        e_60 = (ATerm) ATgetNext((ATermList) z_59);
                                                                        y_58 :
                                                                        if(match_cons(a_60, sym_Call_2))
                                                                          {
                                                                            b_60 = ATgetArgument(a_60, 0);
                                                                            d_60 = ATgetArgument(a_60, 1);
                                                                            z_58 :
                                                                            if(match_cons(b_60, sym_SVar_1))
                                                                              {
                                                                                c_60 = ATgetArgument(b_60, 0);
                                                                                a_59 :
                                                                                if(((ATgetType(d_60) == AT_LIST) && ATisEmpty(d_60)))
                                                                                  {
                                                                                    b_59 :
                                                                                    if(((ATgetType(e_60) == AT_LIST) && ATisEmpty(e_60)))
                                                                                      {
                                                                                        c_59 :
                                                                                        if(match_cons(f_60, sym_Id_0))
                                                                                          {
                                                                                            e_59 :
                                                                                            if(((ATgetType(g_60) == AT_LIST) && ATisEmpty(g_60)))
                                                                                              {
                                                                                                {
                                                                                                  if(((g_59 != NULL) && (g_59 != p_59)))
                                                                                                    _fail(p_59);
                                                                                                  else
                                                                                                    g_59 = p_59;
                                                                                                  {
                                                                                                    if(((f_59 != NULL) && (f_59 != u_59)))
                                                                                                      _fail(u_59);
                                                                                                    else
                                                                                                      f_59 = u_59;
                                                                                                    if(((g_59 != NULL) && (g_59 != c_60)))
                                                                                                      _fail(c_60);
                                                                                                    else
                                                                                                      g_59 = c_60;
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
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                {
                  ATerm v_3 (ATerm t)
                  {
                    ATerm w_3 (ATerm t)
                    {
                      t = term_z_22;
                      return(t);
                    }
                    t = debug_1(t, w_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, v_3);
                  _fail(t);
                }
              }
            {
              ATerm x_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  t = term_a_23;
                  return(t);
                }
                t = say_1(t, y_3);
                return(t);
              }
              t = if_verbose2_1(t, x_3);
            }
          }
        }
      }
    }
  }
  t = h_22;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL;
  a_61 = t;
  m_60 :
  if(match_cons(a_61, sym_Call_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      e_61 = ATgetArgument(a_61, 1);
      n_60 :
      if(match_cons(b_61, sym_SVar_1))
        {
          d_61 = ATgetArgument(b_61, 0);
          z_60 :
          if(((ATgetType(e_61) == AT_LIST) && ATisEmpty(e_61)))
            {
              t = not_null(d_61);
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
ATerm SubsVar_2 (ATerm t, ATerm e_121 (ATerm), ATerm f_121 (ATerm))
{
  ATerm k_61 = NULL;
  ATerm m_61 = NULL,n_61 = NULL;
  k_61 = t;
  {
    ATerm o_61 = NULL;
    t = not_null(k_61);
    {
      ATerm p_61 = NULL;
      t = e_121(t);
      {
        o_61 = t;
        {
          if(((m_61 != NULL) && (m_61 != o_61)))
            _fail(o_61);
          else
            m_61 = o_61;
          {
            t = f_121(t);
            {
              p_61 = t;
              if(((n_61 != NULL) && (n_61 != p_61)))
                _fail(p_61);
              else
                n_61 = p_61;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_61), not_null(n_61));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm z_61 = NULL,f_62 = NULL,h_62 = NULL,i_62 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym__2))
    {
      f_62 = ATgetArgument(z_61, 0);
      h_62 = ATgetArgument(z_61, 1);
      {
        ATerm k_62 = NULL;
        if(((k_62 != NULL) && (k_62 != h_62)))
          _fail(h_62);
        else
          k_62 = h_62;
      }
    }
  else
    {
      if(match_cons(z_61, sym__3))
        {
          f_62 = ATgetArgument(z_61, 0);
          h_62 = ATgetArgument(z_61, 1);
          i_62 = ATgetArgument(z_61, 2);
          {
            ATerm q_62 = NULL;
            ATerm r_62 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_62), not_null(h_62));
            {
              t = zip_1(t, _id);
              {
                r_62 = t;
                if(((q_62 != NULL) && (q_62 != r_62)))
                  _fail(r_62);
                else
                  q_62 = r_62;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), not_null(i_62));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm p_120 (ATerm), ATerm q_120 (ATerm))
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  t = subs_args_0(t);
  {
    x_62 = t;
    w_62 :
    if(match_cons(x_62, sym__2))
      {
        y_62 = ATgetArgument(x_62, 0);
        z_62 = ATgetArgument(x_62, 1);
        {
          t = not_null(z_62);
          {
            ATerm z_3 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                t = not_null(y_62);
                return(t);
              }
              t = SubsVar_2(t, p_120, a_4);
              t = q_120(t);
              return(t);
            }
            t = alltd_1(t, z_3);
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
ATerm substitute_1 (ATerm t, ATerm r_120 (ATerm))
{
  t = substitute_2(t, r_120, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm d_124 (ATerm))
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        t = split_2(t, _id, d_124);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
            j_63 = t;
            e_63 :
            if(match_cons(j_63, sym__2))
              {
                k_63 = ATgetArgument(j_63, 0);
                o_63 = ATgetArgument(j_63, 1);
                f_63 :
                if(match_cons(k_63, sym_SDef_3))
                  {
                    l_63 = ATgetArgument(k_63, 0);
                    m_63 = ATgetArgument(k_63, 1);
                    n_63 = ATgetArgument(k_63, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_63), not_null(m_63), not_null(n_63));
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
          t = zip_1(t, c_4);
        }
        return(t);
      }
      t = Let_2(t, b_4, _id);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = split_2(t, _id, d_124);
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
                  s_63 = t;
                  h_63 :
                  if(match_cons(s_63, sym__2))
                    {
                      t_63 = ATgetArgument(s_63, 0);
                      w_63 = ATgetArgument(s_63, 1);
                      i_63 :
                      if(match_cons(t_63, sym_VarDec_2))
                        {
                          u_63 = ATgetArgument(t_63, 0);
                          v_63 = ATgetArgument(t_63, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_63), not_null(v_63));
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
                t = zip_1(t, e_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, d_4, _id);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm f_4 (ATerm t)
              {
                t = d_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, f_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Rec_2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      {
        ATerm o_64 = NULL,q_64 = NULL;
        ATerm p_64 = NULL;
        t = SSLgetAnnotations(not_null(i_64));
        {
          p_64 = t;
          if(((o_64 != NULL) && (o_64 != p_64)))
            _fail(p_64);
          else
            o_64 = p_64;
        }
        {
          t = not_null(j_64);
          {
            ATerm s_64 = NULL;
            t = n_85(t);
            {
              q_64 = t;
              {
                t = not_null(k_64);
                {
                  ATerm u_64 = NULL;
                  t = o_85(t);
                  {
                    s_64 = t;
                    {
                      ATerm v_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_64), not_null(s_64)), not_null(o_64));
                      {
                        v_64 = t;
                        if(((u_64 != NULL) && (u_64 != v_64)))
                          _fail(v_64);
                        else
                          u_64 = v_64;
                      }
                      t = not_null(u_64);
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
ATerm SDef_3 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  ATerm p_65 = NULL,q_65 = NULL,t_65 = NULL,u_65 = NULL;
  p_65 = t;
  o_65 :
  if(match_cons(p_65, sym_SDef_3))
    {
      q_65 = ATgetArgument(p_65, 0);
      t_65 = ATgetArgument(p_65, 1);
      u_65 = ATgetArgument(p_65, 2);
      {
        ATerm z_65 = NULL,l_66 = NULL;
        ATerm k_66 = NULL;
        t = SSLgetAnnotations(not_null(p_65));
        {
          k_66 = t;
          if(((z_65 != NULL) && (z_65 != k_66)))
            _fail(k_66);
          else
            z_65 = k_66;
        }
        {
          t = not_null(q_65);
          {
            ATerm n_66 = NULL;
            t = r_85(t);
            {
              l_66 = t;
              {
                t = not_null(t_65);
                {
                  ATerm p_66 = NULL;
                  t = s_85(t);
                  {
                    n_66 = t;
                    {
                      t = not_null(u_65);
                      {
                        ATerm r_66 = NULL;
                        t = t_85(t);
                        {
                          p_66 = t;
                          {
                            ATerm w_66 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(l_66), not_null(n_66), not_null(p_66)), not_null(z_65));
                            {
                              w_66 = t;
                              if(((r_66 != NULL) && (r_66 != w_66)))
                                _fail(w_66);
                              else
                                r_66 = w_66;
                            }
                            t = not_null(r_66);
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
ATerm Let_2 (ATerm t, ATerm p_85 (ATerm), ATerm q_85 (ATerm))
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  i_67 :
  if(match_cons(j_67, sym_Let_2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      {
        ATerm q_67 = NULL,s_67 = NULL;
        ATerm r_67 = NULL;
        t = SSLgetAnnotations(not_null(j_67));
        {
          r_67 = t;
          if(((q_67 != NULL) && (q_67 != r_67)))
            _fail(r_67);
          else
            q_67 = r_67;
        }
        {
          t = not_null(k_67);
          {
            ATerm u_67 = NULL;
            t = p_85(t);
            {
              s_67 = t;
              {
                t = not_null(l_67);
                {
                  ATerm w_67 = NULL;
                  t = q_85(t);
                  {
                    u_67 = t;
                    {
                      ATerm x_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_67), not_null(u_67)), not_null(q_67));
                      {
                        x_67 = t;
                        if(((w_67 != NULL) && (w_67 != x_67)))
                          _fail(x_67);
                        else
                          w_67 = x_67;
                      }
                      t = not_null(w_67);
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
ATerm sboundin_3 (ATerm t, ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm))
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, e_124, e_124);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, g_124, g_124, e_124);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = Rec_2(t, g_124, e_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  f_68 = t;
  e_68 :
  if(match_cons(f_68, sym_Rec_2))
    {
      g_68 = ATgetArgument(f_68, 0);
      h_68 = ATgetArgument(f_68, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  u_68 = t;
  o_68 :
  if(match_cons(u_68, sym_SDef_3))
    {
      v_68 = ATgetArgument(u_68, 0);
      w_68 = ATgetArgument(u_68, 1);
      x_68 = ATgetArgument(u_68, 2);
      {
        t = not_null(w_68);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
            d_69 = t;
            n_68 :
            if(match_cons(d_69, sym_VarDec_2))
              {
                e_69 = ATgetArgument(d_69, 0);
                f_69 = ATgetArgument(d_69, 1);
                t = not_null(e_69);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_4);
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
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  n_69 = t;
  m_69 :
  if(match_cons(n_69, sym_Let_2))
    {
      o_69 = ATgetArgument(n_69, 0);
      p_69 = ATgetArgument(n_69, 1);
      {
        t = not_null(o_69);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
            s_69 = t;
            l_69 :
            if(match_cons(s_69, sym_SDef_3))
              {
                t_69 = ATgetArgument(s_69, 0);
                u_69 = ATgetArgument(s_69, 1);
                v_69 = ATgetArgument(s_69, 2);
                t = not_null(t_69);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm d_71 = NULL,j_71 = NULL;
  d_71 = t;
  o_70 :
  if(match_cons(d_71, sym_SVar_1))
    {
      j_71 = ATgetArgument(d_71, 0);
      {
        ATerm o_71 = NULL,q_71 = NULL;
        ATerm p_71 = NULL;
        t = SSLgetAnnotations(not_null(d_71));
        {
          p_71 = t;
          if(((o_71 != NULL) && (o_71 != p_71)))
            _fail(p_71);
          else
            o_71 = p_71;
        }
        {
          t = not_null(j_71);
          {
            ATerm s_71 = NULL;
            t = m_85(t);
            {
              q_71 = t;
              {
                ATerm t_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_71)), not_null(o_71));
                {
                  t_71 = t;
                  if(((s_71 != NULL) && (s_71 != t_71)))
                    _fail(t_71);
                  else
                    s_71 = t_71;
                }
                t = not_null(s_71);
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
  ATerm i_4 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, i_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm z_123 (ATerm))
{
  t = Scope_2(t, z_123, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm d_72 = NULL,e_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym_DynamicRules_1))
    {
      e_72 = ATgetArgument(d_72, 0);
      {
        ATerm h_72 = NULL,j_72 = NULL;
        ATerm i_72 = NULL;
        t = SSLgetAnnotations(not_null(d_72));
        {
          i_72 = t;
          if(((h_72 != NULL) && (h_72 != i_72)))
            _fail(i_72);
          else
            h_72 = i_72;
        }
        {
          t = not_null(e_72);
          {
            ATerm l_72 = NULL;
            t = r_87(t);
            {
              j_72 = t;
              {
                ATerm m_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(j_72)), not_null(h_72));
                {
                  m_72 = t;
                  if(((l_72 != NULL) && (l_72 != m_72)))
                    _fail(m_72);
                  else
                    l_72 = m_72;
                }
                t = not_null(l_72);
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
ATerm Scope_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  s_73 :
  if(match_cons(t_73, sym_Scope_2))
    {
      u_73 = ATgetArgument(t_73, 0);
      v_73 = ATgetArgument(t_73, 1);
      {
        ATerm z_73 = NULL,b_74 = NULL;
        ATerm a_74 = NULL;
        t = SSLgetAnnotations(not_null(t_73));
        {
          a_74 = t;
          if(((z_73 != NULL) && (z_73 != a_74)))
            _fail(a_74);
          else
            z_73 = a_74;
        }
        {
          t = not_null(u_73);
          {
            ATerm d_74 = NULL;
            t = l_84(t);
            {
              b_74 = t;
              {
                t = not_null(v_73);
                {
                  ATerm f_74 = NULL;
                  t = m_84(t);
                  {
                    d_74 = t;
                    {
                      ATerm d_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(b_74), not_null(d_74)), not_null(z_73));
                      {
                        d_75 = t;
                        if(((f_74 != NULL) && (f_74 != d_75)))
                          _fail(d_75);
                        else
                          f_74 = d_75;
                      }
                      t = not_null(f_74);
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
ATerm tboundin_3 (ATerm t, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm))
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, c_124, a_124);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = DynamicRules_1(t, a_124);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL;
  l_75 = t;
  k_75 :
  if(match_cons(l_75, sym_DynamicRules_1))
    {
      m_75 = ATgetArgument(l_75, 0);
      {
        t = not_null(m_75);
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
  ATerm m_78 = NULL,l_79 = NULL;
  m_78 = t;
  l_78 :
  if(match_cons(m_78, sym_Var_1))
    {
      l_79 = ATgetArgument(m_78, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
  r_79 = t;
  q_79 :
  if(match_cons(r_79, sym__2))
    {
      s_79 = ATgetArgument(r_79, 0);
      t_79 = ATgetArgument(r_79, 1);
      {
        t = not_null(s_79);
        {
          ATerm x_79 (ATerm t)
          {
            ATerm p_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_79);
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                {
                  ATerm r_23 = t;
                  int s_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_4 (ATerm t)
                      {
                        t = not_null(t_79);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_106, j_4);
                      t = x_79(t);
                      LocalPopChoice(s_23);
                    }
                  else
                    {
                      t = r_23;
                      t = Cons_2(t, _id, x_79);
                    }
                }
              }
            return(t);
          }
          t = x_79(t);
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
ATerm foldr_3 (ATerm t, ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm))
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_107(t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
        c_80 = t;
        b_80 :
        if(((ATgetType(c_80) == AT_LIST) && !(ATisEmpty(c_80))))
          {
            d_80 = ATgetFirst((ATermList) c_80);
            e_80 = (ATerm) ATgetNext((ATermList) c_80);
            {
              ATerm h_80 = NULL,j_80 = NULL;
              ATerm v_23;
              v_23 = t;
              {
                ATerm i_80 = NULL;
                t = not_null(d_80);
                {
                  t = k_107(t);
                  {
                    i_80 = t;
                    if(((h_80 != NULL) && (h_80 != i_80)))
                      _fail(i_80);
                    else
                      h_80 = i_80;
                  }
                }
              }
              t = v_23;
              {
                ATerm k_80 = NULL;
                t = not_null(e_80);
                {
                  t = foldr_3(t, i_107, j_107, k_107);
                  {
                    k_80 = t;
                    if(((j_80 != NULL) && (j_80 != k_80)))
                      _fail(k_80);
                    else
                      j_80 = k_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_80), not_null(j_80));
                  t = j_107(t);
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
ATerm crush_3 (ATerm t, ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm))
{
  ATerm s_80 = NULL;
  ATerm u_80 = NULL;
  s_80 = t;
  {
    ATerm v_80 = NULL;
    ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
    t = not_null(s_80);
    {
      v_80 = t;
      {
        t = SSL_explode_term(not_null(v_80));
        {
          x_80 = t;
          r_80 :
          if(match_cons(x_80, sym__2))
            {
              y_80 = ATgetArgument(x_80, 0);
              z_80 = ATgetArgument(x_80, 1);
              if(((u_80 != NULL) && (u_80 != z_80)))
                _fail(z_80);
              else
                u_80 = z_80;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_80);
      t = foldr_3(t, g_106, h_106, i_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
  f_81 = t;
  e_81 :
  if(match_cons(f_81, sym__2))
    {
      g_81 = ATgetArgument(f_81, 0);
      h_81 = ATgetArgument(f_81, 1);
      if(((g_81 != NULL) && (g_81 != h_81)))
        _fail(h_81);
      else
        g_81 = h_81;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_106 (ATerm), ATerm u_106 (ATerm))
{
  ATerm p_81 = NULL,q_81 = NULL,r_82 = NULL;
  p_81 = t;
  o_81 :
  if(((ATgetType(p_81) == AT_LIST) && !(ATisEmpty(p_81))))
    {
      q_81 = ATgetFirst((ATermList) p_81);
      r_82 = (ATerm) ATgetNext((ATermList) p_81);
      {
        t = u_106(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm w_82 = NULL;
            w_82 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_81), not_null(w_82));
              t = t_106(t);
            }
            return(t);
          }
          t = fetch_1(t, k_4);
        }
        t = not_null(r_82);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  c_83 = t;
  b_83 :
  if(match_cons(c_83, sym__2))
    {
      d_83 = ATgetArgument(c_83, 0);
      e_83 = ATgetArgument(c_83, 1);
      {
        t = not_null(d_83);
        {
          ATerm i_83 (ATerm t)
          {
            ATerm w_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                {
                  ATerm y_23 = t;
                  int z_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 (ATerm t)
                      {
                        t = not_null(e_83);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_106, l_4);
                      t = i_83(t);
                      LocalPopChoice(z_23);
                    }
                  else
                    {
                      t = y_23;
                      t = Cons_2(t, _id, i_83);
                    }
                }
              }
            return(t);
          }
          t = i_83(t);
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
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  m_83 = t;
  k_83 :
  if(match_cons(m_83, sym__2))
    {
      n_83 = ATgetArgument(m_83, 0);
      o_83 = ATgetArgument(m_83, 1);
      l_83 :
      if(((ATgetType(o_83) == AT_LIST) && !(ATisEmpty(o_83))))
        {
          p_83 = ATgetFirst((ATermList) o_83);
          q_83 = (ATerm) ATgetNext((ATermList) o_83);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_83)), not_null(p_83)), not_null(q_83));
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
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  n_84 = t;
  j_84 :
  if(((ATgetType(n_84) == AT_LIST) && !(ATisEmpty(n_84))))
    {
      o_84 = ATgetFirst((ATermList) n_84);
      r_84 = (ATerm) ATgetNext((ATermList) n_84);
      k_84 :
      if(match_cons(o_84, sym__2))
        {
          p_84 = ATgetArgument(o_84, 0);
          q_84 = ATgetArgument(o_84, 1);
          {
            ATerm v_84 = NULL,w_84 = NULL,i_85 = NULL,w_85 = NULL;
            ATerm a_24;
            a_24 = t;
            {
              ATerm x_84 = NULL;
              ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
              t = not_null(q_84);
              {
                x_84 = t;
                {
                  t = SSL_explode_term(not_null(x_84));
                  {
                    f_85 = t;
                    y_83 :
                    if(match_cons(f_85, sym__2))
                      {
                        g_85 = ATgetArgument(f_85, 0);
                        h_85 = ATgetArgument(f_85, 1);
                        {
                          if(((v_84 != NULL) && (v_84 != g_85)))
                            _fail(g_85);
                          else
                            v_84 = g_85;
                          if(((w_84 != NULL) && (w_84 != h_85)))
                            _fail(h_85);
                          else
                            w_84 = h_85;
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
            t = a_24;
            {
              ATerm b_24;
              b_24 = t;
              {
                ATerm j_85 = NULL;
                ATerm l_85 = NULL,u_85 = NULL,v_85 = NULL;
                t = not_null(p_84);
                {
                  j_85 = t;
                  {
                    t = SSL_explode_term(not_null(j_85));
                    {
                      l_85 = t;
                      f_84 :
                      if(match_cons(l_85, sym__2))
                        {
                          u_85 = ATgetArgument(l_85, 0);
                          v_85 = ATgetArgument(l_85, 1);
                          {
                            if(((v_84 != NULL) && (v_84 != u_85)))
                              _fail(u_85);
                            else
                              v_84 = u_85;
                            if(((i_85 != NULL) && (i_85 != v_85)))
                              _fail(v_85);
                            else
                              i_85 = v_85;
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
              t = b_24;
              {
                ATerm x_85 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_85), not_null(w_84));
                {
                  t = zip_1(t, _id);
                  {
                    x_85 = t;
                    if(((w_85 != NULL) && (w_85 != x_85)))
                      _fail(x_85);
                    else
                      w_85 = x_85;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_85), not_null(r_84));
                  {
                    ATerm c_24 = t;
                    int d_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(d_24);
                      }
                    else
                      {
                        t = c_24;
                        t = conc_more_lists_0(t);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  j_86 = t;
  f_86 :
  if(((ATgetType(j_86) == AT_LIST) && !(ATisEmpty(j_86))))
    {
      k_86 = ATgetFirst((ATermList) j_86);
      n_86 = (ATerm) ATgetNext((ATermList) j_86);
      g_86 :
      if(match_cons(k_86, sym__2))
        {
          l_86 = ATgetArgument(k_86, 0);
          m_86 = ATgetArgument(k_86, 1);
          {
            ATerm p_86 = NULL;
            if(((l_86 != NULL) && (l_86 != m_86)))
              _fail(m_86);
            else
              l_86 = m_86;
            {
              if(((p_86 != NULL) && (p_86 != n_86)))
                _fail(n_86);
              else
                p_86 = n_86;
              t = not_null(p_86);
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
ATerm while_not_2 (ATerm t, ATerm m_109 (ATerm), ATerm n_109 (ATerm))
{
  ATerm r_86 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          t = n_109(t);
          t = r_86(t);
        }
      }
    return(t);
  }
  t = r_86(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm))
{
  t = p_109(t);
  t = while_not_2(t, q_109, r_109);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm u_86 = NULL;
        u_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_86));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm y_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(z_24);
                }
              else
                {
                  t = y_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, p_4);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, m_4, n_4, o_4);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm y_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_87 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_87 = NULL;
              ATerm g_25;
              g_25 = t;
              {
                ATerm b_87 = NULL;
                t = x_122(t);
                {
                  b_87 = t;
                  if(((a_87 != NULL) && (a_87 != b_87)))
                    _fail(b_87);
                  else
                    a_87 = b_87;
                }
              }
              t = g_25;
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    t = not_null(a_87);
                    return(t);
                  }
                  t = split_2(t, c_87, s_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm r_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = y_122(t, q_4, c_87, r_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, t_4, u_4, _id);
                }
              }
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              {
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, v_4, w_4, c_87);
              }
            }
        }
      }
    return(t);
  }
  t = c_87(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm h_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = h_25;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, x_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  l_87 = t;
  g_87 :
  if(match_cons(l_87, sym_LRule_1))
    {
      m_87 = ATgetArgument(l_87, 0);
      h_87 :
      if(match_cons(m_87, sym_Rule_3))
        {
          i_87 = ATgetArgument(m_87, 0);
          j_87 = ATgetArgument(m_87, 1);
          k_87 = ATgetArgument(m_87, 2);
          {
            t = not_null(i_87);
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
      if(match_cons(l_87, sym_Scope_2))
        {
          m_87 = ATgetArgument(l_87, 0);
          n_87 = ATgetArgument(l_87, 1);
          t = not_null(m_87);
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
  ATerm o_88 = NULL,p_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_Var_1))
    {
      p_88 = ATgetArgument(o_88, 0);
      {
        ATerm o_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_88 = NULL,u_88 = NULL;
            ATerm t_88 = NULL;
            t = SSLgetAnnotations(not_null(o_88));
            {
              t_88 = t;
              if(((s_88 != NULL) && (s_88 != t_88)))
                _fail(t_88);
              else
                s_88 = t_88;
            }
            {
              t = not_null(p_88);
              {
                ATerm w_88 = NULL;
                t = q_0(t);
                {
                  u_88 = t;
                  {
                    ATerm x_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_88)), not_null(s_88));
                    {
                      x_88 = t;
                      if(((w_88 != NULL) && (w_88 != x_88)))
                        _fail(x_88);
                      else
                        w_88 = x_88;
                    }
                    t = not_null(w_88);
                  }
                }
              }
            }
            LocalPopChoice(r_25);
          }
        else
          {
            t = o_25;
            {
              ATerm a_89 = NULL,c_89 = NULL;
              ATerm b_89 = NULL;
              t = SSLgetAnnotations(not_null(o_88));
              {
                b_89 = t;
                if(((a_89 != NULL) && (a_89 != b_89)))
                  _fail(b_89);
                else
                  a_89 = b_89;
              }
              {
                t = not_null(p_88);
                {
                  ATerm e_89 = NULL;
                  t = q_0(t);
                  {
                    c_89 = t;
                    {
                      ATerm f_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_89)), not_null(a_89));
                      {
                        f_89 = t;
                        if(((e_89 != NULL) && (e_89 != f_89)))
                          _fail(f_89);
                        else
                          e_89 = f_89;
                      }
                      t = not_null(e_89);
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
ATerm DistBinding_2 (ATerm t, ATerm r_121 (ATerm), ATerm s_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
  s_89 = t;
  r_89 :
  if(match_cons(s_89, sym__3))
    {
      t_89 = ATgetArgument(s_89, 0);
      u_89 = ATgetArgument(s_89, 1);
      v_89 = ATgetArgument(s_89, 2);
      {
        t = not_null(t_89);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm z_89 = NULL;
            z_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_89), not_null(v_89));
              t = r_121(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm b_90 = NULL;
            b_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_90), not_null(u_89));
              t = r_121(t);
            }
            return(t);
          }
          t = s_121(t, y_4, z_4, _id);
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
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
  i_90 = t;
  h_90 :
  if(match_cons(i_90, sym__2))
    {
      j_90 = ATgetArgument(i_90, 0);
      k_90 = ATgetArgument(i_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_90)), not_null(j_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL;
  s_90 = t;
  p_90 :
  if(match_cons(s_90, sym__2))
    {
      t_90 = ATgetArgument(s_90, 0);
      w_90 = ATgetArgument(s_90, 1);
      q_90 :
      if(((ATgetType(t_90) == AT_LIST) && !(ATisEmpty(t_90))))
        {
          u_90 = ATgetFirst((ATermList) t_90);
          v_90 = (ATerm) ATgetNext((ATermList) t_90);
          r_90 :
          if(((ATgetType(w_90) == AT_LIST) && !(ATisEmpty(w_90))))
            {
              x_90 = ATgetFirst((ATermList) w_90);
              y_90 = (ATerm) ATgetNext((ATermList) w_90);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_90), not_null(x_90)), (ATerm) ATmakeAppl(sym__2, not_null(v_90), not_null(y_90)));
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
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
  i_91 = t;
  f_91 :
  if(match_cons(i_91, sym__2))
    {
      j_91 = ATgetArgument(i_91, 0);
      k_91 = ATgetArgument(i_91, 1);
      g_91 :
      if(((ATgetType(j_91) == AT_LIST) && ATisEmpty(j_91)))
        {
          h_91 :
          if(((ATgetType(k_91) == AT_LIST) && ATisEmpty(k_91)))
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
ATerm genzip_4 (ATerm t, ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm))
{
  ATerm m_91 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_102(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          t = u_102(t);
          {
            t = _2(t, w_102, m_91);
            t = v_102(t);
          }
        }
      }
    return(t);
  }
  t = m_91(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm y_102 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, y_102);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm l_121 (ATerm), ATerm m_121 (ATerm, ATerm (ATerm)))
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
  u_91 = t;
  t_91 :
  if(match_cons(u_91, sym__2))
    {
      v_91 = ATgetArgument(u_91, 0);
      w_91 = ATgetArgument(u_91, 1);
      {
        ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,h_92 = NULL;
        ATerm a_26;
        a_26 = t;
        {
          ATerm c_92 = NULL;
          t = not_null(v_91);
          {
            ATerm d_92 = NULL;
            t = l_121(t);
            {
              c_92 = t;
              {
                if(((z_91 != NULL) && (z_91 != c_92)))
                  _fail(c_92);
                else
                  z_91 = c_92;
                {
                  ATerm e_92 = NULL,g_92 = NULL;
                  t = map_1(t, new_0);
                  {
                    d_92 = t;
                    {
                      if(((a_92 != NULL) && (a_92 != d_92)))
                        _fail(d_92);
                      else
                        a_92 = d_92;
                      {
                        ATerm f_92 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_91), not_null(a_92));
                        {
                          t = zip_1(t, _id);
                          {
                            f_92 = t;
                            if(((e_92 != NULL) && (e_92 != f_92)))
                              _fail(f_92);
                            else
                              e_92 = f_92;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_92), not_null(w_91));
                          {
                            ATerm b_26 = t;
                            int k_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(k_26);
                              }
                            else
                              {
                                t = b_26;
                                t = conc_more_lists_0(t);
                              }
                            {
                              g_92 = t;
                              if(((b_92 != NULL) && (b_92 != g_92)))
                                _fail(g_92);
                              else
                                b_92 = g_92;
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
        t = a_26;
        {
          ATerm i_92 = NULL;
          t = not_null(v_91);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(a_92);
              return(t);
            }
            t = m_121(t, a_5);
            {
              i_92 = t;
              if(((h_92 != NULL) && (h_92 != i_92)))
                _fail(i_92);
              else
                h_92 = i_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(h_92), not_null(w_91), not_null(b_92));
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
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  s_92 = t;
  q_92 :
  if(match_cons(s_92, sym__2))
    {
      t_92 = ATgetArgument(s_92, 0);
      u_92 = ATgetArgument(s_92, 1);
      r_92 :
      if(((ATgetType(u_92) == AT_LIST) && !(ATisEmpty(u_92))))
        {
          v_92 = ATgetFirst((ATermList) u_92);
          w_92 = (ATerm) ATgetNext((ATermList) u_92);
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_92), not_null(w_92));
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
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  e_93 = t;
  b_93 :
  if(match_cons(e_93, sym__2))
    {
      f_93 = ATgetArgument(e_93, 0);
      g_93 = ATgetArgument(e_93, 1);
      c_93 :
      if(((ATgetType(g_93) == AT_LIST) && !(ATisEmpty(g_93))))
        {
          h_93 = ATgetFirst((ATermList) g_93);
          k_93 = (ATerm) ATgetNext((ATermList) g_93);
          d_93 :
          if(match_cons(h_93, sym__2))
            {
              i_93 = ATgetArgument(h_93, 0);
              j_93 = ATgetArgument(h_93, 1);
              {
                ATerm m_93 = NULL;
                if(((f_93 != NULL) && (f_93 != i_93)))
                  _fail(i_93);
                else
                  f_93 = i_93;
                {
                  if(((m_93 != NULL) && (m_93 != j_93)))
                    _fail(j_93);
                  else
                    m_93 = j_93;
                  t = not_null(m_93);
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
  ATerm l_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = l_26;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm w_121 (ATerm, ATerm (ATerm)))
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  q_93 :
  if(match_cons(r_93, sym__2))
    {
      s_93 = ATgetArgument(r_93, 0);
      t_93 = ATgetArgument(r_93, 1);
      {
        t = not_null(s_93);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(t_93);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = w_121(t, b_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  a_94 = t;
  z_93 :
  if(match_cons(a_94, sym__2))
    {
      b_94 = ATgetArgument(a_94, 0);
      c_94 = ATgetArgument(a_94, 1);
      {
        t = not_null(b_94);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm f_94 = NULL;
            f_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_94), not_null(c_94));
              t = k_112(t);
            }
            return(t);
          }
          t = _all(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm u_111 (ATerm))
{
  ATerm j_94 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_111(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = all_dist_1(t, j_94);
      }
    return(t);
  }
  t = j_94(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm g_121 (ATerm, ATerm (ATerm)), ATerm h_121 (ATerm), ATerm i_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_121 (ATerm, ATerm (ATerm)))
{
  ATerm l_94 = NULL;
  l_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_94), (ATerm) ATempty);
    {
      ATerm o_94 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm s_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, g_121);
              LocalPopChoice(x_26);
            }
          else
            {
              t = s_26;
              {
                t = RnBinding_2(t, h_121, j_121);
                t = DistBinding_2(t, o_94, i_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = o_94(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm p_94 (ATerm t, ATerm q_94 (ATerm))
  {
    t = Scope_2(t, q_94, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, p_94);
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
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  s_94 :
  if(((ATgetType(t_94) == AT_LIST) && !(ATisEmpty(t_94))))
    {
      u_94 = ATgetFirst((ATermList) t_94);
      v_94 = (ATerm) ATgetNext((ATermList) t_94);
      t = not_null(u_94);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_95 = NULL,d_95 = NULL,e_95 = NULL;
  a_95 = t;
  z_94 :
  if(match_cons(a_95, sym__2))
    {
      d_95 = ATgetArgument(a_95, 0);
      e_95 = ATgetArgument(a_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_95), not_null(e_95));
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
ATerm rewrite_1 (ATerm t, ATerm n_114 (ATerm))
{
  ATerm k_95 = NULL;
  ATerm m_95 = NULL;
  k_95 = t;
  {
    ATerm n_95 = NULL;
    t = term_y_26;
    {
      t = n_114(t);
      {
        n_95 = t;
        if(((m_95 != NULL) && (m_95 != n_95)))
          _fail(n_95);
        else
          m_95 = n_95;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_95), not_null(k_95));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm b_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  b_96 = t;
  z_95 :
  if(match_cons(b_96, sym_Call_2))
    {
      f_96 = ATgetArgument(b_96, 0);
      h_96 = ATgetArgument(b_96, 1);
      a_96 :
      if(match_cons(f_96, sym_SVar_1))
        {
          g_96 = ATgetArgument(f_96, 0);
          {
            ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,x_96 = NULL;
            ATerm z_26;
            z_26 = t;
            {
              ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_96)), (ATerm) ATinsert(ATempty, term_w_15));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_a_27;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  p_96 = t;
                  u_95 :
                  if(match_cons(p_96, sym_Defined_3))
                    {
                      q_96 = ATgetArgument(p_96, 0);
                      r_96 = ATgetArgument(p_96, 1);
                      s_96 = ATgetArgument(p_96, 2);
                      v_95 :
                      if(match_string(q_96, "b_0"))
                        {
                          ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
                          if(((l_96 != NULL) && (l_96 != r_96)))
                            _fail(r_96);
                          else
                            l_96 = r_96;
                          {
                            if(((m_96 != NULL) && (m_96 != s_96)))
                              _fail(s_96);
                            else
                              m_96 = s_96;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_96), not_null(l_96), not_null(m_96));
                              {
                                t = strename_0(t);
                                {
                                  t_96 = t;
                                  t_95 :
                                  if(match_cons(t_96, sym_SDef_3))
                                    {
                                      u_96 = ATgetArgument(t_96, 0);
                                      v_96 = ATgetArgument(t_96, 1);
                                      w_96 = ATgetArgument(t_96, 2);
                                      {
                                        if(((g_96 != NULL) && (g_96 != u_96)))
                                          _fail(u_96);
                                        else
                                          g_96 = u_96;
                                        {
                                          if(((n_96 != NULL) && (n_96 != v_96)))
                                            _fail(v_96);
                                          else
                                            n_96 = v_96;
                                          if(((o_96 != NULL) && (o_96 != w_96)))
                                            _fail(w_96);
                                          else
                                            o_96 = w_96;
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
            t = z_26;
            {
              ATerm c_97 = NULL;
              t = not_null(n_96);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
                  y_96 = t;
                  x_95 :
                  if(match_cons(y_96, sym_VarDec_2))
                    {
                      z_96 = ATgetArgument(y_96, 0);
                      a_97 = ATgetArgument(y_96, 1);
                      t = not_null(z_96);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  c_97 = t;
                  if(((x_96 != NULL) && (x_96 != c_97)))
                    _fail(c_97);
                  else
                    x_96 = c_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_96), not_null(h_96), not_null(o_96));
                t = substitute_2(t, IsSVar_0, _id);
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
  ATerm p_97 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm q_97 = NULL;
    t = new_0(t);
    {
      q_97 = t;
      {
        if(((p_97 != NULL) && (p_97 != q_97)))
          _fail(q_97);
        else
          p_97 = q_97;
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_97)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_k_27;
                    return(t);
                  }
                  t = say_1(t, i_5);
                  return(t);
                }
                t = if_verbose2_1(t, h_5);
                _fail(t);
              }
            }
          {
            ATerm l_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_97 = NULL,s_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
                r_97 = t;
                k_97 :
                if(match_cons(r_97, sym_LChoice_2))
                  {
                    s_97 = ATgetArgument(r_97, 0);
                    y_97 = ATgetArgument(r_97, 1);
                    l_97 :
                    if(match_cons(s_97, sym_Call_2))
                      {
                        v_97 = ATgetArgument(s_97, 0);
                        x_97 = ATgetArgument(s_97, 1);
                        m_97 :
                        if(match_cons(v_97, sym_SVar_1))
                          {
                            w_97 = ATgetArgument(v_97, 0);
                            n_97 :
                            if(((ATgetType(x_97) == AT_LIST) && ATisEmpty(x_97)))
                              {
                                o_97 :
                                if(match_cons(y_97, sym_Id_0))
                                  {
                                    if(((p_97 != NULL) && (p_97 != w_97)))
                                      _fail(w_97);
                                    else
                                      p_97 = w_97;
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
                LocalPopChoice(p_27);
              }
            else
              {
                t = l_27;
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_5 (ATerm t)
                    {
                      t = term_r_27;
                      return(t);
                    }
                    t = debug_1(t, k_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, j_5);
                  _fail(t);
                }
              }
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  t = term_u_27;
                  return(t);
                }
                t = say_1(t, m_5);
                return(t);
              }
              t = if_verbose2_1(t, l_5);
            }
          }
        }
      }
    }
  }
  t = b_27;
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
ATerm assert_1 (ATerm t, ATerm l_114 (ATerm))
{
  ATerm g_98 = NULL,j_98 = NULL,k_98 = NULL;
  g_98 = t;
  f_98 :
  if(match_cons(g_98, sym__2))
    {
      j_98 = ATgetArgument(g_98, 0);
      k_98 = ATgetArgument(g_98, 1);
      {
        ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
        ATerm v_27;
        v_27 = t;
        {
          ATerm q_98 = NULL;
          ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
          t = l_114(t);
          {
            q_98 = t;
            {
              if(((n_98 != NULL) && (n_98 != q_98)))
                _fail(q_98);
              else
                n_98 = q_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_98), not_null(j_98), not_null(k_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_27 = t;
                    int x_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_98), term_e_17);
                        t = table_get_0(t);
                        LocalPopChoice(x_27);
                      }
                    else
                      {
                        t = w_27;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_98 = t;
                      e_98 :
                      if(((ATgetType(r_98) == AT_LIST) && !(ATisEmpty(r_98))))
                        {
                          s_98 = ATgetFirst((ATermList) r_98);
                          t_98 = (ATerm) ATgetNext((ATermList) r_98);
                          {
                            if(((o_98 != NULL) && (o_98 != s_98)))
                              _fail(s_98);
                            else
                              o_98 = s_98;
                            {
                              if(((p_98 != NULL) && (p_98 != t_98)))
                                _fail(t_98);
                              else
                                p_98 = t_98;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_98), term_e_17, (ATerm) ATinsert(CheckATermList(not_null(p_98)), (ATerm) ATinsert(CheckATermList(not_null(o_98)), not_null(j_98))));
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
        t = v_27;
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
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  z_98 = t;
  y_98 :
  if(match_cons(z_98, sym_SDef_3))
    {
      a_99 = ATgetArgument(z_98, 0);
      b_99 = ATgetArgument(z_98, 1);
      c_99 = ATgetArgument(z_98, 2);
      {
        ATerm y_27;
        y_27 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_99)), (ATerm) ATinsert(ATempty, term_w_15)), (ATerm) ATmakeAppl(sym_Defined_3, term_z_27, not_null(b_99), not_null(c_99)));
          {
            ATerm n_5 (ATerm t)
            {
              t = term_a_27;
              return(t);
            }
            t = assert_1(t, n_5);
          }
        }
        t = y_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm n_99 = NULL,o_99 = NULL;
  n_99 = t;
  m_99 :
  if(match_cons(n_99, sym_Strategies_1))
    {
      o_99 = ATgetArgument(n_99, 0);
      {
        ATerm t_99 = NULL,x_99 = NULL;
        ATerm u_99 = NULL;
        t = SSLgetAnnotations(not_null(n_99));
        {
          u_99 = t;
          if(((t_99 != NULL) && (t_99 != u_99)))
            _fail(u_99);
          else
            t_99 = u_99;
        }
        {
          t = not_null(o_99);
          {
            ATerm z_99 = NULL;
            t = v_86(t);
            {
              x_99 = t;
              {
                ATerm a_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(x_99)), not_null(t_99));
                {
                  a_100 = t;
                  if(((z_99 != NULL) && (z_99 != a_100)))
                    _fail(a_100);
                  else
                    z_99 = a_100;
                }
                t = not_null(z_99);
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
ATerm Signature_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm k_100 = NULL,l_100 = NULL;
  k_100 = t;
  j_100 :
  if(match_cons(k_100, sym_Signature_1))
    {
      l_100 = ATgetArgument(k_100, 0);
      {
        ATerm o_100 = NULL,r_100 = NULL;
        ATerm p_100 = NULL;
        t = SSLgetAnnotations(not_null(k_100));
        {
          p_100 = t;
          if(((o_100 != NULL) && (o_100 != p_100)))
            _fail(p_100);
          else
            o_100 = p_100;
        }
        {
          t = not_null(l_100);
          {
            ATerm v_100 = NULL;
            t = s_86(t);
            {
              r_100 = t;
              {
                ATerm w_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(r_100)), not_null(o_100));
                {
                  w_100 = t;
                  if(((v_100 != NULL) && (v_100 != w_100)))
                    _fail(w_100);
                  else
                    v_100 = w_100;
                }
                t = not_null(v_100);
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
ATerm Specification_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm k_101 = NULL,l_101 = NULL;
  k_101 = t;
  j_101 :
  if(match_cons(k_101, sym_Specification_1))
    {
      l_101 = ATgetArgument(k_101, 0);
      {
        ATerm o_101 = NULL,q_101 = NULL;
        ATerm p_101 = NULL;
        t = SSLgetAnnotations(not_null(k_101));
        {
          p_101 = t;
          if(((o_101 != NULL) && (o_101 != p_101)))
            _fail(p_101);
          else
            o_101 = p_101;
        }
        {
          t = not_null(l_101);
          {
            ATerm s_101 = NULL;
            t = x_86(t);
            {
              q_101 = t;
              {
                ATerm t_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(q_101)), not_null(o_101));
                {
                  t_101 = t;
                  if(((s_101 != NULL) && (s_101 != t_101)))
                    _fail(t_101);
                  else
                    s_101 = t_101;
                }
                t = not_null(s_101);
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
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, s_5);
        return(t);
      }
      t = Cons_2(t, r_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
    return(t);
  }
  t = Specification_1(t, o_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
  e_102 = t;
  d_102 :
  if(match_cons(e_102, sym__2))
    {
      f_102 = ATgetArgument(e_102, 0);
      g_102 = ATgetArgument(e_102, 1);
      {
        ATerm k_102 = NULL,m_102 = NULL;
        ATerm l_102 = NULL;
        t = SSLgetAnnotations(not_null(e_102));
        {
          l_102 = t;
          if(((k_102 != NULL) && (k_102 != l_102)))
            _fail(l_102);
          else
            k_102 = l_102;
        }
        {
          t = not_null(f_102);
          {
            ATerm o_102 = NULL;
            t = s_82(t);
            {
              m_102 = t;
              {
                t = not_null(g_102);
                {
                  ATerm q_102 = NULL;
                  t = t_82(t);
                  {
                    o_102 = t;
                    {
                      ATerm r_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_102), not_null(o_102)), not_null(k_102));
                      {
                        r_102 = t;
                        if(((q_102 != NULL) && (q_102 != r_102)))
                          _fail(r_102);
                        else
                          q_102 = r_102;
                      }
                      t = not_null(q_102);
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
  ATerm g_103 = NULL;
  ATerm a_28;
  a_28 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm h_103 = NULL,i_103 = NULL;
      h_103 = t;
      f_103 :
      if(match_cons(h_103, sym_Program_1))
        {
          i_103 = ATgetArgument(h_103, 0);
          if(((g_103 != NULL) && (g_103 != i_103)))
            _fail(i_103);
          else
            g_103 = i_103;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_28), not_null(g_103)), term_b_28));
      {
        t = printnl_0(t);
        {
          t = term_d_28;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_28;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  l_103 :
  if(match_cons(m_103, sym__2))
    {
      n_103 = ATgetArgument(m_103, 0);
      o_103 = ATgetArgument(m_103, 1);
      {
        ATerm e_28;
        e_28 = t;
        t = SSL_printnl(not_null(n_103), not_null(o_103));
        t = e_28;
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
  ATerm t_103 = NULL;
  t_103 = t;
  t = SSL_implode_string(not_null(t_103));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
        y_103 = t;
        x_103 :
        if(((ATgetType(y_103) == AT_LIST) && !(ATisEmpty(y_103))))
          {
            z_103 = ATgetFirst((ATermList) y_103);
            a_104 = (ATerm) ATgetNext((ATermList) y_103);
            {
              t = not_null(z_103);
              {
                ATerm u_5 (ATerm t)
                {
                  t = not_null(a_104);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_5);
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
  ATerm k_104 = NULL;
  ATerm m_104 = NULL;
  k_104 = t;
  {
    ATerm n_104 = NULL;
    ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
    t = not_null(k_104);
    {
      n_104 = t;
      {
        t = SSL_explode_term(not_null(n_104));
        {
          p_104 = t;
          i_104 :
          if(match_cons(p_104, sym__2))
            {
              q_104 = ATgetArgument(p_104, 0);
              r_104 = ATgetArgument(p_104, 1);
              j_104 :
              if(match_string(q_104, ""))
                {
                  if(((m_104 != NULL) && (m_104 != r_104)))
                    _fail(r_104);
                  else
                    m_104 = r_104;
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
      t = not_null(m_104);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_101 (ATerm))
{
  ATerm v_104 (ATerm t)
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_104);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          t = Nil_0(t);
          t = h_101(t);
        }
      }
    return(t);
  }
  t = v_104(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
  y_104 = t;
  x_104 :
  if(match_cons(y_104, sym__2))
    {
      z_104 = ATgetArgument(y_104, 0);
      a_105 = ATgetArgument(y_104, 1);
      {
        t = not_null(z_104);
        {
          ATerm v_5 (ATerm t)
          {
            t = not_null(a_105);
            return(t);
          }
          t = at_end_1(t, v_5);
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
  ATerm r_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = r_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_explode_string(not_null(f_105));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm v_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = v_28;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_105 = NULL;
  j_105 = t;
  t = SSL_is_string(not_null(j_105));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              ATerm d_29 = t;
              int e_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_29);
                }
              else
                {
                  t = d_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_5);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL;
              s_105 = t;
              r_105 :
              if(match_cons(s_105, sym_Path_1))
                {
                  t_105 = ATgetArgument(s_105, 0);
                  t = not_null(t_105);
                }
              else
                {
                  if(match_cons(s_105, sym_Var_1))
                    {
                      t_105 = ATgetArgument(s_105, 0);
                      {
                        t = not_null(t_105);
                        {
                          ATerm f_29 = t;
                          int n_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_29);
                            }
                          else
                            {
                              t = f_29;
                              {
                                ATerm x_5 (ATerm t)
                                {
                                  t = term_o_29;
                                  return(t);
                                }
                                t = debug_1(t, x_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_105, sym_Prefix_2))
                        {
                          t_105 = ATgetArgument(s_105, 0);
                          u_105 = ATgetArgument(s_105, 1);
                          {
                            ATerm z_105 = NULL,b_106 = NULL;
                            ATerm p_29;
                            p_29 = t;
                            {
                              ATerm a_106 = NULL;
                              t = not_null(t_105);
                              {
                                t = eval_config_0(t);
                                {
                                  a_106 = t;
                                  if(((z_105 != NULL) && (z_105 != a_106)))
                                    _fail(a_106);
                                  else
                                    z_105 = a_106;
                                }
                              }
                            }
                            t = p_29;
                            {
                              ATerm c_106 = NULL;
                              t = not_null(u_105);
                              {
                                t = eval_config_0(t);
                                {
                                  c_106 = t;
                                  if(((b_106 != NULL) && (b_106 != c_106)))
                                    _fail(c_106);
                                  else
                                    b_106 = c_106;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_105), not_null(b_106));
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
  ATerm w_106 = NULL;
  w_106 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_29, not_null(w_106));
    {
      t = table_get_0(t);
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_29;
              t_29 = t;
              {
                ATerm y_106 = NULL;
                ATerm z_106 = NULL;
                z_106 = t;
                if(((y_106 != NULL) && (y_106 != z_106)))
                  _fail(z_106);
                else
                  y_106 = z_106;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_29, not_null(w_106), not_null(y_106));
                  t = table_put_0(t);
                }
              }
              t = t_29;
            }
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,l_107 = NULL;
  e_107 = t;
  d_107 :
  if(match_cons(e_107, sym__2))
    {
      f_107 = ATgetArgument(e_107, 0);
      l_107 = ATgetArgument(e_107, 1);
      t = SSL_WriteToTextFile(not_null(f_107), not_null(l_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL;
  r_107 = t;
  q_107 :
  if(match_cons(r_107, sym__2))
    {
      s_107 = ATgetArgument(r_107, 0);
      t_107 = ATgetArgument(r_107, 1);
      t = SSL_WriteToBinaryFile(not_null(s_107), not_null(t_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_108 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 (ATerm t)
          {
            ATerm c_108 = NULL,d_108 = NULL;
            c_108 = t;
            y_107 :
            if(match_cons(c_108, sym_Output_1))
              {
                d_108 = ATgetArgument(c_108, 0);
                if(((b_108 != NULL) && (b_108 != d_108)))
                  _fail(d_108);
                else
                  b_108 = d_108;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_5);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm e_108 = NULL;
            t = term_y_29;
            {
              e_108 = t;
              if(((b_108 != NULL) && (b_108 != e_108)))
                _fail(e_108);
              else
                b_108 = e_108;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_5, _id);
  }
  t = u_29;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = not_null(b_108);
        return(t);
      }
      t = split_2(t, b_6, _id);
      return(t);
    }
    t = _2(t, _id, a_6);
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm d_6 (ATerm t)
            {
              ATerm f_108 = NULL;
              f_108 = t;
              a_108 :
              if(!(match_cons(f_108, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_6);
            return(t);
          }
          t = _2(t, c_6, WriteToBinaryFile_0);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_115 (ATerm))
{
  ATerm l_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  ATerm h_30;
  h_30 = t;
  t = dtime_0(t);
  t = h_30;
  {
    t = w_115(t);
    {
      ATerm p_30;
      p_30 = t;
      {
        ATerm m_108 = NULL;
        t = dtime_0(t);
        {
          m_108 = t;
          if(((l_108 != NULL) && (l_108 != m_108)))
            _fail(m_108);
          else
            l_108 = m_108;
        }
      }
      t = p_30;
      {
        n_108 = t;
        k_108 :
        if(match_cons(n_108, sym__2))
          {
            o_108 = ATgetArgument(n_108, 0);
            p_108 = ATgetArgument(n_108, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_108)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_108))), not_null(p_108));
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
ATerm debug_1 (ATerm t, ATerm s_114 (ATerm))
{
  ATerm q_30;
  q_30 = t;
  {
    ATerm a_109 = NULL,c_109 = NULL;
    ATerm r_30;
    r_30 = t;
    {
      ATerm b_109 = NULL;
      t = s_114(t);
      {
        b_109 = t;
        if(((a_109 != NULL) && (a_109 != b_109)))
          _fail(b_109);
        else
          a_109 = b_109;
      }
    }
    t = r_30;
    {
      ATerm d_109 = NULL;
      d_109 = t;
      if(((c_109 != NULL) && (c_109 != d_109)))
        _fail(d_109);
      else
        c_109 = d_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_109)), not_null(a_109)));
        t = printnl_0(t);
      }
    }
  }
  t = q_30;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_109 = NULL;
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_109 = NULL;
      i_109 = t;
      {
        if(((h_109 != NULL) && (h_109 != i_109)))
          _fail(i_109);
        else
          h_109 = i_109;
        t = SSL_ReadFromFile(not_null(h_109));
      }
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm e_6 (ATerm t)
        {
          t = term_r_31;
          return(t);
        }
        t = debug_1(t, e_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  ATerm s_109 = NULL,u_109 = NULL;
  ATerm s_31;
  s_31 = t;
  {
    ATerm t_109 = NULL;
    t = v_99(t);
    {
      t_109 = t;
      if(((s_109 != NULL) && (s_109 != t_109)))
        _fail(t_109);
      else
        s_109 = t_109;
    }
  }
  t = s_31;
  {
    ATerm v_109 = NULL;
    t = w_99(t);
    {
      v_109 = t;
      if(((u_109 != NULL) && (u_109 != v_109)))
        _fail(v_109);
      else
        u_109 = v_109;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_109), not_null(u_109));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_110 = NULL;
  ATerm t_31;
  t_31 = t;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 (ATerm t)
        {
          ATerm c_110 = NULL,d_110 = NULL;
          c_110 = t;
          z_109 :
          if(match_cons(c_110, sym_Input_1))
            {
              d_110 = ATgetArgument(c_110, 0);
              if(((b_110 != NULL) && (b_110 != d_110)))
                _fail(d_110);
              else
                b_110 = d_110;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, f_6);
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          ATerm e_110 = NULL;
          t = term_w_31;
          {
            e_110 = t;
            if(((b_110 != NULL) && (b_110 != e_110)))
              _fail(e_110);
            else
              b_110 = e_110;
          }
        }
      }
  }
  t = t_31;
  {
    ATerm g_6 (ATerm t)
    {
      t = not_null(b_110);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm i_110 = NULL;
    i_110 = t;
    h_110 :
    if(!(match_string(i_110, "-v")))
      {
        if(!(match_string(i_110, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_y_31;
    t = set_config_0(t);
    t = term_z_31;
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_d_32;
    return(t);
  }
  t = Option_3(t, h_6, i_6, j_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm l_110 = NULL;
    l_110 = t;
    j_110 :
    if(!(match_string(l_110, "-k")))
      {
        if(!(match_string(l_110, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm e_32;
    e_32 = t;
    {
      ATerm m_110 = NULL;
      ATerm n_110 = NULL;
      t = string_to_int_0(t);
      {
        n_110 = t;
        if(((m_110 != NULL) && (m_110 != n_110)))
          _fail(n_110);
        else
          m_110 = n_110;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(m_110));
        t = set_config_0(t);
      }
    }
    t = e_32;
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_g_32;
    return(t);
  }
  t = ArgOption_3(t, k_6, l_6, m_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_110 = NULL;
  q_110 = t;
  t = SSL_string_to_int(not_null(q_110));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6 (ATerm t)
      {
        ATerm y_110 = NULL;
        y_110 = t;
        t_110 :
        if(!(match_string(y_110, "-S")))
          {
            if(!(match_string(y_110, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_f_33;
        t = set_config_0(t);
        t = term_g_33;
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = term_h_33;
        return(t);
      }
      t = Option_3(t, n_6, o_6, p_6);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 (ATerm t)
            {
              ATerm z_110 = NULL;
              z_110 = t;
              u_110 :
              if(!(match_string(z_110, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_6 (ATerm t)
            {
              ATerm c_111 = NULL;
              ATerm k_33;
              k_33 = t;
              {
                ATerm a_111 = NULL;
                ATerm b_111 = NULL;
                t = string_to_int_0(t);
                {
                  b_111 = t;
                  if(((a_111 != NULL) && (a_111 != b_111)))
                    _fail(b_111);
                  else
                    a_111 = b_111;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(a_111));
                  t = set_config_0(t);
                }
              }
              t = k_33;
              {
                ATerm d_111 = NULL;
                d_111 = t;
                if(((c_111 != NULL) && (c_111 != d_111)))
                  _fail(d_111);
                else
                  c_111 = d_111;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_111));
              }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              t = term_l_33;
              return(t);
            }
            t = ArgOption_3(t, r_6, s_6, t_6);
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm e_111 = NULL;
                e_111 = t;
                x_110 :
                if(!(match_string(e_111, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_6 (ATerm t)
              {
                t = term_n_33;
                t = set_config_0(t);
                t = term_o_33;
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                t = term_p_33;
                return(t);
              }
              t = Option_3(t, u_6, v_6, w_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm m_111 = NULL;
    m_111 = t;
    h_111 :
    if(!(match_string(m_111, "-o")))
      {
        if(!(match_string(m_111, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm p_111 = NULL;
    ATerm u_33;
    u_33 = t;
    {
      ATerm n_111 = NULL;
      ATerm o_111 = NULL;
      o_111 = t;
      if(((n_111 != NULL) && (n_111 != o_111)))
        _fail(o_111);
      else
        n_111 = o_111;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_33, not_null(n_111));
        t = set_config_0(t);
      }
    }
    t = u_33;
    {
      ATerm q_111 = NULL;
      q_111 = t;
      if(((p_111 != NULL) && (p_111 != q_111)))
        _fail(q_111);
      else
        p_111 = q_111;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_111));
    }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_x_33;
    return(t);
  }
  t = ArgOption_3(t, x_6, y_6, z_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm a_7 (ATerm t)
        {
          ATerm w_111 = NULL;
          w_111 = t;
          t_111 :
          if(!(match_string(w_111, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = term_b_34;
          t = set_config_0(t);
          t = term_c_34;
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_d_34;
          return(t);
        }
        t = Option_3(t, a_7, b_7, c_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  c_112 = t;
  a_112 :
  if(match_string(c_112, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(c_112) == AT_LIST) && !(ATisEmpty(c_112))))
        {
          d_112 = ATgetFirst((ATermList) c_112);
          e_112 = (ATerm) ATgetNext((ATermList) c_112);
          b_112 :
          if(((ATgetType(e_112) == AT_LIST) && !(ATisEmpty(e_112))))
            {
              f_112 = ATgetFirst((ATermList) e_112);
              g_112 = (ATerm) ATgetNext((ATermList) e_112);
              {
                ATerm l_112 = NULL;
                ATerm e_34;
                e_34 = t;
                {
                  t = not_null(d_112);
                  t = l_0(t);
                }
                t = e_34;
                {
                  ATerm m_112 = NULL;
                  t = not_null(f_112);
                  {
                    t = n_0(t);
                    {
                      m_112 = t;
                      if(((l_112 != NULL) && (l_112 != m_112)))
                        _fail(m_112);
                      else
                        l_112 = m_112;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_112)), not_null(l_112));
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
  ATerm d_7 (ATerm t)
  {
    ATerm t_112 = NULL;
    t_112 = t;
    q_112 :
    if(!(match_string(t_112, "-i")))
      {
        if(!(match_string(t_112, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm w_112 = NULL;
    ATerm f_34;
    f_34 = t;
    {
      ATerm u_112 = NULL;
      ATerm v_112 = NULL;
      v_112 = t;
      if(((u_112 != NULL) && (u_112 != v_112)))
        _fail(v_112);
      else
        u_112 = v_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_34, not_null(u_112));
        t = set_config_0(t);
      }
    }
    t = f_34;
    {
      ATerm x_112 = NULL;
      x_112 = t;
      if(((w_112 != NULL) && (w_112 != x_112)))
        _fail(x_112);
      else
        w_112 = x_112;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_112));
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_h_34;
    return(t);
  }
  t = ArgOption_3(t, d_7, e_7, f_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm k_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_34);
          }
        else
          {
            t = k_34;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, term_m_34));
  {
    t = printnl_0(t);
    {
      t = term_d_28;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_113 = NULL;
  b_113 = t;
  t = SSL_TicksToSeconds(not_null(b_113));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym__2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_113), not_null(i_113));
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            t = SSL_addr(not_null(h_113), not_null(i_113));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_107 (ATerm), ATerm h_107 (ATerm))
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_107(t);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL;
        p_113 = t;
        o_113 :
        if(((ATgetType(p_113) == AT_LIST) && !(ATisEmpty(p_113))))
          {
            q_113 = ATgetFirst((ATermList) p_113);
            r_113 = (ATerm) ATgetNext((ATermList) p_113);
            {
              ATerm u_113 = NULL;
              ATerm v_113 = NULL;
              t = not_null(r_113);
              {
                t = foldr_2(t, g_107, h_107);
                {
                  v_113 = t;
                  if(((u_113 != NULL) && (u_113 != v_113)))
                    _fail(v_113);
                  else
                    u_113 = v_113;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_113), not_null(u_113));
                t = h_107(t);
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
ATerm crush_2 (ATerm t, ATerm e_106 (ATerm), ATerm f_106 (ATerm))
{
  ATerm c_114 = NULL;
  ATerm e_114 = NULL;
  c_114 = t;
  {
    ATerm f_114 = NULL;
    ATerm m_114 = NULL,o_114 = NULL,p_114 = NULL;
    t = not_null(c_114);
    {
      f_114 = t;
      {
        t = SSL_explode_term(not_null(f_114));
        {
          m_114 = t;
          b_114 :
          if(match_cons(m_114, sym__2))
            {
              o_114 = ATgetArgument(m_114, 0);
              p_114 = ATgetArgument(m_114, 1);
              if(((e_114 != NULL) && (e_114 != p_114)))
                _fail(p_114);
              else
                e_114 = p_114;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_114);
      t = foldr_2(t, e_106, f_106);
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
    ATerm i_7 (ATerm t)
    {
      t = term_e_33;
      return(t);
    }
    t = crush_2(t, i_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym__2))
    {
      y_114 = ATgetArgument(x_114, 0);
      z_114 = ATgetArgument(x_114, 1);
      {
        ATerm r_34;
        r_34 = t;
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_114), not_null(z_114));
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = SSL_gtr(not_null(y_114), not_null(z_114));
            }
        }
        t = r_34;
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
  ATerm f_115 = NULL;
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL;
      g_115 = t;
      e_115 :
      if(match_cons(g_115, sym__2))
        {
          h_115 = ATgetArgument(g_115, 0);
          i_115 = ATgetArgument(g_115, 1);
          {
            if(((f_115 != NULL) && (f_115 != h_115)))
              _fail(h_115);
            else
              f_115 = h_115;
            if(((f_115 != NULL) && (f_115 != i_115)))
              _fail(i_115);
            else
              f_115 = i_115;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_34;
      y_34 = t;
      {
        ATerm l_115 = NULL;
        ATerm m_115 = NULL;
        t = term_q_8;
        {
          t = get_config_0(t);
          {
            m_115 = t;
            if(((l_115 != NULL) && (l_115 != m_115)))
              _fail(m_115);
            else
              l_115 = m_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_115), term_d_28);
          t = geq_0(t);
        }
      }
      t = y_34;
      t = o_124(t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm q_115 = NULL,s_115 = NULL;
    ATerm z_34;
    z_34 = t;
    {
      ATerm r_115 = NULL;
      t = run_time_0(t);
      {
        r_115 = t;
        if(((q_115 != NULL) && (q_115 != r_115)))
          _fail(r_115);
        else
          q_115 = r_115;
      }
    }
    t = z_34;
    {
      ATerm t_115 = NULL;
      t = term_a_35;
      {
        t = get_config_0(t);
        {
          t_115 = t;
          if(((s_115 != NULL) && (s_115 != t_115)))
            _fail(t_115);
          else
            s_115 = t_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_35), not_null(q_115)), term_b_35), not_null(s_115)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_7);
  {
    t = term_e_33;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_116 = NULL;
  h_116 = t;
  f_116 :
  if(match_cons(h_116, sym_Version_0))
    {
      ATerm o_116 = NULL,q_116 = NULL;
      ATerm d_35;
      d_35 = t;
      {
        ATerm p_116 = NULL;
        t = SSLgetAnnotations(not_null(h_116));
        {
          p_116 = t;
          if(((o_116 != NULL) && (o_116 != p_116)))
            _fail(p_116);
          else
            o_116 = p_116;
        }
      }
      t = d_35;
      {
        ATerm v_116 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_116));
        {
          v_116 = t;
          if(((q_116 != NULL) && (q_116 != v_116)))
            _fail(v_116);
          else
            q_116 = v_116;
        }
        t = not_null(q_116);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_115 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_7);
  t = u_115(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_117 = NULL;
  a_117 = t;
  t = SSL_table_create(not_null(a_117));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_117 = NULL;
  e_117 = t;
  {
    ATerm i_35;
    i_35 = t;
    {
      t = term_j_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, not_null(e_117));
          t = table_put_0(t);
        }
      }
    }
    t = i_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_117 = NULL;
  i_117 = t;
  t = SSL_table_destroy(not_null(i_117));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_117 = NULL;
  m_117 = t;
  t = SSL_exit(not_null(m_117));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
  q_117 = t;
  p_117 :
  if(((ATgetType(q_117) == AT_LIST) && ATisEmpty(q_117)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_117) == AT_LIST) && !(ATisEmpty(q_117))))
        {
          r_117 = ATgetFirst((ATermList) q_117);
          s_117 = (ATerm) ATgetNext((ATermList) q_117);
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
  ATerm l_35;
  l_35 = t;
  {
    ATerm v_117 = NULL;
    ATerm y_117 = NULL;
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        {
          ATerm w_117 = NULL;
          ATerm x_117 = NULL;
          x_117 = t;
          if(((w_117 != NULL) && (w_117 != x_117)))
            _fail(x_117);
          else
            w_117 = x_117;
          t = (ATerm) ATinsert(ATempty, not_null(w_117));
        }
      }
    {
      y_117 = t;
      if(((v_117 != NULL) && (v_117 != y_117)))
        _fail(y_117);
      else
        v_117 = y_117;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_29, not_null(v_117));
      t = printnl_0(t);
    }
  }
  t = l_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm b_118 (ATerm t)
  {
    ATerm o_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = o_35;
        t = Cons_2(t, s_100, b_118);
      }
    return(t);
  }
  t = b_118(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
  l_118 = t;
  i_118 :
  if(((ATgetType(l_118) == AT_LIST) && !(ATisEmpty(l_118))))
    {
      j_118 = ATgetFirst((ATermList) l_118);
      k_118 = (ATerm) ATgetNext((ATermList) l_118);
      {
        ATerm o_118 = NULL;
        t = not_null(k_118);
        {
          ATerm s_35;
          s_35 = t;
          {
            ATerm p_118 = NULL,r_118 = NULL,t_118 = NULL;
            ATerm t_35;
            t_35 = t;
            {
              ATerm q_118 = NULL;
              t = k_0(t);
              {
                q_118 = t;
                if(((p_118 != NULL) && (p_118 != q_118)))
                  _fail(q_118);
                else
                  p_118 = q_118;
              }
            }
            t = t_35;
            {
              ATerm s_118 = NULL;
              t = not_null(j_118);
              {
                t = i_0(t);
                {
                  s_118 = t;
                  if(((r_118 != NULL) && (r_118 != s_118)))
                    _fail(s_118);
                  else
                    r_118 = s_118;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_118)), not_null(r_118));
                {
                  t_118 = t;
                  if(((o_118 != NULL) && (o_118 != t_118)))
                    _fail(t_118);
                  else
                    o_118 = t_118;
                }
              }
            }
          }
          t = s_35;
          {
            ATerm l_7 (ATerm t)
            {
              t = not_null(o_118);
              return(t);
            }
            t = reverse_acc_2(t, i_0, l_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_118) == AT_LIST) && ATisEmpty(l_118)))
        {
          {
            t = term_y_26;
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
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm k_119 = NULL,l_119 = NULL;
  k_119 = t;
  j_119 :
  if(match_cons(k_119, sym_Program_1))
    {
      l_119 = ATgetArgument(k_119, 0);
      {
        ATerm o_119 = NULL,q_119 = NULL;
        ATerm p_119 = NULL;
        t = SSLgetAnnotations(not_null(k_119));
        {
          p_119 = t;
          if(((o_119 != NULL) && (o_119 != p_119)))
            _fail(p_119);
          else
            o_119 = p_119;
        }
        {
          t = not_null(l_119);
          {
            ATerm s_119 = NULL;
            t = b_95(t);
            {
              q_119 = t;
              {
                ATerm t_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_119)), not_null(o_119));
                {
                  t_119 = t;
                  if(((s_119 != NULL) && (s_119 != t_119)))
                    _fail(t_119);
                  else
                    s_119 = t_119;
                }
                t = not_null(s_119);
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
  ATerm b_120 = NULL;
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_120 = NULL;
      t = term_a_35;
      {
        t = get_config_0(t);
        {
          c_120 = t;
          if(((b_120 != NULL) && (b_120 != c_120)))
            _fail(c_120);
          else
            b_120 = c_120;
        }
      }
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm n_7 (ATerm t)
        {
          ATerm o_7 (ATerm t)
          {
            ATerm d_120 = NULL;
            d_120 = t;
            if(((b_120 != NULL) && (b_120 != d_120)))
              _fail(d_120);
            else
              b_120 = d_120;
            return(t);
          }
          t = Program_1(t, o_7);
          return(t);
        }
        t = fetch_1(t, n_7);
      }
    }
  {
    t = term_w_35;
    {
      t = echo_0(t);
      {
        t = term_z_35;
        {
          t = table_get_0(t);
          {
            ATerm p_7 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, p_7);
            {
              ATerm q_7 (ATerm t)
              {
                ATerm e_120 = NULL;
                ATerm f_120 = NULL;
                f_120 = t;
                if(((e_120 != NULL) && (e_120 != f_120)))
                  _fail(f_120);
                else
                  e_120 = f_120;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_120)), term_c_36);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, q_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm o_120 = NULL,s_120 = NULL;
  o_120 = t;
  n_120 :
  if(match_cons(o_120, sym_Undefined_1))
    {
      s_120 = ATgetArgument(o_120, 0);
      {
        ATerm v_120 = NULL,x_120 = NULL;
        ATerm w_120 = NULL;
        t = SSLgetAnnotations(not_null(o_120));
        {
          w_120 = t;
          if(((v_120 != NULL) && (v_120 != w_120)))
            _fail(w_120);
          else
            v_120 = w_120;
        }
        {
          t = not_null(s_120);
          {
            ATerm z_120 = NULL;
            t = c_95(t);
            {
              x_120 = t;
              {
                ATerm a_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_120)), not_null(v_120));
                {
                  a_121 = t;
                  if(((z_120 != NULL) && (z_120 != a_121)))
                    _fail(a_121);
                  else
                    z_120 = a_121;
                }
                t = not_null(z_120);
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
ATerm fetch_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm o_121 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_101, _id);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = Cons_2(t, _id, o_121);
      }
    return(t);
  }
  t = o_121(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_118 (ATerm))
{
  t = fetch_1(t, d_118);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_121 = NULL;
  v_121 = t;
  u_121 :
  if(match_cons(v_121, sym_Help_0))
    {
      ATerm y_121 = NULL,a_122 = NULL;
      ATerm f_36;
      f_36 = t;
      {
        ATerm z_121 = NULL;
        t = SSLgetAnnotations(not_null(v_121));
        {
          z_121 = t;
          if(((y_121 != NULL) && (y_121 != z_121)))
            _fail(z_121);
          else
            y_121 = z_121;
        }
      }
      t = f_36;
      {
        ATerm b_122 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_121));
        {
          b_122 = t;
          if(((a_122 != NULL) && (a_122 != b_122)))
            _fail(b_122);
          else
            a_122 = b_122;
        }
        t = not_null(a_122);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm l_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_99(t);
      LocalPopChoice(q_36);
    }
  else
    {
      t = l_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
  h_122 = t;
  g_122 :
  if(match_cons(h_122, sym__2))
    {
      i_122 = ATgetArgument(h_122, 0);
      j_122 = ATgetArgument(h_122, 1);
      t = SSL_table_get(not_null(i_122), not_null(j_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
  q_122 = t;
  p_122 :
  if(match_cons(q_122, sym__3))
    {
      r_122 = ATgetArgument(q_122, 0);
      s_122 = ATgetArgument(q_122, 1);
      t_122 = ATgetArgument(q_122, 2);
      {
        ATerm r_36;
        r_36 = t;
        {
          ATerm b_123 = NULL;
          ATerm c_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_122), not_null(s_122));
          {
            ATerm s_36 = t;
            int t_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_36);
              }
            else
              {
                t = s_36;
                t = (ATerm) ATempty;
              }
            {
              c_123 = t;
              if(((b_123 != NULL) && (b_123 != c_123)))
                _fail(c_123);
              else
                b_123 = c_123;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_122), not_null(s_122), (ATerm) ATinsert(CheckATermList(not_null(b_123)), not_null(t_122)));
            t = table_put_0(t);
          }
        }
        t = r_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_119 (ATerm))
{
  ATerm i_123 = NULL;
  ATerm j_123 = NULL;
  t = term_y_26;
  {
    t = i_119(t);
    {
      j_123 = t;
      if(((i_123 != NULL) && (i_123 != j_123)))
        _fail(j_123);
      else
        i_123 = j_123;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_35, term_y_35, not_null(i_123));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
  p_123 = t;
  o_123 :
  if(match_string(p_123, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_123) == AT_LIST) && !(ATisEmpty(p_123))))
        {
          q_123 = ATgetFirst((ATermList) p_123);
          r_123 = (ATerm) ATgetNext((ATermList) p_123);
          {
            ATerm u_123 = NULL;
            ATerm h_37;
            h_37 = t;
            {
              t = not_null(q_123);
              t = a_0(t);
            }
            t = h_37;
            {
              ATerm v_123 = NULL;
              t = term_y_26;
              {
                t = d_0(t);
                {
                  v_123 = t;
                  if(((u_123 != NULL) && (u_123 != v_123)))
                    _fail(v_123);
                  else
                    u_123 = v_123;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_123)), not_null(u_123));
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
  ATerm r_7 (ATerm t)
  {
    ATerm i_124 = NULL;
    i_124 = t;
    h_124 :
    if(!(match_string(i_124, "--help")))
      {
        if(!(match_string(i_124, "-h")))
          {
            if(!(match_string(i_124, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_m_37;
    {
      t = set_config_0(t);
      t = term_n_37;
    }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_o_37;
    return(t);
  }
  t = Option_3(t, r_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_124 = NULL,m_124 = NULL,n_124 = NULL;
  l_124 = t;
  k_124 :
  if(((ATgetType(l_124) == AT_LIST) && !(ATisEmpty(l_124))))
    {
      m_124 = ATgetFirst((ATermList) l_124);
      n_124 = (ATerm) ATgetNext((ATermList) l_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_84 (ATerm), ATerm c_84 (ATerm))
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
  z_124 = t;
  y_124 :
  if(((ATgetType(z_124) == AT_LIST) && !(ATisEmpty(z_124))))
    {
      a_125 = ATgetFirst((ATermList) z_124);
      b_125 = (ATerm) ATgetNext((ATermList) z_124);
      {
        ATerm f_125 = NULL,h_125 = NULL;
        ATerm g_125 = NULL;
        t = SSLgetAnnotations(not_null(z_124));
        {
          g_125 = t;
          if(((f_125 != NULL) && (f_125 != g_125)))
            _fail(g_125);
          else
            f_125 = g_125;
        }
        {
          t = not_null(a_125);
          {
            ATerm j_125 = NULL;
            t = b_84(t);
            {
              h_125 = t;
              {
                t = not_null(b_125);
                {
                  ATerm l_125 = NULL;
                  t = c_84(t);
                  {
                    j_125 = t;
                    {
                      ATerm m_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_125)), not_null(h_125)), not_null(f_125));
                      {
                        m_125 = t;
                        if(((l_125 != NULL) && (l_125 != m_125)))
                          _fail(m_125);
                        else
                          l_125 = m_125;
                      }
                      t = not_null(l_125);
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
  ATerm w_125 = NULL;
  w_125 = t;
  v_125 :
  if(((ATgetType(w_125) == AT_LIST) && ATisEmpty(w_125)))
    {
      {
        ATerm y_125 = NULL,a_126 = NULL;
        ATerm p_37;
        p_37 = t;
        {
          ATerm z_125 = NULL;
          t = SSLgetAnnotations(not_null(w_125));
          {
            z_125 = t;
            if(((y_125 != NULL) && (y_125 != z_125)))
              _fail(z_125);
            else
              y_125 = z_125;
          }
        }
        t = p_37;
        {
          ATerm b_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_125));
          {
            b_126 = t;
            if(((a_126 != NULL) && (a_126 != b_126)))
              _fail(b_126);
            else
              a_126 = b_126;
          }
          t = not_null(a_126);
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
  ATerm h_126 = NULL,i_126 = NULL,j_126 = NULL;
  h_126 = t;
  g_126 :
  if(match_cons(h_126, sym__2))
    {
      i_126 = ATgetArgument(h_126, 0);
      j_126 = ATgetArgument(h_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_29, not_null(i_126), not_null(j_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_119 (ATerm))
{
  ATerm q_37;
  q_37 = t;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_37;
        t = g_119(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        {
        }
      }
  }
  t = q_37;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm r_126 = NULL;
      ATerm u_37;
      u_37 = t;
      {
        ATerm p_126 = NULL;
        ATerm q_126 = NULL;
        q_126 = t;
        if(((p_126 != NULL) && (p_126 != q_126)))
          _fail(q_126);
        else
          p_126 = q_126;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_35, not_null(p_126));
          t = set_config_0(t);
        }
      }
      t = u_37;
      {
        ATerm s_126 = NULL;
        s_126 = t;
        if(((r_126 != NULL) && (r_126 != s_126)))
          _fail(s_126);
        else
          r_126 = s_126;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_126));
      }
      return(t);
    }
    ATerm v_7 (ATerm t)
    {
      ATerm v_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_37);
            }
          else
            {
              t = x_37;
              {
                t = g_119(t);
                t = Cons_2(t, _id, v_7);
              }
            }
          LocalPopChoice(w_37);
        }
      else
        {
          t = v_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_7, v_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL,a_127 = NULL;
  ATerm z_37;
  z_37 = t;
  {
    ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL;
    b_127 = t;
    x_126 :
    if(match_cons(b_127, sym__3))
      {
        c_127 = ATgetArgument(b_127, 0);
        d_127 = ATgetArgument(b_127, 1);
        e_127 = ATgetArgument(b_127, 2);
        {
          if(((y_126 != NULL) && (y_126 != c_127)))
            _fail(c_127);
          else
            y_126 = c_127;
          {
            if(((z_126 != NULL) && (z_126 != d_127)))
              _fail(d_127);
            else
              z_126 = d_127;
            {
              if(((a_127 != NULL) && (a_127 != e_127)))
                _fail(e_127);
              else
                a_127 = e_127;
              t = SSL_table_put(not_null(y_126), not_null(z_126), not_null(a_127));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_119 (ATerm))
{
  ATerm h_127 = NULL;
  ATerm a_38;
  a_38 = t;
  {
    t = term_b_38;
    t = table_put_0(t);
  }
  t = a_38;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm c_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_119(t);
          LocalPopChoice(l_38);
        }
      else
        {
          t = c_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_7);
    {
      ATerm m_38 = t;
      int n_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_38;
          o_38 = t;
          {
            ATerm p_38 = t;
            int u_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_l_37;
                t = get_config_0(t);
                LocalPopChoice(u_38);
              }
            else
              {
                t = p_38;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_38;
          {
            t = system_usage_0(t);
            {
              t = term_e_33;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_38);
        }
      else
        {
          t = m_38;
          {
            ATerm v_38 = t;
            int w_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_7 (ATerm t)
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm i_127 = NULL;
                    i_127 = t;
                    if(((h_127 != NULL) && (h_127 != i_127)))
                      _fail(i_127);
                    else
                      h_127 = i_127;
                    return(t);
                  }
                  t = Undefined_1(t, y_7);
                  return(t);
                }
                t = fetch_1(t, x_7);
                {
                  ATerm z_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_127)), term_z_38);
                    return(t);
                  }
                  t = say_1(t, z_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_28;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_38);
              }
            else
              {
                t = v_38;
                {
                }
              }
          }
        }
      {
        ATerm a_39;
        a_39 = t;
        {
          t = term_x_35;
          t = table_destroy_0(t);
        }
        t = a_39;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm))
{
  t = parse_options_1(t, a_116);
  {
    t = store_options_0(t);
    {
      t = c_116(t);
      {
        ATerm b_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_116);
            LocalPopChoice(e_39);
          }
        else
          {
            t = b_39;
            {
              ATerm f_39 = t;
              int g_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_116(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_39);
                }
              else
                {
                  t = f_39;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm j_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = j_39;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_116);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_8, t_116, u_116, b_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm))
{
  ATerm c_8 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      ATerm r_39;
      r_39 = t;
      {
        ATerm l_127 = NULL;
        ATerm m_127 = NULL;
        t = term_a_35;
        {
          t = get_config_0(t);
          {
            m_127 = t;
            if(((l_127 != NULL) && (l_127 != m_127)))
              _fail(m_127);
            else
              l_127 = m_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(l_127)));
          t = printnl_0(t);
        }
      }
      t = r_39;
      return(t);
    }
    t = if_verbose2_1(t, d_8);
    return(t);
  }
  t = iowrap_4(t, l_116, m_116, n_116, c_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_116 (ATerm), ATerm k_116 (ATerm))
{
  t = iowrap_3(t, j_116, k_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    t = _2(t, _id, g_116);
    return(t);
  }
  t = iowrap_2(t, e_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        {
          ATerm g_8 (ATerm t)
          {
            ATerm h_8 (ATerm t)
            {
              t = term_u_39;
              return(t);
            }
            t = say_1(t, h_8);
            return(t);
          }
          t = if_verbose2_1(t, g_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, f_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
