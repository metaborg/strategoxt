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
ATerm term_y_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_p_32;
ATerm term_p_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_p_30;
ATerm term_l_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_j_28;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_y_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_v_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
void init_constant_terms (void)
{
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Op_2, term_s_11, (ATerm) ATempty);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Call_2, term_j_14, (ATerm) ATempty);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_14, term_o_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_14, term_r_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_14, term_n_14);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_14, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_z_24);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_j_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_z_24);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_z_24);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_c_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_p_34, term_z_24);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__3, term_b_34, term_c_34, (ATerm) ATempty);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
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
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
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
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
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
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
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
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
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
  ATerm t_8;
  t_8 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, not_null(q_6)));
      t = printnl_0(t);
    }
  }
  t = t_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm v_8;
  v_8 = t;
  {
    t = y_108(t);
    t = debug_0(t);
  }
  t = v_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm y_8;
    y_8 = t;
    {
      ATerm w_8 = NULL;
      ATerm x_8 = NULL;
      t = term_z_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), term_a_9);
        t = geq_0(t);
      }
    }
    t = y_8;
    t = o_124(t);
    return(t);
  }
  t = try_1(t, c_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  s_9 = t;
  p_9 :
  if(match_cons(s_9, sym_ExplodeCong_2))
    {
      t_9 = ATgetArgument(s_9, 0);
      r_9 = ATgetArgument(s_9, 1);
      {
        ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
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
                b_10 = t;
                {
                  if(((x_9 != NULL) && (x_9 != b_10)))
                    _fail(b_10);
                  else
                    x_9 = b_10;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(y_9)), not_null(x_9)), not_null(w_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))))));
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
                    ATerm e_0 (ATerm t)
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
                    t = oncetd_1(t, e_0);
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_10)), not_null(g_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_c_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_10)), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10)))))));
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
        ATerm e_9 = t;
        int f_9 = stack_ptr;
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
                      ATerm p_12 = NULL,q_12 = NULL,s_12 = NULL;
                      p_12 = t;
                      v_11 :
                      if(match_cons(p_12, sym_Anno_2))
                        {
                          q_12 = ATgetArgument(p_12, 0);
                          s_12 = ATgetArgument(p_12, 1);
                          {
                            if(((k_12 != NULL) && (k_12 != q_12)))
                              _fail(q_12);
                            else
                              k_12 = q_12;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12))))));
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm h_9 = t;
              int j_9 = stack_ptr;
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
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = h_9;
                  {
                    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
                    ATerm h_13 = NULL;
                    ATerm l_13 = NULL;
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
                              l_13 = t;
                              if(((g_13 != NULL) && (g_13 != l_13)))
                                _fail(l_13);
                              else
                                g_13 = l_13;
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
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
              g_14 = ATgetArgument(e_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_14), not_null(g_14));
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
        ATerm b_15 = NULL;
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
            b_15 = t;
            if(((x_14 != NULL) && (x_14 != b_15)))
              _fail(b_15);
            else
              x_14 = b_15;
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = m_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm w_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_Build_1))
    {
      y_15 = ATgetArgument(w_15, 0);
      {
        ATerm q_9 = t;
        int u_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), not_null(a_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_16))));
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = q_9;
            {
              ATerm c_10 = t;
              int f_10 = stack_ptr;
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
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = c_10;
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
ATerm As_2 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm))
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
            t = n_88(t);
            {
              a_19 = t;
              {
                t = not_null(u_18);
                {
                  ATerm f_19 = NULL;
                  t = o_88(t);
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
ATerm Prim_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
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
            t = k_84(t);
            {
              b_20 = t;
              {
                t = not_null(v_19);
                {
                  ATerm f_20 = NULL;
                  t = l_84(t);
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
ATerm Explode_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
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
            t = j_88(t);
            {
              c_21 = t;
              {
                t = not_null(w_20);
                {
                  ATerm g_21 = NULL;
                  t = k_88(t);
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
ATerm Op_2 (ATerm t, ATerm o_86 (ATerm), ATerm p_86 (ATerm))
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
            t = o_86(t);
            {
              c_22 = t;
              {
                t = not_null(w_21);
                {
                  ATerm g_22 = NULL;
                  t = p_86(t);
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
ATerm pat_td_1 (ATerm t, ATerm f_123 (ATerm))
{
  ATerm p_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_123(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = p_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
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
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, f_123);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
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
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, f_123);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
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
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = i_11;
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
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Build_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
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
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
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
                  t = term_q_11;
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
                      t = term_q_11;
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
                          t = term_r_11;
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
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_24), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_11), term_u_11));
                    }
                  else
                    {
                      if(match_cons(q_24, sym_InfixApp_3))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          s_24 = ATgetArgument(q_24, 1);
                          p_24 = ATgetArgument(q_24, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), not_null(r_24))));
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
      t = term_w_11;
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
  ATerm h_27 = NULL,i_27 = NULL;
  ATerm n_27 (ATerm t)
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    t = not_null(h_27);
    {
      ATerm x_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_11;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_27))));
    return(t);
  }
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Var_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_27(t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
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
ATerm repeat_1 (ATerm t, ATerm v_110 (ATerm))
{
  ATerm k_28 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = v_110(t);
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
      ATerm c_12;
      c_12 = t;
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
      t = c_12;
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
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm f_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = f_12;
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
      t = d_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm))
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
            t = d_88(t);
            {
              m_29 = t;
              {
                t = not_null(g_29);
                {
                  ATerm q_29 = NULL;
                  t = e_88(t);
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
ATerm Con_3 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm))
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
            t = a_88(t);
            {
              o_30 = t;
              {
                t = not_null(g_30);
                {
                  ATerm s_30 = NULL;
                  t = b_88(t);
                  {
                    q_30 = t;
                    {
                      t = not_null(h_30);
                      {
                        ATerm u_30 = NULL;
                        t = c_88(t);
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
  ATerm r_12 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
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
      t = r_12;
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
ATerm oncetd_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm t_31 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_97(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = _one(t, t_31);
      }
    return(t);
  }
  t = t_31(t);
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
                    ATerm f_36 = NULL;
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
                              ATerm f_33 = NULL,x_33 = NULL,r_35 = NULL,s_35 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
                              f_33 = t;
                              b_32 :
                              if(match_cons(f_33, sym_Con_3))
                                {
                                  x_33 = ATgetArgument(f_33, 0);
                                  s_35 = ATgetArgument(f_33, 1);
                                  c_36 = ATgetArgument(f_33, 2);
                                  c_32 :
                                  if(match_cons(x_33, sym_Var_1))
                                    {
                                      r_35 = ATgetArgument(x_33, 0);
                                      d_32 :
                                      if(match_cons(c_36, sym_Call_2))
                                        {
                                          d_36 = ATgetArgument(c_36, 0);
                                          e_36 = ATgetArgument(c_36, 1);
                                          e_32 :
                                          if(((ATgetType(e_36) == AT_LIST) && ATisEmpty(e_36)))
                                            {
                                              {
                                                if(((u_32 != NULL) && (u_32 != r_35)))
                                                  _fail(r_35);
                                                else
                                                  u_32 = r_35;
                                                {
                                                  if(((t_32 != NULL) && (t_32 != s_35)))
                                                    _fail(s_35);
                                                  else
                                                    t_32 = s_35;
                                                  {
                                                    if(((r_32 != NULL) && (r_32 != d_36)))
                                                      _fail(d_36);
                                                    else
                                                      r_32 = d_36;
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
                              f_36 = t;
                              if(((x_32 != NULL) && (x_32 != f_36)))
                                _fail(f_36);
                              else
                                x_32 = f_36;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_32), not_null(x_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_32), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(r_32), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_32), not_null(t_32), term_r_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32)))))));
          }
        }
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
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  o_37 = t;
  e_37 :
  if(match_cons(o_37, sym_Seq_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      t_37 = ATgetArgument(o_37, 1);
      f_37 :
      if(match_cons(p_37, sym_Call_2))
        {
          q_37 = ATgetArgument(p_37, 0);
          s_37 = ATgetArgument(p_37, 1);
          g_37 :
          if(match_cons(q_37, sym_SVar_1))
            {
              r_37 = ATgetArgument(q_37, 0);
              h_37 :
              if(match_string(r_37, "mark"))
                {
                  i_37 :
                  if(((ATgetType(s_37) == AT_LIST) && ATisEmpty(s_37)))
                    {
                      j_37 :
                      if(match_cons(t_37, sym_Seq_2))
                        {
                          u_37 = ATgetArgument(t_37, 0);
                          w_37 = ATgetArgument(t_37, 1);
                          k_37 :
                          if(match_cons(u_37, sym_Match_1))
                            {
                              v_37 = ATgetArgument(u_37, 0);
                              l_37 :
                              if(match_cons(w_37, sym_Seq_2))
                                {
                                  x_37 = ATgetArgument(w_37, 0);
                                  e_38 = ATgetArgument(w_37, 1);
                                  m_37 :
                                  if(match_cons(x_37, sym_Where_1))
                                    {
                                      d_38 = ATgetArgument(x_37, 0);
                                      n_37 :
                                      if(match_cons(e_38, sym_Build_1))
                                        {
                                          f_38 = ATgetArgument(e_38, 0);
                                          {
                                            ATerm a_14 = t;
                                            int h_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
                                                ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
                                                t = term_v_14;
                                                {
                                                  ATerm w_1 (ATerm t)
                                                  {
                                                    t = term_c_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, w_1);
                                                  {
                                                    n_38 = t;
                                                    t_36 :
                                                    if(match_cons(n_38, sym_Defined_2))
                                                      {
                                                        o_38 = ATgetArgument(n_38, 0);
                                                        p_38 = ATgetArgument(n_38, 1);
                                                        u_36 :
                                                        if(match_string(o_38, "s_0"))
                                                          {
                                                            ATerm q_38 = NULL,w_38 = NULL,x_38 = NULL;
                                                            if(((k_38 != NULL) && (k_38 != p_38)))
                                                              _fail(p_38);
                                                            else
                                                              k_38 = p_38;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(k_38), not_null(v_37), (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(f_38)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  q_38 = t;
                                                                  s_36 :
                                                                  if(match_cons(q_38, sym__2))
                                                                    {
                                                                      w_38 = ATgetArgument(q_38, 0);
                                                                      x_38 = ATgetArgument(q_38, 1);
                                                                      {
                                                                        if(((l_38 != NULL) && (l_38 != w_38)))
                                                                          _fail(w_38);
                                                                        else
                                                                          l_38 = w_38;
                                                                        if(((m_38 != NULL) && (m_38 != x_38)))
                                                                          _fail(x_38);
                                                                        else
                                                                          m_38 = x_38;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(l_38)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_38))));
                                                ;
                                                LocalPopChoice(h_14);
                                              }
                                            else
                                              {
                                                t = a_14;
                                                {
                                                  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
                                                  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
                                                  t = term_v_14;
                                                  {
                                                    ATerm y_1 (ATerm t)
                                                    {
                                                      t = term_c_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, y_1);
                                                    {
                                                      h_39 = t;
                                                      c_37 :
                                                      if(match_cons(h_39, sym_Defined_2))
                                                        {
                                                          i_39 = ATgetArgument(h_39, 0);
                                                          j_39 = ATgetArgument(h_39, 1);
                                                          d_37 :
                                                          if(match_string(i_39, "h_0"))
                                                            {
                                                              ATerm k_39 = NULL;
                                                              if(((c_39 != NULL) && (c_39 != j_39)))
                                                                _fail(j_39);
                                                              else
                                                                c_39 = j_39;
                                                              {
                                                                ATerm l_39 = NULL;
                                                                t = not_null(c_39);
                                                                {
                                                                  k_39 = t;
                                                                  {
                                                                    if(((e_39 != NULL) && (e_39 != k_39)))
                                                                      _fail(k_39);
                                                                    else
                                                                      e_39 = k_39;
                                                                    {
                                                                      t = not_null(v_37);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          l_39 = t;
                                                                          {
                                                                            if(((d_39 != NULL) && (d_39 != l_39)))
                                                                              _fail(l_39);
                                                                            else
                                                                              d_39 = l_39;
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                t = term_d_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm a_2 (ATerm t)
                                                                              {
                                                                                ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
                                                                                ATerm b_2 (ATerm t)
                                                                                {
                                                                                  ATerm m_39 = NULL,o_39 = NULL;
                                                                                  ATerm n_39 = NULL;
                                                                                  n_39 = t;
                                                                                  if(((m_39 != NULL) && (m_39 != n_39)))
                                                                                    _fail(n_39);
                                                                                  else
                                                                                    m_39 = n_39;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_39));
                                                                                    {
                                                                                      o_39 = t;
                                                                                      {
                                                                                        ATerm e_15;
                                                                                        e_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(e_39), not_null(o_39)), term_g_15);
                                                                                          {
                                                                                            ATerm c_2 (ATerm t)
                                                                                            {
                                                                                              t = term_d_15;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, c_2);
                                                                                          }
                                                                                        }
                                                                                        t = e_15;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, b_2);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(f_38));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      q_39 = t;
                                                                                      b_37 :
                                                                                      if(match_cons(q_39, sym__2))
                                                                                        {
                                                                                          r_39 = ATgetArgument(q_39, 0);
                                                                                          s_39 = ATgetArgument(q_39, 1);
                                                                                          {
                                                                                            if(((f_39 != NULL) && (f_39 != r_39)))
                                                                                              _fail(r_39);
                                                                                            else
                                                                                              f_39 = r_39;
                                                                                            if(((g_39 != NULL) && (g_39 != s_39)))
                                                                                              _fail(s_39);
                                                                                            else
                                                                                              g_39 = s_39;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(f_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_38))));
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
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  ATerm u_41 (ATerm t)
  {
    ATerm m_41 = NULL,n_41 = NULL;
    t = not_null(p_40);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_d_15;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        m_41 = t;
        i_40 :
        if(match_cons(m_41, sym_Defined_1))
          {
            n_41 = ATgetArgument(m_41, 0);
            j_40 :
            if(!(match_string(n_41, "m_0")))
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
    t = not_null(r_40);
    return(t);
  }
  ATerm v_41 (ATerm t)
  {
    ATerm r_41 = NULL,s_41 = NULL;
    t = not_null(p_40);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_d_15;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        r_41 = t;
        k_40 :
        if(match_cons(r_41, sym_Defined_1))
          {
            s_41 = ATgetArgument(r_41, 0);
            l_40 :
            if(!(match_string(s_41, "j_0")))
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
    t = not_null(r_40);
    return(t);
  }
  p_40 = t;
  m_40 :
  if(match_cons(p_40, sym_App_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      n_40 :
      if(match_cons(r_40, sym_Var_1))
        {
          o_40 = ATgetArgument(r_40, 0);
          {
            ATerm h_15 = t;
            int i_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_40 = NULL,a_41 = NULL;
                t = not_null(p_40);
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = term_d_15;
                    return(t);
                  }
                  t = rewrite_1(t, f_2);
                  {
                    z_40 = t;
                    g_40 :
                    if(match_cons(z_40, sym_Defined_1))
                      {
                        a_41 = ATgetArgument(z_40, 0);
                        h_40 :
                        if(!(match_string(a_41, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_40));
                ;
                LocalPopChoice(i_15);
              }
            else
              {
                t = h_15;
                {
                  ATerm j_15 = t;
                  int k_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_41(t);
                      ;
                      LocalPopChoice(k_15);
                    }
                  else
                    {
                      t = j_15;
                      t = v_41(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_41(t);
              ;
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = v_41(t);
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
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
    {
      z_41 = ATgetFirst((ATermList) y_41);
      a_42 = (ATerm) ATgetNext((ATermList) y_41);
      t = not_null(a_42);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      {
        ATerm o_15;
        o_15 = t;
        {
          ATerm l_42 = NULL;
          ATerm m_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_42), not_null(i_42));
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                t = (ATerm) ATempty;
              }
            {
              m_42 = t;
              if(((l_42 != NULL) && (l_42 != m_42)))
                _fail(m_42);
              else
                l_42 = m_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_42), not_null(i_42), not_null(l_42));
            t = table_put_0(t);
          }
        }
        t = o_15;
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
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    ATerm w_42 = NULL;
    ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
    t = m_108(t);
    {
      w_42 = t;
      {
        if(((v_42 != NULL) && (v_42 != w_42)))
          _fail(w_42);
        else
          v_42 = w_42;
        {
          ATerm u_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), term_z_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = u_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            x_42 = t;
            s_42 :
            if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
              {
                y_42 = ATgetFirst((ATermList) x_42);
                z_42 = (ATerm) ATgetNext((ATermList) x_42);
                {
                  if(((u_42 != NULL) && (u_42 != y_42)))
                    _fail(y_42);
                  else
                    u_42 = y_42;
                  {
                    if(((t_42 != NULL) && (t_42 != z_42)))
                      _fail(z_42);
                    else
                      t_42 = z_42;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_42), term_z_15, not_null(t_42));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(u_42);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm a_43 = NULL;
                              a_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(a_43));
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
  t = s_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm j_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_99(t);
      t = s_99(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = j_16;
      {
        t = s_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_108 (ATerm))
{
  ATerm j_43 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm k_43 = NULL;
    ATerm p_43 = NULL;
    t = l_108(t);
    {
      k_43 = t;
      {
        if(((j_43 != NULL) && (j_43 != k_43)))
          _fail(k_43);
        else
          j_43 = k_43;
        {
          ATerm q_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_43), term_z_15);
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
                t = (ATerm) ATempty;
              }
            {
              q_43 = t;
              if(((p_43 != NULL) && (p_43 != q_43)))
                _fail(q_43);
              else
                p_43 = q_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_43), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(p_43)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_17;
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
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,h_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym__3))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      h_44 = ATgetArgument(a_44, 2);
      {
        ATerm p_44 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_d_15;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm s_44 = NULL;
          t = not_null(c_44);
          {
            t = tvars_0(t);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm q_44 = NULL;
                q_44 = t;
                {
                  ATerm e_17;
                  e_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(b_44), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))), term_g_17);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = term_d_15;
                        return(t);
                      }
                      t = assert_1(t, l_2);
                    }
                  }
                  t = e_17;
                }
                return(t);
              }
              t = map_1(t, k_2);
              {
                t = not_null(h_44);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    s_44 = t;
                    if(((p_44 != NULL) && (p_44 != s_44)))
                      _fail(s_44);
                    else
                      p_44 = s_44;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_2, j_2);
        t = not_null(p_44);
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
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  s_45 = t;
  k_45 :
  if(match_cons(s_45, sym_Seq_2))
    {
      t_45 = ATgetArgument(s_45, 0);
      x_45 = ATgetArgument(s_45, 1);
      l_45 :
      if(match_cons(t_45, sym_Call_2))
        {
          u_45 = ATgetArgument(t_45, 0);
          w_45 = ATgetArgument(t_45, 1);
          m_45 :
          if(match_cons(u_45, sym_SVar_1))
            {
              v_45 = ATgetArgument(u_45, 0);
              n_45 :
              if(match_string(v_45, "mark"))
                {
                  o_45 :
                  if(((ATgetType(w_45) == AT_LIST) && ATisEmpty(w_45)))
                    {
                      p_45 :
                      if(match_cons(x_45, sym_Seq_2))
                        {
                          y_45 = ATgetArgument(x_45, 0);
                          a_46 = ATgetArgument(x_45, 1);
                          q_45 :
                          if(match_cons(y_45, sym_Match_1))
                            {
                              z_45 = ATgetArgument(y_45, 0);
                              r_45 :
                              if(match_cons(a_46, sym_Build_1))
                                {
                                  b_46 = ATgetArgument(a_46, 0);
                                  {
                                    ATerm h_17 = t;
                                    int i_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm f_46 = NULL,g_46 = NULL;
                                        ATerm h_46 = NULL,i_46 = NULL,k_46 = NULL;
                                        t = term_k_17;
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            t = term_l_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, m_2);
                                          {
                                            h_46 = t;
                                            a_45 :
                                            if(match_cons(h_46, sym_Defined_2))
                                              {
                                                i_46 = ATgetArgument(h_46, 0);
                                                k_46 = ATgetArgument(h_46, 1);
                                                b_45 :
                                                if(match_string(i_46, "p_0"))
                                                  {
                                                    ATerm l_46 = NULL;
                                                    if(((f_46 != NULL) && (f_46 != k_46)))
                                                      _fail(k_46);
                                                    else
                                                      f_46 = k_46;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_46), not_null(z_45), not_null(b_46));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          l_46 = t;
                                                          if(((g_46 != NULL) && (g_46 != l_46)))
                                                            _fail(l_46);
                                                          else
                                                            g_46 = l_46;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_46)));
                                        ;
                                        LocalPopChoice(i_17);
                                      }
                                    else
                                      {
                                        t = h_17;
                                        {
                                          ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                          ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
                                          t = term_k_17;
                                          {
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_l_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, n_2);
                                            {
                                              v_46 = t;
                                              i_45 :
                                              if(match_cons(v_46, sym_Defined_2))
                                                {
                                                  w_46 = ATgetArgument(v_46, 0);
                                                  x_46 = ATgetArgument(v_46, 1);
                                                  j_45 :
                                                  if(match_string(w_46, "f_0"))
                                                    {
                                                      ATerm y_46 = NULL;
                                                      if(((r_46 != NULL) && (r_46 != x_46)))
                                                        _fail(x_46);
                                                      else
                                                        r_46 = x_46;
                                                      {
                                                        ATerm z_46 = NULL;
                                                        t = not_null(r_46);
                                                        {
                                                          y_46 = t;
                                                          {
                                                            if(((t_46 != NULL) && (t_46 != y_46)))
                                                              _fail(y_46);
                                                            else
                                                              t_46 = y_46;
                                                            {
                                                              t = not_null(z_45);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  z_46 = t;
                                                                  {
                                                                    if(((s_46 != NULL) && (s_46 != z_46)))
                                                                      _fail(z_46);
                                                                    else
                                                                      s_46 = z_46;
                                                                    {
                                                                      ATerm o_2 (ATerm t)
                                                                      {
                                                                        t = term_d_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm p_2 (ATerm t)
                                                                      {
                                                                        ATerm e_47 = NULL;
                                                                        ATerm q_2 (ATerm t)
                                                                        {
                                                                          ATerm a_47 = NULL,c_47 = NULL;
                                                                          ATerm b_47 = NULL;
                                                                          b_47 = t;
                                                                          if(((a_47 != NULL) && (a_47 != b_47)))
                                                                            _fail(b_47);
                                                                          else
                                                                            a_47 = b_47;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_47));
                                                                            {
                                                                              c_47 = t;
                                                                              {
                                                                                ATerm m_17;
                                                                                m_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(t_46), not_null(c_47)), term_o_17);
                                                                                  {
                                                                                    ATerm r_2 (ATerm t)
                                                                                    {
                                                                                      t = term_d_15;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, r_2);
                                                                                  }
                                                                                }
                                                                                t = m_17;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, q_2);
                                                                        {
                                                                          t = not_null(b_46);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              e_47 = t;
                                                                              if(((u_46 != NULL) && (u_46 != e_47)))
                                                                                _fail(e_47);
                                                                              else
                                                                                u_46 = e_47;
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_46)));
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
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  u_48 = t;
  f_48 :
  if(match_cons(u_48, sym_App_2))
    {
      v_48 = ATgetArgument(u_48, 0);
      b_49 = ATgetArgument(u_48, 1);
      g_48 :
      if(match_cons(v_48, sym_Call_2))
        {
          w_48 = ATgetArgument(v_48, 0);
          y_48 = ATgetArgument(v_48, 1);
          h_48 :
          if(match_cons(w_48, sym_SVar_1))
            {
              x_48 = ATgetArgument(w_48, 0);
              o_48 :
              if(match_string(x_48, "bottomup_1"))
                {
                  p_48 :
                  if(((ATgetType(y_48) == AT_LIST) && !(ATisEmpty(y_48))))
                    {
                      z_48 = ATgetFirst((ATermList) y_48);
                      a_49 = (ATerm) ATgetNext((ATermList) y_48);
                      q_48 :
                      if(((ATgetType(a_49) == AT_LIST) && ATisEmpty(a_49)))
                        {
                          r_48 :
                          if(match_cons(b_49, sym_Op_2))
                            {
                              c_49 = ATgetArgument(b_49, 0);
                              d_49 = ATgetArgument(b_49, 1);
                              {
                                ATerm h_49 = NULL;
                                ATerm k_49 = NULL;
                                t = not_null(d_49);
                                {
                                  ATerm s_2 (ATerm t)
                                  {
                                    ATerm i_49 = NULL;
                                    i_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, not_null(z_48))), not_null(i_49));
                                    return(t);
                                  }
                                  t = map_1(t, s_2);
                                  {
                                    k_49 = t;
                                    if(((h_49 != NULL) && (h_49 != k_49)))
                                      _fail(k_49);
                                    else
                                      h_49 = k_49;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_48), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_49), not_null(h_49)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm r_49 = NULL,s_49 = NULL,a_50 = NULL,b_50 = NULL;
  r_49 = t;
  p_49 :
  if(match_cons(r_49, sym_Seq_2))
    {
      s_49 = ATgetArgument(r_49, 0);
      b_50 = ATgetArgument(r_49, 1);
      q_49 :
      if(match_cons(s_49, sym_Build_1))
        {
          a_50 = ATgetArgument(s_49, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(b_50), not_null(a_50)));
        }
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
  ATerm m_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  m_50 = t;
  i_50 :
  if(match_cons(m_50, sym_LChoice_2))
    {
      p_50 = ATgetArgument(m_50, 0);
      s_50 = ATgetArgument(m_50, 1);
      j_50 :
      if(match_cons(p_50, sym_LChoice_2))
        {
          q_50 = ATgetArgument(p_50, 0);
          r_50 = ATgetArgument(p_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_50), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_50), not_null(s_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_50, sym_Seq_2))
        {
          p_50 = ATgetArgument(m_50, 0);
          s_50 = ATgetArgument(m_50, 1);
          k_50 :
          if(match_cons(p_50, sym_Seq_2))
            {
              q_50 = ATgetArgument(p_50, 0);
              r_50 = ATgetArgument(p_50, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_50), not_null(s_50)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_50, sym_Choice_2))
            {
              p_50 = ATgetArgument(m_50, 0);
              s_50 = ATgetArgument(m_50, 1);
              l_50 :
              if(match_cons(p_50, sym_Choice_2))
                {
                  q_50 = ATgetArgument(p_50, 0);
                  r_50 = ATgetArgument(p_50, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_50), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_50), not_null(s_50)));
                }
              else
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
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  n_51 = t;
  l_51 :
  if(match_cons(n_51, sym_Seq_2))
    {
      o_51 = ATgetArgument(n_51, 0);
      r_51 = ATgetArgument(n_51, 1);
      m_51 :
      if(match_cons(o_51, sym_Scope_2))
        {
          p_51 = ATgetArgument(o_51, 0);
          q_51 = ATgetArgument(o_51, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_51), not_null(r_51)));
        }
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
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  b_52 = t;
  z_51 :
  if(match_cons(b_52, sym_Seq_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      f_52 = ATgetArgument(b_52, 1);
      a_52 :
      if(match_cons(c_52, sym_LChoice_2))
        {
          d_52 = ATgetArgument(c_52, 0);
          e_52 = ATgetArgument(c_52, 1);
          {
            ATerm k_52 = NULL,l_52 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_17, not_null(f_52));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_y_17;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                k_52 = t;
                x_51 :
                if(match_cons(k_52, sym_Defined_1))
                  {
                    l_52 = ATgetArgument(k_52, 0);
                    y_51 :
                    if(!(match_string(l_52, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(d_52), not_null(f_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_52), not_null(f_52)));
          }
        }
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
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_Seq_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      w_52 = ATgetArgument(s_52, 1);
      r_52 :
      if(match_cons(t_52, sym_Choice_2))
        {
          u_52 = ATgetArgument(t_52, 0);
          v_52 = ATgetArgument(t_52, 1);
          {
            ATerm b_53 = NULL,c_53 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_17, not_null(w_52));
            {
              ATerm u_2 (ATerm t)
              {
                t = term_a_18;
                return(t);
              }
              t = rewrite_1(t, u_2);
              {
                b_53 = t;
                o_52 :
                if(match_cons(b_53, sym_Defined_1))
                  {
                    c_53 = ATgetArgument(b_53, 0);
                    p_52 :
                    if(!(match_string(c_53, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(u_52), not_null(w_52)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_52), not_null(w_52)));
          }
        }
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
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
        n_54 = t;
        d_54 :
        if(match_cons(n_54, sym_Seq_2))
          {
            o_54 = ATgetArgument(n_54, 0);
            u_54 = ATgetArgument(n_54, 1);
            e_54 :
            if(match_cons(o_54, sym_Choice_2))
              {
                p_54 = ATgetArgument(o_54, 0);
                r_54 = ATgetArgument(o_54, 1);
                {
                  ATerm d_55 = NULL,f_55 = NULL;
                  ATerm d_18;
                  d_18 = t;
                  {
                    ATerm b_55 = NULL,c_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_17, not_null(u_54));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_a_18;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        b_55 = t;
                        m_53 :
                        if(match_cons(b_55, sym_Defined_1))
                          {
                            c_55 = ATgetArgument(b_55, 0);
                            n_53 :
                            if(!(match_string(c_55, "v_1")))
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
                  t = d_18;
                  {
                    ATerm e_18;
                    e_18 = t;
                    {
                      ATerm e_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_54), not_null(u_54));
                      {
                        t = v_2(t);
                        {
                          e_55 = t;
                          if(((d_55 != NULL) && (d_55 != e_55)))
                            _fail(e_55);
                          else
                            d_55 = e_55;
                        }
                      }
                    }
                    t = e_18;
                    {
                      ATerm g_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), not_null(u_54));
                      {
                        t = v_2(t);
                        {
                          g_55 = t;
                          if(((f_55 != NULL) && (f_55 != g_55)))
                            _fail(g_55);
                          else
                            f_55 = g_55;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_55), not_null(f_55));
                        t = v_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(o_54, sym_LChoice_2))
                  {
                    p_54 = ATgetArgument(o_54, 0);
                    r_54 = ATgetArgument(o_54, 1);
                    {
                      ATerm r_55 = NULL,t_55 = NULL;
                      ATerm f_18;
                      f_18 = t;
                      {
                        ATerm p_55 = NULL,q_55 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_17, not_null(u_54));
                        {
                          ATerm x_2 (ATerm t)
                          {
                            t = term_y_17;
                            return(t);
                          }
                          t = rewrite_1(t, x_2);
                          {
                            p_55 = t;
                            q_53 :
                            if(match_cons(p_55, sym_Defined_1))
                              {
                                q_55 = ATgetArgument(p_55, 0);
                                r_53 :
                                if(!(match_string(q_55, "x_1")))
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
                          ATerm s_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_54), not_null(u_54));
                          {
                            t = v_2(t);
                            {
                              s_55 = t;
                              if(((r_55 != NULL) && (r_55 != s_55)))
                                _fail(s_55);
                              else
                                r_55 = s_55;
                            }
                          }
                        }
                        t = g_18;
                        {
                          ATerm u_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), not_null(u_54));
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
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_55), not_null(t_55));
                            t = v_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(o_54, sym_Scope_2))
                      {
                        p_54 = ATgetArgument(o_54, 0);
                        r_54 = ATgetArgument(o_54, 1);
                        {
                          ATerm y_55 = NULL;
                          ATerm z_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), not_null(u_54));
                          {
                            t = v_2(t);
                            {
                              z_55 = t;
                              if(((y_55 != NULL) && (y_55 != z_55)))
                                _fail(z_55);
                              else
                                y_55 = z_55;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_54), not_null(y_55));
                            t = v_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(o_54, sym_Seq_2))
                          {
                            p_54 = ATgetArgument(o_54, 0);
                            r_54 = ATgetArgument(o_54, 1);
                            {
                              ATerm i_56 = NULL;
                              ATerm j_56 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), not_null(u_54));
                              {
                                t = v_2(t);
                                {
                                  j_56 = t;
                                  if(((i_56 != NULL) && (i_56 != j_56)))
                                    _fail(j_56);
                                  else
                                    i_56 = j_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_54), not_null(i_56));
                                t = v_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(o_54, sym_Build_1))
                              {
                                p_54 = ATgetArgument(o_54, 0);
                                {
                                  ATerm r_56 = NULL;
                                  ATerm s_56 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_54), not_null(p_54));
                                  {
                                    t = v_2(t);
                                    {
                                      s_56 = t;
                                      if(((r_56 != NULL) && (r_56 != s_56)))
                                        _fail(s_56);
                                      else
                                        r_56 = s_56;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_56));
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
            if(match_cons(n_54, sym_LChoice_2))
              {
                o_54 = ATgetArgument(n_54, 0);
                u_54 = ATgetArgument(n_54, 1);
                f_54 :
                if(match_cons(o_54, sym_LChoice_2))
                  {
                    p_54 = ATgetArgument(o_54, 0);
                    r_54 = ATgetArgument(o_54, 1);
                    {
                      ATerm d_56 = NULL;
                      ATerm e_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_54), not_null(u_54));
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
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_54), not_null(d_56));
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
                if(match_cons(n_54, sym_Choice_2))
                  {
                    o_54 = ATgetArgument(n_54, 0);
                    u_54 = ATgetArgument(n_54, 1);
                    g_54 :
                    if(match_cons(o_54, sym_Choice_2))
                      {
                        p_54 = ATgetArgument(o_54, 0);
                        r_54 = ATgetArgument(o_54, 1);
                        {
                          ATerm n_56 = NULL;
                          ATerm o_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_54), not_null(u_54));
                          {
                            t = v_2(t);
                            {
                              o_56 = t;
                              if(((n_56 != NULL) && (n_56 != o_56)))
                                _fail(o_56);
                              else
                                n_56 = o_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_54), not_null(n_56));
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
                    if(match_cons(n_54, sym_App_2))
                      {
                        o_54 = ATgetArgument(n_54, 0);
                        u_54 = ATgetArgument(n_54, 1);
                        h_54 :
                        if(match_cons(o_54, sym_Call_2))
                          {
                            p_54 = ATgetArgument(o_54, 0);
                            r_54 = ATgetArgument(o_54, 1);
                            i_54 :
                            if(match_cons(p_54, sym_SVar_1))
                              {
                                q_54 = ATgetArgument(p_54, 0);
                                j_54 :
                                if(match_string(q_54, "bottomup_1"))
                                  {
                                    k_54 :
                                    if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
                                      {
                                        s_54 = ATgetFirst((ATermList) r_54);
                                        t_54 = (ATerm) ATgetNext((ATermList) r_54);
                                        l_54 :
                                        if(((ATgetType(t_54) == AT_LIST) && ATisEmpty(t_54)))
                                          {
                                            m_54 :
                                            if(match_cons(u_54, sym_Op_2))
                                              {
                                                v_54 = ATgetArgument(u_54, 0);
                                                w_54 = ATgetArgument(u_54, 1);
                                                {
                                                  ATerm w_56 = NULL,a_57 = NULL;
                                                  ATerm k_18;
                                                  k_18 = t;
                                                  {
                                                    ATerm z_56 = NULL;
                                                    t = not_null(w_54);
                                                    {
                                                      ATerm y_2 (ATerm t)
                                                      {
                                                        ATerm x_56 = NULL;
                                                        x_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, not_null(s_54))), not_null(x_56));
                                                        return(t);
                                                      }
                                                      t = map_1(t, y_2);
                                                      {
                                                        z_56 = t;
                                                        if(((w_56 != NULL) && (w_56 != z_56)))
                                                          _fail(z_56);
                                                        else
                                                          w_56 = z_56;
                                                      }
                                                    }
                                                  }
                                                  t = k_18;
                                                  {
                                                    ATerm b_57 = NULL,d_57 = NULL;
                                                    ATerm c_57 = NULL;
                                                    t = not_null(w_56);
                                                    {
                                                      t = bottomup_1(t, v_2);
                                                      {
                                                        c_57 = t;
                                                        if(((b_57 != NULL) && (b_57 != c_57)))
                                                          _fail(c_57);
                                                        else
                                                          b_57 = c_57;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_54), not_null(b_57));
                                                      {
                                                        t = v_2(t);
                                                        {
                                                          d_57 = t;
                                                          if(((a_57 != NULL) && (a_57 != d_57)))
                                                            _fail(d_57);
                                                          else
                                                            a_57 = d_57;
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_54), not_null(a_57));
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
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
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
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  d_58 = t;
  b_58 :
  if(match_cons(d_58, sym_Seq_2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      c_58 :
      if(match_cons(f_58, sym_Scope_2))
        {
          g_58 = ATgetArgument(f_58, 0);
          h_58 = ATgetArgument(f_58, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_58), not_null(h_58)));
        }
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
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  q_58 = t;
  n_58 :
  if(match_cons(q_58, sym_Seq_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      p_58 :
      if(match_cons(s_58, sym_LChoice_2))
        {
          t_58 = ATgetArgument(s_58, 0);
          u_58 = ATgetArgument(s_58, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(r_58), not_null(t_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_58), not_null(u_58)));
        }
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
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  c_59 = t;
  a_59 :
  if(match_cons(c_59, sym_Seq_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      b_59 :
      if(match_cons(e_59, sym_Choice_2))
        {
          f_59 = ATgetArgument(e_59, 0);
          g_59 = ATgetArgument(e_59, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(d_59), not_null(f_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_59), not_null(g_59)));
        }
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
  ATerm z_2 (ATerm t)
  {
    t = bottomup_1(t, l_96);
    return(t);
  }
  t = _all(t, z_2);
  t = l_96(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm e_115 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      t = e_115(t);
      t = bottomup_1(t, a_3);
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
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
        w_59 = t;
        u_59 :
        if(match_cons(w_59, sym_Seq_2))
          {
            x_59 = ATgetArgument(w_59, 0);
            y_59 = ATgetArgument(w_59, 1);
            v_59 :
            if(match_cons(y_59, sym_Choice_2))
              {
                z_59 = ATgetArgument(y_59, 0);
                a_60 = ATgetArgument(y_59, 1);
                {
                  ATerm e_60 = NULL,g_60 = NULL;
                  ATerm n_18;
                  n_18 = t;
                  {
                    ATerm f_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), not_null(z_59));
                    {
                      t = c_3(t);
                      {
                        f_60 = t;
                        if(((e_60 != NULL) && (e_60 != f_60)))
                          _fail(f_60);
                        else
                          e_60 = f_60;
                      }
                    }
                  }
                  t = n_18;
                  {
                    ATerm h_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), not_null(a_60));
                    {
                      t = c_3(t);
                      {
                        h_60 = t;
                        if(((g_60 != NULL) && (g_60 != h_60)))
                          _fail(h_60);
                        else
                          g_60 = h_60;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_60), not_null(g_60));
                      t = c_3(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(y_59, sym_LChoice_2))
                  {
                    z_59 = ATgetArgument(y_59, 0);
                    a_60 = ATgetArgument(y_59, 1);
                    {
                      ATerm l_60 = NULL,n_60 = NULL;
                      ATerm o_18;
                      o_18 = t;
                      {
                        ATerm m_60 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), not_null(z_59));
                        {
                          t = c_3(t);
                          {
                            m_60 = t;
                            if(((l_60 != NULL) && (l_60 != m_60)))
                              _fail(m_60);
                            else
                              l_60 = m_60;
                          }
                        }
                      }
                      t = o_18;
                      {
                        ATerm o_60 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), not_null(a_60));
                        {
                          t = c_3(t);
                          {
                            o_60 = t;
                            if(((n_60 != NULL) && (n_60 != o_60)))
                              _fail(o_60);
                            else
                              n_60 = o_60;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_60), not_null(n_60));
                          t = c_3(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(y_59, sym_Scope_2))
                      {
                        z_59 = ATgetArgument(y_59, 0);
                        a_60 = ATgetArgument(y_59, 1);
                        {
                          ATerm s_60 = NULL;
                          ATerm t_60 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), not_null(a_60));
                          {
                            t = c_3(t);
                            {
                              t_60 = t;
                              if(((s_60 != NULL) && (s_60 != t_60)))
                                _fail(t_60);
                              else
                                s_60 = t_60;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_59), not_null(s_60));
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
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, c_3);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm i_61 = NULL,j_61 = NULL;
  i_61 = t;
  h_61 :
  if(match_cons(i_61, sym_Build_1))
    {
      j_61 = ATgetArgument(i_61, 0);
      {
        ATerm m_61 = NULL,o_61 = NULL;
        ATerm n_61 = NULL;
        t = SSLgetAnnotations(not_null(i_61));
        {
          n_61 = t;
          if(((m_61 != NULL) && (m_61 != n_61)))
            _fail(n_61);
          else
            m_61 = n_61;
        }
        {
          t = not_null(j_61);
          {
            ATerm q_61 = NULL;
            t = p_84(t);
            {
              o_61 = t;
              {
                ATerm r_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(o_61)), not_null(m_61));
                {
                  r_61 = t;
                  if(((q_61 != NULL) && (q_61 != r_61)))
                    _fail(r_61);
                  else
                    q_61 = r_61;
                }
                t = not_null(q_61);
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
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Seq_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        ATerm i_62 = NULL,k_62 = NULL;
        ATerm j_62 = NULL;
        t = SSLgetAnnotations(not_null(c_62));
        {
          j_62 = t;
          if(((i_62 != NULL) && (i_62 != j_62)))
            _fail(j_62);
          else
            i_62 = j_62;
        }
        {
          t = not_null(d_62);
          {
            ATerm m_62 = NULL;
            t = f_85(t);
            {
              k_62 = t;
              {
                t = not_null(e_62);
                {
                  ATerm o_62 = NULL;
                  t = g_85(t);
                  {
                    m_62 = t;
                    {
                      ATerm p_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(k_62), not_null(m_62)), not_null(i_62));
                      {
                        p_62 = t;
                        if(((o_62 != NULL) && (o_62 != p_62)))
                          _fail(p_62);
                        else
                          o_62 = p_62;
                      }
                      t = not_null(o_62);
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
  ATerm a_63 = NULL,b_63 = NULL;
  a_63 = t;
  z_62 :
  if(match_cons(a_63, sym_Match_1))
    {
      b_63 = ATgetArgument(a_63, 0);
      {
        ATerm e_63 = NULL,g_63 = NULL;
        ATerm f_63 = NULL;
        t = SSLgetAnnotations(not_null(a_63));
        {
          f_63 = t;
          if(((e_63 != NULL) && (e_63 != f_63)))
            _fail(f_63);
          else
            e_63 = f_63;
        }
        {
          t = not_null(b_63);
          {
            ATerm i_63 = NULL;
            t = o_84(t);
            {
              g_63 = t;
              {
                ATerm j_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(g_63)), not_null(e_63));
                {
                  j_63 = t;
                  if(((i_63 != NULL) && (i_63 != j_63)))
                    _fail(j_63);
                  else
                    i_63 = j_63;
                }
                t = not_null(i_63);
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  t_63 :
  if(match_cons(u_63, sym_LChoice_2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      {
        ATerm a_64 = NULL,c_64 = NULL;
        ATerm b_64 = NULL;
        t = SSLgetAnnotations(not_null(u_63));
        {
          b_64 = t;
          if(((a_64 != NULL) && (a_64 != b_64)))
            _fail(b_64);
          else
            a_64 = b_64;
        }
        {
          t = not_null(v_63);
          {
            ATerm e_64 = NULL;
            t = j_85(t);
            {
              c_64 = t;
              {
                t = not_null(w_63);
                {
                  ATerm g_64 = NULL;
                  t = k_85(t);
                  {
                    e_64 = t;
                    {
                      ATerm h_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_64), not_null(e_64)), not_null(a_64));
                      {
                        h_64 = t;
                        if(((g_64 != NULL) && (g_64 != h_64)))
                          _fail(h_64);
                        else
                          g_64 = h_64;
                      }
                      t = not_null(g_64);
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
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  s_64 :
  if(match_cons(t_64, sym_Choice_2))
    {
      u_64 = ATgetArgument(t_64, 0);
      v_64 = ATgetArgument(t_64, 1);
      {
        ATerm z_64 = NULL,b_65 = NULL;
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(t_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        {
          t = not_null(u_64);
          {
            ATerm d_65 = NULL;
            t = h_85(t);
            {
              b_65 = t;
              {
                t = not_null(v_64);
                {
                  ATerm f_65 = NULL;
                  t = i_85(t);
                  {
                    d_65 = t;
                    {
                      ATerm g_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(b_65), not_null(d_65)), not_null(z_64));
                      {
                        g_65 = t;
                        if(((f_65 != NULL) && (f_65 != g_65)))
                          _fail(g_65);
                        else
                          f_65 = g_65;
                      }
                      t = not_null(f_65);
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
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
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
                          LocalPopChoice(x_18);
                        }
                      else
                        {
                          t = w_18;
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
  ATerm o_65 = NULL;
  o_65 = t;
  {
    ATerm b_19;
    b_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATmakeAppl(sym_Defined_2, term_c_19, not_null(o_65)));
      {
        ATerm l_3 (ATerm t)
        {
          t = term_l_17;
          return(t);
        }
        t = assert_1(t, l_3);
      }
    }
    t = b_19;
    {
      ATerm e_19;
      e_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATmakeAppl(sym_Defined_2, term_h_19, not_null(o_65)));
        {
          ATerm m_3 (ATerm t)
          {
            t = term_c_15;
            return(t);
          }
          t = assert_1(t, m_3);
        }
      }
      t = e_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm s_65 = NULL;
  s_65 = t;
  {
    ATerm i_19;
    i_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_17, not_null(s_65)), term_k_19);
      {
        ATerm n_3 (ATerm t)
        {
          t = term_a_18;
          return(t);
        }
        t = assert_1(t, n_3);
      }
    }
    t = i_19;
    {
      ATerm l_19;
      l_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_17, not_null(s_65)), term_n_19);
        {
          ATerm o_3 (ATerm t)
          {
            t = term_y_17;
            return(t);
          }
          t = assert_1(t, o_3);
        }
      }
      t = l_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  d_66 = t;
  y_65 :
  if(match_cons(d_66, sym_Call_2))
    {
      e_66 = ATgetArgument(d_66, 0);
      g_66 = ATgetArgument(d_66, 1);
      z_65 :
      if(match_cons(e_66, sym_SVar_1))
        {
          f_66 = ATgetArgument(e_66, 0);
          a_66 :
          if(match_string(f_66, "innermost_1"))
            {
              b_66 :
              if(((ATgetType(g_66) == AT_LIST) && !(ATisEmpty(g_66))))
                {
                  h_66 = ATgetFirst((ATermList) g_66);
                  i_66 = (ATerm) ATgetNext((ATermList) g_66);
                  c_66 :
                  if(((ATgetType(i_66) == AT_LIST) && ATisEmpty(i_66)))
                    {
                      {
                        ATerm k_66 = NULL,m_66 = NULL;
                        ATerm p_3 (ATerm t)
                        {
                          ATerm q_3 (ATerm t)
                          {
                            t = term_o_19;
                            return(t);
                          }
                          t = say_1(t, q_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, p_3);
                        {
                          ATerm p_19;
                          p_19 = t;
                          {
                            ATerm l_66 = NULL;
                            t = new_0(t);
                            {
                              l_66 = t;
                              if(((k_66 != NULL) && (k_66 != l_66)))
                                _fail(l_66);
                              else
                                k_66 = l_66;
                            }
                          }
                          t = p_19;
                          {
                            ATerm q_19;
                            q_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_66)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = q_19;
                            {
                              ATerm r_19;
                              r_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_66)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = r_19;
                              {
                                ATerm n_66 = NULL;
                                t = not_null(h_66);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    n_66 = t;
                                    if(((m_66 != NULL) && (m_66 != n_66)))
                                      _fail(n_66);
                                    else
                                      m_66 = n_66;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(k_66), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_k_14, not_null(m_66)), (ATerm) ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_66)), (ATerm) ATempty)))), term_r_11))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm r_3 (ATerm t)
                                        {
                                          ATerm w_19 = t;
                                          int x_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              ;
                                              LocalPopChoice(x_19);
                                            }
                                          else
                                            {
                                              t = w_19;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, r_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm s_3 (ATerm t)
                                            {
                                              ATerm t_3 (ATerm t)
                                              {
                                                t = term_y_19;
                                                return(t);
                                              }
                                              t = say_1(t, t_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, s_3);
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
  ATerm r_66 (ATerm t)
  {
    ATerm c_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = c_20;
        t = _all(t, r_66);
      }
    return(t);
  }
  t = r_66(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm h_67 = NULL;
  ATerm h_20;
  h_20 = t;
  {
    ATerm i_67 = NULL;
    t = new_0(t);
    {
      i_67 = t;
      {
        if(((h_67 != NULL) && (h_67 != i_67)))
          _fail(i_67);
        else
          h_67 = i_67;
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_67)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(j_20);
            }
          else
            {
              t = i_20;
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
                t = if_verbose2_1(t, u_3);
                _fail(t);
              }
            }
          {
            ATerm l_20 = t;
            int m_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
                m_67 = t;
                u_66 :
                if(match_cons(m_67, sym_Seq_2))
                  {
                    n_67 = ATgetArgument(m_67, 0);
                    x_67 = ATgetArgument(m_67, 1);
                    v_66 :
                    if(match_cons(n_67, sym_All_1))
                      {
                        o_67 = ATgetArgument(n_67, 0);
                        w_66 :
                        if(match_cons(o_67, sym_Call_2))
                          {
                            p_67 = ATgetArgument(o_67, 0);
                            r_67 = ATgetArgument(o_67, 1);
                            x_66 :
                            if(match_cons(p_67, sym_SVar_1))
                              {
                                q_67 = ATgetArgument(p_67, 0);
                                y_66 :
                                if(match_string(q_67, "bottomup_1"))
                                  {
                                    z_66 :
                                    if(((ATgetType(r_67) == AT_LIST) && !(ATisEmpty(r_67))))
                                      {
                                        s_67 = ATgetFirst((ATermList) r_67);
                                        w_67 = (ATerm) ATgetNext((ATermList) r_67);
                                        a_67 :
                                        if(match_cons(s_67, sym_Call_2))
                                          {
                                            t_67 = ATgetArgument(s_67, 0);
                                            v_67 = ATgetArgument(s_67, 1);
                                            b_67 :
                                            if(match_cons(t_67, sym_SVar_1))
                                              {
                                                u_67 = ATgetArgument(t_67, 0);
                                                c_67 :
                                                if(((ATgetType(v_67) == AT_LIST) && ATisEmpty(v_67)))
                                                  {
                                                    d_67 :
                                                    if(((ATgetType(w_67) == AT_LIST) && ATisEmpty(w_67)))
                                                      {
                                                        e_67 :
                                                        if(match_cons(x_67, sym_Call_2))
                                                          {
                                                            y_67 = ATgetArgument(x_67, 0);
                                                            a_68 = ATgetArgument(x_67, 1);
                                                            f_67 :
                                                            if(match_cons(y_67, sym_SVar_1))
                                                              {
                                                                z_67 = ATgetArgument(y_67, 0);
                                                                g_67 :
                                                                if(((ATgetType(a_68) == AT_LIST) && ATisEmpty(a_68)))
                                                                  {
                                                                    {
                                                                      if(((h_67 != NULL) && (h_67 != u_67)))
                                                                        _fail(u_67);
                                                                      else
                                                                        h_67 = u_67;
                                                                      if(((h_67 != NULL) && (h_67 != z_67)))
                                                                        _fail(z_67);
                                                                      else
                                                                        h_67 = z_67;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(m_20);
              }
            else
              {
                t = l_20;
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm x_3 (ATerm t)
                    {
                      t = term_n_20;
                      return(t);
                    }
                    t = debug_1(t, x_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, w_3);
                  _fail(t);
                }
              }
            {
              ATerm y_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  t = term_o_20;
                  return(t);
                }
                t = say_1(t, z_3);
                return(t);
              }
              t = if_verbose2_1(t, y_3);
            }
          }
        }
      }
    }
  }
  t = h_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm c_69 = NULL,k_69 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm l_69 = NULL;
    t = new_0(t);
    {
      l_69 = t;
      {
        if(((c_69 != NULL) && (c_69 != l_69)))
          _fail(l_69);
        else
          c_69 = l_69;
        {
          ATerm q_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_69)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(r_20);
            }
          else
            {
              t = q_20;
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
                _fail(t);
              }
            }
          {
            ATerm z_20 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_69 = NULL,n_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,v_70 = NULL,w_70 = NULL,l_71 = NULL,r_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
                m_69 = t;
                f_68 :
                if(match_cons(m_69, sym_Call_2))
                  {
                    n_69 = ATgetArgument(m_69, 0);
                    r_69 = ATgetArgument(m_69, 1);
                    g_68 :
                    if(match_cons(n_69, sym_SVar_1))
                      {
                        q_69 = ATgetArgument(n_69, 0);
                        h_68 :
                        if(match_string(q_69, "bottomup_1"))
                          {
                            i_68 :
                            if(((ATgetType(r_69) == AT_LIST) && !(ATisEmpty(r_69))))
                              {
                                s_69 = ATgetFirst((ATermList) r_69);
                                y_71 = (ATerm) ATgetNext((ATermList) r_69);
                                j_68 :
                                if(match_cons(s_69, sym_Rec_2))
                                  {
                                    t_69 = ATgetArgument(s_69, 0);
                                    u_69 = ATgetArgument(s_69, 1);
                                    k_68 :
                                    if(match_cons(u_69, sym_Call_2))
                                      {
                                        v_69 = ATgetArgument(u_69, 0);
                                        h_70 = ATgetArgument(u_69, 1);
                                        l_68 :
                                        if(match_cons(v_69, sym_SVar_1))
                                          {
                                            w_69 = ATgetArgument(v_69, 0);
                                            m_68 :
                                            if(match_string(w_69, "try_1"))
                                              {
                                                n_68 :
                                                if(((ATgetType(h_70) == AT_LIST) && !(ATisEmpty(h_70))))
                                                  {
                                                    i_70 = ATgetFirst((ATermList) h_70);
                                                    x_71 = (ATerm) ATgetNext((ATermList) h_70);
                                                    o_68 :
                                                    if(match_cons(i_70, sym_Seq_2))
                                                      {
                                                        j_70 = ATgetArgument(i_70, 0);
                                                        n_70 = ATgetArgument(i_70, 1);
                                                        p_68 :
                                                        if(match_cons(j_70, sym_Call_2))
                                                          {
                                                            k_70 = ATgetArgument(j_70, 0);
                                                            m_70 = ATgetArgument(j_70, 1);
                                                            q_68 :
                                                            if(match_cons(k_70, sym_SVar_1))
                                                              {
                                                                l_70 = ATgetArgument(k_70, 0);
                                                                r_68 :
                                                                if(((ATgetType(m_70) == AT_LIST) && ATisEmpty(m_70)))
                                                                  {
                                                                    s_68 :
                                                                    if(match_cons(n_70, sym_Call_2))
                                                                      {
                                                                        o_70 = ATgetArgument(n_70, 0);
                                                                        w_70 = ATgetArgument(n_70, 1);
                                                                        t_68 :
                                                                        if(match_cons(o_70, sym_SVar_1))
                                                                          {
                                                                            v_70 = ATgetArgument(o_70, 0);
                                                                            u_68 :
                                                                            if(match_string(v_70, "innermost_1"))
                                                                              {
                                                                                v_68 :
                                                                                if(((ATgetType(w_70) == AT_LIST) && !(ATisEmpty(w_70))))
                                                                                  {
                                                                                    l_71 = ATgetFirst((ATermList) w_70);
                                                                                    w_71 = (ATerm) ATgetNext((ATermList) w_70);
                                                                                    w_68 :
                                                                                    if(match_cons(l_71, sym_Call_2))
                                                                                      {
                                                                                        r_71 = ATgetArgument(l_71, 0);
                                                                                        v_71 = ATgetArgument(l_71, 1);
                                                                                        x_68 :
                                                                                        if(match_cons(r_71, sym_SVar_1))
                                                                                          {
                                                                                            u_71 = ATgetArgument(r_71, 0);
                                                                                            y_68 :
                                                                                            if(((ATgetType(v_71) == AT_LIST) && ATisEmpty(v_71)))
                                                                                              {
                                                                                                z_68 :
                                                                                                if(((ATgetType(w_71) == AT_LIST) && ATisEmpty(w_71)))
                                                                                                  {
                                                                                                    a_69 :
                                                                                                    if(((ATgetType(x_71) == AT_LIST) && ATisEmpty(x_71)))
                                                                                                      {
                                                                                                        b_69 :
                                                                                                        if(((ATgetType(y_71) == AT_LIST) && ATisEmpty(y_71)))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((k_69 != NULL) && (k_69 != t_69)))
                                                                                                                _fail(t_69);
                                                                                                              else
                                                                                                                k_69 = t_69;
                                                                                                              {
                                                                                                                if(((c_69 != NULL) && (c_69 != l_70)))
                                                                                                                  _fail(l_70);
                                                                                                                else
                                                                                                                  c_69 = l_70;
                                                                                                                if(((k_69 != NULL) && (k_69 != u_71)))
                                                                                                                  _fail(u_71);
                                                                                                                else
                                                                                                                  k_69 = u_71;
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
                LocalPopChoice(d_21);
              }
            else
              {
                t = z_20;
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm d_4 (ATerm t)
                    {
                      t = term_f_21;
                      return(t);
                    }
                    t = debug_1(t, d_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, c_4);
                  _fail(t);
                }
              }
            {
              ATerm e_4 (ATerm t)
              {
                ATerm f_4 (ATerm t)
                {
                  t = term_i_21;
                  return(t);
                }
                t = say_1(t, f_4);
                return(t);
              }
              t = if_verbose2_1(t, e_4);
            }
          }
        }
      }
    }
  }
  t = p_20;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
  f_72 = t;
  c_72 :
  if(match_cons(f_72, sym_Call_2))
    {
      g_72 = ATgetArgument(f_72, 0);
      i_72 = ATgetArgument(f_72, 1);
      d_72 :
      if(match_cons(g_72, sym_SVar_1))
        {
          h_72 = ATgetArgument(g_72, 0);
          e_72 :
          if(((ATgetType(i_72) == AT_LIST) && ATisEmpty(i_72)))
            {
              t = not_null(h_72);
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm o_72 = NULL;
  ATerm q_72 = NULL,r_72 = NULL;
  o_72 = t;
  {
    ATerm s_72 = NULL;
    t = not_null(o_72);
    {
      ATerm t_72 = NULL;
      t = d_121(t);
      {
        s_72 = t;
        {
          if(((q_72 != NULL) && (q_72 != s_72)))
            _fail(s_72);
          else
            q_72 = s_72;
          {
            t = e_121(t);
            {
              t_72 = t;
              if(((r_72 != NULL) && (r_72 != t_72)))
                _fail(t_72);
              else
                r_72 = t_72;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), not_null(r_72));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  x_73 = t;
  l_73 :
  if(match_cons(x_73, sym__2))
    {
      y_73 = ATgetArgument(x_73, 0);
      z_73 = ATgetArgument(x_73, 1);
      {
        ATerm c_74 = NULL;
        if(((c_74 != NULL) && (c_74 != z_73)))
          _fail(z_73);
        else
          c_74 = z_73;
      }
    }
  else
    {
      if(match_cons(x_73, sym__3))
        {
          y_73 = ATgetArgument(x_73, 0);
          z_73 = ATgetArgument(x_73, 1);
          a_74 = ATgetArgument(x_73, 2);
          {
            ATerm i_74 = NULL;
            ATerm j_74 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), not_null(z_73));
            {
              t = zip_1(t, _id);
              {
                j_74 = t;
                if(((i_74 != NULL) && (i_74 != j_74)))
                  _fail(j_74);
                else
                  i_74 = j_74;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_74), not_null(a_74));
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
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  t = subs_args_0(t);
  {
    m_75 = t;
    l_75 :
    if(match_cons(m_75, sym__2))
      {
        n_75 = ATgetArgument(m_75, 0);
        o_75 = ATgetArgument(m_75, 1);
        {
          t = not_null(o_75);
          {
            ATerm g_4 (ATerm t)
            {
              ATerm h_4 (ATerm t)
              {
                t = not_null(n_75);
                return(t);
              }
              t = SubsVar_2(t, o_120, h_4);
              t = p_120(t);
              return(t);
            }
            t = alltd_1(t, g_4);
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
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        t = split_2(t, _id, c_124);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm t_78 = NULL,u_78 = NULL,t_79 = NULL,u_79 = NULL,w_79 = NULL,x_79 = NULL;
            t_78 = t;
            t_75 :
            if(match_cons(t_78, sym__2))
              {
                u_78 = ATgetArgument(t_78, 0);
                x_79 = ATgetArgument(t_78, 1);
                u_75 :
                if(match_cons(u_78, sym_SDef_3))
                  {
                    t_79 = ATgetArgument(u_78, 0);
                    u_79 = ATgetArgument(u_78, 1);
                    w_79 = ATgetArgument(u_78, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_79), not_null(u_79), not_null(w_79));
                  }
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
          t = zip_1(t, j_4);
        }
        return(t);
      }
      t = Let_2(t, i_4, _id);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              t = split_2(t, _id, c_124);
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
                  b_80 = t;
                  r_78 :
                  if(match_cons(b_80, sym__2))
                    {
                      c_80 = ATgetArgument(b_80, 0);
                      f_80 = ATgetArgument(b_80, 1);
                      s_78 :
                      if(match_cons(c_80, sym_VarDec_2))
                        {
                          d_80 = ATgetArgument(c_80, 0);
                          e_80 = ATgetArgument(c_80, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_80), not_null(e_80));
                        }
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
            t = SDef_3(t, _id, k_4, _id);
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            {
              ATerm m_4 (ATerm t)
              {
                t = c_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, m_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  r_80 = t;
  q_80 :
  if(match_cons(r_80, sym_Rec_2))
    {
      s_80 = ATgetArgument(r_80, 0);
      t_80 = ATgetArgument(r_80, 1);
      {
        ATerm x_80 = NULL,z_80 = NULL;
        ATerm y_80 = NULL;
        t = SSLgetAnnotations(not_null(r_80));
        {
          y_80 = t;
          if(((x_80 != NULL) && (x_80 != y_80)))
            _fail(y_80);
          else
            x_80 = y_80;
        }
        {
          t = not_null(s_80);
          {
            ATerm b_81 = NULL;
            t = u_85(t);
            {
              z_80 = t;
              {
                t = not_null(t_80);
                {
                  ATerm d_81 = NULL;
                  t = v_85(t);
                  {
                    b_81 = t;
                    {
                      ATerm e_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_80), not_null(b_81)), not_null(x_80));
                      {
                        e_81 = t;
                        if(((d_81 != NULL) && (d_81 != e_81)))
                          _fail(e_81);
                        else
                          d_81 = e_81;
                      }
                      t = not_null(d_81);
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
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  t_81 = t;
  s_81 :
  if(match_cons(t_81, sym_SDef_3))
    {
      u_81 = ATgetArgument(t_81, 0);
      v_81 = ATgetArgument(t_81, 1);
      w_81 = ATgetArgument(t_81, 2);
      {
        ATerm d_83 = NULL,f_83 = NULL;
        ATerm e_83 = NULL;
        t = SSLgetAnnotations(not_null(t_81));
        {
          e_83 = t;
          if(((d_83 != NULL) && (d_83 != e_83)))
            _fail(e_83);
          else
            d_83 = e_83;
        }
        {
          t = not_null(u_81);
          {
            ATerm h_83 = NULL;
            t = y_85(t);
            {
              f_83 = t;
              {
                t = not_null(v_81);
                {
                  ATerm j_83 = NULL;
                  t = z_85(t);
                  {
                    h_83 = t;
                    {
                      t = not_null(w_81);
                      {
                        ATerm l_83 = NULL;
                        t = a_86(t);
                        {
                          j_83 = t;
                          {
                            ATerm m_83 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_83), not_null(h_83), not_null(j_83)), not_null(d_83));
                            {
                              m_83 = t;
                              if(((l_83 != NULL) && (l_83 != m_83)))
                                _fail(m_83);
                              else
                                l_83 = m_83;
                            }
                            t = not_null(l_83);
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
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
  z_83 = t;
  y_83 :
  if(match_cons(z_83, sym_Let_2))
    {
      a_84 = ATgetArgument(z_83, 0);
      b_84 = ATgetArgument(z_83, 1);
      {
        ATerm f_84 = NULL,h_84 = NULL;
        ATerm g_84 = NULL;
        t = SSLgetAnnotations(not_null(z_83));
        {
          g_84 = t;
          if(((f_84 != NULL) && (f_84 != g_84)))
            _fail(g_84);
          else
            f_84 = g_84;
        }
        {
          t = not_null(a_84);
          {
            ATerm n_84 = NULL;
            t = w_85(t);
            {
              h_84 = t;
              {
                t = not_null(b_84);
                {
                  ATerm r_84 = NULL;
                  t = x_85(t);
                  {
                    n_84 = t;
                    {
                      ATerm u_84 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(h_84), not_null(n_84)), not_null(f_84));
                      {
                        u_84 = t;
                        if(((r_84 != NULL) && (r_84 != u_84)))
                          _fail(u_84);
                        else
                          r_84 = u_84;
                      }
                      t = not_null(r_84);
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
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_124, d_124);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_124, f_124, d_124);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = Rec_2(t, f_124, d_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  b_85 :
  if(match_cons(c_85, sym_Rec_2))
    {
      d_85 = ATgetArgument(c_85, 0);
      e_85 = ATgetArgument(c_85, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_85));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm s_85 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL;
  s_85 = t;
  r_85 :
  if(match_cons(s_85, sym_SDef_3))
    {
      b_86 = ATgetArgument(s_85, 0);
      c_86 = ATgetArgument(s_85, 1);
      d_86 = ATgetArgument(s_85, 2);
      {
        t = not_null(c_86);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
            h_86 = t;
            q_85 :
            if(match_cons(h_86, sym_VarDec_2))
              {
                i_86 = ATgetArgument(h_86, 0);
                j_86 = ATgetArgument(h_86, 1);
                t = not_null(i_86);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_4);
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
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  s_86 :
  if(match_cons(t_86, sym_Let_2))
    {
      u_86 = ATgetArgument(t_86, 0);
      v_86 = ATgetArgument(t_86, 1);
      {
        t = not_null(u_86);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm y_86 = NULL,a_87 = NULL,b_87 = NULL,d_87 = NULL;
            y_86 = t;
            r_86 :
            if(match_cons(y_86, sym_SDef_3))
              {
                a_87 = ATgetArgument(y_86, 0);
                b_87 = ATgetArgument(y_86, 1);
                d_87 = ATgetArgument(y_86, 2);
                t = not_null(a_87);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_4);
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
  ATerm p_87 = NULL,q_87 = NULL;
  p_87 = t;
  o_87 :
  if(match_cons(p_87, sym_SVar_1))
    {
      q_87 = ATgetArgument(p_87, 0);
      {
        ATerm t_87 = NULL,v_87 = NULL;
        ATerm u_87 = NULL;
        t = SSLgetAnnotations(not_null(p_87));
        {
          u_87 = t;
          if(((t_87 != NULL) && (t_87 != u_87)))
            _fail(u_87);
          else
            t_87 = u_87;
        }
        {
          t = not_null(q_87);
          {
            ATerm x_87 = NULL;
            t = t_85(t);
            {
              v_87 = t;
              {
                ATerm z_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(v_87)), not_null(t_87));
                {
                  z_87 = t;
                  if(((x_87 != NULL) && (x_87 != z_87)))
                    _fail(z_87);
                  else
                    x_87 = z_87;
                }
                t = not_null(x_87);
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
  ATerm p_4 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, p_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm y_123 (ATerm))
{
  t = Scope_2(t, y_123, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm s_88 = NULL,t_88 = NULL;
  s_88 = t;
  r_88 :
  if(match_cons(s_88, sym_DynamicRules_1))
    {
      t_88 = ATgetArgument(s_88, 0);
      {
        ATerm w_88 = NULL,y_88 = NULL;
        ATerm x_88 = NULL;
        t = SSLgetAnnotations(not_null(s_88));
        {
          x_88 = t;
          if(((w_88 != NULL) && (w_88 != x_88)))
            _fail(x_88);
          else
            w_88 = x_88;
        }
        {
          t = not_null(t_88);
          {
            ATerm a_89 = NULL;
            t = y_87(t);
            {
              y_88 = t;
              {
                ATerm b_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(y_88)), not_null(w_88));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL;
  m_89 = t;
  l_89 :
  if(match_cons(m_89, sym_Scope_2))
    {
      n_89 = ATgetArgument(m_89, 0);
      o_89 = ATgetArgument(m_89, 1);
      {
        ATerm s_89 = NULL,u_89 = NULL;
        ATerm t_89 = NULL;
        t = SSLgetAnnotations(not_null(m_89));
        {
          t_89 = t;
          if(((s_89 != NULL) && (s_89 != t_89)))
            _fail(t_89);
          else
            s_89 = t_89;
        }
        {
          t = not_null(n_89);
          {
            ATerm w_89 = NULL;
            t = s_84(t);
            {
              u_89 = t;
              {
                t = not_null(o_89);
                {
                  ATerm y_89 = NULL;
                  t = t_84(t);
                  {
                    w_89 = t;
                    {
                      ATerm z_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_89), not_null(w_89)), not_null(s_89));
                      {
                        z_89 = t;
                        if(((y_89 != NULL) && (y_89 != z_89)))
                          _fail(z_89);
                        else
                          y_89 = z_89;
                      }
                      t = not_null(y_89);
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
  ATerm z_21 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_124, z_123);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = z_21;
      t = DynamicRules_1(t, z_123);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym_DynamicRules_1))
    {
      i_90 = ATgetArgument(h_90, 0);
      {
        t = not_null(i_90);
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
  ATerm n_90 = NULL,o_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym_Var_1))
    {
      o_90 = ATgetArgument(n_90, 0);
      t = (ATerm) ATinsert(ATempty, not_null(o_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym__2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      {
        t = not_null(u_90);
        {
          ATerm z_90 (ATerm t)
          {
            ATerm f_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_90);
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
                      ATerm q_4 (ATerm t)
                      {
                        t = not_null(v_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_106, q_4);
                      t = z_90(t);
                      ;
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = j_22;
                      t = Cons_2(t, _id, z_90);
                    }
                }
              }
            return(t);
          }
          t = z_90(t);
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
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_107(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL;
        e_91 = t;
        d_91 :
        if(((ATgetType(e_91) == AT_LIST) && !(ATisEmpty(e_91))))
          {
            f_91 = ATgetFirst((ATermList) e_91);
            g_91 = (ATerm) ATgetNext((ATermList) e_91);
            {
              ATerm j_91 = NULL,l_91 = NULL;
              ATerm n_22;
              n_22 = t;
              {
                ATerm k_91 = NULL;
                t = not_null(f_91);
                {
                  t = i_107(t);
                  {
                    k_91 = t;
                    if(((j_91 != NULL) && (j_91 != k_91)))
                      _fail(k_91);
                    else
                      j_91 = k_91;
                  }
                }
              }
              t = n_22;
              {
                ATerm m_91 = NULL;
                t = not_null(g_91);
                {
                  t = foldr_3(t, g_107, h_107, i_107);
                  {
                    m_91 = t;
                    if(((l_91 != NULL) && (l_91 != m_91)))
                      _fail(m_91);
                    else
                      l_91 = m_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_91), not_null(l_91));
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
  ATerm u_91 = NULL;
  ATerm w_91 = NULL;
  u_91 = t;
  {
    ATerm x_91 = NULL;
    ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL;
    t = not_null(u_91);
    {
      x_91 = t;
      {
        t = SSL_explode_term(not_null(x_91));
        {
          z_91 = t;
          t_91 :
          if(match_cons(z_91, sym__2))
            {
              a_92 = ATgetArgument(z_91, 0);
              b_92 = ATgetArgument(z_91, 1);
              if(((w_91 != NULL) && (w_91 != b_92)))
                _fail(b_92);
              else
                w_91 = b_92;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_91);
      t = foldr_3(t, e_106, f_106, g_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
  h_92 = t;
  g_92 :
  if(match_cons(h_92, sym__2))
    {
      i_92 = ATgetArgument(h_92, 0);
      j_92 = ATgetArgument(h_92, 1);
      if(((i_92 != NULL) && (i_92 != j_92)))
        _fail(j_92);
      else
        i_92 = j_92;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_106 (ATerm), ATerm s_106 (ATerm))
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  o_92 :
  if(((ATgetType(p_92) == AT_LIST) && !(ATisEmpty(p_92))))
    {
      q_92 = ATgetFirst((ATermList) p_92);
      r_92 = (ATerm) ATgetNext((ATermList) p_92);
      {
        t = s_106(t);
        {
          ATerm r_4 (ATerm t)
          {
            ATerm u_92 = NULL;
            u_92 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_92), not_null(u_92));
              t = r_106(t);
            }
            return(t);
          }
          t = fetch_1(t, r_4);
        }
        t = not_null(r_92);
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
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  z_92 :
  if(match_cons(a_93, sym__2))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      {
        t = not_null(b_93);
        {
          ATerm g_93 (ATerm t)
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                {
                  ATerm s_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_4 (ATerm t)
                      {
                        t = not_null(c_93);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_106, s_4);
                      t = g_93(t);
                      ;
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = s_22;
                      t = Cons_2(t, _id, g_93);
                    }
                }
              }
            return(t);
          }
          t = g_93(t);
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
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  k_93 = t;
  i_93 :
  if(match_cons(k_93, sym__2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      j_93 :
      if(((ATgetType(m_93) == AT_LIST) && !(ATisEmpty(m_93))))
        {
          n_93 = ATgetFirst((ATermList) m_93);
          o_93 = (ATerm) ATgetNext((ATermList) m_93);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_93)), not_null(n_93)), not_null(o_93));
        }
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
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  d_94 = t;
  b_94 :
  if(((ATgetType(d_94) == AT_LIST) && !(ATisEmpty(d_94))))
    {
      e_94 = ATgetFirst((ATermList) d_94);
      h_94 = (ATerm) ATgetNext((ATermList) d_94);
      c_94 :
      if(match_cons(e_94, sym__2))
        {
          f_94 = ATgetArgument(e_94, 0);
          g_94 = ATgetArgument(e_94, 1);
          {
            ATerm l_94 = NULL,m_94 = NULL,s_94 = NULL,y_94 = NULL;
            ATerm w_22;
            w_22 = t;
            {
              ATerm n_94 = NULL;
              ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
              t = not_null(g_94);
              {
                n_94 = t;
                {
                  t = SSL_explode_term(not_null(n_94));
                  {
                    p_94 = t;
                    w_93 :
                    if(match_cons(p_94, sym__2))
                      {
                        q_94 = ATgetArgument(p_94, 0);
                        r_94 = ATgetArgument(p_94, 1);
                        {
                          if(((l_94 != NULL) && (l_94 != q_94)))
                            _fail(q_94);
                          else
                            l_94 = q_94;
                          if(((m_94 != NULL) && (m_94 != r_94)))
                            _fail(r_94);
                          else
                            m_94 = r_94;
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
            t = w_22;
            {
              ATerm a_23;
              a_23 = t;
              {
                ATerm t_94 = NULL;
                ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
                t = not_null(f_94);
                {
                  t_94 = t;
                  {
                    t = SSL_explode_term(not_null(t_94));
                    {
                      v_94 = t;
                      z_93 :
                      if(match_cons(v_94, sym__2))
                        {
                          w_94 = ATgetArgument(v_94, 0);
                          x_94 = ATgetArgument(v_94, 1);
                          {
                            if(((l_94 != NULL) && (l_94 != w_94)))
                              _fail(w_94);
                            else
                              l_94 = w_94;
                            if(((s_94 != NULL) && (s_94 != x_94)))
                              _fail(x_94);
                            else
                              s_94 = x_94;
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
              t = a_23;
              {
                ATerm z_94 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_94), not_null(m_94));
                {
                  t = zip_1(t, _id);
                  {
                    z_94 = t;
                    if(((y_94 != NULL) && (y_94 != z_94)))
                      _fail(z_94);
                    else
                      y_94 = z_94;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_94), not_null(h_94));
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
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,p_95 = NULL;
  j_95 = t;
  h_95 :
  if(((ATgetType(j_95) == AT_LIST) && !(ATisEmpty(j_95))))
    {
      k_95 = ATgetFirst((ATermList) j_95);
      p_95 = (ATerm) ATgetNext((ATermList) j_95);
      i_95 :
      if(match_cons(k_95, sym__2))
        {
          l_95 = ATgetArgument(k_95, 0);
          m_95 = ATgetArgument(k_95, 1);
          {
            ATerm r_95 = NULL;
            if(((l_95 != NULL) && (l_95 != m_95)))
              _fail(m_95);
            else
              l_95 = m_95;
            {
              if(((r_95 != NULL) && (r_95 != p_95)))
                _fail(p_95);
              else
                r_95 = p_95;
              t = not_null(r_95);
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
  ATerm t_95 (ATerm t)
  {
    ATerm h_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_111(t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = h_23;
        {
          t = l_111(t);
          t = t_95(t);
        }
      }
    return(t);
  }
  t = t_95(t);
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
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        ATerm v_95 = NULL;
        v_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_95));
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              ATerm v_23 = t;
              int w_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(w_23);
                }
              else
                {
                  t = v_23;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, w_4);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, t_4, u_4, v_4);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_96 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_122(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_95 = NULL;
              ATerm b_24;
              b_24 = t;
              {
                ATerm a_96 = NULL;
                t = w_122(t);
                {
                  a_96 = t;
                  if(((z_95 != NULL) && (z_95 != a_96)))
                    _fail(a_96);
                  else
                    z_95 = a_96;
                }
              }
              t = b_24;
              {
                ATerm x_4 (ATerm t)
                {
                  ATerm z_4 (ATerm t)
                  {
                    t = not_null(z_95);
                    return(t);
                  }
                  t = split_2(t, b_96, z_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm y_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_122(t, x_4, b_96, y_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, a_5, union_0, _id);
                }
              }
              ;
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              {
                ATerm b_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, b_5, union_0, b_96);
              }
            }
        }
      }
    return(t);
  }
  t = b_96(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, c_5, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL;
  n_96 = t;
  f_96 :
  if(match_cons(n_96, sym_LRule_1))
    {
      o_96 = ATgetArgument(n_96, 0);
      g_96 :
      if(match_cons(o_96, sym_Rule_3))
        {
          h_96 = ATgetArgument(o_96, 0);
          i_96 = ATgetArgument(o_96, 1);
          m_96 = ATgetArgument(o_96, 2);
          {
            t = not_null(h_96);
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
      if(match_cons(n_96, sym_Scope_2))
        {
          o_96 = ATgetArgument(n_96, 0);
          p_96 = ATgetArgument(n_96, 1);
          t = not_null(o_96);
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
  ATerm g_97 = NULL,h_97 = NULL;
  g_97 = t;
  f_97 :
  if(match_cons(g_97, sym_Var_1))
    {
      h_97 = ATgetArgument(g_97, 0);
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_97 = NULL,m_97 = NULL;
            ATerm l_97 = NULL;
            t = SSLgetAnnotations(not_null(g_97));
            {
              l_97 = t;
              if(((k_97 != NULL) && (k_97 != l_97)))
                _fail(l_97);
              else
                k_97 = l_97;
            }
            {
              t = not_null(h_97);
              {
                ATerm q_97 = NULL;
                t = q_0(t);
                {
                  m_97 = t;
                  {
                    ATerm r_97 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_97)), not_null(k_97));
                    {
                      r_97 = t;
                      if(((q_97 != NULL) && (q_97 != r_97)))
                        _fail(r_97);
                      else
                        q_97 = r_97;
                    }
                    t = not_null(q_97);
                  }
                }
              }
            }
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm u_97 = NULL,w_97 = NULL;
              ATerm v_97 = NULL;
              t = SSLgetAnnotations(not_null(g_97));
              {
                v_97 = t;
                if(((u_97 != NULL) && (u_97 != v_97)))
                  _fail(v_97);
                else
                  u_97 = v_97;
              }
              {
                t = not_null(h_97);
                {
                  ATerm y_97 = NULL;
                  t = q_0(t);
                  {
                    w_97 = t;
                    {
                      ATerm z_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_97)), not_null(u_97));
                      {
                        z_97 = t;
                        if(((y_97 != NULL) && (y_97 != z_97)))
                          _fail(z_97);
                        else
                          y_97 = z_97;
                      }
                      t = not_null(y_97);
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
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
  o_98 = t;
  n_98 :
  if(match_cons(o_98, sym__3))
    {
      p_98 = ATgetArgument(o_98, 0);
      q_98 = ATgetArgument(o_98, 1);
      r_98 = ATgetArgument(o_98, 2);
      {
        t = not_null(p_98);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm v_98 = NULL;
            v_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_98), not_null(r_98));
              t = q_121(t);
            }
            return(t);
          }
          ATerm e_5 (ATerm t)
          {
            ATerm x_98 = NULL;
            x_98 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_98), not_null(q_98));
              t = q_121(t);
            }
            return(t);
          }
          t = r_121(t, d_5, e_5, _id);
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
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym__2))
    {
      g_99 = ATgetArgument(f_99, 0);
      h_99 = ATgetArgument(f_99, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_99)), not_null(g_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,y_99 = NULL,z_99 = NULL;
  p_99 = t;
  m_99 :
  if(match_cons(p_99, sym__2))
    {
      q_99 = ATgetArgument(p_99, 0);
      v_99 = ATgetArgument(p_99, 1);
      n_99 :
      if(((ATgetType(q_99) == AT_LIST) && !(ATisEmpty(q_99))))
        {
          t_99 = ATgetFirst((ATermList) q_99);
          u_99 = (ATerm) ATgetNext((ATermList) q_99);
          o_99 :
          if(((ATgetType(v_99) == AT_LIST) && !(ATisEmpty(v_99))))
            {
              y_99 = ATgetFirst((ATermList) v_99);
              z_99 = (ATerm) ATgetNext((ATermList) v_99);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_99), not_null(y_99)), (ATerm) ATmakeAppl(sym__2, not_null(u_99), not_null(z_99)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  j_100 = t;
  g_100 :
  if(match_cons(j_100, sym__2))
    {
      k_100 = ATgetArgument(j_100, 0);
      l_100 = ATgetArgument(j_100, 1);
      h_100 :
      if(((ATgetType(k_100) == AT_LIST) && ATisEmpty(k_100)))
        {
          i_100 :
          if(((ATgetType(l_100) == AT_LIST) && ATisEmpty(l_100)))
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
  ATerm n_100 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          t = w_102(t);
          {
            t = _2(t, y_102, n_100);
            t = x_102(t);
          }
        }
      }
    return(t);
  }
  t = n_100(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm a_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_103);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm k_121 (ATerm), ATerm l_121 (ATerm, ATerm (ATerm)))
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  y_100 = t;
  x_100 :
  if(match_cons(y_100, sym__2))
    {
      z_100 = ATgetArgument(y_100, 0);
      a_101 = ATgetArgument(y_100, 1);
      {
        ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,p_101 = NULL;
        ATerm i_24;
        i_24 = t;
        {
          ATerm i_101 = NULL;
          t = not_null(z_100);
          {
            ATerm l_101 = NULL;
            t = k_121(t);
            {
              i_101 = t;
              {
                if(((f_101 != NULL) && (f_101 != i_101)))
                  _fail(i_101);
                else
                  f_101 = i_101;
                {
                  ATerm m_101 = NULL,o_101 = NULL;
                  t = map_1(t, new_0);
                  {
                    l_101 = t;
                    {
                      if(((g_101 != NULL) && (g_101 != l_101)))
                        _fail(l_101);
                      else
                        g_101 = l_101;
                      {
                        ATerm n_101 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_101), not_null(g_101));
                        {
                          t = zip_1(t, _id);
                          {
                            n_101 = t;
                            if(((m_101 != NULL) && (m_101 != n_101)))
                              _fail(n_101);
                            else
                              m_101 = n_101;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_101), not_null(a_101));
                          {
                            t = conc_0(t);
                            {
                              o_101 = t;
                              if(((h_101 != NULL) && (h_101 != o_101)))
                                _fail(o_101);
                              else
                                h_101 = o_101;
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
        t = i_24;
        {
          ATerm q_101 = NULL;
          t = not_null(z_100);
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(g_101);
              return(t);
            }
            t = l_121(t, f_5);
            {
              q_101 = t;
              if(((p_101 != NULL) && (p_101 != q_101)))
                _fail(q_101);
              else
                p_101 = q_101;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_101), not_null(a_101), not_null(h_101));
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
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  a_102 = t;
  y_101 :
  if(match_cons(a_102, sym__2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      z_101 :
      if(((ATgetType(c_102) == AT_LIST) && !(ATisEmpty(c_102))))
        {
          d_102 = ATgetFirst((ATermList) c_102);
          e_102 = (ATerm) ATgetNext((ATermList) c_102);
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_102), not_null(e_102));
        }
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
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL;
  m_102 = t;
  j_102 :
  if(match_cons(m_102, sym__2))
    {
      n_102 = ATgetArgument(m_102, 0);
      o_102 = ATgetArgument(m_102, 1);
      k_102 :
      if(((ATgetType(o_102) == AT_LIST) && !(ATisEmpty(o_102))))
        {
          p_102 = ATgetFirst((ATermList) o_102);
          s_102 = (ATerm) ATgetNext((ATermList) o_102);
          l_102 :
          if(match_cons(p_102, sym__2))
            {
              q_102 = ATgetArgument(p_102, 0);
              r_102 = ATgetArgument(p_102, 1);
              {
                ATerm u_102 = NULL;
                if(((n_102 != NULL) && (n_102 != q_102)))
                  _fail(q_102);
                else
                  n_102 = q_102;
                {
                  if(((u_102 != NULL) && (u_102 != r_102)))
                    _fail(r_102);
                  else
                    u_102 = r_102;
                  t = not_null(u_102);
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_121 (ATerm, ATerm (ATerm)))
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
  g_103 = t;
  e_103 :
  if(match_cons(g_103, sym__2))
    {
      h_103 = ATgetArgument(g_103, 0);
      i_103 = ATgetArgument(g_103, 1);
      {
        t = not_null(h_103);
        {
          ATerm g_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(i_103);
              return(t);
            }
            t = split_2(t, _id, h_5);
            t = lookup_0(t);
            return(t);
          }
          t = v_121(t, g_5);
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
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL;
  p_103 = t;
  o_103 :
  if(match_cons(p_103, sym__2))
    {
      q_103 = ATgetArgument(p_103, 0);
      r_103 = ATgetArgument(p_103, 1);
      {
        t = not_null(q_103);
        {
          ATerm i_5 (ATerm t)
          {
            ATerm u_103 = NULL;
            u_103 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_103), not_null(r_103));
              t = f_116(t);
            }
            return(t);
          }
          t = _all(t, i_5);
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
  ATerm y_103 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = all_dist_1(t, y_103);
      }
    return(t);
  }
  t = y_103(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm f_121 (ATerm, ATerm (ATerm)), ATerm g_121 (ATerm), ATerm h_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_121 (ATerm, ATerm (ATerm)))
{
  ATerm a_104 = NULL;
  a_104 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_104), (ATerm) ATempty);
    {
      ATerm d_104 (ATerm t)
      {
        ATerm j_5 (ATerm t)
        {
          ATerm x_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, f_121);
              ;
              LocalPopChoice(y_24);
            }
          else
            {
              t = x_24;
              {
                t = RnBinding_2(t, g_121, i_121);
                t = DistBinding_2(t, d_104, h_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, j_5);
        return(t);
      }
      t = d_104(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm e_104 (ATerm t, ATerm f_104 (ATerm))
  {
    t = Scope_2(t, f_104, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, e_104);
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
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  h_104 :
  if(((ATgetType(i_104) == AT_LIST) && !(ATisEmpty(i_104))))
    {
      j_104 = ATgetFirst((ATermList) i_104);
      k_104 = (ATerm) ATgetNext((ATermList) i_104);
      t = not_null(j_104);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  o_104 :
  if(match_cons(p_104, sym__2))
    {
      q_104 = ATgetArgument(p_104, 0);
      r_104 = ATgetArgument(p_104, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_104), not_null(r_104));
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
  ATerm x_104 = NULL;
  ATerm z_104 = NULL;
  x_104 = t;
  {
    ATerm a_105 = NULL;
    t = term_z_24;
    {
      t = r_108(t);
      {
        a_105 = t;
        if(((z_104 != NULL) && (z_104 != a_105)))
          _fail(a_105);
        else
          z_104 = a_105;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(x_104));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL;
  o_105 = t;
  m_105 :
  if(match_cons(o_105, sym_Call_2))
    {
      p_105 = ATgetArgument(o_105, 0);
      r_105 = ATgetArgument(o_105, 1);
      n_105 :
      if(match_cons(p_105, sym_SVar_1))
        {
          q_105 = ATgetArgument(p_105, 0);
          {
            ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL,q_106 = NULL;
            ATerm a_25;
            a_25 = t;
            {
              ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL,h_106 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_105)), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
              {
                ATerm k_5 (ATerm t)
                {
                  t = term_b_25;
                  return(t);
                }
                t = rewrite_1(t, k_5);
                {
                  z_105 = t;
                  h_105 :
                  if(match_cons(z_105, sym_Defined_3))
                    {
                      a_106 = ATgetArgument(z_105, 0);
                      b_106 = ATgetArgument(z_105, 1);
                      h_106 = ATgetArgument(z_105, 2);
                      i_105 :
                      if(match_string(a_106, "b_0"))
                        {
                          ATerm i_106 = NULL,l_106 = NULL,m_106 = NULL,p_106 = NULL;
                          if(((v_105 != NULL) && (v_105 != b_106)))
                            _fail(b_106);
                          else
                            v_105 = b_106;
                          {
                            if(((w_105 != NULL) && (w_105 != h_106)))
                              _fail(h_106);
                            else
                              w_105 = h_106;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_105), not_null(v_105), not_null(w_105));
                              {
                                t = strename_0(t);
                                {
                                  i_106 = t;
                                  g_105 :
                                  if(match_cons(i_106, sym_SDef_3))
                                    {
                                      l_106 = ATgetArgument(i_106, 0);
                                      m_106 = ATgetArgument(i_106, 1);
                                      p_106 = ATgetArgument(i_106, 2);
                                      {
                                        if(((q_105 != NULL) && (q_105 != l_106)))
                                          _fail(l_106);
                                        else
                                          q_105 = l_106;
                                        {
                                          if(((x_105 != NULL) && (x_105 != m_106)))
                                            _fail(m_106);
                                          else
                                            x_105 = m_106;
                                          if(((y_105 != NULL) && (y_105 != p_106)))
                                            _fail(p_106);
                                          else
                                            y_105 = p_106;
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
            t = a_25;
            {
              ATerm y_106 = NULL;
              t = not_null(x_105);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
                  u_106 = t;
                  k_105 :
                  if(match_cons(u_106, sym_VarDec_2))
                    {
                      v_106 = ATgetArgument(u_106, 0);
                      w_106 = ATgetArgument(u_106, 1);
                      t = not_null(v_106);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  y_106 = t;
                  if(((q_106 != NULL) && (q_106 != y_106)))
                    _fail(y_106);
                  else
                    q_106 = y_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_106), not_null(r_105), not_null(y_105));
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
  ATerm q_107 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm r_107 = NULL;
    t = new_0(t);
    {
      r_107 = t;
      {
        if(((q_107 != NULL) && (q_107 != r_107)))
          _fail(r_107);
        else
          q_107 = r_107;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_g_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_107)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm n_5 (ATerm t)
                  {
                    t = term_h_25;
                    return(t);
                  }
                  t = say_1(t, n_5);
                  return(t);
                }
                t = if_verbose2_1(t, m_5);
                _fail(t);
              }
            }
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
                s_107 = t;
                l_107 :
                if(match_cons(s_107, sym_LChoice_2))
                  {
                    t_107 = ATgetArgument(s_107, 0);
                    x_107 = ATgetArgument(s_107, 1);
                    m_107 :
                    if(match_cons(t_107, sym_Call_2))
                      {
                        u_107 = ATgetArgument(t_107, 0);
                        w_107 = ATgetArgument(t_107, 1);
                        n_107 :
                        if(match_cons(u_107, sym_SVar_1))
                          {
                            v_107 = ATgetArgument(u_107, 0);
                            o_107 :
                            if(((ATgetType(w_107) == AT_LIST) && ATisEmpty(w_107)))
                              {
                                p_107 :
                                if(match_cons(x_107, sym_Id_0))
                                  {
                                    if(((q_107 != NULL) && (q_107 != v_107)))
                                      _fail(v_107);
                                    else
                                      q_107 = v_107;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm p_5 (ATerm t)
                    {
                      t = term_k_25;
                      return(t);
                    }
                    t = debug_1(t, p_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, o_5);
                  _fail(t);
                }
              }
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  t = term_l_25;
                  return(t);
                }
                t = say_1(t, r_5);
                return(t);
              }
              t = if_verbose2_1(t, q_5);
            }
          }
        }
      }
    }
  }
  t = c_25;
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
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  f_108 = t;
  e_108 :
  if(match_cons(f_108, sym__2))
    {
      g_108 = ATgetArgument(f_108, 0);
      h_108 = ATgetArgument(f_108, 1);
      {
        ATerm k_108 = NULL,q_108 = NULL,s_108 = NULL;
        ATerm m_25;
        m_25 = t;
        {
          ATerm t_108 = NULL;
          ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
          t = p_108(t);
          {
            t_108 = t;
            {
              if(((k_108 != NULL) && (k_108 != t_108)))
                _fail(t_108);
              else
                k_108 = t_108;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_108), not_null(g_108), not_null(h_108));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_108), term_z_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_108 = t;
                      d_108 :
                      if(((ATgetType(u_108) == AT_LIST) && !(ATisEmpty(u_108))))
                        {
                          v_108 = ATgetFirst((ATermList) u_108);
                          w_108 = (ATerm) ATgetNext((ATermList) u_108);
                          {
                            if(((q_108 != NULL) && (q_108 != v_108)))
                              _fail(v_108);
                            else
                              q_108 = v_108;
                            {
                              if(((s_108 != NULL) && (s_108 != w_108)))
                                _fail(w_108);
                              else
                                s_108 = w_108;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_108), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(s_108)), (ATerm) ATinsert(CheckATermList(not_null(q_108)), not_null(g_108))));
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
        t = m_25;
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
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_SDef_3))
    {
      f_109 = ATgetArgument(e_109, 0);
      g_109 = ATgetArgument(e_109, 1);
      h_109 = ATgetArgument(e_109, 2);
      {
        ATerm p_25;
        p_25 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_109)), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_3, term_q_25, not_null(g_109), not_null(h_109)));
          {
            ATerm s_5 (ATerm t)
            {
              t = term_b_25;
              return(t);
            }
            t = assert_1(t, s_5);
          }
        }
        t = p_25;
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
  ATerm r_109 = NULL,s_109 = NULL;
  r_109 = t;
  q_109 :
  if(match_cons(r_109, sym_Strategies_1))
    {
      s_109 = ATgetArgument(r_109, 0);
      {
        ATerm v_109 = NULL,x_109 = NULL;
        ATerm w_109 = NULL;
        t = SSLgetAnnotations(not_null(r_109));
        {
          w_109 = t;
          if(((v_109 != NULL) && (v_109 != w_109)))
            _fail(w_109);
          else
            v_109 = w_109;
        }
        {
          t = not_null(s_109);
          {
            ATerm z_109 = NULL;
            t = c_87(t);
            {
              x_109 = t;
              {
                ATerm a_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(x_109)), not_null(v_109));
                {
                  a_110 = t;
                  if(((z_109 != NULL) && (z_109 != a_110)))
                    _fail(a_110);
                  else
                    z_109 = a_110;
                }
                t = not_null(z_109);
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
  ATerm k_110 = NULL,l_110 = NULL;
  k_110 = t;
  j_110 :
  if(match_cons(k_110, sym_Signature_1))
    {
      l_110 = ATgetArgument(k_110, 0);
      {
        ATerm o_110 = NULL,q_110 = NULL;
        ATerm p_110 = NULL;
        t = SSLgetAnnotations(not_null(k_110));
        {
          p_110 = t;
          if(((o_110 != NULL) && (o_110 != p_110)))
            _fail(p_110);
          else
            o_110 = p_110;
        }
        {
          t = not_null(l_110);
          {
            ATerm s_110 = NULL;
            t = z_86(t);
            {
              q_110 = t;
              {
                ATerm t_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(q_110)), not_null(o_110));
                {
                  t_110 = t;
                  if(((s_110 != NULL) && (s_110 != t_110)))
                    _fail(t_110);
                  else
                    s_110 = t_110;
                }
                t = not_null(s_110);
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
  ATerm f_111 = NULL,g_111 = NULL;
  f_111 = t;
  e_111 :
  if(match_cons(f_111, sym_Specification_1))
    {
      g_111 = ATgetArgument(f_111, 0);
      {
        ATerm j_111 = NULL,r_111 = NULL;
        ATerm q_111 = NULL;
        t = SSLgetAnnotations(not_null(f_111));
        {
          q_111 = t;
          if(((j_111 != NULL) && (j_111 != q_111)))
            _fail(q_111);
          else
            j_111 = q_111;
        }
        {
          t = not_null(g_111);
          {
            ATerm t_111 = NULL;
            t = e_87(t);
            {
              r_111 = t;
              {
                ATerm u_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_111)), not_null(j_111));
                {
                  u_111 = t;
                  if(((t_111 != NULL) && (t_111 != u_111)))
                    _fail(u_111);
                  else
                    t_111 = u_111;
                }
                t = not_null(t_111);
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
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, x_5);
        return(t);
      }
      t = Cons_2(t, w_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, u_5, v_5);
    return(t);
  }
  t = Specification_1(t, t_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm f_112 = NULL,g_112 = NULL,h_112 = NULL;
  f_112 = t;
  e_112 :
  if(match_cons(f_112, sym__2))
    {
      g_112 = ATgetArgument(f_112, 0);
      h_112 = ATgetArgument(f_112, 1);
      {
        ATerm l_112 = NULL,n_112 = NULL;
        ATerm m_112 = NULL;
        t = SSLgetAnnotations(not_null(f_112));
        {
          m_112 = t;
          if(((l_112 != NULL) && (l_112 != m_112)))
            _fail(m_112);
          else
            l_112 = m_112;
        }
        {
          t = not_null(g_112);
          {
            ATerm p_112 = NULL;
            t = z_82(t);
            {
              n_112 = t;
              {
                t = not_null(h_112);
                {
                  ATerm r_112 = NULL;
                  t = a_83(t);
                  {
                    p_112 = t;
                    {
                      ATerm s_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_112), not_null(p_112)), not_null(l_112));
                      {
                        s_112 = t;
                        if(((r_112 != NULL) && (r_112 != s_112)))
                          _fail(s_112);
                        else
                          r_112 = s_112;
                      }
                      t = not_null(r_112);
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
  ATerm a_113 = NULL;
  ATerm r_25;
  r_25 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm b_113 = NULL,c_113 = NULL;
      b_113 = t;
      z_112 :
      if(match_cons(b_113, sym_Program_1))
        {
          c_113 = ATgetArgument(b_113, 0);
          if(((a_113 != NULL) && (a_113 != c_113)))
            _fail(c_113);
          else
            a_113 = c_113;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_25), not_null(a_113)), term_s_25));
      {
        t = printnl_0(t);
        {
          t = term_u_25;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym__2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      {
        ATerm v_25;
        v_25 = t;
        t = SSL_printnl(not_null(h_113), not_null(i_113));
        t = v_25;
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
  ATerm n_113 = NULL;
  n_113 = t;
  t = SSL_implode_string(not_null(n_113));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL;
        s_113 = t;
        r_113 :
        if(((ATgetType(s_113) == AT_LIST) && !(ATisEmpty(s_113))))
          {
            t_113 = ATgetFirst((ATermList) s_113);
            u_113 = (ATerm) ATgetNext((ATermList) s_113);
            {
              t = not_null(t_113);
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(u_113);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_5);
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
  ATerm e_114 = NULL;
  ATerm g_114 = NULL;
  e_114 = t;
  {
    ATerm h_114 = NULL;
    ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL;
    t = not_null(e_114);
    {
      h_114 = t;
      {
        t = SSL_explode_term(not_null(h_114));
        {
          j_114 = t;
          c_114 :
          if(match_cons(j_114, sym__2))
            {
              k_114 = ATgetArgument(j_114, 0);
              l_114 = ATgetArgument(j_114, 1);
              d_114 :
              if(match_string(k_114, ""))
                {
                  if(((g_114 != NULL) && (g_114 != l_114)))
                    _fail(l_114);
                  else
                    g_114 = l_114;
                }
              else
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
      t = not_null(g_114);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm p_114 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_114);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          t = Nil_0(t);
          t = j_101(t);
        }
      }
    return(t);
  }
  t = p_114(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  s_114 = t;
  r_114 :
  if(match_cons(s_114, sym__2))
    {
      t_114 = ATgetArgument(s_114, 0);
      u_114 = ATgetArgument(s_114, 1);
      {
        t = not_null(t_114);
        {
          ATerm a_6 (ATerm t)
          {
            t = not_null(u_114);
            return(t);
          }
          t = at_end_1(t, a_6);
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
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_114 = NULL;
  z_114 = t;
  t = SSL_explode_string(not_null(z_114));
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
  ATerm d_115 = NULL;
  d_115 = t;
  t = SSL_is_string(not_null(d_115));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_6);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            {
              ATerm o_115 = NULL,r_115 = NULL,s_115 = NULL;
              o_115 = t;
              n_115 :
              if(match_cons(o_115, sym_Path_1))
                {
                  r_115 = ATgetArgument(o_115, 0);
                  t = not_null(r_115);
                }
              else
                {
                  if(match_cons(o_115, sym_Var_1))
                    {
                      r_115 = ATgetArgument(o_115, 0);
                      {
                        t = not_null(r_115);
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm c_6 (ATerm t)
                                {
                                  t = term_w_26;
                                  return(t);
                                }
                                t = debug_1(t, c_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_115, sym_Prefix_2))
                        {
                          r_115 = ATgetArgument(o_115, 0);
                          s_115 = ATgetArgument(o_115, 1);
                          {
                            ATerm x_115 = NULL,z_115 = NULL;
                            ATerm x_26;
                            x_26 = t;
                            {
                              ATerm y_115 = NULL;
                              t = not_null(r_115);
                              {
                                t = eval_config_0(t);
                                {
                                  y_115 = t;
                                  if(((x_115 != NULL) && (x_115 != y_115)))
                                    _fail(y_115);
                                  else
                                    x_115 = y_115;
                                }
                              }
                            }
                            t = x_26;
                            {
                              ATerm a_116 = NULL;
                              t = not_null(s_115);
                              {
                                t = eval_config_0(t);
                                {
                                  a_116 = t;
                                  if(((z_115 != NULL) && (z_115 != a_116)))
                                    _fail(a_116);
                                  else
                                    z_115 = a_116;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_115), not_null(z_115));
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
  ATerm j_116 = NULL;
  j_116 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(j_116));
    {
      t = table_get_0(t);
      {
        ATerm d_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_26;
            z_26 = t;
            {
              ATerm l_116 = NULL;
              ATerm m_116 = NULL;
              m_116 = t;
              if(((l_116 != NULL) && (l_116 != m_116)))
                _fail(m_116);
              else
                l_116 = m_116;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_26, not_null(j_116), not_null(l_116));
                t = table_put_0(t);
              }
            }
            t = z_26;
          }
          return(t);
        }
        t = try_1(t, d_6);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
  r_116 = t;
  q_116 :
  if(match_cons(r_116, sym__2))
    {
      s_116 = ATgetArgument(r_116, 0);
      t_116 = ATgetArgument(r_116, 1);
      t = SSL_WriteToTextFile(not_null(s_116), not_null(t_116));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_117 = NULL,c_117 = NULL,d_117 = NULL;
  a_117 = t;
  y_116 :
  if(match_cons(a_117, sym__2))
    {
      c_117 = ATgetArgument(a_117, 0);
      d_117 = ATgetArgument(a_117, 1);
      t = SSL_WriteToBinaryFile(not_null(c_117), not_null(d_117));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_117 = NULL;
  ATerm c_27;
  c_27 = t;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm d_27 = t;
      int e_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            ATerm a_118 = NULL,b_118 = NULL;
            a_118 = t;
            n_117 :
            if(match_cons(a_118, sym_Output_1))
              {
                b_118 = ATgetArgument(a_118, 0);
                if(((v_117 != NULL) && (v_117 != b_118)))
                  _fail(b_118);
                else
                  v_117 = b_118;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_6);
          ;
          LocalPopChoice(e_27);
        }
      else
        {
          t = d_27;
          {
            ATerm c_118 = NULL;
            t = term_f_27;
            {
              c_118 = t;
              if(((v_117 != NULL) && (v_117 != c_118)))
                _fail(c_118);
              else
                v_117 = c_118;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_6, _id);
  }
  t = c_27;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        t = not_null(v_117);
        return(t);
      }
      t = split_2(t, h_6, _id);
      return(t);
    }
    t = _2(t, _id, g_6);
    {
      ATerm j_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            ATerm j_6 (ATerm t)
            {
              ATerm d_118 = NULL;
              d_118 = t;
              u_117 :
              if(!(match_cons(d_118, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_6);
            return(t);
          }
          t = _2(t, i_6, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_27);
        }
      else
        {
          t = j_27;
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
  ATerm j_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL;
  ATerm p_27;
  p_27 = t;
  t = dtime_0(t);
  t = p_27;
  {
    t = b_117(t);
    {
      ATerm q_27;
      q_27 = t;
      {
        ATerm k_118 = NULL;
        t = dtime_0(t);
        {
          k_118 = t;
          if(((j_118 != NULL) && (j_118 != k_118)))
            _fail(k_118);
          else
            j_118 = k_118;
        }
      }
      t = q_27;
      {
        l_118 = t;
        i_118 :
        if(match_cons(l_118, sym__2))
          {
            m_118 = ATgetArgument(l_118, 0);
            n_118 = ATgetArgument(l_118, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_118)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_118))), not_null(n_118));
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
  ATerm r_27;
  r_27 = t;
  {
    ATerm u_118 = NULL,w_118 = NULL;
    ATerm y_27;
    y_27 = t;
    {
      ATerm v_118 = NULL;
      t = x_108(t);
      {
        v_118 = t;
        if(((u_118 != NULL) && (u_118 != v_118)))
          _fail(v_118);
        else
          u_118 = v_118;
      }
    }
    t = y_27;
    {
      ATerm x_118 = NULL;
      x_118 = t;
      if(((w_118 != NULL) && (w_118 != x_118)))
        _fail(x_118);
      else
        w_118 = x_118;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_118)), not_null(u_118)));
        t = printnl_0(t);
      }
    }
  }
  t = r_27;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_119 = NULL;
  ATerm z_27 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_119 = NULL;
      c_119 = t;
      {
        if(((b_119 != NULL) && (b_119 != c_119)))
          _fail(c_119);
        else
          b_119 = c_119;
        t = SSL_ReadFromFile(not_null(b_119));
      }
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = z_27;
      {
        ATerm k_6 (ATerm t)
        {
          t = term_j_28;
          return(t);
        }
        t = debug_1(t, k_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm g_119 = NULL,j_119 = NULL;
  ATerm l_28;
  l_28 = t;
  {
    ATerm h_119 = NULL;
    t = w_99(t);
    {
      h_119 = t;
      if(((g_119 != NULL) && (g_119 != h_119)))
        _fail(h_119);
      else
        g_119 = h_119;
    }
  }
  t = l_28;
  {
    ATerm k_119 = NULL;
    t = x_99(t);
    {
      k_119 = t;
      if(((j_119 != NULL) && (j_119 != k_119)))
        _fail(k_119);
      else
        j_119 = k_119;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_119), not_null(j_119));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_119 = NULL;
  ATerm m_28;
  m_28 = t;
  {
    ATerm n_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_6 (ATerm t)
        {
          ATerm r_119 = NULL,s_119 = NULL;
          r_119 = t;
          o_119 :
          if(match_cons(r_119, sym_Input_1))
            {
              s_119 = ATgetArgument(r_119, 0);
              if(((q_119 != NULL) && (q_119 != s_119)))
                _fail(s_119);
              else
                q_119 = s_119;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_6);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = n_28;
        {
          ATerm t_119 = NULL;
          t = term_v_28;
          {
            t_119 = t;
            if(((q_119 != NULL) && (q_119 != t_119)))
              _fail(t_119);
            else
              q_119 = t_119;
          }
        }
      }
  }
  t = m_28;
  {
    ATerm m_6 (ATerm t)
    {
      t = not_null(q_119);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm x_119 = NULL;
    x_119 = t;
    w_119 :
    if(!(match_string(x_119, "-v")))
      {
        if(!(match_string(x_119, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_x_28;
    t = set_config_0(t);
    t = term_y_28;
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_z_28;
    return(t);
  }
  t = Option_3(t, n_6, o_6, p_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm a_120 = NULL;
    a_120 = t;
    y_119 :
    if(!(match_string(a_120, "-k")))
      {
        if(!(match_string(a_120, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm a_29;
    a_29 = t;
    {
      ATerm b_120 = NULL;
      ATerm c_120 = NULL;
      t = string_to_int_0(t);
      {
        c_120 = t;
        if(((b_120 != NULL) && (b_120 != c_120)))
          _fail(c_120);
        else
          b_120 = c_120;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(b_120));
        t = set_config_0(t);
      }
    }
    t = a_29;
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_c_29;
    return(t);
  }
  t = ArgOption_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_120 = NULL;
  f_120 = t;
  t = SSL_string_to_int(not_null(f_120));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_120 = NULL;
        w_120 = t;
        r_120 :
        if(!(match_string(w_120, "-S")))
          {
            if(!(match_string(w_120, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_n_29;
        t = set_config_0(t);
        t = term_p_29;
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        t = term_s_29;
        return(t);
      }
      t = Option_3(t, v_6, w_6, x_6);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 (ATerm t)
            {
              ATerm x_120 = NULL;
              x_120 = t;
              s_120 :
              if(!(match_string(x_120, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_6 (ATerm t)
            {
              ATerm a_121 = NULL;
              ATerm v_29;
              v_29 = t;
              {
                ATerm y_120 = NULL;
                ATerm z_120 = NULL;
                t = string_to_int_0(t);
                {
                  z_120 = t;
                  if(((y_120 != NULL) && (y_120 != z_120)))
                    _fail(z_120);
                  else
                    y_120 = z_120;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(y_120));
                  t = set_config_0(t);
                }
              }
              t = v_29;
              {
                ATerm b_121 = NULL;
                b_121 = t;
                if(((a_121 != NULL) && (a_121 != b_121)))
                  _fail(b_121);
                else
                  a_121 = b_121;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_121));
              }
              return(t);
            }
            ATerm a_7 (ATerm t)
            {
              t = term_w_29;
              return(t);
            }
            t = ArgOption_3(t, y_6, z_6, a_7);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm b_7 (ATerm t)
              {
                ATerm c_121 = NULL;
                c_121 = t;
                v_120 :
                if(!(match_string(c_121, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_7 (ATerm t)
              {
                t = term_y_29;
                t = set_config_0(t);
                t = term_z_29;
                return(t);
              }
              ATerm d_7 (ATerm t)
              {
                t = term_a_30;
                return(t);
              }
              t = Option_3(t, b_7, c_7, d_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm t_121 = NULL;
    t_121 = t;
    o_121 :
    if(!(match_string(t_121, "-o")))
      {
        if(!(match_string(t_121, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    ATerm x_121 = NULL;
    ATerm k_30;
    k_30 = t;
    {
      ATerm u_121 = NULL;
      ATerm w_121 = NULL;
      w_121 = t;
      if(((u_121 != NULL) && (u_121 != w_121)))
        _fail(w_121);
      else
        u_121 = w_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_30, not_null(u_121));
        t = set_config_0(t);
      }
    }
    t = k_30;
    {
      ATerm y_121 = NULL;
      y_121 = t;
      if(((x_121 != NULL) && (x_121 != y_121)))
        _fail(y_121);
      else
        x_121 = y_121;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_121));
    }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_p_30;
    return(t);
  }
  t = ArgOption_3(t, e_7, f_7, g_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = r_30;
      {
        ATerm h_7 (ATerm t)
        {
          ATerm c_122 = NULL;
          c_122 = t;
          b_122 :
          if(!(match_string(c_122, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_7 (ATerm t)
        {
          t = term_x_30;
          t = set_config_0(t);
          t = term_y_30;
          return(t);
        }
        ATerm j_7 (ATerm t)
        {
          t = term_z_30;
          return(t);
        }
        t = Option_3(t, h_7, i_7, j_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  i_122 = t;
  g_122 :
  if(match_string(i_122, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(i_122) == AT_LIST) && !(ATisEmpty(i_122))))
        {
          j_122 = ATgetFirst((ATermList) i_122);
          k_122 = (ATerm) ATgetNext((ATermList) i_122);
          h_122 :
          if(((ATgetType(k_122) == AT_LIST) && !(ATisEmpty(k_122))))
            {
              l_122 = ATgetFirst((ATermList) k_122);
              m_122 = (ATerm) ATgetNext((ATermList) k_122);
              {
                ATerm q_122 = NULL;
                ATerm a_31;
                a_31 = t;
                {
                  t = not_null(j_122);
                  t = l_0(t);
                }
                t = a_31;
                {
                  ATerm r_122 = NULL;
                  t = not_null(l_122);
                  {
                    t = n_0(t);
                    {
                      r_122 = t;
                      if(((q_122 != NULL) && (q_122 != r_122)))
                        _fail(r_122);
                      else
                        q_122 = r_122;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_122)), not_null(q_122));
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
  ATerm k_7 (ATerm t)
  {
    ATerm c_123 = NULL;
    c_123 = t;
    z_122 :
    if(!(match_string(c_123, "-i")))
      {
        if(!(match_string(c_123, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm h_123 = NULL;
    ATerm b_31;
    b_31 = t;
    {
      ATerm d_123 = NULL;
      ATerm g_123 = NULL;
      g_123 = t;
      if(((d_123 != NULL) && (d_123 != g_123)))
        _fail(g_123);
      else
        d_123 = g_123;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_31, not_null(d_123));
        t = set_config_0(t);
      }
    }
    t = b_31;
    {
      ATerm i_123 = NULL;
      i_123 = t;
      if(((h_123 != NULL) && (h_123 != i_123)))
        _fail(i_123);
      else
        h_123 = i_123;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_123));
    }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = term_d_31;
    return(t);
  }
  t = ArgOption_3(t, k_7, l_7, m_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, term_p_31));
  {
    t = printnl_0(t);
    {
      t = term_u_25;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_123 = NULL;
  m_123 = t;
  t = SSL_TicksToSeconds(not_null(m_123));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL;
  r_123 = t;
  q_123 :
  if(match_cons(r_123, sym__2))
    {
      s_123 = ATgetArgument(r_123, 0);
      t_123 = ATgetArgument(r_123, 1);
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_123), not_null(t_123));
            ;
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            t = SSL_addr(not_null(s_123), not_null(t_123));
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
  ATerm s_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_107(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = s_31;
      {
        ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL;
        i_124 = t;
        h_124 :
        if(((ATgetType(i_124) == AT_LIST) && !(ATisEmpty(i_124))))
          {
            j_124 = ATgetFirst((ATermList) i_124);
            k_124 = (ATerm) ATgetNext((ATermList) i_124);
            {
              ATerm p_124 = NULL;
              ATerm q_124 = NULL;
              t = not_null(k_124);
              {
                t = foldr_2(t, e_107, f_107);
                {
                  q_124 = t;
                  if(((p_124 != NULL) && (p_124 != q_124)))
                    _fail(q_124);
                  else
                    p_124 = q_124;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_124), not_null(p_124));
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
  ATerm x_124 = NULL;
  ATerm z_124 = NULL;
  x_124 = t;
  {
    ATerm a_125 = NULL;
    ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL;
    t = not_null(x_124);
    {
      a_125 = t;
      {
        t = SSL_explode_term(not_null(a_125));
        {
          c_125 = t;
          w_124 :
          if(match_cons(c_125, sym__2))
            {
              d_125 = ATgetArgument(c_125, 0);
              e_125 = ATgetArgument(c_125, 1);
              if(((z_124 != NULL) && (z_124 != e_125)))
                _fail(e_125);
              else
                z_124 = e_125;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_124);
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
    ATerm n_7 (ATerm t)
    {
      t = term_j_29;
      return(t);
    }
    t = crush_2(t, n_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_125 = NULL,l_125 = NULL,m_125 = NULL;
  k_125 = t;
  j_125 :
  if(match_cons(k_125, sym__2))
    {
      l_125 = ATgetArgument(k_125, 0);
      m_125 = ATgetArgument(k_125, 1);
      {
        ATerm v_31;
        v_31 = t;
        {
          ATerm w_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_125), not_null(m_125));
              ;
              LocalPopChoice(z_31);
            }
          else
            {
              t = w_31;
              t = SSL_gtr(not_null(l_125), not_null(m_125));
            }
        }
        t = v_31;
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
  ATerm s_125 = NULL;
  ATerm a_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL;
      t_125 = t;
      r_125 :
      if(match_cons(t_125, sym__2))
        {
          u_125 = ATgetArgument(t_125, 0);
          v_125 = ATgetArgument(t_125, 1);
          {
            if(((s_125 != NULL) && (s_125 != u_125)))
              _fail(u_125);
            else
              s_125 = u_125;
            if(((s_125 != NULL) && (s_125 != v_125)))
              _fail(v_125);
            else
              s_125 = v_125;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = a_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_124 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    ATerm n_32;
    n_32 = t;
    {
      ATerm y_125 = NULL;
      ATerm z_125 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          z_125 = t;
          if(((y_125 != NULL) && (y_125 != z_125)))
            _fail(z_125);
          else
            y_125 = z_125;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_125), term_u_25);
        t = geq_0(t);
      }
    }
    t = n_32;
    t = n_124(t);
    return(t);
  }
  t = try_1(t, o_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm d_126 = NULL,f_126 = NULL;
    ATerm o_32;
    o_32 = t;
    {
      ATerm e_126 = NULL;
      t = run_time_0(t);
      {
        e_126 = t;
        if(((d_126 != NULL) && (d_126 != e_126)))
          _fail(e_126);
        else
          d_126 = e_126;
      }
    }
    t = o_32;
    {
      ATerm g_126 = NULL;
      t = term_p_32;
      {
        t = get_config_0(t);
        {
          g_126 = t;
          if(((f_126 != NULL) && (f_126 != g_126)))
            _fail(g_126);
          else
            f_126 = g_126;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_33), not_null(d_126)), term_g_33), not_null(f_126)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_7);
  {
    t = term_j_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_126 = NULL;
  n_126 = t;
  m_126 :
  if(match_cons(n_126, sym_Version_0))
    {
      ATerm p_126 = NULL,r_126 = NULL;
      ATerm i_33;
      i_33 = t;
      {
        ATerm q_126 = NULL;
        t = SSLgetAnnotations(not_null(n_126));
        {
          q_126 = t;
          if(((p_126 != NULL) && (p_126 != q_126)))
            _fail(q_126);
          else
            p_126 = q_126;
        }
      }
      t = i_33;
      {
        ATerm s_126 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_126));
        {
          s_126 = t;
          if(((r_126 != NULL) && (r_126 != s_126)))
            _fail(s_126);
          else
            r_126 = s_126;
        }
        t = not_null(r_126);
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
  ATerm q_7 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, q_7);
  t = z_116(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_126 = NULL;
  x_126 = t;
  t = SSL_table_create(not_null(x_126));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_127 = NULL;
  b_127 = t;
  {
    ATerm n_33;
    n_33 = t;
    {
      t = term_o_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_33, term_p_33, not_null(b_127));
          t = table_put_0(t);
        }
      }
    }
    t = n_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_127 = NULL;
  f_127 = t;
  t = SSL_table_destroy(not_null(f_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_127 = NULL;
  j_127 = t;
  t = SSL_exit(not_null(j_127));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
  n_127 = t;
  m_127 :
  if(((ATgetType(n_127) == AT_LIST) && ATisEmpty(n_127)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_127) == AT_LIST) && !(ATisEmpty(n_127))))
        {
          o_127 = ATgetFirst((ATermList) n_127);
          p_127 = (ATerm) ATgetNext((ATermList) n_127);
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
  ATerm q_33;
  q_33 = t;
  {
    ATerm s_127 = NULL;
    ATerm v_127 = NULL;
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm t_127 = NULL;
          ATerm u_127 = NULL;
          u_127 = t;
          if(((t_127 != NULL) && (t_127 != u_127)))
            _fail(u_127);
          else
            t_127 = u_127;
          t = (ATerm) ATinsert(ATempty, not_null(t_127));
        }
      }
    {
      v_127 = t;
      if(((s_127 != NULL) && (s_127 != v_127)))
        _fail(v_127);
      else
        s_127 = v_127;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_27, not_null(s_127));
      t = printnl_0(t);
    }
  }
  t = q_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm y_127 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = Cons_2(t, u_100, y_127);
      }
    return(t);
  }
  t = y_127(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm f_128 = NULL,g_128 = NULL,h_128 = NULL;
  h_128 = t;
  e_128 :
  if(((ATgetType(h_128) == AT_LIST) && !(ATisEmpty(h_128))))
    {
      f_128 = ATgetFirst((ATermList) h_128);
      g_128 = (ATerm) ATgetNext((ATermList) h_128);
      {
        ATerm k_128 = NULL;
        t = not_null(g_128);
        {
          ATerm v_33;
          v_33 = t;
          {
            ATerm l_128 = NULL,n_128 = NULL,p_128 = NULL;
            ATerm w_33;
            w_33 = t;
            {
              ATerm m_128 = NULL;
              t = k_0(t);
              {
                m_128 = t;
                if(((l_128 != NULL) && (l_128 != m_128)))
                  _fail(m_128);
                else
                  l_128 = m_128;
              }
            }
            t = w_33;
            {
              ATerm o_128 = NULL;
              t = not_null(f_128);
              {
                t = i_0(t);
                {
                  o_128 = t;
                  if(((n_128 != NULL) && (n_128 != o_128)))
                    _fail(o_128);
                  else
                    n_128 = o_128;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_128)), not_null(n_128));
                {
                  p_128 = t;
                  if(((k_128 != NULL) && (k_128 != p_128)))
                    _fail(p_128);
                  else
                    k_128 = p_128;
                }
              }
            }
          }
          t = v_33;
          {
            ATerm r_7 (ATerm t)
            {
              t = not_null(k_128);
              return(t);
            }
            t = reverse_acc_2(t, i_0, r_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_128) == AT_LIST) && ATisEmpty(h_128)))
        {
          {
            t = term_z_24;
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
  ATerm s_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm c_129 = NULL,d_129 = NULL;
  c_129 = t;
  b_129 :
  if(match_cons(c_129, sym_Program_1))
    {
      d_129 = ATgetArgument(c_129, 0);
      {
        ATerm g_129 = NULL,i_129 = NULL;
        ATerm h_129 = NULL;
        t = SSLgetAnnotations(not_null(c_129));
        {
          h_129 = t;
          if(((g_129 != NULL) && (g_129 != h_129)))
            _fail(h_129);
          else
            g_129 = h_129;
        }
        {
          t = not_null(d_129);
          {
            ATerm k_129 = NULL;
            t = n_95(t);
            {
              i_129 = t;
              {
                ATerm l_129 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_129)), not_null(g_129));
                {
                  l_129 = t;
                  if(((k_129 != NULL) && (k_129 != l_129)))
                    _fail(l_129);
                  else
                    k_129 = l_129;
                }
                t = not_null(k_129);
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
  ATerm u_129 = NULL;
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_129 = NULL;
      t = term_p_32;
      {
        t = get_config_0(t);
        {
          v_129 = t;
          if(((u_129 != NULL) && (u_129 != v_129)))
            _fail(v_129);
          else
            u_129 = v_129;
        }
      }
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm t_7 (ATerm t)
        {
          ATerm u_7 (ATerm t)
          {
            ATerm w_129 = NULL;
            w_129 = t;
            if(((u_129 != NULL) && (u_129 != w_129)))
              _fail(w_129);
            else
              u_129 = w_129;
            return(t);
          }
          t = Program_1(t, u_7);
          return(t);
        }
        t = option_defined_1(t, t_7);
      }
    }
  {
    ATerm v_7 (ATerm t)
    {
      ATerm w_7 (ATerm t)
      {
        t = not_null(u_129);
        return(t);
      }
      t = short_description_1(t, w_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_7);
    {
      t = term_a_34;
      {
        t = echo_0(t);
        {
          t = term_d_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_7 (ATerm t)
                {
                  ATerm x_129 = NULL;
                  ATerm y_129 = NULL;
                  y_129 = t;
                  if(((x_129 != NULL) && (x_129 != y_129)))
                    _fail(y_129);
                  else
                    x_129 = y_129;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_129)), term_e_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_7);
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm z_129 = NULL;
                    ATerm a_130 = NULL;
                    ATerm z_7 (ATerm t)
                    {
                      t = not_null(u_129);
                      return(t);
                    }
                    t = long_description_1(t, z_7);
                    {
                      a_130 = t;
                      if(((z_129 != NULL) && (z_129 != a_130)))
                        _fail(a_130);
                      else
                        z_129 = a_130;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_129)), term_f_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_7);
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
  ATerm k_130 = NULL,l_130 = NULL;
  k_130 = t;
  j_130 :
  if(match_cons(k_130, sym_Undefined_1))
    {
      l_130 = ATgetArgument(k_130, 0);
      {
        ATerm o_130 = NULL,q_130 = NULL;
        ATerm p_130 = NULL;
        t = SSLgetAnnotations(not_null(k_130));
        {
          p_130 = t;
          if(((o_130 != NULL) && (o_130 != p_130)))
            _fail(p_130);
          else
            o_130 = p_130;
        }
        {
          t = not_null(l_130);
          {
            ATerm s_130 = NULL;
            t = o_95(t);
            {
              q_130 = t;
              {
                ATerm t_130 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_130)), not_null(o_130));
                {
                  t_130 = t;
                  if(((s_130 != NULL) && (s_130 != t_130)))
                    _fail(t_130);
                  else
                    s_130 = t_130;
                }
                t = not_null(s_130);
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
  ATerm y_130 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_101, _id);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = Cons_2(t, _id, y_130);
      }
    return(t);
  }
  t = y_130(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_119 (ATerm))
{
  t = fetch_1(t, i_119);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_131 = NULL;
  d_131 = t;
  c_131 :
  if(match_cons(d_131, sym_Help_0))
    {
      ATerm f_131 = NULL,h_131 = NULL;
      ATerm i_34;
      i_34 = t;
      {
        ATerm g_131 = NULL;
        t = SSLgetAnnotations(not_null(d_131));
        {
          g_131 = t;
          if(((f_131 != NULL) && (f_131 != g_131)))
            _fail(g_131);
          else
            f_131 = g_131;
        }
      }
      t = i_34;
      {
        ATerm i_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_131));
        {
          i_131 = t;
          if(((h_131 != NULL) && (h_131 != i_131)))
            _fail(i_131);
          else
            h_131 = i_131;
        }
        t = not_null(h_131);
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
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_99(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
  o_131 = t;
  n_131 :
  if(match_cons(o_131, sym__2))
    {
      p_131 = ATgetArgument(o_131, 0);
      q_131 = ATgetArgument(o_131, 1);
      t = SSL_table_get(not_null(p_131), not_null(q_131));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL;
  x_131 = t;
  w_131 :
  if(match_cons(x_131, sym__3))
    {
      y_131 = ATgetArgument(x_131, 0);
      z_131 = ATgetArgument(x_131, 1);
      a_132 = ATgetArgument(x_131, 2);
      {
        ATerm l_34;
        l_34 = t;
        {
          ATerm e_132 = NULL;
          ATerm f_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_131), not_null(z_131));
          {
            ATerm m_34 = t;
            int n_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_34);
              }
            else
              {
                t = m_34;
                t = (ATerm) ATempty;
              }
            {
              f_132 = t;
              if(((e_132 != NULL) && (e_132 != f_132)))
                _fail(f_132);
              else
                e_132 = f_132;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_131), not_null(z_131), (ATerm) ATinsert(CheckATermList(not_null(e_132)), not_null(a_132)));
            t = table_put_0(t);
          }
        }
        t = l_34;
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
  ATerm j_132 = NULL;
  ATerm k_132 = NULL;
  t = term_z_24;
  {
    t = n_120(t);
    {
      k_132 = t;
      if(((j_132 != NULL) && (j_132 != k_132)))
        _fail(k_132);
      else
        j_132 = k_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_34, term_c_34, not_null(j_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL;
  q_132 = t;
  p_132 :
  if(match_string(q_132, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_132) == AT_LIST) && !(ATisEmpty(q_132))))
        {
          r_132 = ATgetFirst((ATermList) q_132);
          s_132 = (ATerm) ATgetNext((ATermList) q_132);
          {
            ATerm v_132 = NULL;
            ATerm o_34;
            o_34 = t;
            {
              t = not_null(r_132);
              t = a_0(t);
            }
            t = o_34;
            {
              ATerm w_132 = NULL;
              t = term_z_24;
              {
                t = d_0(t);
                {
                  w_132 = t;
                  if(((v_132 != NULL) && (v_132 != w_132)))
                    _fail(w_132);
                  else
                    v_132 = w_132;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_132)), not_null(v_132));
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
  ATerm a_8 (ATerm t)
  {
    ATerm b_133 = NULL;
    b_133 = t;
    a_133 :
    if(!(match_string(b_133, "--help")))
      {
        if(!(match_string(b_133, "-h")))
          {
            if(!(match_string(b_133, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    t = term_q_34;
    {
      t = set_config_0(t);
      t = term_r_34;
    }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_s_34;
    return(t);
  }
  t = Option_3(t, a_8, b_8, c_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_133 = NULL,f_133 = NULL,g_133 = NULL;
  e_133 = t;
  d_133 :
  if(((ATgetType(e_133) == AT_LIST) && !(ATisEmpty(e_133))))
    {
      f_133 = ATgetFirst((ATermList) e_133);
      g_133 = (ATerm) ATgetNext((ATermList) e_133);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_133)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_133)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
  q_133 = t;
  p_133 :
  if(((ATgetType(q_133) == AT_LIST) && !(ATisEmpty(q_133))))
    {
      r_133 = ATgetFirst((ATermList) q_133);
      s_133 = (ATerm) ATgetNext((ATermList) q_133);
      {
        ATerm w_133 = NULL,y_133 = NULL;
        ATerm x_133 = NULL;
        t = SSLgetAnnotations(not_null(q_133));
        {
          x_133 = t;
          if(((w_133 != NULL) && (w_133 != x_133)))
            _fail(x_133);
          else
            w_133 = x_133;
        }
        {
          t = not_null(r_133);
          {
            ATerm a_134 = NULL;
            t = i_84(t);
            {
              y_133 = t;
              {
                t = not_null(s_133);
                {
                  ATerm c_134 = NULL;
                  t = j_84(t);
                  {
                    a_134 = t;
                    {
                      ATerm d_134 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_134)), not_null(y_133)), not_null(w_133));
                      {
                        d_134 = t;
                        if(((c_134 != NULL) && (c_134 != d_134)))
                          _fail(d_134);
                        else
                          c_134 = d_134;
                      }
                      t = not_null(c_134);
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
  ATerm n_134 = NULL;
  n_134 = t;
  m_134 :
  if(((ATgetType(n_134) == AT_LIST) && ATisEmpty(n_134)))
    {
      {
        ATerm p_134 = NULL,r_134 = NULL;
        ATerm t_34;
        t_34 = t;
        {
          ATerm q_134 = NULL;
          t = SSLgetAnnotations(not_null(n_134));
          {
            q_134 = t;
            if(((p_134 != NULL) && (p_134 != q_134)))
              _fail(q_134);
            else
              p_134 = q_134;
          }
        }
        t = t_34;
        {
          ATerm s_134 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_134));
          {
            s_134 = t;
            if(((r_134 != NULL) && (r_134 != s_134)))
              _fail(s_134);
            else
              r_134 = s_134;
          }
          t = not_null(r_134);
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
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL;
  y_134 = t;
  x_134 :
  if(match_cons(y_134, sym__2))
    {
      z_134 = ATgetArgument(y_134, 0);
      a_135 = ATgetArgument(y_134, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_26, not_null(z_134), not_null(a_135));
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
  ATerm u_34;
  u_34 = t;
  {
    ATerm d_8 (ATerm t)
    {
      t = term_v_34;
      t = l_120(t);
      return(t);
    }
    t = try_1(t, d_8);
  }
  t = u_34;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm i_135 = NULL;
      ATerm w_34;
      w_34 = t;
      {
        ATerm g_135 = NULL;
        ATerm h_135 = NULL;
        h_135 = t;
        if(((g_135 != NULL) && (g_135 != h_135)))
          _fail(h_135);
        else
          g_135 = h_135;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_32, not_null(g_135));
          t = set_config_0(t);
        }
      }
      t = w_34;
      {
        ATerm j_135 = NULL;
        j_135 = t;
        if(((i_135 != NULL) && (i_135 != j_135)))
          _fail(j_135);
        else
          i_135 = j_135;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_135));
      }
      return(t);
    }
    ATerm f_8 (ATerm t)
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              {
                t = l_120(t);
                t = Cons_2(t, _id, f_8);
              }
            }
          ;
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_8, f_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL;
  ATerm b_35;
  b_35 = t;
  {
    ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL;
    s_135 = t;
    o_135 :
    if(match_cons(s_135, sym__3))
      {
        t_135 = ATgetArgument(s_135, 0);
        u_135 = ATgetArgument(s_135, 1);
        v_135 = ATgetArgument(s_135, 2);
        {
          if(((p_135 != NULL) && (p_135 != t_135)))
            _fail(t_135);
          else
            p_135 = t_135;
          {
            if(((q_135 != NULL) && (q_135 != u_135)))
              _fail(u_135);
            else
              q_135 = u_135;
            {
              if(((r_135 != NULL) && (r_135 != v_135)))
                _fail(v_135);
              else
                r_135 = v_135;
              t = SSL_table_put(not_null(p_135), not_null(q_135), not_null(r_135));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm y_135 = NULL;
  ATerm c_35;
  c_35 = t;
  {
    t = term_d_35;
    t = table_put_0(t);
  }
  t = c_35;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_120(t);
          ;
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_8);
    {
      ATerm h_8 (ATerm t)
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_35;
            i_35 = t;
            {
              ATerm j_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_35);
                }
              else
                {
                  t = j_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_35;
            {
              t = system_usage_0(t);
              {
                t = term_j_29;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm z_135 = NULL;
                  z_135 = t;
                  if(((y_135 != NULL) && (y_135 != z_135)))
                    _fail(z_135);
                  else
                    y_135 = z_135;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, i_8);
              {
                ATerm k_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_135)), term_l_35);
                  return(t);
                }
                t = say_1(t, k_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_25;
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
        ATerm m_35;
        m_35 = t;
        {
          t = term_b_34;
          t = table_destroy_0(t);
        }
        t = m_35;
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
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_117);
            ;
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            {
              ATerm p_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_117(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = p_35;
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
  ATerm l_8 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_117(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, w_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_8, y_117, z_117, m_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_117 (ATerm))
{
  ATerm n_8 (ATerm t)
  {
    ATerm o_8 (ATerm t)
    {
      ATerm v_35;
      v_35 = t;
      {
        ATerm c_136 = NULL;
        ATerm d_136 = NULL;
        t = term_p_32;
        {
          t = get_config_0(t);
          {
            d_136 = t;
            if(((c_136 != NULL) && (c_136 != d_136)))
              _fail(d_136);
            else
              c_136 = d_136;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_8, (ATerm) ATinsert(ATempty, not_null(c_136)));
          t = printnl_0(t);
        }
      }
      t = v_35;
      return(t);
    }
    t = if_verbose2_1(t, o_8);
    return(t);
  }
  t = iowrap_4(t, q_117, r_117, s_117, n_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_117 (ATerm), ATerm p_117 (ATerm))
{
  t = iowrap_3(t, o_117, p_117, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_117 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    t = _2(t, _id, l_117);
    return(t);
  }
  t = iowrap_2(t, p_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        {
          ATerm r_8 (ATerm t)
          {
            ATerm s_8 (ATerm t)
            {
              t = term_y_35;
              return(t);
            }
            t = say_1(t, s_8);
            return(t);
          }
          t = if_verbose2_1(t, r_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, q_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
