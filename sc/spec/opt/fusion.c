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
ATerm term_k_36;
ATerm term_x_35;
ATerm term_n_35;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_z_28;
ATerm term_j_28;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_n_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_10;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Op_2, term_v_11, (ATerm) ATempty);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Call_2, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_14, term_v_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_14, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_15);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_14, term_v_14);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_14, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_i_25);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_y_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_l_30, term_i_25);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_i_25);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_m_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_i_25);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__3, term_l_34, term_m_34, (ATerm) ATempty);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_109 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm q_124 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm m_88 (ATerm), ATerm n_88 (ATerm));
ATerm Op_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_123 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm i_103 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm y_110 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm));
ATerm Con_3 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_96 (ATerm));
ATerm desugar_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm r_97 (ATerm));
ATerm UnMark_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm p_108 (ATerm));
ATerm restore_always_2 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm o_108 (ATerm));
ATerm scope_2 (ATerm, ATerm q_108 (ATerm), ATerm r_108 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm o_96 (ATerm));
ATerm innermost_1 (ATerm, ATerm h_115 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm s_84 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm Match_1 (ATerm, ATerm r_84 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm f_98 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm f_121 (ATerm), ATerm g_121 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_120 (ATerm), ATerm r_120 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_120 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm e_124 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm Let_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm w_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_124 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm b_88 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_84 (ATerm), ATerm w_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm q_106 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm));
ATerm crush_3 (ATerm, ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm u_106 (ATerm), ATerm v_106 (ATerm));
ATerm diff_1 (ATerm, ATerm m_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_111 (ATerm), ATerm o_111 (ATerm));
ATerm for_3 (ATerm, ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_121 (ATerm), ATerm t_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm));
ATerm zip_1 (ATerm, ATerm d_103 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm m_121 (ATerm), ATerm n_121 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm x_121 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm h_116 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm r_115 (ATerm));
ATerm rename_4 (ATerm, ATerm h_121 (ATerm, ATerm (ATerm)), ATerm i_121 (ATerm), ATerm j_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm u_108 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm s_108 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_87 (ATerm));
ATerm Signature_1 (ATerm, ATerm c_87 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_87 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_101 (ATerm));
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
ATerm apply_strategy_1 (ATerm, ATerm d_117 (ATerm));
ATerm debug_1 (ATerm, ATerm a_109 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_99 (ATerm), ATerm a_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm crush_2 (ATerm, ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_124 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_117 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_120 (ATerm));
ATerm map_1 (ATerm, ATerm x_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_120 (ATerm));
ATerm Program_1 (ATerm, ATerm q_95 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_95 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_119 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_120 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_120 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_120 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_117 (ATerm), ATerm r_117 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_117 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATempty, not_null(q_6)));
      t = printnl_0(t);
    }
  }
  t = y_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_109 (ATerm))
{
  ATerm a_9;
  a_9 = t;
  {
    t = b_109(t);
    t = debug_0(t);
  }
  t = a_9;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_124 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm w_8 = NULL;
      ATerm x_8 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          x_8 = t;
          if(((w_8 != NULL) && (w_8 != x_8)))
            _fail(x_8);
          else
            w_8 = x_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), term_d_9);
        t = geq_0(t);
      }
    }
    t = b_9;
    t = q_124(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  s_9 = t;
  q_9 :
  if(match_cons(s_9, sym_ExplodeCong_2))
    {
      t_9 = ATgetArgument(s_9, 0);
      r_9 = ATgetArgument(s_9, 1);
      {
        ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
        ATerm a_10 = NULL;
        ATerm c_10 = NULL;
        t = new_0(t);
        {
          a_10 = t;
          {
            if(((w_9 != NULL) && (w_9 != a_10)))
              _fail(a_10);
            else
              w_9 = a_10;
            {
              ATerm d_10 = NULL;
              t = new_0(t);
              {
                c_10 = t;
                {
                  if(((x_9 != NULL) && (x_9 != c_10)))
                    _fail(c_10);
                  else
                    x_9 = c_10;
                  {
                    ATerm e_10 = NULL;
                    t = new_0(t);
                    {
                      d_10 = t;
                      {
                        if(((y_9 != NULL) && (y_9 != d_10)))
                          _fail(d_10);
                        else
                          y_9 = d_10;
                        {
                          t = new_0(t);
                          {
                            e_10 = t;
                            if(((z_9 != NULL) && (z_9 != e_10)))
                              _fail(e_10);
                            else
                              z_9 = e_10;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(y_9)), not_null(x_9)), not_null(w_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))))));
      }
    }
  else
    {
      if(match_cons(s_9, sym_Build_1))
        {
          t_9 = ATgetArgument(s_9, 0);
          {
            ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
            ATerm k_10 = NULL;
            ATerm o_10 = NULL;
            t = new_0(t);
            {
              k_10 = t;
              {
                if(((i_10 != NULL) && (i_10 != k_10)))
                  _fail(k_10);
                else
                  i_10 = k_10;
                {
                  t = not_null(t_9);
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
                      l_10 = t;
                      i_9 :
                      if(match_cons(l_10, sym_Explode_2))
                        {
                          m_10 = ATgetArgument(l_10, 0);
                          n_10 = ATgetArgument(l_10, 1);
                          {
                            if(((g_10 != NULL) && (g_10 != m_10)))
                              _fail(m_10);
                            else
                              g_10 = m_10;
                            {
                              if(((h_10 != NULL) && (h_10 != n_10)))
                                _fail(n_10);
                              else
                                h_10 = n_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10));
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
                      o_10 = t;
                      if(((j_10 != NULL) && (j_10 != o_10)))
                        _fail(o_10);
                      else
                        j_10 = o_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_10)), not_null(g_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_10)))));
          }
        }
      else
        {
          if(match_cons(s_9, sym_Match_1))
            {
              t_9 = ATgetArgument(s_9, 0);
              {
                ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
                ATerm v_10 = NULL;
                ATerm w_10 = NULL;
                t = new_0(t);
                {
                  v_10 = t;
                  {
                    if(((s_10 != NULL) && (s_10 != v_10)))
                      _fail(v_10);
                    else
                      s_10 = v_10;
                    {
                      ATerm a_11 = NULL;
                      t = new_0(t);
                      {
                        w_10 = t;
                        {
                          if(((t_10 != NULL) && (t_10 != w_10)))
                            _fail(w_10);
                          else
                            t_10 = w_10;
                          {
                            t = not_null(t_9);
                            {
                              ATerm r_0 (ATerm t)
                              {
                                ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
                                x_10 = t;
                                n_9 :
                                if(match_cons(x_10, sym_Explode_2))
                                  {
                                    y_10 = ATgetArgument(x_10, 0);
                                    z_10 = ATgetArgument(x_10, 1);
                                    {
                                      if(((q_10 != NULL) && (q_10 != y_10)))
                                        _fail(y_10);
                                      else
                                        q_10 = y_10;
                                      {
                                        if(((r_10 != NULL) && (r_10 != z_10)))
                                          _fail(z_10);
                                        else
                                          r_10 = z_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10));
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
                                a_11 = t;
                                if(((u_10 != NULL) && (u_10 != a_11)))
                                  _fail(a_11);
                                else
                                  u_10 = a_11;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_f_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_10)), (ATerm) ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10)))))));
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
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Match_1))
    {
      i_12 = ATgetArgument(h_12, 0);
      {
        ATerm h_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
            ATerm o_12 = NULL;
            ATerm t_12 = NULL;
            t = new_0(t);
            {
              o_12 = t;
              {
                if(((m_12 != NULL) && (m_12 != o_12)))
                  _fail(o_12);
                else
                  m_12 = o_12;
                {
                  t = not_null(i_12);
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm p_12 = NULL,r_12 = NULL,s_12 = NULL;
                      p_12 = t;
                      w_11 :
                      if(match_cons(p_12, sym_Anno_2))
                        {
                          r_12 = ATgetArgument(p_12, 0);
                          s_12 = ATgetArgument(p_12, 1);
                          {
                            if(((k_12 != NULL) && (k_12 != r_12)))
                              _fail(r_12);
                            else
                              k_12 = r_12;
                            {
                              if(((l_12 != NULL) && (l_12 != s_12)))
                                _fail(s_12);
                              else
                                l_12 = s_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_12)), not_null(k_12));
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
                      t_12 = t;
                      if(((n_12 != NULL) && (n_12 != t_12)))
                        _fail(t_12);
                      else
                        n_12 = t_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_k_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12))))));
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = h_9;
            {
              ATerm l_9 = t;
              int m_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                  ATerm y_12 = NULL;
                  ATerm b_13 = NULL;
                  t = new_0(t);
                  {
                    y_12 = t;
                    {
                      if(((w_12 != NULL) && (w_12 != y_12)))
                        _fail(y_12);
                      else
                        w_12 = y_12;
                      {
                        t = not_null(i_12);
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm z_12 = NULL,a_13 = NULL;
                            z_12 = t;
                            a_12 :
                            if(match_cons(z_12, sym_RootApp_1))
                              {
                                a_13 = ATgetArgument(z_12, 0);
                                {
                                  if(((v_12 != NULL) && (v_12 != a_13)))
                                    _fail(a_13);
                                  else
                                    v_12 = a_13;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12));
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
                            b_13 = t;
                            if(((x_12 != NULL) && (x_12 != b_13)))
                              _fail(b_13);
                            else
                              x_12 = b_13;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12))), not_null(v_12))));
                  ;
                  LocalPopChoice(m_9);
                }
              else
                {
                  t = l_9;
                  {
                    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
                    ATerm h_13 = NULL;
                    ATerm m_13 = NULL;
                    t = new_0(t);
                    {
                      h_13 = t;
                      {
                        if(((f_13 != NULL) && (f_13 != h_13)))
                          _fail(h_13);
                        else
                          f_13 = h_13;
                        {
                          t = not_null(i_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
                              i_13 = t;
                              e_12 :
                              if(match_cons(i_13, sym_App_2))
                                {
                                  j_13 = ATgetArgument(i_13, 0);
                                  k_13 = ATgetArgument(i_13, 1);
                                  {
                                    if(((e_13 != NULL) && (e_13 != j_13)))
                                      _fail(j_13);
                                    else
                                      e_13 = j_13;
                                    {
                                      if(((d_13 != NULL) && (d_13 != k_13)))
                                        _fail(k_13);
                                      else
                                        d_13 = k_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_13));
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
                              m_13 = t;
                              if(((g_13 != NULL) && (g_13 != m_13)))
                                _fail(m_13);
                              else
                                g_13 = m_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_13)), not_null(e_13)))));
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,h_14 = NULL;
  d_14 = t;
  b_14 :
  if(match_cons(d_14, sym_Match_1))
    {
      e_14 = ATgetArgument(d_14, 0);
      c_14 :
      if(match_cons(e_14, sym_RootApp_1))
        {
          f_14 = ATgetArgument(e_14, 0);
          t = not_null(f_14);
        }
      else
        {
          if(match_cons(e_14, sym_App_2))
            {
              f_14 = ATgetArgument(e_14, 0);
              h_14 = ATgetArgument(e_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_14), not_null(h_14));
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
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_Match_1))
    {
      u_14 = ATgetArgument(t_14, 0);
      {
        ATerm w_14 = NULL,x_14 = NULL;
        ATerm c_15 = NULL;
        t = not_null(u_14);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
            y_14 = t;
            p_14 :
            if(match_cons(y_14, sym_RootApp_1))
              {
                z_14 = ATgetArgument(y_14, 0);
                q_14 :
                if(match_cons(z_14, sym_Match_1))
                  {
                    a_15 = ATgetArgument(z_14, 0);
                    {
                      if(((w_14 != NULL) && (w_14 != a_15)))
                        _fail(a_15);
                      else
                        w_14 = a_15;
                      t = not_null(w_14);
                    }
                  }
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
            c_15 = t;
            if(((x_14 != NULL) && (x_14 != c_15)))
              _fail(c_15);
            else
              x_14 = c_15;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_14));
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
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  x_15 = t;
  v_15 :
  if(match_cons(x_15, sym_Build_1))
    {
      y_15 = ATgetArgument(x_15, 0);
      {
        ATerm b_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
            ATerm e_16 = NULL;
            ATerm i_16 = NULL;
            t = new_0(t);
            {
              e_16 = t;
              {
                if(((c_16 != NULL) && (c_16 != e_16)))
                  _fail(e_16);
                else
                  c_16 = e_16;
                {
                  t = not_null(y_15);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
                      f_16 = t;
                      l_15 :
                      if(match_cons(f_16, sym_Anno_2))
                        {
                          g_16 = ATgetArgument(f_16, 0);
                          h_16 = ATgetArgument(f_16, 1);
                          {
                            if(((a_16 != NULL) && (a_16 != g_16)))
                              _fail(g_16);
                            else
                              a_16 = g_16;
                            {
                              if(((b_16 != NULL) && (b_16 != h_16)))
                                _fail(h_16);
                              else
                                b_16 = h_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16));
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
                      i_16 = t;
                      if(((d_16 != NULL) && (d_16 != i_16)))
                        _fail(i_16);
                      else
                        d_16 = i_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), not_null(a_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_16))));
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = b_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
                  ATerm n_16 = NULL;
                  ATerm q_16 = NULL;
                  t = new_0(t);
                  {
                    n_16 = t;
                    {
                      if(((l_16 != NULL) && (l_16 != n_16)))
                        _fail(n_16);
                      else
                        l_16 = n_16;
                      {
                        t = not_null(y_15);
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm o_16 = NULL,p_16 = NULL;
                            o_16 = t;
                            p_15 :
                            if(match_cons(o_16, sym_RootApp_1))
                              {
                                p_16 = ATgetArgument(o_16, 0);
                                {
                                  if(((k_16 != NULL) && (k_16 != p_16)))
                                    _fail(p_16);
                                  else
                                    k_16 = p_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16));
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
                            q_16 = t;
                            if(((m_16 != NULL) && (m_16 != q_16)))
                              _fail(q_16);
                            else
                              m_16 = q_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_16))));
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
                    ATerm w_16 = NULL;
                    ATerm a_17 = NULL;
                    t = new_0(t);
                    {
                      w_16 = t;
                      {
                        if(((u_16 != NULL) && (u_16 != w_16)))
                          _fail(w_16);
                        else
                          u_16 = w_16;
                        {
                          t = not_null(y_15);
                          {
                            ATerm a_1 (ATerm t)
                            {
                              ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
                              x_16 = t;
                              t_15 :
                              if(match_cons(x_16, sym_App_2))
                                {
                                  y_16 = ATgetArgument(x_16, 0);
                                  z_16 = ATgetArgument(x_16, 1);
                                  {
                                    if(((s_16 != NULL) && (s_16 != y_16)))
                                      _fail(y_16);
                                    else
                                      s_16 = y_16;
                                    {
                                      if(((t_16 != NULL) && (t_16 != z_16)))
                                        _fail(z_16);
                                      else
                                        t_16 = z_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_16));
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
                              a_17 = t;
                              if(((v_16 != NULL) && (v_16 != a_17)))
                                _fail(a_17);
                              else
                                v_16 = a_17;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_16), not_null(t_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_16))));
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
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  r_17 :
  if(match_cons(t_17, sym_Build_1))
    {
      u_17 = ATgetArgument(t_17, 0);
      s_17 :
      if(match_cons(u_17, sym_RootApp_1))
        {
          v_17 = ATgetArgument(u_17, 0);
          t = not_null(v_17);
        }
      else
        {
          if(match_cons(u_17, sym_App_2))
            {
              v_17 = ATgetArgument(u_17, 0);
              w_17 = ATgetArgument(u_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_17)), not_null(v_17));
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
ATerm As_2 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm))
{
  ATerm i_18 = NULL,u_18 = NULL,v_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_As_2))
    {
      u_18 = ATgetArgument(i_18, 0);
      v_18 = ATgetArgument(i_18, 1);
      {
        ATerm z_18 = NULL,c_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(i_18));
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
            ATerm e_19 = NULL;
            t = q_88(t);
            {
              c_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm g_19 = NULL;
                  t = r_88(t);
                  {
                    e_19 = t;
                    {
                      ATerm h_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_19), not_null(e_19)), not_null(z_18));
                      {
                        h_19 = t;
                        if(((g_19 != NULL) && (g_19 != h_19)))
                          _fail(h_19);
                        else
                          g_19 = h_19;
                      }
                      t = not_null(g_19);
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
ATerm Prim_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Prim_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm a_20 = NULL,c_20 = NULL;
        ATerm b_20 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
        }
        {
          t = not_null(v_19);
          {
            ATerm e_20 = NULL;
            t = n_84(t);
            {
              c_20 = t;
              {
                t = not_null(w_19);
                {
                  ATerm g_20 = NULL;
                  t = o_84(t);
                  {
                    e_20 = t;
                    {
                      ATerm h_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(c_20), not_null(e_20)), not_null(a_20));
                      {
                        h_20 = t;
                        if(((g_20 != NULL) && (g_20 != h_20)))
                          _fail(h_20);
                        else
                          g_20 = h_20;
                      }
                      t = not_null(g_20);
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
ATerm Explode_2 (ATerm t, ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t_20 :
  if(match_cons(v_20, sym_Explode_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      {
        ATerm b_21 = NULL,d_21 = NULL;
        ATerm c_21 = NULL;
        t = SSLgetAnnotations(not_null(v_20));
        {
          c_21 = t;
          if(((b_21 != NULL) && (b_21 != c_21)))
            _fail(c_21);
          else
            b_21 = c_21;
        }
        {
          t = not_null(w_20);
          {
            ATerm f_21 = NULL;
            t = m_88(t);
            {
              d_21 = t;
              {
                t = not_null(x_20);
                {
                  ATerm h_21 = NULL;
                  t = n_88(t);
                  {
                    f_21 = t;
                    {
                      ATerm i_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(d_21), not_null(f_21)), not_null(b_21));
                      {
                        i_21 = t;
                        if(((h_21 != NULL) && (h_21 != i_21)))
                          _fail(i_21);
                        else
                          h_21 = i_21;
                      }
                      t = not_null(h_21);
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
ATerm Op_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym_Op_2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      {
        ATerm b_22 = NULL,d_22 = NULL;
        ATerm c_22 = NULL;
        t = SSLgetAnnotations(not_null(v_21));
        {
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
        }
        {
          t = not_null(w_21);
          {
            ATerm f_22 = NULL;
            t = r_86(t);
            {
              d_22 = t;
              {
                t = not_null(x_21);
                {
                  ATerm h_22 = NULL;
                  t = s_86(t);
                  {
                    f_22 = t;
                    {
                      ATerm i_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(d_22), not_null(f_22)), not_null(b_22));
                      {
                        i_22 = t;
                        if(((h_22 != NULL) && (h_22 != i_22)))
                          _fail(i_22);
                        else
                          h_22 = i_22;
                      }
                      t = not_null(h_22);
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
ATerm pat_td_1 (ATerm t, ATerm h_123 (ATerm))
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_123(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, h_123);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, b_1);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_123);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  ;
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm j_11 = t;
                    int k_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_123);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
                        ;
                        LocalPopChoice(k_11);
                      }
                    else
                      {
                        t = j_11;
                        {
                          ATerm l_11 = t;
                          int m_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_1 (ATerm t)
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_123);
                                  return(t);
                                }
                                t = fetch_1(t, g_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, f_1);
                              ;
                              LocalPopChoice(m_11);
                            }
                          else
                            {
                              t = l_11;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_123);
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
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_Build_1))
    {
      a_23 = ATgetArgument(z_22, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_23 = NULL,d_23 = NULL;
            ATerm h_23 = NULL;
            t = not_null(a_23);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
                e_23 = t;
                r_22 :
                if(match_cons(e_23, sym_RootApp_1))
                  {
                    f_23 = ATgetArgument(e_23, 0);
                    s_22 :
                    if(match_cons(f_23, sym_Build_1))
                      {
                        g_23 = ATgetArgument(f_23, 0);
                        {
                          if(((c_23 != NULL) && (c_23 != g_23)))
                            _fail(g_23);
                          else
                            c_23 = g_23;
                          t = not_null(c_23);
                        }
                      }
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
                h_23 = t;
                if(((d_23 != NULL) && (d_23 != h_23)))
                  _fail(h_23);
                else
                  d_23 = h_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_23));
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
              ATerm q_23 = NULL;
              t = not_null(a_23);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
                  m_23 = t;
                  v_22 :
                  if(match_cons(m_23, sym_App_2))
                    {
                      n_23 = ATgetArgument(m_23, 0);
                      p_23 = ATgetArgument(m_23, 1);
                      w_22 :
                      if(match_cons(n_23, sym_Build_1))
                        {
                          o_23 = ATgetArgument(n_23, 0);
                          {
                            if(((k_23 != NULL) && (k_23 != o_23)))
                              _fail(o_23);
                            else
                              k_23 = o_23;
                            {
                              if(((j_23 != NULL) && (j_23 != p_23)))
                                _fail(p_23);
                              else
                                j_23 = p_23;
                              t = not_null(k_23);
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
                  q_23 = t;
                  if(((l_23 != NULL) && (l_23 != q_23)))
                    _fail(q_23);
                  else
                    l_23 = q_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_23));
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
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  k_24 :
  if(match_cons(r_24, sym_Lets_2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_24), not_null(t_24));
    }
  else
    {
      if(match_cons(r_24, sym_LChoices_1))
        {
          s_24 = ATgetArgument(r_24, 0);
          l_24 :
          if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
            {
              o_24 = ATgetFirst((ATermList) s_24);
              p_24 = (ATerm) ATgetNext((ATermList) s_24);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_24), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_24)));
            }
          else
            {
              if(((ATgetType(s_24) == AT_LIST) && ATisEmpty(s_24)))
                {
                  t = term_t_11;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(r_24, sym_Choices_1))
            {
              s_24 = ATgetArgument(r_24, 0);
              m_24 :
              if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
                {
                  o_24 = ATgetFirst((ATermList) s_24);
                  p_24 = (ATerm) ATgetNext((ATermList) s_24);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_24), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_24)));
                }
              else
                {
                  if(((ATgetType(s_24) == AT_LIST) && ATisEmpty(s_24)))
                    {
                      t = term_t_11;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(r_24, sym_Seqs_1))
                {
                  s_24 = ATgetArgument(r_24, 0);
                  n_24 :
                  if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
                    {
                      o_24 = ATgetFirst((ATermList) s_24);
                      p_24 = (ATerm) ATgetNext((ATermList) s_24);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_24), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_24)));
                    }
                  else
                    {
                      if(((ATgetType(s_24) == AT_LIST) && ATisEmpty(s_24)))
                        {
                          t = term_u_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(r_24, sym_DefaultVarDec_1))
                    {
                      s_24 = ATgetArgument(r_24, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_24), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_11), term_y_11));
                    }
                  else
                    {
                      if(match_cons(r_24, sym_InfixApp_3))
                        {
                          s_24 = ATgetArgument(r_24, 0);
                          t_24 = ATgetArgument(r_24, 1);
                          q_24 = ATgetArgument(r_24, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_24), (ATerm) ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), not_null(s_24))));
                        }
                      else
                        {
                          if(match_cons(r_24, sym_BAM_3))
                            {
                              s_24 = ATgetArgument(r_24, 0);
                              t_24 = ATgetArgument(r_24, 1);
                              q_24 = ATgetArgument(r_24, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_24))), not_null(s_24)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_24))));
                            }
                          else
                            {
                              if(match_cons(r_24, sym_AM_2))
                                {
                                  s_24 = ATgetArgument(r_24, 0);
                                  t_24 = ATgetArgument(r_24, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_24)));
                                }
                              else
                                {
                                  if(match_cons(r_24, sym_MA_2))
                                    {
                                      s_24 = ATgetArgument(r_24, 0);
                                      t_24 = ATgetArgument(r_24, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_24)), not_null(t_24));
                                    }
                                  else
                                    {
                                      if(match_cons(r_24, sym_BA_2))
                                        {
                                          s_24 = ATgetArgument(r_24, 0);
                                          t_24 = ATgetArgument(r_24, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_24)), not_null(s_24));
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
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  g_26 = t;
  d_26 :
  if(match_cons(g_26, sym__2))
    {
      h_26 = ATgetArgument(g_26, 0);
      k_26 = ATgetArgument(g_26, 1);
      e_26 :
      if(match_cons(h_26, sym__2))
        {
          i_26 = ATgetArgument(h_26, 0);
          j_26 = ATgetArgument(h_26, 1);
          f_26 :
          if(match_cons(k_26, sym__2))
            {
              l_26 = ATgetArgument(k_26, 0);
              m_26 = ATgetArgument(k_26, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_26)), not_null(i_26)), (ATerm) ATinsert(CheckATermList(not_null(m_26)), not_null(j_26)));
            }
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
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t_26 :
  if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
    {
      v_26 = ATgetFirst((ATermList) u_26);
      w_26 = (ATerm) ATgetNext((ATermList) u_26);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(w_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  b_27 :
  if(((ATgetType(c_27) == AT_LIST) && ATisEmpty(c_27)))
    {
      t = term_z_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_103);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  ATerm o_27 (ATerm t)
  {
    ATerm l_27 = NULL;
    ATerm m_27 = NULL;
    t = not_null(i_27);
    {
      ATerm b_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_12;
        }
      {
        t = new_0(t);
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))));
    return(t);
  }
  ATerm p_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27))));
    return(t);
  }
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Var_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_27(t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            t = p_27(t);
          }
      }
    }
  else
    {
      t = o_27(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Prim_2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      {
        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
        ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
        t = not_null(y_27);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm f_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_12;
              }
            return(t);
          }
          t = fetch_1(t, k_1);
          {
            t = not_null(y_27);
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
                  e_28 = t;
                  t_27 :
                  if(match_cons(e_28, sym__2))
                    {
                      f_28 = ATgetArgument(e_28, 0);
                      g_28 = ATgetArgument(e_28, 1);
                      u_27 :
                      if(match_cons(g_28, sym__2))
                        {
                          h_28 = ATgetArgument(g_28, 0);
                          i_28 = ATgetArgument(g_28, 1);
                          {
                            if(((b_28 != NULL) && (b_28 != f_28)))
                              _fail(f_28);
                            else
                              b_28 = f_28;
                            {
                              if(((c_28 != NULL) && (c_28 != h_28)))
                                _fail(h_28);
                              else
                                c_28 = h_28;
                              if(((d_28 != NULL) && (d_28 != i_28)))
                                _fail(i_28);
                              else
                                d_28 = i_28;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_28)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(x_27), not_null(d_28))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_110 (ATerm))
{
  ATerm l_28 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = y_110(t);
      t = l_28(t);
      return(t);
    }
    t = try_1(t, m_1);
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Wld_0))
    {
      ATerm s_28 = NULL,u_28 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm t_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
        }
      }
      t = j_12;
      {
        ATerm v_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
        t = not_null(u_28);
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
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm u_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = u_12;
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
      t = q_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_App_2))
    {
      g_29 = ATgetArgument(f_29, 0);
      h_29 = ATgetArgument(f_29, 1);
      {
        ATerm l_29 = NULL,n_29 = NULL;
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm p_29 = NULL;
            t = g_88(t);
            {
              n_29 = t;
              {
                t = not_null(h_29);
                {
                  ATerm r_29 = NULL;
                  t = h_88(t);
                  {
                    p_29 = t;
                    {
                      ATerm s_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_29), not_null(p_29)), not_null(l_29));
                      {
                        s_29 = t;
                        if(((r_29 != NULL) && (r_29 != s_29)))
                          _fail(s_29);
                        else
                          r_29 = s_29;
                      }
                      t = not_null(r_29);
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
ATerm Con_3 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  f_30 = t;
  e_30 :
  if(match_cons(f_30, sym_Con_3))
    {
      g_30 = ATgetArgument(f_30, 0);
      h_30 = ATgetArgument(f_30, 1);
      i_30 = ATgetArgument(f_30, 2);
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(f_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = not_null(g_30);
          {
            ATerm r_30 = NULL;
            t = d_88(t);
            {
              p_30 = t;
              {
                t = not_null(h_30);
                {
                  ATerm t_30 = NULL;
                  t = e_88(t);
                  {
                    r_30 = t;
                    {
                      t = not_null(i_30);
                      {
                        ATerm v_30 = NULL;
                        t = f_88(t);
                        {
                          t_30 = t;
                          {
                            ATerm w_30 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(p_30), not_null(r_30), not_null(t_30)), not_null(n_30));
                            {
                              w_30 = t;
                              if(((v_30 != NULL) && (v_30 != w_30)))
                                _fail(w_30);
                              else
                                v_30 = w_30;
                            }
                            t = not_null(v_30);
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
  ATerm l_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
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
      t = l_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  f_31 :
  if(match_cons(h_31, sym_SRule_1))
    {
      i_31 = ATgetArgument(h_31, 0);
      g_31 :
      if(match_cons(i_31, sym_StratRule_3))
        {
          j_31 = ATgetArgument(i_31, 0);
          k_31 = ATgetArgument(i_31, 1);
          l_31 = ATgetArgument(i_31, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_31)), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_31))), not_null(j_31)));
        }
      else
        {
          if(match_cons(i_31, sym_Rule_3))
            {
              j_31 = ATgetArgument(i_31, 0);
              k_31 = ATgetArgument(i_31, 1);
              l_31 = ATgetArgument(i_31, 2);
              {
                t = not_null(j_31);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(k_31);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(k_31))), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_31))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_31))));
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
ATerm Rcon_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  i_32 = t;
  g_32 :
  if(match_cons(i_32, sym_SRule_1))
    {
      j_32 = ATgetArgument(i_32, 0);
      h_32 :
      if(match_cons(j_32, sym_Rule_3))
        {
          k_32 = ATgetArgument(j_32, 0);
          l_32 = ATgetArgument(j_32, 1);
          m_32 = ATgetArgument(j_32, 2);
          {
            ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
            ATerm y_32 = NULL;
            ATerm e_33 = NULL;
            t = new_0(t);
            {
              y_32 = t;
              {
                if(((v_32 != NULL) && (v_32 != y_32)))
                  _fail(y_32);
                else
                  v_32 = y_32;
                {
                  t = not_null(k_32);
                  {
                    ATerm g_36 = NULL;
                    ATerm p_1 (ATerm t)
                    {
                      ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
                      z_32 = t;
                      x_31 :
                      if(match_cons(z_32, sym_Con_3))
                        {
                          a_33 = ATgetArgument(z_32, 0);
                          c_33 = ATgetArgument(z_32, 1);
                          d_33 = ATgetArgument(z_32, 2);
                          y_31 :
                          if(match_cons(a_33, sym_Var_1))
                            {
                              b_33 = ATgetArgument(a_33, 0);
                              {
                                if(((u_32 != NULL) && (u_32 != b_33)))
                                  _fail(b_33);
                                else
                                  u_32 = b_33;
                                {
                                  if(((s_32 != NULL) && (s_32 != c_33)))
                                    _fail(c_33);
                                  else
                                    s_32 = c_33;
                                  {
                                    if(((q_32 != NULL) && (q_32 != d_33)))
                                      _fail(d_33);
                                    else
                                      q_32 = d_33;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_32));
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
                      e_33 = t;
                      {
                        if(((w_32 != NULL) && (w_32 != e_33)))
                          _fail(e_33);
                        else
                          w_32 = e_33;
                        {
                          t = not_null(l_32);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,a_34 = NULL,u_35 = NULL,v_35 = NULL,f_36 = NULL;
                              f_33 = t;
                              b_32 :
                              if(match_cons(f_33, sym_Con_3))
                                {
                                  g_33 = ATgetArgument(f_33, 0);
                                  a_34 = ATgetArgument(f_33, 1);
                                  u_35 = ATgetArgument(f_33, 2);
                                  c_32 :
                                  if(match_cons(g_33, sym_Var_1))
                                    {
                                      h_33 = ATgetArgument(g_33, 0);
                                      d_32 :
                                      if(match_cons(u_35, sym_Call_2))
                                        {
                                          v_35 = ATgetArgument(u_35, 0);
                                          f_36 = ATgetArgument(u_35, 1);
                                          e_32 :
                                          if(((ATgetType(f_36) == AT_LIST) && ATisEmpty(f_36)))
                                            {
                                              {
                                                if(((u_32 != NULL) && (u_32 != h_33)))
                                                  _fail(h_33);
                                                else
                                                  u_32 = h_33;
                                                {
                                                  if(((t_32 != NULL) && (t_32 != a_34)))
                                                    _fail(a_34);
                                                  else
                                                    t_32 = a_34;
                                                  {
                                                    if(((r_32 != NULL) && (r_32 != v_35)))
                                                      _fail(v_35);
                                                    else
                                                      r_32 = v_35;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32));
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
                              g_36 = t;
                              if(((x_32 != NULL) && (x_32 != g_36)))
                                _fail(g_36);
                              else
                                x_32 = g_36;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_32), not_null(x_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_32), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(r_32), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_32), not_null(t_32), term_u_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32)))))));
          }
        }
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
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm n_96 (ATerm))
{
  t = n_96(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, n_96);
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
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm z_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(a_14);
                            }
                          else
                            {
                              t = z_13;
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
ATerm oncetd_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm o_36 (ATerm t)
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
        t = _one(t, o_36);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm UnMark_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  v_36 = t;
  q_36 :
  if(match_cons(v_36, sym_Call_2))
    {
      w_36 = ATgetArgument(v_36, 0);
      y_36 = ATgetArgument(v_36, 1);
      s_36 :
      if(match_cons(w_36, sym_SVar_1))
        {
          x_36 = ATgetArgument(w_36, 0);
          t_36 :
          if(match_string(x_36, "mark"))
            {
              u_36 :
              if(((ATgetType(y_36) == AT_LIST) && ATisEmpty(y_36)))
                {
                  t = term_u_11;
                }
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
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm a_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  a_38 = t;
  q_37 :
  if(match_cons(a_38, sym_Seq_2))
    {
      g_38 = ATgetArgument(a_38, 0);
      k_38 = ATgetArgument(a_38, 1);
      r_37 :
      if(match_cons(g_38, sym_Call_2))
        {
          h_38 = ATgetArgument(g_38, 0);
          j_38 = ATgetArgument(g_38, 1);
          s_37 :
          if(match_cons(h_38, sym_SVar_1))
            {
              i_38 = ATgetArgument(h_38, 0);
              t_37 :
              if(match_string(i_38, "mark"))
                {
                  u_37 :
                  if(((ATgetType(j_38) == AT_LIST) && ATisEmpty(j_38)))
                    {
                      v_37 :
                      if(match_cons(k_38, sym_Seq_2))
                        {
                          l_38 = ATgetArgument(k_38, 0);
                          n_38 = ATgetArgument(k_38, 1);
                          w_37 :
                          if(match_cons(l_38, sym_Match_1))
                            {
                              m_38 = ATgetArgument(l_38, 0);
                              x_37 :
                              if(match_cons(n_38, sym_Seq_2))
                                {
                                  o_38 = ATgetArgument(n_38, 0);
                                  q_38 = ATgetArgument(n_38, 1);
                                  y_37 :
                                  if(match_cons(o_38, sym_Where_1))
                                    {
                                      p_38 = ATgetArgument(o_38, 0);
                                      z_37 :
                                      if(match_cons(q_38, sym_Build_1))
                                        {
                                          r_38 = ATgetArgument(q_38, 0);
                                          {
                                            ATerm j_14 = t;
                                            int k_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
                                                ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
                                                t = term_e_15;
                                                {
                                                  ATerm w_1 (ATerm t)
                                                  {
                                                    t = term_f_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, w_1);
                                                  {
                                                    e_39 = t;
                                                    f_37 :
                                                    if(match_cons(e_39, sym_Defined_2))
                                                      {
                                                        f_39 = ATgetArgument(e_39, 0);
                                                        g_39 = ATgetArgument(e_39, 1);
                                                        g_37 :
                                                        if(match_string(f_39, "s_0"))
                                                          {
                                                            ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
                                                            if(((b_39 != NULL) && (b_39 != g_39)))
                                                              _fail(g_39);
                                                            else
                                                              b_39 = g_39;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(b_39), not_null(m_38), (ATerm) ATmakeAppl(sym__2, not_null(p_38), not_null(r_38)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  h_39 = t;
                                                                  e_37 :
                                                                  if(match_cons(h_39, sym__2))
                                                                    {
                                                                      i_39 = ATgetArgument(h_39, 0);
                                                                      j_39 = ATgetArgument(h_39, 1);
                                                                      {
                                                                        if(((c_39 != NULL) && (c_39 != i_39)))
                                                                          _fail(i_39);
                                                                        else
                                                                          c_39 = i_39;
                                                                        if(((d_39 != NULL) && (d_39 != j_39)))
                                                                          _fail(j_39);
                                                                        else
                                                                          d_39 = j_39;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(c_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_39))));
                                                ;
                                                LocalPopChoice(k_14);
                                              }
                                            else
                                              {
                                                t = j_14;
                                                {
                                                  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
                                                  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
                                                  t = term_e_15;
                                                  {
                                                    ATerm y_1 (ATerm t)
                                                    {
                                                      t = term_f_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, y_1);
                                                    {
                                                      t_39 = t;
                                                      o_37 :
                                                      if(match_cons(t_39, sym_Defined_2))
                                                        {
                                                          u_39 = ATgetArgument(t_39, 0);
                                                          v_39 = ATgetArgument(t_39, 1);
                                                          p_37 :
                                                          if(match_string(u_39, "h_0"))
                                                            {
                                                              ATerm w_39 = NULL;
                                                              if(((o_39 != NULL) && (o_39 != v_39)))
                                                                _fail(v_39);
                                                              else
                                                                o_39 = v_39;
                                                              {
                                                                ATerm x_39 = NULL;
                                                                t = not_null(o_39);
                                                                {
                                                                  w_39 = t;
                                                                  {
                                                                    if(((q_39 != NULL) && (q_39 != w_39)))
                                                                      _fail(w_39);
                                                                    else
                                                                      q_39 = w_39;
                                                                    {
                                                                      t = not_null(m_38);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          x_39 = t;
                                                                          {
                                                                            if(((p_39 != NULL) && (p_39 != x_39)))
                                                                              _fail(x_39);
                                                                            else
                                                                              p_39 = x_39;
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                t = term_g_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm a_2 (ATerm t)
                                                                              {
                                                                                ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
                                                                                ATerm b_2 (ATerm t)
                                                                                {
                                                                                  ATerm y_39 = NULL,a_40 = NULL;
                                                                                  ATerm z_39 = NULL;
                                                                                  z_39 = t;
                                                                                  if(((y_39 != NULL) && (y_39 != z_39)))
                                                                                    _fail(z_39);
                                                                                  else
                                                                                    y_39 = z_39;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_39));
                                                                                    {
                                                                                      a_40 = t;
                                                                                      {
                                                                                        ATerm h_15;
                                                                                        h_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(q_39), not_null(a_40)), term_j_15);
                                                                                          {
                                                                                            ATerm c_2 (ATerm t)
                                                                                            {
                                                                                              t = term_g_15;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, c_2);
                                                                                          }
                                                                                        }
                                                                                        t = h_15;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, b_2);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_38), not_null(r_38));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      c_40 = t;
                                                                                      n_37 :
                                                                                      if(match_cons(c_40, sym__2))
                                                                                        {
                                                                                          d_40 = ATgetArgument(c_40, 0);
                                                                                          e_40 = ATgetArgument(c_40, 1);
                                                                                          {
                                                                                            if(((r_39 != NULL) && (r_39 != d_40)))
                                                                                              _fail(d_40);
                                                                                            else
                                                                                              r_39 = d_40;
                                                                                            if(((s_39 != NULL) && (s_39 != e_40)))
                                                                                              _fail(e_40);
                                                                                            else
                                                                                              s_39 = e_40;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(r_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_38))));
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
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,p_41 = NULL;
  ATerm g_42 (ATerm t)
  {
    ATerm y_41 = NULL,z_41 = NULL;
    t = not_null(f_41);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_g_15;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        y_41 = t;
        u_40 :
        if(match_cons(y_41, sym_Defined_1))
          {
            z_41 = ATgetArgument(y_41, 0);
            v_40 :
            if(!(match_string(z_41, "m_0")))
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
    t = not_null(p_41);
    return(t);
  }
  ATerm h_42 (ATerm t)
  {
    ATerm d_42 = NULL,e_42 = NULL;
    t = not_null(f_41);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_g_15;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        d_42 = t;
        w_40 :
        if(match_cons(d_42, sym_Defined_1))
          {
            e_42 = ATgetArgument(d_42, 0);
            b_41 :
            if(!(match_string(e_42, "j_0")))
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
    t = not_null(p_41);
    return(t);
  }
  f_41 = t;
  c_41 :
  if(match_cons(f_41, sym_App_2))
    {
      g_41 = ATgetArgument(f_41, 0);
      p_41 = ATgetArgument(f_41, 1);
      d_41 :
      if(match_cons(p_41, sym_Var_1))
        {
          e_41 = ATgetArgument(p_41, 0);
          {
            ATerm k_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_41 = NULL,u_41 = NULL;
                t = not_null(f_41);
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = term_g_15;
                    return(t);
                  }
                  t = rewrite_1(t, f_2);
                  {
                    t_41 = t;
                    s_40 :
                    if(match_cons(t_41, sym_Defined_1))
                      {
                        u_41 = ATgetArgument(t_41, 0);
                        t_40 :
                        if(!(match_string(u_41, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_41));
                ;
                LocalPopChoice(m_15);
              }
            else
              {
                t = k_15;
                {
                  ATerm n_15 = t;
                  int o_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_42(t);
                      ;
                      LocalPopChoice(o_15);
                    }
                  else
                    {
                      t = n_15;
                      t = h_42(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_42(t);
              ;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = h_42(t);
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
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  j_42 :
  if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
    {
      l_42 = ATgetFirst((ATermList) k_42);
      m_42 = (ATerm) ATgetNext((ATermList) k_42);
      t = not_null(m_42);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym__2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      {
        ATerm s_15;
        s_15 = t;
        {
          ATerm x_42 = NULL;
          ATerm y_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_42), not_null(u_42));
          {
            ATerm u_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = u_15;
                t = (ATerm) ATempty;
              }
            {
              y_42 = t;
              if(((x_42 != NULL) && (x_42 != y_42)))
                _fail(y_42);
              else
                x_42 = y_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_42), not_null(u_42), not_null(x_42));
            t = table_put_0(t);
          }
        }
        t = s_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm i_43 = NULL;
    ATerm j_43 = NULL,m_43 = NULL,n_43 = NULL;
    t = p_108(t);
    {
      i_43 = t;
      {
        if(((h_43 != NULL) && (h_43 != i_43)))
          _fail(i_43);
        else
          h_43 = i_43;
        {
          ATerm j_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), term_b_17);
              t = table_get_0(t);
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = j_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_43 = t;
            e_43 :
            if(((ATgetType(j_43) == AT_LIST) && !(ATisEmpty(j_43))))
              {
                m_43 = ATgetFirst((ATermList) j_43);
                n_43 = (ATerm) ATgetNext((ATermList) j_43);
                {
                  if(((g_43 != NULL) && (g_43 != m_43)))
                    _fail(m_43);
                  else
                    g_43 = m_43;
                  {
                    if(((f_43 != NULL) && (f_43 != n_43)))
                      _fail(n_43);
                    else
                      f_43 = n_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_43), term_b_17, not_null(f_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_43);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm s_43 = NULL;
                              s_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), not_null(s_43));
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
  t = z_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_99(t);
      t = v_99(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        t = v_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_108 (ATerm))
{
  ATerm c_44 = NULL;
  ATerm e_17;
  e_17 = t;
  {
    ATerm d_44 = NULL;
    ATerm e_44 = NULL;
    t = o_108(t);
    {
      d_44 = t;
      {
        if(((c_44 != NULL) && (c_44 != d_44)))
          _fail(d_44);
        else
          c_44 = d_44;
        {
          ATerm f_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_44), term_b_17);
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = (ATerm) ATempty;
              }
            {
              f_44 = t;
              if(((e_44 != NULL) && (e_44 != f_44)))
                _fail(f_44);
              else
                e_44 = f_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_44), term_b_17, (ATerm) ATinsert(CheckATermList(not_null(e_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm q_108 (ATerm), ATerm r_108 (ATerm))
{
  t = begin_scope_1(t, q_108);
  {
    ATerm h_2 (ATerm t)
    {
      t = end_scope_1(t, q_108);
      return(t);
    }
    t = restore_always_2(t, r_108, h_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym__3))
    {
      v_44 = ATgetArgument(u_44, 0);
      w_44 = ATgetArgument(u_44, 1);
      x_44 = ATgetArgument(u_44, 2);
      {
        ATerm b_45 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_g_15;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm e_45 = NULL;
          t = not_null(w_44);
          {
            t = tvars_0(t);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm c_45 = NULL;
                c_45 = t;
                {
                  ATerm h_17;
                  h_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(v_44), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_45))), term_j_17);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = term_g_15;
                        return(t);
                      }
                      t = assert_1(t, l_2);
                    }
                  }
                  t = h_17;
                }
                return(t);
              }
              t = map_1(t, k_2);
              {
                t = not_null(x_44);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    e_45 = t;
                    if(((b_45 != NULL) && (b_45 != e_45)))
                      _fail(e_45);
                    else
                      b_45 = e_45;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_2, j_2);
        t = not_null(b_45);
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
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL;
  e_46 = t;
  w_45 :
  if(match_cons(e_46, sym_Seq_2))
    {
      f_46 = ATgetArgument(e_46, 0);
      j_46 = ATgetArgument(e_46, 1);
      x_45 :
      if(match_cons(f_46, sym_Call_2))
        {
          g_46 = ATgetArgument(f_46, 0);
          i_46 = ATgetArgument(f_46, 1);
          y_45 :
          if(match_cons(g_46, sym_SVar_1))
            {
              h_46 = ATgetArgument(g_46, 0);
              z_45 :
              if(match_string(h_46, "mark"))
                {
                  a_46 :
                  if(((ATgetType(i_46) == AT_LIST) && ATisEmpty(i_46)))
                    {
                      b_46 :
                      if(match_cons(j_46, sym_Seq_2))
                        {
                          k_46 = ATgetArgument(j_46, 0);
                          n_46 = ATgetArgument(j_46, 1);
                          c_46 :
                          if(match_cons(k_46, sym_Match_1))
                            {
                              l_46 = ATgetArgument(k_46, 0);
                              d_46 :
                              if(match_cons(n_46, sym_Build_1))
                                {
                                  o_46 = ATgetArgument(n_46, 0);
                                  {
                                    ATerm k_17 = t;
                                    int l_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm u_46 = NULL,v_46 = NULL;
                                        ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
                                        t = term_n_17;
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            t = term_o_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, m_2);
                                          {
                                            w_46 = t;
                                            m_45 :
                                            if(match_cons(w_46, sym_Defined_2))
                                              {
                                                x_46 = ATgetArgument(w_46, 0);
                                                y_46 = ATgetArgument(w_46, 1);
                                                n_45 :
                                                if(match_string(x_46, "p_0"))
                                                  {
                                                    ATerm z_46 = NULL;
                                                    if(((u_46 != NULL) && (u_46 != y_46)))
                                                      _fail(y_46);
                                                    else
                                                      u_46 = y_46;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_46), not_null(l_46), not_null(o_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          z_46 = t;
                                                          if(((v_46 != NULL) && (v_46 != z_46)))
                                                            _fail(z_46);
                                                          else
                                                            v_46 = z_46;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_46)));
                                        ;
                                        LocalPopChoice(l_17);
                                      }
                                    else
                                      {
                                        t = k_17;
                                        {
                                          ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
                                          ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
                                          t = term_n_17;
                                          {
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_o_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, n_2);
                                            {
                                              h_47 = t;
                                              u_45 :
                                              if(match_cons(h_47, sym_Defined_2))
                                                {
                                                  i_47 = ATgetArgument(h_47, 0);
                                                  j_47 = ATgetArgument(h_47, 1);
                                                  v_45 :
                                                  if(match_string(i_47, "f_0"))
                                                    {
                                                      ATerm k_47 = NULL;
                                                      if(((d_47 != NULL) && (d_47 != j_47)))
                                                        _fail(j_47);
                                                      else
                                                        d_47 = j_47;
                                                      {
                                                        ATerm l_47 = NULL;
                                                        t = not_null(d_47);
                                                        {
                                                          k_47 = t;
                                                          {
                                                            if(((f_47 != NULL) && (f_47 != k_47)))
                                                              _fail(k_47);
                                                            else
                                                              f_47 = k_47;
                                                            {
                                                              t = not_null(l_46);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  l_47 = t;
                                                                  {
                                                                    if(((e_47 != NULL) && (e_47 != l_47)))
                                                                      _fail(l_47);
                                                                    else
                                                                      e_47 = l_47;
                                                                    {
                                                                      ATerm o_2 (ATerm t)
                                                                      {
                                                                        t = term_g_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm p_2 (ATerm t)
                                                                      {
                                                                        ATerm q_47 = NULL;
                                                                        ATerm q_2 (ATerm t)
                                                                        {
                                                                          ATerm m_47 = NULL,o_47 = NULL;
                                                                          ATerm n_47 = NULL;
                                                                          n_47 = t;
                                                                          if(((m_47 != NULL) && (m_47 != n_47)))
                                                                            _fail(n_47);
                                                                          else
                                                                            m_47 = n_47;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_47));
                                                                            {
                                                                              o_47 = t;
                                                                              {
                                                                                ATerm p_17;
                                                                                p_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(f_47), not_null(o_47)), term_x_17);
                                                                                  {
                                                                                    ATerm r_2 (ATerm t)
                                                                                    {
                                                                                      t = term_g_15;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, r_2);
                                                                                  }
                                                                                }
                                                                                t = p_17;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, q_2);
                                                                        {
                                                                          t = not_null(o_46);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              q_47 = t;
                                                                              if(((g_47 != NULL) && (g_47 != q_47)))
                                                                                _fail(q_47);
                                                                              else
                                                                                g_47 = q_47;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_47)));
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
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  g_49 = t;
  z_48 :
  if(match_cons(g_49, sym_App_2))
    {
      h_49 = ATgetArgument(g_49, 0);
      n_49 = ATgetArgument(g_49, 1);
      a_49 :
      if(match_cons(h_49, sym_Call_2))
        {
          i_49 = ATgetArgument(h_49, 0);
          k_49 = ATgetArgument(h_49, 1);
          b_49 :
          if(match_cons(i_49, sym_SVar_1))
            {
              j_49 = ATgetArgument(i_49, 0);
              c_49 :
              if(match_string(j_49, "bottomup_1"))
                {
                  d_49 :
                  if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
                    {
                      l_49 = ATgetFirst((ATermList) k_49);
                      m_49 = (ATerm) ATgetNext((ATermList) k_49);
                      e_49 :
                      if(((ATgetType(m_49) == AT_LIST) && ATisEmpty(m_49)))
                        {
                          f_49 :
                          if(match_cons(n_49, sym_Op_2))
                            {
                              o_49 = ATgetArgument(n_49, 0);
                              p_49 = ATgetArgument(n_49, 1);
                              {
                                ATerm t_49 = NULL;
                                ATerm d_50 = NULL;
                                t = not_null(p_49);
                                {
                                  ATerm s_2 (ATerm t)
                                  {
                                    ATerm u_49 = NULL;
                                    u_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, not_null(l_49))), not_null(u_49));
                                    return(t);
                                  }
                                  t = map_1(t, s_2);
                                  {
                                    d_50 = t;
                                    if(((t_49 != NULL) && (t_49 != d_50)))
                                      _fail(d_50);
                                    else
                                      t_49 = d_50;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_49), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_49), not_null(t_49)));
                              }
                            }
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
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  k_50 = t;
  i_50 :
  if(match_cons(k_50, sym_Seq_2))
    {
      l_50 = ATgetArgument(k_50, 0);
      n_50 = ATgetArgument(k_50, 1);
      j_50 :
      if(match_cons(l_50, sym_Build_1))
        {
          m_50 = ATgetArgument(l_50, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(n_50), not_null(m_50)));
        }
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
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  f_51 = t;
  b_51 :
  if(match_cons(f_51, sym_LChoice_2))
    {
      g_51 = ATgetArgument(f_51, 0);
      j_51 = ATgetArgument(f_51, 1);
      c_51 :
      if(match_cons(g_51, sym_LChoice_2))
        {
          h_51 = ATgetArgument(g_51, 0);
          i_51 = ATgetArgument(g_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_51), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_51), not_null(j_51)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(f_51, sym_Seq_2))
        {
          g_51 = ATgetArgument(f_51, 0);
          j_51 = ATgetArgument(f_51, 1);
          d_51 :
          if(match_cons(g_51, sym_Seq_2))
            {
              h_51 = ATgetArgument(g_51, 0);
              i_51 = ATgetArgument(g_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_51), not_null(j_51)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_51, sym_Choice_2))
            {
              g_51 = ATgetArgument(f_51, 0);
              j_51 = ATgetArgument(f_51, 1);
              e_51 :
              if(match_cons(g_51, sym_Choice_2))
                {
                  h_51 = ATgetArgument(g_51, 0);
                  i_51 = ATgetArgument(g_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_51), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_51), not_null(j_51)));
                }
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
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  z_51 = t;
  x_51 :
  if(match_cons(z_51, sym_Seq_2))
    {
      a_52 = ATgetArgument(z_51, 0);
      d_52 = ATgetArgument(z_51, 1);
      y_51 :
      if(match_cons(a_52, sym_Scope_2))
        {
          b_52 = ATgetArgument(a_52, 0);
          c_52 = ATgetArgument(a_52, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_52), not_null(d_52)));
        }
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
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  n_52 = t;
  l_52 :
  if(match_cons(n_52, sym_Seq_2))
    {
      o_52 = ATgetArgument(n_52, 0);
      r_52 = ATgetArgument(n_52, 1);
      m_52 :
      if(match_cons(o_52, sym_LChoice_2))
        {
          p_52 = ATgetArgument(o_52, 0);
          q_52 = ATgetArgument(o_52, 1);
          {
            ATerm w_52 = NULL,x_52 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_a_18, not_null(r_52));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_b_18;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                w_52 = t;
                j_52 :
                if(match_cons(w_52, sym_Defined_1))
                  {
                    x_52 = ATgetArgument(w_52, 0);
                    k_52 :
                    if(!(match_string(x_52, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(p_52), not_null(r_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_52), not_null(r_52)));
          }
        }
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  e_53 = t;
  c_53 :
  if(match_cons(e_53, sym_Seq_2))
    {
      f_53 = ATgetArgument(e_53, 0);
      i_53 = ATgetArgument(e_53, 1);
      d_53 :
      if(match_cons(f_53, sym_Choice_2))
        {
          g_53 = ATgetArgument(f_53, 0);
          h_53 = ATgetArgument(f_53, 1);
          {
            ATerm n_53 = NULL,o_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_18, not_null(i_53));
            {
              ATerm u_2 (ATerm t)
              {
                t = term_d_18;
                return(t);
              }
              t = rewrite_1(t, u_2);
              {
                n_53 = t;
                a_53 :
                if(match_cons(n_53, sym_Defined_1))
                  {
                    o_53 = ATgetArgument(n_53, 0);
                    b_53 :
                    if(!(match_string(o_53, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_53), not_null(i_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_53), not_null(i_53)));
          }
        }
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
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
        z_54 = t;
        p_54 :
        if(match_cons(z_54, sym_Seq_2))
          {
            a_55 = ATgetArgument(z_54, 0);
            g_55 = ATgetArgument(z_54, 1);
            q_54 :
            if(match_cons(a_55, sym_Choice_2))
              {
                b_55 = ATgetArgument(a_55, 0);
                d_55 = ATgetArgument(a_55, 1);
                {
                  ATerm t_55 = NULL,v_55 = NULL;
                  ATerm g_18;
                  g_18 = t;
                  {
                    ATerm q_55 = NULL,s_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_18, not_null(g_55));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_d_18;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        q_55 = t;
                        y_53 :
                        if(match_cons(q_55, sym_Defined_1))
                          {
                            s_55 = ATgetArgument(q_55, 0);
                            z_53 :
                            if(!(match_string(s_55, "v_1")))
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
                  t = g_18;
                  {
                    ATerm j_18;
                    j_18 = t;
                    {
                      ATerm u_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(g_55));
                      {
                        t = v_2(t);
                        {
                          u_55 = t;
                          if(((t_55 != NULL) && (t_55 != u_55)))
                            _fail(u_55);
                          else
                            t_55 = u_55;
                        }
                      }
                    }
                    t = j_18;
                    {
                      ATerm w_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_55), not_null(g_55));
                      {
                        t = v_2(t);
                        {
                          w_55 = t;
                          if(((v_55 != NULL) && (v_55 != w_55)))
                            _fail(w_55);
                          else
                            v_55 = w_55;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_55), not_null(v_55));
                        t = v_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(a_55, sym_LChoice_2))
                  {
                    b_55 = ATgetArgument(a_55, 0);
                    d_55 = ATgetArgument(a_55, 1);
                    {
                      ATerm d_56 = NULL,f_56 = NULL;
                      ATerm k_18;
                      k_18 = t;
                      {
                        ATerm b_56 = NULL,c_56 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_a_18, not_null(g_55));
                        {
                          ATerm x_2 (ATerm t)
                          {
                            t = term_b_18;
                            return(t);
                          }
                          t = rewrite_1(t, x_2);
                          {
                            b_56 = t;
                            c_54 :
                            if(match_cons(b_56, sym_Defined_1))
                              {
                                c_56 = ATgetArgument(b_56, 0);
                                d_54 :
                                if(!(match_string(c_56, "x_1")))
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
                      t = k_18;
                      {
                        ATerm l_18;
                        l_18 = t;
                        {
                          ATerm e_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(g_55));
                          {
                            t = v_2(t);
                            {
                              e_56 = t;
                              if(((d_56 != NULL) && (d_56 != e_56)))
                                _fail(e_56);
                              else
                                d_56 = e_56;
                            }
                          }
                        }
                        t = l_18;
                        {
                          ATerm g_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_55), not_null(g_55));
                          {
                            t = v_2(t);
                            {
                              g_56 = t;
                              if(((f_56 != NULL) && (f_56 != g_56)))
                                _fail(g_56);
                              else
                                f_56 = g_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_56), not_null(f_56));
                            t = v_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(a_55, sym_Scope_2))
                      {
                        b_55 = ATgetArgument(a_55, 0);
                        d_55 = ATgetArgument(a_55, 1);
                        {
                          ATerm k_56 = NULL;
                          ATerm l_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_55), not_null(g_55));
                          {
                            t = v_2(t);
                            {
                              l_56 = t;
                              if(((k_56 != NULL) && (k_56 != l_56)))
                                _fail(l_56);
                              else
                                k_56 = l_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_55), not_null(k_56));
                            t = v_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(a_55, sym_Seq_2))
                          {
                            b_55 = ATgetArgument(a_55, 0);
                            d_55 = ATgetArgument(a_55, 1);
                            {
                              ATerm u_56 = NULL;
                              ATerm v_56 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_55), not_null(g_55));
                              {
                                t = v_2(t);
                                {
                                  v_56 = t;
                                  if(((u_56 != NULL) && (u_56 != v_56)))
                                    _fail(v_56);
                                  else
                                    u_56 = v_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(u_56));
                                t = v_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(a_55, sym_Build_1))
                              {
                                b_55 = ATgetArgument(a_55, 0);
                                {
                                  ATerm d_57 = NULL;
                                  ATerm e_57 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_55), not_null(b_55));
                                  {
                                    t = v_2(t);
                                    {
                                      e_57 = t;
                                      if(((d_57 != NULL) && (d_57 != e_57)))
                                        _fail(e_57);
                                      else
                                        d_57 = e_57;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_57));
                                    t = v_2(t);
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
            if(match_cons(z_54, sym_LChoice_2))
              {
                a_55 = ATgetArgument(z_54, 0);
                g_55 = ATgetArgument(z_54, 1);
                r_54 :
                if(match_cons(a_55, sym_LChoice_2))
                  {
                    b_55 = ATgetArgument(a_55, 0);
                    d_55 = ATgetArgument(a_55, 1);
                    {
                      ATerm p_56 = NULL;
                      ATerm q_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_55), not_null(g_55));
                      {
                        t = v_2(t);
                        {
                          q_56 = t;
                          if(((p_56 != NULL) && (p_56 != q_56)))
                            _fail(q_56);
                          else
                            p_56 = q_56;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_55), not_null(p_56));
                        t = v_2(t);
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
                if(match_cons(z_54, sym_Choice_2))
                  {
                    a_55 = ATgetArgument(z_54, 0);
                    g_55 = ATgetArgument(z_54, 1);
                    s_54 :
                    if(match_cons(a_55, sym_Choice_2))
                      {
                        b_55 = ATgetArgument(a_55, 0);
                        d_55 = ATgetArgument(a_55, 1);
                        {
                          ATerm z_56 = NULL;
                          ATerm a_57 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_55), not_null(g_55));
                          {
                            t = v_2(t);
                            {
                              a_57 = t;
                              if(((z_56 != NULL) && (z_56 != a_57)))
                                _fail(a_57);
                              else
                                z_56 = a_57;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_55), not_null(z_56));
                            t = v_2(t);
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
                    if(match_cons(z_54, sym_App_2))
                      {
                        a_55 = ATgetArgument(z_54, 0);
                        g_55 = ATgetArgument(z_54, 1);
                        t_54 :
                        if(match_cons(a_55, sym_Call_2))
                          {
                            b_55 = ATgetArgument(a_55, 0);
                            d_55 = ATgetArgument(a_55, 1);
                            u_54 :
                            if(match_cons(b_55, sym_SVar_1))
                              {
                                c_55 = ATgetArgument(b_55, 0);
                                v_54 :
                                if(match_string(c_55, "bottomup_1"))
                                  {
                                    w_54 :
                                    if(((ATgetType(d_55) == AT_LIST) && !(ATisEmpty(d_55))))
                                      {
                                        e_55 = ATgetFirst((ATermList) d_55);
                                        f_55 = (ATerm) ATgetNext((ATermList) d_55);
                                        x_54 :
                                        if(((ATgetType(f_55) == AT_LIST) && ATisEmpty(f_55)))
                                          {
                                            y_54 :
                                            if(match_cons(g_55, sym_Op_2))
                                              {
                                                h_55 = ATgetArgument(g_55, 0);
                                                i_55 = ATgetArgument(g_55, 1);
                                                {
                                                  ATerm i_57 = NULL,m_57 = NULL;
                                                  ATerm m_18;
                                                  m_18 = t;
                                                  {
                                                    ATerm l_57 = NULL;
                                                    t = not_null(i_55);
                                                    {
                                                      ATerm y_2 (ATerm t)
                                                      {
                                                        ATerm j_57 = NULL;
                                                        j_57 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, not_null(e_55))), not_null(j_57));
                                                        return(t);
                                                      }
                                                      t = map_1(t, y_2);
                                                      {
                                                        l_57 = t;
                                                        if(((i_57 != NULL) && (i_57 != l_57)))
                                                          _fail(l_57);
                                                        else
                                                          i_57 = l_57;
                                                      }
                                                    }
                                                  }
                                                  t = m_18;
                                                  {
                                                    ATerm n_57 = NULL,p_57 = NULL;
                                                    ATerm o_57 = NULL;
                                                    t = not_null(i_57);
                                                    {
                                                      t = bottomup_1(t, v_2);
                                                      {
                                                        o_57 = t;
                                                        if(((n_57 != NULL) && (n_57 != o_57)))
                                                          _fail(o_57);
                                                        else
                                                          n_57 = o_57;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_55), not_null(n_57));
                                                      {
                                                        t = v_2(t);
                                                        {
                                                          p_57 = t;
                                                          if(((m_57 != NULL) && (m_57 != p_57)))
                                                            _fail(p_57);
                                                          else
                                                            m_57 = p_57;
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_55), not_null(m_57));
                                                      t = v_2(t);
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
              }
          }
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, v_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  p_58 = t;
  n_58 :
  if(match_cons(p_58, sym_Seq_2))
    {
      q_58 = ATgetArgument(p_58, 0);
      s_58 = ATgetArgument(p_58, 1);
      o_58 :
      if(match_cons(s_58, sym_Scope_2))
        {
          t_58 = ATgetArgument(s_58, 0);
          u_58 = ATgetArgument(s_58, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_58), not_null(u_58)));
        }
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
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  c_59 = t;
  a_59 :
  if(match_cons(c_59, sym_Seq_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      b_59 :
      if(match_cons(e_59, sym_LChoice_2))
        {
          f_59 = ATgetArgument(e_59, 0);
          g_59 = ATgetArgument(e_59, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(d_59), not_null(f_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_59), not_null(g_59)));
        }
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
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  o_59 = t;
  m_59 :
  if(match_cons(o_59, sym_Seq_2))
    {
      p_59 = ATgetArgument(o_59, 0);
      q_59 = ATgetArgument(o_59, 1);
      n_59 :
      if(match_cons(q_59, sym_Choice_2))
        {
          r_59 = ATgetArgument(q_59, 0);
          s_59 = ATgetArgument(q_59, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(p_59), not_null(r_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_59), not_null(s_59)));
        }
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
ATerm bottomup_1 (ATerm t, ATerm o_96 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = bottomup_1(t, o_96);
    return(t);
  }
  t = _all(t, z_2);
  t = o_96(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm h_115 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      t = h_115(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_115(t);
              t = bottomup_1(t, c_3);
              ;
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
              }
            }
          return(t);
        }
        t = bottomup_1(t, c_3);
      }
      return(t);
    }
    t = try_1(t, b_3);
    return(t);
  }
  t = bottomup_1(t, a_3);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
        i_60 = t;
        g_60 :
        if(match_cons(i_60, sym_Seq_2))
          {
            j_60 = ATgetArgument(i_60, 0);
            k_60 = ATgetArgument(i_60, 1);
            h_60 :
            if(match_cons(k_60, sym_Choice_2))
              {
                l_60 = ATgetArgument(k_60, 0);
                m_60 = ATgetArgument(k_60, 1);
                {
                  ATerm q_60 = NULL,s_60 = NULL;
                  ATerm r_18;
                  r_18 = t;
                  {
                    ATerm r_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), not_null(l_60));
                    {
                      t = d_3(t);
                      {
                        r_60 = t;
                        if(((q_60 != NULL) && (q_60 != r_60)))
                          _fail(r_60);
                        else
                          q_60 = r_60;
                      }
                    }
                  }
                  t = r_18;
                  {
                    ATerm t_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), not_null(m_60));
                    {
                      t = d_3(t);
                      {
                        t_60 = t;
                        if(((s_60 != NULL) && (s_60 != t_60)))
                          _fail(t_60);
                        else
                          s_60 = t_60;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_60), not_null(s_60));
                      t = d_3(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(k_60, sym_LChoice_2))
                  {
                    l_60 = ATgetArgument(k_60, 0);
                    m_60 = ATgetArgument(k_60, 1);
                    {
                      ATerm x_60 = NULL,z_60 = NULL;
                      ATerm s_18;
                      s_18 = t;
                      {
                        ATerm y_60 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), not_null(l_60));
                        {
                          t = d_3(t);
                          {
                            y_60 = t;
                            if(((x_60 != NULL) && (x_60 != y_60)))
                              _fail(y_60);
                            else
                              x_60 = y_60;
                          }
                        }
                      }
                      t = s_18;
                      {
                        ATerm a_61 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), not_null(m_60));
                        {
                          t = d_3(t);
                          {
                            a_61 = t;
                            if(((z_60 != NULL) && (z_60 != a_61)))
                              _fail(a_61);
                            else
                              z_60 = a_61;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_60), not_null(z_60));
                          t = d_3(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(k_60, sym_Scope_2))
                      {
                        l_60 = ATgetArgument(k_60, 0);
                        m_60 = ATgetArgument(k_60, 1);
                        {
                          ATerm e_61 = NULL;
                          ATerm f_61 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), not_null(m_60));
                          {
                            t = d_3(t);
                            {
                              f_61 = t;
                              if(((e_61 != NULL) && (e_61 != f_61)))
                                _fail(f_61);
                              else
                                e_61 = f_61;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_60), not_null(e_61));
                            t = d_3(t);
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
        else
          {
            _fail(t);
          }
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, d_3);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm u_61 = NULL,v_61 = NULL;
  u_61 = t;
  t_61 :
  if(match_cons(u_61, sym_Build_1))
    {
      v_61 = ATgetArgument(u_61, 0);
      {
        ATerm y_61 = NULL,a_62 = NULL;
        ATerm z_61 = NULL;
        t = SSLgetAnnotations(not_null(u_61));
        {
          z_61 = t;
          if(((y_61 != NULL) && (y_61 != z_61)))
            _fail(z_61);
          else
            y_61 = z_61;
        }
        {
          t = not_null(v_61);
          {
            ATerm c_62 = NULL;
            t = s_84(t);
            {
              a_62 = t;
              {
                ATerm d_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_62)), not_null(y_61));
                {
                  d_62 = t;
                  if(((c_62 != NULL) && (c_62 != d_62)))
                    _fail(d_62);
                  else
                    c_62 = d_62;
                }
                t = not_null(c_62);
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
ATerm Seq_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_Seq_2))
    {
      p_62 = ATgetArgument(o_62, 0);
      q_62 = ATgetArgument(o_62, 1);
      {
        ATerm u_62 = NULL,w_62 = NULL;
        ATerm v_62 = NULL;
        t = SSLgetAnnotations(not_null(o_62));
        {
          v_62 = t;
          if(((u_62 != NULL) && (u_62 != v_62)))
            _fail(v_62);
          else
            u_62 = v_62;
        }
        {
          t = not_null(p_62);
          {
            ATerm y_62 = NULL;
            t = i_85(t);
            {
              w_62 = t;
              {
                t = not_null(q_62);
                {
                  ATerm a_63 = NULL;
                  t = j_85(t);
                  {
                    y_62 = t;
                    {
                      ATerm b_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(w_62), not_null(y_62)), not_null(u_62));
                      {
                        b_63 = t;
                        if(((a_63 != NULL) && (a_63 != b_63)))
                          _fail(b_63);
                        else
                          a_63 = b_63;
                      }
                      t = not_null(a_63);
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
ATerm Match_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm m_63 = NULL,n_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym_Match_1))
    {
      n_63 = ATgetArgument(m_63, 0);
      {
        ATerm q_63 = NULL,s_63 = NULL;
        ATerm r_63 = NULL;
        t = SSLgetAnnotations(not_null(m_63));
        {
          r_63 = t;
          if(((q_63 != NULL) && (q_63 != r_63)))
            _fail(r_63);
          else
            q_63 = r_63;
        }
        {
          t = not_null(n_63);
          {
            ATerm u_63 = NULL;
            t = r_84(t);
            {
              s_63 = t;
              {
                ATerm v_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(s_63)), not_null(q_63));
                {
                  v_63 = t;
                  if(((u_63 != NULL) && (u_63 != v_63)))
                    _fail(v_63);
                  else
                    u_63 = v_63;
                }
                t = not_null(u_63);
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
ATerm LChoice_2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym_LChoice_2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm m_64 = NULL,o_64 = NULL;
        ATerm n_64 = NULL;
        t = SSLgetAnnotations(not_null(g_64));
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
        {
          t = not_null(h_64);
          {
            ATerm q_64 = NULL;
            t = m_85(t);
            {
              o_64 = t;
              {
                t = not_null(i_64);
                {
                  ATerm s_64 = NULL;
                  t = n_85(t);
                  {
                    q_64 = t;
                    {
                      ATerm t_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(o_64), not_null(q_64)), not_null(m_64));
                      {
                        t_64 = t;
                        if(((s_64 != NULL) && (s_64 != t_64)))
                          _fail(t_64);
                        else
                          s_64 = t_64;
                      }
                      t = not_null(s_64);
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
ATerm Choice_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  e_65 :
  if(match_cons(f_65, sym_Choice_2))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      {
        ATerm l_65 = NULL,n_65 = NULL;
        ATerm m_65 = NULL;
        t = SSLgetAnnotations(not_null(f_65));
        {
          m_65 = t;
          if(((l_65 != NULL) && (l_65 != m_65)))
            _fail(m_65);
          else
            l_65 = m_65;
        }
        {
          t = not_null(g_65);
          {
            ATerm p_65 = NULL;
            t = k_85(t);
            {
              n_65 = t;
              {
                t = not_null(h_65);
                {
                  ATerm r_65 = NULL;
                  t = l_85(t);
                  {
                    p_65 = t;
                    {
                      ATerm s_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(n_65), not_null(p_65)), not_null(l_65));
                      {
                        s_65 = t;
                        if(((r_65 != NULL) && (r_65 != s_65)))
                          _fail(s_65);
                        else
                          r_65 = s_65;
                      }
                      t = not_null(r_65);
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
  ATerm e_3 (ATerm t)
  {
    ATerm t_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = t_18;
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              {
                ATerm b_19 = t;
                int d_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = Match_1(t, _id);
                        return(t);
                      }
                      ATerm h_3 (ATerm t)
                      {
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, g_3, h_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, f_3);
                    ;
                    LocalPopChoice(d_19);
                  }
                else
                  {
                    t = b_19;
                    {
                      ATerm f_19 = t;
                      int i_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_3 (ATerm t)
                          {
                            ATerm j_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm k_3 (ATerm t)
                            {
                              ATerm l_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, l_3);
                              return(t);
                            }
                            t = Seq_2(t, j_3, k_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, i_3);
                          ;
                          LocalPopChoice(i_19);
                        }
                      else
                        {
                          t = f_19;
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
  t = try_1(t, e_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm a_66 = NULL;
  a_66 = t;
  {
    ATerm j_19;
    j_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Defined_2, term_k_19, not_null(a_66)));
      {
        ATerm m_3 (ATerm t)
        {
          t = term_o_17;
          return(t);
        }
        t = assert_1(t, m_3);
      }
    }
    t = j_19;
    {
      ATerm l_19;
      l_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATmakeAppl(sym_Defined_2, term_m_19, not_null(a_66)));
        {
          ATerm n_3 (ATerm t)
          {
            t = term_f_15;
            return(t);
          }
          t = assert_1(t, n_3);
        }
      }
      t = l_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm e_66 = NULL;
  e_66 = t;
  {
    ATerm n_19;
    n_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_c_18, not_null(e_66)), term_p_19);
      {
        ATerm o_3 (ATerm t)
        {
          t = term_d_18;
          return(t);
        }
        t = assert_1(t, o_3);
      }
    }
    t = n_19;
    {
      ATerm q_19;
      q_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_a_18, not_null(e_66)), term_s_19);
        {
          ATerm p_3 (ATerm t)
          {
            t = term_b_18;
            return(t);
          }
          t = assert_1(t, p_3);
        }
      }
      t = q_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  t_66 = t;
  o_66 :
  if(match_cons(t_66, sym_Call_2))
    {
      u_66 = ATgetArgument(t_66, 0);
      w_66 = ATgetArgument(t_66, 1);
      p_66 :
      if(match_cons(u_66, sym_SVar_1))
        {
          v_66 = ATgetArgument(u_66, 0);
          q_66 :
          if(match_string(v_66, "innermost_1"))
            {
              r_66 :
              if(((ATgetType(w_66) == AT_LIST) && !(ATisEmpty(w_66))))
                {
                  x_66 = ATgetFirst((ATermList) w_66);
                  y_66 = (ATerm) ATgetNext((ATermList) w_66);
                  s_66 :
                  if(((ATgetType(y_66) == AT_LIST) && ATisEmpty(y_66)))
                    {
                      {
                        ATerm a_67 = NULL,c_67 = NULL;
                        ATerm q_3 (ATerm t)
                        {
                          ATerm r_3 (ATerm t)
                          {
                            t = term_x_19;
                            return(t);
                          }
                          t = say_1(t, r_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, q_3);
                        {
                          ATerm y_19;
                          y_19 = t;
                          {
                            ATerm b_67 = NULL;
                            t = new_0(t);
                            {
                              b_67 = t;
                              if(((a_67 != NULL) && (a_67 != b_67)))
                                _fail(b_67);
                              else
                                a_67 = b_67;
                            }
                          }
                          t = y_19;
                          {
                            ATerm z_19;
                            z_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_67)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = z_19;
                            {
                              ATerm d_20;
                              d_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_67)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = d_20;
                              {
                                ATerm d_67 = NULL;
                                t = not_null(x_66);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    d_67 = t;
                                    if(((c_67 != NULL) && (c_67 != d_67)))
                                      _fail(d_67);
                                    else
                                      c_67 = d_67;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(a_67), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_n_14, not_null(c_67)), (ATerm) ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_67)), (ATerm) ATempty)))), term_u_11))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm s_3 (ATerm t)
                                        {
                                          ATerm f_20 = t;
                                          int i_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              ;
                                              LocalPopChoice(i_20);
                                            }
                                          else
                                            {
                                              t = f_20;
                                              {
                                                ATerm j_20 = t;
                                                int k_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = BottomupToVarIsId_Cond_0(t);
                                                    ;
                                                    LocalPopChoice(k_20);
                                                  }
                                                else
                                                  {
                                                    t = j_20;
                                                    t = UnMark_0(t);
                                                  }
                                              }
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, s_3);
                                        {
                                          ATerm l_20 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm t_3 (ATerm t)
                                              {
                                                ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
                                                e_67 = t;
                                                k_66 :
                                                if(match_cons(e_67, sym_Call_2))
                                                  {
                                                    f_67 = ATgetArgument(e_67, 0);
                                                    h_67 = ATgetArgument(e_67, 1);
                                                    l_66 :
                                                    if(match_cons(f_67, sym_SVar_1))
                                                      {
                                                        g_67 = ATgetArgument(f_67, 0);
                                                        m_66 :
                                                        if(match_string(g_67, "mark"))
                                                          {
                                                            n_66 :
                                                            if(((ATgetType(h_67) == AT_LIST) && ATisEmpty(h_67)))
                                                              {
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
                                              t = oncetd_1(t, t_3);
                                              {
                                                ATerm u_3 (ATerm t)
                                                {
                                                  t = term_m_20;
                                                  return(t);
                                                }
                                                t = say_1(t, u_3);
                                              }
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = l_20;
                                            }
                                          {
                                            t = desugar_0(t);
                                            {
                                              ATerm v_3 (ATerm t)
                                              {
                                                ATerm w_3 (ATerm t)
                                                {
                                                  t = term_n_20;
                                                  return(t);
                                                }
                                                t = say_1(t, w_3);
                                                return(t);
                                              }
                                              t = if_verbose1_1(t, v_3);
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
                }
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
ATerm alltd_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm l_67 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = _all(t, l_67);
      }
    return(t);
  }
  t = l_67(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm e_68 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm f_68 = NULL;
    t = new_0(t);
    {
      f_68 = t;
      {
        if(((e_68 != NULL) && (e_68 != f_68)))
          _fail(f_68);
        else
          e_68 = f_68;
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_68)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm y_3 (ATerm t)
                  {
                    t = term_u_20;
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
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
                g_68 = t;
                r_67 :
                if(match_cons(g_68, sym_Seq_2))
                  {
                    h_68 = ATgetArgument(g_68, 0);
                    r_68 = ATgetArgument(g_68, 1);
                    s_67 :
                    if(match_cons(h_68, sym_All_1))
                      {
                        i_68 = ATgetArgument(h_68, 0);
                        t_67 :
                        if(match_cons(i_68, sym_Call_2))
                          {
                            j_68 = ATgetArgument(i_68, 0);
                            l_68 = ATgetArgument(i_68, 1);
                            u_67 :
                            if(match_cons(j_68, sym_SVar_1))
                              {
                                k_68 = ATgetArgument(j_68, 0);
                                v_67 :
                                if(match_string(k_68, "bottomup_1"))
                                  {
                                    w_67 :
                                    if(((ATgetType(l_68) == AT_LIST) && !(ATisEmpty(l_68))))
                                      {
                                        m_68 = ATgetFirst((ATermList) l_68);
                                        q_68 = (ATerm) ATgetNext((ATermList) l_68);
                                        x_67 :
                                        if(match_cons(m_68, sym_Call_2))
                                          {
                                            n_68 = ATgetArgument(m_68, 0);
                                            p_68 = ATgetArgument(m_68, 1);
                                            y_67 :
                                            if(match_cons(n_68, sym_SVar_1))
                                              {
                                                o_68 = ATgetArgument(n_68, 0);
                                                z_67 :
                                                if(((ATgetType(p_68) == AT_LIST) && ATisEmpty(p_68)))
                                                  {
                                                    a_68 :
                                                    if(((ATgetType(q_68) == AT_LIST) && ATisEmpty(q_68)))
                                                      {
                                                        b_68 :
                                                        if(match_cons(r_68, sym_Call_2))
                                                          {
                                                            s_68 = ATgetArgument(r_68, 0);
                                                            u_68 = ATgetArgument(r_68, 1);
                                                            c_68 :
                                                            if(match_cons(s_68, sym_SVar_1))
                                                              {
                                                                t_68 = ATgetArgument(s_68, 0);
                                                                d_68 :
                                                                if(((ATgetType(u_68) == AT_LIST) && ATisEmpty(u_68)))
                                                                  {
                                                                    {
                                                                      if(((e_68 != NULL) && (e_68 != o_68)))
                                                                        _fail(o_68);
                                                                      else
                                                                        e_68 = o_68;
                                                                      if(((e_68 != NULL) && (e_68 != t_68)))
                                                                        _fail(t_68);
                                                                      else
                                                                        e_68 = t_68;
                                                                    }
                                                                  }
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
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm a_4 (ATerm t)
                    {
                      t = term_a_21;
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
                  t = term_e_21;
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
  t = q_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm x_72 = NULL;
  ATerm g_21;
  g_21 = t;
  {
    ATerm y_72 = NULL;
    t = new_0(t);
    {
      y_72 = t;
      {
        if(((x_72 != NULL) && (x_72 != y_72)))
          _fail(y_72);
        else
          x_72 = y_72;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_72)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm e_4 (ATerm t)
                  {
                    t = term_n_21;
                    return(t);
                  }
                  t = say_1(t, e_4);
                  return(t);
                }
                t = if_verbose2_1(t, d_4);
                _fail(t);
              }
            }
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_72 = NULL,a_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,w_79 = NULL,x_79 = NULL;
                l_74 = t;
                b_69 :
                if(match_cons(l_74, sym_Call_2))
                  {
                    m_74 = ATgetArgument(l_74, 0);
                    o_74 = ATgetArgument(l_74, 1);
                    c_69 :
                    if(match_cons(m_74, sym_SVar_1))
                      {
                        n_74 = ATgetArgument(m_74, 0);
                        d_69 :
                        if(match_string(n_74, "bottomup_1"))
                          {
                            e_69 :
                            if(((ATgetType(o_74) == AT_LIST) && !(ATisEmpty(o_74))))
                              {
                                p_74 = ATgetFirst((ATermList) o_74);
                                x_79 = (ATerm) ATgetNext((ATermList) o_74);
                                f_69 :
                                if(match_cons(p_74, sym_Call_2))
                                  {
                                    q_74 = ATgetArgument(p_74, 0);
                                    o_75 = ATgetArgument(p_74, 1);
                                    n_69 :
                                    if(match_cons(q_74, sym_SVar_1))
                                      {
                                        z_72 = ATgetArgument(q_74, 0);
                                        o_69 :
                                        if(match_string(z_72, "try_1"))
                                          {
                                            p_69 :
                                            if(((ATgetType(o_75) == AT_LIST) && !(ATisEmpty(o_75))))
                                              {
                                                p_75 = ATgetFirst((ATermList) o_75);
                                                w_79 = (ATerm) ATgetNext((ATermList) o_75);
                                                q_69 :
                                                if(match_cons(p_75, sym_Seq_2))
                                                  {
                                                    q_75 = ATgetArgument(p_75, 0);
                                                    u_75 = ATgetArgument(p_75, 1);
                                                    t_69 :
                                                    if(match_cons(q_75, sym_Call_2))
                                                      {
                                                        r_75 = ATgetArgument(q_75, 0);
                                                        t_75 = ATgetArgument(q_75, 1);
                                                        u_69 :
                                                        if(match_cons(r_75, sym_SVar_1))
                                                          {
                                                            s_75 = ATgetArgument(r_75, 0);
                                                            v_69 :
                                                            if(((ATgetType(t_75) == AT_LIST) && ATisEmpty(t_75)))
                                                              {
                                                                w_69 :
                                                                if(match_cons(u_75, sym_Call_2))
                                                                  {
                                                                    v_75 = ATgetArgument(u_75, 0);
                                                                    x_75 = ATgetArgument(u_75, 1);
                                                                    x_69 :
                                                                    if(match_cons(v_75, sym_SVar_1))
                                                                      {
                                                                        w_75 = ATgetArgument(v_75, 0);
                                                                        y_69 :
                                                                        if(match_string(w_75, "innermost_1"))
                                                                          {
                                                                            z_69 :
                                                                            if(((ATgetType(x_75) == AT_LIST) && !(ATisEmpty(x_75))))
                                                                              {
                                                                                t_78 = ATgetFirst((ATermList) x_75);
                                                                                x_78 = (ATerm) ATgetNext((ATermList) x_75);
                                                                                k_70 :
                                                                                if(match_cons(t_78, sym_Call_2))
                                                                                  {
                                                                                    u_78 = ATgetArgument(t_78, 0);
                                                                                    w_78 = ATgetArgument(t_78, 1);
                                                                                    l_70 :
                                                                                    if(match_cons(u_78, sym_SVar_1))
                                                                                      {
                                                                                        v_78 = ATgetArgument(u_78, 0);
                                                                                        m_70 :
                                                                                        if(((ATgetType(w_78) == AT_LIST) && ATisEmpty(w_78)))
                                                                                          {
                                                                                            n_70 :
                                                                                            if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
                                                                                              {
                                                                                                o_70 :
                                                                                                if(((ATgetType(w_79) == AT_LIST) && ATisEmpty(w_79)))
                                                                                                  {
                                                                                                    p_70 :
                                                                                                    if(((ATgetType(x_79) == AT_LIST) && ATisEmpty(x_79)))
                                                                                                      {
                                                                                                        {
                                                                                                          if(((x_72 != NULL) && (x_72 != s_75)))
                                                                                                            _fail(s_75);
                                                                                                          else
                                                                                                            x_72 = s_75;
                                                                                                          if(((x_72 != NULL) && (x_72 != v_78)))
                                                                                                            _fail(v_78);
                                                                                                          else
                                                                                                            x_72 = v_78;
                                                                                                        }
                                                                                                      }
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
                                    if(match_cons(p_74, sym_Rec_2))
                                      {
                                        q_74 = ATgetArgument(p_74, 0);
                                        o_75 = ATgetArgument(p_74, 1);
                                        q_70 :
                                        if(match_cons(o_75, sym_Call_2))
                                          {
                                            p_75 = ATgetArgument(o_75, 0);
                                            w_79 = ATgetArgument(o_75, 1);
                                            r_70 :
                                            if(match_cons(p_75, sym_SVar_1))
                                              {
                                                q_75 = ATgetArgument(p_75, 0);
                                                y_70 :
                                                if(match_string(q_75, "try_1"))
                                                  {
                                                    z_70 :
                                                    if(((ATgetType(w_79) == AT_LIST) && !(ATisEmpty(w_79))))
                                                      {
                                                        a_73 = ATgetFirst((ATermList) w_79);
                                                        k_74 = (ATerm) ATgetNext((ATermList) w_79);
                                                        o_71 :
                                                        if(match_cons(a_73, sym_Seq_2))
                                                          {
                                                            l_73 = ATgetArgument(a_73, 0);
                                                            b_74 = ATgetArgument(a_73, 1);
                                                            u_71 :
                                                            if(match_cons(l_73, sym_Call_2))
                                                              {
                                                                m_73 = ATgetArgument(l_73, 0);
                                                                a_74 = ATgetArgument(l_73, 1);
                                                                x_71 :
                                                                if(match_cons(m_73, sym_SVar_1))
                                                                  {
                                                                    o_73 = ATgetArgument(m_73, 0);
                                                                    y_71 :
                                                                    if(((ATgetType(a_74) == AT_LIST) && ATisEmpty(a_74)))
                                                                      {
                                                                        z_71 :
                                                                        if(match_cons(b_74, sym_Call_2))
                                                                          {
                                                                            c_74 = ATgetArgument(b_74, 0);
                                                                            e_74 = ATgetArgument(b_74, 1);
                                                                            a_72 :
                                                                            if(match_cons(c_74, sym_SVar_1))
                                                                              {
                                                                                d_74 = ATgetArgument(c_74, 0);
                                                                                b_72 :
                                                                                if(match_string(d_74, "bottomup_1"))
                                                                                  {
                                                                                    c_72 :
                                                                                    if(((ATgetType(e_74) == AT_LIST) && !(ATisEmpty(e_74))))
                                                                                      {
                                                                                        f_74 = ATgetFirst((ATermList) e_74);
                                                                                        j_74 = (ATerm) ATgetNext((ATermList) e_74);
                                                                                        d_72 :
                                                                                        if(match_cons(f_74, sym_Call_2))
                                                                                          {
                                                                                            g_74 = ATgetArgument(f_74, 0);
                                                                                            i_74 = ATgetArgument(f_74, 1);
                                                                                            e_72 :
                                                                                            if(match_cons(g_74, sym_SVar_1))
                                                                                              {
                                                                                                h_74 = ATgetArgument(g_74, 0);
                                                                                                f_72 :
                                                                                                if(((ATgetType(i_74) == AT_LIST) && ATisEmpty(i_74)))
                                                                                                  {
                                                                                                    g_72 :
                                                                                                    if(((ATgetType(j_74) == AT_LIST) && ATisEmpty(j_74)))
                                                                                                      {
                                                                                                        h_72 :
                                                                                                        if(((ATgetType(k_74) == AT_LIST) && ATisEmpty(k_74)))
                                                                                                          {
                                                                                                            i_72 :
                                                                                                            if(((ATgetType(x_79) == AT_LIST) && ATisEmpty(x_79)))
                                                                                                              {
                                                                                                                {
                                                                                                                  if(((x_72 != NULL) && (x_72 != o_73)))
                                                                                                                    _fail(o_73);
                                                                                                                  else
                                                                                                                    x_72 = o_73;
                                                                                                                  if(((q_74 != NULL) && (q_74 != h_74)))
                                                                                                                    _fail(h_74);
                                                                                                                  else
                                                                                                                    q_74 = h_74;
                                                                                                                }
                                                                                                              }
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
                                            if(match_cons(o_75, sym_LChoice_2))
                                              {
                                                p_75 = ATgetArgument(o_75, 0);
                                                w_79 = ATgetArgument(o_75, 1);
                                                j_72 :
                                                if(match_cons(p_75, sym_Seq_2))
                                                  {
                                                    q_75 = ATgetArgument(p_75, 0);
                                                    u_75 = ATgetArgument(p_75, 1);
                                                    k_72 :
                                                    if(match_cons(q_75, sym_Call_2))
                                                      {
                                                        r_75 = ATgetArgument(q_75, 0);
                                                        t_75 = ATgetArgument(q_75, 1);
                                                        l_72 :
                                                        if(match_cons(r_75, sym_SVar_1))
                                                          {
                                                            s_75 = ATgetArgument(r_75, 0);
                                                            m_72 :
                                                            if(((ATgetType(t_75) == AT_LIST) && ATisEmpty(t_75)))
                                                              {
                                                                n_72 :
                                                                if(match_cons(u_75, sym_Call_2))
                                                                  {
                                                                    v_75 = ATgetArgument(u_75, 0);
                                                                    x_75 = ATgetArgument(u_75, 1);
                                                                    o_72 :
                                                                    if(match_cons(v_75, sym_SVar_1))
                                                                      {
                                                                        w_75 = ATgetArgument(v_75, 0);
                                                                        p_72 :
                                                                        if(match_string(w_75, "bottomup_1"))
                                                                          {
                                                                            q_72 :
                                                                            if(((ATgetType(x_75) == AT_LIST) && !(ATisEmpty(x_75))))
                                                                              {
                                                                                t_78 = ATgetFirst((ATermList) x_75);
                                                                                x_78 = (ATerm) ATgetNext((ATermList) x_75);
                                                                                r_72 :
                                                                                if(match_cons(t_78, sym_Call_2))
                                                                                  {
                                                                                    u_78 = ATgetArgument(t_78, 0);
                                                                                    w_78 = ATgetArgument(t_78, 1);
                                                                                    s_72 :
                                                                                    if(match_cons(u_78, sym_SVar_1))
                                                                                      {
                                                                                        v_78 = ATgetArgument(u_78, 0);
                                                                                        t_72 :
                                                                                        if(((ATgetType(w_78) == AT_LIST) && ATisEmpty(w_78)))
                                                                                          {
                                                                                            u_72 :
                                                                                            if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
                                                                                              {
                                                                                                v_72 :
                                                                                                if(match_cons(w_79, sym_Id_0))
                                                                                                  {
                                                                                                    w_72 :
                                                                                                    if(((ATgetType(x_79) == AT_LIST) && ATisEmpty(x_79)))
                                                                                                      {
                                                                                                        {
                                                                                                          if(((x_72 != NULL) && (x_72 != s_75)))
                                                                                                            _fail(s_75);
                                                                                                          else
                                                                                                            x_72 = s_75;
                                                                                                          if(((q_74 != NULL) && (q_74 != v_78)))
                                                                                                            _fail(v_78);
                                                                                                          else
                                                                                                            q_74 = v_78;
                                                                                                        }
                                                                                                      }
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
                          }
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
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm g_4 (ATerm t)
                    {
                      t = term_q_21;
                      return(t);
                    }
                    t = debug_1(t, g_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, f_4);
                  _fail(t);
                }
              }
            {
              ATerm h_4 (ATerm t)
              {
                ATerm i_4 (ATerm t)
                {
                  t = term_r_21;
                  return(t);
                }
                t = say_1(t, i_4);
                return(t);
              }
              t = if_verbose2_1(t, h_4);
            }
          }
        }
      }
    }
  }
  t = g_21;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
  j_80 = t;
  g_80 :
  if(match_cons(j_80, sym_Call_2))
    {
      k_80 = ATgetArgument(j_80, 0);
      m_80 = ATgetArgument(j_80, 1);
      h_80 :
      if(match_cons(k_80, sym_SVar_1))
        {
          l_80 = ATgetArgument(k_80, 0);
          i_80 :
          if(((ATgetType(m_80) == AT_LIST) && ATisEmpty(m_80)))
            {
              t = not_null(l_80);
            }
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
ATerm SubsVar_2 (ATerm t, ATerm f_121 (ATerm), ATerm g_121 (ATerm))
{
  ATerm s_80 = NULL;
  ATerm u_80 = NULL,v_80 = NULL;
  s_80 = t;
  {
    ATerm w_80 = NULL;
    t = not_null(s_80);
    {
      ATerm x_80 = NULL;
      t = f_121(t);
      {
        w_80 = t;
        {
          if(((u_80 != NULL) && (u_80 != w_80)))
            _fail(w_80);
          else
            u_80 = w_80;
          {
            t = g_121(t);
            {
              x_80 = t;
              if(((v_80 != NULL) && (v_80 != x_80)))
                _fail(x_80);
              else
                v_80 = x_80;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_80), not_null(v_80));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
  f_81 = t;
  e_81 :
  if(match_cons(f_81, sym__2))
    {
      g_81 = ATgetArgument(f_81, 0);
      h_81 = ATgetArgument(f_81, 1);
      {
        ATerm k_81 = NULL;
        if(((k_81 != NULL) && (k_81 != h_81)))
          _fail(h_81);
        else
          k_81 = h_81;
      }
    }
  else
    {
      if(match_cons(f_81, sym__3))
        {
          g_81 = ATgetArgument(f_81, 0);
          h_81 = ATgetArgument(f_81, 1);
          i_81 = ATgetArgument(f_81, 2);
          {
            ATerm q_81 = NULL;
            ATerm r_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_81), not_null(h_81));
            {
              t = zip_1(t, _id);
              {
                r_81 = t;
                if(((q_81 != NULL) && (q_81 != r_81)))
                  _fail(r_81);
                else
                  q_81 = r_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_81), not_null(i_81));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_120 (ATerm), ATerm r_120 (ATerm))
{
  ATerm z_81 = NULL,a_82 = NULL,b_83 = NULL;
  t = subs_args_0(t);
  {
    z_81 = t;
    y_81 :
    if(match_cons(z_81, sym__2))
      {
        a_82 = ATgetArgument(z_81, 0);
        b_83 = ATgetArgument(z_81, 1);
        {
          t = not_null(b_83);
          {
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                t = not_null(a_82);
                return(t);
              }
              t = SubsVar_2(t, q_120, k_4);
              t = r_120(t);
              return(t);
            }
            t = alltd_1(t, j_4);
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
ATerm substitute_1 (ATerm t, ATerm s_120 (ATerm))
{
  t = substitute_2(t, s_120, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_124 (ATerm))
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        t = split_2(t, _id, e_124);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
            n_83 = t;
            i_83 :
            if(match_cons(n_83, sym__2))
              {
                o_83 = ATgetArgument(n_83, 0);
                s_83 = ATgetArgument(n_83, 1);
                j_83 :
                if(match_cons(o_83, sym_SDef_3))
                  {
                    p_83 = ATgetArgument(o_83, 0);
                    q_83 = ATgetArgument(o_83, 1);
                    r_83 = ATgetArgument(o_83, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_83), not_null(q_83), not_null(r_83));
                  }
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
          t = zip_1(t, m_4);
        }
        return(t);
      }
      t = Let_2(t, l_4, _id);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = split_2(t, _id, e_124);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL;
                  w_83 = t;
                  l_83 :
                  if(match_cons(w_83, sym__2))
                    {
                      x_83 = ATgetArgument(w_83, 0);
                      a_84 = ATgetArgument(w_83, 1);
                      m_83 :
                      if(match_cons(x_83, sym_VarDec_2))
                        {
                          y_83 = ATgetArgument(x_83, 0);
                          z_83 = ATgetArgument(x_83, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_84), not_null(z_83));
                        }
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
                t = zip_1(t, o_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, n_4, _id);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm p_4 (ATerm t)
              {
                t = e_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, p_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm q_84 = NULL,t_84 = NULL,u_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym_Rec_2))
    {
      t_84 = ATgetArgument(q_84, 0);
      u_84 = ATgetArgument(q_84, 1);
      {
        ATerm a_85 = NULL,c_85 = NULL;
        ATerm b_85 = NULL;
        t = SSLgetAnnotations(not_null(q_84));
        {
          b_85 = t;
          if(((a_85 != NULL) && (a_85 != b_85)))
            _fail(b_85);
          else
            a_85 = b_85;
        }
        {
          t = not_null(t_84);
          {
            ATerm e_85 = NULL;
            t = x_85(t);
            {
              c_85 = t;
              {
                t = not_null(u_84);
                {
                  ATerm g_85 = NULL;
                  t = y_85(t);
                  {
                    e_85 = t;
                    {
                      ATerm h_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(c_85), not_null(e_85)), not_null(a_85));
                      {
                        h_85 = t;
                        if(((g_85 != NULL) && (g_85 != h_85)))
                          _fail(h_85);
                        else
                          g_85 = h_85;
                      }
                      t = not_null(g_85);
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
ATerm SDef_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL;
  i_86 = t;
  h_86 :
  if(match_cons(i_86, sym_SDef_3))
    {
      j_86 = ATgetArgument(i_86, 0);
      k_86 = ATgetArgument(i_86, 1);
      l_86 = ATgetArgument(i_86, 2);
      {
        ATerm q_86 = NULL,u_86 = NULL;
        ATerm t_86 = NULL;
        t = SSLgetAnnotations(not_null(i_86));
        {
          t_86 = t;
          if(((q_86 != NULL) && (q_86 != t_86)))
            _fail(t_86);
          else
            q_86 = t_86;
        }
        {
          t = not_null(j_86);
          {
            ATerm w_86 = NULL;
            t = b_86(t);
            {
              u_86 = t;
              {
                t = not_null(k_86);
                {
                  ATerm y_86 = NULL;
                  t = c_86(t);
                  {
                    w_86 = t;
                    {
                      t = not_null(l_86);
                      {
                        ATerm a_87 = NULL;
                        t = d_86(t);
                        {
                          y_86 = t;
                          {
                            ATerm b_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_86), not_null(w_86), not_null(y_86)), not_null(q_86));
                            {
                              b_87 = t;
                              if(((a_87 != NULL) && (a_87 != b_87)))
                                _fail(b_87);
                              else
                                a_87 = b_87;
                            }
                            t = not_null(a_87);
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
ATerm Let_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym_Let_2))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      {
        ATerm x_87 = NULL,z_87 = NULL;
        ATerm y_87 = NULL;
        t = SSLgetAnnotations(not_null(r_87));
        {
          y_87 = t;
          if(((x_87 != NULL) && (x_87 != y_87)))
            _fail(y_87);
          else
            x_87 = y_87;
        }
        {
          t = not_null(s_87);
          {
            ATerm c_88 = NULL;
            t = z_85(t);
            {
              z_87 = t;
              {
                t = not_null(t_87);
                {
                  ATerm j_88 = NULL;
                  t = a_86(t);
                  {
                    c_88 = t;
                    {
                      ATerm k_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(z_87), not_null(c_88)), not_null(x_87));
                      {
                        k_88 = t;
                        if(((j_88 != NULL) && (j_88 != k_88)))
                          _fail(k_88);
                        else
                          j_88 = k_88;
                      }
                      t = not_null(j_88);
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
ATerm sboundin_3 (ATerm t, ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm))
{
  ATerm a_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_124, f_124);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = a_22;
      {
        ATerm g_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_124, h_124, f_124);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = g_22;
            t = Rec_2(t, h_124, f_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  v_88 :
  if(match_cons(w_88, sym_Rec_2))
    {
      x_88 = ATgetArgument(w_88, 0);
      y_88 = ATgetArgument(w_88, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
  g_89 = t;
  f_89 :
  if(match_cons(g_89, sym_SDef_3))
    {
      h_89 = ATgetArgument(g_89, 0);
      i_89 = ATgetArgument(g_89, 1);
      j_89 = ATgetArgument(g_89, 2);
      {
        t = not_null(i_89);
        {
          ATerm q_4 (ATerm t)
          {
            ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
            n_89 = t;
            e_89 :
            if(match_cons(n_89, sym_VarDec_2))
              {
                o_89 = ATgetArgument(n_89, 0);
                p_89 = ATgetArgument(n_89, 1);
                t = not_null(o_89);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, q_4);
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
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
  x_89 = t;
  w_89 :
  if(match_cons(x_89, sym_Let_2))
    {
      y_89 = ATgetArgument(x_89, 0);
      z_89 = ATgetArgument(x_89, 1);
      {
        t = not_null(y_89);
        {
          ATerm r_4 (ATerm t)
          {
            ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
            c_90 = t;
            v_89 :
            if(match_cons(c_90, sym_SDef_3))
              {
                d_90 = ATgetArgument(c_90, 0);
                e_90 = ATgetArgument(c_90, 1);
                f_90 = ATgetArgument(c_90, 2);
                t = not_null(d_90);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm q_90 = NULL,r_90 = NULL;
  q_90 = t;
  p_90 :
  if(match_cons(q_90, sym_SVar_1))
    {
      r_90 = ATgetArgument(q_90, 0);
      {
        ATerm u_90 = NULL,w_90 = NULL;
        ATerm v_90 = NULL;
        t = SSLgetAnnotations(not_null(q_90));
        {
          v_90 = t;
          if(((u_90 != NULL) && (u_90 != v_90)))
            _fail(v_90);
          else
            u_90 = v_90;
        }
        {
          t = not_null(r_90);
          {
            ATerm y_90 = NULL;
            t = w_85(t);
            {
              w_90 = t;
              {
                ATerm z_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(w_90)), not_null(u_90));
                {
                  z_90 = t;
                  if(((y_90 != NULL) && (y_90 != z_90)))
                    _fail(z_90);
                  else
                    y_90 = z_90;
                }
                t = not_null(y_90);
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
  ATerm s_4 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_124 (ATerm))
{
  t = Scope_2(t, a_124, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  i_91 :
  if(match_cons(j_91, sym_DynamicRules_1))
    {
      k_91 = ATgetArgument(j_91, 0);
      {
        ATerm n_91 = NULL,p_91 = NULL;
        ATerm o_91 = NULL;
        t = SSLgetAnnotations(not_null(j_91));
        {
          o_91 = t;
          if(((n_91 != NULL) && (n_91 != o_91)))
            _fail(o_91);
          else
            n_91 = o_91;
        }
        {
          t = not_null(k_91);
          {
            ATerm r_91 = NULL;
            t = b_88(t);
            {
              p_91 = t;
              {
                ATerm s_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(p_91)), not_null(n_91));
                {
                  s_91 = t;
                  if(((r_91 != NULL) && (r_91 != s_91)))
                    _fail(s_91);
                  else
                    r_91 = s_91;
                }
                t = not_null(r_91);
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
ATerm Scope_2 (ATerm t, ATerm v_84 (ATerm), ATerm w_84 (ATerm))
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL;
  d_92 = t;
  c_92 :
  if(match_cons(d_92, sym_Scope_2))
    {
      e_92 = ATgetArgument(d_92, 0);
      f_92 = ATgetArgument(d_92, 1);
      {
        ATerm j_92 = NULL,l_92 = NULL;
        ATerm k_92 = NULL;
        t = SSLgetAnnotations(not_null(d_92));
        {
          k_92 = t;
          if(((j_92 != NULL) && (j_92 != k_92)))
            _fail(k_92);
          else
            j_92 = k_92;
        }
        {
          t = not_null(e_92);
          {
            ATerm n_92 = NULL;
            t = v_84(t);
            {
              l_92 = t;
              {
                t = not_null(f_92);
                {
                  ATerm p_92 = NULL;
                  t = w_84(t);
                  {
                    n_92 = t;
                    {
                      ATerm q_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_92), not_null(n_92)), not_null(j_92));
                      {
                        q_92 = t;
                        if(((p_92 != NULL) && (p_92 != q_92)))
                          _fail(q_92);
                        else
                          p_92 = q_92;
                      }
                      t = not_null(p_92);
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
ATerm tboundin_3 (ATerm t, ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm))
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_124, b_124);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = DynamicRules_1(t, b_124);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  y_92 = t;
  x_92 :
  if(match_cons(y_92, sym_DynamicRules_1))
    {
      z_92 = ATgetArgument(y_92, 0);
      {
        t = not_null(z_92);
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
  ATerm e_93 = NULL,f_93 = NULL;
  e_93 = t;
  d_93 :
  if(match_cons(e_93, sym_Var_1))
    {
      f_93 = ATgetArgument(e_93, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym__2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      {
        t = not_null(l_93);
        {
          ATerm q_93 (ATerm t)
          {
            ATerm q_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_93);
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = q_22;
                {
                  ATerm u_22 = t;
                  int x_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_4 (ATerm t)
                      {
                        t = not_null(m_93);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_106, t_4);
                      t = q_93(t);
                      ;
                      LocalPopChoice(x_22);
                    }
                  else
                    {
                      t = u_22;
                      t = Cons_2(t, _id, q_93);
                    }
                }
              }
            return(t);
          }
          t = q_93(t);
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
ATerm foldr_3 (ATerm t, ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm))
{
  ATerm b_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_107(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = b_23;
      {
        ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
        v_93 = t;
        u_93 :
        if(((ATgetType(v_93) == AT_LIST) && !(ATisEmpty(v_93))))
          {
            w_93 = ATgetFirst((ATermList) v_93);
            x_93 = (ATerm) ATgetNext((ATermList) v_93);
            {
              ATerm a_94 = NULL,c_94 = NULL;
              ATerm r_23;
              r_23 = t;
              {
                ATerm b_94 = NULL;
                t = not_null(w_93);
                {
                  t = l_107(t);
                  {
                    b_94 = t;
                    if(((a_94 != NULL) && (a_94 != b_94)))
                      _fail(b_94);
                    else
                      a_94 = b_94;
                  }
                }
              }
              t = r_23;
              {
                ATerm d_94 = NULL;
                t = not_null(x_93);
                {
                  t = foldr_3(t, j_107, k_107, l_107);
                  {
                    d_94 = t;
                    if(((c_94 != NULL) && (c_94 != d_94)))
                      _fail(d_94);
                    else
                      c_94 = d_94;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_94), not_null(c_94));
                  t = k_107(t);
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
ATerm crush_3 (ATerm t, ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm))
{
  ATerm l_94 = NULL;
  ATerm n_94 = NULL;
  l_94 = t;
  {
    ATerm o_94 = NULL;
    ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
    t = not_null(l_94);
    {
      o_94 = t;
      {
        t = SSL_explode_term(not_null(o_94));
        {
          q_94 = t;
          k_94 :
          if(match_cons(q_94, sym__2))
            {
              r_94 = ATgetArgument(q_94, 0);
              s_94 = ATgetArgument(q_94, 1);
              if(((n_94 != NULL) && (n_94 != s_94)))
                _fail(s_94);
              else
                n_94 = s_94;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_94);
      t = foldr_3(t, h_106, i_106, j_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  x_94 :
  if(match_cons(y_94, sym__2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      if(((z_94 != NULL) && (z_94 != a_95)))
        _fail(a_95);
      else
        z_94 = a_95;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm u_106 (ATerm), ATerm v_106 (ATerm))
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  f_95 :
  if(((ATgetType(g_95) == AT_LIST) && !(ATisEmpty(g_95))))
    {
      h_95 = ATgetFirst((ATermList) g_95);
      i_95 = (ATerm) ATgetNext((ATermList) g_95);
      {
        t = v_106(t);
        {
          ATerm u_4 (ATerm t)
          {
            ATerm l_95 = NULL;
            l_95 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_95), not_null(l_95));
              t = u_106(t);
            }
            return(t);
          }
          t = fetch_1(t, u_4);
        }
        t = not_null(i_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL;
  t_95 = t;
  s_95 :
  if(match_cons(t_95, sym__2))
    {
      u_95 = ATgetArgument(t_95, 0);
      v_95 = ATgetArgument(t_95, 1);
      {
        t = not_null(u_95);
        {
          ATerm z_95 (ATerm t)
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                {
                  ATerm u_23 = t;
                  int v_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = not_null(v_95);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_106, v_4);
                      t = z_95(t);
                      ;
                      LocalPopChoice(v_23);
                    }
                  else
                    {
                      t = u_23;
                      t = Cons_2(t, _id, z_95);
                    }
                }
              }
            return(t);
          }
          t = z_95(t);
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
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  d_96 = t;
  b_96 :
  if(match_cons(d_96, sym__2))
    {
      e_96 = ATgetArgument(d_96, 0);
      f_96 = ATgetArgument(d_96, 1);
      c_96 :
      if(((ATgetType(f_96) == AT_LIST) && !(ATisEmpty(f_96))))
        {
          g_96 = ATgetFirst((ATermList) f_96);
          h_96 = (ATerm) ATgetNext((ATermList) f_96);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_96)), not_null(g_96)), not_null(h_96));
        }
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
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL;
  z_96 = t;
  x_96 :
  if(((ATgetType(z_96) == AT_LIST) && !(ATisEmpty(z_96))))
    {
      a_97 = ATgetFirst((ATermList) z_96);
      d_97 = (ATerm) ATgetNext((ATermList) z_96);
      y_96 :
      if(match_cons(a_97, sym__2))
        {
          b_97 = ATgetArgument(a_97, 0);
          c_97 = ATgetArgument(a_97, 1);
          {
            ATerm h_97 = NULL,i_97 = NULL,o_97 = NULL,w_97 = NULL;
            ATerm w_23;
            w_23 = t;
            {
              ATerm j_97 = NULL;
              ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
              t = not_null(c_97);
              {
                j_97 = t;
                {
                  t = SSL_explode_term(not_null(j_97));
                  {
                    l_97 = t;
                    s_96 :
                    if(match_cons(l_97, sym__2))
                      {
                        m_97 = ATgetArgument(l_97, 0);
                        n_97 = ATgetArgument(l_97, 1);
                        {
                          if(((h_97 != NULL) && (h_97 != m_97)))
                            _fail(m_97);
                          else
                            h_97 = m_97;
                          if(((i_97 != NULL) && (i_97 != n_97)))
                            _fail(n_97);
                          else
                            i_97 = n_97;
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
            t = w_23;
            {
              ATerm x_23;
              x_23 = t;
              {
                ATerm p_97 = NULL;
                ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
                t = not_null(b_97);
                {
                  p_97 = t;
                  {
                    t = SSL_explode_term(not_null(p_97));
                    {
                      t_97 = t;
                      v_96 :
                      if(match_cons(t_97, sym__2))
                        {
                          u_97 = ATgetArgument(t_97, 0);
                          v_97 = ATgetArgument(t_97, 1);
                          {
                            if(((h_97 != NULL) && (h_97 != u_97)))
                              _fail(u_97);
                            else
                              h_97 = u_97;
                            if(((o_97 != NULL) && (o_97 != v_97)))
                              _fail(v_97);
                            else
                              o_97 = v_97;
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
                ATerm x_97 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_97), not_null(i_97));
                {
                  t = zip_1(t, _id);
                  {
                    x_97 = t;
                    if(((w_97 != NULL) && (w_97 != x_97)))
                      _fail(x_97);
                    else
                      w_97 = x_97;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_97), not_null(d_97));
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
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  j_98 = t;
  h_98 :
  if(((ATgetType(j_98) == AT_LIST) && !(ATisEmpty(j_98))))
    {
      k_98 = ATgetFirst((ATermList) j_98);
      n_98 = (ATerm) ATgetNext((ATermList) j_98);
      i_98 :
      if(match_cons(k_98, sym__2))
        {
          l_98 = ATgetArgument(k_98, 0);
          m_98 = ATgetArgument(k_98, 1);
          {
            ATerm p_98 = NULL;
            if(((l_98 != NULL) && (l_98 != m_98)))
              _fail(m_98);
            else
              l_98 = m_98;
            {
              if(((p_98 != NULL) && (p_98 != n_98)))
                _fail(n_98);
              else
                p_98 = n_98;
              t = not_null(p_98);
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
ATerm while_not_2 (ATerm t, ATerm n_111 (ATerm), ATerm o_111 (ATerm))
{
  ATerm r_98 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          t = o_111(t);
          t = r_98(t);
        }
      }
    return(t);
  }
  t = r_98(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm))
{
  t = q_111(t);
  t = while_not_2(t, r_111, s_111);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 (ATerm t)
      {
        ATerm t_98 = NULL;
        t_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_98));
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 (ATerm t)
            {
              ATerm e_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, z_4);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_4, x_4, y_4);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_98 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_122(t);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_98 = NULL;
              ATerm u_24;
              u_24 = t;
              {
                ATerm y_98 = NULL;
                t = y_122(t);
                {
                  y_98 = t;
                  if(((x_98 != NULL) && (x_98 != y_98)))
                    _fail(y_98);
                  else
                    x_98 = y_98;
                }
              }
              t = u_24;
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = not_null(x_98);
                    return(t);
                  }
                  t = split_2(t, z_98, c_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_122(t, a_5, z_98, b_5);
                {
                  ATerm d_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, d_5, union_0, _id);
                }
              }
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              {
                ATerm e_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_5, union_0, z_98);
              }
            }
        }
      }
    return(t);
  }
  t = z_98(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_5, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  j_99 = t;
  d_99 :
  if(match_cons(j_99, sym_LRule_1))
    {
      k_99 = ATgetArgument(j_99, 0);
      e_99 :
      if(match_cons(k_99, sym_Rule_3))
        {
          g_99 = ATgetArgument(k_99, 0);
          h_99 = ATgetArgument(k_99, 1);
          i_99 = ATgetArgument(k_99, 2);
          {
            t = not_null(g_99);
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
      if(match_cons(j_99, sym_Scope_2))
        {
          k_99 = ATgetArgument(j_99, 0);
          l_99 = ATgetArgument(j_99, 1);
          t = not_null(k_99);
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
  ATerm g_100 = NULL,h_100 = NULL;
  g_100 = t;
  f_100 :
  if(match_cons(g_100, sym_Var_1))
    {
      h_100 = ATgetArgument(g_100, 0);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_100 = NULL,m_100 = NULL;
            ATerm l_100 = NULL;
            t = SSLgetAnnotations(not_null(g_100));
            {
              l_100 = t;
              if(((k_100 != NULL) && (k_100 != l_100)))
                _fail(l_100);
              else
                k_100 = l_100;
            }
            {
              t = not_null(h_100);
              {
                ATerm o_100 = NULL;
                t = o_0(t);
                {
                  m_100 = t;
                  {
                    ATerm p_100 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_100)), not_null(k_100));
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
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm s_100 = NULL,u_100 = NULL;
              ATerm t_100 = NULL;
              t = SSLgetAnnotations(not_null(g_100));
              {
                t_100 = t;
                if(((s_100 != NULL) && (s_100 != t_100)))
                  _fail(t_100);
                else
                  s_100 = t_100;
              }
              {
                t = not_null(h_100);
                {
                  ATerm z_100 = NULL;
                  t = o_0(t);
                  {
                    u_100 = t;
                    {
                      ATerm a_101 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_100)), not_null(s_100));
                      {
                        a_101 = t;
                        if(((z_100 != NULL) && (z_100 != a_101)))
                          _fail(a_101);
                        else
                          z_100 = a_101;
                      }
                      t = not_null(z_100);
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
ATerm DistBinding_2 (ATerm t, ATerm s_121 (ATerm), ATerm t_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym__3))
    {
      s_101 = ATgetArgument(r_101, 0);
      t_101 = ATgetArgument(r_101, 1);
      u_101 = ATgetArgument(r_101, 2);
      {
        t = not_null(s_101);
        {
          ATerm g_5 (ATerm t)
          {
            ATerm y_101 = NULL;
            y_101 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_101), not_null(u_101));
              t = s_121(t);
            }
            return(t);
          }
          ATerm h_5 (ATerm t)
          {
            ATerm a_102 = NULL;
            a_102 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_102), not_null(t_101));
              t = s_121(t);
            }
            return(t);
          }
          t = t_121(t, g_5, h_5, _id);
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
  ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  g_102 :
  if(match_cons(h_102, sym__2))
    {
      i_102 = ATgetArgument(h_102, 0);
      j_102 = ATgetArgument(h_102, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_102)), not_null(i_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL;
  r_102 = t;
  o_102 :
  if(match_cons(r_102, sym__2))
    {
      s_102 = ATgetArgument(r_102, 0);
      v_102 = ATgetArgument(r_102, 1);
      p_102 :
      if(((ATgetType(s_102) == AT_LIST) && !(ATisEmpty(s_102))))
        {
          t_102 = ATgetFirst((ATermList) s_102);
          u_102 = (ATerm) ATgetNext((ATermList) s_102);
          q_102 :
          if(((ATgetType(v_102) == AT_LIST) && !(ATisEmpty(v_102))))
            {
              w_102 = ATgetFirst((ATermList) v_102);
              x_102 = (ATerm) ATgetNext((ATermList) v_102);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_102), not_null(w_102)), (ATerm) ATmakeAppl(sym__2, not_null(u_102), not_null(x_102)));
            }
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
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL;
  o_103 = t;
  l_103 :
  if(match_cons(o_103, sym__2))
    {
      p_103 = ATgetArgument(o_103, 0);
      q_103 = ATgetArgument(o_103, 1);
      m_103 :
      if(((ATgetType(p_103) == AT_LIST) && ATisEmpty(p_103)))
        {
          n_103 :
          if(((ATgetType(q_103) == AT_LIST) && ATisEmpty(q_103)))
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
ATerm genzip_4 (ATerm t, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm))
{
  ATerm s_103 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          t = z_102(t);
          {
            t = _2(t, b_103, s_103);
            t = a_103(t);
          }
        }
      }
    return(t);
  }
  t = s_103(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_103);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm m_121 (ATerm), ATerm n_121 (ATerm, ATerm (ATerm)))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  a_104 = t;
  z_103 :
  if(match_cons(a_104, sym__2))
    {
      b_104 = ATgetArgument(a_104, 0);
      c_104 = ATgetArgument(a_104, 1);
      {
        ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,n_104 = NULL;
        ATerm b_25;
        b_25 = t;
        {
          ATerm i_104 = NULL;
          t = not_null(b_104);
          {
            ATerm j_104 = NULL;
            t = m_121(t);
            {
              i_104 = t;
              {
                if(((f_104 != NULL) && (f_104 != i_104)))
                  _fail(i_104);
                else
                  f_104 = i_104;
                {
                  ATerm k_104 = NULL,m_104 = NULL;
                  t = map_1(t, new_0);
                  {
                    j_104 = t;
                    {
                      if(((g_104 != NULL) && (g_104 != j_104)))
                        _fail(j_104);
                      else
                        g_104 = j_104;
                      {
                        ATerm l_104 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_104), not_null(g_104));
                        {
                          t = zip_1(t, _id);
                          {
                            l_104 = t;
                            if(((k_104 != NULL) && (k_104 != l_104)))
                              _fail(l_104);
                            else
                              k_104 = l_104;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_104), not_null(c_104));
                          {
                            t = conc_0(t);
                            {
                              m_104 = t;
                              if(((h_104 != NULL) && (h_104 != m_104)))
                                _fail(m_104);
                              else
                                h_104 = m_104;
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
        t = b_25;
        {
          ATerm o_104 = NULL;
          t = not_null(b_104);
          {
            ATerm i_5 (ATerm t)
            {
              t = not_null(g_104);
              return(t);
            }
            t = n_121(t, i_5);
            {
              o_104 = t;
              if(((n_104 != NULL) && (n_104 != o_104)))
                _fail(o_104);
              else
                n_104 = o_104;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(n_104), not_null(c_104), not_null(h_104));
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
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL;
  y_104 = t;
  w_104 :
  if(match_cons(y_104, sym__2))
    {
      z_104 = ATgetArgument(y_104, 0);
      a_105 = ATgetArgument(y_104, 1);
      x_104 :
      if(((ATgetType(a_105) == AT_LIST) && !(ATisEmpty(a_105))))
        {
          b_105 = ATgetFirst((ATermList) a_105);
          c_105 = (ATerm) ATgetNext((ATermList) a_105);
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(c_105));
        }
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
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  k_105 = t;
  h_105 :
  if(match_cons(k_105, sym__2))
    {
      l_105 = ATgetArgument(k_105, 0);
      m_105 = ATgetArgument(k_105, 1);
      i_105 :
      if(((ATgetType(m_105) == AT_LIST) && !(ATisEmpty(m_105))))
        {
          n_105 = ATgetFirst((ATermList) m_105);
          q_105 = (ATerm) ATgetNext((ATermList) m_105);
          j_105 :
          if(match_cons(n_105, sym__2))
            {
              o_105 = ATgetArgument(n_105, 0);
              p_105 = ATgetArgument(n_105, 1);
              {
                ATerm s_105 = NULL;
                if(((l_105 != NULL) && (l_105 != o_105)))
                  _fail(o_105);
                else
                  l_105 = o_105;
                {
                  if(((s_105 != NULL) && (s_105 != p_105)))
                    _fail(p_105);
                  else
                    s_105 = p_105;
                  t = not_null(s_105);
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
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_121 (ATerm, ATerm (ATerm)))
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  w_105 :
  if(match_cons(x_105, sym__2))
    {
      y_105 = ATgetArgument(x_105, 0);
      z_105 = ATgetArgument(x_105, 1);
      {
        t = not_null(y_105);
        {
          ATerm j_5 (ATerm t)
          {
            ATerm k_5 (ATerm t)
            {
              t = not_null(z_105);
              return(t);
            }
            t = split_2(t, _id, k_5);
            t = lookup_0(t);
            return(t);
          }
          t = x_121(t, j_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm h_116 (ATerm))
{
  ATerm l_106 = NULL,o_106 = NULL,p_106 = NULL;
  l_106 = t;
  k_106 :
  if(match_cons(l_106, sym__2))
    {
      o_106 = ATgetArgument(l_106, 0);
      p_106 = ATgetArgument(l_106, 1);
      {
        t = not_null(o_106);
        {
          ATerm l_5 (ATerm t)
          {
            ATerm x_106 = NULL;
            x_106 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_106), not_null(p_106));
              t = h_116(t);
            }
            return(t);
          }
          t = _all(t, l_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm r_115 (ATerm))
{
  ATerm b_107 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_115(t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = all_dist_1(t, b_107);
      }
    return(t);
  }
  t = b_107(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_121 (ATerm, ATerm (ATerm)), ATerm i_121 (ATerm), ATerm j_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_121 (ATerm, ATerm (ATerm)))
{
  ATerm d_107 = NULL;
  d_107 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_107), (ATerm) ATempty);
    {
      ATerm g_107 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_121);
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                t = RnBinding_2(t, i_121, k_121);
                t = DistBinding_2(t, g_107, j_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_5);
        return(t);
      }
      t = g_107(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm m_107 (ATerm t, ATerm n_107 (ATerm))
  {
    t = Scope_2(t, n_107, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, m_107);
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
  ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL;
  q_107 = t;
  p_107 :
  if(((ATgetType(q_107) == AT_LIST) && !(ATisEmpty(q_107))))
    {
      r_107 = ATgetFirst((ATermList) q_107);
      s_107 = (ATerm) ATgetNext((ATermList) q_107);
      t = not_null(r_107);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL;
  x_107 = t;
  w_107 :
  if(match_cons(x_107, sym__2))
    {
      y_107 = ATgetArgument(x_107, 0);
      z_107 = ATgetArgument(x_107, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), not_null(z_107));
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
ATerm rewrite_1 (ATerm t, ATerm u_108 (ATerm))
{
  ATerm f_108 = NULL;
  ATerm h_108 = NULL;
  f_108 = t;
  {
    ATerm i_108 = NULL;
    t = term_i_25;
    {
      t = u_108(t);
      {
        i_108 = t;
        if(((h_108 != NULL) && (h_108 != i_108)))
          _fail(i_108);
        else
          h_108 = i_108;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_108), not_null(f_108));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  e_109 = t;
  c_109 :
  if(match_cons(e_109, sym_Call_2))
    {
      f_109 = ATgetArgument(e_109, 0);
      h_109 = ATgetArgument(e_109, 1);
      d_109 :
      if(match_cons(f_109, sym_SVar_1))
        {
          g_109 = ATgetArgument(f_109, 0);
          {
            ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,x_109 = NULL;
            ATerm j_25;
            j_25 = t;
            {
              ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_109)), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
              {
                ATerm n_5 (ATerm t)
                {
                  t = term_k_25;
                  return(t);
                }
                t = rewrite_1(t, n_5);
                {
                  p_109 = t;
                  v_108 :
                  if(match_cons(p_109, sym_Defined_3))
                    {
                      q_109 = ATgetArgument(p_109, 0);
                      r_109 = ATgetArgument(p_109, 1);
                      s_109 = ATgetArgument(p_109, 2);
                      w_108 :
                      if(match_string(q_109, "b_0"))
                        {
                          ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL;
                          if(((l_109 != NULL) && (l_109 != r_109)))
                            _fail(r_109);
                          else
                            l_109 = r_109;
                          {
                            if(((m_109 != NULL) && (m_109 != s_109)))
                              _fail(s_109);
                            else
                              m_109 = s_109;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_109), not_null(l_109), not_null(m_109));
                              {
                                t = strename_0(t);
                                {
                                  t_109 = t;
                                  t_108 :
                                  if(match_cons(t_109, sym_SDef_3))
                                    {
                                      u_109 = ATgetArgument(t_109, 0);
                                      v_109 = ATgetArgument(t_109, 1);
                                      w_109 = ATgetArgument(t_109, 2);
                                      {
                                        if(((g_109 != NULL) && (g_109 != u_109)))
                                          _fail(u_109);
                                        else
                                          g_109 = u_109;
                                        {
                                          if(((n_109 != NULL) && (n_109 != v_109)))
                                            _fail(v_109);
                                          else
                                            n_109 = v_109;
                                          if(((o_109 != NULL) && (o_109 != w_109)))
                                            _fail(w_109);
                                          else
                                            o_109 = w_109;
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
            t = j_25;
            {
              ATerm c_110 = NULL;
              t = not_null(n_109);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL;
                  y_109 = t;
                  y_108 :
                  if(match_cons(y_109, sym_VarDec_2))
                    {
                      z_109 = ATgetArgument(y_109, 0);
                      a_110 = ATgetArgument(y_109, 1);
                      t = not_null(z_109);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  c_110 = t;
                  if(((x_109 != NULL) && (x_109 != c_110)))
                    _fail(c_110);
                  else
                    x_109 = c_110;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_109), not_null(h_109), not_null(o_109));
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
  ATerm p_110 = NULL;
  ATerm l_25;
  l_25 = t;
  {
    ATerm q_110 = NULL;
    t = new_0(t);
    {
      q_110 = t;
      {
        if(((p_110 != NULL) && (p_110 != q_110)))
          _fail(q_110);
        else
          p_110 = q_110;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_p_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_110)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              {
                ATerm p_5 (ATerm t)
                {
                  ATerm q_5 (ATerm t)
                  {
                    t = term_q_25;
                    return(t);
                  }
                  t = say_1(t, q_5);
                  return(t);
                }
                t = if_verbose2_1(t, p_5);
                _fail(t);
              }
            }
          {
            ATerm r_25 = t;
            int s_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL;
                r_110 = t;
                k_110 :
                if(match_cons(r_110, sym_LChoice_2))
                  {
                    s_110 = ATgetArgument(r_110, 0);
                    w_110 = ATgetArgument(r_110, 1);
                    l_110 :
                    if(match_cons(s_110, sym_Call_2))
                      {
                        t_110 = ATgetArgument(s_110, 0);
                        v_110 = ATgetArgument(s_110, 1);
                        m_110 :
                        if(match_cons(t_110, sym_SVar_1))
                          {
                            u_110 = ATgetArgument(t_110, 0);
                            n_110 :
                            if(((ATgetType(v_110) == AT_LIST) && ATisEmpty(v_110)))
                              {
                                o_110 :
                                if(match_cons(w_110, sym_Id_0))
                                  {
                                    if(((p_110 != NULL) && (p_110 != u_110)))
                                      _fail(u_110);
                                    else
                                      p_110 = u_110;
                                  }
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
                LocalPopChoice(s_25);
              }
            else
              {
                t = r_25;
                {
                  ATerm r_5 (ATerm t)
                  {
                    ATerm s_5 (ATerm t)
                    {
                      t = term_t_25;
                      return(t);
                    }
                    t = debug_1(t, s_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, r_5);
                  _fail(t);
                }
              }
            {
              ATerm t_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  t = term_u_25;
                  return(t);
                }
                t = say_1(t, u_5);
                return(t);
              }
              t = if_verbose2_1(t, t_5);
            }
          }
        }
      }
    }
  }
  t = l_25;
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
ATerm assert_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL;
  g_111 = t;
  f_111 :
  if(match_cons(g_111, sym__2))
    {
      h_111 = ATgetArgument(g_111, 0);
      i_111 = ATgetArgument(g_111, 1);
      {
        ATerm l_111 = NULL,m_111 = NULL,t_111 = NULL;
        ATerm v_25;
        v_25 = t;
        {
          ATerm u_111 = NULL;
          ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL;
          t = s_108(t);
          {
            u_111 = t;
            {
              if(((l_111 != NULL) && (l_111 != u_111)))
                _fail(u_111);
              else
                l_111 = u_111;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_111), not_null(h_111), not_null(i_111));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_25 = t;
                    int x_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_111), term_b_17);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(x_25);
                      }
                    else
                      {
                        t = w_25;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_111 = t;
                      e_111 :
                      if(((ATgetType(v_111) == AT_LIST) && !(ATisEmpty(v_111))))
                        {
                          w_111 = ATgetFirst((ATermList) v_111);
                          x_111 = (ATerm) ATgetNext((ATermList) v_111);
                          {
                            if(((m_111 != NULL) && (m_111 != w_111)))
                              _fail(w_111);
                            else
                              m_111 = w_111;
                            {
                              if(((t_111 != NULL) && (t_111 != x_111)))
                                _fail(x_111);
                              else
                                t_111 = x_111;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_111), term_b_17, (ATerm) ATinsert(CheckATermList(not_null(t_111)), (ATerm) ATinsert(CheckATermList(not_null(m_111)), not_null(h_111))));
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
        t = v_25;
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
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  d_112 = t;
  c_112 :
  if(match_cons(d_112, sym_SDef_3))
    {
      e_112 = ATgetArgument(d_112, 0);
      f_112 = ATgetArgument(d_112, 1);
      g_112 = ATgetArgument(d_112, 2);
      {
        ATerm y_25;
        y_25 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_112)), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_3, term_z_25, not_null(f_112), not_null(g_112)));
          {
            ATerm v_5 (ATerm t)
            {
              t = term_k_25;
              return(t);
            }
            t = assert_1(t, v_5);
          }
        }
        t = y_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm q_112 = NULL,r_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym_Strategies_1))
    {
      r_112 = ATgetArgument(q_112, 0);
      {
        ATerm u_112 = NULL,w_112 = NULL;
        ATerm v_112 = NULL;
        t = SSLgetAnnotations(not_null(q_112));
        {
          v_112 = t;
          if(((u_112 != NULL) && (u_112 != v_112)))
            _fail(v_112);
          else
            u_112 = v_112;
        }
        {
          t = not_null(r_112);
          {
            ATerm y_112 = NULL;
            t = f_87(t);
            {
              w_112 = t;
              {
                ATerm z_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_112)), not_null(u_112));
                {
                  z_112 = t;
                  if(((y_112 != NULL) && (y_112 != z_112)))
                    _fail(z_112);
                  else
                    y_112 = z_112;
                }
                t = not_null(y_112);
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
ATerm Signature_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym_Signature_1))
    {
      k_113 = ATgetArgument(j_113, 0);
      {
        ATerm n_113 = NULL,p_113 = NULL;
        ATerm o_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          o_113 = t;
          if(((n_113 != NULL) && (n_113 != o_113)))
            _fail(o_113);
          else
            n_113 = o_113;
        }
        {
          t = not_null(k_113);
          {
            ATerm r_113 = NULL;
            t = c_87(t);
            {
              p_113 = t;
              {
                ATerm s_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(p_113)), not_null(n_113));
                {
                  s_113 = t;
                  if(((r_113 != NULL) && (r_113 != s_113)))
                    _fail(s_113);
                  else
                    r_113 = s_113;
                }
                t = not_null(r_113);
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
ATerm Specification_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm c_114 = NULL,d_114 = NULL;
  c_114 = t;
  b_114 :
  if(match_cons(c_114, sym_Specification_1))
    {
      d_114 = ATgetArgument(c_114, 0);
      {
        ATerm g_114 = NULL,i_114 = NULL;
        ATerm h_114 = NULL;
        t = SSLgetAnnotations(not_null(c_114));
        {
          h_114 = t;
          if(((g_114 != NULL) && (g_114 != h_114)))
            _fail(h_114);
          else
            g_114 = h_114;
        }
        {
          t = not_null(d_114);
          {
            ATerm k_114 = NULL;
            t = h_87(t);
            {
              i_114 = t;
              {
                ATerm l_114 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_114)), not_null(g_114));
                {
                  l_114 = t;
                  if(((k_114 != NULL) && (k_114 != l_114)))
                    _fail(l_114);
                  else
                    k_114 = l_114;
                }
                t = not_null(k_114);
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
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      ATerm z_5 (ATerm t)
      {
        ATerm a_6 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, a_6);
        return(t);
      }
      t = Cons_2(t, z_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, x_5, y_5);
    return(t);
  }
  t = Specification_1(t, w_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
  w_114 = t;
  v_114 :
  if(match_cons(w_114, sym__2))
    {
      x_114 = ATgetArgument(w_114, 0);
      y_114 = ATgetArgument(w_114, 1);
      {
        ATerm c_115 = NULL,e_115 = NULL;
        ATerm d_115 = NULL;
        t = SSLgetAnnotations(not_null(w_114));
        {
          d_115 = t;
          if(((c_115 != NULL) && (c_115 != d_115)))
            _fail(d_115);
          else
            c_115 = d_115;
        }
        {
          t = not_null(x_114);
          {
            ATerm g_115 = NULL;
            t = c_83(t);
            {
              e_115 = t;
              {
                t = not_null(y_114);
                {
                  ATerm j_115 = NULL;
                  t = d_83(t);
                  {
                    g_115 = t;
                    {
                      ATerm k_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_115), not_null(g_115)), not_null(c_115));
                      {
                        k_115 = t;
                        if(((j_115 != NULL) && (j_115 != k_115)))
                          _fail(k_115);
                        else
                          j_115 = k_115;
                      }
                      t = not_null(j_115);
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
  ATerm u_115 = NULL;
  ATerm a_26;
  a_26 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm v_115 = NULL,w_115 = NULL;
      v_115 = t;
      t_115 :
      if(match_cons(v_115, sym_Program_1))
        {
          w_115 = ATgetArgument(v_115, 0);
          if(((u_115 != NULL) && (u_115 != w_115)))
            _fail(w_115);
          else
            u_115 = w_115;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, b_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_26), not_null(u_115)), term_b_26));
      {
        t = printnl_0(t);
        {
          t = term_n_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym__2))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      {
        ATerm o_26;
        o_26 = t;
        t = SSL_printnl(not_null(b_116), not_null(c_116));
        t = o_26;
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
  ATerm i_116 = NULL;
  i_116 = t;
  t = SSL_implode_string(not_null(i_116));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
        n_116 = t;
        m_116 :
        if(((ATgetType(n_116) == AT_LIST) && !(ATisEmpty(n_116))))
          {
            o_116 = ATgetFirst((ATermList) n_116);
            p_116 = (ATerm) ATgetNext((ATermList) n_116);
            {
              t = not_null(o_116);
              {
                ATerm c_6 (ATerm t)
                {
                  t = not_null(p_116);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_6);
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
  ATerm z_116 = NULL;
  ATerm c_117 = NULL;
  z_116 = t;
  {
    ATerm e_117 = NULL;
    ATerm g_117 = NULL,l_117 = NULL,m_117 = NULL;
    t = not_null(z_116);
    {
      e_117 = t;
      {
        t = SSL_explode_term(not_null(e_117));
        {
          g_117 = t;
          x_116 :
          if(match_cons(g_117, sym__2))
            {
              l_117 = ATgetArgument(g_117, 0);
              m_117 = ATgetArgument(g_117, 1);
              y_116 :
              if(match_string(l_117, ""))
                {
                  if(((c_117 != NULL) && (c_117 != m_117)))
                    _fail(m_117);
                  else
                    c_117 = m_117;
                }
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
      t = not_null(c_117);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm w_117 (ATerm t)
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_117);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          t = Nil_0(t);
          t = m_101(t);
        }
      }
    return(t);
  }
  t = w_117(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL;
  d_118 = t;
  c_118 :
  if(match_cons(d_118, sym__2))
    {
      e_118 = ATgetArgument(d_118, 0);
      f_118 = ATgetArgument(d_118, 1);
      {
        t = not_null(e_118);
        {
          ATerm d_6 (ATerm t)
          {
            t = not_null(f_118);
            return(t);
          }
          t = at_end_1(t, d_6);
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
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_118 = NULL;
  k_118 = t;
  t = SSL_explode_string(not_null(k_118));
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
  ATerm o_118 = NULL;
  o_118 = t;
  t = SSL_is_string(not_null(o_118));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_6);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL;
              x_118 = t;
              w_118 :
              if(match_cons(x_118, sym_Path_1))
                {
                  y_118 = ATgetArgument(x_118, 0);
                  t = not_null(y_118);
                }
              else
                {
                  if(match_cons(x_118, sym_Var_1))
                    {
                      y_118 = ATgetArgument(x_118, 0);
                      {
                        t = not_null(y_118);
                        {
                          ATerm f_27 = t;
                          int g_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = f_27;
                              {
                                ATerm f_6 (ATerm t)
                                {
                                  t = term_k_27;
                                  return(t);
                                }
                                t = debug_1(t, f_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_118, sym_Prefix_2))
                        {
                          y_118 = ATgetArgument(x_118, 0);
                          z_118 = ATgetArgument(x_118, 1);
                          {
                            ATerm e_119 = NULL,g_119 = NULL;
                            ATerm n_27;
                            n_27 = t;
                            {
                              ATerm f_119 = NULL;
                              t = not_null(y_118);
                              {
                                t = eval_config_0(t);
                                {
                                  f_119 = t;
                                  if(((e_119 != NULL) && (e_119 != f_119)))
                                    _fail(f_119);
                                  else
                                    e_119 = f_119;
                                }
                              }
                            }
                            t = n_27;
                            {
                              ATerm h_119 = NULL;
                              t = not_null(z_118);
                              {
                                t = eval_config_0(t);
                                {
                                  h_119 = t;
                                  if(((g_119 != NULL) && (g_119 != h_119)))
                                    _fail(h_119);
                                  else
                                    g_119 = h_119;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_119), not_null(g_119));
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
  ATerm q_119 = NULL;
  q_119 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_27, not_null(q_119));
    {
      t = table_get_0(t);
      {
        ATerm g_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_27;
            r_27 = t;
            {
              ATerm s_119 = NULL;
              ATerm t_119 = NULL;
              t_119 = t;
              if(((s_119 != NULL) && (s_119 != t_119)))
                _fail(t_119);
              else
                s_119 = t_119;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_27, not_null(q_119), not_null(s_119));
                t = table_put_0(t);
              }
            }
            t = r_27;
          }
          return(t);
        }
        t = try_1(t, g_6);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
  y_119 = t;
  x_119 :
  if(match_cons(y_119, sym__2))
    {
      z_119 = ATgetArgument(y_119, 0);
      a_120 = ATgetArgument(y_119, 1);
      t = SSL_WriteToTextFile(not_null(z_119), not_null(a_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL;
  g_120 = t;
  f_120 :
  if(match_cons(g_120, sym__2))
    {
      h_120 = ATgetArgument(g_120, 0);
      i_120 = ATgetArgument(g_120, 1);
      t = SSL_WriteToBinaryFile(not_null(h_120), not_null(i_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_120 = NULL;
  ATerm s_27;
  s_27 = t;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm z_27 = t;
      int a_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            ATerm a_121 = NULL,b_121 = NULL;
            a_121 = t;
            w_120 :
            if(match_cons(a_121, sym_Output_1))
              {
                b_121 = ATgetArgument(a_121, 0);
                if(((z_120 != NULL) && (z_120 != b_121)))
                  _fail(b_121);
                else
                  z_120 = b_121;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_6);
          ;
          LocalPopChoice(a_28);
        }
      else
        {
          t = z_27;
          {
            ATerm c_121 = NULL;
            t = term_j_28;
            {
              c_121 = t;
              if(((z_120 != NULL) && (z_120 != c_121)))
                _fail(c_121);
              else
                z_120 = c_121;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_6, _id);
  }
  t = s_27;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(z_120);
        return(t);
      }
      t = split_2(t, k_6, _id);
      return(t);
    }
    t = _2(t, _id, j_6);
    {
      ATerm k_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_6 (ATerm t)
          {
            ATerm m_6 (ATerm t)
            {
              ATerm d_121 = NULL;
              d_121 = t;
              y_120 :
              if(!(match_cons(d_121, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_6);
            return(t);
          }
          t = _2(t, l_6, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_28);
        }
      else
        {
          t = k_28;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_117 (ATerm))
{
  ATerm u_121 = NULL,w_121 = NULL,y_121 = NULL,z_121 = NULL;
  ATerm n_28;
  n_28 = t;
  t = dtime_0(t);
  t = n_28;
  {
    t = d_117(t);
    {
      ATerm o_28;
      o_28 = t;
      {
        ATerm v_121 = NULL;
        t = dtime_0(t);
        {
          v_121 = t;
          if(((u_121 != NULL) && (u_121 != v_121)))
            _fail(v_121);
          else
            u_121 = v_121;
        }
      }
      t = o_28;
      {
        w_121 = t;
        r_121 :
        if(match_cons(w_121, sym__2))
          {
            y_121 = ATgetArgument(w_121, 0);
            z_121 = ATgetArgument(w_121, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_121)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_121))), not_null(z_121));
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
ATerm debug_1 (ATerm t, ATerm a_109 (ATerm))
{
  ATerm r_28;
  r_28 = t;
  {
    ATerm g_122 = NULL,i_122 = NULL;
    ATerm w_28;
    w_28 = t;
    {
      ATerm h_122 = NULL;
      t = a_109(t);
      {
        h_122 = t;
        if(((g_122 != NULL) && (g_122 != h_122)))
          _fail(h_122);
        else
          g_122 = h_122;
      }
    }
    t = w_28;
    {
      ATerm j_122 = NULL;
      j_122 = t;
      if(((i_122 != NULL) && (i_122 != j_122)))
        _fail(j_122);
      else
        i_122 = j_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_122)), not_null(g_122)));
        t = printnl_0(t);
      }
    }
  }
  t = r_28;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_122 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_122 = NULL;
      o_122 = t;
      {
        if(((n_122 != NULL) && (n_122 != o_122)))
          _fail(o_122);
        else
          n_122 = o_122;
        t = SSL_ReadFromFile(not_null(n_122));
      }
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm n_6 (ATerm t)
        {
          t = term_z_28;
          return(t);
        }
        t = debug_1(t, n_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm))
{
  ATerm s_122 = NULL,u_122 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    ATerm t_122 = NULL;
    t = z_99(t);
    {
      t_122 = t;
      if(((s_122 != NULL) && (s_122 != t_122)))
        _fail(t_122);
      else
        s_122 = t_122;
    }
  }
  t = a_29;
  {
    ATerm v_122 = NULL;
    t = a_100(t);
    {
      v_122 = t;
      if(((u_122 != NULL) && (u_122 != v_122)))
        _fail(v_122);
      else
        u_122 = v_122;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_122), not_null(u_122));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_123 = NULL;
  ATerm b_29;
  b_29 = t;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 (ATerm t)
        {
          ATerm i_123 = NULL,j_123 = NULL;
          i_123 = t;
          d_123 :
          if(match_cons(i_123, sym_Input_1))
            {
              j_123 = ATgetArgument(i_123, 0);
              if(((f_123 != NULL) && (f_123 != j_123)))
                _fail(j_123);
              else
                f_123 = j_123;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_6);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        {
          ATerm k_123 = NULL;
          t = term_i_29;
          {
            k_123 = t;
            if(((f_123 != NULL) && (f_123 != k_123)))
              _fail(k_123);
            else
              f_123 = k_123;
          }
        }
      }
  }
  t = b_29;
  {
    ATerm p_6 (ATerm t)
    {
      t = not_null(f_123);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm o_123 = NULL;
    o_123 = t;
    n_123 :
    if(!(match_string(o_123, "-v")))
      {
        if(!(match_string(o_123, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_k_29;
    t = set_config_0(t);
    t = term_o_29;
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = Option_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm r_123 = NULL;
    r_123 = t;
    p_123 :
    if(!(match_string(r_123, "-k")))
      {
        if(!(match_string(r_123, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm t_29;
    t_29 = t;
    {
      ATerm s_123 = NULL;
      ATerm t_123 = NULL;
      t = string_to_int_0(t);
      {
        t_123 = t;
        if(((s_123 != NULL) && (s_123 != t_123)))
          _fail(t_123);
        else
          s_123 = t_123;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(s_123));
        t = set_config_0(t);
      }
    }
    t = t_29;
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  t = ArgOption_3(t, v_6, w_6, x_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_123 = NULL;
  w_123 = t;
  t = SSL_string_to_int(not_null(w_123));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 (ATerm t)
      {
        ATerm m_124 = NULL;
        m_124 = t;
        z_123 :
        if(!(match_string(m_124, "-S")))
          {
            if(!(match_string(m_124, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_z_29;
        t = set_config_0(t);
        t = term_a_30;
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        t = term_b_30;
        return(t);
      }
      t = Option_3(t, y_6, z_6, a_7);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 (ATerm t)
            {
              ATerm n_124 = NULL;
              n_124 = t;
              i_124 :
              if(!(match_string(n_124, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_7 (ATerm t)
            {
              ATerm s_124 = NULL;
              ATerm j_30;
              j_30 = t;
              {
                ATerm o_124 = NULL;
                ATerm r_124 = NULL;
                t = string_to_int_0(t);
                {
                  r_124 = t;
                  if(((o_124 != NULL) && (o_124 != r_124)))
                    _fail(r_124);
                  else
                    o_124 = r_124;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(o_124));
                  t = set_config_0(t);
                }
              }
              t = j_30;
              {
                ATerm t_124 = NULL;
                t_124 = t;
                if(((s_124 != NULL) && (s_124 != t_124)))
                  _fail(t_124);
                else
                  s_124 = t_124;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_124));
              }
              return(t);
            }
            ATerm d_7 (ATerm t)
            {
              t = term_k_30;
              return(t);
            }
            t = ArgOption_3(t, b_7, c_7, d_7);
            ;
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm e_7 (ATerm t)
              {
                ATerm u_124 = NULL;
                u_124 = t;
                l_124 :
                if(!(match_string(u_124, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_7 (ATerm t)
              {
                t = term_m_30;
                t = set_config_0(t);
                t = term_q_30;
                return(t);
              }
              ATerm g_7 (ATerm t)
              {
                t = term_s_30;
                return(t);
              }
              t = Option_3(t, e_7, f_7, g_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = u_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm a_125 = NULL;
    a_125 = t;
    x_124 :
    if(!(match_string(a_125, "-o")))
      {
        if(!(match_string(a_125, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm d_125 = NULL;
    ATerm a_31;
    a_31 = t;
    {
      ATerm b_125 = NULL;
      ATerm c_125 = NULL;
      c_125 = t;
      if(((b_125 != NULL) && (b_125 != c_125)))
        _fail(c_125);
      else
        b_125 = c_125;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_31, not_null(b_125));
        t = set_config_0(t);
      }
    }
    t = a_31;
    {
      ATerm e_125 = NULL;
      e_125 = t;
      if(((d_125 != NULL) && (d_125 != e_125)))
        _fail(e_125);
      else
        d_125 = e_125;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_125));
    }
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  t = ArgOption_3(t, h_7, i_7, j_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm k_7 (ATerm t)
        {
          ATerm i_125 = NULL;
          i_125 = t;
          h_125 :
          if(!(match_string(i_125, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_n_31;
          t = set_config_0(t);
          t = term_o_31;
          return(t);
        }
        ATerm m_7 (ATerm t)
        {
          t = term_p_31;
          return(t);
        }
        t = Option_3(t, k_7, l_7, m_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL;
  o_125 = t;
  m_125 :
  if(match_string(o_125, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_125) == AT_LIST) && !(ATisEmpty(o_125))))
        {
          p_125 = ATgetFirst((ATermList) o_125);
          q_125 = (ATerm) ATgetNext((ATermList) o_125);
          n_125 :
          if(((ATgetType(q_125) == AT_LIST) && !(ATisEmpty(q_125))))
            {
              r_125 = ATgetFirst((ATermList) q_125);
              s_125 = (ATerm) ATgetNext((ATermList) q_125);
              {
                ATerm w_125 = NULL;
                ATerm q_31;
                q_31 = t;
                {
                  t = not_null(p_125);
                  t = k_0(t);
                }
                t = q_31;
                {
                  ATerm x_125 = NULL;
                  t = not_null(r_125);
                  {
                    t = l_0(t);
                    {
                      x_125 = t;
                      if(((w_125 != NULL) && (w_125 != x_125)))
                        _fail(x_125);
                      else
                        w_125 = x_125;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_125)), not_null(w_125));
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
  ATerm n_7 (ATerm t)
  {
    ATerm e_126 = NULL;
    e_126 = t;
    b_126 :
    if(!(match_string(e_126, "-i")))
      {
        if(!(match_string(e_126, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    ATerm h_126 = NULL;
    ATerm r_31;
    r_31 = t;
    {
      ATerm f_126 = NULL;
      ATerm g_126 = NULL;
      g_126 = t;
      if(((f_126 != NULL) && (f_126 != g_126)))
        _fail(g_126);
      else
        f_126 = g_126;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_31, not_null(f_126));
        t = set_config_0(t);
      }
    }
    t = r_31;
    {
      ATerm i_126 = NULL;
      i_126 = t;
      if(((h_126 != NULL) && (h_126 != i_126)))
        _fail(i_126);
      else
        h_126 = i_126;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_126));
    }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  t = ArgOption_3(t, n_7, o_7, p_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm w_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = w_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATempty, term_a_32));
  {
    t = printnl_0(t);
    {
      t = term_n_26;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_126 = NULL;
  m_126 = t;
  t = SSL_TicksToSeconds(not_null(m_126));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
  r_126 = t;
  q_126 :
  if(match_cons(r_126, sym__2))
    {
      s_126 = ATgetArgument(r_126, 0);
      t_126 = ATgetArgument(r_126, 1);
      {
        ATerm f_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_126), not_null(t_126));
            ;
            LocalPopChoice(n_32);
          }
        else
          {
            t = f_32;
            t = SSL_addr(not_null(s_126), not_null(t_126));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_107(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL;
        a_127 = t;
        z_126 :
        if(((ATgetType(a_127) == AT_LIST) && !(ATisEmpty(a_127))))
          {
            b_127 = ATgetFirst((ATermList) a_127);
            c_127 = (ATerm) ATgetNext((ATermList) a_127);
            {
              ATerm f_127 = NULL;
              ATerm g_127 = NULL;
              t = not_null(c_127);
              {
                t = foldr_2(t, h_107, i_107);
                {
                  g_127 = t;
                  if(((f_127 != NULL) && (f_127 != g_127)))
                    _fail(g_127);
                  else
                    f_127 = g_127;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_127), not_null(f_127));
                t = i_107(t);
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
ATerm crush_2 (ATerm t, ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm n_127 = NULL;
  ATerm p_127 = NULL;
  n_127 = t;
  {
    ATerm q_127 = NULL;
    ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
    t = not_null(n_127);
    {
      q_127 = t;
      {
        t = SSL_explode_term(not_null(q_127));
        {
          s_127 = t;
          m_127 :
          if(match_cons(s_127, sym__2))
            {
              t_127 = ATgetArgument(s_127, 0);
              u_127 = ATgetArgument(s_127, 1);
              if(((p_127 != NULL) && (p_127 != u_127)))
                _fail(u_127);
              else
                p_127 = u_127;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_127);
      t = foldr_2(t, f_106, g_106);
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
    ATerm q_7 (ATerm t)
    {
      t = term_y_29;
      return(t);
    }
    t = crush_2(t, q_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
  a_128 = t;
  z_127 :
  if(match_cons(a_128, sym__2))
    {
      b_128 = ATgetArgument(a_128, 0);
      c_128 = ATgetArgument(a_128, 1);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_128), not_null(c_128));
              ;
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(not_null(b_128), not_null(c_128));
            }
        }
        t = i_33;
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
  ATerm i_128 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL;
      j_128 = t;
      h_128 :
      if(match_cons(j_128, sym__2))
        {
          k_128 = ATgetArgument(j_128, 0);
          l_128 = ATgetArgument(j_128, 1);
          {
            if(((i_128 != NULL) && (i_128 != k_128)))
              _fail(k_128);
            else
              i_128 = k_128;
            if(((i_128 != NULL) && (i_128 != l_128)))
              _fail(l_128);
            else
              i_128 = l_128;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm n_33;
    n_33 = t;
    {
      ATerm o_128 = NULL;
      ATerm p_128 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          p_128 = t;
          if(((o_128 != NULL) && (o_128 != p_128)))
            _fail(p_128);
          else
            o_128 = p_128;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_128), term_n_26);
        t = geq_0(t);
      }
    }
    t = n_33;
    t = p_124(t);
    return(t);
  }
  t = try_1(t, r_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm t_128 = NULL,w_128 = NULL;
    ATerm o_33;
    o_33 = t;
    {
      ATerm v_128 = NULL;
      t = run_time_0(t);
      {
        v_128 = t;
        if(((t_128 != NULL) && (t_128 != v_128)))
          _fail(v_128);
        else
          t_128 = v_128;
      }
    }
    t = o_33;
    {
      ATerm x_128 = NULL;
      t = term_p_33;
      {
        t = get_config_0(t);
        {
          x_128 = t;
          if(((w_128 != NULL) && (w_128 != x_128)))
            _fail(x_128);
          else
            w_128 = x_128;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), not_null(t_128)), term_q_33), not_null(w_128)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_7);
  {
    t = term_y_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_129 = NULL;
  f_129 = t;
  e_129 :
  if(match_cons(f_129, sym_Version_0))
    {
      ATerm h_129 = NULL,j_129 = NULL;
      ATerm s_33;
      s_33 = t;
      {
        ATerm i_129 = NULL;
        t = SSLgetAnnotations(not_null(f_129));
        {
          i_129 = t;
          if(((h_129 != NULL) && (h_129 != i_129)))
            _fail(i_129);
          else
            h_129 = i_129;
        }
      }
      t = s_33;
      {
        ATerm k_129 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_129));
        {
          k_129 = t;
          if(((j_129 != NULL) && (j_129 != k_129)))
            _fail(k_129);
          else
            j_129 = k_129;
        }
        t = not_null(j_129);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_117 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_7);
  t = b_117(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_129 = NULL;
  p_129 = t;
  t = SSL_table_create(not_null(p_129));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_129 = NULL;
  t_129 = t;
  {
    ATerm x_33;
    x_33 = t;
    {
      t = term_y_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_33, term_z_33, not_null(t_129));
          t = table_put_0(t);
        }
      }
    }
    t = x_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_129 = NULL;
  x_129 = t;
  t = SSL_table_destroy(not_null(x_129));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_130 = NULL;
  b_130 = t;
  t = SSL_exit(not_null(b_130));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL,h_130 = NULL;
  f_130 = t;
  e_130 :
  if(((ATgetType(f_130) == AT_LIST) && ATisEmpty(f_130)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_130) == AT_LIST) && !(ATisEmpty(f_130))))
        {
          g_130 = ATgetFirst((ATermList) f_130);
          h_130 = (ATerm) ATgetNext((ATermList) f_130);
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
  ATerm b_34;
  b_34 = t;
  {
    ATerm k_130 = NULL;
    ATerm n_130 = NULL;
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm l_130 = NULL;
          ATerm m_130 = NULL;
          m_130 = t;
          if(((l_130 != NULL) && (l_130 != m_130)))
            _fail(m_130);
          else
            l_130 = m_130;
          t = (ATerm) ATinsert(ATempty, not_null(l_130));
        }
      }
    {
      n_130 = t;
      if(((k_130 != NULL) && (k_130 != n_130)))
        _fail(n_130);
      else
        k_130 = n_130;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(k_130));
      t = printnl_0(t);
    }
  }
  t = b_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_100 (ATerm))
{
  ATerm q_130 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = Cons_2(t, x_100, q_130);
      }
    return(t);
  }
  t = q_130(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL;
  z_130 = t;
  w_130 :
  if(((ATgetType(z_130) == AT_LIST) && !(ATisEmpty(z_130))))
    {
      x_130 = ATgetFirst((ATermList) z_130);
      y_130 = (ATerm) ATgetNext((ATermList) z_130);
      {
        ATerm c_131 = NULL;
        t = not_null(y_130);
        {
          ATerm g_34;
          g_34 = t;
          {
            ATerm d_131 = NULL,f_131 = NULL,h_131 = NULL;
            ATerm h_34;
            h_34 = t;
            {
              ATerm e_131 = NULL;
              t = i_0(t);
              {
                e_131 = t;
                if(((d_131 != NULL) && (d_131 != e_131)))
                  _fail(e_131);
                else
                  d_131 = e_131;
              }
            }
            t = h_34;
            {
              ATerm g_131 = NULL;
              t = not_null(x_130);
              {
                t = g_0(t);
                {
                  g_131 = t;
                  if(((f_131 != NULL) && (f_131 != g_131)))
                    _fail(g_131);
                  else
                    f_131 = g_131;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_131)), not_null(f_131));
                {
                  h_131 = t;
                  if(((c_131 != NULL) && (c_131 != h_131)))
                    _fail(h_131);
                  else
                    c_131 = h_131;
                }
              }
            }
          }
          t = g_34;
          {
            ATerm u_7 (ATerm t)
            {
              t = not_null(c_131);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_130) == AT_LIST) && ATisEmpty(z_130)))
        {
          {
            t = term_i_25;
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
  ATerm v_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm s_131 = NULL,t_131 = NULL;
  s_131 = t;
  r_131 :
  if(match_cons(s_131, sym_Program_1))
    {
      t_131 = ATgetArgument(s_131, 0);
      {
        ATerm w_131 = NULL,y_131 = NULL;
        ATerm x_131 = NULL;
        t = SSLgetAnnotations(not_null(s_131));
        {
          x_131 = t;
          if(((w_131 != NULL) && (w_131 != x_131)))
            _fail(x_131);
          else
            w_131 = x_131;
        }
        {
          t = not_null(t_131);
          {
            ATerm a_132 = NULL;
            t = q_95(t);
            {
              y_131 = t;
              {
                ATerm b_132 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_131)), not_null(w_131));
                {
                  b_132 = t;
                  if(((a_132 != NULL) && (a_132 != b_132)))
                    _fail(b_132);
                  else
                    a_132 = b_132;
                }
                t = not_null(a_132);
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
  ATerm k_132 = NULL;
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_132 = NULL;
      t = term_p_33;
      {
        t = get_config_0(t);
        {
          l_132 = t;
          if(((k_132 != NULL) && (k_132 != l_132)))
            _fail(l_132);
          else
            k_132 = l_132;
        }
      }
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm w_7 (ATerm t)
        {
          ATerm x_7 (ATerm t)
          {
            ATerm m_132 = NULL;
            m_132 = t;
            if(((k_132 != NULL) && (k_132 != m_132)))
              _fail(m_132);
            else
              k_132 = m_132;
            return(t);
          }
          t = Program_1(t, x_7);
          return(t);
        }
        t = option_defined_1(t, w_7);
      }
    }
  {
    ATerm y_7 (ATerm t)
    {
      ATerm z_7 (ATerm t)
      {
        t = not_null(k_132);
        return(t);
      }
      t = short_description_1(t, z_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_7);
    {
      t = term_k_34;
      {
        t = echo_0(t);
        {
          t = term_n_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_8 (ATerm t)
                {
                  ATerm n_132 = NULL;
                  ATerm o_132 = NULL;
                  o_132 = t;
                  if(((n_132 != NULL) && (n_132 != o_132)))
                    _fail(o_132);
                  else
                    n_132 = o_132;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_132)), term_o_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_8);
                {
                  ATerm b_8 (ATerm t)
                  {
                    ATerm p_132 = NULL;
                    ATerm q_132 = NULL;
                    ATerm c_8 (ATerm t)
                    {
                      t = not_null(k_132);
                      return(t);
                    }
                    t = long_description_1(t, c_8);
                    {
                      q_132 = t;
                      if(((p_132 != NULL) && (p_132 != q_132)))
                        _fail(q_132);
                      else
                        p_132 = q_132;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_132)), term_p_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_8);
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
ATerm Undefined_1 (ATerm t, ATerm r_95 (ATerm))
{
  ATerm a_133 = NULL,b_133 = NULL;
  a_133 = t;
  z_132 :
  if(match_cons(a_133, sym_Undefined_1))
    {
      b_133 = ATgetArgument(a_133, 0);
      {
        ATerm e_133 = NULL,g_133 = NULL;
        ATerm f_133 = NULL;
        t = SSLgetAnnotations(not_null(a_133));
        {
          f_133 = t;
          if(((e_133 != NULL) && (e_133 != f_133)))
            _fail(f_133);
          else
            e_133 = f_133;
        }
        {
          t = not_null(b_133);
          {
            ATerm i_133 = NULL;
            t = r_95(t);
            {
              g_133 = t;
              {
                ATerm j_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_133)), not_null(e_133));
                {
                  j_133 = t;
                  if(((i_133 != NULL) && (i_133 != j_133)))
                    _fail(j_133);
                  else
                    i_133 = j_133;
                }
                t = not_null(i_133);
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
ATerm fetch_1 (ATerm t, ATerm g_101 (ATerm))
{
  ATerm o_133 (ATerm t)
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_101, _id);
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = Cons_2(t, _id, o_133);
      }
    return(t);
  }
  t = o_133(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_119 (ATerm))
{
  t = fetch_1(t, k_119);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_133 = NULL;
  t_133 = t;
  s_133 :
  if(match_cons(t_133, sym_Help_0))
    {
      ATerm v_133 = NULL,x_133 = NULL;
      ATerm s_34;
      s_34 = t;
      {
        ATerm w_133 = NULL;
        t = SSLgetAnnotations(not_null(t_133));
        {
          w_133 = t;
          if(((v_133 != NULL) && (v_133 != w_133)))
            _fail(w_133);
          else
            v_133 = w_133;
        }
      }
      t = s_34;
      {
        ATerm y_133 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_133));
        {
          y_133 = t;
          if(((x_133 != NULL) && (x_133 != y_133)))
            _fail(y_133);
          else
            x_133 = y_133;
        }
        t = not_null(x_133);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_99 (ATerm))
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_99(t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL;
  e_134 = t;
  d_134 :
  if(match_cons(e_134, sym__2))
    {
      f_134 = ATgetArgument(e_134, 0);
      g_134 = ATgetArgument(e_134, 1);
      t = SSL_table_get(not_null(f_134), not_null(g_134));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL;
  n_134 = t;
  m_134 :
  if(match_cons(n_134, sym__3))
    {
      o_134 = ATgetArgument(n_134, 0);
      p_134 = ATgetArgument(n_134, 1);
      q_134 = ATgetArgument(n_134, 2);
      {
        ATerm v_34;
        v_34 = t;
        {
          ATerm u_134 = NULL;
          ATerm v_134 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_134), not_null(p_134));
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                t = (ATerm) ATempty;
              }
            {
              v_134 = t;
              if(((u_134 != NULL) && (u_134 != v_134)))
                _fail(v_134);
              else
                u_134 = v_134;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_134), not_null(p_134), (ATerm) ATinsert(CheckATermList(not_null(u_134)), not_null(q_134)));
            t = table_put_0(t);
          }
        }
        t = v_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_120 (ATerm))
{
  ATerm z_134 = NULL;
  ATerm a_135 = NULL;
  t = term_i_25;
  {
    t = p_120(t);
    {
      a_135 = t;
      if(((z_134 != NULL) && (z_134 != a_135)))
        _fail(a_135);
      else
        z_134 = a_135;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_34, term_m_34, not_null(z_134));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  g_135 = t;
  f_135 :
  if(match_string(g_135, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(g_135) == AT_LIST) && !(ATisEmpty(g_135))))
        {
          h_135 = ATgetFirst((ATermList) g_135);
          i_135 = (ATerm) ATgetNext((ATermList) g_135);
          {
            ATerm l_135 = NULL;
            ATerm y_34;
            y_34 = t;
            {
              t = not_null(h_135);
              t = a_0(t);
            }
            t = y_34;
            {
              ATerm m_135 = NULL;
              t = term_i_25;
              {
                t = c_0(t);
                {
                  m_135 = t;
                  if(((l_135 != NULL) && (l_135 != m_135)))
                    _fail(m_135);
                  else
                    l_135 = m_135;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_135)), not_null(l_135));
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
  ATerm d_8 (ATerm t)
  {
    ATerm r_135 = NULL;
    r_135 = t;
    q_135 :
    if(!(match_string(r_135, "--help")))
      {
        if(!(match_string(r_135, "-h")))
          {
            if(!(match_string(r_135, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = term_a_35;
    {
      t = set_config_0(t);
      t = term_b_35;
    }
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    t = term_c_35;
    return(t);
  }
  t = Option_3(t, d_8, e_8, f_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL;
  u_135 = t;
  t_135 :
  if(((ATgetType(u_135) == AT_LIST) && !(ATisEmpty(u_135))))
    {
      v_135 = ATgetFirst((ATermList) u_135);
      w_135 = (ATerm) ATgetNext((ATermList) u_135);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_135)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_135)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm g_136 = NULL,h_136 = NULL,i_136 = NULL;
  g_136 = t;
  f_136 :
  if(((ATgetType(g_136) == AT_LIST) && !(ATisEmpty(g_136))))
    {
      h_136 = ATgetFirst((ATermList) g_136);
      i_136 = (ATerm) ATgetNext((ATermList) g_136);
      {
        ATerm m_136 = NULL,o_136 = NULL;
        ATerm n_136 = NULL;
        t = SSLgetAnnotations(not_null(g_136));
        {
          n_136 = t;
          if(((m_136 != NULL) && (m_136 != n_136)))
            _fail(n_136);
          else
            m_136 = n_136;
        }
        {
          t = not_null(h_136);
          {
            ATerm q_136 = NULL;
            t = l_84(t);
            {
              o_136 = t;
              {
                t = not_null(i_136);
                {
                  ATerm s_136 = NULL;
                  t = m_84(t);
                  {
                    q_136 = t;
                    {
                      ATerm t_136 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_136)), not_null(o_136)), not_null(m_136));
                      {
                        t_136 = t;
                        if(((s_136 != NULL) && (s_136 != t_136)))
                          _fail(t_136);
                        else
                          s_136 = t_136;
                      }
                      t = not_null(s_136);
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
  ATerm d_137 = NULL;
  d_137 = t;
  c_137 :
  if(((ATgetType(d_137) == AT_LIST) && ATisEmpty(d_137)))
    {
      {
        ATerm f_137 = NULL,h_137 = NULL;
        ATerm d_35;
        d_35 = t;
        {
          ATerm g_137 = NULL;
          t = SSLgetAnnotations(not_null(d_137));
          {
            g_137 = t;
            if(((f_137 != NULL) && (f_137 != g_137)))
              _fail(g_137);
            else
              f_137 = g_137;
          }
        }
        t = d_35;
        {
          ATerm i_137 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_137));
          {
            i_137 = t;
            if(((h_137 != NULL) && (h_137 != i_137)))
              _fail(i_137);
            else
              h_137 = i_137;
          }
          t = not_null(h_137);
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
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL;
  p_137 = t;
  o_137 :
  if(match_cons(p_137, sym__2))
    {
      q_137 = ATgetArgument(p_137, 0);
      r_137 = ATgetArgument(p_137, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_27, not_null(q_137), not_null(r_137));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_120 (ATerm))
{
  ATerm e_35;
  e_35 = t;
  {
    ATerm g_8 (ATerm t)
    {
      t = term_f_35;
      t = n_120(t);
      return(t);
    }
    t = try_1(t, g_8);
  }
  t = e_35;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm z_137 = NULL;
      ATerm g_35;
      g_35 = t;
      {
        ATerm x_137 = NULL;
        ATerm y_137 = NULL;
        y_137 = t;
        if(((x_137 != NULL) && (x_137 != y_137)))
          _fail(y_137);
        else
          x_137 = y_137;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_33, not_null(x_137));
          t = set_config_0(t);
        }
      }
      t = g_35;
      {
        ATerm a_138 = NULL;
        a_138 = t;
        if(((z_137 != NULL) && (z_137 != a_138)))
          _fail(a_138);
        else
          z_137 = a_138;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_137));
      }
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      ATerm h_35 = t;
      int i_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                t = n_120(t);
                t = Cons_2(t, _id, i_8);
              }
            }
          ;
          LocalPopChoice(i_35);
        }
      else
        {
          t = h_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_8, i_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
  ATerm l_35;
  l_35 = t;
  {
    ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL;
    j_138 = t;
    f_138 :
    if(match_cons(j_138, sym__3))
      {
        k_138 = ATgetArgument(j_138, 0);
        l_138 = ATgetArgument(j_138, 1);
        m_138 = ATgetArgument(j_138, 2);
        {
          if(((g_138 != NULL) && (g_138 != k_138)))
            _fail(k_138);
          else
            g_138 = k_138;
          {
            if(((h_138 != NULL) && (h_138 != l_138)))
              _fail(l_138);
            else
              h_138 = l_138;
            {
              if(((i_138 != NULL) && (i_138 != m_138)))
                _fail(m_138);
              else
                i_138 = m_138;
              t = SSL_table_put(not_null(g_138), not_null(h_138), not_null(i_138));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_120 (ATerm))
{
  ATerm p_138 = NULL;
  ATerm m_35;
  m_35 = t;
  {
    t = term_n_35;
    t = table_put_0(t);
  }
  t = m_35;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_120(t);
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_8);
    {
      ATerm k_8 (ATerm t)
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_35;
            s_35 = t;
            {
              ATerm t_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = t_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_35;
            {
              t = system_usage_0(t);
              {
                t = term_y_29;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm m_8 (ATerm t)
                {
                  ATerm q_138 = NULL;
                  q_138 = t;
                  if(((p_138 != NULL) && (p_138 != q_138)))
                    _fail(q_138);
                  else
                    p_138 = q_138;
                  return(t);
                }
                t = Undefined_1(t, m_8);
                return(t);
              }
              t = option_defined_1(t, l_8);
              {
                ATerm n_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_138)), term_x_35);
                  return(t);
                }
                t = say_1(t, n_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_26;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_8);
      {
        ATerm y_35;
        y_35 = t;
        {
          t = term_l_34;
          t = table_destroy_0(t);
        }
        t = y_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm))
{
  t = parse_options_1(t, h_117);
  {
    t = store_options_0(t);
    {
      t = j_117(t);
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_117);
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm b_36 = t;
              int c_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_117(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_36);
                }
              else
                {
                  t = b_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_117(t);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_8, a_118, b_118, p_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm r_8 (ATerm t)
    {
      ATerm h_36;
      h_36 = t;
      {
        ATerm t_138 = NULL;
        ATerm u_138 = NULL;
        t = term_p_33;
        {
          t = get_config_0(t);
          {
            u_138 = t;
            if(((t_138 != NULL) && (t_138 != u_138)))
              _fail(u_138);
            else
              t_138 = u_138;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATempty, not_null(t_138)));
          t = printnl_0(t);
        }
      }
      t = h_36;
      return(t);
    }
    t = if_verbose2_1(t, r_8);
    return(t);
  }
  t = iowrap_4(t, s_117, t_117, u_117, q_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm))
{
  t = iowrap_3(t, q_117, r_117, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    t = _2(t, _id, n_117);
    return(t);
  }
  t = iowrap_2(t, s_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        {
          ATerm u_8 (ATerm t)
          {
            ATerm v_8 (ATerm t)
            {
              t = term_k_36;
              return(t);
            }
            t = say_1(t, v_8);
            return(t);
          }
          t = if_verbose2_1(t, u_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, t_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
