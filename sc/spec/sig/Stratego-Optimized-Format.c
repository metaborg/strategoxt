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
ATerm term_e_15;
ATerm term_m_14;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_n_10;
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
ATerm term_l_8;
ATerm term_j_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_b_7;
ATerm term_o_4;
void init_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
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
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_n_9);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_n_9);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, (ATerm) ATempty);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm k_60 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm b_59 (ATerm));
ATerm Op_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm h_60 (ATerm));
ATerm Alt_3 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm Case_4 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm Let_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm Prim_2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm Where_1 (ATerm, ATerm g_55 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm Build_1 (ATerm, ATerm b_55 (ATerm));
ATerm Thread_1 (ATerm, ATerm o_55 (ATerm));
ATerm All_1 (ATerm, ATerm n_55 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm l_55 (ATerm));
ATerm Cong_2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm Path_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm SVar_1 (ATerm, ATerm f_56 (ATerm));
ATerm Call_2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm LChoice_2 (ATerm, ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm Choice_2 (ATerm, ATerm t_55 (ATerm), ATerm u_55 (ATerm));
ATerm Seq_2 (ATerm, ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm Test_1 (ATerm, ATerm p_55 (ATerm));
ATerm Not_1 (ATerm, ATerm q_55 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_74 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm l_53 (ATerm), ATerm m_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_87 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_86 (ATerm));
ATerm debug_1 (ATerm, ATerm w_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_82 (ATerm), ATerm c_82 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm crush_2 (ATerm, ATerm k_79 (ATerm), ATerm l_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_89 (ATerm));
ATerm map_1 (ATerm, ATerm y_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_89 (ATerm));
ATerm Program_1 (ATerm, ATerm u_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_86 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  o_10 :
  if(match_cons(t_11, sym_Var_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 = NULL,x_12 = NULL;
            ATerm w_12 = NULL;
            t = SSLgetAnnotations(not_null(t_11));
            {
              w_12 = t;
              if(((l_12 != NULL) && (l_12 != w_12)))
                _fail(w_12);
              else
                l_12 = w_12;
            }
            {
              t = not_null(u_11);
              {
                ATerm c_13 = NULL;
                t = s_0(t);
                {
                  x_12 = t;
                  {
                    ATerm d_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_12)), not_null(l_12));
                    {
                      d_13 = t;
                      if(((c_13 != NULL) && (c_13 != d_13)))
                        _fail(d_13);
                      else
                        c_13 = d_13;
                    }
                    t = not_null(c_13);
                  }
                }
              }
            }
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
            {
              ATerm g_13 = NULL,i_13 = NULL;
              ATerm h_13 = NULL;
              t = SSLgetAnnotations(not_null(t_11));
              {
                h_13 = t;
                if(((g_13 != NULL) && (g_13 != h_13)))
                  _fail(h_13);
                else
                  g_13 = h_13;
              }
              {
                t = not_null(u_11);
                {
                  ATerm k_13 = NULL;
                  t = s_0(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_13)), not_null(g_13));
                      {
                        l_13 = t;
                        if(((k_13 != NULL) && (k_13 != l_13)))
                          _fail(l_13);
                        else
                          k_13 = l_13;
                      }
                      t = not_null(k_13);
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
ATerm Assign_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Assign_1))
    {
      a_14 = ATgetArgument(z_13, 0);
      {
        ATerm d_14 = NULL,f_14 = NULL;
        ATerm e_14 = NULL;
        t = SSLgetAnnotations(not_null(z_13));
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
        {
          t = not_null(a_14);
          {
            ATerm h_14 = NULL;
            t = k_60(t);
            {
              f_14 = t;
              {
                ATerm i_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(f_14)), not_null(d_14));
                {
                  i_14 = t;
                  if(((h_14 != NULL) && (h_14 != i_14)))
                    _fail(i_14);
                  else
                    h_14 = i_14;
                }
                t = not_null(h_14);
              }
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
ATerm BuildDefault_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm s_14 = NULL,t_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym_BuildDefault_1))
    {
      t_14 = ATgetArgument(s_14, 0);
      {
        ATerm w_14 = NULL,y_14 = NULL;
        ATerm x_14 = NULL;
        t = SSLgetAnnotations(not_null(s_14));
        {
          x_14 = t;
          if(((w_14 != NULL) && (w_14 != x_14)))
            _fail(x_14);
          else
            w_14 = x_14;
        }
        {
          t = not_null(t_14);
          {
            ATerm a_15 = NULL;
            t = b_59(t);
            {
              y_14 = t;
              {
                ATerm b_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(y_14)), not_null(w_14));
                {
                  b_15 = t;
                  if(((a_15 != NULL) && (a_15 != b_15)))
                    _fail(b_15);
                  else
                    a_15 = b_15;
                }
                t = not_null(a_15);
              }
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
ATerm Op_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_Op_2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm s_15 = NULL,u_15 = NULL;
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(m_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        {
          t = not_null(n_15);
          {
            ATerm w_15 = NULL;
            t = a_57(t);
            {
              u_15 = t;
              {
                t = not_null(o_15);
                {
                  ATerm y_15 = NULL;
                  t = b_57(t);
                  {
                    w_15 = t;
                    {
                      ATerm z_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_15), not_null(w_15)), not_null(s_15));
                      {
                        z_15 = t;
                        if(((y_15 != NULL) && (y_15 != z_15)))
                          _fail(z_15);
                        else
                          y_15 = z_15;
                      }
                      t = not_null(y_15);
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
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Str_1))
    {
      p_16 = ATgetArgument(o_16, 0);
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_16 = NULL,u_16 = NULL;
            ATerm t_16 = NULL;
            t = SSLgetAnnotations(not_null(o_16));
            {
              t_16 = t;
              if(((s_16 != NULL) && (s_16 != t_16)))
                _fail(t_16);
              else
                s_16 = t_16;
            }
            {
              t = not_null(p_16);
              {
                ATerm w_16 = NULL;
                t = r_0(t);
                {
                  u_16 = t;
                  {
                    ATerm x_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(u_16)), not_null(s_16));
                    {
                      x_16 = t;
                      if(((w_16 != NULL) && (w_16 != x_16)))
                        _fail(x_16);
                      else
                        w_16 = x_16;
                    }
                    t = not_null(w_16);
                  }
                }
              }
            }
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm a_17 = NULL,c_17 = NULL;
              ATerm b_17 = NULL;
              t = SSLgetAnnotations(not_null(o_16));
              {
                b_17 = t;
                if(((a_17 != NULL) && (a_17 != b_17)))
                  _fail(b_17);
                else
                  a_17 = b_17;
              }
              {
                t = not_null(p_16);
                {
                  ATerm e_17 = NULL;
                  t = r_0(t);
                  {
                    c_17 = t;
                    {
                      ATerm f_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(c_17)), not_null(a_17));
                      {
                        f_17 = t;
                        if(((e_17 != NULL) && (e_17 != f_17)))
                          _fail(f_17);
                        else
                          e_17 = f_17;
                      }
                      t = not_null(e_17);
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
  ATerm p_17 = NULL;
  p_17 = t;
  t = SSL_is_real(not_null(p_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_Real_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,h_18 = NULL;
            ATerm g_18 = NULL;
            t = SSLgetAnnotations(not_null(b_18));
            {
              g_18 = t;
              if(((f_18 != NULL) && (f_18 != g_18)))
                _fail(g_18);
              else
                f_18 = g_18;
            }
            {
              t = not_null(c_18);
              {
                ATerm j_18 = NULL;
                t = q_0(t);
                {
                  h_18 = t;
                  {
                    ATerm k_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_18)), not_null(f_18));
                    {
                      k_18 = t;
                      if(((j_18 != NULL) && (j_18 != k_18)))
                        _fail(k_18);
                      else
                        j_18 = k_18;
                    }
                    t = not_null(j_18);
                  }
                }
              }
            }
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
            {
              ATerm n_18 = NULL,p_18 = NULL;
              ATerm o_18 = NULL;
              t = SSLgetAnnotations(not_null(b_18));
              {
                o_18 = t;
                if(((n_18 != NULL) && (n_18 != o_18)))
                  _fail(o_18);
                else
                  n_18 = o_18;
              }
              {
                t = not_null(c_18);
                {
                  ATerm r_18 = NULL;
                  t = q_0(t);
                  {
                    p_18 = t;
                    {
                      ATerm s_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(p_18)), not_null(n_18));
                      {
                        s_18 = t;
                        if(((r_18 != NULL) && (r_18 != s_18)))
                          _fail(s_18);
                        else
                          r_18 = s_18;
                      }
                      t = not_null(r_18);
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
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_Int_1))
    {
      l_19 = ATgetArgument(k_19, 0);
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_19 = NULL,q_19 = NULL;
            ATerm p_19 = NULL;
            t = SSLgetAnnotations(not_null(k_19));
            {
              p_19 = t;
              if(((o_19 != NULL) && (o_19 != p_19)))
                _fail(p_19);
              else
                o_19 = p_19;
            }
            {
              t = not_null(l_19);
              {
                ATerm s_19 = NULL;
                t = p_0(t);
                {
                  q_19 = t;
                  {
                    ATerm t_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_19)), not_null(o_19));
                    {
                      t_19 = t;
                      if(((s_19 != NULL) && (s_19 != t_19)))
                        _fail(t_19);
                      else
                        s_19 = t_19;
                    }
                    t = not_null(s_19);
                  }
                }
              }
            }
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm w_19 = NULL,y_19 = NULL;
              ATerm x_19 = NULL;
              t = SSLgetAnnotations(not_null(k_19));
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
              {
                t = not_null(l_19);
                {
                  ATerm a_20 = NULL;
                  t = p_0(t);
                  {
                    y_19 = t;
                    {
                      ATerm b_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(y_19)), not_null(w_19));
                      {
                        b_20 = t;
                        if(((a_20 != NULL) && (a_20 != b_20)))
                          _fail(b_20);
                        else
                          a_20 = b_20;
                      }
                      t = not_null(a_20);
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
  ATerm o_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Wld_0))
    {
      ATerm q_20 = NULL,s_20 = NULL;
      ATerm z_3;
      z_3 = t;
      {
        ATerm r_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
        }
      }
      t = z_3;
      {
        ATerm t_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(q_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
        t = not_null(s_20);
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
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm e_4 = t;
              int f_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(f_4);
                }
              else
                {
                  t = e_4;
                  {
                    ATerm g_4 = t;
                    int h_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(h_4);
                      }
                    else
                      {
                        t = g_4;
                        {
                          ATerm i_4 = t;
                          int j_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    ATerm b_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, b_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(n_4);
                                        }
                                      else
                                        {
                                          t = m_4;
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = term_o_4;
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
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Assign_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL,r_21 = NULL;
            ATerm q_21 = NULL;
            t = SSLgetAnnotations(not_null(j_21));
            {
              q_21 = t;
              if(((p_21 != NULL) && (p_21 != q_21)))
                _fail(q_21);
              else
                p_21 = q_21;
            }
            {
              t = not_null(k_21);
              {
                ATerm t_21 = NULL;
                t = n_0(t);
                {
                  r_21 = t;
                  {
                    t = not_null(l_21);
                    {
                      ATerm v_21 = NULL;
                      t = o_0(t);
                      {
                        t_21 = t;
                        {
                          ATerm w_21 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(r_21), not_null(t_21)), not_null(p_21));
                          {
                            w_21 = t;
                            if(((v_21 != NULL) && (v_21 != w_21)))
                              _fail(w_21);
                            else
                              v_21 = w_21;
                          }
                          t = not_null(v_21);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm a_22 = NULL,c_22 = NULL;
              ATerm b_22 = NULL;
              t = SSLgetAnnotations(not_null(j_21));
              {
                b_22 = t;
                if(((a_22 != NULL) && (a_22 != b_22)))
                  _fail(b_22);
                else
                  a_22 = b_22;
              }
              {
                t = not_null(k_21);
                {
                  ATerm e_22 = NULL;
                  t = n_0(t);
                  {
                    c_22 = t;
                    {
                      t = not_null(l_21);
                      {
                        ATerm g_22 = NULL;
                        t = o_0(t);
                        {
                          e_22 = t;
                          {
                            ATerm h_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(c_22), not_null(e_22)), not_null(a_22));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_Continue_1))
    {
      y_22 = ATgetArgument(x_22, 0);
      {
        ATerm b_23 = NULL,d_23 = NULL;
        ATerm c_23 = NULL;
        t = SSLgetAnnotations(not_null(x_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
        {
          t = not_null(y_22);
          {
            ATerm f_23 = NULL;
            t = h_60(t);
            {
              d_23 = t;
              {
                ATerm g_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(d_23)), not_null(b_23));
                {
                  g_23 = t;
                  if(((f_23 != NULL) && (f_23 != g_23)))
                    _fail(g_23);
                  else
                    f_23 = g_23;
                }
                t = not_null(f_23);
              }
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
ATerm Alt_3 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Alt_3))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      v_23 = ATgetArgument(s_23, 2);
      {
        ATerm a_24 = NULL,c_24 = NULL;
        ATerm b_24 = NULL;
        t = SSLgetAnnotations(not_null(s_23));
        {
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
        }
        {
          t = not_null(t_23);
          {
            ATerm e_24 = NULL;
            t = e_60(t);
            {
              c_24 = t;
              {
                t = not_null(u_23);
                {
                  ATerm g_24 = NULL;
                  t = f_60(t);
                  {
                    e_24 = t;
                    {
                      t = not_null(v_23);
                      {
                        ATerm i_24 = NULL;
                        t = g_60(t);
                        {
                          g_24 = t;
                          {
                            ATerm j_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(c_24), not_null(e_24), not_null(g_24)), not_null(a_24));
                            {
                              j_24 = t;
                              if(((i_24 != NULL) && (i_24 != j_24)))
                                _fail(j_24);
                              else
                                i_24 = j_24;
                            }
                            t = not_null(i_24);
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
ATerm Case_4 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_Case_4))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      g_25 = ATgetArgument(d_25, 2);
      h_25 = ATgetArgument(d_25, 3);
      {
        ATerm n_25 = NULL,s_25 = NULL;
        ATerm o_25 = NULL;
        t = SSLgetAnnotations(not_null(d_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
        {
          t = not_null(e_25);
          {
            ATerm u_25 = NULL;
            t = x_59(t);
            {
              s_25 = t;
              {
                t = not_null(f_25);
                {
                  ATerm w_25 = NULL;
                  t = y_59(t);
                  {
                    u_25 = t;
                    {
                      t = not_null(g_25);
                      {
                        ATerm y_25 = NULL;
                        t = z_59(t);
                        {
                          w_25 = t;
                          {
                            t = not_null(h_25);
                            {
                              ATerm a_26 = NULL;
                              t = a_60(t);
                              {
                                y_25 = t;
                                {
                                  ATerm b_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(s_25), not_null(u_25), not_null(w_25), not_null(y_25)), not_null(n_25));
                                  {
                                    b_26 = t;
                                    if(((a_26 != NULL) && (a_26 != b_26)))
                                      _fail(b_26);
                                    else
                                      a_26 = b_26;
                                  }
                                  t = not_null(a_26);
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
ATerm Let_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym_Let_2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      {
        ATerm v_26 = NULL,x_26 = NULL;
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(p_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        {
          t = not_null(q_26);
          {
            ATerm z_26 = NULL;
            t = i_56(t);
            {
              x_26 = t;
              {
                t = not_null(r_26);
                {
                  ATerm b_27 = NULL;
                  t = j_56(t);
                  {
                    z_26 = t;
                    {
                      ATerm c_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(x_26), not_null(z_26)), not_null(v_26));
                      {
                        c_27 = t;
                        if(((b_27 != NULL) && (b_27 != c_27)))
                          _fail(c_27);
                        else
                          b_27 = c_27;
                      }
                      t = not_null(b_27);
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
ATerm Prim_2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_Prim_2))
    {
      p_27 = ATgetArgument(o_27, 0);
      q_27 = ATgetArgument(o_27, 1);
      {
        ATerm u_27 = NULL,w_27 = NULL;
        ATerm v_27 = NULL;
        t = SSLgetAnnotations(not_null(o_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        {
          t = not_null(p_27);
          {
            ATerm y_27 = NULL;
            t = w_54(t);
            {
              w_27 = t;
              {
                t = not_null(q_27);
                {
                  ATerm a_28 = NULL;
                  t = x_54(t);
                  {
                    y_27 = t;
                    {
                      ATerm b_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_27), not_null(y_27)), not_null(u_27));
                      {
                        b_28 = t;
                        if(((a_28 != NULL) && (a_28 != b_28)))
                          _fail(b_28);
                        else
                          a_28 = b_28;
                      }
                      t = not_null(a_28);
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
ATerm Where_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Where_1))
    {
      n_28 = ATgetArgument(m_28, 0);
      {
        ATerm q_28 = NULL,s_28 = NULL;
        ATerm r_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
        }
        {
          t = not_null(n_28);
          {
            ATerm u_28 = NULL;
            t = g_55(t);
            {
              s_28 = t;
              {
                ATerm v_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(s_28)), not_null(q_28));
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
  ATerm b_29 = NULL;
  b_29 = t;
  t = SSL_is_int(not_null(b_29));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Scope_2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      {
        ATerm q_29 = NULL,s_29 = NULL;
        ATerm r_29 = NULL;
        t = SSLgetAnnotations(not_null(k_29));
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
        {
          t = not_null(l_29);
          {
            ATerm u_29 = NULL;
            t = e_55(t);
            {
              s_29 = t;
              {
                t = not_null(m_29);
                {
                  ATerm w_29 = NULL;
                  t = f_55(t);
                  {
                    u_29 = t;
                    {
                      ATerm x_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_29), not_null(u_29)), not_null(q_29));
                      {
                        x_29 = t;
                        if(((w_29 != NULL) && (w_29 != x_29)))
                          _fail(x_29);
                        else
                          w_29 = x_29;
                      }
                      t = not_null(w_29);
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
ATerm Build_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_Build_1))
    {
      k_30 = ATgetArgument(j_30, 0);
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(j_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = not_null(k_30);
          {
            ATerm r_30 = NULL;
            t = b_55(t);
            {
              p_30 = t;
              {
                ATerm s_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_30)), not_null(n_30));
                {
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                }
                t = not_null(r_30);
              }
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
ATerm Thread_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_Thread_1))
    {
      f_31 = ATgetArgument(e_31, 0);
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm m_31 = NULL;
            t = o_55(t);
            {
              k_31 = t;
              {
                ATerm n_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(k_31)), not_null(i_31));
                {
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                }
                t = not_null(m_31);
              }
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
ATerm All_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_All_1))
    {
      y_31 = ATgetArgument(x_31, 0);
      {
        ATerm b_32 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
        {
          t = not_null(y_31);
          {
            ATerm f_32 = NULL;
            t = n_55(t);
            {
              d_32 = t;
              {
                ATerm g_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(d_32)), not_null(b_32));
                {
                  g_32 = t;
                  if(((f_32 != NULL) && (f_32 != g_32)))
                    _fail(g_32);
                  else
                    f_32 = g_32;
                }
                t = not_null(f_32);
              }
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
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Some_1))
    {
      v_32 = ATgetArgument(u_32, 0);
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_32 = NULL,a_33 = NULL;
            ATerm z_32 = NULL;
            t = SSLgetAnnotations(not_null(u_32));
            {
              z_32 = t;
              if(((y_32 != NULL) && (y_32 != z_32)))
                _fail(z_32);
              else
                y_32 = z_32;
            }
            {
              t = not_null(v_32);
              {
                ATerm c_33 = NULL;
                t = m_0(t);
                {
                  a_33 = t;
                  {
                    ATerm d_33 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(a_33)), not_null(y_32));
                    {
                      d_33 = t;
                      if(((c_33 != NULL) && (c_33 != d_33)))
                        _fail(d_33);
                      else
                        c_33 = d_33;
                    }
                    t = not_null(c_33);
                  }
                }
              }
            }
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm g_33 = NULL,i_33 = NULL;
              ATerm h_33 = NULL;
              t = SSLgetAnnotations(not_null(u_32));
              {
                h_33 = t;
                if(((g_33 != NULL) && (g_33 != h_33)))
                  _fail(h_33);
                else
                  g_33 = h_33;
              }
              {
                t = not_null(v_32);
                {
                  ATerm k_33 = NULL;
                  t = m_0(t);
                  {
                    i_33 = t;
                    {
                      ATerm l_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(i_33)), not_null(g_33));
                      {
                        l_33 = t;
                        if(((k_33 != NULL) && (k_33 != l_33)))
                          _fail(l_33);
                        else
                          k_33 = l_33;
                      }
                      t = not_null(k_33);
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
ATerm One_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_One_1))
    {
      a_34 = ATgetArgument(z_33, 0);
      {
        ATerm d_34 = NULL,f_34 = NULL;
        ATerm e_34 = NULL;
        t = SSLgetAnnotations(not_null(z_33));
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
        {
          t = not_null(a_34);
          {
            ATerm h_34 = NULL;
            t = l_55(t);
            {
              f_34 = t;
              {
                ATerm i_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(f_34)), not_null(d_34));
                {
                  i_34 = t;
                  if(((h_34 != NULL) && (h_34 != i_34)))
                    _fail(i_34);
                  else
                    h_34 = i_34;
                }
                t = not_null(h_34);
              }
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
ATerm Cong_2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Cong_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm z_34 = NULL,b_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(u_34);
          {
            ATerm d_35 = NULL;
            t = j_55(t);
            {
              b_35 = t;
              {
                t = not_null(v_34);
                {
                  ATerm f_35 = NULL;
                  t = k_55(t);
                  {
                    d_35 = t;
                    {
                      ATerm g_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(b_35), not_null(d_35)), not_null(z_34));
                      {
                        g_35 = t;
                        if(((f_35 != NULL) && (f_35 != g_35)))
                          _fail(g_35);
                        else
                          f_35 = g_35;
                      }
                      t = not_null(f_35);
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
ATerm Path_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Path_2))
    {
      t_35 = ATgetArgument(s_35, 0);
      u_35 = ATgetArgument(s_35, 1);
      {
        ATerm y_35 = NULL,a_36 = NULL;
        ATerm z_35 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
        {
          t = not_null(t_35);
          {
            ATerm c_36 = NULL;
            t = h_55(t);
            {
              a_36 = t;
              {
                t = not_null(u_35);
                {
                  ATerm e_36 = NULL;
                  t = i_55(t);
                  {
                    c_36 = t;
                    {
                      ATerm f_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(a_36), not_null(c_36)), not_null(y_35));
                      {
                        f_36 = t;
                        if(((e_36 != NULL) && (e_36 != f_36)))
                          _fail(f_36);
                        else
                          e_36 = f_36;
                      }
                      t = not_null(e_36);
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
ATerm Rec_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym_Rec_2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      {
        ATerm x_36 = NULL,z_36 = NULL;
        ATerm y_36 = NULL;
        t = SSLgetAnnotations(not_null(r_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        {
          t = not_null(s_36);
          {
            ATerm b_37 = NULL;
            t = g_56(t);
            {
              z_36 = t;
              {
                t = not_null(t_36);
                {
                  ATerm d_37 = NULL;
                  t = h_56(t);
                  {
                    b_37 = t;
                    {
                      ATerm e_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_36), not_null(b_37)), not_null(x_36));
                      {
                        e_37 = t;
                        if(((d_37 != NULL) && (d_37 != e_37)))
                          _fail(e_37);
                        else
                          d_37 = e_37;
                      }
                      t = not_null(d_37);
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
ATerm SVar_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm p_37 = NULL,t_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_SVar_1))
    {
      t_37 = ATgetArgument(p_37, 0);
      {
        ATerm w_37 = NULL,y_37 = NULL;
        ATerm x_37 = NULL;
        t = SSLgetAnnotations(not_null(p_37));
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
        {
          t = not_null(t_37);
          {
            ATerm a_38 = NULL;
            t = f_56(t);
            {
              y_37 = t;
              {
                ATerm b_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(y_37)), not_null(w_37));
                {
                  b_38 = t;
                  if(((a_38 != NULL) && (a_38 != b_38)))
                    _fail(b_38);
                  else
                    a_38 = b_38;
                }
                t = not_null(a_38);
              }
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
ATerm Call_2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym_Call_2))
    {
      n_38 = ATgetArgument(m_38, 0);
      o_38 = ATgetArgument(m_38, 1);
      {
        ATerm s_38 = NULL,u_38 = NULL;
        ATerm t_38 = NULL;
        t = SSLgetAnnotations(not_null(m_38));
        {
          t_38 = t;
          if(((s_38 != NULL) && (s_38 != t_38)))
            _fail(t_38);
          else
            s_38 = t_38;
        }
        {
          t = not_null(n_38);
          {
            ATerm w_38 = NULL;
            t = u_56(t);
            {
              u_38 = t;
              {
                t = not_null(o_38);
                {
                  ATerm y_38 = NULL;
                  t = v_56(t);
                  {
                    w_38 = t;
                    {
                      ATerm z_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(u_38), not_null(w_38)), not_null(s_38));
                      {
                        z_38 = t;
                        if(((y_38 != NULL) && (y_38 != z_38)))
                          _fail(z_38);
                        else
                          y_38 = z_38;
                      }
                      t = not_null(y_38);
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
ATerm LGChoice_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm m_39 = NULL,q_39 = NULL,r_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym_LGChoice_2))
    {
      q_39 = ATgetArgument(m_39, 0);
      r_39 = ATgetArgument(m_39, 1);
      {
        ATerm v_39 = NULL,x_39 = NULL;
        ATerm w_39 = NULL;
        t = SSLgetAnnotations(not_null(m_39));
        {
          w_39 = t;
          if(((v_39 != NULL) && (v_39 != w_39)))
            _fail(w_39);
          else
            v_39 = w_39;
        }
        {
          t = not_null(q_39);
          {
            ATerm z_39 = NULL;
            t = c_56(t);
            {
              x_39 = t;
              {
                t = not_null(r_39);
                {
                  ATerm b_40 = NULL;
                  t = d_56(t);
                  {
                    z_39 = t;
                    {
                      ATerm c_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(x_39), not_null(z_39)), not_null(v_39));
                      {
                        c_40 = t;
                        if(((b_40 != NULL) && (b_40 != c_40)))
                          _fail(c_40);
                        else
                          b_40 = c_40;
                      }
                      t = not_null(b_40);
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
ATerm GChoice_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  n_40 :
  if(match_cons(q_40, sym_GChoice_2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      {
        ATerm x_40 = NULL,z_40 = NULL;
        ATerm y_40 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
        {
          t = not_null(r_40);
          {
            ATerm b_41 = NULL;
            t = a_56(t);
            {
              z_40 = t;
              {
                t = not_null(s_40);
                {
                  ATerm d_41 = NULL;
                  t = b_56(t);
                  {
                    b_41 = t;
                    {
                      ATerm e_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(z_40), not_null(b_41)), not_null(x_40));
                      {
                        e_41 = t;
                        if(((d_41 != NULL) && (d_41 != e_41)))
                          _fail(e_41);
                        else
                          d_41 = e_41;
                      }
                      t = not_null(d_41);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm z_55 (ATerm))
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym_GuardedLChoice_3))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      v_41 = ATgetArgument(s_41, 2);
      {
        ATerm c_42 = NULL,e_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(s_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(t_41);
          {
            ATerm l_42 = NULL;
            t = x_55(t);
            {
              e_42 = t;
              {
                t = not_null(u_41);
                {
                  ATerm o_42 = NULL;
                  t = y_55(t);
                  {
                    l_42 = t;
                    {
                      t = not_null(v_41);
                      {
                        ATerm q_42 = NULL;
                        t = z_55(t);
                        {
                          o_42 = t;
                          {
                            ATerm r_42 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(e_42), not_null(l_42), not_null(o_42)), not_null(c_42));
                            {
                              r_42 = t;
                              if(((q_42 != NULL) && (q_42 != r_42)))
                                _fail(r_42);
                              else
                                q_42 = r_42;
                            }
                            t = not_null(q_42);
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
ATerm LChoice_2 (ATerm t, ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_LChoice_2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        ATerm k_43 = NULL,m_43 = NULL;
        ATerm l_43 = NULL;
        t = SSLgetAnnotations(not_null(e_43));
        {
          l_43 = t;
          if(((k_43 != NULL) && (k_43 != l_43)))
            _fail(l_43);
          else
            k_43 = l_43;
        }
        {
          t = not_null(f_43);
          {
            ATerm o_43 = NULL;
            t = v_55(t);
            {
              m_43 = t;
              {
                t = not_null(g_43);
                {
                  ATerm q_43 = NULL;
                  t = w_55(t);
                  {
                    o_43 = t;
                    {
                      ATerm r_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(m_43), not_null(o_43)), not_null(k_43));
                      {
                        r_43 = t;
                        if(((q_43 != NULL) && (q_43 != r_43)))
                          _fail(r_43);
                        else
                          q_43 = r_43;
                      }
                      t = not_null(q_43);
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
ATerm Choice_2 (ATerm t, ATerm t_55 (ATerm), ATerm u_55 (ATerm))
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym_Choice_2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        ATerm j_44 = NULL,l_44 = NULL;
        ATerm k_44 = NULL;
        t = SSLgetAnnotations(not_null(d_44));
        {
          k_44 = t;
          if(((j_44 != NULL) && (j_44 != k_44)))
            _fail(k_44);
          else
            j_44 = k_44;
        }
        {
          t = not_null(e_44);
          {
            ATerm n_44 = NULL;
            t = t_55(t);
            {
              l_44 = t;
              {
                t = not_null(f_44);
                {
                  ATerm p_44 = NULL;
                  t = u_55(t);
                  {
                    n_44 = t;
                    {
                      ATerm q_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_44), not_null(n_44)), not_null(j_44));
                      {
                        q_44 = t;
                        if(((p_44 != NULL) && (p_44 != q_44)))
                          _fail(q_44);
                        else
                          p_44 = q_44;
                      }
                      t = not_null(p_44);
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
ATerm Seq_2 (ATerm t, ATerm r_55 (ATerm), ATerm s_55 (ATerm))
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym_Seq_2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      {
        ATerm i_45 = NULL,k_45 = NULL;
        ATerm j_45 = NULL;
        t = SSLgetAnnotations(not_null(c_45));
        {
          j_45 = t;
          if(((i_45 != NULL) && (i_45 != j_45)))
            _fail(j_45);
          else
            i_45 = j_45;
        }
        {
          t = not_null(d_45);
          {
            ATerm t_45 = NULL;
            t = r_55(t);
            {
              k_45 = t;
              {
                t = not_null(e_45);
                {
                  ATerm v_45 = NULL;
                  t = s_55(t);
                  {
                    t_45 = t;
                    {
                      ATerm w_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(k_45), not_null(t_45)), not_null(i_45));
                      {
                        w_45 = t;
                        if(((v_45 != NULL) && (v_45 != w_45)))
                          _fail(w_45);
                        else
                          v_45 = w_45;
                      }
                      t = not_null(v_45);
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
ATerm Test_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm t_46 = NULL,u_46 = NULL;
  t_46 = t;
  s_46 :
  if(match_cons(t_46, sym_Test_1))
    {
      u_46 = ATgetArgument(t_46, 0);
      {
        ATerm x_46 = NULL,d_47 = NULL;
        ATerm c_47 = NULL;
        t = SSLgetAnnotations(not_null(t_46));
        {
          c_47 = t;
          if(((x_46 != NULL) && (x_46 != c_47)))
            _fail(c_47);
          else
            x_46 = c_47;
        }
        {
          t = not_null(u_46);
          {
            ATerm f_47 = NULL;
            t = p_55(t);
            {
              d_47 = t;
              {
                ATerm g_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(d_47)), not_null(x_46));
                {
                  g_47 = t;
                  if(((f_47 != NULL) && (f_47 != g_47)))
                    _fail(g_47);
                  else
                    f_47 = g_47;
                }
                t = not_null(f_47);
              }
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
ATerm Not_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm q_47 = NULL,r_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym_Not_1))
    {
      r_47 = ATgetArgument(q_47, 0);
      {
        ATerm u_47 = NULL,x_47 = NULL;
        ATerm w_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          w_47 = t;
          if(((u_47 != NULL) && (u_47 != w_47)))
            _fail(w_47);
          else
            u_47 = w_47;
        }
        {
          t = not_null(r_47);
          {
            ATerm z_47 = NULL;
            t = q_55(t);
            {
              x_47 = t;
              {
                ATerm a_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(x_47)), not_null(u_47));
                {
                  a_48 = t;
                  if(((z_47 != NULL) && (z_47 != a_48)))
                    _fail(a_48);
                  else
                    z_47 = a_48;
                }
                t = not_null(z_47);
              }
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
  ATerm j_48 = NULL;
  j_48 = t;
  i_48 :
  if(match_cons(j_48, sym_Fail_0))
    {
      ATerm l_48 = NULL,n_48 = NULL;
      ATerm t_4;
      t_4 = t;
      {
        ATerm m_48 = NULL;
        t = SSLgetAnnotations(not_null(j_48));
        {
          m_48 = t;
          if(((l_48 != NULL) && (l_48 != m_48)))
            _fail(m_48);
          else
            l_48 = m_48;
        }
      }
      t = t_4;
      {
        ATerm o_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(l_48));
        {
          o_48 = t;
          if(((n_48 != NULL) && (n_48 != o_48)))
            _fail(o_48);
          else
            n_48 = o_48;
        }
        t = not_null(n_48);
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
  ATerm z_48 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym_Id_0))
    {
      ATerm b_49 = NULL,d_49 = NULL;
      ATerm u_4;
      u_4 = t;
      {
        ATerm c_49 = NULL;
        t = SSLgetAnnotations(not_null(z_48));
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
      }
      t = u_4;
      {
        ATerm e_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(b_49));
        {
          e_49 = t;
          if(((d_49 != NULL) && (d_49 != e_49)))
            _fail(e_49);
          else
            d_49 = e_49;
        }
        t = not_null(d_49);
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
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            {
              ATerm z_4 = t;
              int a_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(a_5);
                }
              else
                {
                  t = z_4;
                  {
                    ATerm b_5 = t;
                    int c_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(c_5);
                      }
                    else
                      {
                        t = b_5;
                        {
                          ATerm d_5 = t;
                          int e_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm f_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, f_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
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
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm j_6 = t;
                                                                                                                            int k_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(k_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = j_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, t_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(i_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_6;
                                                                                                                        {
                                                                                                                          ATerm l_6 = t;
                                                                                                                          int m_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
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
                                                                                                                                    ATerm v_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, v_0);
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
                                                                                                                                          ATerm w_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm r_6 = t;
                                                                                                                                              int s_6 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(s_6);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = r_6;
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm c_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, c_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(y_6);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = x_6;
                                                                                                                                                            {
                                                                                                                                                              ATerm z_6 = t;
                                                                                                                                                              int a_7 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm d_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, d_1);
                                                                                                                                                                  LocalPopChoice(a_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = z_6;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_b_7;
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
  ATerm n_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_DontInline_0))
    {
      ATerm p_49 = NULL,r_49 = NULL;
      ATerm c_7;
      c_7 = t;
      {
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(n_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
      }
      t = c_7;
      {
        ATerm s_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DontInline_0), not_null(p_49));
        {
          s_49 = t;
          if(((r_49 != NULL) && (r_49 != s_49)))
            _fail(s_49);
          else
            r_49 = s_49;
        }
        t = not_null(r_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm e_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym_SDef_4))
    {
      m_50 = ATgetArgument(e_50, 0);
      n_50 = ATgetArgument(e_50, 1);
      o_50 = ATgetArgument(e_50, 2);
      p_50 = ATgetArgument(e_50, 3);
      {
        ATerm v_50 = NULL,x_50 = NULL;
        ATerm w_50 = NULL;
        t = SSLgetAnnotations(not_null(e_50));
        {
          w_50 = t;
          if(((v_50 != NULL) && (v_50 != w_50)))
            _fail(w_50);
          else
            v_50 = w_50;
        }
        {
          t = not_null(m_50);
          {
            ATerm z_50 = NULL;
            t = q_56(t);
            {
              x_50 = t;
              {
                t = not_null(n_50);
                {
                  ATerm b_51 = NULL;
                  t = r_56(t);
                  {
                    z_50 = t;
                    {
                      t = not_null(o_50);
                      {
                        ATerm d_51 = NULL;
                        t = s_56(t);
                        {
                          b_51 = t;
                          {
                            t = not_null(p_50);
                            {
                              ATerm f_51 = NULL;
                              t = t_56(t);
                              {
                                d_51 = t;
                                {
                                  ATerm g_51 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_4, not_null(x_50), not_null(z_50), not_null(b_51), not_null(d_51)), not_null(v_50));
                                  {
                                    g_51 = t;
                                    if(((f_51 != NULL) && (f_51 != g_51)))
                                      _fail(g_51);
                                    else
                                      f_51 = g_51;
                                  }
                                  t = not_null(f_51);
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
ATerm SDef_3 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym_SDef_3))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      y_51 = ATgetArgument(v_51, 2);
      {
        ATerm d_52 = NULL,f_52 = NULL;
        ATerm e_52 = NULL;
        t = SSLgetAnnotations(not_null(v_51));
        {
          e_52 = t;
          if(((d_52 != NULL) && (d_52 != e_52)))
            _fail(e_52);
          else
            d_52 = e_52;
        }
        {
          t = not_null(w_51);
          {
            ATerm h_52 = NULL;
            t = k_56(t);
            {
              f_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm j_52 = NULL;
                  t = l_56(t);
                  {
                    h_52 = t;
                    {
                      t = not_null(y_51);
                      {
                        ATerm l_52 = NULL;
                        t = m_56(t);
                        {
                          j_52 = t;
                          {
                            ATerm m_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_52), not_null(h_52), not_null(j_52)), not_null(d_52));
                            {
                              m_52 = t;
                              if(((l_52 != NULL) && (l_52 != m_52)))
                                _fail(m_52);
                              else
                                l_52 = m_52;
                            }
                            t = not_null(l_52);
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
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
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
            ATerm f_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, f_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            {
              ATerm g_1 (ATerm t)
              {
                t = term_h_7;
                return(t);
              }
              t = debug_1(t, g_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm t_52 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = Cons_2(t, a_74, t_52);
      }
    return(t);
  }
  t = t_52(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_m_7;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_53 (ATerm), ATerm m_53 (ATerm))
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym__2))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      {
        ATerm g_53 = NULL,i_53 = NULL;
        ATerm h_53 = NULL;
        t = SSLgetAnnotations(not_null(a_53));
        {
          h_53 = t;
          if(((g_53 != NULL) && (g_53 != h_53)))
            _fail(h_53);
          else
            g_53 = h_53;
        }
        {
          t = not_null(b_53);
          {
            ATerm k_53 = NULL;
            t = l_53(t);
            {
              i_53 = t;
              {
                t = not_null(c_53);
                {
                  ATerm o_53 = NULL;
                  t = m_53(t);
                  {
                    k_53 = t;
                    {
                      ATerm p_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_53), not_null(k_53)), not_null(g_53));
                      {
                        p_53 = t;
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                      }
                      t = not_null(o_53);
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
  ATerm x_53 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm y_53 = NULL,z_53 = NULL;
      y_53 = t;
      w_53 :
      if(match_cons(y_53, sym_Program_1))
        {
          z_53 = ATgetArgument(y_53, 0);
          if(((x_53 != NULL) && (x_53 != z_53)))
            _fail(z_53);
          else
            x_53 = z_53;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, i_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_7), not_null(x_53)), term_p_7));
      {
        t = printnl_0(t);
        {
          t = term_r_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym__2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      {
        ATerm s_7;
        s_7 = t;
        t = SSL_printnl(not_null(e_54), not_null(f_54));
        t = s_7;
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
  ATerm k_54 = NULL;
  k_54 = t;
  t = SSL_implode_string(not_null(k_54));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
        p_54 = t;
        o_54 :
        if(((ATgetType(p_54) == AT_LIST) && !(ATisEmpty(p_54))))
          {
            q_54 = ATgetFirst((ATermList) p_54);
            r_54 = (ATerm) ATgetNext((ATermList) p_54);
            {
              t = not_null(q_54);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(r_54);
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
  ATerm n_56 = NULL;
  ATerm p_56 = NULL;
  n_56 = t;
  {
    ATerm w_56 = NULL;
    ATerm y_56 = NULL,z_56 = NULL,c_57 = NULL;
    t = not_null(n_56);
    {
      w_56 = t;
      {
        t = SSL_explode_term(not_null(w_56));
        {
          y_56 = t;
          m_55 :
          if(match_cons(y_56, sym__2))
            {
              z_56 = ATgetArgument(y_56, 0);
              c_57 = ATgetArgument(y_56, 1);
              e_56 :
              if(match_string(z_56, ""))
                {
                  if(((p_56 != NULL) && (p_56 != c_57)))
                    _fail(c_57);
                  else
                    p_56 = c_57;
                }
              else
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
      t = not_null(p_56);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm g_57 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_57);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          t = Nil_0(t);
          t = n_74(t);
        }
      }
    return(t);
  }
  t = g_57(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  j_57 = t;
  i_57 :
  if(match_cons(j_57, sym__2))
    {
      k_57 = ATgetArgument(j_57, 0);
      l_57 = ATgetArgument(j_57, 1);
      {
        t = not_null(k_57);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(l_57);
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_57 = NULL;
  q_57 = t;
  t = SSL_explode_string(not_null(q_57));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = SSL_is_string(not_null(u_57));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm f_8 = t;
              int g_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = f_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_1);
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
              d_58 = t;
              c_58 :
              if(match_cons(d_58, sym_Path_1))
                {
                  e_58 = ATgetArgument(d_58, 0);
                  t = not_null(e_58);
                }
              else
                {
                  if(match_cons(d_58, sym_Var_1))
                    {
                      e_58 = ATgetArgument(d_58, 0);
                      {
                        t = not_null(e_58);
                        {
                          ATerm h_8 = t;
                          int i_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_j_8;
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
                      if(match_cons(d_58, sym_Prefix_2))
                        {
                          e_58 = ATgetArgument(d_58, 0);
                          f_58 = ATgetArgument(d_58, 1);
                          {
                            ATerm k_58 = NULL,m_58 = NULL;
                            ATerm k_8;
                            k_8 = t;
                            {
                              ATerm l_58 = NULL;
                              t = not_null(e_58);
                              {
                                t = eval_config_0(t);
                                {
                                  l_58 = t;
                                  if(((k_58 != NULL) && (k_58 != l_58)))
                                    _fail(l_58);
                                  else
                                    k_58 = l_58;
                                }
                              }
                            }
                            t = k_8;
                            {
                              ATerm n_58 = NULL;
                              t = not_null(f_58);
                              {
                                t = eval_config_0(t);
                                {
                                  n_58 = t;
                                  if(((m_58 != NULL) && (m_58 != n_58)))
                                    _fail(n_58);
                                  else
                                    m_58 = n_58;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_58), not_null(m_58));
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
  ATerm v_58 = NULL;
  v_58 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(v_58));
    {
      t = table_get_0(t);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm o_8;
              o_8 = t;
              {
                ATerm x_58 = NULL;
                ATerm y_58 = NULL;
                y_58 = t;
                if(((x_58 != NULL) && (x_58 != y_58)))
                  _fail(y_58);
                else
                  x_58 = y_58;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_l_8, not_null(v_58), not_null(x_58));
                  t = table_put_0(t);
                }
              }
              t = o_8;
            }
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8;
      r_8 = t;
      {
        ATerm d_59 = NULL;
        ATerm e_59 = NULL;
        t = term_s_8;
        {
          t = get_config_0(t);
          {
            e_59 = t;
            if(((d_59 != NULL) && (d_59 != e_59)))
              _fail(e_59);
            else
              d_59 = e_59;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_59), term_t_8);
          t = geq_0(t);
        }
      }
      t = r_8;
      t = t_87(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym__2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      t = SSL_WriteToTextFile(not_null(j_59), not_null(k_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
  q_59 = t;
  p_59 :
  if(match_cons(q_59, sym__2))
    {
      r_59 = ATgetArgument(q_59, 0);
      s_59 = ATgetArgument(q_59, 1);
      t = SSL_WriteToBinaryFile(not_null(r_59), not_null(s_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_60 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm j_60 = NULL,l_60 = NULL;
            j_60 = t;
            b_60 :
            if(match_cons(j_60, sym_Output_1))
              {
                l_60 = ATgetArgument(j_60, 0);
                if(((i_60 != NULL) && (i_60 != l_60)))
                  _fail(l_60);
                else
                  i_60 = l_60;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_1);
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm m_60 = NULL;
            t = term_x_8;
            {
              m_60 = t;
              if(((i_60 != NULL) && (i_60 != m_60)))
                _fail(m_60);
              else
                i_60 = m_60;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_1, _id);
  }
  t = u_8;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        t = not_null(i_60);
        return(t);
      }
      t = split_2(t, q_1, _id);
      return(t);
    }
    t = _2(t, _id, p_1);
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              ATerm n_60 = NULL;
              n_60 = t;
              d_60 :
              if(!(match_cons(n_60, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_1);
            return(t);
          }
          t = _2(t, r_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm t_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  ATerm a_9;
  a_9 = t;
  t = dtime_0(t);
  t = a_9;
  {
    t = a_86(t);
    {
      ATerm b_9;
      b_9 = t;
      {
        ATerm u_60 = NULL;
        t = dtime_0(t);
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
      }
      t = b_9;
      {
        v_60 = t;
        s_60 :
        if(match_cons(v_60, sym__2))
          {
            w_60 = ATgetArgument(v_60, 0);
            x_60 = ATgetArgument(v_60, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_60)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_60))), not_null(x_60));
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
ATerm debug_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    ATerm e_61 = NULL,g_61 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm f_61 = NULL;
      t = w_84(t);
      {
        f_61 = t;
        if(((e_61 != NULL) && (e_61 != f_61)))
          _fail(f_61);
        else
          e_61 = f_61;
      }
    }
    t = d_9;
    {
      ATerm h_61 = NULL;
      h_61 = t;
      if(((g_61 != NULL) && (g_61 != h_61)))
        _fail(h_61);
      else
        g_61 = h_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_61)), not_null(e_61)));
        t = printnl_0(t);
      }
    }
  }
  t = c_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm l_61 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL;
      m_61 = t;
      {
        if(((l_61 != NULL) && (l_61 != m_61)))
          _fail(m_61);
        else
          l_61 = m_61;
        t = SSL_ReadFromFile(not_null(l_61));
      }
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = debug_1(t, t_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_82 (ATerm), ATerm c_82 (ATerm))
{
  ATerm q_61 = NULL,s_61 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm r_61 = NULL;
    t = b_82(t);
    {
      r_61 = t;
      if(((q_61 != NULL) && (q_61 != r_61)))
        _fail(r_61);
      else
        q_61 = r_61;
    }
  }
  t = h_9;
  {
    ATerm t_61 = NULL;
    t = c_82(t);
    {
      t_61 = t;
      if(((s_61 != NULL) && (s_61 != t_61)))
        _fail(t_61);
      else
        s_61 = t_61;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_61), not_null(s_61));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_61 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm a_62 = NULL,b_62 = NULL;
          a_62 = t;
          x_61 :
          if(match_cons(a_62, sym_Input_1))
            {
              b_62 = ATgetArgument(a_62, 0);
              if(((z_61 != NULL) && (z_61 != b_62)))
                _fail(b_62);
              else
                z_61 = b_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, u_1);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm c_62 = NULL;
          t = term_l_9;
          {
            c_62 = t;
            if(((z_61 != NULL) && (z_61 != c_62)))
              _fail(c_62);
            else
              z_61 = c_62;
          }
        }
      }
  }
  t = i_9;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(z_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm g_62 = NULL;
    g_62 = t;
    f_62 :
    if(!(match_string(g_62, "-v")))
      {
        if(!(match_string(g_62, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_o_9;
    t = set_config_0(t);
    t = term_p_9;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = Option_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm j_62 = NULL;
    j_62 = t;
    h_62 :
    if(!(match_string(j_62, "-k")))
      {
        if(!(match_string(j_62, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm k_62 = NULL;
      ATerm l_62 = NULL;
      t = string_to_int_0(t);
      {
        l_62 = t;
        if(((k_62 != NULL) && (k_62 != l_62)))
          _fail(l_62);
        else
          k_62 = l_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(k_62));
        t = set_config_0(t);
      }
    }
    t = r_9;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_62 = NULL;
  o_62 = t;
  t = SSL_string_to_int(not_null(o_62));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm w_62 = NULL;
        w_62 = t;
        r_62 :
        if(!(match_string(w_62, "-S")))
          {
            if(!(match_string(w_62, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_x_9;
        t = set_config_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3(t, c_2, d_2, e_2);
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
            ATerm f_2 (ATerm t)
            {
              ATerm x_62 = NULL;
              x_62 = t;
              s_62 :
              if(!(match_string(x_62, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm a_63 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm y_62 = NULL;
                ATerm z_62 = NULL;
                t = string_to_int_0(t);
                {
                  z_62 = t;
                  if(((y_62 != NULL) && (y_62 != z_62)))
                    _fail(z_62);
                  else
                    y_62 = z_62;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(y_62));
                  t = set_config_0(t);
                }
              }
              t = c_10;
              {
                ATerm b_63 = NULL;
                b_63 = t;
                if(((a_63 != NULL) && (a_63 != b_63)))
                  _fail(b_63);
                else
                  a_63 = b_63;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_63));
              }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            t = ArgOption_3(t, f_2, g_2, h_2);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm i_2 (ATerm t)
              {
                ATerm c_63 = NULL;
                c_63 = t;
                v_62 :
                if(!(match_string(c_63, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_f_10;
                t = set_config_0(t);
                t = term_g_10;
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_h_10;
                return(t);
              }
              t = Option_3(t, i_2, j_2, k_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm i_63 = NULL;
    i_63 = t;
    f_63 :
    if(!(match_string(i_63, "-o")))
      {
        if(!(match_string(i_63, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm l_63 = NULL;
    ATerm m_10;
    m_10 = t;
    {
      ATerm j_63 = NULL;
      ATerm k_63 = NULL;
      k_63 = t;
      if(((j_63 != NULL) && (j_63 != k_63)))
        _fail(k_63);
      else
        j_63 = k_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(j_63));
        t = set_config_0(t);
      }
    }
    t = m_10;
    {
      ATerm m_63 = NULL;
      m_63 = t;
      if(((l_63 != NULL) && (l_63 != m_63)))
        _fail(m_63);
      else
        l_63 = m_63;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_63));
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_p_10;
    return(t);
  }
  t = ArgOption_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm q_63 = NULL;
          q_63 = t;
          p_63 :
          if(!(match_string(q_63, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_t_10;
          t = set_config_0(t);
          t = term_u_10;
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = term_v_10;
          return(t);
        }
        t = Option_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  w_63 = t;
  u_63 :
  if(match_string(w_63, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_63) == AT_LIST) && !(ATisEmpty(w_63))))
        {
          x_63 = ATgetFirst((ATermList) w_63);
          y_63 = (ATerm) ATgetNext((ATermList) w_63);
          v_63 :
          if(((ATgetType(y_63) == AT_LIST) && !(ATisEmpty(y_63))))
            {
              z_63 = ATgetFirst((ATermList) y_63);
              a_64 = (ATerm) ATgetNext((ATermList) y_63);
              {
                ATerm e_64 = NULL;
                ATerm w_10;
                w_10 = t;
                {
                  t = not_null(x_63);
                  t = j_0(t);
                }
                t = w_10;
                {
                  ATerm f_64 = NULL;
                  t = not_null(z_63);
                  {
                    t = k_0(t);
                    {
                      f_64 = t;
                      if(((e_64 != NULL) && (e_64 != f_64)))
                        _fail(f_64);
                      else
                        e_64 = f_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_64)), not_null(e_64));
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
  ATerm r_2 (ATerm t)
  {
    ATerm m_64 = NULL;
    m_64 = t;
    j_64 :
    if(!(match_string(m_64, "-i")))
      {
        if(!(match_string(m_64, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm p_64 = NULL;
    ATerm x_10;
    x_10 = t;
    {
      ATerm n_64 = NULL;
      ATerm o_64 = NULL;
      o_64 = t;
      if(((n_64 != NULL) && (n_64 != o_64)))
        _fail(o_64);
      else
        n_64 = o_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(n_64));
        t = set_config_0(t);
      }
    }
    t = x_10;
    {
      ATerm q_64 = NULL;
      q_64 = t;
      if(((p_64 != NULL) && (p_64 != q_64)))
        _fail(q_64);
      else
        p_64 = q_64;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_64));
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = ArgOption_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_e_11));
  {
    t = printnl_0(t);
    {
      t = term_r_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_64 = NULL;
  u_64 = t;
  t = SSL_TicksToSeconds(not_null(u_64));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym__2))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_65), not_null(b_65));
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = SSL_addr(not_null(a_65), not_null(b_65));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_80(t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
        i_65 = t;
        h_65 :
        if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
          {
            j_65 = ATgetFirst((ATermList) i_65);
            k_65 = (ATerm) ATgetNext((ATermList) i_65);
            {
              ATerm n_65 = NULL;
              ATerm o_65 = NULL;
              t = not_null(k_65);
              {
                t = foldr_2(t, m_80, n_80);
                {
                  o_65 = t;
                  if(((n_65 != NULL) && (n_65 != o_65)))
                    _fail(o_65);
                  else
                    n_65 = o_65;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), not_null(n_65));
                t = n_80(t);
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
ATerm crush_2 (ATerm t, ATerm k_79 (ATerm), ATerm l_79 (ATerm))
{
  ATerm x_65 = NULL;
  ATerm z_65 = NULL;
  x_65 = t;
  {
    ATerm a_66 = NULL;
    ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
    t = not_null(x_65);
    {
      a_66 = t;
      {
        t = SSL_explode_term(not_null(a_66));
        {
          c_66 = t;
          w_65 :
          if(match_cons(c_66, sym__2))
            {
              d_66 = ATgetArgument(c_66, 0);
              e_66 = ATgetArgument(c_66, 1);
              if(((z_65 != NULL) && (z_65 != e_66)))
                _fail(e_66);
              else
                z_65 = e_66;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_65);
      t = foldr_2(t, k_79, l_79);
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
    ATerm u_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2(t, u_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        ATerm j_11;
        j_11 = t;
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_66), not_null(p_66));
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              t = SSL_gtr(not_null(o_66), not_null(p_66));
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
ATerm geq_0 (ATerm t)
{
  ATerm v_66 = NULL;
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
      w_66 = t;
      u_66 :
      if(match_cons(w_66, sym__2))
        {
          x_66 = ATgetArgument(w_66, 0);
          y_66 = ATgetArgument(w_66, 1);
          {
            if(((v_66 != NULL) && (v_66 != x_66)))
              _fail(x_66);
            else
              v_66 = x_66;
            if(((v_66 != NULL) && (v_66 != y_66)))
              _fail(y_66);
            else
              v_66 = y_66;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11;
      q_11 = t;
      {
        ATerm b_67 = NULL;
        ATerm c_67 = NULL;
        t = term_s_8;
        {
          t = get_config_0(t);
          {
            c_67 = t;
            if(((b_67 != NULL) && (b_67 != c_67)))
              _fail(c_67);
            else
              b_67 = c_67;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_67), term_r_7);
          t = geq_0(t);
        }
      }
      t = q_11;
      t = s_87(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm g_67 = NULL,i_67 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm h_67 = NULL;
      t = run_time_0(t);
      {
        h_67 = t;
        if(((g_67 != NULL) && (g_67 != h_67)))
          _fail(h_67);
        else
          g_67 = h_67;
      }
    }
    t = r_11;
    {
      ATerm j_67 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          j_67 = t;
          if(((i_67 != NULL) && (i_67 != j_67)))
            _fail(j_67);
          else
            i_67 = j_67;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_11), not_null(g_67)), term_v_11), not_null(i_67)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_2);
  {
    t = term_w_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Version_0))
    {
      ATerm s_67 = NULL,u_67 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm t_67 = NULL;
        t = SSLgetAnnotations(not_null(q_67));
        {
          t_67 = t;
          if(((s_67 != NULL) && (s_67 != t_67)))
            _fail(t_67);
          else
            s_67 = t_67;
        }
      }
      t = x_11;
      {
        ATerm v_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_67));
        {
          v_67 = t;
          if(((u_67 != NULL) && (u_67 != v_67)))
            _fail(v_67);
          else
            u_67 = v_67;
        }
        t = not_null(u_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
  t = fetch_1(t, w_2);
  t = y_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  t = SSL_table_create(not_null(a_68));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_68 = NULL;
  e_68 = t;
  {
    ATerm c_12;
    c_12 = t;
    {
      t = term_d_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_12, term_e_12, not_null(e_68));
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
  ATerm i_68 = NULL;
  i_68 = t;
  t = SSL_table_destroy(not_null(i_68));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_68 = NULL;
  m_68 = t;
  t = SSL_exit(not_null(m_68));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  p_68 :
  if(((ATgetType(q_68) == AT_LIST) && ATisEmpty(q_68)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_68) == AT_LIST) && !(ATisEmpty(q_68))))
        {
          r_68 = ATgetFirst((ATermList) q_68);
          s_68 = (ATerm) ATgetNext((ATermList) q_68);
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
    ATerm v_68 = NULL;
    ATerm y_68 = NULL;
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          ATerm w_68 = NULL;
          ATerm x_68 = NULL;
          x_68 = t;
          if(((w_68 != NULL) && (w_68 != x_68)))
            _fail(x_68);
          else
            w_68 = x_68;
          t = (ATerm) ATinsert(ATempty, not_null(w_68));
        }
      }
    {
      y_68 = t;
      if(((v_68 != NULL) && (v_68 != y_68)))
        _fail(y_68);
      else
        v_68 = y_68;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(v_68));
      t = printnl_0(t);
    }
  }
  t = f_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm b_69 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = Cons_2(t, y_73, b_69);
      }
    return(t);
  }
  t = b_69(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  k_69 = t;
  h_69 :
  if(((ATgetType(k_69) == AT_LIST) && !(ATisEmpty(k_69))))
    {
      i_69 = ATgetFirst((ATermList) k_69);
      j_69 = (ATerm) ATgetNext((ATermList) k_69);
      {
        ATerm n_69 = NULL;
        t = not_null(j_69);
        {
          ATerm k_12;
          k_12 = t;
          {
            ATerm o_69 = NULL,q_69 = NULL,s_69 = NULL;
            ATerm m_12;
            m_12 = t;
            {
              ATerm p_69 = NULL;
              t = i_0(t);
              {
                p_69 = t;
                if(((o_69 != NULL) && (o_69 != p_69)))
                  _fail(p_69);
                else
                  o_69 = p_69;
              }
            }
            t = m_12;
            {
              ATerm r_69 = NULL;
              t = not_null(i_69);
              {
                t = h_0(t);
                {
                  r_69 = t;
                  if(((q_69 != NULL) && (q_69 != r_69)))
                    _fail(r_69);
                  else
                    q_69 = r_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_69)), not_null(q_69));
                {
                  s_69 = t;
                  if(((n_69 != NULL) && (n_69 != s_69)))
                    _fail(s_69);
                  else
                    n_69 = s_69;
                }
              }
            }
          }
          t = k_12;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(n_69);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_69) == AT_LIST) && ATisEmpty(k_69)))
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
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm d_70 = NULL,e_70 = NULL;
  d_70 = t;
  c_70 :
  if(match_cons(d_70, sym_Program_1))
    {
      e_70 = ATgetArgument(d_70, 0);
      {
        ATerm h_70 = NULL,j_70 = NULL;
        ATerm i_70 = NULL;
        t = SSLgetAnnotations(not_null(d_70));
        {
          i_70 = t;
          if(((h_70 != NULL) && (h_70 != i_70)))
            _fail(i_70);
          else
            h_70 = i_70;
        }
        {
          t = not_null(e_70);
          {
            ATerm l_70 = NULL;
            t = u_65(t);
            {
              j_70 = t;
              {
                ATerm m_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_70)), not_null(h_70));
                {
                  m_70 = t;
                  if(((l_70 != NULL) && (l_70 != m_70)))
                    _fail(m_70);
                  else
                    l_70 = m_70;
                }
                t = not_null(l_70);
              }
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
  ATerm u_70 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_70 = NULL;
      t = term_s_11;
      {
        t = get_config_0(t);
        {
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
        }
      }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm w_70 = NULL;
            w_70 = t;
            if(((u_70 != NULL) && (u_70 != w_70)))
              _fail(w_70);
            else
              u_70 = w_70;
            return(t);
          }
          t = Program_1(t, a_3);
          return(t);
        }
        t = fetch_1(t, z_2);
      }
    }
  {
    t = term_p_12;
    {
      t = echo_0(t);
      {
        t = term_s_12;
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, b_3);
            {
              ATerm c_3 (ATerm t)
              {
                ATerm x_70 = NULL;
                ATerm y_70 = NULL;
                y_70 = t;
                if(((x_70 != NULL) && (x_70 != y_70)))
                  _fail(y_70);
                else
                  x_70 = y_70;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_70)), term_t_12);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, c_3);
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
  ATerm u_12;
  u_12 = t;
  {
    ATerm d_71 = NULL;
    ATerm e_71 = NULL;
    e_71 = t;
    if(((d_71 != NULL) && (d_71 != e_71)))
      _fail(e_71);
    else
      d_71 = e_71;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(d_71)));
      t = printnl_0(t);
    }
  }
  t = u_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm v_12;
  v_12 = t;
  {
    t = x_84(t);
    t = debug_0(t);
  }
  t = v_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_65 (ATerm))
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
            t = v_65(t);
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
ATerm fetch_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm z_71 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_74, _id);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = Cons_2(t, _id, z_71);
      }
    return(t);
  }
  t = z_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_88 (ATerm))
{
  t = fetch_1(t, v_88);
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
      ATerm a_13;
      a_13 = t;
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
      t = a_13;
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
ATerm try_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm b_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_66(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = b_13;
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
        ATerm f_13;
        f_13 = t;
        {
          ATerm f_73 = NULL;
          ATerm g_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(a_73));
          {
            ATerm j_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_13);
              }
            else
              {
                t = j_13;
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
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm k_73 = NULL;
  ATerm l_73 = NULL;
  t = term_n_9;
  {
    t = a_90(t);
    {
      l_73 = t;
      if(((k_73 != NULL) && (k_73 != l_73)))
        _fail(l_73);
      else
        k_73 = l_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, not_null(k_73));
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
            ATerm x_73 = NULL;
            ATerm n_13;
            n_13 = t;
            {
              t = not_null(s_73);
              t = a_0(t);
            }
            t = n_13;
            {
              ATerm c_74 = NULL;
              t = term_n_9;
              {
                t = d_0(t);
                {
                  c_74 = t;
                  if(((x_73 != NULL) && (x_73 != c_74)))
                    _fail(c_74);
                  else
                    x_73 = c_74;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_73)), not_null(x_73));
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
  ATerm d_3 (ATerm t)
  {
    ATerm j_74 = NULL;
    j_74 = t;
    g_74 :
    if(!(match_string(j_74, "--help")))
      {
        if(!(match_string(j_74, "-h")))
          {
            if(!(match_string(j_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_p_13;
    {
      t = set_config_0(t);
      t = term_q_13;
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_74 = NULL,p_74 = NULL,q_74 = NULL;
  m_74 = t;
  l_74 :
  if(((ATgetType(m_74) == AT_LIST) && !(ATisEmpty(m_74))))
    {
      p_74 = ATgetFirst((ATermList) m_74);
      q_74 = (ATerm) ATgetNext((ATermList) m_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm))
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  z_74 :
  if(((ATgetType(a_75) == AT_LIST) && !(ATisEmpty(a_75))))
    {
      b_75 = ATgetFirst((ATermList) a_75);
      c_75 = (ATerm) ATgetNext((ATermList) a_75);
      {
        ATerm g_75 = NULL,i_75 = NULL;
        ATerm h_75 = NULL;
        t = SSLgetAnnotations(not_null(a_75));
        {
          h_75 = t;
          if(((g_75 != NULL) && (g_75 != h_75)))
            _fail(h_75);
          else
            g_75 = h_75;
        }
        {
          t = not_null(b_75);
          {
            ATerm k_75 = NULL;
            t = u_54(t);
            {
              i_75 = t;
              {
                t = not_null(c_75);
                {
                  ATerm m_75 = NULL;
                  t = v_54(t);
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
        ATerm s_13;
        s_13 = t;
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
        t = s_13;
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
        t = (ATerm) ATmakeAppl(sym__3, term_l_8, not_null(j_76), not_null(k_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm t_13;
  t_13 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_13;
        t = y_89(t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
        }
      }
  }
  t = t_13;
  {
    ATerm g_3 (ATerm t)
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
    ATerm h_3 (ATerm t)
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_14);
            }
          else
            {
              t = g_14;
              {
                t = y_89(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(c_14);
        }
      else
        {
          t = b_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  ATerm k_14;
  k_14 = t;
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
  t = k_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm i_77 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    t = term_m_14;
    t = table_put_0(t);
  }
  t = l_14;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm n_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_89(t);
          LocalPopChoice(o_14);
        }
      else
        {
          t = n_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14;
          u_14 = t;
          {
            ATerm v_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_13;
                t = get_config_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = v_14;
                t = fetch_1(t, Help_0);
              }
          }
          t = u_14;
          {
            t = system_usage_0(t);
            {
              t = term_w_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_3 (ATerm t)
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm j_77 = NULL;
                    j_77 = t;
                    if(((i_77 != NULL) && (i_77 != j_77)))
                      _fail(j_77);
                    else
                      i_77 = j_77;
                    return(t);
                  }
                  t = Undefined_1(t, k_3);
                  return(t);
                }
                t = fetch_1(t, j_3);
                {
                  ATerm l_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_77)), term_e_15);
                    return(t);
                  }
                  t = say_1(t, l_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_r_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
                {
                }
              }
          }
        }
      {
        ATerm f_15;
        f_15 = t;
        {
          t = term_q_12;
          t = table_destroy_0(t);
        }
        t = f_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  t = parse_options_1(t, e_86);
  {
    t = store_options_0(t);
    {
      t = g_86(t);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_86);
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm k_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_86(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = k_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_86);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_3, x_86, y_86, n_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_15;
      q_15 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(m_77)));
          t = printnl_0(t);
        }
      }
      t = q_15;
      return(t);
    }
    t = if_verbose2_1(t, p_3);
    return(t);
  }
  t = iowrap_4(t, p_86, q_86, r_86, o_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  t = iowrap_3(t, n_86, o_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, k_86);
    return(t);
  }
  t = iowrap_2(t, q_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
