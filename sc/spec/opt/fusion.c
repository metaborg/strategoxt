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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
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
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
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
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
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
ATerm say_1 (ATerm, ATerm y_108 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm o_124 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm Op_2 (ATerm, ATerm o_86 (ATerm), ATerm p_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm f_123 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm f_103 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm v_110 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm Con_3 (ATerm, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_97 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_96 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_108 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_108 (ATerm));
ATerm scope_2 (ATerm, ATerm n_108 (ATerm), ATerm o_108 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm l_96 (ATerm));
ATerm innermost_1 (ATerm, ATerm e_115 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm p_84 (ATerm));
ATerm Seq_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm Match_1 (ATerm, ATerm o_84 (ATerm));
ATerm LChoice_2 (ATerm, ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm Choice_2 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm c_98 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_121 (ATerm), ATerm e_121 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm o_120 (ATerm), ATerm p_120 (ATerm));
ATerm substitute_1 (ATerm, ATerm q_120 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm c_124 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm Let_2 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm t_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm y_123 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm y_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm s_84 (ATerm), ATerm t_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm n_106 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm crush_3 (ATerm, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_106 (ATerm), ATerm s_106 (ATerm));
ATerm diff_1 (ATerm, ATerm j_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_111 (ATerm), ATerm l_111 (ATerm));
ATerm for_3 (ATerm, ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm q_121 (ATerm), ATerm r_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm));
ATerm zip_1 (ATerm, ATerm a_103 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm k_121 (ATerm), ATerm l_121 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_121 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_116 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm p_115 (ATerm));
ATerm rename_4 (ATerm, ATerm f_121 (ATerm, ATerm (ATerm)), ATerm g_121 (ATerm), ATerm h_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_108 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_108 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm c_87 (ATerm));
ATerm Signature_1 (ATerm, ATerm z_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_87 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_101 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm b_117 (ATerm));
ATerm debug_1 (ATerm, ATerm x_108 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_107 (ATerm), ATerm f_107 (ATerm));
ATerm crush_2 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_124 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_116 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_120 (ATerm));
ATerm map_1 (ATerm, ATerm u_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_120 (ATerm));
ATerm Program_1 (ATerm, ATerm n_95 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm o_95 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_119 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_120 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_120 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_120 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_117 (ATerm), ATerm p_117 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_117 (ATerm));
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
ATerm say_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm c_10;
  c_10 = t;
  {
    t = y_108(t);
    t = debug_0(t);
  }
  t = c_10;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm e_0 (ATerm t)
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
    t = o_124(t);
    return(t);
  }
  t = try_1(t, e_0);
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
                    ATerm q_0 (ATerm t)
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
                    t = oncetd_1(t, q_0);
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
                              ATerm r_0 (ATerm t)
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
                              t = oncetd_1(t, r_0);
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
                          ATerm u_0 (ATerm t)
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
                          t = pat_td_1(t, u_0);
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
ATerm As_2 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm))
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
            t = n_88(t);
            {
              d_17 = t;
              {
                t = not_null(x_16);
                {
                  ATerm h_17 = NULL;
                  t = o_88(t);
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
ATerm Prim_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
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
            t = k_84(t);
            {
              c_18 = t;
              {
                t = not_null(w_17);
                {
                  ATerm g_18 = NULL;
                  t = l_84(t);
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
ATerm Explode_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
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
            t = j_88(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = k_88(t);
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
ATerm Op_2 (ATerm t, ATerm o_86 (ATerm), ATerm p_86 (ATerm))
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
            t = o_86(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = p_86(t);
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
ATerm pat_td_1 (ATerm t, ATerm f_123 (ATerm))
{
  ATerm d_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_123(t);
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
                t = pat_td_1(t, f_123);
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
                    t = pat_td_1(t, f_123);
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
                          t = pat_td_1(t, f_123);
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
                                  t = pat_td_1(t, f_123);
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
                                  t = pat_td_1(t, f_123);
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
ATerm unzip_1 (ATerm t, ATerm f_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, f_103);
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
ATerm repeat_1 (ATerm t, ATerm v_110 (ATerm))
{
  ATerm i_26 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = v_110(t);
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
ATerm App_2 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm))
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
            t = d_88(t);
            {
              k_27 = t;
              {
                t = not_null(e_27);
                {
                  ATerm o_27 = NULL;
                  t = e_88(t);
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
ATerm Con_3 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm))
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
            t = a_88(t);
            {
              m_28 = t;
              {
                t = not_null(e_28);
                {
                  ATerm q_28 = NULL;
                  t = b_88(t);
                  {
                    o_28 = t;
                    {
                      t = not_null(f_28);
                      {
                        ATerm s_28 = NULL;
                        t = c_88(t);
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
ATerm oncetd_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm r_29 (ATerm t)
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_97(t);
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
ATerm topdown_1 (ATerm t, ATerm k_96 (ATerm))
{
  t = k_96(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, k_96);
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
                                                        if(match_string(g_36, "s_0"))
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
            if(!(match_string(z_38, "m_0")))
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
                        if(!(match_string(p_38, "v_0")))
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
ATerm end_scope_1 (ATerm t, ATerm m_108 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  ATerm g_17;
  g_17 = t;
  {
    ATerm i_40 = NULL;
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
    t = m_108(t);
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
ATerm restore_always_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_99(t);
      t = s_99(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        t = s_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_108 (ATerm))
{
  ATerm t_40 = NULL;
  ATerm o_17;
  o_17 = t;
  {
    ATerm y_40 = NULL;
    ATerm z_40 = NULL;
    t = l_108(t);
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
ATerm scope_2 (ATerm t, ATerm n_108 (ATerm), ATerm o_108 (ATerm))
{
  t = begin_scope_1(t, n_108);
  {
    ATerm h_2 (ATerm t)
    {
      t = end_scope_1(t, n_108);
      return(t);
    }
    t = restore_always_2(t, o_108, h_2);
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
                                                if(match_string(y_43, "p_0"))
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
                                                  if(match_string(r_44, "f_0"))
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
                                ATerm l_46 = NULL;
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
                                    l_46 = t;
                                    if(((h_46 != NULL) && (h_46 != l_46)))
                                      _fail(l_46);
                                    else
                                      h_46 = l_46;
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
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  u_46 = t;
  s_46 :
  if(match_cons(u_46, sym_Seq_2))
    {
      v_46 = ATgetArgument(u_46, 0);
      x_46 = ATgetArgument(u_46, 1);
      t_46 :
      if(match_cons(v_46, sym_Build_1))
        {
          w_46 = ATgetArgument(v_46, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(x_46), not_null(w_46)));
        }
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
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  i_47 = t;
  e_47 :
  if(match_cons(i_47, sym_LChoice_2))
    {
      j_47 = ATgetArgument(i_47, 0);
      m_47 = ATgetArgument(i_47, 1);
      f_47 :
      if(match_cons(j_47, sym_LChoice_2))
        {
          k_47 = ATgetArgument(j_47, 0);
          l_47 = ATgetArgument(j_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_47), not_null(m_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(i_47, sym_Seq_2))
        {
          j_47 = ATgetArgument(i_47, 0);
          m_47 = ATgetArgument(i_47, 1);
          g_47 :
          if(match_cons(j_47, sym_Seq_2))
            {
              k_47 = ATgetArgument(j_47, 0);
              l_47 = ATgetArgument(j_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_47), not_null(m_47)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(i_47, sym_Choice_2))
            {
              j_47 = ATgetArgument(i_47, 0);
              m_47 = ATgetArgument(i_47, 1);
              h_47 :
              if(match_cons(j_47, sym_Choice_2))
                {
                  k_47 = ATgetArgument(j_47, 0);
                  l_47 = ATgetArgument(j_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_47), not_null(m_47)));
                }
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
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  x_48 = t;
  v_48 :
  if(match_cons(x_48, sym_Seq_2))
    {
      y_48 = ATgetArgument(x_48, 0);
      b_49 = ATgetArgument(x_48, 1);
      w_48 :
      if(match_cons(y_48, sym_Scope_2))
        {
          z_48 = ATgetArgument(y_48, 0);
          a_49 = ATgetArgument(y_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_49), not_null(b_49)));
        }
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
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  l_49 = t;
  j_49 :
  if(match_cons(l_49, sym_Seq_2))
    {
      m_49 = ATgetArgument(l_49, 0);
      p_49 = ATgetArgument(l_49, 1);
      k_49 :
      if(match_cons(m_49, sym_LChoice_2))
        {
          n_49 = ATgetArgument(m_49, 0);
          o_49 = ATgetArgument(m_49, 1);
          {
            ATerm b_50 = NULL,c_50 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(p_49));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_p_18;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                b_50 = t;
                h_49 :
                if(match_cons(b_50, sym_Defined_1))
                  {
                    c_50 = ATgetArgument(b_50, 0);
                    i_49 :
                    if(!(match_string(c_50, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(n_49), not_null(p_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_49), not_null(p_49)));
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Seq_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      p_50 = ATgetArgument(j_50, 1);
      i_50 :
      if(match_cons(k_50, sym_Choice_2))
        {
          l_50 = ATgetArgument(k_50, 0);
          m_50 = ATgetArgument(k_50, 1);
          {
            ATerm z_50 = NULL,a_51 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_q_18, not_null(p_50));
            {
              ATerm u_2 (ATerm t)
              {
                t = term_r_18;
                return(t);
              }
              t = rewrite_1(t, u_2);
              {
                z_50 = t;
                f_50 :
                if(match_cons(z_50, sym_Defined_1))
                  {
                    a_51 = ATgetArgument(z_50, 0);
                    g_50 :
                    if(!(match_string(a_51, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(l_50), not_null(p_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_50), not_null(p_50)));
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
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  f_51 = t;
  d_51 :
  if(match_cons(f_51, sym_Seq_2))
    {
      g_51 = ATgetArgument(f_51, 0);
      h_51 = ATgetArgument(f_51, 1);
      e_51 :
      if(match_cons(h_51, sym_Scope_2))
        {
          i_51 = ATgetArgument(h_51, 0);
          j_51 = ATgetArgument(h_51, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_51), not_null(j_51)));
        }
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
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  r_51 = t;
  p_51 :
  if(match_cons(r_51, sym_Seq_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      q_51 :
      if(match_cons(t_51, sym_LChoice_2))
        {
          u_51 = ATgetArgument(t_51, 0);
          v_51 = ATgetArgument(t_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_51), not_null(u_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_51), not_null(v_51)));
        }
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
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_cons(d_52, sym_Seq_2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      c_52 :
      if(match_cons(f_52, sym_Choice_2))
        {
          g_52 = ATgetArgument(f_52, 0);
          h_52 = ATgetArgument(f_52, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(e_52), not_null(g_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_52), not_null(h_52)));
        }
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
ATerm bottomup_1 (ATerm t, ATerm l_96 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = bottomup_1(t, l_96);
    return(t);
  }
  t = _all(t, w_2);
  t = l_96(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm e_115 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = e_115(t);
      t = innermost_1(t, e_115);
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
ATerm Build_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm s_52 = NULL,t_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_Build_1))
    {
      t_52 = ATgetArgument(s_52, 0);
      {
        ATerm w_52 = NULL,y_52 = NULL;
        ATerm x_52 = NULL;
        t = SSLgetAnnotations(not_null(s_52));
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
        {
          t = not_null(t_52);
          {
            ATerm a_53 = NULL;
            t = p_84(t);
            {
              y_52 = t;
              {
                ATerm b_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(y_52)), not_null(w_52));
                {
                  b_53 = t;
                  if(((a_53 != NULL) && (a_53 != b_53)))
                    _fail(b_53);
                  else
                    a_53 = b_53;
                }
                t = not_null(a_53);
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
ATerm Seq_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Seq_2))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      {
        ATerm s_53 = NULL,u_53 = NULL;
        ATerm t_53 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
        {
          t = not_null(n_53);
          {
            ATerm w_53 = NULL;
            t = f_85(t);
            {
              u_53 = t;
              {
                t = not_null(o_53);
                {
                  ATerm y_53 = NULL;
                  t = g_85(t);
                  {
                    w_53 = t;
                    {
                      ATerm z_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(u_53), not_null(w_53)), not_null(s_53));
                      {
                        z_53 = t;
                        if(((y_53 != NULL) && (y_53 != z_53)))
                          _fail(z_53);
                        else
                          y_53 = z_53;
                      }
                      t = not_null(y_53);
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
ATerm Match_1 (ATerm t, ATerm o_84 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Match_1))
    {
      l_54 = ATgetArgument(k_54, 0);
      {
        ATerm o_54 = NULL,q_54 = NULL;
        ATerm p_54 = NULL;
        t = SSLgetAnnotations(not_null(k_54));
        {
          p_54 = t;
          if(((o_54 != NULL) && (o_54 != p_54)))
            _fail(p_54);
          else
            o_54 = p_54;
        }
        {
          t = not_null(l_54);
          {
            ATerm s_54 = NULL;
            t = o_84(t);
            {
              q_54 = t;
              {
                ATerm t_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(q_54)), not_null(o_54));
                {
                  t_54 = t;
                  if(((s_54 != NULL) && (s_54 != t_54)))
                    _fail(t_54);
                  else
                    s_54 = t_54;
                }
                t = not_null(s_54);
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
ATerm LChoice_2 (ATerm t, ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_LChoice_2))
    {
      f_55 = ATgetArgument(e_55, 0);
      g_55 = ATgetArgument(e_55, 1);
      {
        ATerm n_55 = NULL,q_55 = NULL;
        ATerm p_55 = NULL;
        t = SSLgetAnnotations(not_null(e_55));
        {
          p_55 = t;
          if(((n_55 != NULL) && (n_55 != p_55)))
            _fail(p_55);
          else
            n_55 = p_55;
        }
        {
          t = not_null(f_55);
          {
            ATerm s_55 = NULL;
            t = j_85(t);
            {
              q_55 = t;
              {
                t = not_null(g_55);
                {
                  ATerm u_55 = NULL;
                  t = k_85(t);
                  {
                    s_55 = t;
                    {
                      ATerm v_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_55), not_null(s_55)), not_null(n_55));
                      {
                        v_55 = t;
                        if(((u_55 != NULL) && (u_55 != v_55)))
                          _fail(v_55);
                        else
                          u_55 = v_55;
                      }
                      t = not_null(u_55);
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
ATerm Choice_2 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm))
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_Choice_2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      {
        ATerm n_56 = NULL,p_56 = NULL;
        ATerm o_56 = NULL;
        t = SSLgetAnnotations(not_null(h_56));
        {
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
        }
        {
          t = not_null(i_56);
          {
            ATerm r_56 = NULL;
            t = h_85(t);
            {
              p_56 = t;
              {
                t = not_null(j_56);
                {
                  ATerm t_56 = NULL;
                  t = i_85(t);
                  {
                    r_56 = t;
                    {
                      ATerm u_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_56), not_null(r_56)), not_null(n_56));
                      {
                        u_56 = t;
                        if(((t_56 != NULL) && (t_56 != u_56)))
                          _fail(u_56);
                        else
                          t_56 = u_56;
                      }
                      t = not_null(t_56);
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
  ATerm c_57 = NULL;
  c_57 = t;
  {
    ATerm i_20;
    i_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(c_57)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_d_16, (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, not_null(c_57)));
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
  ATerm g_57 = NULL;
  g_57 = t;
  {
    ATerm m_20;
    m_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_q_18, not_null(g_57)), term_q_20);
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
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_18, not_null(g_57)), term_y_20);
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
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  r_57 = t;
  m_57 :
  if(match_cons(r_57, sym_Call_2))
    {
      s_57 = ATgetArgument(r_57, 0);
      u_57 = ATgetArgument(r_57, 1);
      n_57 :
      if(match_cons(s_57, sym_SVar_1))
        {
          t_57 = ATgetArgument(s_57, 0);
          o_57 :
          if(match_string(t_57, "innermost_1"))
            {
              p_57 :
              if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
                {
                  v_57 = ATgetFirst((ATermList) u_57);
                  w_57 = (ATerm) ATgetNext((ATermList) u_57);
                  q_57 :
                  if(((ATgetType(w_57) == AT_LIST) && ATisEmpty(w_57)))
                    {
                      {
                        ATerm y_57 = NULL,a_58 = NULL;
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
                            ATerm z_57 = NULL;
                            t = new_0(t);
                            {
                              z_57 = t;
                              if(((y_57 != NULL) && (y_57 != z_57)))
                                _fail(z_57);
                              else
                                y_57 = z_57;
                            }
                          }
                          t = o_21;
                          {
                            ATerm p_21;
                            p_21 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_57)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = p_21;
                            {
                              ATerm q_21;
                              q_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_57)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = q_21;
                              {
                                ATerm b_58 = NULL;
                                t = not_null(v_57);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    b_58 = t;
                                    if(((a_58 != NULL) && (a_58 != b_58)))
                                      _fail(b_58);
                                    else
                                      a_58 = b_58;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_57), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_15, not_null(a_58)), (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_57)), (ATerm) ATempty)))), term_z_12))));
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
ATerm alltd_1 (ATerm t, ATerm c_98 (ATerm))
{
  ATerm f_58 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = _all(t, f_58);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm w_58 = NULL;
  ATerm w_21;
  w_21 = t;
  {
    ATerm x_58 = NULL;
    t = new_0(t);
    {
      x_58 = t;
      {
        if(((w_58 != NULL) && (w_58 != x_58)))
          _fail(x_58);
        else
          w_58 = x_58;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_58)), (ATerm) ATempty)));
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
                ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
                y_58 = t;
                i_58 :
                if(match_cons(y_58, sym_Seq_2))
                  {
                    z_58 = ATgetArgument(y_58, 0);
                    j_59 = ATgetArgument(y_58, 1);
                    j_58 :
                    if(match_cons(z_58, sym_All_1))
                      {
                        a_59 = ATgetArgument(z_58, 0);
                        k_58 :
                        if(match_cons(a_59, sym_Call_2))
                          {
                            b_59 = ATgetArgument(a_59, 0);
                            d_59 = ATgetArgument(a_59, 1);
                            l_58 :
                            if(match_cons(b_59, sym_SVar_1))
                              {
                                c_59 = ATgetArgument(b_59, 0);
                                m_58 :
                                if(match_string(c_59, "bottomup_1"))
                                  {
                                    n_58 :
                                    if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
                                      {
                                        e_59 = ATgetFirst((ATermList) d_59);
                                        i_59 = (ATerm) ATgetNext((ATermList) d_59);
                                        p_58 :
                                        if(match_cons(e_59, sym_Call_2))
                                          {
                                            f_59 = ATgetArgument(e_59, 0);
                                            h_59 = ATgetArgument(e_59, 1);
                                            q_58 :
                                            if(match_cons(f_59, sym_SVar_1))
                                              {
                                                g_59 = ATgetArgument(f_59, 0);
                                                r_58 :
                                                if(((ATgetType(h_59) == AT_LIST) && ATisEmpty(h_59)))
                                                  {
                                                    s_58 :
                                                    if(((ATgetType(i_59) == AT_LIST) && ATisEmpty(i_59)))
                                                      {
                                                        t_58 :
                                                        if(match_cons(j_59, sym_Call_2))
                                                          {
                                                            k_59 = ATgetArgument(j_59, 0);
                                                            m_59 = ATgetArgument(j_59, 1);
                                                            u_58 :
                                                            if(match_cons(k_59, sym_SVar_1))
                                                              {
                                                                l_59 = ATgetArgument(k_59, 0);
                                                                v_58 :
                                                                if(((ATgetType(m_59) == AT_LIST) && ATisEmpty(m_59)))
                                                                  {
                                                                    {
                                                                      if(((w_58 != NULL) && (w_58 != g_59)))
                                                                        _fail(g_59);
                                                                      else
                                                                        w_58 = g_59;
                                                                      if(((w_58 != NULL) && (w_58 != l_59)))
                                                                        _fail(l_59);
                                                                      else
                                                                        w_58 = l_59;
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
  ATerm o_60 = NULL,p_60 = NULL;
  ATerm e_22;
  e_22 = t;
  {
    ATerm q_60 = NULL;
    t = new_0(t);
    {
      q_60 = t;
      {
        if(((o_60 != NULL) && (o_60 != q_60)))
          _fail(q_60);
        else
          o_60 = q_60;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_60)), (ATerm) ATempty)));
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
                ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
                r_60 = t;
                r_59 :
                if(match_cons(r_60, sym_Call_2))
                  {
                    s_60 = ATgetArgument(r_60, 0);
                    u_60 = ATgetArgument(r_60, 1);
                    s_59 :
                    if(match_cons(s_60, sym_SVar_1))
                      {
                        t_60 = ATgetArgument(s_60, 0);
                        t_59 :
                        if(match_string(t_60, "bottomup_1"))
                          {
                            u_59 :
                            if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
                              {
                                v_60 = ATgetFirst((ATermList) u_60);
                                q_61 = (ATerm) ATgetNext((ATermList) u_60);
                                v_59 :
                                if(match_cons(v_60, sym_Rec_2))
                                  {
                                    w_60 = ATgetArgument(v_60, 0);
                                    x_60 = ATgetArgument(v_60, 1);
                                    w_59 :
                                    if(match_cons(x_60, sym_Call_2))
                                      {
                                        y_60 = ATgetArgument(x_60, 0);
                                        a_61 = ATgetArgument(x_60, 1);
                                        x_59 :
                                        if(match_cons(y_60, sym_SVar_1))
                                          {
                                            z_60 = ATgetArgument(y_60, 0);
                                            y_59 :
                                            if(match_string(z_60, "try_1"))
                                              {
                                                z_59 :
                                                if(((ATgetType(a_61) == AT_LIST) && !(ATisEmpty(a_61))))
                                                  {
                                                    b_61 = ATgetFirst((ATermList) a_61);
                                                    p_61 = (ATerm) ATgetNext((ATermList) a_61);
                                                    a_60 :
                                                    if(match_cons(b_61, sym_Seq_2))
                                                      {
                                                        c_61 = ATgetArgument(b_61, 0);
                                                        g_61 = ATgetArgument(b_61, 1);
                                                        b_60 :
                                                        if(match_cons(c_61, sym_Call_2))
                                                          {
                                                            d_61 = ATgetArgument(c_61, 0);
                                                            f_61 = ATgetArgument(c_61, 1);
                                                            c_60 :
                                                            if(match_cons(d_61, sym_SVar_1))
                                                              {
                                                                e_61 = ATgetArgument(d_61, 0);
                                                                d_60 :
                                                                if(((ATgetType(f_61) == AT_LIST) && ATisEmpty(f_61)))
                                                                  {
                                                                    e_60 :
                                                                    if(match_cons(g_61, sym_Call_2))
                                                                      {
                                                                        h_61 = ATgetArgument(g_61, 0);
                                                                        j_61 = ATgetArgument(g_61, 1);
                                                                        f_60 :
                                                                        if(match_cons(h_61, sym_SVar_1))
                                                                          {
                                                                            i_61 = ATgetArgument(h_61, 0);
                                                                            g_60 :
                                                                            if(match_string(i_61, "innermost_1"))
                                                                              {
                                                                                h_60 :
                                                                                if(((ATgetType(j_61) == AT_LIST) && !(ATisEmpty(j_61))))
                                                                                  {
                                                                                    k_61 = ATgetFirst((ATermList) j_61);
                                                                                    o_61 = (ATerm) ATgetNext((ATermList) j_61);
                                                                                    i_60 :
                                                                                    if(match_cons(k_61, sym_Call_2))
                                                                                      {
                                                                                        l_61 = ATgetArgument(k_61, 0);
                                                                                        n_61 = ATgetArgument(k_61, 1);
                                                                                        j_60 :
                                                                                        if(match_cons(l_61, sym_SVar_1))
                                                                                          {
                                                                                            m_61 = ATgetArgument(l_61, 0);
                                                                                            k_60 :
                                                                                            if(((ATgetType(n_61) == AT_LIST) && ATisEmpty(n_61)))
                                                                                              {
                                                                                                l_60 :
                                                                                                if(((ATgetType(o_61) == AT_LIST) && ATisEmpty(o_61)))
                                                                                                  {
                                                                                                    m_60 :
                                                                                                    if(((ATgetType(p_61) == AT_LIST) && ATisEmpty(p_61)))
                                                                                                      {
                                                                                                        n_60 :
                                                                                                        if(((ATgetType(q_61) == AT_LIST) && ATisEmpty(q_61)))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((p_60 != NULL) && (p_60 != w_60)))
                                                                                                                _fail(w_60);
                                                                                                              else
                                                                                                                p_60 = w_60;
                                                                                                              {
                                                                                                                if(((o_60 != NULL) && (o_60 != e_61)))
                                                                                                                  _fail(e_61);
                                                                                                                else
                                                                                                                  o_60 = e_61;
                                                                                                                if(((p_60 != NULL) && (p_60 != m_61)))
                                                                                                                  _fail(m_61);
                                                                                                                else
                                                                                                                  p_60 = m_61;
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
                          }
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
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  x_61 = t;
  u_61 :
  if(match_cons(x_61, sym_Call_2))
    {
      y_61 = ATgetArgument(x_61, 0);
      a_62 = ATgetArgument(x_61, 1);
      v_61 :
      if(match_cons(y_61, sym_SVar_1))
        {
          z_61 = ATgetArgument(y_61, 0);
          w_61 :
          if(((ATgetType(a_62) == AT_LIST) && ATisEmpty(a_62)))
            {
              t = not_null(z_61);
            }
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
ATerm SubsVar_2 (ATerm t, ATerm d_121 (ATerm), ATerm e_121 (ATerm))
{
  ATerm g_62 = NULL;
  ATerm i_62 = NULL,j_62 = NULL;
  g_62 = t;
  {
    ATerm k_62 = NULL;
    t = not_null(g_62);
    {
      ATerm l_62 = NULL;
      t = d_121(t);
      {
        k_62 = t;
        {
          if(((i_62 != NULL) && (i_62 != k_62)))
            _fail(k_62);
          else
            i_62 = k_62;
          {
            t = e_121(t);
            {
              l_62 = t;
              if(((j_62 != NULL) && (j_62 != l_62)))
                _fail(l_62);
              else
                j_62 = l_62;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_62), not_null(j_62));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
  t_62 = t;
  s_62 :
  if(match_cons(t_62, sym__2))
    {
      u_62 = ATgetArgument(t_62, 0);
      v_62 = ATgetArgument(t_62, 1);
      {
        ATerm y_62 = NULL;
        if(((y_62 != NULL) && (y_62 != v_62)))
          _fail(v_62);
        else
          y_62 = v_62;
      }
    }
  else
    {
      if(match_cons(t_62, sym__3))
        {
          u_62 = ATgetArgument(t_62, 0);
          v_62 = ATgetArgument(t_62, 1);
          w_62 = ATgetArgument(t_62, 2);
          {
            ATerm e_63 = NULL;
            ATerm f_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_62), not_null(v_62));
            {
              t = zip_1(t, _id);
              {
                f_63 = t;
                if(((e_63 != NULL) && (e_63 != f_63)))
                  _fail(f_63);
                else
                  e_63 = f_63;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_63), not_null(w_62));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm o_120 (ATerm), ATerm p_120 (ATerm))
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  t = subs_args_0(t);
  {
    l_63 = t;
    k_63 :
    if(match_cons(l_63, sym__2))
      {
        m_63 = ATgetArgument(l_63, 0);
        n_63 = ATgetArgument(l_63, 1);
        {
          t = not_null(n_63);
          {
            ATerm d_4 (ATerm t)
            {
              ATerm e_4 (ATerm t)
              {
                t = not_null(m_63);
                return(t);
              }
              t = SubsVar_2(t, o_120, e_4);
              t = p_120(t);
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
ATerm substitute_1 (ATerm t, ATerm q_120 (ATerm))
{
  t = substitute_2(t, q_120, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm c_124 (ATerm))
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        t = split_2(t, _id, c_124);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
            x_63 = t;
            s_63 :
            if(match_cons(x_63, sym__2))
              {
                y_63 = ATgetArgument(x_63, 0);
                c_64 = ATgetArgument(x_63, 1);
                t_63 :
                if(match_cons(y_63, sym_SDef_3))
                  {
                    z_63 = ATgetArgument(y_63, 0);
                    a_64 = ATgetArgument(y_63, 1);
                    b_64 = ATgetArgument(y_63, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_64), not_null(a_64), not_null(b_64));
                  }
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
              t = split_2(t, _id, c_124);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
                  g_64 = t;
                  v_63 :
                  if(match_cons(g_64, sym__2))
                    {
                      h_64 = ATgetArgument(g_64, 0);
                      k_64 = ATgetArgument(g_64, 1);
                      w_63 :
                      if(match_cons(h_64, sym_VarDec_2))
                        {
                          i_64 = ATgetArgument(h_64, 0);
                          j_64 = ATgetArgument(h_64, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_64), not_null(j_64));
                        }
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
                t = c_124(t);
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
ATerm Rec_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_Rec_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      {
        ATerm c_65 = NULL,e_65 = NULL;
        ATerm d_65 = NULL;
        t = SSLgetAnnotations(not_null(w_64));
        {
          d_65 = t;
          if(((c_65 != NULL) && (c_65 != d_65)))
            _fail(d_65);
          else
            c_65 = d_65;
        }
        {
          t = not_null(x_64);
          {
            ATerm g_65 = NULL;
            t = u_85(t);
            {
              e_65 = t;
              {
                t = not_null(y_64);
                {
                  ATerm i_65 = NULL;
                  t = v_85(t);
                  {
                    g_65 = t;
                    {
                      ATerm j_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(e_65), not_null(g_65)), not_null(c_65));
                      {
                        j_65 = t;
                        if(((i_65 != NULL) && (i_65 != j_65)))
                          _fail(j_65);
                        else
                          i_65 = j_65;
                      }
                      t = not_null(i_65);
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
ATerm SDef_3 (ATerm t, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  w_65 = t;
  v_65 :
  if(match_cons(w_65, sym_SDef_3))
    {
      x_65 = ATgetArgument(w_65, 0);
      y_65 = ATgetArgument(w_65, 1);
      z_65 = ATgetArgument(w_65, 2);
      {
        ATerm e_66 = NULL,g_66 = NULL;
        ATerm f_66 = NULL;
        t = SSLgetAnnotations(not_null(w_65));
        {
          f_66 = t;
          if(((e_66 != NULL) && (e_66 != f_66)))
            _fail(f_66);
          else
            e_66 = f_66;
        }
        {
          t = not_null(x_65);
          {
            ATerm i_66 = NULL;
            t = y_85(t);
            {
              g_66 = t;
              {
                t = not_null(y_65);
                {
                  ATerm k_66 = NULL;
                  t = z_85(t);
                  {
                    i_66 = t;
                    {
                      t = not_null(z_65);
                      {
                        ATerm m_66 = NULL;
                        t = a_86(t);
                        {
                          k_66 = t;
                          {
                            ATerm n_66 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(g_66), not_null(i_66), not_null(k_66)), not_null(e_66));
                            {
                              n_66 = t;
                              if(((m_66 != NULL) && (m_66 != n_66)))
                                _fail(n_66);
                              else
                                m_66 = n_66;
                            }
                            t = not_null(m_66);
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
ATerm Let_2 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym_Let_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      {
        ATerm g_67 = NULL,i_67 = NULL;
        ATerm h_67 = NULL;
        t = SSLgetAnnotations(not_null(a_67));
        {
          h_67 = t;
          if(((g_67 != NULL) && (g_67 != h_67)))
            _fail(h_67);
          else
            g_67 = h_67;
        }
        {
          t = not_null(b_67);
          {
            ATerm n_67 = NULL;
            t = w_85(t);
            {
              i_67 = t;
              {
                t = not_null(c_67);
                {
                  ATerm p_67 = NULL;
                  t = x_85(t);
                  {
                    n_67 = t;
                    {
                      ATerm q_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(i_67), not_null(n_67)), not_null(g_67));
                      {
                        q_67 = t;
                        if(((p_67 != NULL) && (p_67 != q_67)))
                          _fail(q_67);
                        else
                          p_67 = q_67;
                      }
                      t = not_null(p_67);
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
ATerm sboundin_3 (ATerm t, ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm))
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_124, d_124);
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
            t = SDef_3(t, f_124, f_124, d_124);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = Rec_2(t, f_124, d_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  x_67 :
  if(match_cons(y_67, sym_Rec_2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      t = (ATerm) ATinsert(ATempty, not_null(z_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  i_68 = t;
  h_68 :
  if(match_cons(i_68, sym_SDef_3))
    {
      j_68 = ATgetArgument(i_68, 0);
      k_68 = ATgetArgument(i_68, 1);
      l_68 = ATgetArgument(i_68, 2);
      {
        t = not_null(k_68);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
            p_68 = t;
            g_68 :
            if(match_cons(p_68, sym_VarDec_2))
              {
                q_68 = ATgetArgument(p_68, 0);
                r_68 = ATgetArgument(p_68, 1);
                t = not_null(q_68);
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
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  z_68 = t;
  y_68 :
  if(match_cons(z_68, sym_Let_2))
    {
      a_69 = ATgetArgument(z_68, 0);
      b_69 = ATgetArgument(z_68, 1);
      {
        t = not_null(a_69);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,q_69 = NULL;
            l_69 = t;
            x_68 :
            if(match_cons(l_69, sym_SDef_3))
              {
                m_69 = ATgetArgument(l_69, 0);
                n_69 = ATgetArgument(l_69, 1);
                q_69 = ATgetArgument(l_69, 2);
                t = not_null(m_69);
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
ATerm SVar_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm l_70 = NULL,m_70 = NULL;
  l_70 = t;
  k_70 :
  if(match_cons(l_70, sym_SVar_1))
    {
      m_70 = ATgetArgument(l_70, 0);
      {
        ATerm v_70 = NULL,l_71 = NULL;
        ATerm w_70 = NULL;
        t = SSLgetAnnotations(not_null(l_70));
        {
          w_70 = t;
          if(((v_70 != NULL) && (v_70 != w_70)))
            _fail(w_70);
          else
            v_70 = w_70;
        }
        {
          t = not_null(m_70);
          {
            ATerm u_71 = NULL;
            t = t_85(t);
            {
              l_71 = t;
              {
                ATerm v_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(l_71)), not_null(v_70));
                {
                  v_71 = t;
                  if(((u_71 != NULL) && (u_71 != v_71)))
                    _fail(v_71);
                  else
                    u_71 = v_71;
                }
                t = not_null(u_71);
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
ATerm tpaste_1 (ATerm t, ATerm y_123 (ATerm))
{
  t = Scope_2(t, y_123, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm f_72 = NULL,g_72 = NULL;
  f_72 = t;
  e_72 :
  if(match_cons(f_72, sym_DynamicRules_1))
    {
      g_72 = ATgetArgument(f_72, 0);
      {
        ATerm j_72 = NULL,l_72 = NULL;
        ATerm k_72 = NULL;
        t = SSLgetAnnotations(not_null(f_72));
        {
          k_72 = t;
          if(((j_72 != NULL) && (j_72 != k_72)))
            _fail(k_72);
          else
            j_72 = k_72;
        }
        {
          t = not_null(g_72);
          {
            ATerm n_72 = NULL;
            t = y_87(t);
            {
              l_72 = t;
              {
                ATerm o_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(l_72)), not_null(j_72));
                {
                  o_72 = t;
                  if(((n_72 != NULL) && (n_72 != o_72)))
                    _fail(o_72);
                  else
                    n_72 = o_72;
                }
                t = not_null(n_72);
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
ATerm Scope_2 (ATerm t, ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  ATerm j_73 = NULL,l_73 = NULL,x_73 = NULL;
  j_73 = t;
  i_73 :
  if(match_cons(j_73, sym_Scope_2))
    {
      l_73 = ATgetArgument(j_73, 0);
      x_73 = ATgetArgument(j_73, 1);
      {
        ATerm b_74 = NULL,d_74 = NULL;
        ATerm c_74 = NULL;
        t = SSLgetAnnotations(not_null(j_73));
        {
          c_74 = t;
          if(((b_74 != NULL) && (b_74 != c_74)))
            _fail(c_74);
          else
            b_74 = c_74;
        }
        {
          t = not_null(l_73);
          {
            ATerm f_74 = NULL;
            t = s_84(t);
            {
              d_74 = t;
              {
                t = not_null(x_73);
                {
                  ATerm h_74 = NULL;
                  t = t_84(t);
                  {
                    f_74 = t;
                    {
                      ATerm i_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(d_74), not_null(f_74)), not_null(b_74));
                      {
                        i_74 = t;
                        if(((h_74 != NULL) && (h_74 != i_74)))
                          _fail(i_74);
                        else
                          h_74 = i_74;
                      }
                      t = not_null(h_74);
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
ATerm tboundin_3 (ATerm t, ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm))
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_124, z_123);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = DynamicRules_1(t, z_123);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL;
  n_75 = t;
  m_75 :
  if(match_cons(n_75, sym_DynamicRules_1))
    {
      o_75 = ATgetArgument(n_75, 0);
      {
        t = not_null(o_75);
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
  ATerm t_75 = NULL,u_75 = NULL;
  t_75 = t;
  s_75 :
  if(match_cons(t_75, sym_Var_1))
    {
      u_75 = ATgetArgument(t_75, 0);
      t = (ATerm) ATinsert(ATempty, not_null(u_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm u_78 = NULL,t_79 = NULL,u_79 = NULL;
  u_78 = t;
  t_78 :
  if(match_cons(u_78, sym__2))
    {
      t_79 = ATgetArgument(u_78, 0);
      u_79 = ATgetArgument(u_78, 1);
      {
        t = not_null(t_79);
        {
          ATerm z_79 (ATerm t)
          {
            ATerm m_23 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_79);
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
                        t = not_null(u_79);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_106, n_4);
                      t = z_79(t);
                      ;
                      LocalPopChoice(p_23);
                    }
                  else
                    {
                      t = o_23;
                      t = Cons_2(t, _id, z_79);
                    }
                }
              }
            return(t);
          }
          t = z_79(t);
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
ATerm foldr_3 (ATerm t, ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_107(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
        e_80 = t;
        d_80 :
        if(((ATgetType(e_80) == AT_LIST) && !(ATisEmpty(e_80))))
          {
            f_80 = ATgetFirst((ATermList) e_80);
            g_80 = (ATerm) ATgetNext((ATermList) e_80);
            {
              ATerm j_80 = NULL,l_80 = NULL;
              ATerm s_23;
              s_23 = t;
              {
                ATerm k_80 = NULL;
                t = not_null(f_80);
                {
                  t = i_107(t);
                  {
                    k_80 = t;
                    if(((j_80 != NULL) && (j_80 != k_80)))
                      _fail(k_80);
                    else
                      j_80 = k_80;
                  }
                }
              }
              t = s_23;
              {
                ATerm m_80 = NULL;
                t = not_null(g_80);
                {
                  t = foldr_3(t, g_107, h_107, i_107);
                  {
                    m_80 = t;
                    if(((l_80 != NULL) && (l_80 != m_80)))
                      _fail(m_80);
                    else
                      l_80 = m_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_80), not_null(l_80));
                  t = h_107(t);
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
ATerm crush_3 (ATerm t, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm u_80 = NULL;
  ATerm w_80 = NULL;
  u_80 = t;
  {
    ATerm x_80 = NULL;
    ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
    t = not_null(u_80);
    {
      x_80 = t;
      {
        t = SSL_explode_term(not_null(x_80));
        {
          z_80 = t;
          t_80 :
          if(match_cons(z_80, sym__2))
            {
              a_81 = ATgetArgument(z_80, 0);
              b_81 = ATgetArgument(z_80, 1);
              if(((w_80 != NULL) && (w_80 != b_81)))
                _fail(b_81);
              else
                w_80 = b_81;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_80);
      t = foldr_3(t, e_106, f_106, g_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL;
  h_81 = t;
  g_81 :
  if(match_cons(h_81, sym__2))
    {
      i_81 = ATgetArgument(h_81, 0);
      j_81 = ATgetArgument(h_81, 1);
      if(((i_81 != NULL) && (i_81 != j_81)))
        _fail(j_81);
      else
        i_81 = j_81;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_106 (ATerm), ATerm s_106 (ATerm))
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  o_81 :
  if(((ATgetType(r_81) == AT_LIST) && !(ATisEmpty(r_81))))
    {
      s_81 = ATgetFirst((ATermList) r_81);
      t_81 = (ATerm) ATgetNext((ATermList) r_81);
      {
        t = s_106(t);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm w_81 = NULL;
            w_81 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_81), not_null(w_81));
              t = r_106(t);
            }
            return(t);
          }
          t = fetch_1(t, o_4);
        }
        t = not_null(t_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
  e_83 = t;
  d_83 :
  if(match_cons(e_83, sym__2))
    {
      f_83 = ATgetArgument(e_83, 0);
      g_83 = ATgetArgument(e_83, 1);
      {
        t = not_null(f_83);
        {
          ATerm k_83 (ATerm t)
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
                        t = not_null(g_83);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_106, p_4);
                      t = k_83(t);
                      ;
                      LocalPopChoice(w_23);
                    }
                  else
                    {
                      t = v_23;
                      t = Cons_2(t, _id, k_83);
                    }
                }
              }
            return(t);
          }
          t = k_83(t);
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
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  o_83 = t;
  m_83 :
  if(match_cons(o_83, sym__2))
    {
      p_83 = ATgetArgument(o_83, 0);
      q_83 = ATgetArgument(o_83, 1);
      n_83 :
      if(((ATgetType(q_83) == AT_LIST) && !(ATisEmpty(q_83))))
        {
          r_83 = ATgetFirst((ATermList) q_83);
          s_83 = (ATerm) ATgetNext((ATermList) q_83);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_83)), not_null(r_83)), not_null(s_83));
        }
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
  ATerm h_84 = NULL,m_84 = NULL,n_84 = NULL,q_84 = NULL,r_84 = NULL;
  h_84 = t;
  f_84 :
  if(((ATgetType(h_84) == AT_LIST) && !(ATisEmpty(h_84))))
    {
      m_84 = ATgetFirst((ATermList) h_84);
      r_84 = (ATerm) ATgetNext((ATermList) h_84);
      g_84 :
      if(match_cons(m_84, sym__2))
        {
          n_84 = ATgetArgument(m_84, 0);
          q_84 = ATgetArgument(m_84, 1);
          {
            ATerm x_84 = NULL,y_84 = NULL,e_85 = NULL,q_85 = NULL;
            ATerm x_23;
            x_23 = t;
            {
              ATerm z_84 = NULL;
              ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
              t = not_null(q_84);
              {
                z_84 = t;
                {
                  t = SSL_explode_term(not_null(z_84));
                  {
                    b_85 = t;
                    a_84 :
                    if(match_cons(b_85, sym__2))
                      {
                        c_85 = ATgetArgument(b_85, 0);
                        d_85 = ATgetArgument(b_85, 1);
                        {
                          if(((x_84 != NULL) && (x_84 != c_85)))
                            _fail(c_85);
                          else
                            x_84 = c_85;
                          if(((y_84 != NULL) && (y_84 != d_85)))
                            _fail(d_85);
                          else
                            y_84 = d_85;
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
                ATerm l_85 = NULL;
                ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
                t = not_null(n_84);
                {
                  l_85 = t;
                  {
                    t = SSL_explode_term(not_null(l_85));
                    {
                      n_85 = t;
                      d_84 :
                      if(match_cons(n_85, sym__2))
                        {
                          o_85 = ATgetArgument(n_85, 0);
                          p_85 = ATgetArgument(n_85, 1);
                          {
                            if(((x_84 != NULL) && (x_84 != o_85)))
                              _fail(o_85);
                            else
                              x_84 = o_85;
                            if(((e_85 != NULL) && (e_85 != p_85)))
                              _fail(p_85);
                            else
                              e_85 = p_85;
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
                ATerm r_85 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_85), not_null(y_84));
                {
                  t = zip_1(t, _id);
                  {
                    r_85 = t;
                    if(((q_85 != NULL) && (q_85 != r_85)))
                      _fail(r_85);
                    else
                      q_85 = r_85;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_85), not_null(r_84));
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
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  j_86 = t;
  h_86 :
  if(((ATgetType(j_86) == AT_LIST) && !(ATisEmpty(j_86))))
    {
      k_86 = ATgetFirst((ATermList) j_86);
      n_86 = (ATerm) ATgetNext((ATermList) j_86);
      i_86 :
      if(match_cons(k_86, sym__2))
        {
          l_86 = ATgetArgument(k_86, 0);
          m_86 = ATgetArgument(k_86, 1);
          {
            ATerm r_86 = NULL;
            if(((l_86 != NULL) && (l_86 != m_86)))
              _fail(m_86);
            else
              l_86 = m_86;
            {
              if(((r_86 != NULL) && (r_86 != n_86)))
                _fail(n_86);
              else
                r_86 = n_86;
              t = not_null(r_86);
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
ATerm while_not_2 (ATerm t, ATerm k_111 (ATerm), ATerm l_111 (ATerm))
{
  ATerm t_86 (ATerm t)
  {
    ATerm z_23 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_111(t);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = z_23;
        {
          t = l_111(t);
          t = t_86(t);
        }
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm))
{
  t = n_111(t);
  t = while_not_2(t, o_111, p_111);
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
        ATerm v_86 = NULL;
        v_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_86));
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
ATerm free_vars_3 (ATerm t, ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_87 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_122(t);
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
              ATerm a_87 = NULL;
              ATerm b_25;
              b_25 = t;
              {
                ATerm b_87 = NULL;
                t = w_122(t);
                {
                  b_87 = t;
                  if(((a_87 != NULL) && (a_87 != b_87)))
                    _fail(b_87);
                  else
                    a_87 = b_87;
                }
              }
              t = b_25;
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = not_null(a_87);
                    return(t);
                  }
                  t = split_2(t, d_87, w_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_122(t, u_4, d_87, v_4);
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
                t = crush_3(t, y_4, union_0, d_87);
              }
            }
        }
      }
    return(t);
  }
  t = d_87(t);
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
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  i_87 :
  if(match_cons(n_87, sym_LRule_1))
    {
      o_87 = ATgetArgument(n_87, 0);
      j_87 :
      if(match_cons(o_87, sym_Rule_3))
        {
          k_87 = ATgetArgument(o_87, 0);
          l_87 = ATgetArgument(o_87, 1);
          m_87 = ATgetArgument(o_87, 2);
          {
            t = not_null(k_87);
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
      if(match_cons(n_87, sym_Scope_2))
        {
          o_87 = ATgetArgument(n_87, 0);
          p_87 = ATgetArgument(n_87, 1);
          t = not_null(o_87);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm q_88 = NULL,r_88 = NULL;
  q_88 = t;
  p_88 :
  if(match_cons(q_88, sym_Var_1))
    {
      r_88 = ATgetArgument(q_88, 0);
      {
        ATerm h_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_88 = NULL,w_88 = NULL;
            ATerm v_88 = NULL;
            t = SSLgetAnnotations(not_null(q_88));
            {
              v_88 = t;
              if(((u_88 != NULL) && (u_88 != v_88)))
                _fail(v_88);
              else
                u_88 = v_88;
            }
            {
              t = not_null(r_88);
              {
                ATerm y_88 = NULL;
                t = o_0(t);
                {
                  w_88 = t;
                  {
                    ATerm z_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_88)), not_null(u_88));
                    {
                      z_88 = t;
                      if(((y_88 != NULL) && (y_88 != z_88)))
                        _fail(z_88);
                      else
                        y_88 = z_88;
                    }
                    t = not_null(y_88);
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
              ATerm c_89 = NULL,e_89 = NULL;
              ATerm d_89 = NULL;
              t = SSLgetAnnotations(not_null(q_88));
              {
                d_89 = t;
                if(((c_89 != NULL) && (c_89 != d_89)))
                  _fail(d_89);
                else
                  c_89 = d_89;
              }
              {
                t = not_null(r_88);
                {
                  ATerm g_89 = NULL;
                  t = o_0(t);
                  {
                    e_89 = t;
                    {
                      ATerm h_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_89)), not_null(c_89));
                      {
                        h_89 = t;
                        if(((g_89 != NULL) && (g_89 != h_89)))
                          _fail(h_89);
                        else
                          g_89 = h_89;
                      }
                      t = not_null(g_89);
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
ATerm DistBinding_2 (ATerm t, ATerm q_121 (ATerm), ATerm r_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym__3))
    {
      v_89 = ATgetArgument(u_89, 0);
      w_89 = ATgetArgument(u_89, 1);
      x_89 = ATgetArgument(u_89, 2);
      {
        t = not_null(v_89);
        {
          ATerm a_5 (ATerm t)
          {
            ATerm b_90 = NULL;
            b_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_90), not_null(x_89));
              t = q_121(t);
            }
            return(t);
          }
          ATerm b_5 (ATerm t)
          {
            ATerm d_90 = NULL;
            d_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(w_89));
              t = q_121(t);
            }
            return(t);
          }
          t = r_121(t, a_5, b_5, _id);
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
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
  k_90 = t;
  j_90 :
  if(match_cons(k_90, sym__2))
    {
      l_90 = ATgetArgument(k_90, 0);
      m_90 = ATgetArgument(k_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_90)), not_null(l_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL;
  u_90 = t;
  r_90 :
  if(match_cons(u_90, sym__2))
    {
      v_90 = ATgetArgument(u_90, 0);
      y_90 = ATgetArgument(u_90, 1);
      s_90 :
      if(((ATgetType(v_90) == AT_LIST) && !(ATisEmpty(v_90))))
        {
          w_90 = ATgetFirst((ATermList) v_90);
          x_90 = (ATerm) ATgetNext((ATermList) v_90);
          t_90 :
          if(((ATgetType(y_90) == AT_LIST) && !(ATisEmpty(y_90))))
            {
              z_90 = ATgetFirst((ATermList) y_90);
              a_91 = (ATerm) ATgetNext((ATermList) y_90);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_90), not_null(z_90)), (ATerm) ATmakeAppl(sym__2, not_null(x_90), not_null(a_91)));
            }
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
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
  k_91 = t;
  h_91 :
  if(match_cons(k_91, sym__2))
    {
      l_91 = ATgetArgument(k_91, 0);
      m_91 = ATgetArgument(k_91, 1);
      i_91 :
      if(((ATgetType(l_91) == AT_LIST) && ATisEmpty(l_91)))
        {
          j_91 :
          if(((ATgetType(m_91) == AT_LIST) && ATisEmpty(m_91)))
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
ATerm genzip_4 (ATerm t, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm))
{
  ATerm o_91 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          t = w_102(t);
          {
            t = _2(t, y_102, o_91);
            t = x_102(t);
          }
        }
      }
    return(t);
  }
  t = o_91(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm a_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_103);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm k_121 (ATerm), ATerm l_121 (ATerm, ATerm (ATerm)))
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
  w_91 = t;
  v_91 :
  if(match_cons(w_91, sym__2))
    {
      x_91 = ATgetArgument(w_91, 0);
      y_91 = ATgetArgument(w_91, 1);
      {
        ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,j_92 = NULL;
        ATerm p_25;
        p_25 = t;
        {
          ATerm e_92 = NULL;
          t = not_null(x_91);
          {
            ATerm f_92 = NULL;
            t = k_121(t);
            {
              e_92 = t;
              {
                if(((b_92 != NULL) && (b_92 != e_92)))
                  _fail(e_92);
                else
                  b_92 = e_92;
                {
                  ATerm g_92 = NULL,i_92 = NULL;
                  t = map_1(t, new_0);
                  {
                    f_92 = t;
                    {
                      if(((c_92 != NULL) && (c_92 != f_92)))
                        _fail(f_92);
                      else
                        c_92 = f_92;
                      {
                        ATerm h_92 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_92), not_null(c_92));
                        {
                          t = zip_1(t, _id);
                          {
                            h_92 = t;
                            if(((g_92 != NULL) && (g_92 != h_92)))
                              _fail(h_92);
                            else
                              g_92 = h_92;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_92), not_null(y_91));
                          {
                            t = conc_0(t);
                            {
                              i_92 = t;
                              if(((d_92 != NULL) && (d_92 != i_92)))
                                _fail(i_92);
                              else
                                d_92 = i_92;
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
          ATerm k_92 = NULL;
          t = not_null(x_91);
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(c_92);
              return(t);
            }
            t = l_121(t, c_5);
            {
              k_92 = t;
              if(((j_92 != NULL) && (j_92 != k_92)))
                _fail(k_92);
              else
                j_92 = k_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_92), not_null(y_91), not_null(d_92));
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
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  u_92 = t;
  s_92 :
  if(match_cons(u_92, sym__2))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      t_92 :
      if(((ATgetType(w_92) == AT_LIST) && !(ATisEmpty(w_92))))
        {
          x_92 = ATgetFirst((ATermList) w_92);
          y_92 = (ATerm) ATgetNext((ATermList) w_92);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_92), not_null(y_92));
        }
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
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  g_93 = t;
  d_93 :
  if(match_cons(g_93, sym__2))
    {
      h_93 = ATgetArgument(g_93, 0);
      i_93 = ATgetArgument(g_93, 1);
      e_93 :
      if(((ATgetType(i_93) == AT_LIST) && !(ATisEmpty(i_93))))
        {
          j_93 = ATgetFirst((ATermList) i_93);
          m_93 = (ATerm) ATgetNext((ATermList) i_93);
          f_93 :
          if(match_cons(j_93, sym__2))
            {
              k_93 = ATgetArgument(j_93, 0);
              l_93 = ATgetArgument(j_93, 1);
              {
                ATerm o_93 = NULL;
                if(((h_93 != NULL) && (h_93 != k_93)))
                  _fail(k_93);
                else
                  h_93 = k_93;
                {
                  if(((o_93 != NULL) && (o_93 != l_93)))
                    _fail(l_93);
                  else
                    o_93 = l_93;
                  t = not_null(o_93);
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
ATerm RnVar_1 (ATerm t, ATerm v_121 (ATerm, ATerm (ATerm)))
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL;
  t_93 = t;
  s_93 :
  if(match_cons(t_93, sym__2))
    {
      u_93 = ATgetArgument(t_93, 0);
      v_93 = ATgetArgument(t_93, 1);
      {
        t = not_null(u_93);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(v_93);
              return(t);
            }
            t = split_2(t, _id, e_5);
            t = lookup_0(t);
            return(t);
          }
          t = v_121(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm f_116 (ATerm))
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(match_cons(c_94, sym__2))
    {
      d_94 = ATgetArgument(c_94, 0);
      e_94 = ATgetArgument(c_94, 1);
      {
        t = not_null(d_94);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm h_94 = NULL;
            h_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), not_null(e_94));
              t = f_116(t);
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
ATerm env_alltd_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm l_94 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = all_dist_1(t, l_94);
      }
    return(t);
  }
  t = l_94(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm f_121 (ATerm, ATerm (ATerm)), ATerm g_121 (ATerm), ATerm h_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_121 (ATerm, ATerm (ATerm)))
{
  ATerm n_94 = NULL;
  n_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), (ATerm) ATempty);
    {
      ATerm q_94 (ATerm t)
      {
        ATerm g_5 (ATerm t)
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, f_121);
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              {
                t = RnBinding_2(t, g_121, i_121);
                t = DistBinding_2(t, q_94, h_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, g_5);
        return(t);
      }
      t = q_94(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_94 (ATerm t, ATerm s_94 (ATerm))
  {
    t = Scope_2(t, s_94, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_94);
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
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  u_94 :
  if(((ATgetType(v_94) == AT_LIST) && !(ATisEmpty(v_94))))
    {
      w_94 = ATgetFirst((ATermList) v_94);
      x_94 = (ATerm) ATgetNext((ATermList) v_94);
      t = not_null(w_94);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
  c_95 = t;
  b_95 :
  if(match_cons(c_95, sym__2))
    {
      d_95 = ATgetArgument(c_95, 0);
      e_95 = ATgetArgument(c_95, 1);
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
ATerm rewrite_1 (ATerm t, ATerm r_108 (ATerm))
{
  ATerm k_95 = NULL;
  ATerm m_95 = NULL;
  k_95 = t;
  {
    ATerm p_95 = NULL;
    t = term_l_26;
    {
      t = r_108(t);
      {
        p_95 = t;
        if(((m_95 != NULL) && (m_95 != p_95)))
          _fail(p_95);
        else
          m_95 = p_95;
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
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL;
  d_96 = t;
  b_96 :
  if(match_cons(d_96, sym_Call_2))
    {
      e_96 = ATgetArgument(d_96, 0);
      g_96 = ATgetArgument(d_96, 1);
      c_96 :
      if(match_cons(e_96, sym_SVar_1))
        {
          f_96 = ATgetArgument(e_96, 0);
          {
            ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,z_96 = NULL;
            ATerm o_26;
            o_26 = t;
            {
              ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_96)), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
              {
                ATerm h_5 (ATerm t)
                {
                  t = term_t_26;
                  return(t);
                }
                t = rewrite_1(t, h_5);
                {
                  r_96 = t;
                  w_95 :
                  if(match_cons(r_96, sym_Defined_3))
                    {
                      s_96 = ATgetArgument(r_96, 0);
                      t_96 = ATgetArgument(r_96, 1);
                      u_96 = ATgetArgument(r_96, 2);
                      x_95 :
                      if(match_string(s_96, "b_0"))
                        {
                          ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
                          if(((n_96 != NULL) && (n_96 != t_96)))
                            _fail(t_96);
                          else
                            n_96 = t_96;
                          {
                            if(((o_96 != NULL) && (o_96 != u_96)))
                              _fail(u_96);
                            else
                              o_96 = u_96;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_96), not_null(n_96), not_null(o_96));
                              {
                                t = strename_0(t);
                                {
                                  v_96 = t;
                                  v_95 :
                                  if(match_cons(v_96, sym_SDef_3))
                                    {
                                      w_96 = ATgetArgument(v_96, 0);
                                      x_96 = ATgetArgument(v_96, 1);
                                      y_96 = ATgetArgument(v_96, 2);
                                      {
                                        if(((f_96 != NULL) && (f_96 != w_96)))
                                          _fail(w_96);
                                        else
                                          f_96 = w_96;
                                        {
                                          if(((p_96 != NULL) && (p_96 != x_96)))
                                            _fail(x_96);
                                          else
                                            p_96 = x_96;
                                          if(((q_96 != NULL) && (q_96 != y_96)))
                                            _fail(y_96);
                                          else
                                            q_96 = y_96;
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
              ATerm e_97 = NULL;
              t = not_null(p_96);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
                  a_97 = t;
                  z_95 :
                  if(match_cons(a_97, sym_VarDec_2))
                    {
                      b_97 = ATgetArgument(a_97, 0);
                      c_97 = ATgetArgument(a_97, 1);
                      t = not_null(b_97);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  e_97 = t;
                  if(((z_96 != NULL) && (z_96 != e_97)))
                    _fail(e_97);
                  else
                    z_96 = e_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_96), not_null(g_96), not_null(q_96));
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
  ATerm t_97 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm u_97 = NULL;
    t = new_0(t);
    {
      u_97 = t;
      {
        if(((t_97 != NULL) && (t_97 != u_97)))
          _fail(u_97);
        else
          t_97 = u_97;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_y_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_97)), (ATerm) ATempty)));
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
                ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
                v_97 = t;
                m_97 :
                if(match_cons(v_97, sym_LChoice_2))
                  {
                    w_97 = ATgetArgument(v_97, 0);
                    a_98 = ATgetArgument(v_97, 1);
                    n_97 :
                    if(match_cons(w_97, sym_Call_2))
                      {
                        x_97 = ATgetArgument(w_97, 0);
                        z_97 = ATgetArgument(w_97, 1);
                        q_97 :
                        if(match_cons(x_97, sym_SVar_1))
                          {
                            y_97 = ATgetArgument(x_97, 0);
                            r_97 :
                            if(((ATgetType(z_97) == AT_LIST) && ATisEmpty(z_97)))
                              {
                                s_97 :
                                if(match_cons(a_98, sym_Id_0))
                                  {
                                    if(((t_97 != NULL) && (t_97 != y_97)))
                                      _fail(y_97);
                                    else
                                      t_97 = y_97;
                                  }
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
ATerm assert_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL;
  k_98 = t;
  j_98 :
  if(match_cons(k_98, sym__2))
    {
      l_98 = ATgetArgument(k_98, 0);
      m_98 = ATgetArgument(k_98, 1);
      {
        ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
        ATerm l_27;
        l_27 = t;
        {
          ATerm s_98 = NULL;
          ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
          t = p_108(t);
          {
            s_98 = t;
            {
              if(((p_98 != NULL) && (p_98 != s_98)))
                _fail(s_98);
              else
                p_98 = s_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_98), not_null(l_98), not_null(m_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_27 = t;
                    int q_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_98), term_l_17);
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
                      t_98 = t;
                      i_98 :
                      if(((ATgetType(t_98) == AT_LIST) && !(ATisEmpty(t_98))))
                        {
                          u_98 = ATgetFirst((ATermList) t_98);
                          v_98 = (ATerm) ATgetNext((ATermList) t_98);
                          {
                            if(((q_98 != NULL) && (q_98 != u_98)))
                              _fail(u_98);
                            else
                              q_98 = u_98;
                            {
                              if(((r_98 != NULL) && (r_98 != v_98)))
                                _fail(v_98);
                              else
                                r_98 = v_98;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_98), term_l_17, (ATerm) ATinsert(CheckATermList(not_null(r_98)), (ATerm) ATinsert(CheckATermList(not_null(q_98)), not_null(l_98))));
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
  ATerm b_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL;
  b_99 = t;
  a_99 :
  if(match_cons(b_99, sym_SDef_3))
    {
      d_99 = ATgetArgument(b_99, 0);
      e_99 = ATgetArgument(b_99, 1);
      f_99 = ATgetArgument(b_99, 2);
      {
        ATerm r_27;
        r_27 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_99)), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_27, not_null(e_99), not_null(f_99)));
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
ATerm Strategies_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm p_99 = NULL,q_99 = NULL;
  p_99 = t;
  o_99 :
  if(match_cons(p_99, sym_Strategies_1))
    {
      q_99 = ATgetArgument(p_99, 0);
      {
        ATerm v_99 = NULL,z_99 = NULL;
        ATerm y_99 = NULL;
        t = SSLgetAnnotations(not_null(p_99));
        {
          y_99 = t;
          if(((v_99 != NULL) && (v_99 != y_99)))
            _fail(y_99);
          else
            v_99 = y_99;
        }
        {
          t = not_null(q_99);
          {
            ATerm b_100 = NULL;
            t = c_87(t);
            {
              z_99 = t;
              {
                ATerm c_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_99)), not_null(v_99));
                {
                  c_100 = t;
                  if(((b_100 != NULL) && (b_100 != c_100)))
                    _fail(c_100);
                  else
                    b_100 = c_100;
                }
                t = not_null(b_100);
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
ATerm Signature_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm m_100 = NULL,n_100 = NULL;
  m_100 = t;
  l_100 :
  if(match_cons(m_100, sym_Signature_1))
    {
      n_100 = ATgetArgument(m_100, 0);
      {
        ATerm q_100 = NULL,t_100 = NULL;
        ATerm r_100 = NULL;
        t = SSLgetAnnotations(not_null(m_100));
        {
          r_100 = t;
          if(((q_100 != NULL) && (q_100 != r_100)))
            _fail(r_100);
          else
            q_100 = r_100;
        }
        {
          t = not_null(n_100);
          {
            ATerm x_100 = NULL;
            t = z_86(t);
            {
              t_100 = t;
              {
                ATerm y_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_100)), not_null(q_100));
                {
                  y_100 = t;
                  if(((x_100 != NULL) && (x_100 != y_100)))
                    _fail(y_100);
                  else
                    x_100 = y_100;
                }
                t = not_null(x_100);
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
ATerm Specification_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm m_101 = NULL,n_101 = NULL;
  m_101 = t;
  l_101 :
  if(match_cons(m_101, sym_Specification_1))
    {
      n_101 = ATgetArgument(m_101, 0);
      {
        ATerm q_101 = NULL,s_101 = NULL;
        ATerm r_101 = NULL;
        t = SSLgetAnnotations(not_null(m_101));
        {
          r_101 = t;
          if(((q_101 != NULL) && (q_101 != r_101)))
            _fail(r_101);
          else
            q_101 = r_101;
        }
        {
          t = not_null(n_101);
          {
            ATerm u_101 = NULL;
            t = e_87(t);
            {
              s_101 = t;
              {
                ATerm v_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_101)), not_null(q_101));
                {
                  v_101 = t;
                  if(((u_101 != NULL) && (u_101 != v_101)))
                    _fail(v_101);
                  else
                    u_101 = v_101;
                }
                t = not_null(u_101);
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
ATerm _2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL;
  g_102 = t;
  f_102 :
  if(match_cons(g_102, sym__2))
    {
      h_102 = ATgetArgument(g_102, 0);
      i_102 = ATgetArgument(g_102, 1);
      {
        ATerm m_102 = NULL,o_102 = NULL;
        ATerm n_102 = NULL;
        t = SSLgetAnnotations(not_null(g_102));
        {
          n_102 = t;
          if(((m_102 != NULL) && (m_102 != n_102)))
            _fail(n_102);
          else
            m_102 = n_102;
        }
        {
          t = not_null(h_102);
          {
            ATerm q_102 = NULL;
            t = z_82(t);
            {
              o_102 = t;
              {
                t = not_null(i_102);
                {
                  ATerm s_102 = NULL;
                  t = a_83(t);
                  {
                    q_102 = t;
                    {
                      ATerm t_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_102), not_null(q_102)), not_null(m_102));
                      {
                        t_102 = t;
                        if(((s_102 != NULL) && (s_102 != t_102)))
                          _fail(t_102);
                        else
                          s_102 = t_102;
                      }
                      t = not_null(s_102);
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
  ATerm i_103 = NULL;
  ATerm t_27;
  t_27 = t;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm j_103 = NULL,k_103 = NULL;
      j_103 = t;
      h_103 :
      if(match_cons(j_103, sym_Program_1))
        {
          k_103 = ATgetArgument(j_103, 0);
          if(((i_103 != NULL) && (i_103 != k_103)))
            _fail(k_103);
          else
            i_103 = k_103;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), not_null(i_103)), term_u_27));
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
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL;
  o_103 = t;
  n_103 :
  if(match_cons(o_103, sym__2))
    {
      p_103 = ATgetArgument(o_103, 0);
      q_103 = ATgetArgument(o_103, 1);
      {
        ATerm x_27;
        x_27 = t;
        t = SSL_printnl(not_null(p_103), not_null(q_103));
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
  ATerm v_103 = NULL;
  v_103 = t;
  t = SSL_implode_string(not_null(v_103));
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
        ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
        a_104 = t;
        z_103 :
        if(((ATgetType(a_104) == AT_LIST) && !(ATisEmpty(a_104))))
          {
            b_104 = ATgetFirst((ATermList) a_104);
            c_104 = (ATerm) ATgetNext((ATermList) a_104);
            {
              t = not_null(b_104);
              {
                ATerm w_5 (ATerm t)
                {
                  t = not_null(c_104);
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
  ATerm m_104 = NULL;
  ATerm o_104 = NULL;
  m_104 = t;
  {
    ATerm p_104 = NULL;
    ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
    t = not_null(m_104);
    {
      p_104 = t;
      {
        t = SSL_explode_term(not_null(p_104));
        {
          r_104 = t;
          k_104 :
          if(match_cons(r_104, sym__2))
            {
              s_104 = ATgetArgument(r_104, 0);
              t_104 = ATgetArgument(r_104, 1);
              l_104 :
              if(match_string(s_104, ""))
                {
                  if(((o_104 != NULL) && (o_104 != t_104)))
                    _fail(t_104);
                  else
                    o_104 = t_104;
                }
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
      t = not_null(o_104);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm x_104 (ATerm t)
  {
    ATerm a_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_104);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = a_28;
        {
          t = Nil_0(t);
          t = j_101(t);
        }
      }
    return(t);
  }
  t = x_104(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  a_105 = t;
  z_104 :
  if(match_cons(a_105, sym__2))
    {
      b_105 = ATgetArgument(a_105, 0);
      c_105 = ATgetArgument(a_105, 1);
      {
        t = not_null(b_105);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(c_105);
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
  ATerm h_105 = NULL;
  h_105 = t;
  t = SSL_explode_string(not_null(h_105));
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
  ATerm l_105 = NULL;
  l_105 = t;
  t = SSL_is_string(not_null(l_105));
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
              ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
              u_105 = t;
              t_105 :
              if(match_cons(u_105, sym_Path_1))
                {
                  v_105 = ATgetArgument(u_105, 0);
                  t = not_null(v_105);
                }
              else
                {
                  if(match_cons(u_105, sym_Var_1))
                    {
                      v_105 = ATgetArgument(u_105, 0);
                      {
                        t = not_null(v_105);
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
                      if(match_cons(u_105, sym_Prefix_2))
                        {
                          v_105 = ATgetArgument(u_105, 0);
                          w_105 = ATgetArgument(u_105, 1);
                          {
                            ATerm b_106 = NULL,i_106 = NULL;
                            ATerm x_28;
                            x_28 = t;
                            {
                              ATerm h_106 = NULL;
                              t = not_null(v_105);
                              {
                                t = eval_config_0(t);
                                {
                                  h_106 = t;
                                  if(((b_106 != NULL) && (b_106 != h_106)))
                                    _fail(h_106);
                                  else
                                    b_106 = h_106;
                                }
                              }
                            }
                            t = x_28;
                            {
                              ATerm l_106 = NULL;
                              t = not_null(w_105);
                              {
                                t = eval_config_0(t);
                                {
                                  l_106 = t;
                                  if(((i_106 != NULL) && (i_106 != l_106)))
                                    _fail(l_106);
                                  else
                                    i_106 = l_106;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_106), not_null(i_106));
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
  ATerm y_106 = NULL;
  y_106 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_28, not_null(y_106));
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
              ATerm a_107 = NULL;
              ATerm b_107 = NULL;
              b_107 = t;
              if(((a_107 != NULL) && (a_107 != b_107)))
                _fail(b_107);
              else
                a_107 = b_107;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_28, not_null(y_106), not_null(a_107));
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
  ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
  l_107 = t;
  k_107 :
  if(match_cons(l_107, sym__2))
    {
      m_107 = ATgetArgument(l_107, 0);
      n_107 = ATgetArgument(l_107, 1);
      t = SSL_WriteToTextFile(not_null(m_107), not_null(n_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL;
  t_107 = t;
  s_107 :
  if(match_cons(t_107, sym__2))
    {
      u_107 = ATgetArgument(t_107, 0);
      v_107 = ATgetArgument(t_107, 1);
      t = SSL_WriteToBinaryFile(not_null(u_107), not_null(v_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_108 = NULL;
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
            ATerm e_108 = NULL,f_108 = NULL;
            e_108 = t;
            a_108 :
            if(match_cons(e_108, sym_Output_1))
              {
                f_108 = ATgetArgument(e_108, 0);
                if(((d_108 != NULL) && (d_108 != f_108)))
                  _fail(f_108);
                else
                  d_108 = f_108;
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
            ATerm g_108 = NULL;
            t = term_k_29;
            {
              g_108 = t;
              if(((d_108 != NULL) && (d_108 != g_108)))
                _fail(g_108);
              else
                d_108 = g_108;
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
        t = not_null(d_108);
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
              ATerm h_108 = NULL;
              h_108 = t;
              c_108 :
              if(!(match_cons(h_108, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm b_117 (ATerm))
{
  ATerm t_108 = NULL,v_108 = NULL,w_108 = NULL,z_108 = NULL;
  ATerm n_29;
  n_29 = t;
  t = dtime_0(t);
  t = n_29;
  {
    t = b_117(t);
    {
      ATerm o_29;
      o_29 = t;
      {
        ATerm u_108 = NULL;
        t = dtime_0(t);
        {
          u_108 = t;
          if(((t_108 != NULL) && (t_108 != u_108)))
            _fail(u_108);
          else
            t_108 = u_108;
        }
      }
      t = o_29;
      {
        v_108 = t;
        s_108 :
        if(match_cons(v_108, sym__2))
          {
            w_108 = ATgetArgument(v_108, 0);
            z_108 = ATgetArgument(v_108, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_108)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_108))), not_null(z_108));
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
ATerm debug_1 (ATerm t, ATerm x_108 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    ATerm g_109 = NULL,i_109 = NULL;
    ATerm q_29;
    q_29 = t;
    {
      ATerm h_109 = NULL;
      t = x_108(t);
      {
        h_109 = t;
        if(((g_109 != NULL) && (g_109 != h_109)))
          _fail(h_109);
        else
          g_109 = h_109;
      }
    }
    t = q_29;
    {
      ATerm j_109 = NULL;
      j_109 = t;
      if(((i_109 != NULL) && (i_109 != j_109)))
        _fail(j_109);
      else
        i_109 = j_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_109)), not_null(g_109)));
        t = printnl_0(t);
      }
    }
  }
  t = p_29;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_109 = NULL;
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_109 = NULL;
      o_109 = t;
      {
        if(((n_109 != NULL) && (n_109 != o_109)))
          _fail(o_109);
        else
          n_109 = o_109;
        t = SSL_ReadFromFile(not_null(n_109));
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
ATerm split_2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm s_109 = NULL,u_109 = NULL;
  ATerm x_29;
  x_29 = t;
  {
    ATerm t_109 = NULL;
    t = w_99(t);
    {
      t_109 = t;
      if(((s_109 != NULL) && (s_109 != t_109)))
        _fail(t_109);
      else
        s_109 = t_109;
    }
  }
  t = x_29;
  {
    ATerm v_109 = NULL;
    t = x_99(t);
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
  ATerm y_29;
  y_29 = t;
  {
    ATerm d_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 (ATerm t)
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
        t = option_defined_1(t, i_6);
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = d_30;
        {
          ATerm e_110 = NULL;
          t = term_m_30;
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
  t = y_29;
  {
    ATerm j_6 (ATerm t)
    {
      t = not_null(b_110);
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
  ATerm o_6 (ATerm t)
  {
    ATerm o_31;
    o_31 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(m_110));
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
  ATerm q_110 = NULL;
  q_110 = t;
  t = SSL_string_to_int(not_null(q_110));
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
        ATerm a_111 = NULL;
        a_111 = t;
        t_110 :
        if(!(match_string(a_111, "-S")))
          {
            if(!(match_string(a_111, "--silent")))
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
              ATerm b_111 = NULL;
              b_111 = t;
              u_110 :
              if(!(match_string(b_111, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_6 (ATerm t)
            {
              ATerm e_111 = NULL;
              ATerm c_32;
              c_32 = t;
              {
                ATerm c_111 = NULL;
                ATerm d_111 = NULL;
                t = string_to_int_0(t);
                {
                  d_111 = t;
                  if(((c_111 != NULL) && (c_111 != d_111)))
                    _fail(d_111);
                  else
                    c_111 = d_111;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(c_111));
                  t = set_config_0(t);
                }
              }
              t = c_32;
              {
                ATerm f_111 = NULL;
                f_111 = t;
                if(((e_111 != NULL) && (e_111 != f_111)))
                  _fail(f_111);
                else
                  e_111 = f_111;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_111));
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
                ATerm g_111 = NULL;
                g_111 = t;
                z_110 :
                if(!(match_string(g_111, "-s")))
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
    ATerm s_111 = NULL;
    s_111 = t;
    j_111 :
    if(!(match_string(s_111, "-o")))
      {
        if(!(match_string(s_111, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm v_111 = NULL;
    ATerm m_33;
    m_33 = t;
    {
      ATerm t_111 = NULL;
      ATerm u_111 = NULL;
      u_111 = t;
      if(((t_111 != NULL) && (t_111 != u_111)))
        _fail(u_111);
      else
        t_111 = u_111;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(t_111));
        t = set_config_0(t);
      }
    }
    t = m_33;
    {
      ATerm w_111 = NULL;
      w_111 = t;
      if(((v_111 != NULL) && (v_111 != w_111)))
        _fail(w_111);
      else
        v_111 = w_111;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_111));
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
          ATerm a_112 = NULL;
          a_112 = t;
          z_111 :
          if(!(match_string(a_112, "-b")))
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
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  g_112 = t;
  e_112 :
  if(match_string(g_112, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(g_112) == AT_LIST) && !(ATisEmpty(g_112))))
        {
          h_112 = ATgetFirst((ATermList) g_112);
          i_112 = (ATerm) ATgetNext((ATermList) g_112);
          f_112 :
          if(((ATgetType(i_112) == AT_LIST) && !(ATisEmpty(i_112))))
            {
              j_112 = ATgetFirst((ATermList) i_112);
              k_112 = (ATerm) ATgetNext((ATermList) i_112);
              {
                ATerm o_112 = NULL;
                ATerm v_33;
                v_33 = t;
                {
                  t = not_null(h_112);
                  t = k_0(t);
                }
                t = v_33;
                {
                  ATerm p_112 = NULL;
                  t = not_null(j_112);
                  {
                    t = l_0(t);
                    {
                      p_112 = t;
                      if(((o_112 != NULL) && (o_112 != p_112)))
                        _fail(p_112);
                      else
                        o_112 = p_112;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_112)), not_null(o_112));
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
    ATerm w_112 = NULL;
    w_112 = t;
    t_112 :
    if(!(match_string(w_112, "-i")))
      {
        if(!(match_string(w_112, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    ATerm z_112 = NULL;
    ATerm w_33;
    w_33 = t;
    {
      ATerm x_112 = NULL;
      ATerm y_112 = NULL;
      y_112 = t;
      if(((x_112 != NULL) && (x_112 != y_112)))
        _fail(y_112);
      else
        x_112 = y_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(x_112));
        t = set_config_0(t);
      }
    }
    t = w_33;
    {
      ATerm a_113 = NULL;
      a_113 = t;
      if(((z_112 != NULL) && (z_112 != a_113)))
        _fail(a_113);
      else
        z_112 = a_113;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_112));
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
  ATerm e_113 = NULL;
  e_113 = t;
  t = SSL_TicksToSeconds(not_null(e_113));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym__2))
    {
      k_113 = ATgetArgument(j_113, 0);
      l_113 = ATgetArgument(j_113, 1);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_113), not_null(l_113));
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = SSL_addr(not_null(k_113), not_null(l_113));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_107 (ATerm), ATerm f_107 (ATerm))
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_107(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL;
        s_113 = t;
        r_113 :
        if(((ATgetType(s_113) == AT_LIST) && !(ATisEmpty(s_113))))
          {
            t_113 = ATgetFirst((ATermList) s_113);
            u_113 = (ATerm) ATgetNext((ATermList) s_113);
            {
              ATerm x_113 = NULL;
              ATerm y_113 = NULL;
              t = not_null(u_113);
              {
                t = foldr_2(t, e_107, f_107);
                {
                  y_113 = t;
                  if(((x_113 != NULL) && (x_113 != y_113)))
                    _fail(y_113);
                  else
                    x_113 = y_113;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_113), not_null(x_113));
                t = f_107(t);
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
ATerm crush_2 (ATerm t, ATerm c_106 (ATerm), ATerm d_106 (ATerm))
{
  ATerm f_114 = NULL;
  ATerm h_114 = NULL;
  f_114 = t;
  {
    ATerm i_114 = NULL;
    ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
    t = not_null(f_114);
    {
      i_114 = t;
      {
        t = SSL_explode_term(not_null(i_114));
        {
          k_114 = t;
          e_114 :
          if(match_cons(k_114, sym__2))
            {
              l_114 = ATgetArgument(k_114, 0);
              m_114 = ATgetArgument(k_114, 1);
              if(((h_114 != NULL) && (h_114 != m_114)))
                _fail(m_114);
              else
                h_114 = m_114;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_114);
      t = foldr_2(t, c_106, d_106);
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
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  s_114 = t;
  r_114 :
  if(match_cons(s_114, sym__2))
    {
      t_114 = ATgetArgument(s_114, 0);
      u_114 = ATgetArgument(s_114, 1);
      {
        ATerm i_34;
        i_34 = t;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_114), not_null(u_114));
              ;
              LocalPopChoice(k_34);
            }
          else
            {
              t = j_34;
              t = SSL_gtr(not_null(t_114), not_null(u_114));
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
  ATerm a_115 = NULL;
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL;
      b_115 = t;
      z_114 :
      if(match_cons(b_115, sym__2))
        {
          c_115 = ATgetArgument(b_115, 0);
          d_115 = ATgetArgument(b_115, 1);
          {
            if(((a_115 != NULL) && (a_115 != c_115)))
              _fail(c_115);
            else
              a_115 = c_115;
            if(((a_115 != NULL) && (a_115 != d_115)))
              _fail(d_115);
            else
              a_115 = d_115;
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
ATerm if_verbose1_1 (ATerm t, ATerm n_124 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm n_34;
    n_34 = t;
    {
      ATerm i_115 = NULL;
      ATerm j_115 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          j_115 = t;
          if(((i_115 != NULL) && (i_115 != j_115)))
            _fail(j_115);
          else
            i_115 = j_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_115), term_w_27);
        t = geq_0(t);
      }
    }
    t = n_34;
    t = n_124(t);
    return(t);
  }
  t = try_1(t, n_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm n_115 = NULL,r_115 = NULL;
    ATerm o_34;
    o_34 = t;
    {
      ATerm o_115 = NULL;
      t = run_time_0(t);
      {
        o_115 = t;
        if(((n_115 != NULL) && (n_115 != o_115)))
          _fail(o_115);
        else
          n_115 = o_115;
      }
    }
    t = o_34;
    {
      ATerm s_115 = NULL;
      t = term_p_34;
      {
        t = get_config_0(t);
        {
          s_115 = t;
          if(((r_115 != NULL) && (r_115 != s_115)))
            _fail(s_115);
          else
            r_115 = s_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), not_null(n_115)), term_q_34), not_null(r_115)));
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
  ATerm z_115 = NULL;
  z_115 = t;
  y_115 :
  if(match_cons(z_115, sym_Version_0))
    {
      ATerm b_116 = NULL,d_116 = NULL;
      ATerm s_34;
      s_34 = t;
      {
        ATerm c_116 = NULL;
        t = SSLgetAnnotations(not_null(z_115));
        {
          c_116 = t;
          if(((b_116 != NULL) && (b_116 != c_116)))
            _fail(c_116);
          else
            b_116 = c_116;
        }
      }
      t = s_34;
      {
        ATerm e_116 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_116));
        {
          e_116 = t;
          if(((d_116 != NULL) && (d_116 != e_116)))
            _fail(e_116);
          else
            d_116 = e_116;
        }
        t = not_null(d_116);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_116 (ATerm))
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
  t = z_116(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_116 = NULL;
  k_116 = t;
  t = SSL_table_create(not_null(k_116));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_116 = NULL;
  o_116 = t;
  {
    ATerm x_34;
    x_34 = t;
    {
      t = term_y_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, not_null(o_116));
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
  ATerm s_116 = NULL;
  s_116 = t;
  t = SSL_table_destroy(not_null(s_116));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_116 = NULL;
  w_116 = t;
  t = SSL_exit(not_null(w_116));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL;
  c_117 = t;
  a_117 :
  if(((ATgetType(c_117) == AT_LIST) && ATisEmpty(c_117)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_117) == AT_LIST) && !(ATisEmpty(c_117))))
        {
          d_117 = ATgetFirst((ATermList) c_117);
          e_117 = (ATerm) ATgetNext((ATermList) c_117);
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
    ATerm m_117 = NULL;
    ATerm u_117 = NULL;
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
          ATerm n_117 = NULL;
          ATerm t_117 = NULL;
          t_117 = t;
          if(((n_117 != NULL) && (n_117 != t_117)))
            _fail(t_117);
          else
            n_117 = t_117;
          t = (ATerm) ATinsert(ATempty, not_null(n_117));
        }
      }
    {
      u_117 = t;
      if(((m_117 != NULL) && (m_117 != u_117)))
        _fail(u_117);
      else
        m_117 = u_117;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(m_117));
      t = printnl_0(t);
    }
  }
  t = a_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm b_118 (ATerm t)
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
        t = Cons_2(t, u_100, b_118);
      }
    return(t);
  }
  t = b_118(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
  k_118 = t;
  h_118 :
  if(((ATgetType(k_118) == AT_LIST) && !(ATisEmpty(k_118))))
    {
      i_118 = ATgetFirst((ATermList) k_118);
      j_118 = (ATerm) ATgetNext((ATermList) k_118);
      {
        ATerm n_118 = NULL;
        t = not_null(j_118);
        {
          ATerm f_35;
          f_35 = t;
          {
            ATerm o_118 = NULL,q_118 = NULL,s_118 = NULL;
            ATerm g_35;
            g_35 = t;
            {
              ATerm p_118 = NULL;
              t = i_0(t);
              {
                p_118 = t;
                if(((o_118 != NULL) && (o_118 != p_118)))
                  _fail(p_118);
                else
                  o_118 = p_118;
              }
            }
            t = g_35;
            {
              ATerm r_118 = NULL;
              t = not_null(i_118);
              {
                t = g_0(t);
                {
                  r_118 = t;
                  if(((q_118 != NULL) && (q_118 != r_118)))
                    _fail(r_118);
                  else
                    q_118 = r_118;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_118)), not_null(q_118));
                {
                  s_118 = t;
                  if(((n_118 != NULL) && (n_118 != s_118)))
                    _fail(s_118);
                  else
                    n_118 = s_118;
                }
              }
            }
          }
          t = f_35;
          {
            ATerm q_7 (ATerm t)
            {
              t = not_null(n_118);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_118) == AT_LIST) && ATisEmpty(k_118)))
        {
          {
            t = term_l_26;
            t = i_0(t);
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
ATerm short_description_1 (ATerm t, ATerm i_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm d_119 = NULL,e_119 = NULL;
  d_119 = t;
  c_119 :
  if(match_cons(d_119, sym_Program_1))
    {
      e_119 = ATgetArgument(d_119, 0);
      {
        ATerm h_119 = NULL,k_119 = NULL;
        ATerm j_119 = NULL;
        t = SSLgetAnnotations(not_null(d_119));
        {
          j_119 = t;
          if(((h_119 != NULL) && (h_119 != j_119)))
            _fail(j_119);
          else
            h_119 = j_119;
        }
        {
          t = not_null(e_119);
          {
            ATerm m_119 = NULL;
            t = n_95(t);
            {
              k_119 = t;
              {
                ATerm n_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_119)), not_null(h_119));
                {
                  n_119 = t;
                  if(((m_119 != NULL) && (m_119 != n_119)))
                    _fail(n_119);
                  else
                    m_119 = n_119;
                }
                t = not_null(m_119);
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
ATerm Undefined_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm v_120 = NULL,w_120 = NULL;
  v_120 = t;
  u_120 :
  if(match_cons(v_120, sym_Undefined_1))
    {
      w_120 = ATgetArgument(v_120, 0);
      {
        ATerm z_120 = NULL,b_121 = NULL;
        ATerm a_121 = NULL;
        t = SSLgetAnnotations(not_null(v_120));
        {
          a_121 = t;
          if(((z_120 != NULL) && (z_120 != a_121)))
            _fail(a_121);
          else
            z_120 = a_121;
        }
        {
          t = not_null(w_120);
          {
            ATerm m_121 = NULL;
            t = o_95(t);
            {
              b_121 = t;
              {
                ATerm n_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_121)), not_null(z_120));
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
ATerm fetch_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm u_121 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_101, _id);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = Cons_2(t, _id, u_121);
      }
    return(t);
  }
  t = u_121(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_119 (ATerm))
{
  t = fetch_1(t, i_119);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_122 = NULL;
  a_122 = t;
  z_121 :
  if(match_cons(a_122, sym_Help_0))
    {
      ATerm c_122 = NULL,e_122 = NULL;
      ATerm r_35;
      r_35 = t;
      {
        ATerm d_122 = NULL;
        t = SSLgetAnnotations(not_null(a_122));
        {
          d_122 = t;
          if(((c_122 != NULL) && (c_122 != d_122)))
            _fail(d_122);
          else
            c_122 = d_122;
        }
      }
      t = r_35;
      {
        ATerm f_122 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_122));
        {
          f_122 = t;
          if(((e_122 != NULL) && (e_122 != f_122)))
            _fail(f_122);
          else
            e_122 = f_122;
        }
        t = not_null(e_122);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_99(t);
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
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL;
  l_122 = t;
  k_122 :
  if(match_cons(l_122, sym__2))
    {
      m_122 = ATgetArgument(l_122, 0);
      n_122 = ATgetArgument(l_122, 1);
      t = SSL_table_get(not_null(m_122), not_null(n_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_122 = NULL,z_122 = NULL,a_123 = NULL,b_123 = NULL;
  u_122 = t;
  t_122 :
  if(match_cons(u_122, sym__3))
    {
      z_122 = ATgetArgument(u_122, 0);
      a_123 = ATgetArgument(u_122, 1);
      b_123 = ATgetArgument(u_122, 2);
      {
        ATerm u_35;
        u_35 = t;
        {
          ATerm h_123 = NULL;
          ATerm i_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_122), not_null(a_123));
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
              i_123 = t;
              if(((h_123 != NULL) && (h_123 != i_123)))
                _fail(i_123);
              else
                h_123 = i_123;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_122), not_null(a_123), (ATerm) ATinsert(CheckATermList(not_null(h_123)), not_null(b_123)));
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
ATerm register_usage_1 (ATerm t, ATerm n_120 (ATerm))
{
  ATerm m_123 = NULL;
  ATerm n_123 = NULL;
  t = term_l_26;
  {
    t = n_120(t);
    {
      n_123 = t;
      if(((m_123 != NULL) && (m_123 != n_123)))
        _fail(n_123);
      else
        m_123 = n_123;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_35, term_l_35, not_null(m_123));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_123 = NULL,u_123 = NULL,v_123 = NULL;
  t_123 = t;
  s_123 :
  if(match_string(t_123, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_123) == AT_LIST) && !(ATisEmpty(t_123))))
        {
          u_123 = ATgetFirst((ATermList) t_123);
          v_123 = (ATerm) ATgetNext((ATermList) t_123);
          {
            ATerm g_124 = NULL;
            ATerm x_35;
            x_35 = t;
            {
              t = not_null(u_123);
              t = a_0(t);
            }
            t = x_35;
            {
              ATerm h_124 = NULL;
              t = term_l_26;
              {
                t = c_0(t);
                {
                  h_124 = t;
                  if(((g_124 != NULL) && (g_124 != h_124)))
                    _fail(h_124);
                  else
                    g_124 = h_124;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_123)), not_null(g_124));
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
    ATerm m_124 = NULL;
    m_124 = t;
    l_124 :
    if(!(match_string(m_124, "--help")))
      {
        if(!(match_string(m_124, "-h")))
          {
            if(!(match_string(m_124, "-?")))
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
  ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
  r_124 = t;
  q_124 :
  if(((ATgetType(r_124) == AT_LIST) && !(ATisEmpty(r_124))))
    {
      s_124 = ATgetFirst((ATermList) r_124);
      t_124 = (ATerm) ATgetNext((ATermList) r_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
  d_125 = t;
  c_125 :
  if(((ATgetType(d_125) == AT_LIST) && !(ATisEmpty(d_125))))
    {
      e_125 = ATgetFirst((ATermList) d_125);
      f_125 = (ATerm) ATgetNext((ATermList) d_125);
      {
        ATerm j_125 = NULL,l_125 = NULL;
        ATerm k_125 = NULL;
        t = SSLgetAnnotations(not_null(d_125));
        {
          k_125 = t;
          if(((j_125 != NULL) && (j_125 != k_125)))
            _fail(k_125);
          else
            j_125 = k_125;
        }
        {
          t = not_null(e_125);
          {
            ATerm n_125 = NULL;
            t = i_84(t);
            {
              l_125 = t;
              {
                t = not_null(f_125);
                {
                  ATerm p_125 = NULL;
                  t = j_84(t);
                  {
                    n_125 = t;
                    {
                      ATerm q_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_125)), not_null(l_125)), not_null(j_125));
                      {
                        q_125 = t;
                        if(((p_125 != NULL) && (p_125 != q_125)))
                          _fail(q_125);
                        else
                          p_125 = q_125;
                      }
                      t = not_null(p_125);
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
  ATerm a_126 = NULL;
  a_126 = t;
  z_125 :
  if(((ATgetType(a_126) == AT_LIST) && ATisEmpty(a_126)))
    {
      {
        ATerm c_126 = NULL,e_126 = NULL;
        ATerm l_36;
        l_36 = t;
        {
          ATerm d_126 = NULL;
          t = SSLgetAnnotations(not_null(a_126));
          {
            d_126 = t;
            if(((c_126 != NULL) && (c_126 != d_126)))
              _fail(d_126);
            else
              c_126 = d_126;
          }
        }
        t = l_36;
        {
          ATerm f_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_126));
          {
            f_126 = t;
            if(((e_126 != NULL) && (e_126 != f_126)))
              _fail(f_126);
            else
              e_126 = f_126;
          }
          t = not_null(e_126);
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
  ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL;
  l_126 = t;
  k_126 :
  if(match_cons(l_126, sym__2))
    {
      m_126 = ATgetArgument(l_126, 0);
      n_126 = ATgetArgument(l_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_28, not_null(m_126), not_null(n_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_120 (ATerm))
{
  ATerm m_36;
  m_36 = t;
  {
    ATerm c_8 (ATerm t)
    {
      t = term_n_36;
      t = l_120(t);
      return(t);
    }
    t = try_1(t, c_8);
  }
  t = m_36;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm v_126 = NULL;
      ATerm o_36;
      o_36 = t;
      {
        ATerm t_126 = NULL;
        ATerm u_126 = NULL;
        u_126 = t;
        if(((t_126 != NULL) && (t_126 != u_126)))
          _fail(u_126);
        else
          t_126 = u_126;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_34, not_null(t_126));
          t = set_config_0(t);
        }
      }
      t = o_36;
      {
        ATerm w_126 = NULL;
        w_126 = t;
        if(((v_126 != NULL) && (v_126 != w_126)))
          _fail(w_126);
        else
          v_126 = w_126;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_126));
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
                t = l_120(t);
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
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL;
  ATerm j_37;
  j_37 = t;
  {
    ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL;
    f_127 = t;
    b_127 :
    if(match_cons(f_127, sym__3))
      {
        g_127 = ATgetArgument(f_127, 0);
        h_127 = ATgetArgument(f_127, 1);
        i_127 = ATgetArgument(f_127, 2);
        {
          if(((c_127 != NULL) && (c_127 != g_127)))
            _fail(g_127);
          else
            c_127 = g_127;
          {
            if(((d_127 != NULL) && (d_127 != h_127)))
              _fail(h_127);
            else
              d_127 = h_127;
            {
              if(((e_127 != NULL) && (e_127 != i_127)))
                _fail(i_127);
              else
                e_127 = i_127;
              t = SSL_table_put(not_null(c_127), not_null(d_127), not_null(e_127));
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
ATerm parse_options_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm l_127 = NULL;
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
          t = k_120(t);
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
                  ATerm m_127 = NULL;
                  m_127 = t;
                  if(((l_127 != NULL) && (l_127 != m_127)))
                    _fail(m_127);
                  else
                    l_127 = m_127;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, i_8);
              {
                ATerm k_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_127)), term_t_37);
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
ATerm option_wrap_4 (ATerm t, ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm))
{
  t = parse_options_1(t, f_117);
  {
    t = store_options_0(t);
    {
      t = h_117(t);
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_117);
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
                  t = i_117(t);
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
ATerm iowrap_4 (ATerm t, ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_117(t);
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
      t = apply_strategy_1(t, w_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_8, y_117, z_117, r_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      ATerm n_38;
      n_38 = t;
      {
        ATerm p_127 = NULL;
        ATerm q_127 = NULL;
        t = term_p_34;
        {
          t = get_config_0(t);
          {
            q_127 = t;
            if(((p_127 != NULL) && (p_127 != q_127)))
              _fail(q_127);
            else
              p_127 = q_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(p_127)));
          t = printnl_0(t);
        }
      }
      t = n_38;
      return(t);
    }
    t = if_verbose2_1(t, b_9);
    return(t);
  }
  t = iowrap_4(t, q_117, r_117, s_117, s_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_117 (ATerm), ATerm p_117 (ATerm))
{
  t = iowrap_3(t, o_117, p_117, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_117 (ATerm))
{
  ATerm l_9 (ATerm t)
  {
    t = _2(t, _id, l_117);
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
