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
ATerm term_h_36;
ATerm term_t_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_y_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_q_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_r_16;
ATerm term_i_15;
ATerm term_h_15;
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
ATerm term_k_14;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_f_10;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
void init_constant_terms (void)
{
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Op_2, term_u_11, (ATerm) ATempty);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Call_2, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_14, term_r_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_14, term_v_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_14, term_r_14);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_14, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_f_25);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_v_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_f_25);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_f_25);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_f_25);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__3, term_j_34, term_k_34, (ATerm) ATempty);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
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
  ATerm v_8;
  v_8 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, not_null(q_6)));
      t = printnl_0(t);
    }
  }
  t = v_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_109 (ATerm))
{
  ATerm z_8;
  z_8 = t;
  {
    t = b_109(t);
    t = debug_0(t);
  }
  t = z_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_124 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm w_8 = NULL;
      ATerm x_8 = NULL;
      t = term_b_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), term_c_9);
        t = geq_0(t);
      }
    }
    t = a_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(y_9)), not_null(x_9)), not_null(w_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_10)), not_null(g_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_10)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10)))))));
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
        ATerm g_9 = t;
        int h_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12))))));
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm k_9 = t;
              int l_9 = stack_ptr;
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
                  LocalPopChoice(l_9);
                }
              else
                {
                  t = k_9;
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
  ATerm m_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = m_9;
      {
        ATerm p_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = p_9;
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
        ATerm v_9 = t;
        int b_10 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), not_null(a_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_16))));
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = v_9;
            {
              ATerm p_10 = t;
              int b_11 = stack_ptr;
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
                  LocalPopChoice(b_11);
                }
              else
                {
                  t = p_10;
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
  ATerm i_18 = NULL,j_18 = NULL,u_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_As_2))
    {
      j_18 = ATgetArgument(i_18, 0);
      u_18 = ATgetArgument(i_18, 1);
      {
        ATerm y_18 = NULL,a_19 = NULL;
        ATerm z_18 = NULL;
        t = SSLgetAnnotations(not_null(i_18));
        {
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
        }
        {
          t = not_null(j_18);
          {
            ATerm d_19 = NULL;
            t = q_88(t);
            {
              a_19 = t;
              {
                t = not_null(u_18);
                {
                  ATerm f_19 = NULL;
                  t = r_88(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(a_19), not_null(d_19)), not_null(y_18));
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
ATerm Prim_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_cons(t_19, sym_Prim_2))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      {
        ATerm z_19 = NULL,b_20 = NULL;
        ATerm a_20 = NULL;
        t = SSLgetAnnotations(not_null(t_19));
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
        {
          t = not_null(u_19);
          {
            ATerm d_20 = NULL;
            t = n_84(t);
            {
              b_20 = t;
              {
                t = not_null(v_19);
                {
                  ATerm f_20 = NULL;
                  t = o_84(t);
                  {
                    d_20 = t;
                    {
                      ATerm g_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_20), not_null(d_20)), not_null(z_19));
                      {
                        g_20 = t;
                        if(((f_20 != NULL) && (f_20 != g_20)))
                          _fail(g_20);
                        else
                          f_20 = g_20;
                      }
                      t = not_null(f_20);
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
  ATerm t_20 = NULL,v_20 = NULL,w_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_Explode_2))
    {
      v_20 = ATgetArgument(t_20, 0);
      w_20 = ATgetArgument(t_20, 1);
      {
        ATerm a_21 = NULL,c_21 = NULL;
        ATerm b_21 = NULL;
        t = SSLgetAnnotations(not_null(t_20));
        {
          b_21 = t;
          if(((a_21 != NULL) && (a_21 != b_21)))
            _fail(b_21);
          else
            a_21 = b_21;
        }
        {
          t = not_null(v_20);
          {
            ATerm e_21 = NULL;
            t = m_88(t);
            {
              c_21 = t;
              {
                t = not_null(w_20);
                {
                  ATerm g_21 = NULL;
                  t = n_88(t);
                  {
                    e_21 = t;
                    {
                      ATerm h_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_21), not_null(e_21)), not_null(a_21));
                      {
                        h_21 = t;
                        if(((g_21 != NULL) && (g_21 != h_21)))
                          _fail(h_21);
                        else
                          g_21 = h_21;
                      }
                      t = not_null(g_21);
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
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Op_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      {
        ATerm a_22 = NULL,c_22 = NULL;
        ATerm b_22 = NULL;
        t = SSLgetAnnotations(not_null(u_21));
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
        {
          t = not_null(v_21);
          {
            ATerm e_22 = NULL;
            t = r_86(t);
            {
              c_22 = t;
              {
                t = not_null(w_21);
                {
                  ATerm g_22 = NULL;
                  t = s_86(t);
                  {
                    e_22 = t;
                    {
                      ATerm h_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(c_22), not_null(e_22)), not_null(a_22));
                      {
                        h_22 = t;
                        if(((g_22 != NULL) && (g_22 != h_22)))
                          _fail(h_22);
                        else
                          g_22 = h_22;
                      }
                      t = not_null(g_22);
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
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_123(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
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
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm g_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_123);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = g_11;
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_123);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
                        ;
                        LocalPopChoice(j_11);
                      }
                    else
                      {
                        t = i_11;
                        {
                          ATerm k_11 = t;
                          int l_11 = stack_ptr;
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
                              LocalPopChoice(l_11);
                            }
                          else
                            {
                              t = k_11;
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
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Build_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 = NULL,c_23 = NULL;
            ATerm g_23 = NULL;
            t = not_null(z_22);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
                d_23 = t;
                q_22 :
                if(match_cons(d_23, sym_RootApp_1))
                  {
                    e_23 = ATgetArgument(d_23, 0);
                    r_22 :
                    if(match_cons(e_23, sym_Build_1))
                      {
                        f_23 = ATgetArgument(e_23, 0);
                        {
                          if(((b_23 != NULL) && (b_23 != f_23)))
                            _fail(f_23);
                          else
                            b_23 = f_23;
                          t = not_null(b_23);
                        }
                      }
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
                g_23 = t;
                if(((c_23 != NULL) && (c_23 != g_23)))
                  _fail(g_23);
                else
                  c_23 = g_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_23));
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
              ATerm p_23 = NULL;
              t = not_null(z_22);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
                  l_23 = t;
                  u_22 :
                  if(match_cons(l_23, sym_App_2))
                    {
                      m_23 = ATgetArgument(l_23, 0);
                      o_23 = ATgetArgument(l_23, 1);
                      v_22 :
                      if(match_cons(m_23, sym_Build_1))
                        {
                          n_23 = ATgetArgument(m_23, 0);
                          {
                            if(((j_23 != NULL) && (j_23 != n_23)))
                              _fail(n_23);
                            else
                              j_23 = n_23;
                            {
                              if(((i_23 != NULL) && (i_23 != o_23)))
                                _fail(o_23);
                              else
                                i_23 = o_23;
                              t = not_null(j_23);
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
                  p_23 = t;
                  if(((k_23 != NULL) && (k_23 != p_23)))
                    _fail(p_23);
                  else
                    k_23 = p_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_23));
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
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  j_24 :
  if(match_cons(q_24, sym_Lets_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_24), not_null(s_24));
    }
  else
    {
      if(match_cons(q_24, sym_LChoices_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          k_24 :
          if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
            {
              n_24 = ATgetFirst((ATermList) r_24);
              o_24 = (ATerm) ATgetNext((ATermList) r_24);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_24), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_24)));
            }
          else
            {
              if(((ATgetType(r_24) == AT_LIST) && ATisEmpty(r_24)))
                {
                  t = term_s_11;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(q_24, sym_Choices_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              l_24 :
              if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
                {
                  n_24 = ATgetFirst((ATermList) r_24);
                  o_24 = (ATerm) ATgetNext((ATermList) r_24);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_24), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_24)));
                }
              else
                {
                  if(((ATgetType(r_24) == AT_LIST) && ATisEmpty(r_24)))
                    {
                      t = term_s_11;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(q_24, sym_Seqs_1))
                {
                  r_24 = ATgetArgument(q_24, 0);
                  m_24 :
                  if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
                    {
                      n_24 = ATgetFirst((ATermList) r_24);
                      o_24 = (ATerm) ATgetNext((ATermList) r_24);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_24), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_24)));
                    }
                  else
                    {
                      if(((ATgetType(r_24) == AT_LIST) && ATisEmpty(r_24)))
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
                  if(match_cons(q_24, sym_DefaultVarDec_1))
                    {
                      r_24 = ATgetArgument(q_24, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_24), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_11), term_x_11));
                    }
                  else
                    {
                      if(match_cons(q_24, sym_InfixApp_3))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          s_24 = ATgetArgument(q_24, 1);
                          p_24 = ATgetArgument(q_24, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), not_null(r_24))));
                        }
                      else
                        {
                          if(match_cons(q_24, sym_BAM_3))
                            {
                              r_24 = ATgetArgument(q_24, 0);
                              s_24 = ATgetArgument(q_24, 1);
                              p_24 = ATgetArgument(q_24, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(p_24))), not_null(r_24)), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_24))));
                            }
                          else
                            {
                              if(match_cons(q_24, sym_AM_2))
                                {
                                  r_24 = ATgetArgument(q_24, 0);
                                  s_24 = ATgetArgument(q_24, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_24), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_24)));
                                }
                              else
                                {
                                  if(match_cons(q_24, sym_MA_2))
                                    {
                                      r_24 = ATgetArgument(q_24, 0);
                                      s_24 = ATgetArgument(q_24, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_24)), not_null(s_24));
                                    }
                                  else
                                    {
                                      if(match_cons(q_24, sym_BA_2))
                                        {
                                          r_24 = ATgetArgument(q_24, 0);
                                          s_24 = ATgetArgument(q_24, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_24)), not_null(r_24));
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  f_26 = t;
  c_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      j_26 = ATgetArgument(f_26, 1);
      d_26 :
      if(match_cons(g_26, sym__2))
        {
          h_26 = ATgetArgument(g_26, 0);
          i_26 = ATgetArgument(g_26, 1);
          e_26 :
          if(match_cons(j_26, sym__2))
            {
              k_26 = ATgetArgument(j_26, 0);
              l_26 = ATgetArgument(j_26, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_26)), not_null(h_26)), (ATerm) ATinsert(CheckATermList(not_null(l_26)), not_null(i_26)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
    {
      u_26 = ATgetFirst((ATermList) t_26);
      v_26 = (ATerm) ATgetNext((ATermList) t_26);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(v_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(((ATgetType(b_27) == AT_LIST) && ATisEmpty(b_27)))
    {
      t = term_y_11;
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
  ATerm h_27 = NULL,i_27 = NULL;
  ATerm n_27 (ATerm t)
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    t = not_null(h_27);
    {
      ATerm z_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_11;
        }
      {
        t = new_0(t);
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(k_27)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_27)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_27))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_27))));
    return(t);
  }
  ATerm o_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_27))));
    return(t);
  }
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Var_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_27(t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = o_27(t);
          }
      }
    }
  else
    {
      t = n_27(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Prim_2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
        ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
        t = not_null(x_27);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm d_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_12;
              }
            return(t);
          }
          t = fetch_1(t, k_1);
          {
            t = not_null(x_27);
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
                  d_28 = t;
                  s_27 :
                  if(match_cons(d_28, sym__2))
                    {
                      e_28 = ATgetArgument(d_28, 0);
                      f_28 = ATgetArgument(d_28, 1);
                      t_27 :
                      if(match_cons(f_28, sym__2))
                        {
                          g_28 = ATgetArgument(f_28, 0);
                          h_28 = ATgetArgument(f_28, 1);
                          {
                            if(((a_28 != NULL) && (a_28 != e_28)))
                              _fail(e_28);
                            else
                              a_28 = e_28;
                            {
                              if(((b_28 != NULL) && (b_28 != g_28)))
                                _fail(g_28);
                              else
                                b_28 = g_28;
                              if(((c_28 != NULL) && (c_28 != h_28)))
                                _fail(h_28);
                              else
                                c_28 = h_28;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_28)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_27), not_null(c_28))));
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
  ATerm k_28 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = y_110(t);
      t = k_28(t);
      return(t);
    }
    t = try_1(t, m_1);
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Wld_0))
    {
      ATerm r_28 = NULL,t_28 = NULL;
      ATerm f_12;
      f_12 = t;
      {
        ATerm s_28 = NULL;
        t = SSLgetAnnotations(not_null(p_28));
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
      }
      t = f_12;
      {
        ATerm u_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(r_28));
        {
          u_28 = t;
          if(((t_28 != NULL) && (t_28 != u_28)))
            _fail(u_28);
          else
            t_28 = u_28;
        }
        t = not_null(t_28);
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
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm q_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = q_12;
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
      t = j_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_App_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      {
        ATerm k_29 = NULL,m_29 = NULL;
        ATerm l_29 = NULL;
        t = SSLgetAnnotations(not_null(e_29));
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
        {
          t = not_null(f_29);
          {
            ATerm o_29 = NULL;
            t = g_88(t);
            {
              m_29 = t;
              {
                t = not_null(g_29);
                {
                  ATerm q_29 = NULL;
                  t = h_88(t);
                  {
                    o_29 = t;
                    {
                      ATerm r_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_29), not_null(o_29)), not_null(k_29));
                      {
                        r_29 = t;
                        if(((q_29 != NULL) && (q_29 != r_29)))
                          _fail(r_29);
                        else
                          q_29 = r_29;
                      }
                      t = not_null(q_29);
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
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Con_3))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      h_30 = ATgetArgument(e_30, 2);
      {
        ATerm m_30 = NULL,o_30 = NULL;
        ATerm n_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
        {
          t = not_null(f_30);
          {
            ATerm q_30 = NULL;
            t = d_88(t);
            {
              o_30 = t;
              {
                t = not_null(g_30);
                {
                  ATerm s_30 = NULL;
                  t = e_88(t);
                  {
                    q_30 = t;
                    {
                      t = not_null(h_30);
                      {
                        ATerm u_30 = NULL;
                        t = f_88(t);
                        {
                          s_30 = t;
                          {
                            ATerm v_30 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(o_30), not_null(q_30), not_null(s_30)), not_null(m_30));
                            {
                              v_30 = t;
                              if(((u_30 != NULL) && (u_30 != v_30)))
                                _fail(v_30);
                              else
                                u_30 = v_30;
                            }
                            t = not_null(u_30);
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
  ATerm c_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm l_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = l_13;
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
      t = c_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  g_31 = t;
  e_31 :
  if(match_cons(g_31, sym_SRule_1))
    {
      h_31 = ATgetArgument(g_31, 0);
      f_31 :
      if(match_cons(h_31, sym_StratRule_3))
        {
          i_31 = ATgetArgument(h_31, 0);
          j_31 = ATgetArgument(h_31, 1);
          k_31 = ATgetArgument(h_31, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_31)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_31))), not_null(i_31)));
        }
      else
        {
          if(match_cons(h_31, sym_Rule_3))
            {
              i_31 = ATgetArgument(h_31, 0);
              j_31 = ATgetArgument(h_31, 1);
              k_31 = ATgetArgument(h_31, 2);
              {
                t = not_null(i_31);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_31);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_31))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_31))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_31))));
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
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  h_32 = t;
  f_32 :
  if(match_cons(h_32, sym_SRule_1))
    {
      i_32 = ATgetArgument(h_32, 0);
      g_32 :
      if(match_cons(i_32, sym_Rule_3))
        {
          j_32 = ATgetArgument(i_32, 0);
          k_32 = ATgetArgument(i_32, 1);
          l_32 = ATgetArgument(i_32, 2);
          {
            ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
            ATerm x_32 = NULL;
            ATerm d_33 = NULL;
            t = new_0(t);
            {
              x_32 = t;
              {
                if(((u_32 != NULL) && (u_32 != x_32)))
                  _fail(x_32);
                else
                  u_32 = x_32;
                {
                  t = not_null(j_32);
                  {
                    ATerm f_36 = NULL;
                    ATerm p_1 (ATerm t)
                    {
                      ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
                      y_32 = t;
                      w_31 :
                      if(match_cons(y_32, sym_Con_3))
                        {
                          z_32 = ATgetArgument(y_32, 0);
                          b_33 = ATgetArgument(y_32, 1);
                          c_33 = ATgetArgument(y_32, 2);
                          x_31 :
                          if(match_cons(z_32, sym_Var_1))
                            {
                              a_33 = ATgetArgument(z_32, 0);
                              {
                                if(((t_32 != NULL) && (t_32 != a_33)))
                                  _fail(a_33);
                                else
                                  t_32 = a_33;
                                {
                                  if(((r_32 != NULL) && (r_32 != b_33)))
                                    _fail(b_33);
                                  else
                                    r_32 = b_33;
                                  {
                                    if(((p_32 != NULL) && (p_32 != c_33)))
                                      _fail(c_33);
                                    else
                                      p_32 = c_33;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32));
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
                      d_33 = t;
                      {
                        if(((v_32 != NULL) && (v_32 != d_33)))
                          _fail(d_33);
                        else
                          v_32 = d_33;
                        {
                          t = not_null(k_32);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,a_34 = NULL,u_35 = NULL,v_35 = NULL;
                              e_33 = t;
                              a_32 :
                              if(match_cons(e_33, sym_Con_3))
                                {
                                  f_33 = ATgetArgument(e_33, 0);
                                  h_33 = ATgetArgument(e_33, 1);
                                  a_34 = ATgetArgument(e_33, 2);
                                  b_32 :
                                  if(match_cons(f_33, sym_Var_1))
                                    {
                                      g_33 = ATgetArgument(f_33, 0);
                                      c_32 :
                                      if(match_cons(a_34, sym_Call_2))
                                        {
                                          u_35 = ATgetArgument(a_34, 0);
                                          v_35 = ATgetArgument(a_34, 1);
                                          d_32 :
                                          if(((ATgetType(v_35) == AT_LIST) && ATisEmpty(v_35)))
                                            {
                                              {
                                                if(((t_32 != NULL) && (t_32 != g_33)))
                                                  _fail(g_33);
                                                else
                                                  t_32 = g_33;
                                                {
                                                  if(((s_32 != NULL) && (s_32 != h_33)))
                                                    _fail(h_33);
                                                  else
                                                    s_32 = h_33;
                                                  {
                                                    if(((q_32 != NULL) && (q_32 != u_35)))
                                                      _fail(u_35);
                                                    else
                                                      q_32 = u_35;
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
                                    }
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
                              f_36 = t;
                              if(((w_32 != NULL) && (w_32 != f_36)))
                                _fail(f_36);
                              else
                                w_32 = f_36;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_32), not_null(w_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_32), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(q_32), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_32), not_null(s_32), term_t_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_32)))))));
          }
        }
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
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
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
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm w_13 = t;
                    int x_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(x_13);
                      }
                    else
                      {
                        t = w_13;
                        {
                          ATerm y_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = y_13;
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
  ATerm n_36 (ATerm t)
  {
    ATerm a_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = a_14;
        t = _one(t, n_36);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm UnMark_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  u_36 = t;
  p_36 :
  if(match_cons(u_36, sym_Call_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      x_36 = ATgetArgument(u_36, 1);
      q_36 :
      if(match_cons(v_36, sym_SVar_1))
        {
          w_36 = ATgetArgument(v_36, 0);
          s_36 :
          if(match_string(w_36, "mark"))
            {
              t_36 :
              if(((ATgetType(x_36) == AT_LIST) && ATisEmpty(x_36)))
                {
                  t = term_t_11;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm z_37 = NULL,a_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  z_37 = t;
  p_37 :
  if(match_cons(z_37, sym_Seq_2))
    {
      a_38 = ATgetArgument(z_37, 0);
      j_38 = ATgetArgument(z_37, 1);
      q_37 :
      if(match_cons(a_38, sym_Call_2))
        {
          g_38 = ATgetArgument(a_38, 0);
          i_38 = ATgetArgument(a_38, 1);
          r_37 :
          if(match_cons(g_38, sym_SVar_1))
            {
              h_38 = ATgetArgument(g_38, 0);
              s_37 :
              if(match_string(h_38, "mark"))
                {
                  t_37 :
                  if(((ATgetType(i_38) == AT_LIST) && ATisEmpty(i_38)))
                    {
                      u_37 :
                      if(match_cons(j_38, sym_Seq_2))
                        {
                          k_38 = ATgetArgument(j_38, 0);
                          m_38 = ATgetArgument(j_38, 1);
                          v_37 :
                          if(match_cons(k_38, sym_Match_1))
                            {
                              l_38 = ATgetArgument(k_38, 0);
                              w_37 :
                              if(match_cons(m_38, sym_Seq_2))
                                {
                                  n_38 = ATgetArgument(m_38, 0);
                                  p_38 = ATgetArgument(m_38, 1);
                                  x_37 :
                                  if(match_cons(n_38, sym_Where_1))
                                    {
                                      o_38 = ATgetArgument(n_38, 0);
                                      y_37 :
                                      if(match_cons(p_38, sym_Build_1))
                                        {
                                          q_38 = ATgetArgument(p_38, 0);
                                          {
                                            ATerm i_14 = t;
                                            int j_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
                                                ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
                                                t = term_d_15;
                                                {
                                                  ATerm w_1 (ATerm t)
                                                  {
                                                    t = term_e_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, w_1);
                                                  {
                                                    d_39 = t;
                                                    e_37 :
                                                    if(match_cons(d_39, sym_Defined_2))
                                                      {
                                                        e_39 = ATgetArgument(d_39, 0);
                                                        f_39 = ATgetArgument(d_39, 1);
                                                        f_37 :
                                                        if(match_string(e_39, "s_0"))
                                                          {
                                                            ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
                                                            if(((a_39 != NULL) && (a_39 != f_39)))
                                                              _fail(f_39);
                                                            else
                                                              a_39 = f_39;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(a_39), not_null(l_38), (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(q_38)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  g_39 = t;
                                                                  d_37 :
                                                                  if(match_cons(g_39, sym__2))
                                                                    {
                                                                      h_39 = ATgetArgument(g_39, 0);
                                                                      i_39 = ATgetArgument(g_39, 1);
                                                                      {
                                                                        if(((b_39 != NULL) && (b_39 != h_39)))
                                                                          _fail(h_39);
                                                                        else
                                                                          b_39 = h_39;
                                                                        if(((c_39 != NULL) && (c_39 != i_39)))
                                                                          _fail(i_39);
                                                                        else
                                                                          c_39 = i_39;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(b_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_39))));
                                                ;
                                                LocalPopChoice(j_14);
                                              }
                                            else
                                              {
                                                t = i_14;
                                                {
                                                  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
                                                  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
                                                  t = term_d_15;
                                                  {
                                                    ATerm y_1 (ATerm t)
                                                    {
                                                      t = term_e_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, y_1);
                                                    {
                                                      s_39 = t;
                                                      n_37 :
                                                      if(match_cons(s_39, sym_Defined_2))
                                                        {
                                                          t_39 = ATgetArgument(s_39, 0);
                                                          u_39 = ATgetArgument(s_39, 1);
                                                          o_37 :
                                                          if(match_string(t_39, "h_0"))
                                                            {
                                                              ATerm v_39 = NULL;
                                                              if(((n_39 != NULL) && (n_39 != u_39)))
                                                                _fail(u_39);
                                                              else
                                                                n_39 = u_39;
                                                              {
                                                                ATerm w_39 = NULL;
                                                                t = not_null(n_39);
                                                                {
                                                                  v_39 = t;
                                                                  {
                                                                    if(((p_39 != NULL) && (p_39 != v_39)))
                                                                      _fail(v_39);
                                                                    else
                                                                      p_39 = v_39;
                                                                    {
                                                                      t = not_null(l_38);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          w_39 = t;
                                                                          {
                                                                            if(((o_39 != NULL) && (o_39 != w_39)))
                                                                              _fail(w_39);
                                                                            else
                                                                              o_39 = w_39;
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                t = term_f_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm a_2 (ATerm t)
                                                                              {
                                                                                ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
                                                                                ATerm b_2 (ATerm t)
                                                                                {
                                                                                  ATerm x_39 = NULL,z_39 = NULL;
                                                                                  ATerm y_39 = NULL;
                                                                                  y_39 = t;
                                                                                  if(((x_39 != NULL) && (x_39 != y_39)))
                                                                                    _fail(y_39);
                                                                                  else
                                                                                    x_39 = y_39;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_39));
                                                                                    {
                                                                                      z_39 = t;
                                                                                      {
                                                                                        ATerm g_15;
                                                                                        g_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(p_39), not_null(z_39)), term_i_15);
                                                                                          {
                                                                                            ATerm c_2 (ATerm t)
                                                                                            {
                                                                                              t = term_f_15;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, c_2);
                                                                                          }
                                                                                        }
                                                                                        t = g_15;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, b_2);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(q_38));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      b_40 = t;
                                                                                      m_37 :
                                                                                      if(match_cons(b_40, sym__2))
                                                                                        {
                                                                                          c_40 = ATgetArgument(b_40, 0);
                                                                                          d_40 = ATgetArgument(b_40, 1);
                                                                                          {
                                                                                            if(((q_39 != NULL) && (q_39 != c_40)))
                                                                                              _fail(c_40);
                                                                                            else
                                                                                              q_39 = c_40;
                                                                                            if(((r_39 != NULL) && (r_39 != d_40)))
                                                                                              _fail(d_40);
                                                                                            else
                                                                                              r_39 = d_40;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(q_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_38))));
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
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  ATerm f_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL;
    t = not_null(e_41);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_f_15;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        x_41 = t;
        t_40 :
        if(match_cons(x_41, sym_Defined_1))
          {
            y_41 = ATgetArgument(x_41, 0);
            u_40 :
            if(!(match_string(y_41, "m_0")))
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
    t = not_null(g_41);
    return(t);
  }
  ATerm g_42 (ATerm t)
  {
    ATerm c_42 = NULL,d_42 = NULL;
    t = not_null(e_41);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_f_15;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        c_42 = t;
        v_40 :
        if(match_cons(c_42, sym_Defined_1))
          {
            d_42 = ATgetArgument(c_42, 0);
            w_40 :
            if(!(match_string(d_42, "j_0")))
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
    t = not_null(g_41);
    return(t);
  }
  e_41 = t;
  b_41 :
  if(match_cons(e_41, sym_App_2))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      c_41 :
      if(match_cons(g_41, sym_Var_1))
        {
          d_41 = ATgetArgument(g_41, 0);
          {
            ATerm j_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_41 = NULL,t_41 = NULL;
                t = not_null(e_41);
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = term_f_15;
                    return(t);
                  }
                  t = rewrite_1(t, f_2);
                  {
                    s_41 = t;
                    r_40 :
                    if(match_cons(s_41, sym_Defined_1))
                      {
                        t_41 = ATgetArgument(s_41, 0);
                        s_40 :
                        if(!(match_string(t_41, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_41));
                ;
                LocalPopChoice(k_15);
              }
            else
              {
                t = j_15;
                {
                  ATerm m_15 = t;
                  int n_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_42(t);
                      ;
                      LocalPopChoice(n_15);
                    }
                  else
                    {
                      t = m_15;
                      t = g_42(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm o_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_42(t);
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = o_15;
              t = g_42(t);
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
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(((ATgetType(j_42) == AT_LIST) && !(ATisEmpty(j_42))))
    {
      k_42 = ATgetFirst((ATermList) j_42);
      l_42 = (ATerm) ATgetNext((ATermList) j_42);
      t = not_null(l_42);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      {
        ATerm r_15;
        r_15 = t;
        {
          ATerm w_42 = NULL;
          ATerm x_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_42), not_null(t_42));
          {
            ATerm s_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(u_15);
              }
            else
              {
                t = s_15;
                t = (ATerm) ATempty;
              }
            {
              x_42 = t;
              if(((w_42 != NULL) && (w_42 != x_42)))
                _fail(x_42);
              else
                w_42 = x_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_42), not_null(t_42), not_null(w_42));
            t = table_put_0(t);
          }
        }
        t = r_15;
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
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm h_43 = NULL;
    ATerm i_43 = NULL,j_43 = NULL,m_43 = NULL;
    t = p_108(t);
    {
      h_43 = t;
      {
        if(((g_43 != NULL) && (g_43 != h_43)))
          _fail(h_43);
        else
          g_43 = h_43;
        {
          ATerm z_15 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_43), term_r_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = z_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_43 = t;
            d_43 :
            if(((ATgetType(i_43) == AT_LIST) && !(ATisEmpty(i_43))))
              {
                j_43 = ATgetFirst((ATermList) i_43);
                m_43 = (ATerm) ATgetNext((ATermList) i_43);
                {
                  if(((f_43 != NULL) && (f_43 != j_43)))
                    _fail(j_43);
                  else
                    f_43 = j_43;
                  {
                    if(((e_43 != NULL) && (e_43 != m_43)))
                      _fail(m_43);
                    else
                      e_43 = m_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_43), term_r_16, not_null(e_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_43);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm n_43 = NULL;
                              n_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_43), not_null(n_43));
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
  t = w_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_99(t);
      t = v_99(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        t = v_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_108 (ATerm))
{
  ATerm b_44 = NULL;
  ATerm d_17;
  d_17 = t;
  {
    ATerm c_44 = NULL;
    ATerm d_44 = NULL;
    t = o_108(t);
    {
      c_44 = t;
      {
        if(((b_44 != NULL) && (b_44 != c_44)))
          _fail(c_44);
        else
          b_44 = c_44;
        {
          ATerm e_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), term_r_16);
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_17);
              }
            else
              {
                t = e_17;
                t = (ATerm) ATempty;
              }
            {
              e_44 = t;
              if(((d_44 != NULL) && (d_44 != e_44)))
                _fail(e_44);
              else
                d_44 = e_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_44), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(d_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_17;
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
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym__3))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      w_44 = ATgetArgument(t_44, 2);
      {
        ATerm a_45 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_f_15;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm d_45 = NULL;
          t = not_null(v_44);
          {
            t = tvars_0(t);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm b_45 = NULL;
                b_45 = t;
                {
                  ATerm g_17;
                  g_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(u_44), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_45))), term_i_17);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = term_f_15;
                        return(t);
                      }
                      t = assert_1(t, l_2);
                    }
                  }
                  t = g_17;
                }
                return(t);
              }
              t = map_1(t, k_2);
              {
                t = not_null(w_44);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    d_45 = t;
                    if(((a_45 != NULL) && (a_45 != d_45)))
                      _fail(d_45);
                    else
                      a_45 = d_45;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_2, j_2);
        t = not_null(a_45);
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL;
  d_46 = t;
  v_45 :
  if(match_cons(d_46, sym_Seq_2))
    {
      e_46 = ATgetArgument(d_46, 0);
      i_46 = ATgetArgument(d_46, 1);
      w_45 :
      if(match_cons(e_46, sym_Call_2))
        {
          f_46 = ATgetArgument(e_46, 0);
          h_46 = ATgetArgument(e_46, 1);
          x_45 :
          if(match_cons(f_46, sym_SVar_1))
            {
              g_46 = ATgetArgument(f_46, 0);
              y_45 :
              if(match_string(g_46, "mark"))
                {
                  z_45 :
                  if(((ATgetType(h_46) == AT_LIST) && ATisEmpty(h_46)))
                    {
                      a_46 :
                      if(match_cons(i_46, sym_Seq_2))
                        {
                          j_46 = ATgetArgument(i_46, 0);
                          l_46 = ATgetArgument(i_46, 1);
                          b_46 :
                          if(match_cons(j_46, sym_Match_1))
                            {
                              k_46 = ATgetArgument(j_46, 0);
                              c_46 :
                              if(match_cons(l_46, sym_Build_1))
                                {
                                  n_46 = ATgetArgument(l_46, 0);
                                  {
                                    ATerm j_17 = t;
                                    int k_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm t_46 = NULL,u_46 = NULL;
                                        ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
                                        t = term_m_17;
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            t = term_n_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, m_2);
                                          {
                                            v_46 = t;
                                            l_45 :
                                            if(match_cons(v_46, sym_Defined_2))
                                              {
                                                w_46 = ATgetArgument(v_46, 0);
                                                x_46 = ATgetArgument(v_46, 1);
                                                m_45 :
                                                if(match_string(w_46, "p_0"))
                                                  {
                                                    ATerm y_46 = NULL;
                                                    if(((t_46 != NULL) && (t_46 != x_46)))
                                                      _fail(x_46);
                                                    else
                                                      t_46 = x_46;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_46), not_null(k_46), not_null(n_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          y_46 = t;
                                                          if(((u_46 != NULL) && (u_46 != y_46)))
                                                            _fail(y_46);
                                                          else
                                                            u_46 = y_46;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_46)));
                                        ;
                                        LocalPopChoice(k_17);
                                      }
                                    else
                                      {
                                        t = j_17;
                                        {
                                          ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
                                          ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
                                          t = term_m_17;
                                          {
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_n_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, n_2);
                                            {
                                              g_47 = t;
                                              t_45 :
                                              if(match_cons(g_47, sym_Defined_2))
                                                {
                                                  h_47 = ATgetArgument(g_47, 0);
                                                  i_47 = ATgetArgument(g_47, 1);
                                                  u_45 :
                                                  if(match_string(h_47, "f_0"))
                                                    {
                                                      ATerm j_47 = NULL;
                                                      if(((c_47 != NULL) && (c_47 != i_47)))
                                                        _fail(i_47);
                                                      else
                                                        c_47 = i_47;
                                                      {
                                                        ATerm k_47 = NULL;
                                                        t = not_null(c_47);
                                                        {
                                                          j_47 = t;
                                                          {
                                                            if(((e_47 != NULL) && (e_47 != j_47)))
                                                              _fail(j_47);
                                                            else
                                                              e_47 = j_47;
                                                            {
                                                              t = not_null(k_46);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  k_47 = t;
                                                                  {
                                                                    if(((d_47 != NULL) && (d_47 != k_47)))
                                                                      _fail(k_47);
                                                                    else
                                                                      d_47 = k_47;
                                                                    {
                                                                      ATerm o_2 (ATerm t)
                                                                      {
                                                                        t = term_f_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm p_2 (ATerm t)
                                                                      {
                                                                        ATerm p_47 = NULL;
                                                                        ATerm q_2 (ATerm t)
                                                                        {
                                                                          ATerm l_47 = NULL,n_47 = NULL;
                                                                          ATerm m_47 = NULL;
                                                                          m_47 = t;
                                                                          if(((l_47 != NULL) && (l_47 != m_47)))
                                                                            _fail(m_47);
                                                                          else
                                                                            l_47 = m_47;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_47));
                                                                            {
                                                                              n_47 = t;
                                                                              {
                                                                                ATerm o_17;
                                                                                o_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(e_47), not_null(n_47)), term_q_17);
                                                                                  {
                                                                                    ATerm r_2 (ATerm t)
                                                                                    {
                                                                                      t = term_f_15;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, r_2);
                                                                                  }
                                                                                }
                                                                                t = o_17;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, q_2);
                                                                        {
                                                                          t = not_null(n_46);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              p_47 = t;
                                                                              if(((f_47 != NULL) && (f_47 != p_47)))
                                                                                _fail(p_47);
                                                                              else
                                                                                f_47 = p_47;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_47)));
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
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  f_49 = t;
  y_48 :
  if(match_cons(f_49, sym_App_2))
    {
      g_49 = ATgetArgument(f_49, 0);
      m_49 = ATgetArgument(f_49, 1);
      z_48 :
      if(match_cons(g_49, sym_Call_2))
        {
          h_49 = ATgetArgument(g_49, 0);
          j_49 = ATgetArgument(g_49, 1);
          a_49 :
          if(match_cons(h_49, sym_SVar_1))
            {
              i_49 = ATgetArgument(h_49, 0);
              b_49 :
              if(match_string(i_49, "bottomup_1"))
                {
                  c_49 :
                  if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
                    {
                      k_49 = ATgetFirst((ATermList) j_49);
                      l_49 = (ATerm) ATgetNext((ATermList) j_49);
                      d_49 :
                      if(((ATgetType(l_49) == AT_LIST) && ATisEmpty(l_49)))
                        {
                          e_49 :
                          if(match_cons(m_49, sym_Op_2))
                            {
                              n_49 = ATgetArgument(m_49, 0);
                              o_49 = ATgetArgument(m_49, 1);
                              {
                                ATerm s_49 = NULL;
                                ATerm v_49 = NULL;
                                t = not_null(o_49);
                                {
                                  ATerm s_2 (ATerm t)
                                  {
                                    ATerm t_49 = NULL;
                                    t_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, not_null(k_49))), not_null(t_49));
                                    return(t);
                                  }
                                  t = map_1(t, s_2);
                                  {
                                    v_49 = t;
                                    if(((s_49 != NULL) && (s_49 != v_49)))
                                      _fail(v_49);
                                    else
                                      s_49 = v_49;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_49), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_49), not_null(s_49)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Seq_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      m_50 = ATgetArgument(j_50, 1);
      i_50 :
      if(match_cons(k_50, sym_Build_1))
        {
          l_50 = ATgetArgument(k_50, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(m_50), not_null(l_50)));
        }
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
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  e_51 = t;
  v_50 :
  if(match_cons(e_51, sym_LChoice_2))
    {
      f_51 = ATgetArgument(e_51, 0);
      i_51 = ATgetArgument(e_51, 1);
      b_51 :
      if(match_cons(f_51, sym_LChoice_2))
        {
          g_51 = ATgetArgument(f_51, 0);
          h_51 = ATgetArgument(f_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_51), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_51), not_null(i_51)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(e_51, sym_Seq_2))
        {
          f_51 = ATgetArgument(e_51, 0);
          i_51 = ATgetArgument(e_51, 1);
          c_51 :
          if(match_cons(f_51, sym_Seq_2))
            {
              g_51 = ATgetArgument(f_51, 0);
              h_51 = ATgetArgument(f_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_51), not_null(i_51)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_51, sym_Choice_2))
            {
              f_51 = ATgetArgument(e_51, 0);
              i_51 = ATgetArgument(e_51, 1);
              d_51 :
              if(match_cons(f_51, sym_Choice_2))
                {
                  g_51 = ATgetArgument(f_51, 0);
                  h_51 = ATgetArgument(f_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_51), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_51), not_null(i_51)));
                }
              else
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_Seq_2))
    {
      z_51 = ATgetArgument(y_51, 0);
      c_52 = ATgetArgument(y_51, 1);
      x_51 :
      if(match_cons(z_51, sym_Scope_2))
        {
          a_52 = ATgetArgument(z_51, 0);
          b_52 = ATgetArgument(z_51, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_52), not_null(c_52)));
        }
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
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  m_52 = t;
  k_52 :
  if(match_cons(m_52, sym_Seq_2))
    {
      n_52 = ATgetArgument(m_52, 0);
      q_52 = ATgetArgument(m_52, 1);
      l_52 :
      if(match_cons(n_52, sym_LChoice_2))
        {
          o_52 = ATgetArgument(n_52, 0);
          p_52 = ATgetArgument(n_52, 1);
          {
            ATerm v_52 = NULL,w_52 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_17, not_null(q_52));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_a_18;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                v_52 = t;
                i_52 :
                if(match_cons(v_52, sym_Defined_1))
                  {
                    w_52 = ATgetArgument(v_52, 0);
                    j_52 :
                    if(!(match_string(w_52, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(o_52), not_null(q_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_52), not_null(q_52)));
          }
        }
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
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  b_53 :
  if(match_cons(d_53, sym_Seq_2))
    {
      e_53 = ATgetArgument(d_53, 0);
      h_53 = ATgetArgument(d_53, 1);
      c_53 :
      if(match_cons(e_53, sym_Choice_2))
        {
          f_53 = ATgetArgument(e_53, 0);
          g_53 = ATgetArgument(e_53, 1);
          {
            ATerm m_53 = NULL,n_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_18, not_null(h_53));
            {
              ATerm u_2 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = rewrite_1(t, u_2);
              {
                m_53 = t;
                z_52 :
                if(match_cons(m_53, sym_Defined_1))
                  {
                    n_53 = ATgetArgument(m_53, 0);
                    a_53 :
                    if(!(match_string(n_53, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(f_53), not_null(h_53)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_53), not_null(h_53)));
          }
        }
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
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
        y_54 = t;
        o_54 :
        if(match_cons(y_54, sym_Seq_2))
          {
            z_54 = ATgetArgument(y_54, 0);
            f_55 = ATgetArgument(y_54, 1);
            p_54 :
            if(match_cons(z_54, sym_Choice_2))
              {
                a_55 = ATgetArgument(z_54, 0);
                c_55 = ATgetArgument(z_54, 1);
                {
                  ATerm s_55 = NULL,u_55 = NULL;
                  ATerm f_18;
                  f_18 = t;
                  {
                    ATerm m_55 = NULL,q_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_18, not_null(f_55));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_c_18;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        m_55 = t;
                        x_53 :
                        if(match_cons(m_55, sym_Defined_1))
                          {
                            q_55 = ATgetArgument(m_55, 0);
                            y_53 :
                            if(!(match_string(q_55, "v_1")))
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
                  t = f_18;
                  {
                    ATerm g_18;
                    g_18 = t;
                    {
                      ATerm t_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_55), not_null(f_55));
                      {
                        t = v_2(t);
                        {
                          t_55 = t;
                          if(((s_55 != NULL) && (s_55 != t_55)))
                            _fail(t_55);
                          else
                            s_55 = t_55;
                        }
                      }
                    }
                    t = g_18;
                    {
                      ATerm v_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(f_55));
                      {
                        t = v_2(t);
                        {
                          v_55 = t;
                          if(((u_55 != NULL) && (u_55 != v_55)))
                            _fail(v_55);
                          else
                            u_55 = v_55;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_55), not_null(u_55));
                        t = v_2(t);
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
                    c_55 = ATgetArgument(z_54, 1);
                    {
                      ATerm c_56 = NULL,e_56 = NULL;
                      ATerm k_18;
                      k_18 = t;
                      {
                        ATerm a_56 = NULL,b_56 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_17, not_null(f_55));
                        {
                          ATerm x_2 (ATerm t)
                          {
                            t = term_a_18;
                            return(t);
                          }
                          t = rewrite_1(t, x_2);
                          {
                            a_56 = t;
                            b_54 :
                            if(match_cons(a_56, sym_Defined_1))
                              {
                                b_56 = ATgetArgument(a_56, 0);
                                c_54 :
                                if(!(match_string(b_56, "x_1")))
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
                          ATerm d_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_55), not_null(f_55));
                          {
                            t = v_2(t);
                            {
                              d_56 = t;
                              if(((c_56 != NULL) && (c_56 != d_56)))
                                _fail(d_56);
                              else
                                c_56 = d_56;
                            }
                          }
                        }
                        t = l_18;
                        {
                          ATerm f_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(f_55));
                          {
                            t = v_2(t);
                            {
                              f_56 = t;
                              if(((e_56 != NULL) && (e_56 != f_56)))
                                _fail(f_56);
                              else
                                e_56 = f_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_56), not_null(e_56));
                            t = v_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(z_54, sym_Scope_2))
                      {
                        a_55 = ATgetArgument(z_54, 0);
                        c_55 = ATgetArgument(z_54, 1);
                        {
                          ATerm j_56 = NULL;
                          ATerm k_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(f_55));
                          {
                            t = v_2(t);
                            {
                              k_56 = t;
                              if(((j_56 != NULL) && (j_56 != k_56)))
                                _fail(k_56);
                              else
                                j_56 = k_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_55), not_null(j_56));
                            t = v_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(z_54, sym_Seq_2))
                          {
                            a_55 = ATgetArgument(z_54, 0);
                            c_55 = ATgetArgument(z_54, 1);
                            {
                              ATerm t_56 = NULL;
                              ATerm u_56 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(f_55));
                              {
                                t = v_2(t);
                                {
                                  u_56 = t;
                                  if(((t_56 != NULL) && (t_56 != u_56)))
                                    _fail(u_56);
                                  else
                                    t_56 = u_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_55), not_null(t_56));
                                t = v_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(z_54, sym_Build_1))
                              {
                                a_55 = ATgetArgument(z_54, 0);
                                {
                                  ATerm c_57 = NULL;
                                  ATerm d_57 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(f_55), not_null(a_55));
                                  {
                                    t = v_2(t);
                                    {
                                      d_57 = t;
                                      if(((c_57 != NULL) && (c_57 != d_57)))
                                        _fail(d_57);
                                      else
                                        c_57 = d_57;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_57));
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
            if(match_cons(y_54, sym_LChoice_2))
              {
                z_54 = ATgetArgument(y_54, 0);
                f_55 = ATgetArgument(y_54, 1);
                q_54 :
                if(match_cons(z_54, sym_LChoice_2))
                  {
                    a_55 = ATgetArgument(z_54, 0);
                    c_55 = ATgetArgument(z_54, 1);
                    {
                      ATerm o_56 = NULL;
                      ATerm p_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_55), not_null(f_55));
                      {
                        t = v_2(t);
                        {
                          p_56 = t;
                          if(((o_56 != NULL) && (o_56 != p_56)))
                            _fail(p_56);
                          else
                            o_56 = p_56;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_55), not_null(o_56));
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
                if(match_cons(y_54, sym_Choice_2))
                  {
                    z_54 = ATgetArgument(y_54, 0);
                    f_55 = ATgetArgument(y_54, 1);
                    r_54 :
                    if(match_cons(z_54, sym_Choice_2))
                      {
                        a_55 = ATgetArgument(z_54, 0);
                        c_55 = ATgetArgument(z_54, 1);
                        {
                          ATerm y_56 = NULL;
                          ATerm z_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_55), not_null(f_55));
                          {
                            t = v_2(t);
                            {
                              z_56 = t;
                              if(((y_56 != NULL) && (y_56 != z_56)))
                                _fail(z_56);
                              else
                                y_56 = z_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_55), not_null(y_56));
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
                    if(match_cons(y_54, sym_App_2))
                      {
                        z_54 = ATgetArgument(y_54, 0);
                        f_55 = ATgetArgument(y_54, 1);
                        s_54 :
                        if(match_cons(z_54, sym_Call_2))
                          {
                            a_55 = ATgetArgument(z_54, 0);
                            c_55 = ATgetArgument(z_54, 1);
                            t_54 :
                            if(match_cons(a_55, sym_SVar_1))
                              {
                                b_55 = ATgetArgument(a_55, 0);
                                u_54 :
                                if(match_string(b_55, "bottomup_1"))
                                  {
                                    v_54 :
                                    if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
                                      {
                                        d_55 = ATgetFirst((ATermList) c_55);
                                        e_55 = (ATerm) ATgetNext((ATermList) c_55);
                                        w_54 :
                                        if(((ATgetType(e_55) == AT_LIST) && ATisEmpty(e_55)))
                                          {
                                            x_54 :
                                            if(match_cons(f_55, sym_Op_2))
                                              {
                                                g_55 = ATgetArgument(f_55, 0);
                                                h_55 = ATgetArgument(f_55, 1);
                                                {
                                                  ATerm h_57 = NULL,l_57 = NULL;
                                                  ATerm m_18;
                                                  m_18 = t;
                                                  {
                                                    ATerm k_57 = NULL;
                                                    t = not_null(h_55);
                                                    {
                                                      ATerm y_2 (ATerm t)
                                                      {
                                                        ATerm i_57 = NULL;
                                                        i_57 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, not_null(d_55))), not_null(i_57));
                                                        return(t);
                                                      }
                                                      t = map_1(t, y_2);
                                                      {
                                                        k_57 = t;
                                                        if(((h_57 != NULL) && (h_57 != k_57)))
                                                          _fail(k_57);
                                                        else
                                                          h_57 = k_57;
                                                      }
                                                    }
                                                  }
                                                  t = m_18;
                                                  {
                                                    ATerm m_57 = NULL,o_57 = NULL;
                                                    ATerm n_57 = NULL;
                                                    t = not_null(h_57);
                                                    {
                                                      t = bottomup_1(t, v_2);
                                                      {
                                                        n_57 = t;
                                                        if(((m_57 != NULL) && (m_57 != n_57)))
                                                          _fail(n_57);
                                                        else
                                                          m_57 = n_57;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_55), not_null(m_57));
                                                      {
                                                        t = v_2(t);
                                                        {
                                                          o_57 = t;
                                                          if(((l_57 != NULL) && (l_57 != o_57)))
                                                            _fail(o_57);
                                                          else
                                                            l_57 = o_57;
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_55), not_null(l_57));
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
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
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
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,s_58 = NULL,t_58 = NULL;
  o_58 = t;
  m_58 :
  if(match_cons(o_58, sym_Seq_2))
    {
      p_58 = ATgetArgument(o_58, 0);
      q_58 = ATgetArgument(o_58, 1);
      n_58 :
      if(match_cons(q_58, sym_Scope_2))
        {
          s_58 = ATgetArgument(q_58, 0);
          t_58 = ATgetArgument(q_58, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_58), not_null(t_58)));
        }
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
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  b_59 = t;
  z_58 :
  if(match_cons(b_59, sym_Seq_2))
    {
      c_59 = ATgetArgument(b_59, 0);
      d_59 = ATgetArgument(b_59, 1);
      a_59 :
      if(match_cons(d_59, sym_LChoice_2))
        {
          e_59 = ATgetArgument(d_59, 0);
          f_59 = ATgetArgument(d_59, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(c_59), not_null(e_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_59), not_null(f_59)));
        }
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
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  n_59 = t;
  l_59 :
  if(match_cons(n_59, sym_Seq_2))
    {
      o_59 = ATgetArgument(n_59, 0);
      p_59 = ATgetArgument(n_59, 1);
      m_59 :
      if(match_cons(p_59, sym_Choice_2))
        {
          q_59 = ATgetArgument(p_59, 0);
          r_59 = ATgetArgument(p_59, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(o_59), not_null(q_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_59), not_null(r_59)));
        }
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
      t = innermost_1(t, h_115);
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
  ATerm c_3 (ATerm t)
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
        g_60 = t;
        e_60 :
        if(match_cons(g_60, sym_Seq_2))
          {
            h_60 = ATgetArgument(g_60, 0);
            i_60 = ATgetArgument(g_60, 1);
            f_60 :
            if(match_cons(i_60, sym_Choice_2))
              {
                j_60 = ATgetArgument(i_60, 0);
                k_60 = ATgetArgument(i_60, 1);
                {
                  ATerm o_60 = NULL,q_60 = NULL;
                  ATerm p_18;
                  p_18 = t;
                  {
                    ATerm p_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), not_null(j_60));
                    {
                      t = c_3(t);
                      {
                        p_60 = t;
                        if(((o_60 != NULL) && (o_60 != p_60)))
                          _fail(p_60);
                        else
                          o_60 = p_60;
                      }
                    }
                  }
                  t = p_18;
                  {
                    ATerm r_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), not_null(k_60));
                    {
                      t = c_3(t);
                      {
                        r_60 = t;
                        if(((q_60 != NULL) && (q_60 != r_60)))
                          _fail(r_60);
                        else
                          q_60 = r_60;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_60), not_null(q_60));
                      t = c_3(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(i_60, sym_LChoice_2))
                  {
                    j_60 = ATgetArgument(i_60, 0);
                    k_60 = ATgetArgument(i_60, 1);
                    {
                      ATerm v_60 = NULL,x_60 = NULL;
                      ATerm q_18;
                      q_18 = t;
                      {
                        ATerm w_60 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), not_null(j_60));
                        {
                          t = c_3(t);
                          {
                            w_60 = t;
                            if(((v_60 != NULL) && (v_60 != w_60)))
                              _fail(w_60);
                            else
                              v_60 = w_60;
                          }
                        }
                      }
                      t = q_18;
                      {
                        ATerm y_60 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), not_null(k_60));
                        {
                          t = c_3(t);
                          {
                            y_60 = t;
                            if(((x_60 != NULL) && (x_60 != y_60)))
                              _fail(y_60);
                            else
                              x_60 = y_60;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_60), not_null(x_60));
                          t = c_3(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(i_60, sym_Scope_2))
                      {
                        j_60 = ATgetArgument(i_60, 0);
                        k_60 = ATgetArgument(i_60, 1);
                        {
                          ATerm c_61 = NULL;
                          ATerm d_61 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), not_null(k_60));
                          {
                            t = c_3(t);
                            {
                              d_61 = t;
                              if(((c_61 != NULL) && (c_61 != d_61)))
                                _fail(d_61);
                              else
                                c_61 = d_61;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_60), not_null(c_61));
                            t = c_3(t);
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
  return(t);
}
ATerm Build_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm s_61 = NULL,t_61 = NULL;
  s_61 = t;
  r_61 :
  if(match_cons(s_61, sym_Build_1))
    {
      t_61 = ATgetArgument(s_61, 0);
      {
        ATerm w_61 = NULL,y_61 = NULL;
        ATerm x_61 = NULL;
        t = SSLgetAnnotations(not_null(s_61));
        {
          x_61 = t;
          if(((w_61 != NULL) && (w_61 != x_61)))
            _fail(x_61);
          else
            w_61 = x_61;
        }
        {
          t = not_null(t_61);
          {
            ATerm a_62 = NULL;
            t = s_84(t);
            {
              y_61 = t;
              {
                ATerm b_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(y_61)), not_null(w_61));
                {
                  b_62 = t;
                  if(((a_62 != NULL) && (a_62 != b_62)))
                    _fail(b_62);
                  else
                    a_62 = b_62;
                }
                t = not_null(a_62);
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
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  m_62 = t;
  l_62 :
  if(match_cons(m_62, sym_Seq_2))
    {
      n_62 = ATgetArgument(m_62, 0);
      o_62 = ATgetArgument(m_62, 1);
      {
        ATerm s_62 = NULL,u_62 = NULL;
        ATerm t_62 = NULL;
        t = SSLgetAnnotations(not_null(m_62));
        {
          t_62 = t;
          if(((s_62 != NULL) && (s_62 != t_62)))
            _fail(t_62);
          else
            s_62 = t_62;
        }
        {
          t = not_null(n_62);
          {
            ATerm w_62 = NULL;
            t = i_85(t);
            {
              u_62 = t;
              {
                t = not_null(o_62);
                {
                  ATerm y_62 = NULL;
                  t = j_85(t);
                  {
                    w_62 = t;
                    {
                      ATerm z_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(u_62), not_null(w_62)), not_null(s_62));
                      {
                        z_62 = t;
                        if(((y_62 != NULL) && (y_62 != z_62)))
                          _fail(z_62);
                        else
                          y_62 = z_62;
                      }
                      t = not_null(y_62);
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
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym_Match_1))
    {
      l_63 = ATgetArgument(k_63, 0);
      {
        ATerm o_63 = NULL,q_63 = NULL;
        ATerm p_63 = NULL;
        t = SSLgetAnnotations(not_null(k_63));
        {
          p_63 = t;
          if(((o_63 != NULL) && (o_63 != p_63)))
            _fail(p_63);
          else
            o_63 = p_63;
        }
        {
          t = not_null(l_63);
          {
            ATerm s_63 = NULL;
            t = r_84(t);
            {
              q_63 = t;
              {
                ATerm t_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(q_63)), not_null(o_63));
                {
                  t_63 = t;
                  if(((s_63 != NULL) && (s_63 != t_63)))
                    _fail(t_63);
                  else
                    s_63 = t_63;
                }
                t = not_null(s_63);
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
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  d_64 :
  if(match_cons(e_64, sym_LChoice_2))
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
            t = m_85(t);
            {
              m_64 = t;
              {
                t = not_null(g_64);
                {
                  ATerm q_64 = NULL;
                  t = n_85(t);
                  {
                    o_64 = t;
                    {
                      ATerm r_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(m_64), not_null(o_64)), not_null(k_64));
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
ATerm Choice_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  c_65 :
  if(match_cons(d_65, sym_Choice_2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      {
        ATerm j_65 = NULL,l_65 = NULL;
        ATerm k_65 = NULL;
        t = SSLgetAnnotations(not_null(d_65));
        {
          k_65 = t;
          if(((j_65 != NULL) && (j_65 != k_65)))
            _fail(k_65);
          else
            j_65 = k_65;
        }
        {
          t = not_null(e_65);
          {
            ATerm n_65 = NULL;
            t = k_85(t);
            {
              l_65 = t;
              {
                t = not_null(f_65);
                {
                  ATerm p_65 = NULL;
                  t = l_85(t);
                  {
                    n_65 = t;
                    {
                      ATerm q_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_65), not_null(n_65)), not_null(j_65));
                      {
                        q_65 = t;
                        if(((p_65 != NULL) && (p_65 != q_65)))
                          _fail(q_65);
                        else
                          p_65 = q_65;
                      }
                      t = not_null(p_65);
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
  ATerm d_3 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm t_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = t_18;
              {
                ATerm w_18 = t;
                int x_18 = stack_ptr;
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
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, f_3, g_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, e_3);
                    ;
                    LocalPopChoice(x_18);
                  }
                else
                  {
                    t = w_18;
                    {
                      ATerm b_19 = t;
                      int c_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_3 (ATerm t)
                          {
                            ATerm i_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm j_3 (ATerm t)
                            {
                              ATerm k_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, k_3);
                              return(t);
                            }
                            t = Seq_2(t, i_3, j_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, h_3);
                          ;
                          LocalPopChoice(c_19);
                        }
                      else
                        {
                          t = b_19;
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
  t = try_1(t, d_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  {
    ATerm e_19;
    e_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_17, (ATerm) ATmakeAppl(sym_Defined_2, term_h_19, not_null(y_65)));
      {
        ATerm l_3 (ATerm t)
        {
          t = term_n_17;
          return(t);
        }
        t = assert_1(t, l_3);
      }
    }
    t = e_19;
    {
      ATerm i_19;
      i_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_Defined_2, term_j_19, not_null(y_65)));
        {
          ATerm m_3 (ATerm t)
          {
            t = term_e_15;
            return(t);
          }
          t = assert_1(t, m_3);
        }
      }
      t = i_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  {
    ATerm k_19;
    k_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_18, not_null(c_66)), term_m_19);
      {
        ATerm n_3 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = assert_1(t, n_3);
      }
    }
    t = k_19;
    {
      ATerm n_19;
      n_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_17, not_null(c_66)), term_p_19);
        {
          ATerm o_3 (ATerm t)
          {
            t = term_a_18;
            return(t);
          }
          t = assert_1(t, o_3);
        }
      }
      t = n_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  r_66 = t;
  m_66 :
  if(match_cons(r_66, sym_Call_2))
    {
      s_66 = ATgetArgument(r_66, 0);
      u_66 = ATgetArgument(r_66, 1);
      n_66 :
      if(match_cons(s_66, sym_SVar_1))
        {
          t_66 = ATgetArgument(s_66, 0);
          o_66 :
          if(match_string(t_66, "innermost_1"))
            {
              p_66 :
              if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
                {
                  v_66 = ATgetFirst((ATermList) u_66);
                  w_66 = (ATerm) ATgetNext((ATermList) u_66);
                  q_66 :
                  if(((ATgetType(w_66) == AT_LIST) && ATisEmpty(w_66)))
                    {
                      {
                        ATerm y_66 = NULL,a_67 = NULL;
                        ATerm p_3 (ATerm t)
                        {
                          ATerm q_3 (ATerm t)
                          {
                            t = term_q_19;
                            return(t);
                          }
                          t = say_1(t, q_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, p_3);
                        {
                          ATerm r_19;
                          r_19 = t;
                          {
                            ATerm z_66 = NULL;
                            t = new_0(t);
                            {
                              z_66 = t;
                              if(((y_66 != NULL) && (y_66 != z_66)))
                                _fail(z_66);
                              else
                                y_66 = z_66;
                            }
                          }
                          t = r_19;
                          {
                            ATerm w_19;
                            w_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_66)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = w_19;
                            {
                              ATerm x_19;
                              x_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_66)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = x_19;
                              {
                                ATerm b_67 = NULL;
                                t = not_null(v_66);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    b_67 = t;
                                    if(((a_67 != NULL) && (a_67 != b_67)))
                                      _fail(b_67);
                                    else
                                      a_67 = b_67;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_66), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_14, not_null(a_67)), (ATerm) ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_66)), (ATerm) ATempty)))), term_t_11))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm r_3 (ATerm t)
                                        {
                                          ATerm y_19 = t;
                                          int c_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              ;
                                              LocalPopChoice(c_20);
                                            }
                                          else
                                            {
                                              t = y_19;
                                              {
                                                ATerm e_20 = t;
                                                int h_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = BottomupToVarIsId_Cond_0(t);
                                                    ;
                                                    LocalPopChoice(h_20);
                                                  }
                                                else
                                                  {
                                                    t = e_20;
                                                    t = UnMark_0(t);
                                                  }
                                              }
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, r_3);
                                        {
                                          ATerm i_20 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm s_3 (ATerm t)
                                              {
                                                ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
                                                c_67 = t;
                                                i_66 :
                                                if(match_cons(c_67, sym_Call_2))
                                                  {
                                                    d_67 = ATgetArgument(c_67, 0);
                                                    f_67 = ATgetArgument(c_67, 1);
                                                    j_66 :
                                                    if(match_cons(d_67, sym_SVar_1))
                                                      {
                                                        e_67 = ATgetArgument(d_67, 0);
                                                        k_66 :
                                                        if(match_string(e_67, "mark"))
                                                          {
                                                            l_66 :
                                                            if(((ATgetType(f_67) == AT_LIST) && ATisEmpty(f_67)))
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
                                              t = oncetd_1(t, s_3);
                                              {
                                                ATerm t_3 (ATerm t)
                                                {
                                                  t = term_j_20;
                                                  return(t);
                                                }
                                                t = say_1(t, t_3);
                                              }
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = i_20;
                                            }
                                          {
                                            t = desugar_0(t);
                                            {
                                              ATerm u_3 (ATerm t)
                                              {
                                                ATerm v_3 (ATerm t)
                                                {
                                                  t = term_k_20;
                                                  return(t);
                                                }
                                                t = say_1(t, v_3);
                                                return(t);
                                              }
                                              t = if_verbose1_1(t, u_3);
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
  ATerm j_67 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = _all(t, j_67);
      }
    return(t);
  }
  t = j_67(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm c_68 = NULL;
  ATerm n_20;
  n_20 = t;
  {
    ATerm d_68 = NULL;
    t = new_0(t);
    {
      d_68 = t;
      {
        if(((c_68 != NULL) && (c_68 != d_68)))
          _fail(d_68);
        else
          c_68 = d_68;
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_68)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = term_q_20;
                    return(t);
                  }
                  t = say_1(t, x_3);
                  return(t);
                }
                t = if_verbose2_1(t, w_3);
                _fail(t);
              }
            }
          {
            ATerm r_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
                e_68 = t;
                p_67 :
                if(match_cons(e_68, sym_Seq_2))
                  {
                    f_68 = ATgetArgument(e_68, 0);
                    p_68 = ATgetArgument(e_68, 1);
                    q_67 :
                    if(match_cons(f_68, sym_All_1))
                      {
                        g_68 = ATgetArgument(f_68, 0);
                        r_67 :
                        if(match_cons(g_68, sym_Call_2))
                          {
                            h_68 = ATgetArgument(g_68, 0);
                            j_68 = ATgetArgument(g_68, 1);
                            s_67 :
                            if(match_cons(h_68, sym_SVar_1))
                              {
                                i_68 = ATgetArgument(h_68, 0);
                                t_67 :
                                if(match_string(i_68, "bottomup_1"))
                                  {
                                    u_67 :
                                    if(((ATgetType(j_68) == AT_LIST) && !(ATisEmpty(j_68))))
                                      {
                                        k_68 = ATgetFirst((ATermList) j_68);
                                        o_68 = (ATerm) ATgetNext((ATermList) j_68);
                                        v_67 :
                                        if(match_cons(k_68, sym_Call_2))
                                          {
                                            l_68 = ATgetArgument(k_68, 0);
                                            n_68 = ATgetArgument(k_68, 1);
                                            w_67 :
                                            if(match_cons(l_68, sym_SVar_1))
                                              {
                                                m_68 = ATgetArgument(l_68, 0);
                                                x_67 :
                                                if(((ATgetType(n_68) == AT_LIST) && ATisEmpty(n_68)))
                                                  {
                                                    y_67 :
                                                    if(((ATgetType(o_68) == AT_LIST) && ATisEmpty(o_68)))
                                                      {
                                                        z_67 :
                                                        if(match_cons(p_68, sym_Call_2))
                                                          {
                                                            q_68 = ATgetArgument(p_68, 0);
                                                            s_68 = ATgetArgument(p_68, 1);
                                                            a_68 :
                                                            if(match_cons(q_68, sym_SVar_1))
                                                              {
                                                                r_68 = ATgetArgument(q_68, 0);
                                                                b_68 :
                                                                if(((ATgetType(s_68) == AT_LIST) && ATisEmpty(s_68)))
                                                                  {
                                                                    {
                                                                      if(((c_68 != NULL) && (c_68 != m_68)))
                                                                        _fail(m_68);
                                                                      else
                                                                        c_68 = m_68;
                                                                      if(((c_68 != NULL) && (c_68 != r_68)))
                                                                        _fail(r_68);
                                                                      else
                                                                        c_68 = r_68;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(u_20);
              }
            else
              {
                t = r_20;
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm z_3 (ATerm t)
                    {
                      t = term_x_20;
                      return(t);
                    }
                    t = debug_1(t, z_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, y_3);
                  _fail(t);
                }
              }
            {
              ATerm a_4 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  t = term_y_20;
                  return(t);
                }
                t = say_1(t, b_4);
                return(t);
              }
              t = if_verbose2_1(t, a_4);
            }
          }
        }
      }
    }
  }
  t = n_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm v_72 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm w_72 = NULL;
    t = new_0(t);
    {
      w_72 = t;
      {
        if(((v_72 != NULL) && (v_72 != w_72)))
          _fail(w_72);
        else
          v_72 = w_72;
        {
          ATerm d_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_72)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = d_21;
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm d_4 (ATerm t)
                  {
                    t = term_k_21;
                    return(t);
                  }
                  t = say_1(t, d_4);
                  return(t);
                }
                t = if_verbose2_1(t, c_4);
                _fail(t);
              }
            }
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
                j_74 = t;
                z_68 :
                if(match_cons(j_74, sym_Call_2))
                  {
                    k_74 = ATgetArgument(j_74, 0);
                    m_74 = ATgetArgument(j_74, 1);
                    a_69 :
                    if(match_cons(k_74, sym_SVar_1))
                      {
                        l_74 = ATgetArgument(k_74, 0);
                        b_69 :
                        if(match_string(l_74, "bottomup_1"))
                          {
                            c_69 :
                            if(((ATgetType(m_74) == AT_LIST) && !(ATisEmpty(m_74))))
                              {
                                n_74 = ATgetFirst((ATermList) m_74);
                                x_78 = (ATerm) ATgetNext((ATermList) m_74);
                                d_69 :
                                if(match_cons(n_74, sym_Call_2))
                                  {
                                    o_74 = ATgetArgument(n_74, 0);
                                    p_74 = ATgetArgument(n_74, 1);
                                    e_69 :
                                    if(match_cons(o_74, sym_SVar_1))
                                      {
                                        x_72 = ATgetArgument(o_74, 0);
                                        f_69 :
                                        if(match_string(x_72, "try_1"))
                                          {
                                            n_69 :
                                            if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
                                              {
                                                q_74 = ATgetFirst((ATermList) p_74);
                                                w_78 = (ATerm) ATgetNext((ATermList) p_74);
                                                o_69 :
                                                if(match_cons(q_74, sym_Seq_2))
                                                  {
                                                    o_75 = ATgetArgument(q_74, 0);
                                                    s_75 = ATgetArgument(q_74, 1);
                                                    p_69 :
                                                    if(match_cons(o_75, sym_Call_2))
                                                      {
                                                        p_75 = ATgetArgument(o_75, 0);
                                                        r_75 = ATgetArgument(o_75, 1);
                                                        q_69 :
                                                        if(match_cons(p_75, sym_SVar_1))
                                                          {
                                                            q_75 = ATgetArgument(p_75, 0);
                                                            t_69 :
                                                            if(((ATgetType(r_75) == AT_LIST) && ATisEmpty(r_75)))
                                                              {
                                                                u_69 :
                                                                if(match_cons(s_75, sym_Call_2))
                                                                  {
                                                                    t_75 = ATgetArgument(s_75, 0);
                                                                    v_75 = ATgetArgument(s_75, 1);
                                                                    v_69 :
                                                                    if(match_cons(t_75, sym_SVar_1))
                                                                      {
                                                                        u_75 = ATgetArgument(t_75, 0);
                                                                        w_69 :
                                                                        if(match_string(u_75, "innermost_1"))
                                                                          {
                                                                            x_69 :
                                                                            if(((ATgetType(v_75) == AT_LIST) && !(ATisEmpty(v_75))))
                                                                              {
                                                                                w_75 = ATgetFirst((ATermList) v_75);
                                                                                v_78 = (ATerm) ATgetNext((ATermList) v_75);
                                                                                y_69 :
                                                                                if(match_cons(w_75, sym_Call_2))
                                                                                  {
                                                                                    x_75 = ATgetArgument(w_75, 0);
                                                                                    u_78 = ATgetArgument(w_75, 1);
                                                                                    z_69 :
                                                                                    if(match_cons(x_75, sym_SVar_1))
                                                                                      {
                                                                                        t_78 = ATgetArgument(x_75, 0);
                                                                                        k_70 :
                                                                                        if(((ATgetType(u_78) == AT_LIST) && ATisEmpty(u_78)))
                                                                                          {
                                                                                            l_70 :
                                                                                            if(((ATgetType(v_78) == AT_LIST) && ATisEmpty(v_78)))
                                                                                              {
                                                                                                m_70 :
                                                                                                if(((ATgetType(w_78) == AT_LIST) && ATisEmpty(w_78)))
                                                                                                  {
                                                                                                    n_70 :
                                                                                                    if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
                                                                                                      {
                                                                                                        {
                                                                                                          if(((v_72 != NULL) && (v_72 != q_75)))
                                                                                                            _fail(q_75);
                                                                                                          else
                                                                                                            v_72 = q_75;
                                                                                                          if(((v_72 != NULL) && (v_72 != t_78)))
                                                                                                            _fail(t_78);
                                                                                                          else
                                                                                                            v_72 = t_78;
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(n_74, sym_Rec_2))
                                      {
                                        o_74 = ATgetArgument(n_74, 0);
                                        p_74 = ATgetArgument(n_74, 1);
                                        o_70 :
                                        if(match_cons(p_74, sym_Call_2))
                                          {
                                            q_74 = ATgetArgument(p_74, 0);
                                            w_78 = ATgetArgument(p_74, 1);
                                            p_70 :
                                            if(match_cons(q_74, sym_SVar_1))
                                              {
                                                o_75 = ATgetArgument(q_74, 0);
                                                q_70 :
                                                if(match_string(o_75, "try_1"))
                                                  {
                                                    r_70 :
                                                    if(((ATgetType(w_78) == AT_LIST) && !(ATisEmpty(w_78))))
                                                      {
                                                        y_72 = ATgetFirst((ATermList) w_78);
                                                        i_74 = (ATerm) ATgetNext((ATermList) w_78);
                                                        y_70 :
                                                        if(match_cons(y_72, sym_Seq_2))
                                                          {
                                                            z_72 = ATgetArgument(y_72, 0);
                                                            o_73 = ATgetArgument(y_72, 1);
                                                            z_70 :
                                                            if(match_cons(z_72, sym_Call_2))
                                                              {
                                                                a_73 = ATgetArgument(z_72, 0);
                                                                m_73 = ATgetArgument(z_72, 1);
                                                                o_71 :
                                                                if(match_cons(a_73, sym_SVar_1))
                                                                  {
                                                                    l_73 = ATgetArgument(a_73, 0);
                                                                    u_71 :
                                                                    if(((ATgetType(m_73) == AT_LIST) && ATisEmpty(m_73)))
                                                                      {
                                                                        x_71 :
                                                                        if(match_cons(o_73, sym_Call_2))
                                                                          {
                                                                            a_74 = ATgetArgument(o_73, 0);
                                                                            c_74 = ATgetArgument(o_73, 1);
                                                                            y_71 :
                                                                            if(match_cons(a_74, sym_SVar_1))
                                                                              {
                                                                                b_74 = ATgetArgument(a_74, 0);
                                                                                z_71 :
                                                                                if(match_string(b_74, "bottomup_1"))
                                                                                  {
                                                                                    a_72 :
                                                                                    if(((ATgetType(c_74) == AT_LIST) && !(ATisEmpty(c_74))))
                                                                                      {
                                                                                        d_74 = ATgetFirst((ATermList) c_74);
                                                                                        h_74 = (ATerm) ATgetNext((ATermList) c_74);
                                                                                        b_72 :
                                                                                        if(match_cons(d_74, sym_Call_2))
                                                                                          {
                                                                                            e_74 = ATgetArgument(d_74, 0);
                                                                                            g_74 = ATgetArgument(d_74, 1);
                                                                                            c_72 :
                                                                                            if(match_cons(e_74, sym_SVar_1))
                                                                                              {
                                                                                                f_74 = ATgetArgument(e_74, 0);
                                                                                                d_72 :
                                                                                                if(((ATgetType(g_74) == AT_LIST) && ATisEmpty(g_74)))
                                                                                                  {
                                                                                                    e_72 :
                                                                                                    if(((ATgetType(h_74) == AT_LIST) && ATisEmpty(h_74)))
                                                                                                      {
                                                                                                        f_72 :
                                                                                                        if(((ATgetType(i_74) == AT_LIST) && ATisEmpty(i_74)))
                                                                                                          {
                                                                                                            g_72 :
                                                                                                            if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
                                                                                                              {
                                                                                                                {
                                                                                                                  if(((v_72 != NULL) && (v_72 != l_73)))
                                                                                                                    _fail(l_73);
                                                                                                                  else
                                                                                                                    v_72 = l_73;
                                                                                                                  if(((o_74 != NULL) && (o_74 != f_74)))
                                                                                                                    _fail(f_74);
                                                                                                                  else
                                                                                                                    o_74 = f_74;
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(p_74, sym_LChoice_2))
                                              {
                                                q_74 = ATgetArgument(p_74, 0);
                                                w_78 = ATgetArgument(p_74, 1);
                                                h_72 :
                                                if(match_cons(q_74, sym_Seq_2))
                                                  {
                                                    o_75 = ATgetArgument(q_74, 0);
                                                    s_75 = ATgetArgument(q_74, 1);
                                                    i_72 :
                                                    if(match_cons(o_75, sym_Call_2))
                                                      {
                                                        p_75 = ATgetArgument(o_75, 0);
                                                        r_75 = ATgetArgument(o_75, 1);
                                                        j_72 :
                                                        if(match_cons(p_75, sym_SVar_1))
                                                          {
                                                            q_75 = ATgetArgument(p_75, 0);
                                                            k_72 :
                                                            if(((ATgetType(r_75) == AT_LIST) && ATisEmpty(r_75)))
                                                              {
                                                                l_72 :
                                                                if(match_cons(s_75, sym_Call_2))
                                                                  {
                                                                    t_75 = ATgetArgument(s_75, 0);
                                                                    v_75 = ATgetArgument(s_75, 1);
                                                                    m_72 :
                                                                    if(match_cons(t_75, sym_SVar_1))
                                                                      {
                                                                        u_75 = ATgetArgument(t_75, 0);
                                                                        n_72 :
                                                                        if(match_string(u_75, "bottomup_1"))
                                                                          {
                                                                            o_72 :
                                                                            if(((ATgetType(v_75) == AT_LIST) && !(ATisEmpty(v_75))))
                                                                              {
                                                                                w_75 = ATgetFirst((ATermList) v_75);
                                                                                v_78 = (ATerm) ATgetNext((ATermList) v_75);
                                                                                p_72 :
                                                                                if(match_cons(w_75, sym_Call_2))
                                                                                  {
                                                                                    x_75 = ATgetArgument(w_75, 0);
                                                                                    u_78 = ATgetArgument(w_75, 1);
                                                                                    q_72 :
                                                                                    if(match_cons(x_75, sym_SVar_1))
                                                                                      {
                                                                                        t_78 = ATgetArgument(x_75, 0);
                                                                                        r_72 :
                                                                                        if(((ATgetType(u_78) == AT_LIST) && ATisEmpty(u_78)))
                                                                                          {
                                                                                            s_72 :
                                                                                            if(((ATgetType(v_78) == AT_LIST) && ATisEmpty(v_78)))
                                                                                              {
                                                                                                t_72 :
                                                                                                if(match_cons(w_78, sym_Id_0))
                                                                                                  {
                                                                                                    u_72 :
                                                                                                    if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
                                                                                                      {
                                                                                                        {
                                                                                                          if(((v_72 != NULL) && (v_72 != q_75)))
                                                                                                            _fail(q_75);
                                                                                                          else
                                                                                                            v_72 = q_75;
                                                                                                          if(((o_74 != NULL) && (o_74 != t_78)))
                                                                                                            _fail(t_78);
                                                                                                          else
                                                                                                            o_74 = t_78;
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
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
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_n_21;
                      return(t);
                    }
                    t = debug_1(t, f_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, e_4);
                  _fail(t);
                }
              }
            {
              ATerm g_4 (ATerm t)
              {
                ATerm h_4 (ATerm t)
                {
                  t = term_o_21;
                  return(t);
                }
                t = say_1(t, h_4);
                return(t);
              }
              t = if_verbose2_1(t, g_4);
            }
          }
        }
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
  h_80 = t;
  e_80 :
  if(match_cons(h_80, sym_Call_2))
    {
      i_80 = ATgetArgument(h_80, 0);
      k_80 = ATgetArgument(h_80, 1);
      f_80 :
      if(match_cons(i_80, sym_SVar_1))
        {
          j_80 = ATgetArgument(i_80, 0);
          g_80 :
          if(((ATgetType(k_80) == AT_LIST) && ATisEmpty(k_80)))
            {
              t = not_null(j_80);
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm q_80 = NULL;
  ATerm s_80 = NULL,t_80 = NULL;
  q_80 = t;
  {
    ATerm u_80 = NULL;
    t = not_null(q_80);
    {
      ATerm v_80 = NULL;
      t = f_121(t);
      {
        u_80 = t;
        {
          if(((s_80 != NULL) && (s_80 != u_80)))
            _fail(u_80);
          else
            s_80 = u_80;
          {
            t = g_121(t);
            {
              v_80 = t;
              if(((t_80 != NULL) && (t_80 != v_80)))
                _fail(v_80);
              else
                t_80 = v_80;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), not_null(t_80));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
  d_81 = t;
  c_81 :
  if(match_cons(d_81, sym__2))
    {
      e_81 = ATgetArgument(d_81, 0);
      f_81 = ATgetArgument(d_81, 1);
      {
        ATerm i_81 = NULL;
        if(((i_81 != NULL) && (i_81 != f_81)))
          _fail(f_81);
        else
          i_81 = f_81;
      }
    }
  else
    {
      if(match_cons(d_81, sym__3))
        {
          e_81 = ATgetArgument(d_81, 0);
          f_81 = ATgetArgument(d_81, 1);
          g_81 = ATgetArgument(d_81, 2);
          {
            ATerm o_81 = NULL;
            ATerm p_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_81), not_null(f_81));
            {
              t = zip_1(t, _id);
              {
                p_81 = t;
                if(((o_81 != NULL) && (o_81 != p_81)))
                  _fail(p_81);
                else
                  o_81 = p_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_81), not_null(g_81));
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
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  t = subs_args_0(t);
  {
    x_81 = t;
    w_81 :
    if(match_cons(x_81, sym__2))
      {
        y_81 = ATgetArgument(x_81, 0);
        z_81 = ATgetArgument(x_81, 1);
        {
          t = not_null(z_81);
          {
            ATerm i_4 (ATerm t)
            {
              ATerm j_4 (ATerm t)
              {
                t = not_null(y_81);
                return(t);
              }
              t = SubsVar_2(t, q_120, j_4);
              t = r_120(t);
              return(t);
            }
            t = alltd_1(t, i_4);
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
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        t = split_2(t, _id, e_124);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
            l_83 = t;
            g_83 :
            if(match_cons(l_83, sym__2))
              {
                m_83 = ATgetArgument(l_83, 0);
                q_83 = ATgetArgument(l_83, 1);
                h_83 :
                if(match_cons(m_83, sym_SDef_3))
                  {
                    n_83 = ATgetArgument(m_83, 0);
                    o_83 = ATgetArgument(m_83, 1);
                    p_83 = ATgetArgument(m_83, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_83), not_null(o_83), not_null(p_83));
                  }
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
          t = zip_1(t, l_4);
        }
        return(t);
      }
      t = Let_2(t, k_4, _id);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              t = split_2(t, _id, e_124);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
                  u_83 = t;
                  j_83 :
                  if(match_cons(u_83, sym__2))
                    {
                      v_83 = ATgetArgument(u_83, 0);
                      y_83 = ATgetArgument(u_83, 1);
                      k_83 :
                      if(match_cons(v_83, sym_VarDec_2))
                        {
                          w_83 = ATgetArgument(v_83, 0);
                          x_83 = ATgetArgument(v_83, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_83), not_null(x_83));
                        }
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
                t = zip_1(t, n_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, m_4, _id);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm o_4 (ATerm t)
              {
                t = e_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, o_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm k_84 = NULL,p_84 = NULL,q_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym_Rec_2))
    {
      p_84 = ATgetArgument(k_84, 0);
      q_84 = ATgetArgument(k_84, 1);
      {
        ATerm y_84 = NULL,a_85 = NULL;
        ATerm z_84 = NULL;
        t = SSLgetAnnotations(not_null(k_84));
        {
          z_84 = t;
          if(((y_84 != NULL) && (y_84 != z_84)))
            _fail(z_84);
          else
            y_84 = z_84;
        }
        {
          t = not_null(p_84);
          {
            ATerm c_85 = NULL;
            t = x_85(t);
            {
              a_85 = t;
              {
                t = not_null(q_84);
                {
                  ATerm e_85 = NULL;
                  t = y_85(t);
                  {
                    c_85 = t;
                    {
                      ATerm f_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(a_85), not_null(c_85)), not_null(y_84));
                      {
                        f_85 = t;
                        if(((e_85 != NULL) && (e_85 != f_85)))
                          _fail(f_85);
                        else
                          e_85 = f_85;
                      }
                      t = not_null(e_85);
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
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL;
  g_86 = t;
  f_86 :
  if(match_cons(g_86, sym_SDef_3))
    {
      h_86 = ATgetArgument(g_86, 0);
      i_86 = ATgetArgument(g_86, 1);
      j_86 = ATgetArgument(g_86, 2);
      {
        ATerm o_86 = NULL,q_86 = NULL;
        ATerm p_86 = NULL;
        t = SSLgetAnnotations(not_null(g_86));
        {
          p_86 = t;
          if(((o_86 != NULL) && (o_86 != p_86)))
            _fail(p_86);
          else
            o_86 = p_86;
        }
        {
          t = not_null(h_86);
          {
            ATerm u_86 = NULL;
            t = b_86(t);
            {
              q_86 = t;
              {
                t = not_null(i_86);
                {
                  ATerm w_86 = NULL;
                  t = c_86(t);
                  {
                    u_86 = t;
                    {
                      t = not_null(j_86);
                      {
                        ATerm y_86 = NULL;
                        t = d_86(t);
                        {
                          w_86 = t;
                          {
                            ATerm z_86 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_86), not_null(u_86), not_null(w_86)), not_null(o_86));
                            {
                              z_86 = t;
                              if(((y_86 != NULL) && (y_86 != z_86)))
                                _fail(z_86);
                              else
                                y_86 = z_86;
                            }
                            t = not_null(y_86);
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
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL;
  p_87 = t;
  o_87 :
  if(match_cons(p_87, sym_Let_2))
    {
      q_87 = ATgetArgument(p_87, 0);
      r_87 = ATgetArgument(p_87, 1);
      {
        ATerm v_87 = NULL,x_87 = NULL;
        ATerm w_87 = NULL;
        t = SSLgetAnnotations(not_null(p_87));
        {
          w_87 = t;
          if(((v_87 != NULL) && (v_87 != w_87)))
            _fail(w_87);
          else
            v_87 = w_87;
        }
        {
          t = not_null(q_87);
          {
            ATerm z_87 = NULL;
            t = z_85(t);
            {
              x_87 = t;
              {
                t = not_null(r_87);
                {
                  ATerm c_88 = NULL;
                  t = a_86(t);
                  {
                    z_87 = t;
                    {
                      ATerm i_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(x_87), not_null(z_87)), not_null(v_87));
                      {
                        i_88 = t;
                        if(((c_88 != NULL) && (c_88 != i_88)))
                          _fail(i_88);
                        else
                          c_88 = i_88;
                      }
                      t = not_null(c_88);
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
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_124, f_124);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm z_21 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_124, h_124, f_124);
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = z_21;
            t = Rec_2(t, h_124, f_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
  u_88 = t;
  t_88 :
  if(match_cons(u_88, sym_Rec_2))
    {
      v_88 = ATgetArgument(u_88, 0);
      w_88 = ATgetArgument(u_88, 1);
      t = (ATerm) ATinsert(ATempty, not_null(v_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL;
  e_89 = t;
  d_89 :
  if(match_cons(e_89, sym_SDef_3))
    {
      f_89 = ATgetArgument(e_89, 0);
      g_89 = ATgetArgument(e_89, 1);
      h_89 = ATgetArgument(e_89, 2);
      {
        t = not_null(g_89);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
            l_89 = t;
            c_89 :
            if(match_cons(l_89, sym_VarDec_2))
              {
                m_89 = ATgetArgument(l_89, 0);
                n_89 = ATgetArgument(l_89, 1);
                t = not_null(m_89);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_4);
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
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym_Let_2))
    {
      w_89 = ATgetArgument(v_89, 0);
      x_89 = ATgetArgument(v_89, 1);
      {
        t = not_null(w_89);
        {
          ATerm q_4 (ATerm t)
          {
            ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL;
            a_90 = t;
            t_89 :
            if(match_cons(a_90, sym_SDef_3))
              {
                b_90 = ATgetArgument(a_90, 0);
                c_90 = ATgetArgument(a_90, 1);
                d_90 = ATgetArgument(a_90, 2);
                t = not_null(b_90);
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
ATerm SVar_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm o_90 = NULL,p_90 = NULL;
  o_90 = t;
  n_90 :
  if(match_cons(o_90, sym_SVar_1))
    {
      p_90 = ATgetArgument(o_90, 0);
      {
        ATerm s_90 = NULL,u_90 = NULL;
        ATerm t_90 = NULL;
        t = SSLgetAnnotations(not_null(o_90));
        {
          t_90 = t;
          if(((s_90 != NULL) && (s_90 != t_90)))
            _fail(t_90);
          else
            s_90 = t_90;
        }
        {
          t = not_null(p_90);
          {
            ATerm w_90 = NULL;
            t = w_85(t);
            {
              u_90 = t;
              {
                ATerm x_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_90)), not_null(s_90));
                {
                  x_90 = t;
                  if(((w_90 != NULL) && (w_90 != x_90)))
                    _fail(x_90);
                  else
                    w_90 = x_90;
                }
                t = not_null(w_90);
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
  ATerm r_4 (ATerm t)
  {
    ATerm f_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = f_22;
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, r_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_124 (ATerm))
{
  t = Scope_2(t, a_124, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm h_91 = NULL,i_91 = NULL;
  h_91 = t;
  g_91 :
  if(match_cons(h_91, sym_DynamicRules_1))
    {
      i_91 = ATgetArgument(h_91, 0);
      {
        ATerm l_91 = NULL,n_91 = NULL;
        ATerm m_91 = NULL;
        t = SSLgetAnnotations(not_null(h_91));
        {
          m_91 = t;
          if(((l_91 != NULL) && (l_91 != m_91)))
            _fail(m_91);
          else
            l_91 = m_91;
        }
        {
          t = not_null(i_91);
          {
            ATerm p_91 = NULL;
            t = b_88(t);
            {
              n_91 = t;
              {
                ATerm q_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(n_91)), not_null(l_91));
                {
                  q_91 = t;
                  if(((p_91 != NULL) && (p_91 != q_91)))
                    _fail(q_91);
                  else
                    p_91 = q_91;
                }
                t = not_null(p_91);
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
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
  b_92 = t;
  a_92 :
  if(match_cons(b_92, sym_Scope_2))
    {
      c_92 = ATgetArgument(b_92, 0);
      d_92 = ATgetArgument(b_92, 1);
      {
        ATerm h_92 = NULL,j_92 = NULL;
        ATerm i_92 = NULL;
        t = SSLgetAnnotations(not_null(b_92));
        {
          i_92 = t;
          if(((h_92 != NULL) && (h_92 != i_92)))
            _fail(i_92);
          else
            h_92 = i_92;
        }
        {
          t = not_null(c_92);
          {
            ATerm l_92 = NULL;
            t = v_84(t);
            {
              j_92 = t;
              {
                t = not_null(d_92);
                {
                  ATerm n_92 = NULL;
                  t = w_84(t);
                  {
                    l_92 = t;
                    {
                      ATerm o_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_92), not_null(l_92)), not_null(h_92));
                      {
                        o_92 = t;
                        if(((n_92 != NULL) && (n_92 != o_92)))
                          _fail(o_92);
                        else
                          n_92 = o_92;
                      }
                      t = not_null(n_92);
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
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_124, b_124);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = DynamicRules_1(t, b_124);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL;
  w_92 = t;
  v_92 :
  if(match_cons(w_92, sym_DynamicRules_1))
    {
      x_92 = ATgetArgument(w_92, 0);
      {
        t = not_null(x_92);
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
  ATerm c_93 = NULL,d_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym_Var_1))
    {
      d_93 = ATgetArgument(c_93, 0);
      t = (ATerm) ATinsert(ATempty, not_null(d_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym__2))
    {
      j_93 = ATgetArgument(i_93, 0);
      k_93 = ATgetArgument(i_93, 1);
      {
        t = not_null(j_93);
        {
          ATerm o_93 (ATerm t)
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_93);
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                {
                  ATerm p_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_4 (ATerm t)
                      {
                        t = not_null(k_93);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_106, s_4);
                      t = o_93(t);
                      ;
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = p_22;
                      t = Cons_2(t, _id, o_93);
                    }
                }
              }
            return(t);
          }
          t = o_93(t);
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
  ATerm t_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_107(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = t_22;
      {
        ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL;
        t_93 = t;
        s_93 :
        if(((ATgetType(t_93) == AT_LIST) && !(ATisEmpty(t_93))))
          {
            u_93 = ATgetFirst((ATermList) t_93);
            v_93 = (ATerm) ATgetNext((ATermList) t_93);
            {
              ATerm y_93 = NULL,a_94 = NULL;
              ATerm a_23;
              a_23 = t;
              {
                ATerm z_93 = NULL;
                t = not_null(u_93);
                {
                  t = l_107(t);
                  {
                    z_93 = t;
                    if(((y_93 != NULL) && (y_93 != z_93)))
                      _fail(z_93);
                    else
                      y_93 = z_93;
                  }
                }
              }
              t = a_23;
              {
                ATerm b_94 = NULL;
                t = not_null(v_93);
                {
                  t = foldr_3(t, j_107, k_107, l_107);
                  {
                    b_94 = t;
                    if(((a_94 != NULL) && (a_94 != b_94)))
                      _fail(b_94);
                    else
                      a_94 = b_94;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_93), not_null(a_94));
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
  ATerm j_94 = NULL;
  ATerm l_94 = NULL;
  j_94 = t;
  {
    ATerm m_94 = NULL;
    ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
    t = not_null(j_94);
    {
      m_94 = t;
      {
        t = SSL_explode_term(not_null(m_94));
        {
          o_94 = t;
          i_94 :
          if(match_cons(o_94, sym__2))
            {
              p_94 = ATgetArgument(o_94, 0);
              q_94 = ATgetArgument(o_94, 1);
              if(((l_94 != NULL) && (l_94 != q_94)))
                _fail(q_94);
              else
                l_94 = q_94;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_94);
      t = foldr_3(t, h_106, i_106, j_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
  w_94 = t;
  v_94 :
  if(match_cons(w_94, sym__2))
    {
      x_94 = ATgetArgument(w_94, 0);
      y_94 = ATgetArgument(w_94, 1);
      if(((x_94 != NULL) && (x_94 != y_94)))
        _fail(y_94);
      else
        x_94 = y_94;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm u_106 (ATerm), ATerm v_106 (ATerm))
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  e_95 = t;
  d_95 :
  if(((ATgetType(e_95) == AT_LIST) && !(ATisEmpty(e_95))))
    {
      f_95 = ATgetFirst((ATermList) e_95);
      g_95 = (ATerm) ATgetNext((ATermList) e_95);
      {
        t = v_106(t);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm j_95 = NULL;
            j_95 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_95), not_null(j_95));
              t = u_106(t);
            }
            return(t);
          }
          t = fetch_1(t, t_4);
        }
        t = not_null(g_95);
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
  ATerm p_95 = NULL,s_95 = NULL,t_95 = NULL;
  p_95 = t;
  o_95 :
  if(match_cons(p_95, sym__2))
    {
      s_95 = ATgetArgument(p_95, 0);
      t_95 = ATgetArgument(p_95, 1);
      {
        t = not_null(s_95);
        {
          ATerm x_95 (ATerm t)
          {
            ATerm h_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(q_23);
              }
            else
              {
                t = h_23;
                {
                  ATerm r_23 = t;
                  int s_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_4 (ATerm t)
                      {
                        t = not_null(t_95);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_106, u_4);
                      t = x_95(t);
                      ;
                      LocalPopChoice(s_23);
                    }
                  else
                    {
                      t = r_23;
                      t = Cons_2(t, _id, x_95);
                    }
                }
              }
            return(t);
          }
          t = x_95(t);
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
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
  b_96 = t;
  z_95 :
  if(match_cons(b_96, sym__2))
    {
      c_96 = ATgetArgument(b_96, 0);
      d_96 = ATgetArgument(b_96, 1);
      a_96 :
      if(((ATgetType(d_96) == AT_LIST) && !(ATisEmpty(d_96))))
        {
          e_96 = ATgetFirst((ATermList) d_96);
          f_96 = (ATerm) ATgetNext((ATermList) d_96);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_96)), not_null(e_96)), not_null(f_96));
        }
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
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
  x_96 = t;
  v_96 :
  if(((ATgetType(x_96) == AT_LIST) && !(ATisEmpty(x_96))))
    {
      y_96 = ATgetFirst((ATermList) x_96);
      b_97 = (ATerm) ATgetNext((ATermList) x_96);
      w_96 :
      if(match_cons(y_96, sym__2))
        {
          z_96 = ATgetArgument(y_96, 0);
          a_97 = ATgetArgument(y_96, 1);
          {
            ATerm f_97 = NULL,g_97 = NULL,m_97 = NULL,u_97 = NULL;
            ATerm t_23;
            t_23 = t;
            {
              ATerm h_97 = NULL;
              ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
              t = not_null(a_97);
              {
                h_97 = t;
                {
                  t = SSL_explode_term(not_null(h_97));
                  {
                    j_97 = t;
                    q_96 :
                    if(match_cons(j_97, sym__2))
                      {
                        k_97 = ATgetArgument(j_97, 0);
                        l_97 = ATgetArgument(j_97, 1);
                        {
                          if(((f_97 != NULL) && (f_97 != k_97)))
                            _fail(k_97);
                          else
                            f_97 = k_97;
                          if(((g_97 != NULL) && (g_97 != l_97)))
                            _fail(l_97);
                          else
                            g_97 = l_97;
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
            t = t_23;
            {
              ATerm u_23;
              u_23 = t;
              {
                ATerm n_97 = NULL;
                ATerm p_97 = NULL,q_97 = NULL,t_97 = NULL;
                t = not_null(z_96);
                {
                  n_97 = t;
                  {
                    t = SSL_explode_term(not_null(n_97));
                    {
                      p_97 = t;
                      t_96 :
                      if(match_cons(p_97, sym__2))
                        {
                          q_97 = ATgetArgument(p_97, 0);
                          t_97 = ATgetArgument(p_97, 1);
                          {
                            if(((f_97 != NULL) && (f_97 != q_97)))
                              _fail(q_97);
                            else
                              f_97 = q_97;
                            if(((m_97 != NULL) && (m_97 != t_97)))
                              _fail(t_97);
                            else
                              m_97 = t_97;
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
              t = u_23;
              {
                ATerm v_97 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(g_97));
                {
                  t = zip_1(t, _id);
                  {
                    v_97 = t;
                    if(((u_97 != NULL) && (u_97 != v_97)))
                      _fail(v_97);
                    else
                      u_97 = v_97;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_97), not_null(b_97));
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
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL;
  h_98 = t;
  d_98 :
  if(((ATgetType(h_98) == AT_LIST) && !(ATisEmpty(h_98))))
    {
      i_98 = ATgetFirst((ATermList) h_98);
      l_98 = (ATerm) ATgetNext((ATermList) h_98);
      e_98 :
      if(match_cons(i_98, sym__2))
        {
          j_98 = ATgetArgument(i_98, 0);
          k_98 = ATgetArgument(i_98, 1);
          {
            ATerm n_98 = NULL;
            if(((j_98 != NULL) && (j_98 != k_98)))
              _fail(k_98);
            else
              j_98 = k_98;
            {
              if(((n_98 != NULL) && (n_98 != l_98)))
                _fail(l_98);
              else
                n_98 = l_98;
              t = not_null(n_98);
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
  ATerm p_98 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          t = o_111(t);
          t = p_98(t);
        }
      }
    return(t);
  }
  t = p_98(t);
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
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 (ATerm t)
      {
        ATerm r_98 = NULL;
        r_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_98));
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, y_4);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, v_4, w_4, x_4);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm z_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_98 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_122(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_98 = NULL;
              ATerm h_24;
              h_24 = t;
              {
                ATerm w_98 = NULL;
                t = y_122(t);
                {
                  w_98 = t;
                  if(((v_98 != NULL) && (v_98 != w_98)))
                    _fail(w_98);
                  else
                    v_98 = w_98;
                }
              }
              t = h_24;
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = not_null(v_98);
                    return(t);
                  }
                  t = split_2(t, x_98, b_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm a_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_122(t, z_4, x_98, a_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, c_5, union_0, _id);
                }
              }
              ;
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              {
                ATerm d_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, d_5, union_0, x_98);
              }
            }
        }
      }
    return(t);
  }
  t = x_98(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm i_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = i_24;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, e_5, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  b_99 :
  if(match_cons(h_99, sym_LRule_1))
    {
      i_99 = ATgetArgument(h_99, 0);
      c_99 :
      if(match_cons(i_99, sym_Rule_3))
        {
          d_99 = ATgetArgument(i_99, 0);
          e_99 = ATgetArgument(i_99, 1);
          g_99 = ATgetArgument(i_99, 2);
          {
            t = not_null(d_99);
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
      if(match_cons(h_99, sym_Scope_2))
        {
          i_99 = ATgetArgument(h_99, 0);
          j_99 = ATgetArgument(h_99, 1);
          t = not_null(i_99);
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
  ATerm e_100 = NULL,f_100 = NULL;
  e_100 = t;
  d_100 :
  if(match_cons(e_100, sym_Var_1))
    {
      f_100 = ATgetArgument(e_100, 0);
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_100 = NULL,k_100 = NULL;
            ATerm j_100 = NULL;
            t = SSLgetAnnotations(not_null(e_100));
            {
              j_100 = t;
              if(((i_100 != NULL) && (i_100 != j_100)))
                _fail(j_100);
              else
                i_100 = j_100;
            }
            {
              t = not_null(f_100);
              {
                ATerm m_100 = NULL;
                t = o_0(t);
                {
                  k_100 = t;
                  {
                    ATerm n_100 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_100)), not_null(i_100));
                    {
                      n_100 = t;
                      if(((m_100 != NULL) && (m_100 != n_100)))
                        _fail(n_100);
                      else
                        m_100 = n_100;
                    }
                    t = not_null(m_100);
                  }
                }
              }
            }
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm q_100 = NULL,s_100 = NULL;
              ATerm r_100 = NULL;
              t = SSLgetAnnotations(not_null(e_100));
              {
                r_100 = t;
                if(((q_100 != NULL) && (q_100 != r_100)))
                  _fail(r_100);
                else
                  q_100 = r_100;
              }
              {
                t = not_null(f_100);
                {
                  ATerm u_100 = NULL;
                  t = o_0(t);
                  {
                    s_100 = t;
                    {
                      ATerm w_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_100)), not_null(q_100));
                      {
                        w_100 = t;
                        if(((u_100 != NULL) && (u_100 != w_100)))
                          _fail(w_100);
                        else
                          u_100 = w_100;
                      }
                      t = not_null(u_100);
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
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
  p_101 = t;
  o_101 :
  if(match_cons(p_101, sym__3))
    {
      q_101 = ATgetArgument(p_101, 0);
      r_101 = ATgetArgument(p_101, 1);
      s_101 = ATgetArgument(p_101, 2);
      {
        t = not_null(q_101);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm w_101 = NULL;
            w_101 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(s_101));
              t = s_121(t);
            }
            return(t);
          }
          ATerm g_5 (ATerm t)
          {
            ATerm y_101 = NULL;
            y_101 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_101), not_null(r_101));
              t = s_121(t);
            }
            return(t);
          }
          t = t_121(t, f_5, g_5, _id);
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
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(match_cons(f_102, sym__2))
    {
      g_102 = ATgetArgument(f_102, 0);
      h_102 = ATgetArgument(f_102, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_102)), not_null(g_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL;
  p_102 = t;
  m_102 :
  if(match_cons(p_102, sym__2))
    {
      q_102 = ATgetArgument(p_102, 0);
      t_102 = ATgetArgument(p_102, 1);
      n_102 :
      if(((ATgetType(q_102) == AT_LIST) && !(ATisEmpty(q_102))))
        {
          r_102 = ATgetFirst((ATermList) q_102);
          s_102 = (ATerm) ATgetNext((ATermList) q_102);
          o_102 :
          if(((ATgetType(t_102) == AT_LIST) && !(ATisEmpty(t_102))))
            {
              u_102 = ATgetFirst((ATermList) t_102);
              v_102 = (ATerm) ATgetNext((ATermList) t_102);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_102), not_null(u_102)), (ATerm) ATmakeAppl(sym__2, not_null(s_102), not_null(v_102)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  j_103 :
  if(match_cons(m_103, sym__2))
    {
      n_103 = ATgetArgument(m_103, 0);
      o_103 = ATgetArgument(m_103, 1);
      k_103 :
      if(((ATgetType(n_103) == AT_LIST) && ATisEmpty(n_103)))
        {
          l_103 :
          if(((ATgetType(o_103) == AT_LIST) && ATisEmpty(o_103)))
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
  ATerm q_103 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          t = z_102(t);
          {
            t = _2(t, b_103, q_103);
            t = a_103(t);
          }
        }
      }
    return(t);
  }
  t = q_103(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_103);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm m_121 (ATerm), ATerm n_121 (ATerm, ATerm (ATerm)))
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
  y_103 = t;
  x_103 :
  if(match_cons(y_103, sym__2))
    {
      z_103 = ATgetArgument(y_103, 0);
      a_104 = ATgetArgument(y_103, 1);
      {
        ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL,l_104 = NULL;
        ATerm y_24;
        y_24 = t;
        {
          ATerm g_104 = NULL;
          t = not_null(z_103);
          {
            ATerm h_104 = NULL;
            t = m_121(t);
            {
              g_104 = t;
              {
                if(((d_104 != NULL) && (d_104 != g_104)))
                  _fail(g_104);
                else
                  d_104 = g_104;
                {
                  ATerm i_104 = NULL,k_104 = NULL;
                  t = map_1(t, new_0);
                  {
                    h_104 = t;
                    {
                      if(((e_104 != NULL) && (e_104 != h_104)))
                        _fail(h_104);
                      else
                        e_104 = h_104;
                      {
                        ATerm j_104 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_104), not_null(e_104));
                        {
                          t = zip_1(t, _id);
                          {
                            j_104 = t;
                            if(((i_104 != NULL) && (i_104 != j_104)))
                              _fail(j_104);
                            else
                              i_104 = j_104;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_104), not_null(a_104));
                          {
                            t = conc_0(t);
                            {
                              k_104 = t;
                              if(((f_104 != NULL) && (f_104 != k_104)))
                                _fail(k_104);
                              else
                                f_104 = k_104;
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
        t = y_24;
        {
          ATerm m_104 = NULL;
          t = not_null(z_103);
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(e_104);
              return(t);
            }
            t = n_121(t, h_5);
            {
              m_104 = t;
              if(((l_104 != NULL) && (l_104 != m_104)))
                _fail(m_104);
              else
                l_104 = m_104;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_104), not_null(a_104), not_null(f_104));
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
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
  w_104 = t;
  u_104 :
  if(match_cons(w_104, sym__2))
    {
      x_104 = ATgetArgument(w_104, 0);
      y_104 = ATgetArgument(w_104, 1);
      v_104 :
      if(((ATgetType(y_104) == AT_LIST) && !(ATisEmpty(y_104))))
        {
          z_104 = ATgetFirst((ATermList) y_104);
          a_105 = (ATerm) ATgetNext((ATermList) y_104);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_104), not_null(a_105));
        }
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
  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL;
  i_105 = t;
  f_105 :
  if(match_cons(i_105, sym__2))
    {
      j_105 = ATgetArgument(i_105, 0);
      k_105 = ATgetArgument(i_105, 1);
      g_105 :
      if(((ATgetType(k_105) == AT_LIST) && !(ATisEmpty(k_105))))
        {
          l_105 = ATgetFirst((ATermList) k_105);
          o_105 = (ATerm) ATgetNext((ATermList) k_105);
          h_105 :
          if(match_cons(l_105, sym__2))
            {
              m_105 = ATgetArgument(l_105, 0);
              n_105 = ATgetArgument(l_105, 1);
              {
                ATerm q_105 = NULL;
                if(((j_105 != NULL) && (j_105 != m_105)))
                  _fail(m_105);
                else
                  j_105 = m_105;
                {
                  if(((q_105 != NULL) && (q_105 != n_105)))
                    _fail(n_105);
                  else
                    q_105 = n_105;
                  t = not_null(q_105);
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
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_121 (ATerm, ATerm (ATerm)))
{
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
  v_105 = t;
  u_105 :
  if(match_cons(v_105, sym__2))
    {
      w_105 = ATgetArgument(v_105, 0);
      x_105 = ATgetArgument(v_105, 1);
      {
        t = not_null(w_105);
        {
          ATerm i_5 (ATerm t)
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(x_105);
              return(t);
            }
            t = split_2(t, _id, j_5);
            t = lookup_0(t);
            return(t);
          }
          t = x_121(t, i_5);
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
  ATerm e_106 = NULL,k_106 = NULL,l_106 = NULL;
  e_106 = t;
  d_106 :
  if(match_cons(e_106, sym__2))
    {
      k_106 = ATgetArgument(e_106, 0);
      l_106 = ATgetArgument(e_106, 1);
      {
        t = not_null(k_106);
        {
          ATerm k_5 (ATerm t)
          {
            ATerm s_106 = NULL;
            s_106 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_106), not_null(l_106));
              t = h_116(t);
            }
            return(t);
          }
          t = _all(t, k_5);
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
  ATerm z_106 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_115(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = all_dist_1(t, z_106);
      }
    return(t);
  }
  t = z_106(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_121 (ATerm, ATerm (ATerm)), ATerm i_121 (ATerm), ATerm j_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_121 (ATerm, ATerm (ATerm)))
{
  ATerm b_107 = NULL;
  b_107 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_107), (ATerm) ATempty);
    {
      ATerm e_107 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_121);
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              {
                t = RnBinding_2(t, i_121, k_121);
                t = DistBinding_2(t, e_107, j_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, l_5);
        return(t);
      }
      t = e_107(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm f_107 (ATerm t, ATerm g_107 (ATerm))
  {
    t = Scope_2(t, g_107, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, f_107);
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
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL;
  o_107 = t;
  n_107 :
  if(((ATgetType(o_107) == AT_LIST) && !(ATisEmpty(o_107))))
    {
      p_107 = ATgetFirst((ATermList) o_107);
      q_107 = (ATerm) ATgetNext((ATermList) o_107);
      t = not_null(p_107);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
  v_107 = t;
  u_107 :
  if(match_cons(v_107, sym__2))
    {
      w_107 = ATgetArgument(v_107, 0);
      x_107 = ATgetArgument(v_107, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_107), not_null(x_107));
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
  ATerm d_108 = NULL;
  ATerm f_108 = NULL;
  d_108 = t;
  {
    ATerm g_108 = NULL;
    t = term_f_25;
    {
      t = u_108(t);
      {
        g_108 = t;
        if(((f_108 != NULL) && (f_108 != g_108)))
          _fail(g_108);
        else
          f_108 = g_108;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_108), not_null(d_108));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  c_109 = t;
  y_108 :
  if(match_cons(c_109, sym_Call_2))
    {
      d_109 = ATgetArgument(c_109, 0);
      f_109 = ATgetArgument(c_109, 1);
      z_108 :
      if(match_cons(d_109, sym_SVar_1))
        {
          e_109 = ATgetArgument(d_109, 0);
          {
            ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,v_109 = NULL;
            ATerm g_25;
            g_25 = t;
            {
              ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_109)), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
              {
                ATerm m_5 (ATerm t)
                {
                  t = term_h_25;
                  return(t);
                }
                t = rewrite_1(t, m_5);
                {
                  n_109 = t;
                  n_108 :
                  if(match_cons(n_109, sym_Defined_3))
                    {
                      o_109 = ATgetArgument(n_109, 0);
                      p_109 = ATgetArgument(n_109, 1);
                      q_109 = ATgetArgument(n_109, 2);
                      t_108 :
                      if(match_string(o_109, "b_0"))
                        {
                          ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL;
                          if(((j_109 != NULL) && (j_109 != p_109)))
                            _fail(p_109);
                          else
                            j_109 = p_109;
                          {
                            if(((k_109 != NULL) && (k_109 != q_109)))
                              _fail(q_109);
                            else
                              k_109 = q_109;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_109), not_null(j_109), not_null(k_109));
                              {
                                t = strename_0(t);
                                {
                                  r_109 = t;
                                  m_108 :
                                  if(match_cons(r_109, sym_SDef_3))
                                    {
                                      s_109 = ATgetArgument(r_109, 0);
                                      t_109 = ATgetArgument(r_109, 1);
                                      u_109 = ATgetArgument(r_109, 2);
                                      {
                                        if(((e_109 != NULL) && (e_109 != s_109)))
                                          _fail(s_109);
                                        else
                                          e_109 = s_109;
                                        {
                                          if(((l_109 != NULL) && (l_109 != t_109)))
                                            _fail(t_109);
                                          else
                                            l_109 = t_109;
                                          if(((m_109 != NULL) && (m_109 != u_109)))
                                            _fail(u_109);
                                          else
                                            m_109 = u_109;
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
            t = g_25;
            {
              ATerm a_110 = NULL;
              t = not_null(l_109);
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
                  w_109 = t;
                  w_108 :
                  if(match_cons(w_109, sym_VarDec_2))
                    {
                      x_109 = ATgetArgument(w_109, 0);
                      y_109 = ATgetArgument(w_109, 1);
                      t = not_null(x_109);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, n_5);
                {
                  a_110 = t;
                  if(((v_109 != NULL) && (v_109 != a_110)))
                    _fail(a_110);
                  else
                    v_109 = a_110;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_109), not_null(f_109), not_null(m_109));
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
  ATerm n_110 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    ATerm o_110 = NULL;
    t = new_0(t);
    {
      o_110 = t;
      {
        if(((n_110 != NULL) && (n_110 != o_110)))
          _fail(o_110);
        else
          n_110 = o_110;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_m_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_110)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm p_5 (ATerm t)
                  {
                    t = term_n_25;
                    return(t);
                  }
                  t = say_1(t, p_5);
                  return(t);
                }
                t = if_verbose2_1(t, o_5);
                _fail(t);
              }
            }
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
                p_110 = t;
                i_110 :
                if(match_cons(p_110, sym_LChoice_2))
                  {
                    q_110 = ATgetArgument(p_110, 0);
                    u_110 = ATgetArgument(p_110, 1);
                    j_110 :
                    if(match_cons(q_110, sym_Call_2))
                      {
                        r_110 = ATgetArgument(q_110, 0);
                        t_110 = ATgetArgument(q_110, 1);
                        k_110 :
                        if(match_cons(r_110, sym_SVar_1))
                          {
                            s_110 = ATgetArgument(r_110, 0);
                            l_110 :
                            if(((ATgetType(t_110) == AT_LIST) && ATisEmpty(t_110)))
                              {
                                m_110 :
                                if(match_cons(u_110, sym_Id_0))
                                  {
                                    if(((n_110 != NULL) && (n_110 != s_110)))
                                      _fail(s_110);
                                    else
                                      n_110 = s_110;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                {
                  ATerm q_5 (ATerm t)
                  {
                    ATerm r_5 (ATerm t)
                    {
                      t = term_q_25;
                      return(t);
                    }
                    t = debug_1(t, r_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, q_5);
                  _fail(t);
                }
              }
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  t = term_r_25;
                  return(t);
                }
                t = say_1(t, t_5);
                return(t);
              }
              t = if_verbose2_1(t, s_5);
            }
          }
        }
      }
    }
  }
  t = i_25;
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
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym__2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      {
        ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL;
        ATerm s_25;
        s_25 = t;
        {
          ATerm m_111 = NULL;
          ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL;
          t = s_108(t);
          {
            m_111 = t;
            {
              if(((j_111 != NULL) && (j_111 != m_111)))
                _fail(m_111);
              else
                j_111 = m_111;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_111), not_null(f_111), not_null(g_111));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_25 = t;
                    int u_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_111), term_r_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_25);
                      }
                    else
                      {
                        t = t_25;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_111 = t;
                      c_111 :
                      if(((ATgetType(t_111) == AT_LIST) && !(ATisEmpty(t_111))))
                        {
                          u_111 = ATgetFirst((ATermList) t_111);
                          v_111 = (ATerm) ATgetNext((ATermList) t_111);
                          {
                            if(((k_111 != NULL) && (k_111 != u_111)))
                              _fail(u_111);
                            else
                              k_111 = u_111;
                            {
                              if(((l_111 != NULL) && (l_111 != v_111)))
                                _fail(v_111);
                              else
                                l_111 = v_111;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_111), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(l_111)), (ATerm) ATinsert(CheckATermList(not_null(k_111)), not_null(f_111))));
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
        t = s_25;
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
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL;
  b_112 = t;
  a_112 :
  if(match_cons(b_112, sym_SDef_3))
    {
      c_112 = ATgetArgument(b_112, 0);
      d_112 = ATgetArgument(b_112, 1);
      e_112 = ATgetArgument(b_112, 2);
      {
        ATerm v_25;
        v_25 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_112)), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_3, term_w_25, not_null(d_112), not_null(e_112)));
          {
            ATerm u_5 (ATerm t)
            {
              t = term_h_25;
              return(t);
            }
            t = assert_1(t, u_5);
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
ATerm Strategies_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm o_112 = NULL,p_112 = NULL;
  o_112 = t;
  n_112 :
  if(match_cons(o_112, sym_Strategies_1))
    {
      p_112 = ATgetArgument(o_112, 0);
      {
        ATerm s_112 = NULL,u_112 = NULL;
        ATerm t_112 = NULL;
        t = SSLgetAnnotations(not_null(o_112));
        {
          t_112 = t;
          if(((s_112 != NULL) && (s_112 != t_112)))
            _fail(t_112);
          else
            s_112 = t_112;
        }
        {
          t = not_null(p_112);
          {
            ATerm w_112 = NULL;
            t = f_87(t);
            {
              u_112 = t;
              {
                ATerm x_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_112)), not_null(s_112));
                {
                  x_112 = t;
                  if(((w_112 != NULL) && (w_112 != x_112)))
                    _fail(x_112);
                  else
                    w_112 = x_112;
                }
                t = not_null(w_112);
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
  ATerm h_113 = NULL,i_113 = NULL;
  h_113 = t;
  g_113 :
  if(match_cons(h_113, sym_Signature_1))
    {
      i_113 = ATgetArgument(h_113, 0);
      {
        ATerm l_113 = NULL,n_113 = NULL;
        ATerm m_113 = NULL;
        t = SSLgetAnnotations(not_null(h_113));
        {
          m_113 = t;
          if(((l_113 != NULL) && (l_113 != m_113)))
            _fail(m_113);
          else
            l_113 = m_113;
        }
        {
          t = not_null(i_113);
          {
            ATerm p_113 = NULL;
            t = c_87(t);
            {
              n_113 = t;
              {
                ATerm q_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(n_113)), not_null(l_113));
                {
                  q_113 = t;
                  if(((p_113 != NULL) && (p_113 != q_113)))
                    _fail(q_113);
                  else
                    p_113 = q_113;
                }
                t = not_null(p_113);
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
  ATerm a_114 = NULL,b_114 = NULL;
  a_114 = t;
  z_113 :
  if(match_cons(a_114, sym_Specification_1))
    {
      b_114 = ATgetArgument(a_114, 0);
      {
        ATerm e_114 = NULL,g_114 = NULL;
        ATerm f_114 = NULL;
        t = SSLgetAnnotations(not_null(a_114));
        {
          f_114 = t;
          if(((e_114 != NULL) && (e_114 != f_114)))
            _fail(f_114);
          else
            e_114 = f_114;
        }
        {
          t = not_null(b_114);
          {
            ATerm i_114 = NULL;
            t = h_87(t);
            {
              g_114 = t;
              {
                ATerm j_114 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_114)), not_null(e_114));
                {
                  j_114 = t;
                  if(((i_114 != NULL) && (i_114 != j_114)))
                    _fail(j_114);
                  else
                    i_114 = j_114;
                }
                t = not_null(i_114);
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
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, z_5);
        return(t);
      }
      t = Cons_2(t, y_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, w_5, x_5);
    return(t);
  }
  t = Specification_1(t, v_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
  u_114 = t;
  t_114 :
  if(match_cons(u_114, sym__2))
    {
      v_114 = ATgetArgument(u_114, 0);
      w_114 = ATgetArgument(u_114, 1);
      {
        ATerm a_115 = NULL,c_115 = NULL;
        ATerm b_115 = NULL;
        t = SSLgetAnnotations(not_null(u_114));
        {
          b_115 = t;
          if(((a_115 != NULL) && (a_115 != b_115)))
            _fail(b_115);
          else
            a_115 = b_115;
        }
        {
          t = not_null(v_114);
          {
            ATerm e_115 = NULL;
            t = c_83(t);
            {
              c_115 = t;
              {
                t = not_null(w_114);
                {
                  ATerm g_115 = NULL;
                  t = d_83(t);
                  {
                    e_115 = t;
                    {
                      ATerm i_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_115), not_null(e_115)), not_null(a_115));
                      {
                        i_115 = t;
                        if(((g_115 != NULL) && (g_115 != i_115)))
                          _fail(i_115);
                        else
                          g_115 = i_115;
                      }
                      t = not_null(g_115);
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
  ATerm q_115 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm t_115 = NULL,u_115 = NULL;
      t_115 = t;
      p_115 :
      if(match_cons(t_115, sym_Program_1))
        {
          u_115 = ATgetArgument(t_115, 0);
          if(((q_115 != NULL) && (q_115 != u_115)))
            _fail(u_115);
          else
            q_115 = u_115;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_25), not_null(q_115)), term_y_25));
      {
        t = printnl_0(t);
        {
          t = term_a_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL;
  y_115 = t;
  x_115 :
  if(match_cons(y_115, sym__2))
    {
      z_115 = ATgetArgument(y_115, 0);
      a_116 = ATgetArgument(y_115, 1);
      {
        ATerm b_26;
        b_26 = t;
        t = SSL_printnl(not_null(z_115), not_null(a_116));
        t = b_26;
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
  ATerm f_116 = NULL;
  f_116 = t;
  t = SSL_implode_string(not_null(f_116));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
        l_116 = t;
        k_116 :
        if(((ATgetType(l_116) == AT_LIST) && !(ATisEmpty(l_116))))
          {
            m_116 = ATgetFirst((ATermList) l_116);
            n_116 = (ATerm) ATgetNext((ATermList) l_116);
            {
              t = not_null(m_116);
              {
                ATerm b_6 (ATerm t)
                {
                  t = not_null(n_116);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_6);
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
  ATerm x_116 = NULL;
  ATerm z_116 = NULL;
  x_116 = t;
  {
    ATerm a_117 = NULL;
    ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
    t = not_null(x_116);
    {
      a_117 = t;
      {
        t = SSL_explode_term(not_null(a_117));
        {
          e_117 = t;
          v_116 :
          if(match_cons(e_117, sym__2))
            {
              f_117 = ATgetArgument(e_117, 0);
              g_117 = ATgetArgument(e_117, 1);
              w_116 :
              if(match_string(f_117, ""))
                {
                  if(((z_116 != NULL) && (z_116 != g_117)))
                    _fail(g_117);
                  else
                    z_116 = g_117;
                }
              else
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
      t = not_null(z_116);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm p_117 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_117);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          t = Nil_0(t);
          t = m_101(t);
        }
      }
    return(t);
  }
  t = p_117(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_117 = NULL,c_118 = NULL,d_118 = NULL;
  x_117 = t;
  w_117 :
  if(match_cons(x_117, sym__2))
    {
      c_118 = ATgetArgument(x_117, 0);
      d_118 = ATgetArgument(x_117, 1);
      {
        t = not_null(c_118);
        {
          ATerm c_6 (ATerm t)
          {
            t = not_null(d_118);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_118 = NULL;
  i_118 = t;
  t = SSL_explode_string(not_null(i_118));
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
  ATerm m_118 = NULL;
  m_118 = t;
  t = SSL_is_string(not_null(m_118));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_6);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL;
              v_118 = t;
              u_118 :
              if(match_cons(v_118, sym_Path_1))
                {
                  w_118 = ATgetArgument(v_118, 0);
                  t = not_null(w_118);
                }
              else
                {
                  if(match_cons(v_118, sym_Var_1))
                    {
                      w_118 = ATgetArgument(v_118, 0);
                      {
                        t = not_null(w_118);
                        {
                          ATerm c_27 = t;
                          int d_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_27);
                            }
                          else
                            {
                              t = c_27;
                              {
                                ATerm e_6 (ATerm t)
                                {
                                  t = term_e_27;
                                  return(t);
                                }
                                t = debug_1(t, e_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_118, sym_Prefix_2))
                        {
                          w_118 = ATgetArgument(v_118, 0);
                          x_118 = ATgetArgument(v_118, 1);
                          {
                            ATerm c_119 = NULL,e_119 = NULL;
                            ATerm f_27;
                            f_27 = t;
                            {
                              ATerm d_119 = NULL;
                              t = not_null(w_118);
                              {
                                t = eval_config_0(t);
                                {
                                  d_119 = t;
                                  if(((c_119 != NULL) && (c_119 != d_119)))
                                    _fail(d_119);
                                  else
                                    c_119 = d_119;
                                }
                              }
                            }
                            t = f_27;
                            {
                              ATerm f_119 = NULL;
                              t = not_null(x_118);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_119), not_null(e_119));
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
  ATerm o_119 = NULL;
  o_119 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(o_119));
    {
      t = table_get_0(t);
      {
        ATerm f_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_27;
            m_27 = t;
            {
              ATerm q_119 = NULL;
              ATerm r_119 = NULL;
              r_119 = t;
              if(((q_119 != NULL) && (q_119 != r_119)))
                _fail(r_119);
              else
                q_119 = r_119;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_27, not_null(o_119), not_null(q_119));
                t = table_put_0(t);
              }
            }
            t = m_27;
          }
          return(t);
        }
        t = try_1(t, f_6);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL,y_119 = NULL;
  w_119 = t;
  v_119 :
  if(match_cons(w_119, sym__2))
    {
      x_119 = ATgetArgument(w_119, 0);
      y_119 = ATgetArgument(w_119, 1);
      t = SSL_WriteToTextFile(not_null(x_119), not_null(y_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL;
  e_120 = t;
  d_120 :
  if(match_cons(e_120, sym__2))
    {
      f_120 = ATgetArgument(e_120, 0);
      g_120 = ATgetArgument(e_120, 1);
      t = SSL_WriteToBinaryFile(not_null(f_120), not_null(g_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_120 = NULL;
  ATerm p_27;
  p_27 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 (ATerm t)
          {
            ATerm y_120 = NULL,z_120 = NULL;
            y_120 = t;
            u_120 :
            if(match_cons(y_120, sym_Output_1))
              {
                z_120 = ATgetArgument(y_120, 0);
                if(((x_120 != NULL) && (x_120 != z_120)))
                  _fail(z_120);
                else
                  x_120 = z_120;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_6);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          {
            ATerm a_121 = NULL;
            t = term_y_27;
            {
              a_121 = t;
              if(((x_120 != NULL) && (x_120 != a_121)))
                _fail(a_121);
              else
                x_120 = a_121;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_6, _id);
  }
  t = p_27;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        t = not_null(x_120);
        return(t);
      }
      t = split_2(t, j_6, _id);
      return(t);
    }
    t = _2(t, _id, i_6);
    {
      ATerm z_27 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_6 (ATerm t)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm b_121 = NULL;
              b_121 = t;
              w_120 :
              if(!(match_cons(b_121, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, l_6);
            return(t);
          }
          t = _2(t, k_6, WriteToBinaryFile_0);
          ;
          LocalPopChoice(i_28);
        }
      else
        {
          t = z_27;
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
  ATerm q_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL;
  ATerm j_28;
  j_28 = t;
  t = dtime_0(t);
  t = j_28;
  {
    t = d_117(t);
    {
      ATerm l_28;
      l_28 = t;
      {
        ATerm r_121 = NULL;
        t = dtime_0(t);
        {
          r_121 = t;
          if(((q_121 != NULL) && (q_121 != r_121)))
            _fail(r_121);
          else
            q_121 = r_121;
        }
      }
      t = l_28;
      {
        u_121 = t;
        p_121 :
        if(match_cons(u_121, sym__2))
          {
            v_121 = ATgetArgument(u_121, 0);
            w_121 = ATgetArgument(u_121, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_121)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_121))), not_null(w_121));
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
  ATerm m_28;
  m_28 = t;
  {
    ATerm e_122 = NULL,g_122 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm f_122 = NULL;
      t = a_109(t);
      {
        f_122 = t;
        if(((e_122 != NULL) && (e_122 != f_122)))
          _fail(f_122);
        else
          e_122 = f_122;
      }
    }
    t = n_28;
    {
      ATerm h_122 = NULL;
      h_122 = t;
      if(((g_122 != NULL) && (g_122 != h_122)))
        _fail(h_122);
      else
        g_122 = h_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_122)), not_null(e_122)));
        t = printnl_0(t);
      }
    }
  }
  t = m_28;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm l_122 = NULL;
  ATerm q_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_122 = NULL;
      m_122 = t;
      {
        if(((l_122 != NULL) && (l_122 != m_122)))
          _fail(m_122);
        else
          l_122 = m_122;
        t = SSL_ReadFromFile(not_null(l_122));
      }
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = q_28;
      {
        ATerm m_6 (ATerm t)
        {
          t = term_w_28;
          return(t);
        }
        t = debug_1(t, m_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm))
{
  ATerm q_122 = NULL,s_122 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    ATerm r_122 = NULL;
    t = z_99(t);
    {
      r_122 = t;
      if(((q_122 != NULL) && (q_122 != r_122)))
        _fail(r_122);
      else
        q_122 = r_122;
    }
  }
  t = x_28;
  {
    ATerm t_122 = NULL;
    t = a_100(t);
    {
      t_122 = t;
      if(((s_122 != NULL) && (s_122 != t_122)))
        _fail(t_122);
      else
        s_122 = t_122;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_122), not_null(s_122));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_123 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 (ATerm t)
        {
          ATerm e_123 = NULL,f_123 = NULL;
          e_123 = t;
          b_123 :
          if(match_cons(e_123, sym_Input_1))
            {
              f_123 = ATgetArgument(e_123, 0);
              if(((d_123 != NULL) && (d_123 != f_123)))
                _fail(f_123);
              else
                d_123 = f_123;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_6);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm i_123 = NULL;
          t = term_b_29;
          {
            i_123 = t;
            if(((d_123 != NULL) && (d_123 != i_123)))
              _fail(i_123);
            else
              d_123 = i_123;
          }
        }
      }
  }
  t = y_28;
  {
    ATerm o_6 (ATerm t)
    {
      t = not_null(d_123);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm m_123 = NULL;
    m_123 = t;
    l_123 :
    if(!(match_string(m_123, "-v")))
      {
        if(!(match_string(m_123, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_h_29;
    t = set_config_0(t);
    t = term_i_29;
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  t = Option_3(t, p_6, s_6, t_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm p_123 = NULL;
    p_123 = t;
    n_123 :
    if(!(match_string(p_123, "-k")))
      {
        if(!(match_string(p_123, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm n_29;
    n_29 = t;
    {
      ATerm q_123 = NULL;
      ATerm r_123 = NULL;
      t = string_to_int_0(t);
      {
        r_123 = t;
        if(((q_123 != NULL) && (q_123 != r_123)))
          _fail(r_123);
        else
          q_123 = r_123;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_29, not_null(q_123));
        t = set_config_0(t);
      }
    }
    t = n_29;
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_s_29;
    return(t);
  }
  t = ArgOption_3(t, u_6, v_6, w_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_123 = NULL;
  u_123 = t;
  t = SSL_string_to_int(not_null(u_123));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 (ATerm t)
      {
        ATerm k_124 = NULL;
        k_124 = t;
        x_123 :
        if(!(match_string(k_124, "-S")))
          {
            if(!(match_string(k_124, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        t = term_w_29;
        t = set_config_0(t);
        t = term_x_29;
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_y_29;
        return(t);
      }
      t = Option_3(t, x_6, y_6, z_6);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 (ATerm t)
            {
              ATerm l_124 = NULL;
              l_124 = t;
              y_123 :
              if(!(match_string(l_124, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_7 (ATerm t)
            {
              ATerm o_124 = NULL;
              ATerm b_30;
              b_30 = t;
              {
                ATerm m_124 = NULL;
                ATerm n_124 = NULL;
                t = string_to_int_0(t);
                {
                  n_124 = t;
                  if(((m_124 != NULL) && (m_124 != n_124)))
                    _fail(n_124);
                  else
                    m_124 = n_124;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(m_124));
                  t = set_config_0(t);
                }
              }
              t = b_30;
              {
                ATerm r_124 = NULL;
                r_124 = t;
                if(((o_124 != NULL) && (o_124 != r_124)))
                  _fail(r_124);
                else
                  o_124 = r_124;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_124));
              }
              return(t);
            }
            ATerm c_7 (ATerm t)
            {
              t = term_c_30;
              return(t);
            }
            t = ArgOption_3(t, a_7, b_7, c_7);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm d_7 (ATerm t)
              {
                ATerm s_124 = NULL;
                s_124 = t;
                j_124 :
                if(!(match_string(s_124, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_7 (ATerm t)
              {
                t = term_j_30;
                t = set_config_0(t);
                t = term_k_30;
                return(t);
              }
              ATerm f_7 (ATerm t)
              {
                t = term_l_30;
                return(t);
              }
              t = Option_3(t, d_7, e_7, f_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = p_30;
      {
        ATerm t_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = t_30;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm y_124 = NULL;
    y_124 = t;
    v_124 :
    if(!(match_string(y_124, "-o")))
      {
        if(!(match_string(y_124, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm b_125 = NULL;
    ATerm x_30;
    x_30 = t;
    {
      ATerm z_124 = NULL;
      ATerm a_125 = NULL;
      a_125 = t;
      if(((z_124 != NULL) && (z_124 != a_125)))
        _fail(a_125);
      else
        z_124 = a_125;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_30, not_null(z_124));
        t = set_config_0(t);
      }
    }
    t = x_30;
    {
      ATerm c_125 = NULL;
      c_125 = t;
      if(((b_125 != NULL) && (b_125 != c_125)))
        _fail(c_125);
      else
        b_125 = c_125;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_125));
    }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_z_30;
    return(t);
  }
  t = ArgOption_3(t, g_7, h_7, i_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm j_7 (ATerm t)
        {
          ATerm g_125 = NULL;
          g_125 = t;
          f_125 :
          if(!(match_string(g_125, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_7 (ATerm t)
        {
          t = term_d_31;
          t = set_config_0(t);
          t = term_l_31;
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_m_31;
          return(t);
        }
        t = Option_3(t, j_7, k_7, l_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL,p_125 = NULL,q_125 = NULL;
  m_125 = t;
  k_125 :
  if(match_string(m_125, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_125) == AT_LIST) && !(ATisEmpty(m_125))))
        {
          n_125 = ATgetFirst((ATermList) m_125);
          o_125 = (ATerm) ATgetNext((ATermList) m_125);
          l_125 :
          if(((ATgetType(o_125) == AT_LIST) && !(ATisEmpty(o_125))))
            {
              p_125 = ATgetFirst((ATermList) o_125);
              q_125 = (ATerm) ATgetNext((ATermList) o_125);
              {
                ATerm u_125 = NULL;
                ATerm n_31;
                n_31 = t;
                {
                  t = not_null(n_125);
                  t = k_0(t);
                }
                t = n_31;
                {
                  ATerm v_125 = NULL;
                  t = not_null(p_125);
                  {
                    t = l_0(t);
                    {
                      v_125 = t;
                      if(((u_125 != NULL) && (u_125 != v_125)))
                        _fail(v_125);
                      else
                        u_125 = v_125;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_125)), not_null(u_125));
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
  ATerm m_7 (ATerm t)
  {
    ATerm c_126 = NULL;
    c_126 = t;
    z_125 :
    if(!(match_string(c_126, "-i")))
      {
        if(!(match_string(c_126, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    ATerm f_126 = NULL;
    ATerm o_31;
    o_31 = t;
    {
      ATerm d_126 = NULL;
      ATerm e_126 = NULL;
      e_126 = t;
      if(((d_126 != NULL) && (d_126 != e_126)))
        _fail(e_126);
      else
        d_126 = e_126;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(d_126));
        t = set_config_0(t);
      }
    }
    t = o_31;
    {
      ATerm g_126 = NULL;
      g_126 = t;
      if(((f_126 != NULL) && (f_126 != g_126)))
        _fail(g_126);
      else
        f_126 = g_126;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_126));
    }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  t = ArgOption_3(t, m_7, n_7, o_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, term_v_31));
  {
    t = printnl_0(t);
    {
      t = term_a_26;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_126 = NULL;
  k_126 = t;
  t = SSL_TicksToSeconds(not_null(k_126));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym__2))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_126), not_null(r_126));
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = SSL_addr(not_null(q_126), not_null(r_126));
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
  ATerm e_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_107(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = e_32;
      {
        ATerm y_126 = NULL,z_126 = NULL,a_127 = NULL;
        y_126 = t;
        x_126 :
        if(((ATgetType(y_126) == AT_LIST) && !(ATisEmpty(y_126))))
          {
            z_126 = ATgetFirst((ATermList) y_126);
            a_127 = (ATerm) ATgetNext((ATermList) y_126);
            {
              ATerm d_127 = NULL;
              ATerm e_127 = NULL;
              t = not_null(a_127);
              {
                t = foldr_2(t, h_107, i_107);
                {
                  e_127 = t;
                  if(((d_127 != NULL) && (d_127 != e_127)))
                    _fail(e_127);
                  else
                    d_127 = e_127;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_126), not_null(d_127));
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
  ATerm l_127 = NULL;
  ATerm n_127 = NULL;
  l_127 = t;
  {
    ATerm o_127 = NULL;
    ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL;
    t = not_null(l_127);
    {
      o_127 = t;
      {
        t = SSL_explode_term(not_null(o_127));
        {
          q_127 = t;
          k_127 :
          if(match_cons(q_127, sym__2))
            {
              r_127 = ATgetArgument(q_127, 0);
              s_127 = ATgetArgument(q_127, 1);
              if(((n_127 != NULL) && (n_127 != s_127)))
                _fail(s_127);
              else
                n_127 = s_127;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_127);
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
    ATerm p_7 (ATerm t)
    {
      t = term_v_29;
      return(t);
    }
    t = crush_2(t, p_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL;
  y_127 = t;
  x_127 :
  if(match_cons(y_127, sym__2))
    {
      z_127 = ATgetArgument(y_127, 0);
      a_128 = ATgetArgument(y_127, 1);
      {
        ATerm n_32;
        n_32 = t;
        {
          ATerm o_32 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_127), not_null(a_128));
              ;
              LocalPopChoice(i_33);
            }
          else
            {
              t = o_32;
              t = SSL_gtr(not_null(z_127), not_null(a_128));
            }
        }
        t = n_32;
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
  ATerm g_128 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL;
      h_128 = t;
      f_128 :
      if(match_cons(h_128, sym__2))
        {
          i_128 = ATgetArgument(h_128, 0);
          j_128 = ATgetArgument(h_128, 1);
          {
            if(((g_128 != NULL) && (g_128 != i_128)))
              _fail(i_128);
            else
              g_128 = i_128;
            if(((g_128 != NULL) && (g_128 != j_128)))
              _fail(j_128);
            else
              g_128 = j_128;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm l_33;
    l_33 = t;
    {
      ATerm m_128 = NULL;
      ATerm n_128 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          n_128 = t;
          if(((m_128 != NULL) && (m_128 != n_128)))
            _fail(n_128);
          else
            m_128 = n_128;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_128), term_a_26);
        t = geq_0(t);
      }
    }
    t = l_33;
    t = p_124(t);
    return(t);
  }
  t = try_1(t, q_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm r_128 = NULL,t_128 = NULL;
    ATerm m_33;
    m_33 = t;
    {
      ATerm s_128 = NULL;
      t = run_time_0(t);
      {
        s_128 = t;
        if(((r_128 != NULL) && (r_128 != s_128)))
          _fail(s_128);
        else
          r_128 = s_128;
      }
    }
    t = m_33;
    {
      ATerm v_128 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          v_128 = t;
          if(((t_128 != NULL) && (t_128 != v_128)))
            _fail(v_128);
          else
            t_128 = v_128;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_33), not_null(r_128)), term_o_33), not_null(t_128)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_7);
  {
    t = term_v_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_129 = NULL;
  d_129 = t;
  c_129 :
  if(match_cons(d_129, sym_Version_0))
    {
      ATerm f_129 = NULL,h_129 = NULL;
      ATerm q_33;
      q_33 = t;
      {
        ATerm g_129 = NULL;
        t = SSLgetAnnotations(not_null(d_129));
        {
          g_129 = t;
          if(((f_129 != NULL) && (f_129 != g_129)))
            _fail(g_129);
          else
            f_129 = g_129;
        }
      }
      t = q_33;
      {
        ATerm i_129 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_129));
        {
          i_129 = t;
          if(((h_129 != NULL) && (h_129 != i_129)))
            _fail(i_129);
          else
            h_129 = i_129;
        }
        t = not_null(h_129);
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
  ATerm s_7 (ATerm t)
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_7);
  t = b_117(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_129 = NULL;
  n_129 = t;
  t = SSL_table_create(not_null(n_129));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_129 = NULL;
  r_129 = t;
  {
    ATerm v_33;
    v_33 = t;
    {
      t = term_w_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, not_null(r_129));
          t = table_put_0(t);
        }
      }
    }
    t = v_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_129 = NULL;
  v_129 = t;
  t = SSL_table_destroy(not_null(v_129));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_129 = NULL;
  z_129 = t;
  t = SSL_exit(not_null(z_129));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL;
  d_130 = t;
  c_130 :
  if(((ATgetType(d_130) == AT_LIST) && ATisEmpty(d_130)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_130) == AT_LIST) && !(ATisEmpty(d_130))))
        {
          e_130 = ATgetFirst((ATermList) d_130);
          f_130 = (ATerm) ATgetNext((ATermList) d_130);
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
  ATerm y_33;
  y_33 = t;
  {
    ATerm i_130 = NULL;
    ATerm l_130 = NULL;
    ATerm z_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = z_33;
        {
          ATerm j_130 = NULL;
          ATerm k_130 = NULL;
          k_130 = t;
          if(((j_130 != NULL) && (j_130 != k_130)))
            _fail(k_130);
          else
            j_130 = k_130;
          t = (ATerm) ATinsert(ATempty, not_null(j_130));
        }
      }
    {
      l_130 = t;
      if(((i_130 != NULL) && (i_130 != l_130)))
        _fail(l_130);
      else
        i_130 = l_130;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_27, not_null(i_130));
      t = printnl_0(t);
    }
  }
  t = y_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_100 (ATerm))
{
  ATerm o_130 (ATerm t)
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = Cons_2(t, x_100, o_130);
      }
    return(t);
  }
  t = o_130(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
  x_130 = t;
  u_130 :
  if(((ATgetType(x_130) == AT_LIST) && !(ATisEmpty(x_130))))
    {
      v_130 = ATgetFirst((ATermList) x_130);
      w_130 = (ATerm) ATgetNext((ATermList) x_130);
      {
        ATerm a_131 = NULL;
        t = not_null(w_130);
        {
          ATerm e_34;
          e_34 = t;
          {
            ATerm b_131 = NULL,d_131 = NULL,f_131 = NULL;
            ATerm f_34;
            f_34 = t;
            {
              ATerm c_131 = NULL;
              t = i_0(t);
              {
                c_131 = t;
                if(((b_131 != NULL) && (b_131 != c_131)))
                  _fail(c_131);
                else
                  b_131 = c_131;
              }
            }
            t = f_34;
            {
              ATerm e_131 = NULL;
              t = not_null(v_130);
              {
                t = g_0(t);
                {
                  e_131 = t;
                  if(((d_131 != NULL) && (d_131 != e_131)))
                    _fail(e_131);
                  else
                    d_131 = e_131;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_131)), not_null(d_131));
                {
                  f_131 = t;
                  if(((a_131 != NULL) && (a_131 != f_131)))
                    _fail(f_131);
                  else
                    a_131 = f_131;
                }
              }
            }
          }
          t = e_34;
          {
            ATerm t_7 (ATerm t)
            {
              t = not_null(a_131);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_130) == AT_LIST) && ATisEmpty(x_130)))
        {
          {
            t = term_f_25;
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
  ATerm u_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm q_131 = NULL,r_131 = NULL;
  q_131 = t;
  p_131 :
  if(match_cons(q_131, sym_Program_1))
    {
      r_131 = ATgetArgument(q_131, 0);
      {
        ATerm u_131 = NULL,w_131 = NULL;
        ATerm v_131 = NULL;
        t = SSLgetAnnotations(not_null(q_131));
        {
          v_131 = t;
          if(((u_131 != NULL) && (u_131 != v_131)))
            _fail(v_131);
          else
            u_131 = v_131;
        }
        {
          t = not_null(r_131);
          {
            ATerm y_131 = NULL;
            t = q_95(t);
            {
              w_131 = t;
              {
                ATerm z_131 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_131)), not_null(u_131));
                {
                  z_131 = t;
                  if(((y_131 != NULL) && (y_131 != z_131)))
                    _fail(z_131);
                  else
                    y_131 = z_131;
                }
                t = not_null(y_131);
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
  ATerm i_132 = NULL;
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_132 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          j_132 = t;
          if(((i_132 != NULL) && (i_132 != j_132)))
            _fail(j_132);
          else
            i_132 = j_132;
        }
      }
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm v_7 (ATerm t)
        {
          ATerm w_7 (ATerm t)
          {
            ATerm k_132 = NULL;
            k_132 = t;
            if(((i_132 != NULL) && (i_132 != k_132)))
              _fail(k_132);
            else
              i_132 = k_132;
            return(t);
          }
          t = Program_1(t, w_7);
          return(t);
        }
        t = option_defined_1(t, v_7);
      }
    }
  {
    ATerm x_7 (ATerm t)
    {
      ATerm y_7 (ATerm t)
      {
        t = not_null(i_132);
        return(t);
      }
      t = short_description_1(t, y_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_7);
    {
      t = term_i_34;
      {
        t = echo_0(t);
        {
          t = term_l_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_7 (ATerm t)
                {
                  ATerm l_132 = NULL;
                  ATerm m_132 = NULL;
                  m_132 = t;
                  if(((l_132 != NULL) && (l_132 != m_132)))
                    _fail(m_132);
                  else
                    l_132 = m_132;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_132)), term_m_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_7);
                {
                  ATerm a_8 (ATerm t)
                  {
                    ATerm n_132 = NULL;
                    ATerm o_132 = NULL;
                    ATerm b_8 (ATerm t)
                    {
                      t = not_null(i_132);
                      return(t);
                    }
                    t = long_description_1(t, b_8);
                    {
                      o_132 = t;
                      if(((n_132 != NULL) && (n_132 != o_132)))
                        _fail(o_132);
                      else
                        n_132 = o_132;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_132)), term_n_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_8);
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
  ATerm y_132 = NULL,z_132 = NULL;
  y_132 = t;
  x_132 :
  if(match_cons(y_132, sym_Undefined_1))
    {
      z_132 = ATgetArgument(y_132, 0);
      {
        ATerm c_133 = NULL,e_133 = NULL;
        ATerm d_133 = NULL;
        t = SSLgetAnnotations(not_null(y_132));
        {
          d_133 = t;
          if(((c_133 != NULL) && (c_133 != d_133)))
            _fail(d_133);
          else
            c_133 = d_133;
        }
        {
          t = not_null(z_132);
          {
            ATerm g_133 = NULL;
            t = r_95(t);
            {
              e_133 = t;
              {
                ATerm h_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_133)), not_null(c_133));
                {
                  h_133 = t;
                  if(((g_133 != NULL) && (g_133 != h_133)))
                    _fail(h_133);
                  else
                    g_133 = h_133;
                }
                t = not_null(g_133);
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
  ATerm m_133 (ATerm t)
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_101, _id);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = Cons_2(t, _id, m_133);
      }
    return(t);
  }
  t = m_133(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_119 (ATerm))
{
  t = fetch_1(t, k_119);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_133 = NULL;
  r_133 = t;
  q_133 :
  if(match_cons(r_133, sym_Help_0))
    {
      ATerm t_133 = NULL,v_133 = NULL;
      ATerm q_34;
      q_34 = t;
      {
        ATerm u_133 = NULL;
        t = SSLgetAnnotations(not_null(r_133));
        {
          u_133 = t;
          if(((t_133 != NULL) && (t_133 != u_133)))
            _fail(u_133);
          else
            t_133 = u_133;
        }
      }
      t = q_34;
      {
        ATerm w_133 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_133));
        {
          w_133 = t;
          if(((v_133 != NULL) && (v_133 != w_133)))
            _fail(w_133);
          else
            v_133 = w_133;
        }
        t = not_null(v_133);
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
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_99(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL,e_134 = NULL;
  c_134 = t;
  b_134 :
  if(match_cons(c_134, sym__2))
    {
      d_134 = ATgetArgument(c_134, 0);
      e_134 = ATgetArgument(c_134, 1);
      t = SSL_table_get(not_null(d_134), not_null(e_134));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,o_134 = NULL;
  l_134 = t;
  k_134 :
  if(match_cons(l_134, sym__3))
    {
      m_134 = ATgetArgument(l_134, 0);
      n_134 = ATgetArgument(l_134, 1);
      o_134 = ATgetArgument(l_134, 2);
      {
        ATerm t_34;
        t_34 = t;
        {
          ATerm s_134 = NULL;
          ATerm t_134 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_134), not_null(n_134));
          {
            ATerm u_34 = t;
            int v_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_34);
              }
            else
              {
                t = u_34;
                t = (ATerm) ATempty;
              }
            {
              t_134 = t;
              if(((s_134 != NULL) && (s_134 != t_134)))
                _fail(t_134);
              else
                s_134 = t_134;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_134), not_null(n_134), (ATerm) ATinsert(CheckATermList(not_null(s_134)), not_null(o_134)));
            t = table_put_0(t);
          }
        }
        t = t_34;
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
  ATerm x_134 = NULL;
  ATerm y_134 = NULL;
  t = term_f_25;
  {
    t = p_120(t);
    {
      y_134 = t;
      if(((x_134 != NULL) && (x_134 != y_134)))
        _fail(y_134);
      else
        x_134 = y_134;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_34, term_k_34, not_null(x_134));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL;
  e_135 = t;
  d_135 :
  if(match_string(e_135, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(e_135) == AT_LIST) && !(ATisEmpty(e_135))))
        {
          f_135 = ATgetFirst((ATermList) e_135);
          g_135 = (ATerm) ATgetNext((ATermList) e_135);
          {
            ATerm j_135 = NULL;
            ATerm w_34;
            w_34 = t;
            {
              t = not_null(f_135);
              t = a_0(t);
            }
            t = w_34;
            {
              ATerm k_135 = NULL;
              t = term_f_25;
              {
                t = c_0(t);
                {
                  k_135 = t;
                  if(((j_135 != NULL) && (j_135 != k_135)))
                    _fail(k_135);
                  else
                    j_135 = k_135;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_135)), not_null(j_135));
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
  ATerm c_8 (ATerm t)
  {
    ATerm p_135 = NULL;
    p_135 = t;
    o_135 :
    if(!(match_string(p_135, "--help")))
      {
        if(!(match_string(p_135, "-h")))
          {
            if(!(match_string(p_135, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = term_y_34;
    {
      t = set_config_0(t);
      t = term_z_34;
    }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  t = Option_3(t, c_8, d_8, e_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL;
  s_135 = t;
  r_135 :
  if(((ATgetType(s_135) == AT_LIST) && !(ATisEmpty(s_135))))
    {
      t_135 = ATgetFirst((ATermList) s_135);
      u_135 = (ATerm) ATgetNext((ATermList) s_135);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_135)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_135)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL;
  e_136 = t;
  d_136 :
  if(((ATgetType(e_136) == AT_LIST) && !(ATisEmpty(e_136))))
    {
      f_136 = ATgetFirst((ATermList) e_136);
      g_136 = (ATerm) ATgetNext((ATermList) e_136);
      {
        ATerm k_136 = NULL,m_136 = NULL;
        ATerm l_136 = NULL;
        t = SSLgetAnnotations(not_null(e_136));
        {
          l_136 = t;
          if(((k_136 != NULL) && (k_136 != l_136)))
            _fail(l_136);
          else
            k_136 = l_136;
        }
        {
          t = not_null(f_136);
          {
            ATerm o_136 = NULL;
            t = l_84(t);
            {
              m_136 = t;
              {
                t = not_null(g_136);
                {
                  ATerm q_136 = NULL;
                  t = m_84(t);
                  {
                    o_136 = t;
                    {
                      ATerm r_136 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_136)), not_null(m_136)), not_null(k_136));
                      {
                        r_136 = t;
                        if(((q_136 != NULL) && (q_136 != r_136)))
                          _fail(r_136);
                        else
                          q_136 = r_136;
                      }
                      t = not_null(q_136);
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
  ATerm b_137 = NULL;
  b_137 = t;
  a_137 :
  if(((ATgetType(b_137) == AT_LIST) && ATisEmpty(b_137)))
    {
      {
        ATerm d_137 = NULL,f_137 = NULL;
        ATerm b_35;
        b_35 = t;
        {
          ATerm e_137 = NULL;
          t = SSLgetAnnotations(not_null(b_137));
          {
            e_137 = t;
            if(((d_137 != NULL) && (d_137 != e_137)))
              _fail(e_137);
            else
              d_137 = e_137;
          }
        }
        t = b_35;
        {
          ATerm g_137 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_137));
          {
            g_137 = t;
            if(((f_137 != NULL) && (f_137 != g_137)))
              _fail(g_137);
            else
              f_137 = g_137;
          }
          t = not_null(f_137);
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
  ATerm n_137 = NULL,o_137 = NULL,p_137 = NULL;
  n_137 = t;
  m_137 :
  if(match_cons(n_137, sym__2))
    {
      o_137 = ATgetArgument(n_137, 0);
      p_137 = ATgetArgument(n_137, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_27, not_null(o_137), not_null(p_137));
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
  ATerm c_35;
  c_35 = t;
  {
    ATerm f_8 (ATerm t)
    {
      t = term_d_35;
      t = n_120(t);
      return(t);
    }
    t = try_1(t, f_8);
  }
  t = c_35;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm x_137 = NULL;
      ATerm e_35;
      e_35 = t;
      {
        ATerm v_137 = NULL;
        ATerm w_137 = NULL;
        w_137 = t;
        if(((v_137 != NULL) && (v_137 != w_137)))
          _fail(w_137);
        else
          v_137 = w_137;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(v_137));
          t = set_config_0(t);
        }
      }
      t = e_35;
      {
        ATerm y_137 = NULL;
        y_137 = t;
        if(((x_137 != NULL) && (x_137 != y_137)))
          _fail(y_137);
        else
          x_137 = y_137;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_137));
      }
      return(t);
    }
    ATerm h_8 (ATerm t)
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
              ;
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              {
                t = n_120(t);
                t = Cons_2(t, _id, h_8);
              }
            }
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_8, h_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL,g_138 = NULL;
  ATerm j_35;
  j_35 = t;
  {
    ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL;
    h_138 = t;
    d_138 :
    if(match_cons(h_138, sym__3))
      {
        i_138 = ATgetArgument(h_138, 0);
        j_138 = ATgetArgument(h_138, 1);
        k_138 = ATgetArgument(h_138, 2);
        {
          if(((e_138 != NULL) && (e_138 != i_138)))
            _fail(i_138);
          else
            e_138 = i_138;
          {
            if(((f_138 != NULL) && (f_138 != j_138)))
              _fail(j_138);
            else
              f_138 = j_138;
            {
              if(((g_138 != NULL) && (g_138 != k_138)))
                _fail(k_138);
              else
                g_138 = k_138;
              t = SSL_table_put(not_null(e_138), not_null(f_138), not_null(g_138));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_120 (ATerm))
{
  ATerm n_138 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    t = term_l_35;
    t = table_put_0(t);
  }
  t = k_35;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_120(t);
          ;
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_8);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35;
            q_35 = t;
            {
              ATerm r_35 = t;
              int s_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(s_35);
                }
              else
                {
                  t = r_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_35;
            {
              t = system_usage_0(t);
              {
                t = term_v_29;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm k_8 (ATerm t)
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm o_138 = NULL;
                  o_138 = t;
                  if(((n_138 != NULL) && (n_138 != o_138)))
                    _fail(o_138);
                  else
                    n_138 = o_138;
                  return(t);
                }
                t = Undefined_1(t, l_8);
                return(t);
              }
              t = option_defined_1(t, k_8);
              {
                ATerm m_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_138)), term_t_35);
                  return(t);
                }
                t = say_1(t, m_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_26;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_8);
      {
        ATerm w_35;
        w_35 = t;
        {
          t = term_j_34;
          t = table_destroy_0(t);
        }
        t = w_35;
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
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_117);
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_117(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
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
  ATerm n_8 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_117(t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_8, a_118, b_118, o_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm q_8 (ATerm t)
    {
      ATerm d_36;
      d_36 = t;
      {
        ATerm r_138 = NULL;
        ATerm s_138 = NULL;
        t = term_n_33;
        {
          t = get_config_0(t);
          {
            s_138 = t;
            if(((r_138 != NULL) && (r_138 != s_138)))
              _fail(s_138);
            else
              r_138 = s_138;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, not_null(r_138)));
          t = printnl_0(t);
        }
      }
      t = d_36;
      return(t);
    }
    t = if_verbose2_1(t, q_8);
    return(t);
  }
  t = iowrap_4(t, s_117, t_117, u_117, p_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm))
{
  t = iowrap_3(t, q_117, r_117, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_117 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    t = _2(t, _id, n_117);
    return(t);
  }
  t = iowrap_2(t, r_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm e_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(g_36);
      }
    else
      {
        t = e_36;
        {
          ATerm t_8 (ATerm t)
          {
            ATerm u_8 (ATerm t)
            {
              t = term_h_36;
              return(t);
            }
            t = say_1(t, u_8);
            return(t);
          }
          t = if_verbose2_1(t, t_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, s_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
