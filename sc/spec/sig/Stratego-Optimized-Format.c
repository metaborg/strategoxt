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
ATerm term_z_14;
ATerm term_j_14;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_x_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_j_7;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_n_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_n_9);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_n_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, (ATerm) ATempty);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm r_60 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm i_59 (ATerm));
ATerm Op_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm o_60 (ATerm));
ATerm Alt_3 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm));
ATerm Case_4 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm Let_2 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm Where_1 (ATerm, ATerm n_55 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm Build_1 (ATerm, ATerm i_55 (ATerm));
ATerm Thread_1 (ATerm, ATerm v_55 (ATerm));
ATerm All_1 (ATerm, ATerm u_55 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm s_55 (ATerm));
ATerm Cong_2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm Path_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_56 (ATerm));
ATerm Call_2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm Test_1 (ATerm, ATerm w_55 (ATerm));
ATerm Not_1 (ATerm, ATerm x_55 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_74 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_88 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_86 (ATerm));
ATerm debug_1 (ATerm, ATerm k_85 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm crush_2 (ATerm, ATerm y_79 (ATerm), ATerm z_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_90 (ATerm));
ATerm map_1 (ATerm, ATerm m_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_90 (ATerm));
ATerm Program_1 (ATerm, ATerm b_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_86 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  i_10 :
  if(match_cons(m_10, sym_Var_1))
    {
      n_10 = ATgetArgument(m_10, 0);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL,j_12 = NULL;
            ATerm v_11 = NULL;
            t = SSLgetAnnotations(not_null(m_10));
            {
              v_11 = t;
              if(((u_11 != NULL) && (u_11 != v_11)))
                _fail(v_11);
              else
                u_11 = v_11;
            }
            {
              t = not_null(n_10);
              {
                ATerm l_12 = NULL;
                t = s_0(t);
                {
                  j_12 = t;
                  {
                    ATerm w_12 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), not_null(u_11));
                    {
                      w_12 = t;
                      if(((l_12 != NULL) && (l_12 != w_12)))
                        _fail(w_12);
                      else
                        l_12 = w_12;
                    }
                    t = not_null(l_12);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm c_13 = NULL,e_13 = NULL;
              ATerm d_13 = NULL;
              t = SSLgetAnnotations(not_null(m_10));
              {
                d_13 = t;
                if(((c_13 != NULL) && (c_13 != d_13)))
                  _fail(d_13);
                else
                  c_13 = d_13;
              }
              {
                t = not_null(n_10);
                {
                  ATerm g_13 = NULL;
                  t = s_0(t);
                  {
                    e_13 = t;
                    {
                      ATerm h_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_13)), not_null(c_13));
                      {
                        h_13 = t;
                        if(((g_13 != NULL) && (g_13 != h_13)))
                          _fail(h_13);
                        else
                          g_13 = h_13;
                      }
                      t = not_null(g_13);
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
ATerm Assign_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Assign_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      {
        ATerm z_13 = NULL,b_14 = NULL;
        ATerm a_14 = NULL;
        t = SSLgetAnnotations(not_null(v_13));
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
        {
          t = not_null(w_13);
          {
            ATerm d_14 = NULL;
            t = r_60(t);
            {
              b_14 = t;
              {
                ATerm e_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(b_14)), not_null(z_13));
                {
                  e_14 = t;
                  if(((d_14 != NULL) && (d_14 != e_14)))
                    _fail(e_14);
                  else
                    d_14 = e_14;
                }
                t = not_null(d_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm o_14 = NULL,p_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym_BuildDefault_1))
    {
      p_14 = ATgetArgument(o_14, 0);
      {
        ATerm s_14 = NULL,u_14 = NULL;
        ATerm t_14 = NULL;
        t = SSLgetAnnotations(not_null(o_14));
        {
          t_14 = t;
          if(((s_14 != NULL) && (s_14 != t_14)))
            _fail(t_14);
          else
            s_14 = t_14;
        }
        {
          t = not_null(p_14);
          {
            ATerm w_14 = NULL;
            t = i_59(t);
            {
              u_14 = t;
              {
                ATerm x_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(u_14)), not_null(s_14));
                {
                  x_14 = t;
                  if(((w_14 != NULL) && (w_14 != x_14)))
                    _fail(x_14);
                  else
                    w_14 = x_14;
                }
                t = not_null(w_14);
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
ATerm Op_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_Op_2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(j_15);
          {
            ATerm s_15 = NULL;
            t = h_57(t);
            {
              q_15 = t;
              {
                t = not_null(k_15);
                {
                  ATerm u_15 = NULL;
                  t = i_57(t);
                  {
                    s_15 = t;
                    {
                      ATerm v_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_15), not_null(s_15)), not_null(o_15));
                      {
                        v_15 = t;
                        if(((u_15 != NULL) && (u_15 != v_15)))
                          _fail(v_15);
                        else
                          u_15 = v_15;
                      }
                      t = not_null(u_15);
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
ATerm Str_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Str_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = NULL,q_16 = NULL;
            ATerm p_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              p_16 = t;
              if(((o_16 != NULL) && (o_16 != p_16)))
                _fail(p_16);
              else
                o_16 = p_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm s_16 = NULL;
                t = r_0(t);
                {
                  q_16 = t;
                  {
                    ATerm t_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(q_16)), not_null(o_16));
                    {
                      t_16 = t;
                      if(((s_16 != NULL) && (s_16 != t_16)))
                        _fail(t_16);
                      else
                        s_16 = t_16;
                    }
                    t = not_null(s_16);
                  }
                }
              }
            }
            ;
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            {
              ATerm w_16 = NULL,y_16 = NULL;
              ATerm x_16 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                x_16 = t;
                if(((w_16 != NULL) && (w_16 != x_16)))
                  _fail(x_16);
                else
                  w_16 = x_16;
              }
              {
                t = not_null(l_16);
                {
                  ATerm a_17 = NULL;
                  t = r_0(t);
                  {
                    y_16 = t;
                    {
                      ATerm b_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(y_16)), not_null(w_16));
                      {
                        b_17 = t;
                        if(((a_17 != NULL) && (a_17 != b_17)))
                          _fail(b_17);
                        else
                          a_17 = b_17;
                      }
                      t = not_null(a_17);
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
ATerm is_real_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_is_real(not_null(l_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_Real_1))
    {
      y_17 = ATgetArgument(x_17, 0);
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_18 = NULL,d_18 = NULL;
            ATerm c_18 = NULL;
            t = SSLgetAnnotations(not_null(x_17));
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
            {
              t = not_null(y_17);
              {
                ATerm f_18 = NULL;
                t = q_0(t);
                {
                  d_18 = t;
                  {
                    ATerm g_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(d_18)), not_null(b_18));
                    {
                      g_18 = t;
                      if(((f_18 != NULL) && (f_18 != g_18)))
                        _fail(g_18);
                      else
                        f_18 = g_18;
                    }
                    t = not_null(f_18);
                  }
                }
              }
            }
            ;
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
            {
              ATerm j_18 = NULL,l_18 = NULL;
              ATerm k_18 = NULL;
              t = SSLgetAnnotations(not_null(x_17));
              {
                k_18 = t;
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
              }
              {
                t = not_null(y_17);
                {
                  ATerm n_18 = NULL;
                  t = q_0(t);
                  {
                    l_18 = t;
                    {
                      ATerm o_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(l_18)), not_null(j_18));
                      {
                        o_18 = t;
                        if(((n_18 != NULL) && (n_18 != o_18)))
                          _fail(o_18);
                        else
                          n_18 = o_18;
                      }
                      t = not_null(n_18);
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
ATerm Int_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Int_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      {
        ATerm f_4 = t;
        int g_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL,m_19 = NULL;
            ATerm l_19 = NULL;
            t = SSLgetAnnotations(not_null(g_19));
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
            {
              t = not_null(h_19);
              {
                ATerm o_19 = NULL;
                t = p_0(t);
                {
                  m_19 = t;
                  {
                    ATerm p_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(m_19)), not_null(k_19));
                    {
                      p_19 = t;
                      if(((o_19 != NULL) && (o_19 != p_19)))
                        _fail(p_19);
                      else
                        o_19 = p_19;
                    }
                    t = not_null(o_19);
                  }
                }
              }
            }
            ;
            LocalPopChoice(g_4);
          }
        else
          {
            t = f_4;
            {
              ATerm s_19 = NULL,u_19 = NULL;
              ATerm t_19 = NULL;
              t = SSLgetAnnotations(not_null(g_19));
              {
                t_19 = t;
                if(((s_19 != NULL) && (s_19 != t_19)))
                  _fail(t_19);
                else
                  s_19 = t_19;
              }
              {
                t = not_null(h_19);
                {
                  ATerm w_19 = NULL;
                  t = p_0(t);
                  {
                    u_19 = t;
                    {
                      ATerm x_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(u_19)), not_null(s_19));
                      {
                        x_19 = t;
                        if(((w_19 != NULL) && (w_19 != x_19)))
                          _fail(x_19);
                        else
                          w_19 = x_19;
                      }
                      t = not_null(w_19);
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
ATerm Wld_0 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Wld_0))
    {
      ATerm m_20 = NULL,o_20 = NULL;
      ATerm h_4;
      h_4 = t;
      {
        ATerm n_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
      }
      t = h_4;
      {
        ATerm p_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(m_20));
        {
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
        }
        t = not_null(o_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            {
              ATerm m_4 = t;
              int n_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(n_4);
                }
              else
                {
                  t = m_4;
                  {
                    ATerm o_4 = t;
                    int p_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(p_4);
                      }
                    else
                      {
                        t = o_4;
                        {
                          ATerm q_4 = t;
                          int r_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(r_4);
                            }
                          else
                            {
                              t = q_4;
                              {
                                ATerm s_4 = t;
                                int t_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, b_0);
                                    ;
                                    LocalPopChoice(t_4);
                                  }
                                else
                                  {
                                    t = s_4;
                                    {
                                      ATerm u_4 = t;
                                      int v_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          ;
                                          LocalPopChoice(v_4);
                                        }
                                      else
                                        {
                                          t = u_4;
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = term_w_4;
                                              return(t);
                                            }
                                            t = debug_1(t, c_0);
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
ATerm Assign_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Assign_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL,n_21 = NULL;
            ATerm m_21 = NULL;
            t = SSLgetAnnotations(not_null(f_21));
            {
              m_21 = t;
              if(((l_21 != NULL) && (l_21 != m_21)))
                _fail(m_21);
              else
                l_21 = m_21;
            }
            {
              t = not_null(g_21);
              {
                ATerm p_21 = NULL;
                t = n_0(t);
                {
                  n_21 = t;
                  {
                    t = not_null(h_21);
                    {
                      ATerm r_21 = NULL;
                      t = o_0(t);
                      {
                        p_21 = t;
                        {
                          ATerm s_21 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(n_21), not_null(p_21)), not_null(l_21));
                          {
                            s_21 = t;
                            if(((r_21 != NULL) && (r_21 != s_21)))
                              _fail(s_21);
                            else
                              r_21 = s_21;
                          }
                          t = not_null(r_21);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            {
              ATerm w_21 = NULL,y_21 = NULL;
              ATerm x_21 = NULL;
              t = SSLgetAnnotations(not_null(f_21));
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
              {
                t = not_null(g_21);
                {
                  ATerm a_22 = NULL;
                  t = n_0(t);
                  {
                    y_21 = t;
                    {
                      t = not_null(h_21);
                      {
                        ATerm c_22 = NULL;
                        t = o_0(t);
                        {
                          a_22 = t;
                          {
                            ATerm d_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(y_21), not_null(a_22)), not_null(w_21));
                            {
                              d_22 = t;
                              if(((c_22 != NULL) && (c_22 != d_22)))
                                _fail(d_22);
                              else
                                c_22 = d_22;
                            }
                            t = not_null(c_22);
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
ATerm Continue_1 (ATerm t, ATerm o_60 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Continue_1))
    {
      u_22 = ATgetArgument(t_22, 0);
      {
        ATerm x_22 = NULL,z_22 = NULL;
        ATerm y_22 = NULL;
        t = SSLgetAnnotations(not_null(t_22));
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
        {
          t = not_null(u_22);
          {
            ATerm b_23 = NULL;
            t = o_60(t);
            {
              z_22 = t;
              {
                ATerm c_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(z_22)), not_null(x_22));
                {
                  c_23 = t;
                  if(((b_23 != NULL) && (b_23 != c_23)))
                    _fail(c_23);
                  else
                    b_23 = c_23;
                }
                t = not_null(b_23);
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
ATerm Alt_3 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_Alt_3))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      r_23 = ATgetArgument(o_23, 2);
      {
        ATerm w_23 = NULL,y_23 = NULL;
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm a_24 = NULL;
            t = l_60(t);
            {
              y_23 = t;
              {
                t = not_null(q_23);
                {
                  ATerm c_24 = NULL;
                  t = m_60(t);
                  {
                    a_24 = t;
                    {
                      t = not_null(r_23);
                      {
                        ATerm e_24 = NULL;
                        t = n_60(t);
                        {
                          c_24 = t;
                          {
                            ATerm f_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(y_23), not_null(a_24), not_null(c_24)), not_null(w_23));
                            {
                              f_24 = t;
                              if(((e_24 != NULL) && (e_24 != f_24)))
                                _fail(f_24);
                              else
                                e_24 = f_24;
                            }
                            t = not_null(e_24);
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
ATerm Case_4 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm h_60 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Case_4))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      x_24 = ATgetArgument(u_24, 2);
      y_24 = ATgetArgument(u_24, 3);
      {
        ATerm j_25 = NULL,l_25 = NULL;
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
        {
          t = not_null(v_24);
          {
            ATerm n_25 = NULL;
            t = e_60(t);
            {
              l_25 = t;
              {
                t = not_null(w_24);
                {
                  ATerm p_25 = NULL;
                  t = f_60(t);
                  {
                    n_25 = t;
                    {
                      t = not_null(x_24);
                      {
                        ATerm r_25 = NULL;
                        t = g_60(t);
                        {
                          p_25 = t;
                          {
                            t = not_null(y_24);
                            {
                              ATerm t_25 = NULL;
                              t = h_60(t);
                              {
                                r_25 = t;
                                {
                                  ATerm u_25 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(l_25), not_null(n_25), not_null(p_25), not_null(r_25)), not_null(j_25));
                                  {
                                    u_25 = t;
                                    if(((t_25 != NULL) && (t_25 != u_25)))
                                      _fail(u_25);
                                    else
                                      t_25 = u_25;
                                  }
                                  t = not_null(t_25);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Let_2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        ATerm s_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm v_26 = NULL;
            t = p_56(t);
            {
              t_26 = t;
              {
                t = not_null(n_26);
                {
                  ATerm x_26 = NULL;
                  t = q_56(t);
                  {
                    v_26 = t;
                    {
                      ATerm y_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_26), not_null(v_26)), not_null(r_26));
                      {
                        y_26 = t;
                        if(((x_26 != NULL) && (x_26 != y_26)))
                          _fail(y_26);
                        else
                          x_26 = y_26;
                      }
                      t = not_null(x_26);
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
ATerm Prim_2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Prim_2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm q_27 = NULL,s_27 = NULL;
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        {
          t = not_null(l_27);
          {
            ATerm u_27 = NULL;
            t = d_55(t);
            {
              s_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm w_27 = NULL;
                  t = e_55(t);
                  {
                    u_27 = t;
                    {
                      ATerm x_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(s_27), not_null(u_27)), not_null(q_27));
                      {
                        x_27 = t;
                        if(((w_27 != NULL) && (w_27 != x_27)))
                          _fail(x_27);
                        else
                          w_27 = x_27;
                      }
                      t = not_null(w_27);
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
ATerm Where_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_Where_1))
    {
      j_28 = ATgetArgument(i_28, 0);
      {
        ATerm m_28 = NULL,o_28 = NULL;
        ATerm n_28 = NULL;
        t = SSLgetAnnotations(not_null(i_28));
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
        {
          t = not_null(j_28);
          {
            ATerm q_28 = NULL;
            t = n_55(t);
            {
              o_28 = t;
              {
                ATerm r_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(o_28)), not_null(m_28));
                {
                  r_28 = t;
                  if(((q_28 != NULL) && (q_28 != r_28)))
                    _fail(r_28);
                  else
                    q_28 = r_28;
                }
                t = not_null(q_28);
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
ATerm is_int_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  t = SSL_is_int(not_null(x_28));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Scope_2))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      {
        ATerm m_29 = NULL,o_29 = NULL;
        ATerm n_29 = NULL;
        t = SSLgetAnnotations(not_null(g_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
        {
          t = not_null(h_29);
          {
            ATerm q_29 = NULL;
            t = l_55(t);
            {
              o_29 = t;
              {
                t = not_null(i_29);
                {
                  ATerm s_29 = NULL;
                  t = m_55(t);
                  {
                    q_29 = t;
                    {
                      ATerm t_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_29), not_null(q_29)), not_null(m_29));
                      {
                        t_29 = t;
                        if(((s_29 != NULL) && (s_29 != t_29)))
                          _fail(t_29);
                        else
                          s_29 = t_29;
                      }
                      t = not_null(s_29);
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
ATerm Build_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Build_1))
    {
      f_30 = ATgetArgument(e_30, 0);
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm j_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          j_30 = t;
          if(((i_30 != NULL) && (i_30 != j_30)))
            _fail(j_30);
          else
            i_30 = j_30;
        }
        {
          t = not_null(f_30);
          {
            ATerm n_30 = NULL;
            t = i_55(t);
            {
              k_30 = t;
              {
                ATerm o_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(k_30)), not_null(i_30));
                {
                  o_30 = t;
                  if(((n_30 != NULL) && (n_30 != o_30)))
                    _fail(o_30);
                  else
                    n_30 = o_30;
                }
                t = not_null(n_30);
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
ATerm Thread_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym_Thread_1))
    {
      z_30 = ATgetArgument(y_30, 0);
      {
        ATerm c_31 = NULL,e_31 = NULL;
        ATerm d_31 = NULL;
        t = SSLgetAnnotations(not_null(y_30));
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
        {
          t = not_null(z_30);
          {
            ATerm g_31 = NULL;
            t = v_55(t);
            {
              e_31 = t;
              {
                ATerm h_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(e_31)), not_null(c_31));
                {
                  h_31 = t;
                  if(((g_31 != NULL) && (g_31 != h_31)))
                    _fail(h_31);
                  else
                    g_31 = h_31;
                }
                t = not_null(g_31);
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
ATerm All_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm t_31 = NULL,u_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_All_1))
    {
      u_31 = ATgetArgument(t_31, 0);
      {
        ATerm x_31 = NULL,z_31 = NULL;
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(t_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        {
          t = not_null(u_31);
          {
            ATerm b_32 = NULL;
            t = u_55(t);
            {
              z_31 = t;
              {
                ATerm c_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(z_31)), not_null(x_31));
                {
                  c_32 = t;
                  if(((b_32 != NULL) && (b_32 != c_32)))
                    _fail(c_32);
                  else
                    b_32 = c_32;
                }
                t = not_null(b_32);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Some_1))
    {
      r_32 = ATgetArgument(q_32, 0);
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32 = NULL,w_32 = NULL;
            ATerm v_32 = NULL;
            t = SSLgetAnnotations(not_null(q_32));
            {
              v_32 = t;
              if(((u_32 != NULL) && (u_32 != v_32)))
                _fail(v_32);
              else
                u_32 = v_32;
            }
            {
              t = not_null(r_32);
              {
                ATerm y_32 = NULL;
                t = m_0(t);
                {
                  w_32 = t;
                  {
                    ATerm z_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(w_32)), not_null(u_32));
                    {
                      z_32 = t;
                      if(((y_32 != NULL) && (y_32 != z_32)))
                        _fail(z_32);
                      else
                        y_32 = z_32;
                    }
                    t = not_null(y_32);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm c_33 = NULL,e_33 = NULL;
              ATerm d_33 = NULL;
              t = SSLgetAnnotations(not_null(q_32));
              {
                d_33 = t;
                if(((c_33 != NULL) && (c_33 != d_33)))
                  _fail(d_33);
                else
                  c_33 = d_33;
              }
              {
                t = not_null(r_32);
                {
                  ATerm g_33 = NULL;
                  t = m_0(t);
                  {
                    e_33 = t;
                    {
                      ATerm h_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(e_33)), not_null(c_33));
                      {
                        h_33 = t;
                        if(((g_33 != NULL) && (g_33 != h_33)))
                          _fail(h_33);
                        else
                          g_33 = h_33;
                      }
                      t = not_null(g_33);
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
ATerm One_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm v_33 = NULL,w_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym_One_1))
    {
      w_33 = ATgetArgument(v_33, 0);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(v_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(w_33);
          {
            ATerm d_34 = NULL;
            t = s_55(t);
            {
              b_34 = t;
              {
                ATerm e_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(b_34)), not_null(z_33));
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
                t = not_null(d_34);
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
ATerm Cong_2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym_Cong_2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        ATerm v_34 = NULL,x_34 = NULL;
        ATerm w_34 = NULL;
        t = SSLgetAnnotations(not_null(p_34));
        {
          w_34 = t;
          if(((v_34 != NULL) && (v_34 != w_34)))
            _fail(w_34);
          else
            v_34 = w_34;
        }
        {
          t = not_null(q_34);
          {
            ATerm z_34 = NULL;
            t = q_55(t);
            {
              x_34 = t;
              {
                t = not_null(r_34);
                {
                  ATerm b_35 = NULL;
                  t = r_55(t);
                  {
                    z_34 = t;
                    {
                      ATerm c_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(x_34), not_null(z_34)), not_null(v_34));
                      {
                        c_35 = t;
                        if(((b_35 != NULL) && (b_35 != c_35)))
                          _fail(c_35);
                        else
                          b_35 = c_35;
                      }
                      t = not_null(b_35);
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
ATerm Path_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_Path_2))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      {
        ATerm u_35 = NULL,w_35 = NULL;
        ATerm v_35 = NULL;
        t = SSLgetAnnotations(not_null(o_35));
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
        {
          t = not_null(p_35);
          {
            ATerm y_35 = NULL;
            t = o_55(t);
            {
              w_35 = t;
              {
                t = not_null(q_35);
                {
                  ATerm a_36 = NULL;
                  t = p_55(t);
                  {
                    y_35 = t;
                    {
                      ATerm b_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(w_35), not_null(y_35)), not_null(u_35));
                      {
                        b_36 = t;
                        if(((a_36 != NULL) && (a_36 != b_36)))
                          _fail(b_36);
                        else
                          a_36 = b_36;
                      }
                      t = not_null(a_36);
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
ATerm Rec_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_Rec_2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      {
        ATerm t_36 = NULL,v_36 = NULL;
        ATerm u_36 = NULL;
        t = SSLgetAnnotations(not_null(n_36));
        {
          u_36 = t;
          if(((t_36 != NULL) && (t_36 != u_36)))
            _fail(u_36);
          else
            t_36 = u_36;
        }
        {
          t = not_null(o_36);
          {
            ATerm x_36 = NULL;
            t = n_56(t);
            {
              v_36 = t;
              {
                t = not_null(p_36);
                {
                  ATerm z_36 = NULL;
                  t = o_56(t);
                  {
                    x_36 = t;
                    {
                      ATerm a_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(v_36), not_null(x_36)), not_null(t_36));
                      {
                        a_37 = t;
                        if(((z_36 != NULL) && (z_36 != a_37)))
                          _fail(a_37);
                        else
                          z_36 = a_37;
                      }
                      t = not_null(z_36);
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
ATerm SVar_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_SVar_1))
    {
      m_37 = ATgetArgument(l_37, 0);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(m_37);
          {
            ATerm t_37 = NULL;
            t = m_56(t);
            {
              r_37 = t;
              {
                ATerm u_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(r_37)), not_null(p_37));
                {
                  u_37 = t;
                  if(((t_37 != NULL) && (t_37 != u_37)))
                    _fail(u_37);
                  else
                    t_37 = u_37;
                }
                t = not_null(t_37);
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
ATerm Call_2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Call_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm p_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
        {
          t = not_null(j_38);
          {
            ATerm s_38 = NULL;
            t = b_57(t);
            {
              q_38 = t;
              {
                t = not_null(k_38);
                {
                  ATerm u_38 = NULL;
                  t = c_57(t);
                  {
                    s_38 = t;
                    {
                      ATerm v_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(q_38), not_null(s_38)), not_null(o_38));
                      {
                        v_38 = t;
                        if(((u_38 != NULL) && (u_38 != v_38)))
                          _fail(v_38);
                        else
                          u_38 = v_38;
                      }
                      t = not_null(u_38);
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
ATerm LGChoice_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_LGChoice_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      {
        ATerm n_39 = NULL,p_39 = NULL;
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm s_39 = NULL;
            t = j_56(t);
            {
              p_39 = t;
              {
                t = not_null(j_39);
                {
                  ATerm x_39 = NULL;
                  t = k_56(t);
                  {
                    s_39 = t;
                    {
                      ATerm y_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(p_39), not_null(s_39)), not_null(n_39));
                      {
                        y_39 = t;
                        if(((x_39 != NULL) && (x_39 != y_39)))
                          _fail(y_39);
                        else
                          x_39 = y_39;
                      }
                      t = not_null(x_39);
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
ATerm GChoice_2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_GChoice_2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        ATerm q_40 = NULL,s_40 = NULL;
        ATerm r_40 = NULL;
        t = SSLgetAnnotations(not_null(k_40));
        {
          r_40 = t;
          if(((q_40 != NULL) && (q_40 != r_40)))
            _fail(r_40);
          else
            q_40 = r_40;
        }
        {
          t = not_null(l_40);
          {
            ATerm u_40 = NULL;
            t = h_56(t);
            {
              s_40 = t;
              {
                t = not_null(m_40);
                {
                  ATerm y_40 = NULL;
                  t = i_56(t);
                  {
                    u_40 = t;
                    {
                      ATerm z_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(s_40), not_null(u_40)), not_null(q_40));
                      {
                        z_40 = t;
                        if(((y_40 != NULL) && (y_40 != z_40)))
                          _fail(z_40);
                        else
                          y_40 = z_40;
                      }
                      t = not_null(y_40);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym_GuardedLChoice_3))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      r_41 = ATgetArgument(n_41, 2);
      {
        ATerm w_41 = NULL,y_41 = NULL;
        ATerm x_41 = NULL;
        t = SSLgetAnnotations(not_null(n_41));
        {
          x_41 = t;
          if(((w_41 != NULL) && (w_41 != x_41)))
            _fail(x_41);
          else
            w_41 = x_41;
        }
        {
          t = not_null(o_41);
          {
            ATerm a_42 = NULL;
            t = e_56(t);
            {
              y_41 = t;
              {
                t = not_null(p_41);
                {
                  ATerm c_42 = NULL;
                  t = f_56(t);
                  {
                    a_42 = t;
                    {
                      t = not_null(r_41);
                      {
                        ATerm e_42 = NULL;
                        t = g_56(t);
                        {
                          c_42 = t;
                          {
                            ATerm f_42 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(y_41), not_null(a_42), not_null(c_42)), not_null(w_41));
                            {
                              f_42 = t;
                              if(((e_42 != NULL) && (e_42 != f_42)))
                                _fail(f_42);
                              else
                                e_42 = f_42;
                            }
                            t = not_null(e_42);
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
ATerm LChoice_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_LChoice_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm g_43 = NULL,i_43 = NULL;
        ATerm h_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
        {
          t = not_null(b_43);
          {
            ATerm k_43 = NULL;
            t = c_56(t);
            {
              i_43 = t;
              {
                t = not_null(c_43);
                {
                  ATerm m_43 = NULL;
                  t = d_56(t);
                  {
                    k_43 = t;
                    {
                      ATerm n_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(i_43), not_null(k_43)), not_null(g_43));
                      {
                        n_43 = t;
                        if(((m_43 != NULL) && (m_43 != n_43)))
                          _fail(n_43);
                        else
                          m_43 = n_43;
                      }
                      t = not_null(m_43);
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
ATerm Choice_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(match_cons(z_43, sym_Choice_2))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      {
        ATerm f_44 = NULL,h_44 = NULL;
        ATerm g_44 = NULL;
        t = SSLgetAnnotations(not_null(z_43));
        {
          g_44 = t;
          if(((f_44 != NULL) && (f_44 != g_44)))
            _fail(g_44);
          else
            f_44 = g_44;
        }
        {
          t = not_null(a_44);
          {
            ATerm j_44 = NULL;
            t = a_56(t);
            {
              h_44 = t;
              {
                t = not_null(b_44);
                {
                  ATerm l_44 = NULL;
                  t = b_56(t);
                  {
                    j_44 = t;
                    {
                      ATerm m_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(h_44), not_null(j_44)), not_null(f_44));
                      {
                        m_44 = t;
                        if(((l_44 != NULL) && (l_44 != m_44)))
                          _fail(m_44);
                        else
                          l_44 = m_44;
                      }
                      t = not_null(l_44);
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
ATerm Seq_2 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm))
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_cons(y_44, sym_Seq_2))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      {
        ATerm e_45 = NULL,g_45 = NULL;
        ATerm f_45 = NULL;
        t = SSLgetAnnotations(not_null(y_44));
        {
          f_45 = t;
          if(((e_45 != NULL) && (e_45 != f_45)))
            _fail(f_45);
          else
            e_45 = f_45;
        }
        {
          t = not_null(z_44);
          {
            ATerm i_45 = NULL;
            t = y_55(t);
            {
              g_45 = t;
              {
                t = not_null(a_45);
                {
                  ATerm k_45 = NULL;
                  t = z_55(t);
                  {
                    i_45 = t;
                    {
                      ATerm l_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(g_45), not_null(i_45)), not_null(e_45));
                      {
                        l_45 = t;
                        if(((k_45 != NULL) && (k_45 != l_45)))
                          _fail(l_45);
                        else
                          k_45 = l_45;
                      }
                      t = not_null(k_45);
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
ATerm Test_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm d_46 = NULL,g_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_Test_1))
    {
      g_46 = ATgetArgument(d_46, 0);
      {
        ATerm j_46 = NULL,l_46 = NULL;
        ATerm k_46 = NULL;
        t = SSLgetAnnotations(not_null(d_46));
        {
          k_46 = t;
          if(((j_46 != NULL) && (j_46 != k_46)))
            _fail(k_46);
          else
            j_46 = k_46;
        }
        {
          t = not_null(g_46);
          {
            ATerm x_46 = NULL;
            t = w_55(t);
            {
              l_46 = t;
              {
                ATerm y_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(l_46)), not_null(j_46));
                {
                  y_46 = t;
                  if(((x_46 != NULL) && (x_46 != y_46)))
                    _fail(y_46);
                  else
                    x_46 = y_46;
                }
                t = not_null(x_46);
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
ATerm Not_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym_Not_1))
    {
      n_47 = ATgetArgument(m_47, 0);
      {
        ATerm q_47 = NULL,s_47 = NULL;
        ATerm r_47 = NULL;
        t = SSLgetAnnotations(not_null(m_47));
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
        {
          t = not_null(n_47);
          {
            ATerm u_47 = NULL;
            t = x_55(t);
            {
              s_47 = t;
              {
                ATerm v_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(s_47)), not_null(q_47));
                {
                  v_47 = t;
                  if(((u_47 != NULL) && (u_47 != v_47)))
                    _fail(v_47);
                  else
                    u_47 = v_47;
                }
                t = not_null(u_47);
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
ATerm Fail_0 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym_Fail_0))
    {
      ATerm h_48 = NULL,j_48 = NULL;
      ATerm b_5;
      b_5 = t;
      {
        ATerm i_48 = NULL;
        t = SSLgetAnnotations(not_null(f_48));
        {
          i_48 = t;
          if(((h_48 != NULL) && (h_48 != i_48)))
            _fail(i_48);
          else
            h_48 = i_48;
        }
      }
      t = b_5;
      {
        ATerm k_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(h_48));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        t = not_null(j_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym_Id_0))
    {
      ATerm u_48 = NULL,w_48 = NULL;
      ATerm c_5;
      c_5 = t;
      {
        ATerm v_48 = NULL;
        t = SSLgetAnnotations(not_null(s_48));
        {
          v_48 = t;
          if(((u_48 != NULL) && (u_48 != v_48)))
            _fail(v_48);
          else
            u_48 = v_48;
        }
      }
      t = c_5;
      {
        ATerm x_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(u_48));
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
        t = not_null(w_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm d_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(e_5);
    }
  else
    {
      t = d_5;
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            {
              ATerm h_5 = t;
              int i_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(i_5);
                }
              else
                {
                  t = h_5;
                  {
                    ATerm j_5 = t;
                    int k_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(k_5);
                      }
                    else
                      {
                        t = j_5;
                        {
                          ATerm l_5 = t;
                          int m_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(m_5);
                            }
                          else
                            {
                              t = l_5;
                              {
                                ATerm n_5 = t;
                                int o_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(o_5);
                                  }
                                else
                                  {
                                    t = n_5;
                                    {
                                      ATerm p_5 = t;
                                      int q_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(q_5);
                                        }
                                      else
                                        {
                                          t = p_5;
                                          {
                                            ATerm r_5 = t;
                                            int s_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(s_5);
                                              }
                                            else
                                              {
                                                t = r_5;
                                                {
                                                  ATerm t_5 = t;
                                                  int u_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(u_5);
                                                    }
                                                  else
                                                    {
                                                      t = t_5;
                                                      {
                                                        ATerm v_5 = t;
                                                        int w_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(w_5);
                                                          }
                                                        else
                                                          {
                                                            t = v_5;
                                                            {
                                                              ATerm x_5 = t;
                                                              int y_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
                                                                  ;
                                                                  LocalPopChoice(y_5);
                                                                }
                                                              else
                                                                {
                                                                  t = x_5;
                                                                  {
                                                                    ATerm z_5 = t;
                                                                    int a_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(a_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_5;
                                                                        {
                                                                          ATerm b_6 = t;
                                                                          int c_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(c_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_6;
                                                                              {
                                                                                ATerm d_6 = t;
                                                                                int e_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, f_0);
                                                                                    ;
                                                                                    LocalPopChoice(e_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_6;
                                                                                    {
                                                                                      ATerm f_6 = t;
                                                                                      int g_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(g_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_6;
                                                                                          {
                                                                                            ATerm h_6 = t;
                                                                                            int i_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(i_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_6;
                                                                                                {
                                                                                                  ATerm j_6 = t;
                                                                                                  int k_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(k_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_6;
                                                                                                      {
                                                                                                        ATerm l_6 = t;
                                                                                                        int m_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_6;
                                                                                                            {
                                                                                                              ATerm n_6 = t;
                                                                                                              int o_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(o_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_6;
                                                                                                                  {
                                                                                                                    ATerm p_6 = t;
                                                                                                                    int q_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm r_6 = t;
                                                                                                                            int s_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                ;
                                                                                                                                LocalPopChoice(s_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = r_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, t_0, strategy_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(q_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_6;
                                                                                                                        {
                                                                                                                          ATerm t_6 = t;
                                                                                                                          int u_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(u_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_6;
                                                                                                                              {
                                                                                                                                ATerm v_6 = t;
                                                                                                                                int w_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm v_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, v_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(w_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_6;
                                                                                                                                    {
                                                                                                                                      ATerm x_6 = t;
                                                                                                                                      int y_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm z_6 = t;
                                                                                                                                              int a_7 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(a_7);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = z_6;
                                                                                                                                                  {
                                                                                                                                                    ATerm y_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      t = list_1(t, _id);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_4(t, y_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, x_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, w_0, strategy_expression_0);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(y_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = x_6;
                                                                                                                                          {
                                                                                                                                            ATerm b_7 = t;
                                                                                                                                            int c_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm z_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm a_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm b_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, b_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Case_4(t, is_string_0, z_0, a_1, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(c_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = b_7;
                                                                                                                                                {
                                                                                                                                                  ATerm d_7 = t;
                                                                                                                                                  int e_7 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(e_7);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = d_7;
                                                                                                                                                      {
                                                                                                                                                        ATerm f_7 = t;
                                                                                                                                                        int g_7 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, c_1, term_expression_0);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(g_7);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = f_7;
                                                                                                                                                            {
                                                                                                                                                              ATerm h_7 = t;
                                                                                                                                                              int i_7 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, d_1);
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(i_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = h_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_j_7;
                                                                                                                                                                      return(t);
                                                                                                                                                                    }
                                                                                                                                                                    t = debug_1(t, e_1);
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
ATerm DontInline_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym_DontInline_0))
    {
      ATerm l_49 = NULL,n_49 = NULL;
      ATerm k_7;
      k_7 = t;
      {
        ATerm m_49 = NULL;
        t = SSLgetAnnotations(not_null(j_49));
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
      }
      t = k_7;
      {
        ATerm o_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DontInline_0), not_null(l_49));
        {
          o_49 = t;
          if(((n_49 != NULL) && (n_49 != o_49)))
            _fail(o_49);
          else
            n_49 = o_49;
        }
        t = not_null(n_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  a_50 = t;
  z_49 :
  if(match_cons(a_50, sym_SDef_4))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      d_50 = ATgetArgument(a_50, 2);
      e_50 = ATgetArgument(a_50, 3);
      {
        ATerm k_50 = NULL,t_50 = NULL;
        ATerm l_50 = NULL;
        t = SSLgetAnnotations(not_null(a_50));
        {
          l_50 = t;
          if(((k_50 != NULL) && (k_50 != l_50)))
            _fail(l_50);
          else
            k_50 = l_50;
        }
        {
          t = not_null(b_50);
          {
            ATerm v_50 = NULL;
            t = x_56(t);
            {
              t_50 = t;
              {
                t = not_null(c_50);
                {
                  ATerm x_50 = NULL;
                  t = y_56(t);
                  {
                    v_50 = t;
                    {
                      t = not_null(d_50);
                      {
                        ATerm z_50 = NULL;
                        t = z_56(t);
                        {
                          x_50 = t;
                          {
                            t = not_null(e_50);
                            {
                              ATerm b_51 = NULL;
                              t = a_57(t);
                              {
                                z_50 = t;
                                {
                                  ATerm c_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(t_50), not_null(v_50), not_null(x_50), not_null(z_50)), not_null(k_50));
                                  {
                                    c_51 = t;
                                    if(((b_51 != NULL) && (b_51 != c_51)))
                                      _fail(c_51);
                                    else
                                      b_51 = c_51;
                                  }
                                  t = not_null(b_51);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym_SDef_3))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      u_51 = ATgetArgument(r_51, 2);
      {
        ATerm z_51 = NULL,b_52 = NULL;
        ATerm a_52 = NULL;
        t = SSLgetAnnotations(not_null(r_51));
        {
          a_52 = t;
          if(((z_51 != NULL) && (z_51 != a_52)))
            _fail(a_52);
          else
            z_51 = a_52;
        }
        {
          t = not_null(s_51);
          {
            ATerm d_52 = NULL;
            t = r_56(t);
            {
              b_52 = t;
              {
                t = not_null(t_51);
                {
                  ATerm f_52 = NULL;
                  t = s_56(t);
                  {
                    d_52 = t;
                    {
                      t = not_null(u_51);
                      {
                        ATerm h_52 = NULL;
                        t = t_56(t);
                        {
                          f_52 = t;
                          {
                            ATerm i_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(b_52), not_null(d_52), not_null(f_52)), not_null(z_51));
                            {
                              i_52 = t;
                              if(((h_52 != NULL) && (h_52 != i_52)))
                                _fail(i_52);
                              else
                                h_52 = i_52;
                            }
                            t = not_null(h_52);
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, f_1, is_string_0, Nil_0, strategy_expression_0);
            ;
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            {
              ATerm g_1 (ATerm t)
              {
                t = term_p_7;
                return(t);
              }
              t = debug_1(t, g_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm p_52 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = Cons_2(t, o_74, p_52);
      }
    return(t);
  }
  t = p_52(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_u_7;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        ATerm c_53 = NULL,e_53 = NULL;
        ATerm d_53 = NULL;
        t = SSLgetAnnotations(not_null(w_52));
        {
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
        }
        {
          t = not_null(x_52);
          {
            ATerm g_53 = NULL;
            t = s_53(t);
            {
              e_53 = t;
              {
                t = not_null(y_52);
                {
                  ATerm i_53 = NULL;
                  t = t_53(t);
                  {
                    g_53 = t;
                    {
                      ATerm j_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_53), not_null(g_53)), not_null(c_53));
                      {
                        j_53 = t;
                        if(((i_53 != NULL) && (i_53 != j_53)))
                          _fail(j_53);
                        else
                          i_53 = j_53;
                      }
                      t = not_null(i_53);
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
  ATerm r_53 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm u_53 = NULL,v_53 = NULL;
      u_53 = t;
      q_53 :
      if(match_cons(u_53, sym_Program_1))
        {
          v_53 = ATgetArgument(u_53, 0);
          if(((r_53 != NULL) && (r_53 != v_53)))
            _fail(v_53);
          else
            r_53 = v_53;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(r_53)), term_x_7));
      {
        t = printnl_0(t);
        {
          t = term_z_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym__2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(a_54), not_null(b_54));
        t = a_8;
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
  ATerm g_54 = NULL;
  g_54 = t;
  t = SSL_implode_string(not_null(g_54));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
        l_54 = t;
        k_54 :
        if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
          {
            m_54 = ATgetFirst((ATermList) l_54);
            n_54 = (ATerm) ATgetNext((ATermList) l_54);
            {
              t = not_null(m_54);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(n_54);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_1);
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
  ATerm x_54 = NULL;
  ATerm z_54 = NULL;
  x_54 = t;
  {
    ATerm a_55 = NULL;
    ATerm g_55 = NULL,h_55 = NULL,j_55 = NULL;
    t = not_null(x_54);
    {
      a_55 = t;
      {
        t = SSL_explode_term(not_null(a_55));
        {
          g_55 = t;
          v_54 :
          if(match_cons(g_55, sym__2))
            {
              h_55 = ATgetArgument(g_55, 0);
              j_55 = ATgetArgument(g_55, 1);
              w_54 :
              if(match_string(h_55, ""))
                {
                  if(((z_54 != NULL) && (z_54 != j_55)))
                    _fail(j_55);
                  else
                    z_54 = j_55;
                }
              else
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
      t = not_null(z_54);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm u_56 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_56);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        {
          t = Nil_0(t);
          t = b_75(t);
        }
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  w_56 :
  if(match_cons(d_57, sym__2))
    {
      e_57 = ATgetArgument(d_57, 0);
      f_57 = ATgetArgument(d_57, 1);
      {
        t = not_null(e_57);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(f_57);
            return(t);
          }
          t = at_end_1(t, k_1);
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
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_57 = NULL;
  m_57 = t;
  t = SSL_explode_string(not_null(m_57));
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
  ATerm q_57 = NULL;
  q_57 = t;
  t = SSL_is_string(not_null(q_57));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_1);
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            {
              ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
              z_57 = t;
              y_57 :
              if(match_cons(z_57, sym_Path_1))
                {
                  a_58 = ATgetArgument(z_57, 0);
                  t = not_null(a_58);
                }
              else
                {
                  if(match_cons(z_57, sym_Var_1))
                    {
                      a_58 = ATgetArgument(z_57, 0);
                      {
                        t = not_null(a_58);
                        {
                          ATerm l_8 = t;
                          int m_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_8);
                            }
                          else
                            {
                              t = l_8;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_n_8;
                                  return(t);
                                }
                                t = debug_1(t, m_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_57, sym_Prefix_2))
                        {
                          a_58 = ATgetArgument(z_57, 0);
                          b_58 = ATgetArgument(z_57, 1);
                          {
                            ATerm g_58 = NULL,i_58 = NULL;
                            ATerm o_8;
                            o_8 = t;
                            {
                              ATerm h_58 = NULL;
                              t = not_null(a_58);
                              {
                                t = eval_config_0(t);
                                {
                                  h_58 = t;
                                  if(((g_58 != NULL) && (g_58 != h_58)))
                                    _fail(h_58);
                                  else
                                    g_58 = h_58;
                                }
                              }
                            }
                            t = o_8;
                            {
                              ATerm j_58 = NULL;
                              t = not_null(b_58);
                              {
                                t = eval_config_0(t);
                                {
                                  j_58 = t;
                                  if(((i_58 != NULL) && (i_58 != j_58)))
                                    _fail(j_58);
                                  else
                                    i_58 = j_58;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_58), not_null(i_58));
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
  ATerm r_58 = NULL;
  r_58 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(r_58));
    {
      t = table_get_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_8;
            q_8 = t;
            {
              ATerm t_58 = NULL;
              ATerm u_58 = NULL;
              u_58 = t;
              if(((t_58 != NULL) && (t_58 != u_58)))
                _fail(u_58);
              else
                t_58 = u_58;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(r_58), not_null(t_58));
                t = table_put_0(t);
              }
            }
            t = q_8;
          }
          return(t);
        }
        t = try_1(t, n_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm y_58 = NULL;
      ATerm z_58 = NULL;
      t = term_s_8;
      {
        t = get_config_0(t);
        {
          z_58 = t;
          if(((y_58 != NULL) && (y_58 != z_58)))
            _fail(z_58);
          else
            y_58 = z_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_58), term_t_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = h_88(t);
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  d_59 = t;
  c_59 :
  if(match_cons(d_59, sym__2))
    {
      e_59 = ATgetArgument(d_59, 0);
      f_59 = ATgetArgument(d_59, 1);
      t = SSL_WriteToTextFile(not_null(e_59), not_null(f_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
  m_59 = t;
  l_59 :
  if(match_cons(m_59, sym__2))
    {
      n_59 = ATgetArgument(m_59, 0);
      o_59 = ATgetArgument(m_59, 1);
      t = SSL_WriteToBinaryFile(not_null(n_59), not_null(o_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm w_59 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm x_59 = NULL,y_59 = NULL;
            x_59 = t;
            t_59 :
            if(match_cons(x_59, sym_Output_1))
              {
                y_59 = ATgetArgument(x_59, 0);
                if(((w_59 != NULL) && (w_59 != y_59)))
                  _fail(y_59);
                else
                  w_59 = y_59;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_1);
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm z_59 = NULL;
            t = term_x_8;
            {
              z_59 = t;
              if(((w_59 != NULL) && (w_59 != z_59)))
                _fail(z_59);
              else
                w_59 = z_59;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_1, _id);
  }
  t = u_8;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(w_59);
        return(t);
      }
      t = split_2(t, s_1, _id);
      return(t);
    }
    t = _2(t, _id, r_1);
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              ATerm a_60 = NULL;
              a_60 = t;
              v_59 :
              if(!(match_cons(a_60, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_1);
            return(t);
          }
          t = _2(t, t_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm k_60 = NULL,q_60 = NULL,s_60 = NULL,t_60 = NULL;
  ATerm a_9;
  a_9 = t;
  t = dtime_0(t);
  t = a_9;
  {
    t = o_86(t);
    {
      ATerm b_9;
      b_9 = t;
      {
        ATerm p_60 = NULL;
        t = dtime_0(t);
        {
          p_60 = t;
          if(((k_60 != NULL) && (k_60 != p_60)))
            _fail(p_60);
          else
            k_60 = p_60;
        }
      }
      t = b_9;
      {
        q_60 = t;
        j_60 :
        if(match_cons(q_60, sym__2))
          {
            s_60 = ATgetArgument(q_60, 0);
            t_60 = ATgetArgument(q_60, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_60)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_60))), not_null(t_60));
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
ATerm debug_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    ATerm a_61 = NULL,c_61 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm b_61 = NULL;
      t = k_85(t);
      {
        b_61 = t;
        if(((a_61 != NULL) && (a_61 != b_61)))
          _fail(b_61);
        else
          a_61 = b_61;
      }
    }
    t = d_9;
    {
      ATerm d_61 = NULL;
      d_61 = t;
      if(((c_61 != NULL) && (c_61 != d_61)))
        _fail(d_61);
      else
        c_61 = d_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_61)), not_null(a_61)));
        t = printnl_0(t);
      }
    }
  }
  t = c_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_61 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_61 = NULL;
      i_61 = t;
      {
        if(((h_61 != NULL) && (h_61 != i_61)))
          _fail(i_61);
        else
          h_61 = i_61;
        t = SSL_ReadFromFile(not_null(h_61));
      }
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, v_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  ATerm m_61 = NULL,o_61 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm n_61 = NULL;
    t = p_82(t);
    {
      n_61 = t;
      if(((m_61 != NULL) && (m_61 != n_61)))
        _fail(n_61);
      else
        m_61 = n_61;
    }
  }
  t = h_9;
  {
    ATerm p_61 = NULL;
    t = q_82(t);
    {
      p_61 = t;
      if(((o_61 != NULL) && (o_61 != p_61)))
        _fail(p_61);
      else
        o_61 = p_61;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_61), not_null(o_61));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_61 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm w_61 = NULL,x_61 = NULL;
          w_61 = t;
          t_61 :
          if(match_cons(w_61, sym_Input_1))
            {
              x_61 = ATgetArgument(w_61, 0);
              if(((v_61 != NULL) && (v_61 != x_61)))
                _fail(x_61);
              else
                v_61 = x_61;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_1);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm y_61 = NULL;
          t = term_l_9;
          {
            y_61 = t;
            if(((v_61 != NULL) && (v_61 != y_61)))
              _fail(y_61);
            else
              v_61 = y_61;
          }
        }
      }
  }
  t = i_9;
  {
    ATerm x_1 (ATerm t)
    {
      t = not_null(v_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm c_62 = NULL;
    c_62 = t;
    b_62 :
    if(!(match_string(c_62, "-v")))
      {
        if(!(match_string(c_62, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_o_9;
    t = set_config_0(t);
    t = term_p_9;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = Option_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm f_62 = NULL;
    f_62 = t;
    d_62 :
    if(!(match_string(f_62, "-k")))
      {
        if(!(match_string(f_62, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm g_62 = NULL;
      ATerm h_62 = NULL;
      t = string_to_int_0(t);
      {
        h_62 = t;
        if(((g_62 != NULL) && (g_62 != h_62)))
          _fail(h_62);
        else
          g_62 = h_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(g_62));
        t = set_config_0(t);
      }
    }
    t = r_9;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_62 = NULL;
  k_62 = t;
  t = SSL_string_to_int(not_null(k_62));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm s_62 = NULL;
        s_62 = t;
        n_62 :
        if(!(match_string(s_62, "-S")))
          {
            if(!(match_string(s_62, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_x_9;
        t = set_config_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3(t, e_2, f_2, g_2);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm t_62 = NULL;
              t_62 = t;
              o_62 :
              if(!(match_string(t_62, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm w_62 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm u_62 = NULL;
                ATerm v_62 = NULL;
                t = string_to_int_0(t);
                {
                  v_62 = t;
                  if(((u_62 != NULL) && (u_62 != v_62)))
                    _fail(v_62);
                  else
                    u_62 = v_62;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(u_62));
                  t = set_config_0(t);
                }
              }
              t = c_10;
              {
                ATerm x_62 = NULL;
                x_62 = t;
                if(((w_62 != NULL) && (w_62 != x_62)))
                  _fail(x_62);
                else
                  w_62 = x_62;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_62));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            t = ArgOption_3(t, h_2, i_2, j_2);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm y_62 = NULL;
                y_62 = t;
                r_62 :
                if(!(match_string(y_62, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_f_10;
                t = set_config_0(t);
                t = term_g_10;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_h_10;
                return(t);
              }
              t = Option_3(t, k_2, l_2, m_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm l_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = l_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm e_63 = NULL;
    e_63 = t;
    b_63 :
    if(!(match_string(e_63, "-o")))
      {
        if(!(match_string(e_63, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm h_63 = NULL;
    ATerm p_10;
    p_10 = t;
    {
      ATerm f_63 = NULL;
      ATerm g_63 = NULL;
      g_63 = t;
      if(((f_63 != NULL) && (f_63 != g_63)))
        _fail(g_63);
      else
        f_63 = g_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_10, not_null(f_63));
        t = set_config_0(t);
      }
    }
    t = p_10;
    {
      ATerm i_63 = NULL;
      i_63 = t;
      if(((h_63 != NULL) && (h_63 != i_63)))
        _fail(i_63);
      else
        h_63 = i_63;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_63));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_r_10;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm m_63 = NULL;
          m_63 = t;
          l_63 :
          if(!(match_string(m_63, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_v_10;
          t = set_config_0(t);
          t = term_w_10;
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_x_10;
          return(t);
        }
        t = Option_3(t, q_2, r_2, s_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
  s_63 = t;
  q_63 :
  if(match_string(s_63, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_63) == AT_LIST) && !(ATisEmpty(s_63))))
        {
          t_63 = ATgetFirst((ATermList) s_63);
          u_63 = (ATerm) ATgetNext((ATermList) s_63);
          r_63 :
          if(((ATgetType(u_63) == AT_LIST) && !(ATisEmpty(u_63))))
            {
              v_63 = ATgetFirst((ATermList) u_63);
              w_63 = (ATerm) ATgetNext((ATermList) u_63);
              {
                ATerm a_64 = NULL;
                ATerm y_10;
                y_10 = t;
                {
                  t = not_null(t_63);
                  t = j_0(t);
                }
                t = y_10;
                {
                  ATerm b_64 = NULL;
                  t = not_null(v_63);
                  {
                    t = k_0(t);
                    {
                      b_64 = t;
                      if(((a_64 != NULL) && (a_64 != b_64)))
                        _fail(b_64);
                      else
                        a_64 = b_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_63)), not_null(a_64));
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
  ATerm t_2 (ATerm t)
  {
    ATerm i_64 = NULL;
    i_64 = t;
    f_64 :
    if(!(match_string(i_64, "-i")))
      {
        if(!(match_string(i_64, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm l_64 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm j_64 = NULL;
      ATerm k_64 = NULL;
      k_64 = t;
      if(((j_64 != NULL) && (j_64 != k_64)))
        _fail(k_64);
      else
        j_64 = k_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(j_64));
        t = set_config_0(t);
      }
    }
    t = z_10;
    {
      ATerm m_64 = NULL;
      m_64 = t;
      if(((l_64 != NULL) && (l_64 != m_64)))
        _fail(m_64);
      else
        l_64 = m_64;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_64));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_b_11;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, term_g_11));
  {
    t = printnl_0(t);
    {
      t = term_z_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  t = SSL_TicksToSeconds(not_null(q_64));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  u_64 :
  if(match_cons(v_64, sym__2))
    {
      w_64 = ATgetArgument(v_64, 0);
      x_64 = ATgetArgument(v_64, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_64), not_null(x_64));
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = SSL_addr(not_null(w_64), not_null(x_64));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_81(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
        e_65 = t;
        d_65 :
        if(((ATgetType(e_65) == AT_LIST) && !(ATisEmpty(e_65))))
          {
            f_65 = ATgetFirst((ATermList) e_65);
            g_65 = (ATerm) ATgetNext((ATermList) e_65);
            {
              ATerm j_65 = NULL;
              ATerm k_65 = NULL;
              t = not_null(g_65);
              {
                t = foldr_2(t, a_81, b_81);
                {
                  k_65 = t;
                  if(((j_65 != NULL) && (j_65 != k_65)))
                    _fail(k_65);
                  else
                    j_65 = k_65;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_65), not_null(j_65));
                t = b_81(t);
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
ATerm crush_2 (ATerm t, ATerm y_79 (ATerm), ATerm z_79 (ATerm))
{
  ATerm r_65 = NULL;
  ATerm t_65 = NULL;
  r_65 = t;
  {
    ATerm u_65 = NULL;
    ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
    t = not_null(r_65);
    {
      u_65 = t;
      {
        t = SSL_explode_term(not_null(u_65));
        {
          w_65 = t;
          q_65 :
          if(match_cons(w_65, sym__2))
            {
              x_65 = ATgetArgument(w_65, 0);
              y_65 = ATgetArgument(w_65, 1);
              if(((t_65 != NULL) && (t_65 != y_65)))
                _fail(y_65);
              else
                t_65 = y_65;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_65);
      t = foldr_2(t, y_79, z_79);
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
    ATerm w_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2(t, w_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
  g_66 = t;
  f_66 :
  if(match_cons(g_66, sym__2))
    {
      h_66 = ATgetArgument(g_66, 0);
      i_66 = ATgetArgument(g_66, 1);
      {
        ATerm l_11;
        l_11 = t;
        {
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_66), not_null(i_66));
              ;
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
              t = SSL_gtr(not_null(h_66), not_null(i_66));
            }
        }
        t = l_11;
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
  ATerm r_66 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
      s_66 = t;
      q_66 :
      if(match_cons(s_66, sym__2))
        {
          t_66 = ATgetArgument(s_66, 0);
          u_66 = ATgetArgument(s_66, 1);
          {
            if(((r_66 != NULL) && (r_66 != t_66)))
              _fail(t_66);
            else
              r_66 = t_66;
            if(((r_66 != NULL) && (r_66 != u_66)))
              _fail(u_66);
            else
              r_66 = u_66;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm x_66 = NULL;
      ATerm y_66 = NULL;
      t = term_s_8;
      {
        t = get_config_0(t);
        {
          y_66 = t;
          if(((x_66 != NULL) && (x_66 != y_66)))
            _fail(y_66);
          else
            x_66 = y_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), term_z_7);
        t = geq_0(t);
      }
    }
    t = q_11;
    t = g_88(t);
    return(t);
  }
  t = try_1(t, x_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm c_67 = NULL,e_67 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm d_67 = NULL;
      t = run_time_0(t);
      {
        d_67 = t;
        if(((c_67 != NULL) && (c_67 != d_67)))
          _fail(d_67);
        else
          c_67 = d_67;
      }
    }
    t = r_11;
    {
      ATerm f_67 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          f_67 = t;
          if(((e_67 != NULL) && (e_67 != f_67)))
            _fail(f_67);
          else
            e_67 = f_67;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_11), not_null(c_67)), term_t_11), not_null(e_67)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_2);
  {
    t = term_w_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_cons(m_67, sym_Version_0))
    {
      ATerm o_67 = NULL,q_67 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm p_67 = NULL;
        t = SSLgetAnnotations(not_null(m_67));
        {
          p_67 = t;
          if(((o_67 != NULL) && (o_67 != p_67)))
            _fail(p_67);
          else
            o_67 = p_67;
        }
      }
      t = x_11;
      {
        ATerm r_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_67));
        {
          r_67 = t;
          if(((q_67 != NULL) && (q_67 != r_67)))
            _fail(r_67);
          else
            q_67 = r_67;
        }
        t = not_null(q_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = m_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_67 = NULL;
  w_67 = t;
  t = SSL_table_create(not_null(w_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  {
    ATerm c_12;
    c_12 = t;
    {
      t = term_d_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_12, term_e_12, not_null(a_68));
          t = table_put_0(t);
        }
      }
    }
    t = c_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_68 = NULL;
  e_68 = t;
  t = SSL_table_destroy(not_null(e_68));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_68 = NULL;
  i_68 = t;
  t = SSL_exit(not_null(i_68));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(((ATgetType(m_68) == AT_LIST) && ATisEmpty(m_68)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
        {
          n_68 = ATgetFirst((ATermList) m_68);
          o_68 = (ATerm) ATgetNext((ATermList) m_68);
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
  ATerm f_12;
  f_12 = t;
  {
    ATerm r_68 = NULL;
    ATerm u_68 = NULL;
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          ATerm s_68 = NULL;
          ATerm t_68 = NULL;
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
          t = (ATerm) ATinsert(ATempty, not_null(s_68));
        }
      }
    {
      u_68 = t;
      if(((r_68 != NULL) && (r_68 != u_68)))
        _fail(u_68);
      else
        r_68 = u_68;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(r_68));
      t = printnl_0(t);
    }
  }
  t = f_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm x_68 (ATerm t)
  {
    ATerm i_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = i_12;
        t = Cons_2(t, m_74, x_68);
      }
    return(t);
  }
  t = x_68(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  g_69 = t;
  d_69 :
  if(((ATgetType(g_69) == AT_LIST) && !(ATisEmpty(g_69))))
    {
      e_69 = ATgetFirst((ATermList) g_69);
      f_69 = (ATerm) ATgetNext((ATermList) g_69);
      {
        ATerm j_69 = NULL;
        t = not_null(f_69);
        {
          ATerm m_12;
          m_12 = t;
          {
            ATerm k_69 = NULL,m_69 = NULL,o_69 = NULL;
            ATerm n_12;
            n_12 = t;
            {
              ATerm l_69 = NULL;
              t = i_0(t);
              {
                l_69 = t;
                if(((k_69 != NULL) && (k_69 != l_69)))
                  _fail(l_69);
                else
                  k_69 = l_69;
              }
            }
            t = n_12;
            {
              ATerm n_69 = NULL;
              t = not_null(e_69);
              {
                t = h_0(t);
                {
                  n_69 = t;
                  if(((m_69 != NULL) && (m_69 != n_69)))
                    _fail(n_69);
                  else
                    m_69 = n_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_69)), not_null(m_69));
                {
                  o_69 = t;
                  if(((j_69 != NULL) && (j_69 != o_69)))
                    _fail(o_69);
                  else
                    j_69 = o_69;
                }
              }
            }
          }
          t = m_12;
          {
            ATerm a_3 (ATerm t)
            {
              t = not_null(j_69);
              return(t);
            }
            t = reverse_acc_2(t, h_0, a_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_69) == AT_LIST) && ATisEmpty(g_69)))
        {
          {
            t = term_n_9;
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
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm z_69 = NULL,a_70 = NULL;
  z_69 = t;
  y_69 :
  if(match_cons(z_69, sym_Program_1))
    {
      a_70 = ATgetArgument(z_69, 0);
      {
        ATerm d_70 = NULL,f_70 = NULL;
        ATerm e_70 = NULL;
        t = SSLgetAnnotations(not_null(z_69));
        {
          e_70 = t;
          if(((d_70 != NULL) && (d_70 != e_70)))
            _fail(e_70);
          else
            d_70 = e_70;
        }
        {
          t = not_null(a_70);
          {
            ATerm h_70 = NULL;
            t = b_66(t);
            {
              f_70 = t;
              {
                ATerm i_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_70)), not_null(d_70));
                {
                  i_70 = t;
                  if(((h_70 != NULL) && (h_70 != i_70)))
                    _fail(i_70);
                  else
                    h_70 = i_70;
                }
                t = not_null(h_70);
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
  ATerm r_70 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_70 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          s_70 = t;
          if(((r_70 != NULL) && (r_70 != s_70)))
            _fail(s_70);
          else
            r_70 = s_70;
        }
      }
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm d_3 (ATerm t)
          {
            ATerm t_70 = NULL;
            t_70 = t;
            if(((r_70 != NULL) && (r_70 != t_70)))
              _fail(t_70);
            else
              r_70 = t_70;
            return(t);
          }
          t = Program_1(t, d_3);
          return(t);
        }
        t = option_defined_1(t, c_3);
      }
    }
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(r_70);
        return(t);
      }
      t = short_description_1(t, f_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_3);
    {
      t = term_q_12;
      {
        t = echo_0(t);
        {
          t = term_t_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm u_70 = NULL;
                  ATerm v_70 = NULL;
                  v_70 = t;
                  if(((u_70 != NULL) && (u_70 != v_70)))
                    _fail(v_70);
                  else
                    u_70 = v_70;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_70)), term_u_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_3);
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm w_70 = NULL;
                    ATerm x_70 = NULL;
                    ATerm i_3 (ATerm t)
                    {
                      t = not_null(r_70);
                      return(t);
                    }
                    t = long_description_1(t, i_3);
                    {
                      x_70 = t;
                      if(((w_70 != NULL) && (w_70 != x_70)))
                        _fail(x_70);
                      else
                        w_70 = x_70;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_70)), term_v_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_3);
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
ATerm debug_0 (ATerm t)
{
  ATerm x_12;
  x_12 = t;
  {
    ATerm d_71 = NULL;
    ATerm e_71 = NULL;
    e_71 = t;
    if(((d_71 != NULL) && (d_71 != e_71)))
      _fail(e_71);
    else
      d_71 = e_71;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(d_71)));
      t = printnl_0(t);
    }
  }
  t = x_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm y_12;
  y_12 = t;
  {
    t = l_85(t);
    t = debug_0(t);
  }
  t = y_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm l_71 = NULL,m_71 = NULL;
  l_71 = t;
  k_71 :
  if(match_cons(l_71, sym_Undefined_1))
    {
      m_71 = ATgetArgument(l_71, 0);
      {
        ATerm p_71 = NULL,r_71 = NULL;
        ATerm q_71 = NULL;
        t = SSLgetAnnotations(not_null(l_71));
        {
          q_71 = t;
          if(((p_71 != NULL) && (p_71 != q_71)))
            _fail(q_71);
          else
            p_71 = q_71;
        }
        {
          t = not_null(m_71);
          {
            ATerm t_71 = NULL;
            t = c_66(t);
            {
              r_71 = t;
              {
                ATerm u_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_71)), not_null(p_71));
                {
                  u_71 = t;
                  if(((t_71 != NULL) && (t_71 != u_71)))
                    _fail(u_71);
                  else
                    t_71 = u_71;
                }
                t = not_null(t_71);
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
ATerm fetch_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm z_71 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_74, _id);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = Cons_2(t, _id, z_71);
      }
    return(t);
  }
  t = z_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_89 (ATerm))
{
  t = fetch_1(t, j_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  d_72 :
  if(match_cons(e_72, sym_Help_0))
    {
      ATerm g_72 = NULL,i_72 = NULL;
      ATerm b_13;
      b_13 = t;
      {
        ATerm h_72 = NULL;
        t = SSLgetAnnotations(not_null(e_72));
        {
          h_72 = t;
          if(((g_72 != NULL) && (g_72 != h_72)))
            _fail(h_72);
          else
            g_72 = h_72;
        }
      }
      t = b_13;
      {
        ATerm j_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_72));
        {
          j_72 = t;
          if(((i_72 != NULL) && (i_72 != j_72)))
            _fail(j_72);
          else
            i_72 = j_72;
        }
        t = not_null(i_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_66 (ATerm))
{
  ATerm f_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_66(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = f_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  p_72 = t;
  o_72 :
  if(match_cons(p_72, sym__2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      t = SSL_table_get(not_null(q_72), not_null(r_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym__3))
    {
      z_72 = ATgetArgument(y_72, 0);
      a_73 = ATgetArgument(y_72, 1);
      b_73 = ATgetArgument(y_72, 2);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm f_73 = NULL;
          ATerm g_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(a_73));
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = (ATerm) ATempty;
              }
            {
              g_73 = t;
              if(((f_73 != NULL) && (f_73 != g_73)))
                _fail(g_73);
              else
                f_73 = g_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_72), not_null(a_73), (ATerm) ATinsert(CheckATermList(not_null(f_73)), not_null(b_73)));
            t = table_put_0(t);
          }
        }
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm k_73 = NULL;
  ATerm l_73 = NULL;
  t = term_n_9;
  {
    t = o_90(t);
    {
      l_73 = t;
      if(((k_73 != NULL) && (k_73 != l_73)))
        _fail(l_73);
      else
        k_73 = l_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, not_null(k_73));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_string(r_73, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_73) == AT_LIST) && !(ATisEmpty(r_73))))
        {
          s_73 = ATgetFirst((ATermList) r_73);
          t_73 = (ATerm) ATgetNext((ATermList) r_73);
          {
            ATerm w_73 = NULL;
            ATerm m_13;
            m_13 = t;
            {
              t = not_null(s_73);
              t = a_0(t);
            }
            t = m_13;
            {
              ATerm x_73 = NULL;
              t = term_n_9;
              {
                t = d_0(t);
                {
                  x_73 = t;
                  if(((w_73 != NULL) && (w_73 != x_73)))
                    _fail(x_73);
                  else
                    w_73 = x_73;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_73)), not_null(w_73));
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
  ATerm j_3 (ATerm t)
  {
    ATerm c_74 = NULL;
    c_74 = t;
    b_74 :
    if(!(match_string(c_74, "--help")))
      {
        if(!(match_string(c_74, "-h")))
          {
            if(!(match_string(c_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_o_13;
    {
      t = set_config_0(t);
      t = term_p_13;
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(((ATgetType(f_74) == AT_LIST) && !(ATisEmpty(f_74))))
    {
      g_74 = ATgetFirst((ATermList) f_74);
      h_74 = (ATerm) ATgetNext((ATermList) f_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
  y_74 = t;
  x_74 :
  if(((ATgetType(y_74) == AT_LIST) && !(ATisEmpty(y_74))))
    {
      z_74 = ATgetFirst((ATermList) y_74);
      a_75 = (ATerm) ATgetNext((ATermList) y_74);
      {
        ATerm g_75 = NULL,i_75 = NULL;
        ATerm h_75 = NULL;
        t = SSLgetAnnotations(not_null(y_74));
        {
          h_75 = t;
          if(((g_75 != NULL) && (g_75 != h_75)))
            _fail(h_75);
          else
            g_75 = h_75;
        }
        {
          t = not_null(z_74);
          {
            ATerm k_75 = NULL;
            t = b_55(t);
            {
              i_75 = t;
              {
                t = not_null(a_75);
                {
                  ATerm m_75 = NULL;
                  t = c_55(t);
                  {
                    k_75 = t;
                    {
                      ATerm n_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_75)), not_null(i_75)), not_null(g_75));
                      {
                        n_75 = t;
                        if(((m_75 != NULL) && (m_75 != n_75)))
                          _fail(n_75);
                        else
                          m_75 = n_75;
                      }
                      t = not_null(m_75);
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
  ATerm x_75 = NULL;
  x_75 = t;
  w_75 :
  if(((ATgetType(x_75) == AT_LIST) && ATisEmpty(x_75)))
    {
      {
        ATerm z_75 = NULL,b_76 = NULL;
        ATerm r_13;
        r_13 = t;
        {
          ATerm a_76 = NULL;
          t = SSLgetAnnotations(not_null(x_75));
          {
            a_76 = t;
            if(((z_75 != NULL) && (z_75 != a_76)))
              _fail(a_76);
            else
              z_75 = a_76;
          }
        }
        t = r_13;
        {
          ATerm c_76 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_75));
          {
            c_76 = t;
            if(((b_76 != NULL) && (b_76 != c_76)))
              _fail(c_76);
            else
              b_76 = c_76;
          }
          t = not_null(b_76);
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
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  h_76 :
  if(match_cons(i_76, sym__2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(j_76), not_null(k_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm s_13;
  s_13 = t;
  {
    ATerm m_3 (ATerm t)
    {
      t = term_t_13;
      t = m_90(t);
      return(t);
    }
    t = try_1(t, m_3);
  }
  t = s_13;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm s_76 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm q_76 = NULL;
        ATerm r_76 = NULL;
        r_76 = t;
        if(((q_76 != NULL) && (q_76 != r_76)))
          _fail(r_76);
        else
          q_76 = r_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(q_76));
          t = set_config_0(t);
        }
      }
      t = x_13;
      {
        ATerm t_76 = NULL;
        t_76 = t;
        if(((s_76 != NULL) && (s_76 != t_76)))
          _fail(t_76);
        else
          s_76 = t_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_76));
      }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm y_13 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              {
                t = m_90(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          ;
          LocalPopChoice(c_14);
        }
      else
        {
          t = y_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
    c_77 = t;
    y_76 :
    if(match_cons(c_77, sym__3))
      {
        d_77 = ATgetArgument(c_77, 0);
        e_77 = ATgetArgument(c_77, 1);
        f_77 = ATgetArgument(c_77, 2);
        {
          if(((z_76 != NULL) && (z_76 != d_77)))
            _fail(d_77);
          else
            z_76 = d_77;
          {
            if(((a_77 != NULL) && (a_77 != e_77)))
              _fail(e_77);
            else
              a_77 = e_77;
            {
              if(((b_77 != NULL) && (b_77 != f_77)))
                _fail(f_77);
              else
                b_77 = f_77;
              t = SSL_table_put(not_null(z_76), not_null(a_77), not_null(b_77));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm i_77 = NULL;
  ATerm i_14;
  i_14 = t;
  {
    t = term_j_14;
    t = table_put_0(t);
  }
  t = i_14;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_90(t);
          ;
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm m_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14;
            r_14 = t;
            {
              ATerm v_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = v_14;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_14;
            {
              t = system_usage_0(t);
              {
                t = term_w_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = m_14;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm j_77 = NULL;
                  j_77 = t;
                  if(((i_77 != NULL) && (i_77 != j_77)))
                    _fail(j_77);
                  else
                    i_77 = j_77;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_77)), term_z_14);
                  return(t);
                }
                t = say_1(t, t_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm a_15;
        a_15 = t;
        {
          t = term_r_12;
          t = table_destroy_0(t);
        }
        t = a_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  t = parse_options_1(t, s_86);
  {
    t = store_options_0(t);
    {
      t = u_86(t);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_86);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm d_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_86(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = d_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_87(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, l_87, m_87, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm l_15;
      l_15 = t;
      {
        ATerm m_77 = NULL;
        ATerm n_77 = NULL;
        t = term_s_11;
        {
          t = get_config_0(t);
          {
            n_77 = t;
            if(((m_77 != NULL) && (m_77 != n_77)))
              _fail(n_77);
            else
              m_77 = n_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(m_77)));
          t = printnl_0(t);
        }
      }
      t = l_15;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, d_87, e_87, f_87, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm))
{
  t = iowrap_3(t, b_87, c_87, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _2(t, _id, y_86);
    return(t);
  }
  t = iowrap_2(t, y_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
