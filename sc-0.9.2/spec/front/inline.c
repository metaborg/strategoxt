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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  init_constant_terms();
}
ATerm term_z_35;
ATerm term_i_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_w_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_k_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_u_28;
ATerm term_k_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_s_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_d_20;
ATerm term_g_18;
ATerm term_l_17;
ATerm term_o_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_x_13;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Op_2, term_t_20, (ATerm) ATempty);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_n_29, term_a_7);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_c_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_a_7);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_a_7);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_e_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_a_7);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__3, term_d_34, term_e_34, (ATerm) ATempty);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_107 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_95 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm s_94 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm Let_2 (ATerm, ATerm w_83 (ATerm), ATerm x_83 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_94 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm p_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_105 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_105 (ATerm), ATerm w_105 (ATerm));
ATerm diff_1 (ATerm, ATerm n_105 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm s_112 (ATerm), ATerm t_112 (ATerm));
ATerm for_3 (ATerm, ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm u_108 (ATerm), ATerm v_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm o_108 (ATerm), ATerm p_108 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm z_108 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm s_109 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm c_109 (ATerm));
ATerm rename_4 (ATerm, ATerm j_108 (ATerm, ATerm (ATerm)), ATerm k_108 (ATerm), ATerm l_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_108 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_107 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_107 (ATerm));
ATerm scope_2 (ATerm, ATerm r_107 (ATerm), ATerm s_107 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_107 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm));
ATerm crush_3 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm Choice_2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm Cong_2 (ATerm, ATerm x_82 (ATerm), ATerm y_82 (ATerm));
ATerm Match_1 (ATerm, ATerm o_82 (ATerm));
ATerm Seq_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm Scope_2 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm Build_1 (ATerm, ATerm p_82 (ATerm));
ATerm SVar_1 (ATerm, ATerm t_83 (ATerm));
ATerm Call_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_96 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm));
ATerm zip_1 (ATerm, ATerm f_100 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm Explode_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm Op_2 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_121 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm d_112 (ATerm));
ATerm downup_1 (ATerm, ATerm q_95 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_84 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_117 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_115 (ATerm));
ATerm debug_1 (ATerm, ATerm w_121 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_106 (ATerm), ATerm j_106 (ATerm));
ATerm crush_2 (ATerm, ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_117 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_115 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_119 (ATerm));
ATerm map_1 (ATerm, ATerm p_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_119 (ATerm));
ATerm Program_1 (ATerm, ATerm o_92 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_121 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_92 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_118 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_98 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_82 (ATerm), ATerm j_82 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm y_115 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm p_116 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_116 (ATerm), ATerm f_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_116 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,j_6 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      j_6 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(j_6));
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
ATerm rewrite_1 (ATerm t, ATerm v_107 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm s_7 = NULL;
    t = term_a_7;
    {
      t = v_107(t);
      {
        s_7 = t;
        if(((o_7 != NULL) && (o_7 != s_7)))
          _fail(s_7);
        else
          o_7 = s_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), not_null(m_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  b_8 = t;
  z_7 :
  if(match_cons(b_8, sym_Call_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      e_8 = ATgetArgument(b_8, 1);
      a_8 :
      if(match_cons(c_8, sym_SVar_1))
        {
          d_8 = ATgetArgument(c_8, 0);
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), (ATerm) ATempty);
            {
              ATerm e_0 (ATerm t)
              {
                t = term_b_7;
                return(t);
              }
              t = rewrite_1(t, e_0);
              {
                j_8 = t;
                x_7 :
                if(match_cons(j_8, sym_Defined_2))
                  {
                    k_8 = ATgetArgument(j_8, 0);
                    l_8 = ATgetArgument(j_8, 1);
                    y_7 :
                    if(match_string(k_8, "n_0"))
                      {
                        if(((i_8 != NULL) && (i_8 != l_8)))
                          _fail(l_8);
                        else
                          i_8 = l_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_8)), not_null(e_8));
          }
        }
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
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  v_8 = t;
  s_8 :
  if(match_cons(v_8, sym_Call_2))
    {
      w_8 = ATgetArgument(v_8, 0);
      y_8 = ATgetArgument(v_8, 1);
      t_8 :
      if(match_cons(w_8, sym_SVar_1))
        {
          x_8 = ATgetArgument(w_8, 0);
          u_8 :
          if(((ATgetType(y_8) == AT_LIST) && ATisEmpty(y_8)))
            {
              {
                ATerm b_9 = NULL;
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = not_null(v_8);
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = term_c_7;
                    return(t);
                  }
                  t = rewrite_1(t, h_0);
                  {
                    c_9 = t;
                    q_8 :
                    if(match_cons(c_9, sym_Defined_2))
                      {
                        d_9 = ATgetArgument(c_9, 0);
                        e_9 = ATgetArgument(c_9, 1);
                        r_8 :
                        if(match_string(d_9, "k_0"))
                          {
                            if(((b_9 != NULL) && (b_9 != e_9)))
                              _fail(e_9);
                            else
                              b_9 = e_9;
                          }
                        else
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
                {
                  t = not_null(b_9);
                  t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm o_95 (ATerm))
{
  t = o_95(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, o_95);
      return(t);
    }
    t = _all(t, p_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  w_9 = t;
  j_9 :
  if(match_cons(w_9, sym__2))
    {
      x_9 = ATgetArgument(w_9, 0);
      e_10 = ATgetArgument(w_9, 1);
      k_9 :
      if(match_cons(x_9, sym_VarDec_2))
        {
          y_9 = ATgetArgument(x_9, 0);
          z_9 = ATgetArgument(x_9, 1);
          l_9 :
          if(match_cons(z_9, sym_FunType_2))
            {
              a_10 = ATgetArgument(z_9, 0);
              d_10 = ATgetArgument(z_9, 1);
              m_9 :
              if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
                {
                  b_10 = ATgetFirst((ATermList) a_10);
                  c_10 = (ATerm) ATgetNext((ATermList) a_10);
                  n_9 :
                  if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
                    {
                      r_9 = ATgetFirst((ATermList) c_10);
                      s_9 = (ATerm) ATgetNext((ATermList) c_10);
                      o_9 :
                      if(match_cons(e_10, sym_Call_2))
                        {
                          t_9 = ATgetArgument(e_10, 0);
                          v_9 = ATgetArgument(e_10, 1);
                          p_9 :
                          if(match_cons(t_9, sym_SVar_1))
                            {
                              u_9 = ATgetArgument(t_9, 0);
                              q_9 :
                              if(((ATgetType(v_9) == AT_LIST) && ATisEmpty(v_9)))
                                {
                                  {
                                    ATerm d_7;
                                    d_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_7, not_null(u_9)));
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = term_b_7;
                                          return(t);
                                        }
                                        t = assert_1(t, q_0);
                                      }
                                    }
                                    t = d_7;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                        {
                          {
                            ATerm f_7;
                            f_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_7, not_null(e_10)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_c_7;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = f_7;
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
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_b_7;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
      q_10 = t;
      m_10 :
      if(match_cons(q_10, sym__3))
        {
          r_10 = ATgetArgument(q_10, 0);
          s_10 = ATgetArgument(q_10, 1);
          t_10 = ATgetArgument(q_10, 2);
          {
            if(((n_10 != NULL) && (n_10 != r_10)))
              _fail(r_10);
            else
              n_10 = r_10;
            {
              if(((o_10 != NULL) && (o_10 != s_10)))
                _fail(s_10);
              else
                o_10 = s_10;
              {
                if(((p_10 != NULL) && (p_10 != t_10)))
                  _fail(t_10);
                else
                  p_10 = t_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(o_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(p_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm h_7 = t;
                            int i_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(i_7);
                              }
                            else
                              {
                                t = h_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, x_0);
                          return(t);
                        }
                        t = topdown_1(t, w_0);
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
    t = scope_2(t, u_0, v_0);
    return(t);
  }
  t = scope_2(t, s_0, t_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
    {
      y_10 = ATgetFirst((ATermList) x_10);
      z_10 = (ATerm) ATgetNext((ATermList) x_10);
      t = not_null(y_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, s_94);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
            i_11 = t;
            d_11 :
            if(match_cons(i_11, sym__2))
              {
                j_11 = ATgetArgument(i_11, 0);
                n_11 = ATgetArgument(i_11, 1);
                e_11 :
                if(match_cons(j_11, sym_SDef_3))
                  {
                    k_11 = ATgetArgument(j_11, 0);
                    l_11 = ATgetArgument(j_11, 1);
                    m_11 = ATgetArgument(j_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_11), not_null(l_11), not_null(m_11));
                  }
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
          t = zip_1(t, z_0);
        }
        return(t);
      }
      t = Let_2(t, y_0, _id);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, s_94);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
                  r_11 = t;
                  g_11 :
                  if(match_cons(r_11, sym__2))
                    {
                      s_11 = ATgetArgument(r_11, 0);
                      v_11 = ATgetArgument(r_11, 1);
                      h_11 :
                      if(match_cons(s_11, sym_VarDec_2))
                        {
                          t_11 = ATgetArgument(s_11, 0);
                          u_11 = ATgetArgument(s_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_11), not_null(u_11));
                        }
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
                t = zip_1(t, b_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, a_1, _id);
            ;
            LocalPopChoice(n_7);
          }
        else
          {
            t = l_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = s_94(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, c_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Rec_2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        ATerm n_12 = NULL,p_12 = NULL;
        ATerm o_12 = NULL;
        t = SSLgetAnnotations(not_null(h_12));
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
        {
          t = not_null(i_12);
          {
            ATerm r_12 = NULL;
            t = u_83(t);
            {
              p_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm t_12 = NULL;
                  t = v_83(t);
                  {
                    r_12 = t;
                    {
                      ATerm u_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_12), not_null(r_12)), not_null(n_12));
                      {
                        u_12 = t;
                        if(((t_12 != NULL) && (t_12 != u_12)))
                          _fail(u_12);
                        else
                          t_12 = u_12;
                      }
                      t = not_null(t_12);
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
ATerm Let_2 (ATerm t, ATerm w_83 (ATerm), ATerm x_83 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_Let_2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      {
        ATerm m_13 = NULL,o_13 = NULL;
        ATerm n_13 = NULL;
        t = SSLgetAnnotations(not_null(g_13));
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
        {
          t = not_null(h_13);
          {
            ATerm q_13 = NULL;
            t = w_83(t);
            {
              o_13 = t;
              {
                t = not_null(i_13);
                {
                  ATerm s_13 = NULL;
                  t = x_83(t);
                  {
                    q_13 = t;
                    {
                      ATerm t_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_13), not_null(q_13)), not_null(m_13));
                      {
                        t_13 = t;
                        if(((s_13 != NULL) && (s_13 != t_13)))
                          _fail(t_13);
                        else
                          s_13 = t_13;
                      }
                      t = not_null(s_13);
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
ATerm sboundin_3 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_94, t_94);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm r_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_94, v_94, t_94);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = r_7;
            t = Rec_2(t, v_94, t_94);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_Rec_2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(c_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_SDef_3))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      o_14 = ATgetArgument(l_14, 2);
      {
        t = not_null(n_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
            s_14 = t;
            j_14 :
            if(match_cons(s_14, sym_VarDec_2))
              {
                t_14 = ATgetArgument(s_14, 0);
                u_14 = ATgetArgument(s_14, 1);
                t = not_null(t_14);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_1);
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_Let_2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        t = not_null(d_15);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
            h_15 = t;
            a_15 :
            if(match_cons(h_15, sym_SDef_3))
              {
                i_15 = ATgetArgument(h_15, 0);
                j_15 = ATgetArgument(h_15, 1);
                k_15 = ATgetArgument(h_15, 2);
                t = not_null(i_15);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_1);
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
  ATerm f_1 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm w_7 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(f_8);
            }
          else
            {
              t = w_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm o_94 (ATerm))
{
  t = Scope_2(t, o_94, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_DynamicRules_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm z_15 = NULL,b_16 = NULL;
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        {
          t = not_null(w_15);
          {
            ATerm d_16 = NULL;
            t = p_85(t);
            {
              b_16 = t;
              {
                ATerm e_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(b_16)), not_null(z_15));
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
                t = not_null(d_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm))
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_94, p_94);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      t = DynamicRules_1(t, p_94);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_DynamicRules_1))
    {
      m_16 = ATgetArgument(l_16, 0);
      {
        t = not_null(m_16);
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
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Var_1))
    {
      s_16 = ATgetArgument(r_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(s_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      {
        t = not_null(y_16);
        {
          ATerm d_17 (ATerm t)
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_16);
                ;
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                {
                  ATerm o_8 = t;
                  int p_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(z_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_105, g_1);
                      t = d_17(t);
                      ;
                      LocalPopChoice(p_8);
                    }
                  else
                    {
                      t = o_8;
                      t = Cons_2(t, _id, d_17);
                    }
                }
              }
            return(t);
          }
          t = d_17(t);
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
ATerm eq_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_105 (ATerm), ATerm w_105 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(((ATgetType(o_17) == AT_LIST) && !(ATisEmpty(o_17))))
    {
      p_17 = ATgetFirst((ATermList) o_17);
      q_17 = (ATerm) ATgetNext((ATermList) o_17);
      {
        t = w_105(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm t_17 = NULL;
            t_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), not_null(t_17));
              t = v_105(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(q_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_105 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        t = not_null(a_18);
        {
          ATerm f_18 (ATerm t)
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm f_9 = t;
                  int g_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(b_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_105, i_1);
                      t = f_18(t);
                      ;
                      LocalPopChoice(g_9);
                    }
                  else
                    {
                      t = f_9;
                      t = Cons_2(t, _id, f_18);
                    }
                }
              }
            return(t);
          }
          t = f_18(t);
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
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  h_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      i_18 :
      if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
        {
          m_18 = ATgetFirst((ATermList) l_18);
          n_18 = (ATerm) ATgetNext((ATermList) l_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_18)), not_null(m_18)), not_null(n_18));
        }
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
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  c_19 = t;
  a_19 :
  if(((ATgetType(c_19) == AT_LIST) && !(ATisEmpty(c_19))))
    {
      d_19 = ATgetFirst((ATermList) c_19);
      g_19 = (ATerm) ATgetNext((ATermList) c_19);
      b_19 :
      if(match_cons(d_19, sym__2))
        {
          e_19 = ATgetArgument(d_19, 0);
          f_19 = ATgetArgument(d_19, 1);
          {
            ATerm k_19 = NULL,l_19 = NULL,r_19 = NULL,x_19 = NULL;
            ATerm h_9;
            h_9 = t;
            {
              ATerm m_19 = NULL;
              ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
              t = not_null(f_19);
              {
                m_19 = t;
                {
                  t = SSL_explode_term(not_null(m_19));
                  {
                    o_19 = t;
                    v_18 :
                    if(match_cons(o_19, sym__2))
                      {
                        p_19 = ATgetArgument(o_19, 0);
                        q_19 = ATgetArgument(o_19, 1);
                        {
                          if(((k_19 != NULL) && (k_19 != p_19)))
                            _fail(p_19);
                          else
                            k_19 = p_19;
                          if(((l_19 != NULL) && (l_19 != q_19)))
                            _fail(q_19);
                          else
                            l_19 = q_19;
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
            t = h_9;
            {
              ATerm i_9;
              i_9 = t;
              {
                ATerm s_19 = NULL;
                ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
                t = not_null(e_19);
                {
                  s_19 = t;
                  {
                    t = SSL_explode_term(not_null(s_19));
                    {
                      u_19 = t;
                      y_18 :
                      if(match_cons(u_19, sym__2))
                        {
                          v_19 = ATgetArgument(u_19, 0);
                          w_19 = ATgetArgument(u_19, 1);
                          {
                            if(((k_19 != NULL) && (k_19 != v_19)))
                              _fail(v_19);
                            else
                              k_19 = v_19;
                            if(((r_19 != NULL) && (r_19 != w_19)))
                              _fail(w_19);
                            else
                              r_19 = w_19;
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
              t = i_9;
              {
                ATerm y_19 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), not_null(l_19));
                {
                  t = zip_1(t, _id);
                  {
                    y_19 = t;
                    if(((x_19 != NULL) && (x_19 != y_19)))
                      _fail(y_19);
                    else
                      x_19 = y_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(g_19));
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
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  i_20 = t;
  g_20 :
  if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
    {
      j_20 = ATgetFirst((ATermList) i_20);
      m_20 = (ATerm) ATgetNext((ATermList) i_20);
      h_20 :
      if(match_cons(j_20, sym__2))
        {
          k_20 = ATgetArgument(j_20, 0);
          l_20 = ATgetArgument(j_20, 1);
          {
            ATerm o_20 = NULL;
            if(((k_20 != NULL) && (k_20 != l_20)))
              _fail(l_20);
            else
              k_20 = l_20;
            {
              if(((o_20 != NULL) && (o_20 != m_20)))
                _fail(m_20);
              else
                o_20 = m_20;
              t = not_null(o_20);
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
ATerm while_not_2 (ATerm t, ATerm s_112 (ATerm), ATerm t_112 (ATerm))
{
  ATerm q_20 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
          t = t_112(t);
          t = q_20(t);
        }
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm))
{
  t = v_112(t);
  t = while_not_2(t, w_112, x_112);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm s_20 = NULL;
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_20));
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm l_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(u_10);
                }
              else
                {
                  t = l_10;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, m_1);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_20 (ATerm t)
  {
    ATerm v_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = v_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL;
              ATerm f_11;
              f_11 = t;
              {
                ATerm x_20 = NULL;
                t = n_110(t);
                {
                  x_20 = t;
                  if(((w_20 != NULL) && (w_20 != x_20)))
                    _fail(x_20);
                  else
                    w_20 = x_20;
                }
              }
              t = f_11;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(w_20);
                    return(t);
                  }
                  t = split_2(t, y_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_110(t, n_1, y_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, y_20);
              }
            }
        }
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  c_21 :
  if(match_cons(h_21, sym_LRule_1))
    {
      i_21 = ATgetArgument(h_21, 0);
      d_21 :
      if(match_cons(i_21, sym_Rule_3))
        {
          e_21 = ATgetArgument(i_21, 0);
          f_21 = ATgetArgument(i_21, 1);
          g_21 = ATgetArgument(i_21, 2);
          {
            t = not_null(e_21);
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
      if(match_cons(h_21, sym_Scope_2))
        {
          i_21 = ATgetArgument(h_21, 0);
          j_21 = ATgetArgument(h_21, 1);
          t = not_null(i_21);
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
  ATerm a_22 = NULL,b_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_Var_1))
    {
      b_22 = ATgetArgument(a_22, 0);
      {
        ATerm q_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_22 = NULL,g_22 = NULL;
            ATerm f_22 = NULL;
            t = SSLgetAnnotations(not_null(a_22));
            {
              f_22 = t;
              if(((e_22 != NULL) && (e_22 != f_22)))
                _fail(f_22);
              else
                e_22 = f_22;
            }
            {
              t = not_null(b_22);
              {
                ATerm i_22 = NULL;
                t = o_0(t);
                {
                  g_22 = t;
                  {
                    ATerm j_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_22)), not_null(e_22));
                    {
                      j_22 = t;
                      if(((i_22 != NULL) && (i_22 != j_22)))
                        _fail(j_22);
                      else
                        i_22 = j_22;
                    }
                    t = not_null(i_22);
                  }
                }
              }
            }
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = q_11;
            {
              ATerm m_22 = NULL,o_22 = NULL;
              ATerm n_22 = NULL;
              t = SSLgetAnnotations(not_null(a_22));
              {
                n_22 = t;
                if(((m_22 != NULL) && (m_22 != n_22)))
                  _fail(n_22);
                else
                  m_22 = n_22;
              }
              {
                t = not_null(b_22);
                {
                  ATerm q_22 = NULL;
                  t = o_0(t);
                  {
                    o_22 = t;
                    {
                      ATerm r_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_22)), not_null(m_22));
                      {
                        r_22 = t;
                        if(((q_22 != NULL) && (q_22 != r_22)))
                          _fail(r_22);
                        else
                          q_22 = r_22;
                      }
                      t = not_null(q_22);
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
ATerm DistBinding_2 (ATerm t, ATerm u_108 (ATerm), ATerm v_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  e_23 = t;
  d_23 :
  if(match_cons(e_23, sym__3))
    {
      f_23 = ATgetArgument(e_23, 0);
      g_23 = ATgetArgument(e_23, 1);
      h_23 = ATgetArgument(e_23, 2);
      {
        t = not_null(f_23);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm l_23 = NULL;
            l_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), not_null(h_23));
              t = u_108(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm n_23 = NULL;
            n_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(g_23));
              t = u_108(t);
            }
            return(t);
          }
          t = v_108(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm o_108 (ATerm), ATerm p_108 (ATerm, ATerm (ATerm)))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym__2))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      {
        ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,m_24 = NULL;
        ATerm x_11;
        x_11 = t;
        {
          ATerm h_24 = NULL;
          t = not_null(a_24);
          {
            ATerm i_24 = NULL;
            t = o_108(t);
            {
              h_24 = t;
              {
                if(((e_24 != NULL) && (e_24 != h_24)))
                  _fail(h_24);
                else
                  e_24 = h_24;
                {
                  ATerm j_24 = NULL,l_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    i_24 = t;
                    {
                      if(((f_24 != NULL) && (f_24 != i_24)))
                        _fail(i_24);
                      else
                        f_24 = i_24;
                      {
                        ATerm k_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), not_null(f_24));
                        {
                          t = zip_1(t, _id);
                          {
                            k_24 = t;
                            if(((j_24 != NULL) && (j_24 != k_24)))
                              _fail(k_24);
                            else
                              j_24 = k_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(b_24));
                          {
                            t = conc_0(t);
                            {
                              l_24 = t;
                              if(((g_24 != NULL) && (g_24 != l_24)))
                                _fail(l_24);
                              else
                                g_24 = l_24;
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
        t = x_11;
        {
          ATerm n_24 = NULL;
          t = not_null(a_24);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(f_24);
              return(t);
            }
            t = p_108(t, v_1);
            {
              n_24 = t;
              if(((m_24 != NULL) && (m_24 != n_24)))
                _fail(n_24);
              else
                m_24 = n_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(m_24), not_null(b_24), not_null(g_24));
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  v_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      w_24 :
      if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
        {
          a_25 = ATgetFirst((ATermList) z_24);
          b_25 = (ATerm) ATgetNext((ATermList) z_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(b_25));
        }
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
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  j_25 = t;
  g_25 :
  if(match_cons(j_25, sym__2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      h_25 :
      if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
        {
          m_25 = ATgetFirst((ATermList) l_25);
          p_25 = (ATerm) ATgetNext((ATermList) l_25);
          i_25 :
          if(match_cons(m_25, sym__2))
            {
              n_25 = ATgetArgument(m_25, 0);
              o_25 = ATgetArgument(m_25, 1);
              {
                ATerm r_25 = NULL;
                if(((k_25 != NULL) && (k_25 != n_25)))
                  _fail(n_25);
                else
                  k_25 = n_25;
                {
                  if(((r_25 != NULL) && (r_25 != o_25)))
                    _fail(o_25);
                  else
                    r_25 = o_25;
                  t = not_null(r_25);
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm z_108 (ATerm, ATerm (ATerm)))
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      {
        t = not_null(x_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(y_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = z_108(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm s_109 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        t = not_null(g_26);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm k_26 = NULL;
            k_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(h_26));
              t = s_109(t);
            }
            return(t);
          }
          t = _all(t, y_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm c_109 (ATerm))
{
  ATerm o_26 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_109(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = all_dist_1(t, o_26);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_108 (ATerm, ATerm (ATerm)), ATerm k_108 (ATerm), ATerm l_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_108 (ATerm, ATerm (ATerm)))
{
  ATerm q_26 = NULL;
  q_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), (ATerm) ATempty);
    {
      ATerm t_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, j_108);
              ;
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                t = RnBinding_2(t, k_108, m_108);
                t = DistBinding_2(t, t_26, l_108);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = t_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm u_26 (ATerm t, ATerm v_26 (ATerm))
  {
    t = Scope_2(t, v_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, u_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  ATerm q_29 (ATerm t)
  {
    ATerm d_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty);
    {
      ATerm a_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        d_28 = t;
        c_27 :
        if(match_cons(d_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_f_12;
    return(t);
  }
  ATerm r_29 (ATerm t)
  {
    ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
    ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
    t = not_null(x_27);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        k_28 = t;
        i_27 :
        if(match_cons(k_28, sym_Defined_2))
          {
            l_28 = ATgetArgument(k_28, 0);
            m_28 = ATgetArgument(k_28, 1);
            j_27 :
            if(match_string(l_28, "g_0"))
              {
                ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
                if(((g_28 != NULL) && (g_28 != m_28)))
                  _fail(m_28);
                else
                  g_28 = m_28;
                {
                  t = not_null(g_28);
                  {
                    t = strename_0(t);
                    {
                      n_28 = t;
                      g_27 :
                      if(match_cons(n_28, sym_SDef_3))
                        {
                          o_28 = ATgetArgument(n_28, 0);
                          p_28 = ATgetArgument(n_28, 1);
                          s_28 = ATgetArgument(n_28, 2);
                          h_27 :
                          if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
                            {
                              q_28 = ATgetFirst((ATermList) p_28);
                              r_28 = (ATerm) ATgetNext((ATermList) p_28);
                              {
                                ATerm t_28 = NULL;
                                if(((z_27 != NULL) && (z_27 != o_28)))
                                  _fail(o_28);
                                else
                                  z_27 = o_28;
                                {
                                  if(((h_28 != NULL) && (h_28 != p_28)))
                                    _fail(p_28);
                                  else
                                    h_28 = p_28;
                                  {
                                    if(((i_28 != NULL) && (i_28 != s_28)))
                                      _fail(s_28);
                                    else
                                      i_28 = s_28;
                                    {
                                      t = new_0(t);
                                      {
                                        t_28 = t;
                                        {
                                          if(((j_28 != NULL) && (j_28 != t_28)))
                                            _fail(t_28);
                                          else
                                            j_28 = t_28;
                                          {
                                            ATerm k_12;
                                            k_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty), term_f_12);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = term_e_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = k_12;
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
                }
              }
            else
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_28), not_null(h_28), not_null(i_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm s_29 (ATerm t)
  {
    ATerm w_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        w_28 = t;
        l_27 :
        if(match_cons(w_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_f_12;
    return(t);
  }
  ATerm t_29 (ATerm t)
  {
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        e_29 = t;
        q_27 :
        if(match_cons(e_29, sym_Defined_2))
          {
            f_29 = ATgetArgument(e_29, 0);
            g_29 = ATgetArgument(e_29, 1);
            r_27 :
            if(match_string(f_29, "d_0"))
              {
                ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
                if(((a_29 != NULL) && (a_29 != g_29)))
                  _fail(g_29);
                else
                  a_29 = g_29;
                {
                  t = not_null(a_29);
                  {
                    t = strename_0(t);
                    {
                      h_29 = t;
                      p_27 :
                      if(match_cons(h_29, sym_SDef_3))
                        {
                          i_29 = ATgetArgument(h_29, 0);
                          j_29 = ATgetArgument(h_29, 1);
                          k_29 = ATgetArgument(h_29, 2);
                          {
                            ATerm l_29 = NULL;
                            if(((z_27 != NULL) && (z_27 != i_29)))
                              _fail(i_29);
                            else
                              z_27 = i_29;
                            {
                              if(((b_29 != NULL) && (b_29 != j_29)))
                                _fail(j_29);
                              else
                                b_29 = j_29;
                              {
                                if(((c_29 != NULL) && (c_29 != k_29)))
                                  _fail(k_29);
                                else
                                  c_29 = k_29;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_29), not_null(a_28), not_null(c_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      l_29 = t;
                                      {
                                        if(((d_29 != NULL) && (d_29 != l_29)))
                                          _fail(l_29);
                                        else
                                          d_29 = l_29;
                                        {
                                          ATerm l_12;
                                          l_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty), term_f_12);
                                            {
                                              ATerm f_2 (ATerm t)
                                              {
                                                t = term_e_12;
                                                return(t);
                                              }
                                              t = assert_1(t, f_2);
                                            }
                                          }
                                          t = l_12;
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
    t = not_null(d_29);
    return(t);
  }
  ATerm u_29 (ATerm t)
  {
    ATerm p_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        p_29 = t;
        t_27 :
        if(match_cons(p_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_f_12;
    return(t);
  }
  x_27 = t;
  u_27 :
  if(match_cons(x_27, sym_Call_2))
    {
      y_27 = ATgetArgument(x_27, 0);
      a_28 = ATgetArgument(x_27, 1);
      v_27 :
      if(match_cons(y_27, sym_SVar_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          w_27 :
          if(((ATgetType(a_28) == AT_LIST) && ATisEmpty(a_28)))
            {
              {
                ATerm m_12 = t;
                int q_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_29(t);
                    ;
                    LocalPopChoice(q_12);
                  }
                else
                  {
                    t = m_12;
                    {
                      ATerm s_12 = t;
                      int v_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_29(t);
                          ;
                          LocalPopChoice(v_12);
                        }
                      else
                        {
                          t = s_12;
                          {
                            ATerm w_12 = t;
                            int x_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_29(t);
                                ;
                                LocalPopChoice(x_12);
                              }
                            else
                              {
                                t = w_12;
                                {
                                  ATerm y_12 = t;
                                  int z_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = t_29(t);
                                      ;
                                      LocalPopChoice(z_12);
                                    }
                                  else
                                    {
                                      t = y_12;
                                      t = u_29(t);
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
              ATerm a_13 = t;
              int b_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_29(t);
                  ;
                  LocalPopChoice(b_13);
                }
              else
                {
                  t = a_13;
                  {
                    ATerm c_13 = t;
                    int d_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_29(t);
                        ;
                        LocalPopChoice(d_13);
                      }
                    else
                      {
                        t = c_13;
                        {
                          ATerm e_13 = t;
                          int j_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_29(t);
                              ;
                              LocalPopChoice(j_13);
                            }
                          else
                            {
                              t = e_13;
                              t = u_29(t);
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym_SDef_3))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      j_30 = ATgetArgument(g_30, 2);
      {
        ATerm k_13;
        k_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_30)), (ATerm) ATempty), term_f_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = k_13;
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
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
    {
      p_30 = ATgetFirst((ATermList) o_30);
      q_30 = (ATerm) ATgetNext((ATermList) o_30);
      t = not_null(q_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym__2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        ATerm l_13;
        l_13 = t;
        {
          ATerm b_31 = NULL;
          ATerm c_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_30), not_null(y_30));
          {
            ATerm p_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = p_13;
                t = (ATerm) ATempty;
              }
            {
              c_31 = t;
              if(((b_31 != NULL) && (b_31 != c_31)))
                _fail(c_31);
              else
                b_31 = c_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_30), not_null(y_30), not_null(b_31));
            t = table_put_0(t);
          }
        }
        t = l_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm m_31 = NULL;
    ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
    t = q_107(t);
    {
      m_31 = t;
      {
        if(((l_31 != NULL) && (l_31 != m_31)))
          _fail(m_31);
        else
          l_31 = m_31;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), term_x_13);
              t = table_get_0(t);
              ;
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_31 = t;
            i_31 :
            if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
              {
                o_31 = ATgetFirst((ATermList) n_31);
                p_31 = (ATerm) ATgetNext((ATermList) n_31);
                {
                  if(((k_31 != NULL) && (k_31 != o_31)))
                    _fail(o_31);
                  else
                    k_31 = o_31;
                  {
                    if(((j_31 != NULL) && (j_31 != p_31)))
                      _fail(p_31);
                    else
                      j_31 = p_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), term_x_13, not_null(j_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_31);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm q_31 = NULL;
                              q_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(q_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = u_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_98(t);
      t = w_98(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        t = w_98(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_107 (ATerm))
{
  ATerm x_31 = NULL;
  ATerm e_14;
  e_14 = t;
  {
    ATerm y_31 = NULL;
    ATerm z_31 = NULL;
    t = p_107(t);
    {
      y_31 = t;
      {
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
        {
          ATerm a_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), term_x_13);
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                t = (ATerm) ATempty;
              }
            {
              a_32 = t;
              if(((z_31 != NULL) && (z_31 != a_32)))
                _fail(a_32);
              else
                z_31 = a_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), term_x_13, (ATerm) ATinsert(CheckATermList(not_null(z_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_107 (ATerm), ATerm s_107 (ATerm))
{
  t = begin_scope_1(t, r_107);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, r_107);
      return(t);
    }
    t = restore_always_2(t, s_107, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_107 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym__2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      {
        ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
        ATerm p_14;
        p_14 = t;
        {
          ATerm r_32 = NULL;
          ATerm s_32 = NULL,t_32 = NULL,g_34 = NULL;
          t = t_107(t);
          {
            r_32 = t;
            {
              if(((o_32 != NULL) && (o_32 != r_32)))
                _fail(r_32);
              else
                o_32 = r_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_32), not_null(k_32), not_null(l_32));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_14 = t;
                    int r_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), term_x_13);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(r_14);
                      }
                    else
                      {
                        t = q_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_32 = t;
                      h_32 :
                      if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
                        {
                          t_32 = ATgetFirst((ATermList) s_32);
                          g_34 = (ATerm) ATgetNext((ATermList) s_32);
                          {
                            if(((p_32 != NULL) && (p_32 != t_32)))
                              _fail(t_32);
                            else
                              p_32 = t_32;
                            {
                              if(((q_32 != NULL) && (q_32 != g_34)))
                                _fail(g_34);
                              else
                                q_32 = g_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_32), term_x_13, (ATerm) ATinsert(CheckATermList(not_null(q_32)), (ATerm) ATinsert(CheckATermList(not_null(p_32)), not_null(k_32))));
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
        t = p_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym_SDef_3))
    {
      l_35 = ATgetArgument(k_35, 0);
      m_35 = ATgetArgument(k_35, 1);
      n_35 = ATgetArgument(k_35, 2);
      {
        ATerm v_14;
        v_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, not_null(k_35)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = v_14;
        {
          ATerm x_14;
          x_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_14, not_null(k_35)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_e_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = x_14;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm z_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm))
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_106(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
        v_35 = t;
        u_35 :
        if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
          {
            w_35 = ATgetFirst((ATermList) v_35);
            x_35 = (ATerm) ATgetNext((ATermList) v_35);
            {
              ATerm b_36 = NULL,d_36 = NULL;
              ATerm l_15;
              l_15 = t;
              {
                ATerm c_36 = NULL;
                t = not_null(w_35);
                {
                  t = m_106(t);
                  {
                    c_36 = t;
                    if(((b_36 != NULL) && (b_36 != c_36)))
                      _fail(c_36);
                    else
                      b_36 = c_36;
                  }
                }
              }
              t = l_15;
              {
                ATerm e_36 = NULL;
                t = not_null(x_35);
                {
                  t = foldr_3(t, k_106, l_106, m_106);
                  {
                    e_36 = t;
                    if(((d_36 != NULL) && (d_36 != e_36)))
                      _fail(e_36);
                    else
                      d_36 = e_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(d_36));
                  t = l_106(t);
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
ATerm crush_3 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm))
{
  ATerm m_36 = NULL;
  ATerm o_36 = NULL;
  m_36 = t;
  {
    ATerm p_36 = NULL;
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
    t = not_null(m_36);
    {
      p_36 = t;
      {
        t = SSL_explode_term(not_null(p_36));
        {
          r_36 = t;
          l_36 :
          if(match_cons(r_36, sym__2))
            {
              s_36 = ATgetArgument(r_36, 0);
              t_36 = ATgetArgument(r_36, 1);
              if(((o_36 != NULL) && (o_36 != t_36)))
                _fail(t_36);
              else
                o_36 = t_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_36);
      t = foldr_3(t, i_105, j_105, k_105);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = crush_3(t, o_2, add_0, term_size_0);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm x_36 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = term_o_15;
            return(t);
          }
          t = crush_3(t, p_2, add_0, x_36);
          return(t);
        }
        t = x_36(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_LChoice_2))
    {
      f_37 = ATgetArgument(e_37, 0);
      g_37 = ATgetArgument(e_37, 1);
      {
        ATerm k_37 = NULL,m_37 = NULL;
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
        {
          t = not_null(f_37);
          {
            ATerm o_37 = NULL;
            t = j_83(t);
            {
              m_37 = t;
              {
                t = not_null(g_37);
                {
                  ATerm q_37 = NULL;
                  t = k_83(t);
                  {
                    o_37 = t;
                    {
                      ATerm r_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(m_37), not_null(o_37)), not_null(k_37));
                      {
                        r_37 = t;
                        if(((q_37 != NULL) && (q_37 != r_37)))
                          _fail(r_37);
                        else
                          q_37 = r_37;
                      }
                      t = not_null(q_37);
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
ATerm Choice_2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_Choice_2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      {
        ATerm j_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm n_38 = NULL;
            t = h_83(t);
            {
              l_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm p_38 = NULL;
                  t = i_83(t);
                  {
                    n_38 = t;
                    {
                      ATerm q_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_38), not_null(n_38)), not_null(j_38));
                      {
                        q_38 = t;
                        if(((p_38 != NULL) && (p_38 != q_38)))
                          _fail(q_38);
                        else
                          p_38 = q_38;
                      }
                      t = not_null(p_38);
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
ATerm Cong_2 (ATerm t, ATerm x_82 (ATerm), ATerm y_82 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  f_39 :
  if(match_cons(i_39, sym_Cong_2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm o_39 = NULL,q_39 = NULL;
        ATerm p_39 = NULL;
        t = SSLgetAnnotations(not_null(i_39));
        {
          p_39 = t;
          if(((o_39 != NULL) && (o_39 != p_39)))
            _fail(p_39);
          else
            o_39 = p_39;
        }
        {
          t = not_null(j_39);
          {
            ATerm s_39 = NULL;
            t = x_82(t);
            {
              q_39 = t;
              {
                t = not_null(k_39);
                {
                  ATerm u_39 = NULL;
                  t = y_82(t);
                  {
                    s_39 = t;
                    {
                      ATerm v_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(q_39), not_null(s_39)), not_null(o_39));
                      {
                        v_39 = t;
                        if(((u_39 != NULL) && (u_39 != v_39)))
                          _fail(v_39);
                        else
                          u_39 = v_39;
                      }
                      t = not_null(u_39);
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
ATerm Match_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Match_1))
    {
      h_40 = ATgetArgument(g_40, 0);
      {
        ATerm k_40 = NULL,m_40 = NULL;
        ATerm l_40 = NULL;
        t = SSLgetAnnotations(not_null(g_40));
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
        {
          t = not_null(h_40);
          {
            ATerm t_40 = NULL;
            t = o_82(t);
            {
              m_40 = t;
              {
                ATerm u_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(m_40)), not_null(k_40));
                {
                  u_40 = t;
                  if(((t_40 != NULL) && (t_40 != u_40)))
                    _fail(u_40);
                  else
                    t_40 = u_40;
                }
                t = not_null(t_40);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL,m_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Seq_2))
    {
      g_41 = ATgetArgument(f_41, 0);
      m_41 = ATgetArgument(f_41, 1);
      {
        ATerm q_41 = NULL,s_41 = NULL;
        ATerm r_41 = NULL;
        t = SSLgetAnnotations(not_null(f_41));
        {
          r_41 = t;
          if(((q_41 != NULL) && (q_41 != r_41)))
            _fail(r_41);
          else
            q_41 = r_41;
        }
        {
          t = not_null(g_41);
          {
            ATerm u_41 = NULL;
            t = f_83(t);
            {
              s_41 = t;
              {
                t = not_null(m_41);
                {
                  ATerm w_41 = NULL;
                  t = g_83(t);
                  {
                    u_41 = t;
                    {
                      ATerm x_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(s_41), not_null(u_41)), not_null(q_41));
                      {
                        x_41 = t;
                        if(((w_41 != NULL) && (w_41 != x_41)))
                          _fail(x_41);
                        else
                          w_41 = x_41;
                      }
                      t = not_null(w_41);
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
ATerm Scope_2 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Scope_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      {
        ATerm p_42 = NULL,r_42 = NULL;
        ATerm q_42 = NULL;
        t = SSLgetAnnotations(not_null(j_42));
        {
          q_42 = t;
          if(((p_42 != NULL) && (p_42 != q_42)))
            _fail(q_42);
          else
            p_42 = q_42;
        }
        {
          t = not_null(k_42);
          {
            ATerm v_42 = NULL;
            t = s_82(t);
            {
              r_42 = t;
              {
                t = not_null(l_42);
                {
                  ATerm b_43 = NULL;
                  t = t_82(t);
                  {
                    v_42 = t;
                    {
                      ATerm c_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_42), not_null(v_42)), not_null(p_42));
                      {
                        c_43 = t;
                        if(((b_43 != NULL) && (b_43 != c_43)))
                          _fail(c_43);
                        else
                          b_43 = c_43;
                      }
                      t = not_null(b_43);
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
ATerm Build_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm u_43 = NULL,z_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Build_1))
    {
      z_43 = ATgetArgument(u_43, 0);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm g_44 = NULL;
            t = p_82(t);
            {
              e_44 = t;
              {
                ATerm h_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(e_44)), not_null(c_44));
                {
                  h_44 = t;
                  if(((g_44 != NULL) && (g_44 != h_44)))
                    _fail(h_44);
                  else
                    g_44 = h_44;
                }
                t = not_null(g_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm r_44 = NULL,s_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym_SVar_1))
    {
      s_44 = ATgetArgument(r_44, 0);
      {
        ATerm v_44 = NULL,x_44 = NULL;
        ATerm w_44 = NULL;
        t = SSLgetAnnotations(not_null(r_44));
        {
          w_44 = t;
          if(((v_44 != NULL) && (v_44 != w_44)))
            _fail(w_44);
          else
            v_44 = w_44;
        }
        {
          t = not_null(s_44);
          {
            ATerm z_44 = NULL;
            t = t_83(t);
            {
              x_44 = t;
              {
                ATerm a_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(x_44)), not_null(v_44));
                {
                  a_45 = t;
                  if(((z_44 != NULL) && (z_44 != a_45)))
                    _fail(a_45);
                  else
                    z_44 = a_45;
                }
                t = not_null(z_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_Call_2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      {
        ATerm r_45 = NULL,t_45 = NULL;
        ATerm s_45 = NULL;
        t = SSLgetAnnotations(not_null(l_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
        {
          t = not_null(m_45);
          {
            ATerm w_45 = NULL;
            t = i_84(t);
            {
              t_45 = t;
              {
                t = not_null(n_45);
                {
                  ATerm y_45 = NULL;
                  t = j_84(t);
                  {
                    w_45 = t;
                    {
                      ATerm z_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(t_45), not_null(w_45)), not_null(r_45));
                      {
                        z_45 = t;
                        if(((y_45 != NULL) && (y_45 != z_45)))
                          _fail(z_45);
                        else
                          y_45 = z_45;
                      }
                      t = not_null(y_45);
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
ATerm Fail_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_Fail_0))
    {
      ATerm n_46 = NULL,p_46 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm o_46 = NULL;
        t = SSLgetAnnotations(not_null(l_46));
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
      }
      t = p_15;
      {
        ATerm q_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(n_46));
        {
          q_46 = t;
          if(((p_46 != NULL) && (p_46 != q_46)))
            _fail(q_46);
          else
            p_46 = q_46;
        }
        t = not_null(p_46);
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
  ATerm y_46 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym_Id_0))
    {
      ATerm c_47 = NULL,e_47 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(y_46));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
      }
      t = q_15;
      {
        ATerm f_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(c_47));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
        t = not_null(e_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm a_48 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        {
          ATerm t_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = t_15;
              {
                ATerm y_15 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    ;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = y_15;
                    {
                      ATerm f_16 = t;
                      int g_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          ;
                          LocalPopChoice(g_16);
                        }
                      else
                        {
                          t = f_16;
                          {
                            ATerm h_16 = t;
                            int i_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                ;
                                LocalPopChoice(i_16);
                              }
                            else
                              {
                                t = h_16;
                                {
                                  ATerm j_16 = t;
                                  int n_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      ;
                                      LocalPopChoice(n_16);
                                    }
                                  else
                                    {
                                      t = j_16;
                                      {
                                        ATerm o_16 = t;
                                        int p_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            ;
                                            LocalPopChoice(p_16);
                                          }
                                        else
                                          {
                                            t = o_16;
                                            {
                                              ATerm t_16 = t;
                                              int u_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  ;
                                                  LocalPopChoice(u_16);
                                                }
                                              else
                                                {
                                                  t = t_16;
                                                  {
                                                    ATerm v_16 = t;
                                                    int a_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        ;
                                                        LocalPopChoice(a_17);
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
                                                        {
                                                          ATerm b_17 = t;
                                                          int c_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              ;
                                                              LocalPopChoice(c_17);
                                                            }
                                                          else
                                                            {
                                                              t = b_17;
                                                              {
                                                                ATerm e_17 = t;
                                                                int j_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, a_48, a_48);
                                                                    ;
                                                                    LocalPopChoice(j_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_17;
                                                                    t = LChoice_2(t, a_48, a_48);
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
  t = a_48(t);
  {
    ATerm k_17;
    k_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_l_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = k_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_96 (ATerm))
{
  ATerm b_48 (ATerm t)
  {
    ATerm m_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_96(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = m_17;
        t = _one(t, b_48);
      }
    return(t);
  }
  t = b_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_SDef_3))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      o_48 = ATgetArgument(l_48, 2);
      {
        ATerm t_48 = NULL,v_48 = NULL;
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        {
          t = not_null(m_48);
          {
            ATerm x_48 = NULL;
            t = y_83(t);
            {
              v_48 = t;
              {
                t = not_null(n_48);
                {
                  ATerm z_48 = NULL;
                  t = z_83(t);
                  {
                    x_48 = t;
                    {
                      t = not_null(o_48);
                      {
                        ATerm b_49 = NULL;
                        t = a_84(t);
                        {
                          z_48 = t;
                          {
                            ATerm c_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(v_48), not_null(x_48), not_null(z_48)), not_null(t_48));
                            {
                              c_49 = t;
                              if(((b_49 != NULL) && (b_49 != c_49)))
                                _fail(c_49);
                              else
                                b_49 = c_49;
                            }
                            t = not_null(b_49);
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
ATerm inlineable_0 (ATerm t)
{
  ATerm w_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm j_50 = NULL;
    ATerm s_17 = t;
    if((PushChoice() == 0))
      {
        ATerm d_50 = NULL;
        d_50 = t;
        q_49 :
        if(!(match_string(d_50, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_17;
      }
    {
      j_50 = t;
      if(((w_49 != NULL) && (w_49 != j_50)))
        _fail(j_50);
      else
        w_49 = j_50;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm u_17;
    u_17 = t;
    {
      ATerm v_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
            m_50 = t;
            t_49 :
            if(match_cons(m_50, sym_Call_2))
              {
                n_50 = ATgetArgument(m_50, 0);
                p_50 = ATgetArgument(m_50, 1);
                u_49 :
                if(match_cons(n_50, sym_SVar_1))
                  {
                    o_50 = ATgetArgument(n_50, 0);
                    v_49 :
                    if(((ATgetType(p_50) == AT_LIST) && ATisEmpty(p_50)))
                      {
                        if(((w_49 != NULL) && (w_49 != o_50)))
                          _fail(o_50);
                        else
                          w_49 = o_50;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = oncetd_1(t, b_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_17;
        }
    }
    t = u_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  n_51 = t;
  m_51 :
  if(match_cons(n_51, sym_Cong_2))
    {
      o_51 = ATgetArgument(n_51, 0);
      p_51 = ATgetArgument(n_51, 1);
      {
        ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,s_52 = NULL,u_52 = NULL,w_52 = NULL;
        ATerm w_17;
        w_17 = t;
        {
          ATerm y_51 = NULL;
          t = not_null(p_51);
          {
            ATerm b_52 = NULL;
            t = map_1(t, new_0);
            {
              y_51 = t;
              {
                if(((v_51 != NULL) && (v_51 != y_51)))
                  _fail(y_51);
                else
                  v_51 = y_51;
                {
                  t = not_null(v_51);
                  {
                    ATerm c_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm z_51 = NULL;
                      ATerm a_52 = NULL;
                      a_52 = t;
                      if(((z_51 != NULL) && (z_51 != a_52)))
                        _fail(a_52);
                      else
                        z_51 = a_52;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      b_52 = t;
                      {
                        if(((s_51 != NULL) && (s_51 != b_52)))
                          _fail(b_52);
                        else
                          s_51 = b_52;
                        {
                          ATerm d_52 = NULL;
                          t = new_0(t);
                          {
                            c_52 = t;
                            {
                              if(((t_51 != NULL) && (t_51 != c_52)))
                                _fail(c_52);
                              else
                                t_51 = c_52;
                              {
                                t = not_null(p_51);
                                {
                                  ATerm g_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    d_52 = t;
                                    {
                                      if(((w_51 != NULL) && (w_51 != d_52)))
                                        _fail(d_52);
                                      else
                                        w_51 = d_52;
                                      {
                                        t = not_null(w_51);
                                        {
                                          ATerm h_52 = NULL,r_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm e_52 = NULL;
                                            ATerm f_52 = NULL;
                                            f_52 = t;
                                            if(((e_52 != NULL) && (e_52 != f_52)))
                                              _fail(f_52);
                                            else
                                              e_52 = f_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            g_52 = t;
                                            {
                                              if(((u_51 != NULL) && (u_51 != g_52)))
                                                _fail(g_52);
                                              else
                                                u_51 = g_52;
                                              {
                                                ATerm i_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_51), not_null(w_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    i_52 = t;
                                                    if(((h_52 != NULL) && (h_52 != i_52)))
                                                      _fail(i_52);
                                                    else
                                                      h_52 = i_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_52), not_null(p_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
                                                      j_52 = t;
                                                      f_51 :
                                                      if(match_cons(j_52, sym__2))
                                                        {
                                                          k_52 = ATgetArgument(j_52, 0);
                                                          n_52 = ATgetArgument(j_52, 1);
                                                          g_51 :
                                                          if(match_cons(k_52, sym__2))
                                                            {
                                                              l_52 = ATgetArgument(k_52, 0);
                                                              m_52 = ATgetArgument(k_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_52)))));
                                                            }
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
                                                    t = zip_1(t, e_3);
                                                    {
                                                      r_52 = t;
                                                      if(((x_51 != NULL) && (x_51 != r_52)))
                                                        _fail(r_52);
                                                      else
                                                        x_51 = r_52;
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
        t = w_17;
        {
          ATerm x_17;
          x_17 = t;
          {
            ATerm t_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_51), not_null(w_51));
            {
              t = conc_0(t);
              {
                t_52 = t;
                if(((s_52 != NULL) && (s_52 != t_52)))
                  _fail(t_52);
                else
                  s_52 = t_52;
              }
            }
          }
          t = x_17;
          {
            ATerm c_18;
            c_18 = t;
            {
              ATerm v_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_51), not_null(s_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_51))));
              {
                t = Mapp2_0(t);
                {
                  v_52 = t;
                  if(((u_52 != NULL) && (u_52 != v_52)))
                    _fail(v_52);
                  else
                    u_52 = v_52;
                }
              }
            }
            t = c_18;
            {
              ATerm x_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_51), not_null(u_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_51))));
              {
                t = Bapp2_0(t);
                {
                  x_52 = t;
                  if(((w_52 != NULL) && (w_52 != x_52)))
                    _fail(x_52);
                  else
                    w_52 = x_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_52)), not_null(t_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_51)), not_null(w_52))));
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Build_1))
    {
      d_54 = ATgetArgument(c_54, 0);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
            ATerm j_54 = NULL;
            ATerm n_54 = NULL;
            t = new_0(t);
            {
              j_54 = t;
              {
                if(((h_54 != NULL) && (h_54 != j_54)))
                  _fail(j_54);
                else
                  h_54 = j_54;
                {
                  t = not_null(d_54);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
                      k_54 = t;
                      r_53 :
                      if(match_cons(k_54, sym_Anno_2))
                        {
                          l_54 = ATgetArgument(k_54, 0);
                          m_54 = ATgetArgument(k_54, 1);
                          {
                            if(((f_54 != NULL) && (f_54 != l_54)))
                              _fail(l_54);
                            else
                              f_54 = l_54;
                            {
                              if(((g_54 != NULL) && (g_54 != m_54)))
                                _fail(m_54);
                              else
                                g_54 = m_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_54));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, f_3);
                    {
                      n_54 = t;
                      if(((i_54 != NULL) && (i_54 != n_54)))
                        _fail(n_54);
                      else
                        i_54 = n_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_54)), not_null(f_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_54))));
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            {
              ATerm o_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
                  ATerm s_54 = NULL;
                  ATerm v_54 = NULL;
                  t = new_0(t);
                  {
                    s_54 = t;
                    {
                      if(((q_54 != NULL) && (q_54 != s_54)))
                        _fail(s_54);
                      else
                        q_54 = s_54;
                      {
                        t = not_null(d_54);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm t_54 = NULL,u_54 = NULL;
                            t_54 = t;
                            v_53 :
                            if(match_cons(t_54, sym_RootApp_1))
                              {
                                u_54 = ATgetArgument(t_54, 0);
                                {
                                  if(((p_54 != NULL) && (p_54 != u_54)))
                                    _fail(u_54);
                                  else
                                    p_54 = u_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_54));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, g_3);
                          {
                            v_54 = t;
                            if(((r_54 != NULL) && (r_54 != v_54)))
                              _fail(v_54);
                            else
                              r_54 = v_54;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_54))));
                  ;
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = o_18;
                  {
                    ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
                    ATerm b_55 = NULL;
                    ATerm f_55 = NULL;
                    t = new_0(t);
                    {
                      b_55 = t;
                      {
                        if(((z_54 != NULL) && (z_54 != b_55)))
                          _fail(b_55);
                        else
                          z_54 = b_55;
                        {
                          t = not_null(d_54);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
                              c_55 = t;
                              z_53 :
                              if(match_cons(c_55, sym_App_2))
                                {
                                  d_55 = ATgetArgument(c_55, 0);
                                  e_55 = ATgetArgument(c_55, 1);
                                  {
                                    if(((x_54 != NULL) && (x_54 != d_55)))
                                      _fail(d_55);
                                    else
                                      x_54 = d_55;
                                    {
                                      if(((y_54 != NULL) && (y_54 != e_55)))
                                        _fail(e_55);
                                      else
                                        y_54 = e_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_54));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, h_3);
                            {
                              f_55 = t;
                              if(((a_55 != NULL) && (a_55 != f_55)))
                                _fail(f_55);
                              else
                                a_55 = f_55;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_54), not_null(y_54), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_54)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_55))));
                  }
                }
            }
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
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
  u_55 = t;
  t_55 :
  if(match_cons(u_55, sym__2))
    {
      v_55 = ATgetArgument(u_55, 0);
      w_55 = ATgetArgument(u_55, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_55)), not_null(v_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  h_56 = t;
  e_56 :
  if(match_cons(h_56, sym__2))
    {
      i_56 = ATgetArgument(h_56, 0);
      l_56 = ATgetArgument(h_56, 1);
      f_56 :
      if(((ATgetType(i_56) == AT_LIST) && !(ATisEmpty(i_56))))
        {
          j_56 = ATgetFirst((ATermList) i_56);
          k_56 = (ATerm) ATgetNext((ATermList) i_56);
          g_56 :
          if(((ATgetType(l_56) == AT_LIST) && !(ATisEmpty(l_56))))
            {
              m_56 = ATgetFirst((ATermList) l_56);
              n_56 = (ATerm) ATgetNext((ATermList) l_56);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_56), not_null(m_56)), (ATerm) ATmakeAppl(sym__2, not_null(k_56), not_null(n_56)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  u_56 :
  if(match_cons(x_56, sym__2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      v_56 :
      if(((ATgetType(y_56) == AT_LIST) && ATisEmpty(y_56)))
        {
          w_56 :
          if(((ATgetType(z_56) == AT_LIST) && ATisEmpty(z_56)))
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
ATerm genzip_4 (ATerm t, ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm))
{
  ATerm b_57 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_100(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          t = b_100(t);
          {
            t = _2(t, d_100, b_57);
            t = c_100(t);
          }
        }
      }
    return(t);
  }
  t = b_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_100 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_100);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  o_58 = t;
  c_58 :
  if(match_cons(o_58, sym_Call_2))
    {
      p_58 = ATgetArgument(o_58, 0);
      r_58 = ATgetArgument(o_58, 1);
      d_58 :
      if(match_cons(p_58, sym_SVar_1))
        {
          q_58 = ATgetArgument(p_58, 0);
          j_58 :
          if(match_string(q_58, "Anno_Cong__"))
            {
              k_58 :
              if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
                {
                  s_58 = ATgetFirst((ATermList) r_58);
                  v_58 = (ATerm) ATgetNext((ATermList) r_58);
                  l_58 :
                  if(match_cons(s_58, sym_Cong_2))
                    {
                      t_58 = ATgetArgument(s_58, 0);
                      u_58 = ATgetArgument(s_58, 1);
                      m_58 :
                      if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
                        {
                          w_58 = ATgetFirst((ATermList) v_58);
                          x_58 = (ATerm) ATgetNext((ATermList) v_58);
                          n_58 :
                          if(((ATgetType(x_58) == AT_LIST) && ATisEmpty(x_58)))
                            {
                              {
                                ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,g_60 = NULL,i_60 = NULL,k_60 = NULL;
                                ATerm s_18;
                                s_18 = t;
                                {
                                  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(u_58)), not_null(w_58));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      j_59 = t;
                                      y_57 :
                                      if(((ATgetType(j_59) == AT_LIST) && !(ATisEmpty(j_59))))
                                        {
                                          k_59 = ATgetFirst((ATermList) j_59);
                                          l_59 = (ATerm) ATgetNext((ATermList) j_59);
                                          {
                                            ATerm o_59 = NULL;
                                            if(((c_59 != NULL) && (c_59 != k_59)))
                                              _fail(k_59);
                                            else
                                              c_59 = k_59;
                                            {
                                              if(((g_59 != NULL) && (g_59 != l_59)))
                                                _fail(l_59);
                                              else
                                                g_59 = l_59;
                                              {
                                                ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm m_59 = NULL;
                                                  ATerm n_59 = NULL;
                                                  n_59 = t;
                                                  if(((m_59 != NULL) && (m_59 != n_59)))
                                                    _fail(n_59);
                                                  else
                                                    m_59 = n_59;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_59));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  o_59 = t;
                                                  {
                                                    if(((d_59 != NULL) && (d_59 != o_59)))
                                                      _fail(o_59);
                                                    else
                                                      d_59 = o_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(u_58)), not_null(w_58));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          p_59 = t;
                                                          x_57 :
                                                          if(((ATgetType(p_59) == AT_LIST) && !(ATisEmpty(p_59))))
                                                            {
                                                              q_59 = ATgetFirst((ATermList) p_59);
                                                              r_59 = (ATerm) ATgetNext((ATermList) p_59);
                                                              {
                                                                ATerm u_59 = NULL;
                                                                if(((e_59 != NULL) && (e_59 != q_59)))
                                                                  _fail(q_59);
                                                                else
                                                                  e_59 = q_59;
                                                                {
                                                                  if(((h_59 != NULL) && (h_59 != r_59)))
                                                                    _fail(r_59);
                                                                  else
                                                                    h_59 = r_59;
                                                                  {
                                                                    ATerm v_59 = NULL,f_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm s_59 = NULL;
                                                                      ATerm t_59 = NULL;
                                                                      t_59 = t;
                                                                      if(((s_59 != NULL) && (s_59 != t_59)))
                                                                        _fail(t_59);
                                                                      else
                                                                        s_59 = t_59;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      u_59 = t;
                                                                      {
                                                                        if(((f_59 != NULL) && (f_59 != u_59)))
                                                                          _fail(u_59);
                                                                        else
                                                                          f_59 = u_59;
                                                                        {
                                                                          ATerm w_59 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_59), not_null(h_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              w_59 = t;
                                                                              if(((v_59 != NULL) && (v_59 != w_59)))
                                                                                _fail(w_59);
                                                                              else
                                                                                v_59 = w_59;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_59), (ATerm) ATinsert(CheckATermList(not_null(u_58)), not_null(w_58)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
                                                                                x_59 = t;
                                                                                s_57 :
                                                                                if(match_cons(x_59, sym__2))
                                                                                  {
                                                                                    y_59 = ATgetArgument(x_59, 0);
                                                                                    b_60 = ATgetArgument(x_59, 1);
                                                                                    t_57 :
                                                                                    if(match_cons(y_59, sym__2))
                                                                                      {
                                                                                        z_59 = ATgetArgument(y_59, 0);
                                                                                        a_60 = ATgetArgument(y_59, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_60)))));
                                                                                      }
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
                                                                              t = zip_1(t, k_3);
                                                                              {
                                                                                f_60 = t;
                                                                                if(((i_59 != NULL) && (i_59 != f_60)))
                                                                                  _fail(f_60);
                                                                                else
                                                                                  i_59 = f_60;
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
                                  }
                                }
                                t = s_18;
                                {
                                  ATerm t_18;
                                  t_18 = t;
                                  {
                                    ATerm h_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_59), not_null(h_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        h_60 = t;
                                        if(((g_60 != NULL) && (g_60 != h_60)))
                                          _fail(h_60);
                                        else
                                          g_60 = h_60;
                                      }
                                    }
                                  }
                                  t = t_18;
                                  {
                                    ATerm u_18;
                                    u_18 = t;
                                    {
                                      ATerm j_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(d_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          j_60 = t;
                                          if(((i_60 != NULL) && (i_60 != j_60)))
                                            _fail(j_60);
                                          else
                                            i_60 = j_60;
                                        }
                                      }
                                    }
                                    t = u_18;
                                    {
                                      ATerm l_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_58), not_null(f_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          l_60 = t;
                                          if(((k_60 != NULL) && (k_60 != l_60)))
                                            _fail(l_60);
                                          else
                                            k_60 = l_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(g_60)), not_null(e_59)), not_null(c_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_59)), not_null(k_60))));
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
        }
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
ATerm As_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm f_61 = NULL,l_61 = NULL,m_61 = NULL;
  f_61 = t;
  e_61 :
  if(match_cons(f_61, sym_As_2))
    {
      l_61 = ATgetArgument(f_61, 0);
      m_61 = ATgetArgument(f_61, 1);
      {
        ATerm q_61 = NULL,s_61 = NULL;
        ATerm r_61 = NULL;
        t = SSLgetAnnotations(not_null(f_61));
        {
          r_61 = t;
          if(((q_61 != NULL) && (q_61 != r_61)))
            _fail(r_61);
          else
            q_61 = r_61;
        }
        {
          t = not_null(l_61);
          {
            ATerm y_61 = NULL;
            t = e_86(t);
            {
              s_61 = t;
              {
                t = not_null(m_61);
                {
                  ATerm a_62 = NULL;
                  t = f_86(t);
                  {
                    y_61 = t;
                    {
                      ATerm b_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(s_61), not_null(y_61)), not_null(q_61));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym_Prim_2))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      {
        ATerm u_62 = NULL,w_62 = NULL;
        ATerm v_62 = NULL;
        t = SSLgetAnnotations(not_null(n_62));
        {
          v_62 = t;
          if(((u_62 != NULL) && (u_62 != v_62)))
            _fail(v_62);
          else
            u_62 = v_62;
        }
        {
          t = not_null(o_62);
          {
            ATerm y_62 = NULL;
            t = k_82(t);
            {
              w_62 = t;
              {
                t = not_null(p_62);
                {
                  ATerm a_63 = NULL;
                  t = l_82(t);
                  {
                    y_62 = t;
                    {
                      ATerm b_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_62), not_null(y_62)), not_null(u_62));
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
ATerm Explode_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  m_63 :
  if(match_cons(n_63, sym_Explode_2))
    {
      o_63 = ATgetArgument(n_63, 0);
      p_63 = ATgetArgument(n_63, 1);
      {
        ATerm t_63 = NULL,v_63 = NULL;
        ATerm u_63 = NULL;
        t = SSLgetAnnotations(not_null(n_63));
        {
          u_63 = t;
          if(((t_63 != NULL) && (t_63 != u_63)))
            _fail(u_63);
          else
            t_63 = u_63;
        }
        {
          t = not_null(o_63);
          {
            ATerm x_63 = NULL;
            t = a_86(t);
            {
              v_63 = t;
              {
                t = not_null(p_63);
                {
                  ATerm z_63 = NULL;
                  t = b_86(t);
                  {
                    x_63 = t;
                    {
                      ATerm a_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_63), not_null(x_63)), not_null(t_63));
                      {
                        a_64 = t;
                        if(((z_63 != NULL) && (z_63 != a_64)))
                          _fail(a_64);
                        else
                          z_63 = a_64;
                      }
                      t = not_null(z_63);
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
ATerm Op_2 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  ATerm w_64 = NULL,g_65 = NULL,h_65 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_Op_2))
    {
      g_65 = ATgetArgument(w_64, 0);
      h_65 = ATgetArgument(w_64, 1);
      {
        ATerm t_65 = NULL,v_65 = NULL;
        ATerm u_65 = NULL;
        t = SSLgetAnnotations(not_null(w_64));
        {
          u_65 = t;
          if(((t_65 != NULL) && (t_65 != u_65)))
            _fail(u_65);
          else
            t_65 = u_65;
        }
        {
          t = not_null(g_65);
          {
            ATerm x_65 = NULL;
            t = o_84(t);
            {
              v_65 = t;
              {
                t = not_null(h_65);
                {
                  ATerm z_65 = NULL;
                  t = p_84(t);
                  {
                    x_65 = t;
                    {
                      ATerm a_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_65), not_null(x_65)), not_null(t_65));
                      {
                        a_66 = t;
                        if(((z_65 != NULL) && (z_65 != a_66)))
                          _fail(a_66);
                        else
                          z_65 = a_66;
                      }
                      t = not_null(z_65);
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
ATerm pat_td_1 (ATerm t, ATerm l_121 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_121(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm z_18 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, l_121);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = z_18;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, l_121);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  ;
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  {
                    ATerm n_19 = t;
                    int t_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, l_121);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        ;
                        LocalPopChoice(t_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm z_19 = t;
                          int a_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, l_121);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              ;
                              LocalPopChoice(a_20);
                            }
                          else
                            {
                              t = z_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, l_121);
                                  return(t);
                                }
                                t = As_2(t, _id, r_3);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL;
  w_66 = t;
  v_66 :
  if(match_cons(w_66, sym_Match_1))
    {
      x_66 = ATgetArgument(w_66, 0);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
            ATerm d_67 = NULL;
            ATerm h_67 = NULL;
            t = new_0(t);
            {
              d_67 = t;
              {
                if(((b_67 != NULL) && (b_67 != d_67)))
                  _fail(d_67);
                else
                  b_67 = d_67;
                {
                  t = not_null(x_66);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
                      e_67 = t;
                      l_66 :
                      if(match_cons(e_67, sym_Anno_2))
                        {
                          f_67 = ATgetArgument(e_67, 0);
                          g_67 = ATgetArgument(e_67, 1);
                          {
                            if(((z_66 != NULL) && (z_66 != f_67)))
                              _fail(f_67);
                            else
                              z_66 = f_67;
                            {
                              if(((a_67 != NULL) && (a_67 != g_67)))
                                _fail(g_67);
                              else
                                a_67 = g_67;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_67)), not_null(z_66));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, s_3);
                    {
                      h_67 = t;
                      if(((c_67 != NULL) && (c_67 != h_67)))
                        _fail(h_67);
                      else
                        c_67 = h_67;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_67)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_67)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_67))))));
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
                  ATerm m_67 = NULL;
                  ATerm p_67 = NULL;
                  t = new_0(t);
                  {
                    m_67 = t;
                    {
                      if(((k_67 != NULL) && (k_67 != m_67)))
                        _fail(m_67);
                      else
                        k_67 = m_67;
                      {
                        t = not_null(x_66);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm n_67 = NULL,o_67 = NULL;
                            n_67 = t;
                            p_66 :
                            if(match_cons(n_67, sym_RootApp_1))
                              {
                                o_67 = ATgetArgument(n_67, 0);
                                {
                                  if(((j_67 != NULL) && (j_67 != o_67)))
                                    _fail(o_67);
                                  else
                                    j_67 = o_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, t_3);
                          {
                            p_67 = t;
                            if(((l_67 != NULL) && (l_67 != p_67)))
                              _fail(p_67);
                            else
                              l_67 = p_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67))), not_null(j_67))));
                  ;
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
                    ATerm v_67 = NULL;
                    ATerm z_67 = NULL;
                    t = new_0(t);
                    {
                      v_67 = t;
                      {
                        if(((t_67 != NULL) && (t_67 != v_67)))
                          _fail(v_67);
                        else
                          t_67 = v_67;
                        {
                          t = not_null(x_66);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
                              w_67 = t;
                              t_66 :
                              if(match_cons(w_67, sym_App_2))
                                {
                                  x_67 = ATgetArgument(w_67, 0);
                                  y_67 = ATgetArgument(w_67, 1);
                                  {
                                    if(((s_67 != NULL) && (s_67 != x_67)))
                                      _fail(x_67);
                                    else
                                      s_67 = x_67;
                                    {
                                      if(((r_67 != NULL) && (r_67 != y_67)))
                                        _fail(y_67);
                                      else
                                        r_67 = y_67;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_67));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, u_3);
                            {
                              z_67 = t;
                              if(((u_67 != NULL) && (u_67 != z_67)))
                                _fail(z_67);
                              else
                                u_67 = z_67;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_67))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_67)), not_null(s_67)))));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym_Cong_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        ATerm z_69 = NULL;
        ATerm y_70 = NULL;
        t = not_null(w_69);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm v_70 = NULL,w_70 = NULL;
            w_70 = t;
            i_69 :
            if(match_cons(w_70, sym_Match_1))
              {
                v_70 = ATgetArgument(w_70, 0);
                t = not_null(v_70);
              }
            else
              {
                if(match_cons(w_70, sym_Id_0))
                  {
                    t = term_n_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, v_3);
          {
            y_70 = t;
            if(((z_69 != NULL) && (z_69 != y_70)))
              _fail(y_70);
            else
              z_69 = y_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(v_69), not_null(z_69)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  e_71 :
  if(match_cons(g_71, sym_Scope_2))
    {
      h_71 = ATgetArgument(g_71, 0);
      i_71 = ATgetArgument(g_71, 1);
      f_71 :
      if(((ATgetType(h_71) == AT_LIST) && ATisEmpty(h_71)))
        {
          t = not_null(i_71);
        }
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
ATerm Idempotency_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
  e_72 = t;
  r_71 :
  if(match_cons(e_72, sym_Where_1))
    {
      f_72 = ATgetArgument(e_72, 0);
      s_71 :
      if(match_cons(f_72, sym_Seq_2))
        {
          d_72 = ATgetArgument(f_72, 0);
          z_71 = ATgetArgument(f_72, 1);
          t_71 :
          if(match_cons(d_72, sym_Where_1))
            {
              y_71 = ATgetArgument(d_72, 0);
              u_71 :
              if(match_cons(z_71, sym_Seq_2))
                {
                  a_72 = ATgetArgument(z_71, 0);
                  c_72 = ATgetArgument(z_71, 1);
                  v_71 :
                  if(match_cons(a_72, sym_Build_1))
                    {
                      b_72 = ATgetArgument(a_72, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_72)), not_null(c_72))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_72, sym_Where_1))
            {
              d_72 = ATgetArgument(f_72, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_72));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(e_72, sym_Test_1))
        {
          f_72 = ATgetArgument(e_72, 0);
          w_71 :
          if(match_cons(f_72, sym_Test_1))
            {
              d_72 = ATgetArgument(f_72, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_72));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_72, sym_Not_1))
            {
              f_72 = ATgetArgument(e_72, 0);
              x_71 :
              if(match_cons(f_72, sym_Not_1))
                {
                  d_72 = ATgetArgument(f_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_72));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(e_72, sym_LChoice_2))
                {
                  f_72 = ATgetArgument(e_72, 0);
                  g_72 = ATgetArgument(e_72, 1);
                  {
                    if(((f_72 != NULL) && (f_72 != g_72)))
                      _fail(g_72);
                    else
                      f_72 = g_72;
                    t = not_null(f_72);
                  }
                }
              else
                {
                  if(match_cons(e_72, sym_Choice_2))
                    {
                      f_72 = ATgetArgument(e_72, 0);
                      g_72 = ATgetArgument(e_72, 1);
                      {
                        if(((f_72 != NULL) && (f_72 != g_72)))
                          _fail(g_72);
                        else
                          f_72 = g_72;
                        t = not_null(f_72);
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  d_73 = t;
  z_72 :
  if(match_cons(d_73, sym_LChoice_2))
    {
      e_73 = ATgetArgument(d_73, 0);
      h_73 = ATgetArgument(d_73, 1);
      a_73 :
      if(match_cons(e_73, sym_LChoice_2))
        {
          f_73 = ATgetArgument(e_73, 0);
          g_73 = ATgetArgument(e_73, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_73), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_73), not_null(h_73)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(d_73, sym_Seq_2))
        {
          e_73 = ATgetArgument(d_73, 0);
          h_73 = ATgetArgument(d_73, 1);
          b_73 :
          if(match_cons(e_73, sym_Seq_2))
            {
              f_73 = ATgetArgument(e_73, 0);
              g_73 = ATgetArgument(e_73, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_73), not_null(h_73)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_73, sym_Choice_2))
            {
              e_73 = ATgetArgument(d_73, 0);
              h_73 = ATgetArgument(d_73, 1);
              c_73 :
              if(match_cons(e_73, sym_Choice_2))
                {
                  f_73 = ATgetArgument(e_73, 0);
                  g_73 = ATgetArgument(e_73, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_73), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_73), not_null(h_73)));
                }
              else
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
ATerm HL_0 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  h_74 :
  if(match_cons(o_74, sym_Lets_2))
    {
      p_74 = ATgetArgument(o_74, 0);
      q_74 = ATgetArgument(o_74, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_74), not_null(q_74));
    }
  else
    {
      if(match_cons(o_74, sym_LChoices_1))
        {
          p_74 = ATgetArgument(o_74, 0);
          i_74 :
          if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
            {
              l_74 = ATgetFirst((ATermList) p_74);
              m_74 = (ATerm) ATgetNext((ATermList) p_74);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_74), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_74)));
            }
          else
            {
              if(((ATgetType(p_74) == AT_LIST) && ATisEmpty(p_74)))
                {
                  t = term_p_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(o_74, sym_Choices_1))
            {
              p_74 = ATgetArgument(o_74, 0);
              j_74 :
              if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
                {
                  l_74 = ATgetFirst((ATermList) p_74);
                  m_74 = (ATerm) ATgetNext((ATermList) p_74);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_74), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_74)));
                }
              else
                {
                  if(((ATgetType(p_74) == AT_LIST) && ATisEmpty(p_74)))
                    {
                      t = term_p_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(o_74, sym_Seqs_1))
                {
                  p_74 = ATgetArgument(o_74, 0);
                  k_74 :
                  if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
                    {
                      l_74 = ATgetFirst((ATermList) p_74);
                      m_74 = (ATerm) ATgetNext((ATermList) p_74);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_74), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_74)));
                    }
                  else
                    {
                      if(((ATgetType(p_74) == AT_LIST) && ATisEmpty(p_74)))
                        {
                          t = term_r_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(o_74, sym_DefaultVarDec_1))
                    {
                      p_74 = ATgetArgument(o_74, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_74), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_20), term_v_20));
                    }
                  else
                    {
                      if(match_cons(o_74, sym_InfixApp_3))
                        {
                          p_74 = ATgetArgument(o_74, 0);
                          q_74 = ATgetArgument(o_74, 1);
                          n_74 = ATgetArgument(o_74, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_74), (ATerm) ATmakeAppl(sym_Op_2, term_z_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_74)), not_null(p_74))));
                        }
                      else
                        {
                          if(match_cons(o_74, sym_BAM_3))
                            {
                              p_74 = ATgetArgument(o_74, 0);
                              q_74 = ATgetArgument(o_74, 1);
                              n_74 = ATgetArgument(o_74, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(n_74))), not_null(p_74)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_74))));
                            }
                          else
                            {
                              if(match_cons(o_74, sym_AM_2))
                                {
                                  p_74 = ATgetArgument(o_74, 0);
                                  q_74 = ATgetArgument(o_74, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_74), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_74)));
                                }
                              else
                                {
                                  if(match_cons(o_74, sym_MA_2))
                                    {
                                      p_74 = ATgetArgument(o_74, 0);
                                      q_74 = ATgetArgument(o_74, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_74)), not_null(q_74));
                                    }
                                  else
                                    {
                                      if(match_cons(o_74, sym_BA_2))
                                        {
                                          p_74 = ATgetArgument(o_74, 0);
                                          q_74 = ATgetArgument(o_74, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_74)), not_null(p_74));
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
ATerm F15_0 (ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL;
  c_76 = t;
  a_76 :
  if(match_cons(c_76, sym_Where_1))
    {
      d_76 = ATgetArgument(c_76, 0);
      b_76 :
      if(match_cons(d_76, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F14_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  g_76 :
  if(match_cons(i_76, sym_LChoice_2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      h_76 :
      if(match_cons(k_76, sym_Fail_0))
        {
          t = not_null(j_76);
        }
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
ATerm F13_0 (ATerm t)
{
  ATerm c_77 = NULL,i_78 = NULL,j_78 = NULL;
  c_77 = t;
  p_76 :
  if(match_cons(c_77, sym_LChoice_2))
    {
      i_78 = ATgetArgument(c_77, 0);
      j_78 = ATgetArgument(c_77, 1);
      b_77 :
      if(match_cons(i_78, sym_Fail_0))
        {
          t = not_null(j_78);
        }
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
ATerm F12_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
  p_78 = t;
  n_78 :
  if(match_cons(p_78, sym_Choice_2))
    {
      q_78 = ATgetArgument(p_78, 0);
      r_78 = ATgetArgument(p_78, 1);
      o_78 :
      if(match_cons(r_78, sym_Fail_0))
        {
          t = not_null(q_78);
        }
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
ATerm F11_0 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL;
  x_78 = t;
  v_78 :
  if(match_cons(x_78, sym_Choice_2))
    {
      y_78 = ATgetArgument(x_78, 0);
      z_78 = ATgetArgument(x_78, 1);
      w_78 :
      if(match_cons(y_78, sym_Fail_0))
        {
          t = not_null(z_78);
        }
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
ATerm F10_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  f_79 = t;
  e_79 :
  if(match_cons(f_79, sym_Cong_2))
    {
      g_79 = ATgetArgument(f_79, 0);
      h_79 = ATgetArgument(f_79, 1);
      {
        t = not_null(h_79);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm k_79 = NULL;
            k_79 = t;
            d_79 :
            if(!(match_cons(k_79, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_p_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
  p_79 = t;
  n_79 :
  if(match_cons(p_79, sym_Path_2))
    {
      q_79 = ATgetArgument(p_79, 0);
      r_79 = ATgetArgument(p_79, 1);
      o_79 :
      if(match_cons(r_79, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F8_0 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL;
  x_79 = t;
  v_79 :
  if(match_cons(x_79, sym_One_1))
    {
      y_79 = ATgetArgument(x_79, 0);
      w_79 :
      if(match_cons(y_79, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F7_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL;
  d_80 = t;
  b_80 :
  if(match_cons(d_80, sym_Some_1))
    {
      e_80 = ATgetArgument(d_80, 0);
      c_80 :
      if(match_cons(e_80, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F6_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  h_80 :
  if(match_cons(j_80, sym_Rec_2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      i_80 :
      if(match_cons(l_80, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F5_0 (ATerm t)
{
  ATerm y_80 = NULL,b_81 = NULL,c_81 = NULL;
  y_80 = t;
  r_80 :
  if(match_cons(y_80, sym_Scope_2))
    {
      b_81 = ATgetArgument(y_80, 0);
      c_81 = ATgetArgument(y_80, 1);
      s_80 :
      if(match_cons(c_81, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F3_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  i_81 = t;
  g_81 :
  if(match_cons(i_81, sym_Seq_2))
    {
      j_81 = ATgetArgument(i_81, 0);
      k_81 = ATgetArgument(i_81, 1);
      h_81 :
      if(match_cons(j_81, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm F2_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  q_81 = t;
  o_81 :
  if(match_cons(q_81, sym_Not_1))
    {
      r_81 = ATgetArgument(q_81, 0);
      p_81 :
      if(match_cons(r_81, sym_Fail_0))
        {
          t = term_r_20;
        }
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
ATerm F1_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  w_81 = t;
  u_81 :
  if(match_cons(w_81, sym_Test_1))
    {
      x_81 = ATgetArgument(w_81, 0);
      v_81 :
      if(match_cons(x_81, sym_Fail_0))
        {
          t = term_p_20;
        }
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            {
              ATerm m_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(n_21);
                }
              else
                {
                  t = m_21;
                  {
                    ATerm o_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(p_21);
                      }
                    else
                      {
                        t = o_21;
                        {
                          ATerm q_21 = t;
                          int r_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(r_21);
                            }
                          else
                            {
                              t = q_21;
                              {
                                ATerm s_21 = t;
                                int t_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(t_21);
                                  }
                                else
                                  {
                                    t = s_21;
                                    {
                                      ATerm u_21 = t;
                                      int v_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(v_21);
                                        }
                                      else
                                        {
                                          t = u_21;
                                          {
                                            ATerm w_21 = t;
                                            int x_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(x_21);
                                              }
                                            else
                                              {
                                                t = w_21;
                                                {
                                                  ATerm y_21 = t;
                                                  int c_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(c_22);
                                                    }
                                                  else
                                                    {
                                                      t = y_21;
                                                      {
                                                        ATerm d_22 = t;
                                                        int h_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(h_22);
                                                          }
                                                        else
                                                          {
                                                            t = d_22;
                                                            {
                                                              ATerm k_22 = t;
                                                              int l_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_22);
                                                                }
                                                              else
                                                                {
                                                                  t = k_22;
                                                                  {
                                                                    ATerm p_22 = t;
                                                                    int s_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(s_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_22;
                                                                        {
                                                                          ATerm t_22 = t;
                                                                          int u_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(u_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_22;
                                                                              t = F15_0(t);
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
ATerm I16_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  c_82 = t;
  a_82 :
  if(match_cons(c_82, sym_Match_1))
    {
      d_82 = ATgetArgument(c_82, 0);
      b_82 :
      if(match_cons(d_82, sym_Wld_0))
        {
          t = term_r_20;
        }
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
ATerm I12_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  m_82 = t;
  g_82 :
  if(match_cons(m_82, sym_Where_1))
    {
      n_82 = ATgetArgument(m_82, 0);
      h_82 :
      if(match_cons(n_82, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm I10_0 (ATerm t)
{
  ATerm w_82 = NULL,z_82 = NULL;
  w_82 = t;
  u_82 :
  if(match_cons(w_82, sym_All_1))
    {
      z_82 = ATgetArgument(w_82, 0);
      v_82 :
      if(match_cons(z_82, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm I9_0 (ATerm t)
{
  ATerm e_83 = NULL,l_83 = NULL,m_83 = NULL;
  e_83 = t;
  c_83 :
  if(match_cons(e_83, sym_Rec_2))
    {
      l_83 = ATgetArgument(e_83, 0);
      m_83 = ATgetArgument(e_83, 1);
      d_83 :
      if(match_cons(m_83, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm I8_0 (ATerm t)
{
  ATerm s_83 = NULL,b_84 = NULL,c_84 = NULL;
  s_83 = t;
  q_83 :
  if(match_cons(s_83, sym_Scope_2))
    {
      b_84 = ATgetArgument(s_83, 0);
      c_84 = ATgetArgument(s_83, 1);
      r_83 :
      if(match_cons(c_84, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm I7_0 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  g_84 :
  if(match_cons(k_84, sym_LChoice_2))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      h_84 :
      if(match_cons(l_84, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm I4_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  w_84 = t;
  s_84 :
  if(match_cons(w_84, sym_Seq_2))
    {
      x_84 = ATgetArgument(w_84, 0);
      y_84 = ATgetArgument(w_84, 1);
      u_84 :
      if(match_cons(y_84, sym_Id_0))
        {
          t = not_null(x_84);
        }
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
ATerm I3_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  c_85 :
  if(match_cons(e_85, sym_Seq_2))
    {
      f_85 = ATgetArgument(e_85, 0);
      g_85 = ATgetArgument(e_85, 1);
      d_85 :
      if(match_cons(f_85, sym_Id_0))
        {
          t = not_null(g_85);
        }
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
ATerm I2_0 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL;
  m_85 = t;
  k_85 :
  if(match_cons(m_85, sym_Not_1))
    {
      n_85 = ATgetArgument(m_85, 0);
      l_85 :
      if(match_cons(n_85, sym_Id_0))
        {
          t = term_p_20;
        }
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
ATerm I1_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL;
  t_85 = t;
  r_85 :
  if(match_cons(t_85, sym_Test_1))
    {
      u_85 = ATgetArgument(t_85, 0);
      s_85 :
      if(match_cons(u_85, sym_Id_0))
        {
          t = term_r_20;
        }
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
ATerm ElimId_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm i_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = i_23;
                              {
                                ATerm k_23 = t;
                                int m_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(m_23);
                                  }
                                else
                                  {
                                    t = k_23;
                                    {
                                      ATerm o_23 = t;
                                      int p_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(p_23);
                                        }
                                      else
                                        {
                                          t = o_23;
                                          {
                                            ATerm q_23 = t;
                                            int r_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(r_23);
                                              }
                                            else
                                              {
                                                t = q_23;
                                                {
                                                  ATerm s_23 = t;
                                                  int t_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(t_23);
                                                    }
                                                  else
                                                    {
                                                      t = s_23;
                                                      t = I16_0(t);
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
ATerm Simplify_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  {
                    ATerm o_24 = t;
                    int p_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(p_24);
                      }
                    else
                      {
                        t = o_24;
                        {
                          ATerm q_24 = t;
                          int r_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(r_24);
                            }
                          else
                            {
                              t = q_24;
                              {
                                ATerm s_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(t_24);
                                  }
                                else
                                  {
                                    t = s_24;
                                    {
                                      ATerm u_24 = t;
                                      int c_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(c_25);
                                        }
                                      else
                                        {
                                          t = u_24;
                                          {
                                            ATerm d_25 = t;
                                            int e_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(e_25);
                                              }
                                            else
                                              {
                                                t = d_25;
                                                t = TransformingCongruence_0(t);
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
ATerm repeat_1 (ATerm t, ATerm d_112 (ATerm))
{
  ATerm w_85 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = d_112(t);
      t = w_85(t);
      return(t);
    }
    t = try_1(t, x_3);
    return(t);
  }
  t = w_85(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm q_95 (ATerm))
{
  t = q_95(t);
  {
    ATerm y_3 (ATerm t)
    {
      t = downup_1(t, q_95);
      return(t);
    }
    t = _all(t, y_3);
    t = q_95(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, z_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm e_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, e_4);
    }
    return(t);
  }
  t = map_1(t, a_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm g_86 = NULL,h_86 = NULL;
  g_86 = t;
  d_86 :
  if(match_cons(g_86, sym_Strategies_1))
    {
      h_86 = ATgetArgument(g_86, 0);
      {
        ATerm k_86 = NULL,m_86 = NULL;
        ATerm l_86 = NULL;
        t = SSLgetAnnotations(not_null(g_86));
        {
          l_86 = t;
          if(((k_86 != NULL) && (k_86 != l_86)))
            _fail(l_86);
          else
            k_86 = l_86;
        }
        {
          t = not_null(h_86);
          {
            ATerm o_86 = NULL;
            t = t_84(t);
            {
              m_86 = t;
              {
                ATerm p_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_86)), not_null(k_86));
                {
                  p_86 = t;
                  if(((o_86 != NULL) && (o_86 != p_86)))
                    _fail(p_86);
                  else
                    o_86 = p_86;
                }
                t = not_null(o_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm z_86 = NULL,a_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym_Specification_1))
    {
      a_87 = ATgetArgument(z_86, 0);
      {
        ATerm d_87 = NULL,f_87 = NULL;
        ATerm e_87 = NULL;
        t = SSLgetAnnotations(not_null(z_86));
        {
          e_87 = t;
          if(((d_87 != NULL) && (d_87 != e_87)))
            _fail(e_87);
          else
            d_87 = e_87;
        }
        {
          t = not_null(a_87);
          {
            ATerm h_87 = NULL;
            t = v_84(t);
            {
              f_87 = t;
              {
                ATerm i_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_87)), not_null(d_87));
                {
                  i_87 = t;
                  if(((h_87 != NULL) && (h_87 != i_87)))
                    _fail(i_87);
                  else
                    h_87 = i_87;
                }
                t = not_null(h_87);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, h_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, g_4);
    return(t);
  }
  t = Specification_1(t, f_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
  t_87 = t;
  s_87 :
  if(match_cons(t_87, sym__2))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      {
        ATerm z_87 = NULL,b_88 = NULL;
        ATerm a_88 = NULL;
        t = SSLgetAnnotations(not_null(t_87));
        {
          a_88 = t;
          if(((z_87 != NULL) && (z_87 != a_88)))
            _fail(a_88);
          else
            z_87 = a_88;
        }
        {
          t = not_null(u_87);
          {
            ATerm d_88 = NULL;
            t = z_80(t);
            {
              b_88 = t;
              {
                t = not_null(v_87);
                {
                  ATerm f_88 = NULL;
                  t = a_81(t);
                  {
                    d_88 = t;
                    {
                      ATerm g_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_88), not_null(d_88)), not_null(z_87));
                      {
                        g_88 = t;
                        if(((f_88 != NULL) && (f_88 != g_88)))
                          _fail(g_88);
                        else
                          f_88 = g_88;
                      }
                      t = not_null(f_88);
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
  ATerm o_88 = NULL;
  ATerm f_25;
  f_25 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm p_88 = NULL,q_88 = NULL;
      p_88 = t;
      n_88 :
      if(match_cons(p_88, sym_Program_1))
        {
          q_88 = ATgetArgument(p_88, 0);
          if(((o_88 != NULL) && (o_88 != q_88)))
            _fail(q_88);
          else
            o_88 = q_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_25), not_null(o_88)), term_s_25));
      {
        t = printnl_0(t);
        {
          t = term_o_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
  u_88 = t;
  t_88 :
  if(match_cons(u_88, sym__2))
    {
      v_88 = ATgetArgument(u_88, 0);
      w_88 = ATgetArgument(u_88, 1);
      {
        ATerm u_25;
        u_25 = t;
        t = SSL_printnl(not_null(v_88), not_null(w_88));
        t = u_25;
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
  ATerm b_89 = NULL;
  b_89 = t;
  t = SSL_implode_string(not_null(b_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
        g_89 = t;
        f_89 :
        if(((ATgetType(g_89) == AT_LIST) && !(ATisEmpty(g_89))))
          {
            h_89 = ATgetFirst((ATermList) g_89);
            i_89 = (ATerm) ATgetNext((ATermList) g_89);
            {
              t = not_null(h_89);
              {
                ATerm j_4 (ATerm t)
                {
                  t = not_null(i_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_4);
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
  ATerm s_89 = NULL;
  ATerm u_89 = NULL;
  s_89 = t;
  {
    ATerm v_89 = NULL;
    ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
    t = not_null(s_89);
    {
      v_89 = t;
      {
        t = SSL_explode_term(not_null(v_89));
        {
          x_89 = t;
          q_89 :
          if(match_cons(x_89, sym__2))
            {
              y_89 = ATgetArgument(x_89, 0);
              z_89 = ATgetArgument(x_89, 1);
              r_89 :
              if(match_string(y_89, ""))
                {
                  if(((u_89 != NULL) && (u_89 != z_89)))
                    _fail(z_89);
                  else
                    u_89 = z_89;
                }
              else
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
      t = not_null(u_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm d_90 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_90);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          t = Nil_0(t);
          t = e_102(t);
        }
      }
    return(t);
  }
  t = d_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  f_90 :
  if(match_cons(g_90, sym__2))
    {
      h_90 = ATgetArgument(g_90, 0);
      i_90 = ATgetArgument(g_90, 1);
      {
        t = not_null(h_90);
        {
          ATerm k_4 (ATerm t)
          {
            t = not_null(i_90);
            return(t);
          }
          t = at_end_1(t, k_4);
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
  ATerm d_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = d_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_90 = NULL;
  n_90 = t;
  t = SSL_explode_string(not_null(n_90));
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
  ATerm r_90 = NULL;
  r_90 = t;
  t = SSL_is_string(not_null(r_90));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = j_26;
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_4);
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            {
              ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL;
              a_91 = t;
              z_90 :
              if(match_cons(a_91, sym_Path_1))
                {
                  b_91 = ATgetArgument(a_91, 0);
                  t = not_null(b_91);
                }
              else
                {
                  if(match_cons(a_91, sym_Var_1))
                    {
                      b_91 = ATgetArgument(a_91, 0);
                      {
                        t = not_null(b_91);
                        {
                          ATerm p_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = p_26;
                              {
                                ATerm m_4 (ATerm t)
                                {
                                  t = term_s_26;
                                  return(t);
                                }
                                t = debug_1(t, m_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_91, sym_Prefix_2))
                        {
                          b_91 = ATgetArgument(a_91, 0);
                          c_91 = ATgetArgument(a_91, 1);
                          {
                            ATerm h_91 = NULL,j_91 = NULL;
                            ATerm w_26;
                            w_26 = t;
                            {
                              ATerm i_91 = NULL;
                              t = not_null(b_91);
                              {
                                t = eval_config_0(t);
                                {
                                  i_91 = t;
                                  if(((h_91 != NULL) && (h_91 != i_91)))
                                    _fail(i_91);
                                  else
                                    h_91 = i_91;
                                }
                              }
                            }
                            t = w_26;
                            {
                              ATerm k_91 = NULL;
                              t = not_null(c_91);
                              {
                                t = eval_config_0(t);
                                {
                                  k_91 = t;
                                  if(((j_91 != NULL) && (j_91 != k_91)))
                                    _fail(k_91);
                                  else
                                    j_91 = k_91;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_91), not_null(j_91));
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
  ATerm s_91 = NULL;
  s_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(s_91));
    {
      t = table_get_0(t);
      {
        ATerm n_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_26;
            y_26 = t;
            {
              ATerm u_91 = NULL;
              ATerm v_91 = NULL;
              v_91 = t;
              if(((u_91 != NULL) && (u_91 != v_91)))
                _fail(v_91);
              else
                u_91 = v_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(s_91), not_null(u_91));
                t = table_put_0(t);
              }
            }
            t = y_26;
          }
          return(t);
        }
        t = try_1(t, n_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_117 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm z_26;
    z_26 = t;
    {
      ATerm z_91 = NULL;
      ATerm a_92 = NULL;
      t = term_a_27;
      {
        t = get_config_0(t);
        {
          a_92 = t;
          if(((z_91 != NULL) && (z_91 != a_92)))
            _fail(a_92);
          else
            z_91 = a_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_91), term_b_27);
        t = geq_0(t);
      }
    }
    t = z_26;
    t = p_117(t);
    return(t);
  }
  t = try_1(t, o_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  e_92 = t;
  d_92 :
  if(match_cons(e_92, sym__2))
    {
      f_92 = ATgetArgument(e_92, 0);
      g_92 = ATgetArgument(e_92, 1);
      t = SSL_WriteToTextFile(not_null(f_92), not_null(g_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,q_92 = NULL;
  m_92 = t;
  l_92 :
  if(match_cons(m_92, sym__2))
    {
      n_92 = ATgetArgument(m_92, 0);
      q_92 = ATgetArgument(m_92, 1);
      t = SSL_WriteToBinaryFile(not_null(n_92), not_null(q_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_92 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            ATerm z_92 = NULL,a_93 = NULL;
            z_92 = t;
            v_92 :
            if(match_cons(z_92, sym_Output_1))
              {
                a_93 = ATgetArgument(z_92, 0);
                if(((y_92 != NULL) && (y_92 != a_93)))
                  _fail(a_93);
                else
                  y_92 = a_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_4);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm b_93 = NULL;
            t = term_k_27;
            {
              b_93 = t;
              if(((y_92 != NULL) && (y_92 != b_93)))
                _fail(b_93);
              else
                y_92 = b_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_4, _id);
  }
  t = d_27;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = not_null(y_92);
        return(t);
      }
      t = split_2(t, s_4, _id);
      return(t);
    }
    t = _2(t, _id, r_4);
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm c_93 = NULL;
              c_93 = t;
              x_92 :
              if(!(match_cons(c_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_4);
            return(t);
          }
          t = _2(t, t_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_115 (ATerm))
{
  ATerm i_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  ATerm o_27;
  o_27 = t;
  t = dtime_0(t);
  t = o_27;
  {
    t = r_115(t);
    {
      ATerm s_27;
      s_27 = t;
      {
        ATerm j_93 = NULL;
        t = dtime_0(t);
        {
          j_93 = t;
          if(((i_93 != NULL) && (i_93 != j_93)))
            _fail(j_93);
          else
            i_93 = j_93;
        }
      }
      t = s_27;
      {
        k_93 = t;
        h_93 :
        if(match_cons(k_93, sym__2))
          {
            l_93 = ATgetArgument(k_93, 0);
            m_93 = ATgetArgument(k_93, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_93)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_93))), not_null(m_93));
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
ATerm debug_1 (ATerm t, ATerm w_121 (ATerm))
{
  ATerm b_28;
  b_28 = t;
  {
    ATerm w_93 = NULL,y_93 = NULL;
    ATerm c_28;
    c_28 = t;
    {
      ATerm x_93 = NULL;
      t = w_121(t);
      {
        x_93 = t;
        if(((w_93 != NULL) && (w_93 != x_93)))
          _fail(x_93);
        else
          w_93 = x_93;
      }
    }
    t = c_28;
    {
      ATerm z_93 = NULL;
      z_93 = t;
      if(((y_93 != NULL) && (y_93 != z_93)))
        _fail(z_93);
      else
        y_93 = z_93;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_93)), not_null(w_93)));
        t = printnl_0(t);
      }
    }
  }
  t = b_28;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_94 = NULL;
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_94 = NULL;
      e_94 = t;
      {
        if(((d_94 != NULL) && (d_94 != e_94)))
          _fail(e_94);
        else
          d_94 = e_94;
        t = SSL_ReadFromFile(not_null(d_94));
      }
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm v_4 (ATerm t)
        {
          t = term_u_28;
          return(t);
        }
        t = debug_1(t, v_4);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  ATerm i_94 = NULL,k_94 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm j_94 = NULL;
    t = a_99(t);
    {
      j_94 = t;
      if(((i_94 != NULL) && (i_94 != j_94)))
        _fail(j_94);
      else
        i_94 = j_94;
    }
  }
  t = v_28;
  {
    ATerm l_94 = NULL;
    t = b_99(t);
    {
      l_94 = t;
      if(((k_94 != NULL) && (k_94 != l_94)))
        _fail(l_94);
      else
        k_94 = l_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), not_null(k_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_94 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_4 (ATerm t)
        {
          ATerm a_95 = NULL,b_95 = NULL;
          a_95 = t;
          x_94 :
          if(match_cons(a_95, sym_Input_1))
            {
              b_95 = ATgetArgument(a_95, 0);
              if(((z_94 != NULL) && (z_94 != b_95)))
                _fail(b_95);
              else
                z_94 = b_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_4);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        {
          ATerm c_95 = NULL;
          t = term_m_29;
          {
            c_95 = t;
            if(((z_94 != NULL) && (z_94 != c_95)))
              _fail(c_95);
            else
              z_94 = c_95;
          }
        }
      }
  }
  t = x_28;
  {
    ATerm x_4 (ATerm t)
    {
      t = not_null(z_94);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_4);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm g_95 = NULL;
    g_95 = t;
    f_95 :
    if(!(match_string(g_95, "-v")))
      {
        if(!(match_string(g_95, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_o_29;
    t = set_config_0(t);
    t = term_v_29;
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_w_29;
    return(t);
  }
  t = Option_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm j_95 = NULL;
    j_95 = t;
    h_95 :
    if(!(match_string(j_95, "-k")))
      {
        if(!(match_string(j_95, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm x_29;
    x_29 = t;
    {
      ATerm k_95 = NULL;
      ATerm l_95 = NULL;
      t = string_to_int_0(t);
      {
        l_95 = t;
        if(((k_95 != NULL) && (k_95 != l_95)))
          _fail(l_95);
        else
          k_95 = l_95;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_29, not_null(k_95));
        t = set_config_0(t);
      }
    }
    t = x_29;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_z_29;
    return(t);
  }
  t = ArgOption_3(t, b_5, c_5, d_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_95 = NULL;
  p_95 = t;
  t = SSL_string_to_int(not_null(p_95));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 (ATerm t)
      {
        ATerm y_95 = NULL;
        y_95 = t;
        t_95 :
        if(!(match_string(y_95, "-S")))
          {
            if(!(match_string(y_95, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_d_30;
        t = set_config_0(t);
        t = term_e_30;
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_k_30;
        return(t);
      }
      t = Option_3(t, e_5, f_5, g_5);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              ATerm z_95 = NULL;
              z_95 = t;
              u_95 :
              if(!(match_string(z_95, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              ATerm c_96 = NULL;
              ATerm r_30;
              r_30 = t;
              {
                ATerm a_96 = NULL;
                ATerm b_96 = NULL;
                t = string_to_int_0(t);
                {
                  b_96 = t;
                  if(((a_96 != NULL) && (a_96 != b_96)))
                    _fail(b_96);
                  else
                    a_96 = b_96;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_27, not_null(a_96));
                  t = set_config_0(t);
                }
              }
              t = r_30;
              {
                ATerm d_96 = NULL;
                d_96 = t;
                if(((c_96 != NULL) && (c_96 != d_96)))
                  _fail(d_96);
                else
                  c_96 = d_96;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_96));
              }
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              t = term_s_30;
              return(t);
            }
            t = ArgOption_3(t, h_5, i_5, j_5);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm k_5 (ATerm t)
              {
                ATerm e_96 = NULL;
                e_96 = t;
                x_95 :
                if(!(match_string(e_96, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_5 (ATerm t)
              {
                t = term_u_30;
                t = set_config_0(t);
                t = term_z_30;
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = term_a_31;
                return(t);
              }
              t = Option_3(t, k_5, l_5, m_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm k_96 = NULL;
    k_96 = t;
    h_96 :
    if(!(match_string(k_96, "-o")))
      {
        if(!(match_string(k_96, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm n_96 = NULL;
    ATerm h_31;
    h_31 = t;
    {
      ATerm l_96 = NULL;
      ATerm m_96 = NULL;
      m_96 = t;
      if(((l_96 != NULL) && (l_96 != m_96)))
        _fail(m_96);
      else
        l_96 = m_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_31, not_null(l_96));
        t = set_config_0(t);
      }
    }
    t = h_31;
    {
      ATerm o_96 = NULL;
      o_96 = t;
      if(((n_96 != NULL) && (n_96 != o_96)))
        _fail(o_96);
      else
        n_96 = o_96;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_96));
    }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_s_31;
    return(t);
  }
  t = ArgOption_3(t, n_5, o_5, p_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm u_96 = NULL;
          u_96 = t;
          r_96 :
          if(!(match_string(u_96, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = term_w_31;
          t = set_config_0(t);
          t = term_b_32;
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = term_c_32;
          return(t);
        }
        t = Option_3(t, q_5, r_5, s_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  a_97 = t;
  y_96 :
  if(match_string(a_97, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(a_97) == AT_LIST) && !(ATisEmpty(a_97))))
        {
          b_97 = ATgetFirst((ATermList) a_97);
          c_97 = (ATerm) ATgetNext((ATermList) a_97);
          z_96 :
          if(((ATgetType(c_97) == AT_LIST) && !(ATisEmpty(c_97))))
            {
              d_97 = ATgetFirst((ATermList) c_97);
              e_97 = (ATerm) ATgetNext((ATermList) c_97);
              {
                ATerm i_97 = NULL;
                ATerm d_32;
                d_32 = t;
                {
                  t = not_null(b_97);
                  t = j_0(t);
                }
                t = d_32;
                {
                  ATerm j_97 = NULL;
                  t = not_null(d_97);
                  {
                    t = l_0(t);
                    {
                      j_97 = t;
                      if(((i_97 != NULL) && (i_97 != j_97)))
                        _fail(j_97);
                      else
                        i_97 = j_97;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_97)), not_null(i_97));
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
  ATerm t_5 (ATerm t)
  {
    ATerm q_97 = NULL;
    q_97 = t;
    n_97 :
    if(!(match_string(q_97, "-i")))
      {
        if(!(match_string(q_97, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm t_97 = NULL;
    ATerm e_32;
    e_32 = t;
    {
      ATerm r_97 = NULL;
      ATerm s_97 = NULL;
      s_97 = t;
      if(((r_97 != NULL) && (r_97 != s_97)))
        _fail(s_97);
      else
        r_97 = s_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(r_97));
        t = set_config_0(t);
      }
    }
    t = e_32;
    {
      ATerm u_97 = NULL;
      u_97 = t;
      if(((t_97 != NULL) && (t_97 != u_97)))
        _fail(u_97);
      else
        t_97 = u_97;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_97));
    }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_g_32;
    return(t);
  }
  t = ArgOption_3(t, t_5, u_5, v_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATempty, term_w_32));
  {
    t = printnl_0(t);
    {
      t = term_o_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_97 = NULL;
  y_97 = t;
  t = SSL_TicksToSeconds(not_null(y_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  d_98 = t;
  c_98 :
  if(match_cons(d_98, sym__2))
    {
      e_98 = ATgetArgument(d_98, 0);
      f_98 = ATgetArgument(d_98, 1);
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_98), not_null(f_98));
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = SSL_addr(not_null(e_98), not_null(f_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_106 (ATerm), ATerm j_106 (ATerm))
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_106(t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
        n_98 = t;
        m_98 :
        if(((ATgetType(n_98) == AT_LIST) && !(ATisEmpty(n_98))))
          {
            o_98 = ATgetFirst((ATermList) n_98);
            p_98 = (ATerm) ATgetNext((ATermList) n_98);
            {
              ATerm s_98 = NULL;
              ATerm t_98 = NULL;
              t = not_null(p_98);
              {
                t = foldr_2(t, i_106, j_106);
                {
                  t_98 = t;
                  if(((s_98 != NULL) && (s_98 != t_98)))
                    _fail(t_98);
                  else
                    s_98 = t_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_98), not_null(s_98));
                t = j_106(t);
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
ATerm crush_2 (ATerm t, ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  ATerm e_99 = NULL;
  ATerm g_99 = NULL;
  e_99 = t;
  {
    ATerm h_99 = NULL;
    ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL;
    t = not_null(e_99);
    {
      h_99 = t;
      {
        t = SSL_explode_term(not_null(h_99));
        {
          j_99 = t;
          d_99 :
          if(match_cons(j_99, sym__2))
            {
              k_99 = ATgetArgument(j_99, 0);
              l_99 = ATgetArgument(j_99, 1);
              if(((g_99 != NULL) && (g_99 != l_99)))
                _fail(l_99);
              else
                g_99 = l_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_99);
      t = foldr_2(t, g_105, h_105);
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
    ATerm w_5 (ATerm t)
    {
      t = term_c_30;
      return(t);
    }
    t = crush_2(t, w_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym__2))
    {
      s_99 = ATgetArgument(r_99, 0);
      t_99 = ATgetArgument(r_99, 1);
      {
        ATerm b_33;
        b_33 = t;
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_99), not_null(t_99));
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = SSL_gtr(not_null(s_99), not_null(t_99));
            }
        }
        t = b_33;
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
  ATerm z_99 = NULL;
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
      g_100 = t;
      y_99 :
      if(match_cons(g_100, sym__2))
        {
          h_100 = ATgetArgument(g_100, 0);
          i_100 = ATgetArgument(g_100, 1);
          {
            if(((z_99 != NULL) && (z_99 != h_100)))
              _fail(h_100);
            else
              z_99 = h_100;
            if(((z_99 != NULL) && (z_99 != i_100)))
              _fail(i_100);
            else
              z_99 = i_100;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_117 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm g_33;
    g_33 = t;
    {
      ATerm l_100 = NULL;
      ATerm m_100 = NULL;
      t = term_a_27;
      {
        t = get_config_0(t);
        {
          m_100 = t;
          if(((l_100 != NULL) && (l_100 != m_100)))
            _fail(m_100);
          else
            l_100 = m_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_100), term_o_15);
        t = geq_0(t);
      }
    }
    t = g_33;
    t = o_117(t);
    return(t);
  }
  t = try_1(t, x_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm q_100 = NULL,s_100 = NULL;
    ATerm h_33;
    h_33 = t;
    {
      ATerm r_100 = NULL;
      t = run_time_0(t);
      {
        r_100 = t;
        if(((q_100 != NULL) && (q_100 != r_100)))
          _fail(r_100);
        else
          q_100 = r_100;
      }
    }
    t = h_33;
    {
      ATerm t_100 = NULL;
      t = term_i_33;
      {
        t = get_config_0(t);
        {
          t_100 = t;
          if(((s_100 != NULL) && (s_100 != t_100)))
            _fail(t_100);
          else
            s_100 = t_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_33), not_null(q_100)), term_j_33), not_null(s_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_5);
  {
    t = term_c_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_101 = NULL;
  a_101 = t;
  z_100 :
  if(match_cons(a_101, sym_Version_0))
    {
      ATerm c_101 = NULL,e_101 = NULL;
      ATerm l_33;
      l_33 = t;
      {
        ATerm d_101 = NULL;
        t = SSLgetAnnotations(not_null(a_101));
        {
          d_101 = t;
          if(((c_101 != NULL) && (c_101 != d_101)))
            _fail(d_101);
          else
            c_101 = d_101;
        }
      }
      t = l_33;
      {
        ATerm f_101 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_101));
        {
          f_101 = t;
          if(((e_101 != NULL) && (e_101 != f_101)))
            _fail(f_101);
          else
            e_101 = f_101;
        }
        t = not_null(e_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_5);
  t = p_115(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_101 = NULL;
  k_101 = t;
  t = SSL_table_create(not_null(k_101));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_101 = NULL;
  r_101 = t;
  {
    ATerm q_33;
    q_33 = t;
    {
      t = term_r_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, not_null(r_101));
          t = table_put_0(t);
        }
      }
    }
    t = q_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_101 = NULL;
  v_101 = t;
  t = SSL_table_destroy(not_null(v_101));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_102 = NULL;
  b_102 = t;
  t = SSL_exit(not_null(b_102));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  g_102 :
  if(((ATgetType(h_102) == AT_LIST) && ATisEmpty(h_102)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_102) == AT_LIST) && !(ATisEmpty(h_102))))
        {
          i_102 = ATgetFirst((ATermList) h_102);
          j_102 = (ATerm) ATgetNext((ATermList) h_102);
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
  ATerm t_33;
  t_33 = t;
  {
    ATerm m_102 = NULL;
    ATerm p_102 = NULL;
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          ATerm n_102 = NULL;
          ATerm o_102 = NULL;
          o_102 = t;
          if(((n_102 != NULL) && (n_102 != o_102)))
            _fail(o_102);
          else
            n_102 = o_102;
          t = (ATerm) ATinsert(ATempty, not_null(n_102));
        }
      }
    {
      p_102 = t;
      if(((m_102 != NULL) && (m_102 != p_102)))
        _fail(p_102);
      else
        m_102 = p_102;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_27, not_null(m_102));
      t = printnl_0(t);
    }
  }
  t = t_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm s_102 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2(t, p_101, s_102);
      }
    return(t);
  }
  t = s_102(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL;
  b_103 = t;
  y_102 :
  if(((ATgetType(b_103) == AT_LIST) && !(ATisEmpty(b_103))))
    {
      z_102 = ATgetFirst((ATermList) b_103);
      a_103 = (ATerm) ATgetNext((ATermList) b_103);
      {
        ATerm e_103 = NULL;
        t = not_null(a_103);
        {
          ATerm y_33;
          y_33 = t;
          {
            ATerm f_103 = NULL,h_103 = NULL,j_103 = NULL;
            ATerm z_33;
            z_33 = t;
            {
              ATerm g_103 = NULL;
              t = i_0(t);
              {
                g_103 = t;
                if(((f_103 != NULL) && (f_103 != g_103)))
                  _fail(g_103);
                else
                  f_103 = g_103;
              }
            }
            t = z_33;
            {
              ATerm i_103 = NULL;
              t = not_null(z_102);
              {
                t = f_0(t);
                {
                  i_103 = t;
                  if(((h_103 != NULL) && (h_103 != i_103)))
                    _fail(i_103);
                  else
                    h_103 = i_103;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_103)), not_null(h_103));
                {
                  j_103 = t;
                  if(((e_103 != NULL) && (e_103 != j_103)))
                    _fail(j_103);
                  else
                    e_103 = j_103;
                }
              }
            }
          }
          t = y_33;
          {
            ATerm a_6 (ATerm t)
            {
              t = not_null(e_103);
              return(t);
            }
            t = reverse_acc_2(t, f_0, a_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_103) == AT_LIST) && ATisEmpty(b_103)))
        {
          {
            t = term_a_7;
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
  ATerm b_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm u_103 = NULL,v_103 = NULL;
  u_103 = t;
  t_103 :
  if(match_cons(u_103, sym_Program_1))
    {
      v_103 = ATgetArgument(u_103, 0);
      {
        ATerm y_103 = NULL,a_104 = NULL;
        ATerm z_103 = NULL;
        t = SSLgetAnnotations(not_null(u_103));
        {
          z_103 = t;
          if(((y_103 != NULL) && (y_103 != z_103)))
            _fail(z_103);
          else
            y_103 = z_103;
        }
        {
          t = not_null(v_103);
          {
            ATerm c_104 = NULL;
            t = o_92(t);
            {
              a_104 = t;
              {
                ATerm d_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_104)), not_null(y_103));
                {
                  d_104 = t;
                  if(((c_104 != NULL) && (c_104 != d_104)))
                    _fail(d_104);
                  else
                    c_104 = d_104;
                }
                t = not_null(c_104);
              }
            }
          }
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
  ATerm m_104 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_104 = NULL;
      t = term_i_33;
      {
        t = get_config_0(t);
        {
          n_104 = t;
          if(((m_104 != NULL) && (m_104 != n_104)))
            _fail(n_104);
          else
            m_104 = n_104;
        }
      }
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm c_6 (ATerm t)
        {
          ATerm d_6 (ATerm t)
          {
            ATerm o_104 = NULL;
            o_104 = t;
            if(((m_104 != NULL) && (m_104 != o_104)))
              _fail(o_104);
            else
              m_104 = o_104;
            return(t);
          }
          t = Program_1(t, d_6);
          return(t);
        }
        t = option_defined_1(t, c_6);
      }
    }
  {
    ATerm e_6 (ATerm t)
    {
      ATerm f_6 (ATerm t)
      {
        t = not_null(m_104);
        return(t);
      }
      t = short_description_1(t, f_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_6);
    {
      t = term_c_34;
      {
        t = echo_0(t);
        {
          t = term_f_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm p_104 = NULL;
                  ATerm q_104 = NULL;
                  q_104 = t;
                  if(((p_104 != NULL) && (p_104 != q_104)))
                    _fail(q_104);
                  else
                    p_104 = q_104;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_104)), term_h_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_6);
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm r_104 = NULL;
                    ATerm s_104 = NULL;
                    ATerm i_6 (ATerm t)
                    {
                      t = not_null(m_104);
                      return(t);
                    }
                    t = long_description_1(t, i_6);
                    {
                      s_104 = t;
                      if(((r_104 != NULL) && (r_104 != s_104)))
                        _fail(s_104);
                      else
                        r_104 = s_104;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_104)), term_i_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_6);
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
  ATerm j_34;
  j_34 = t;
  {
    ATerm y_104 = NULL;
    ATerm z_104 = NULL;
    z_104 = t;
    if(((y_104 != NULL) && (y_104 != z_104)))
      _fail(z_104);
    else
      y_104 = z_104;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATempty, not_null(y_104)));
      t = printnl_0(t);
    }
  }
  t = j_34;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_121 (ATerm))
{
  ATerm k_34;
  k_34 = t;
  {
    t = x_121(t);
    t = debug_0(t);
  }
  t = k_34;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm l_105 = NULL,m_105 = NULL;
  l_105 = t;
  f_105 :
  if(match_cons(l_105, sym_Undefined_1))
    {
      m_105 = ATgetArgument(l_105, 0);
      {
        ATerm t_105 = NULL,y_105 = NULL;
        ATerm u_105 = NULL;
        t = SSLgetAnnotations(not_null(l_105));
        {
          u_105 = t;
          if(((t_105 != NULL) && (t_105 != u_105)))
            _fail(u_105);
          else
            t_105 = u_105;
        }
        {
          t = not_null(m_105);
          {
            ATerm a_106 = NULL;
            t = p_92(t);
            {
              y_105 = t;
              {
                ATerm b_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_105)), not_null(t_105));
                {
                  b_106 = t;
                  if(((a_106 != NULL) && (a_106 != b_106)))
                    _fail(b_106);
                  else
                    a_106 = b_106;
                }
                t = not_null(a_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_101 (ATerm))
{
  ATerm g_106 (ATerm t)
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_101, _id);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = Cons_2(t, _id, g_106);
      }
    return(t);
  }
  t = g_106(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_118 (ATerm))
{
  t = fetch_1(t, r_118);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_106 = NULL;
  q_106 = t;
  p_106 :
  if(match_cons(q_106, sym_Help_0))
    {
      ATerm s_106 = NULL,u_106 = NULL;
      ATerm n_34;
      n_34 = t;
      {
        ATerm t_106 = NULL;
        t = SSLgetAnnotations(not_null(q_106));
        {
          t_106 = t;
          if(((s_106 != NULL) && (s_106 != t_106)))
            _fail(t_106);
          else
            s_106 = t_106;
        }
      }
      t = n_34;
      {
        ATerm v_106 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_106));
        {
          v_106 = t;
          if(((u_106 != NULL) && (u_106 != v_106)))
            _fail(v_106);
          else
            u_106 = v_106;
        }
        t = not_null(u_106);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_98 (ATerm))
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_98(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
  b_107 = t;
  a_107 :
  if(match_cons(b_107, sym__2))
    {
      c_107 = ATgetArgument(b_107, 0);
      d_107 = ATgetArgument(b_107, 1);
      t = SSL_table_get(not_null(c_107), not_null(d_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  k_107 = t;
  j_107 :
  if(match_cons(k_107, sym__3))
    {
      l_107 = ATgetArgument(k_107, 0);
      m_107 = ATgetArgument(k_107, 1);
      n_107 = ATgetArgument(k_107, 2);
      {
        ATerm q_34;
        q_34 = t;
        {
          ATerm x_107 = NULL;
          ATerm y_107 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_107), not_null(m_107));
          {
            ATerm r_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_34);
              }
            else
              {
                t = r_34;
                t = (ATerm) ATempty;
              }
            {
              y_107 = t;
              if(((x_107 != NULL) && (x_107 != y_107)))
                _fail(y_107);
              else
                x_107 = y_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_107), not_null(m_107), (ATerm) ATinsert(CheckATermList(not_null(x_107)), not_null(n_107)));
            t = table_put_0(t);
          }
        }
        t = q_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_119 (ATerm))
{
  ATerm c_108 = NULL;
  ATerm d_108 = NULL;
  t = term_a_7;
  {
    t = w_119(t);
    {
      d_108 = t;
      if(((c_108 != NULL) && (c_108 != d_108)))
        _fail(d_108);
      else
        c_108 = d_108;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_34, term_e_34, not_null(c_108));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL;
  q_108 = t;
  i_108 :
  if(match_string(q_108, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(q_108) == AT_LIST) && !(ATisEmpty(q_108))))
        {
          r_108 = ATgetFirst((ATermList) q_108);
          s_108 = (ATerm) ATgetNext((ATermList) q_108);
          {
            ATerm x_108 = NULL;
            ATerm t_34;
            t_34 = t;
            {
              t = not_null(r_108);
              t = a_0(t);
            }
            t = t_34;
            {
              ATerm y_108 = NULL;
              t = term_a_7;
              {
                t = b_0(t);
                {
                  y_108 = t;
                  if(((x_108 != NULL) && (x_108 != y_108)))
                    _fail(y_108);
                  else
                    x_108 = y_108;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_108)), not_null(x_108));
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
  ATerm k_6 (ATerm t)
  {
    ATerm g_109 = NULL;
    g_109 = t;
    f_109 :
    if(!(match_string(g_109, "--help")))
      {
        if(!(match_string(g_109, "-h")))
          {
            if(!(match_string(g_109, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_v_34;
    {
      t = set_config_0(t);
      t = term_w_34;
    }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_x_34;
    return(t);
  }
  t = Option_3(t, k_6, l_6, m_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
  j_109 = t;
  i_109 :
  if(((ATgetType(j_109) == AT_LIST) && !(ATisEmpty(j_109))))
    {
      k_109 = ATgetFirst((ATermList) j_109);
      l_109 = (ATerm) ATgetNext((ATermList) j_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_82 (ATerm), ATerm j_82 (ATerm))
{
  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
  w_109 = t;
  v_109 :
  if(((ATgetType(w_109) == AT_LIST) && !(ATisEmpty(w_109))))
    {
      x_109 = ATgetFirst((ATermList) w_109);
      y_109 = (ATerm) ATgetNext((ATermList) w_109);
      {
        ATerm c_110 = NULL,e_110 = NULL;
        ATerm d_110 = NULL;
        t = SSLgetAnnotations(not_null(w_109));
        {
          d_110 = t;
          if(((c_110 != NULL) && (c_110 != d_110)))
            _fail(d_110);
          else
            c_110 = d_110;
        }
        {
          t = not_null(x_109);
          {
            ATerm g_110 = NULL;
            t = i_82(t);
            {
              e_110 = t;
              {
                t = not_null(y_109);
                {
                  ATerm i_110 = NULL;
                  t = j_82(t);
                  {
                    g_110 = t;
                    {
                      ATerm j_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_110)), not_null(e_110)), not_null(c_110));
                      {
                        j_110 = t;
                        if(((i_110 != NULL) && (i_110 != j_110)))
                          _fail(j_110);
                        else
                          i_110 = j_110;
                      }
                      t = not_null(i_110);
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
  ATerm x_110 = NULL;
  x_110 = t;
  w_110 :
  if(((ATgetType(x_110) == AT_LIST) && ATisEmpty(x_110)))
    {
      {
        ATerm z_110 = NULL,b_111 = NULL;
        ATerm y_34;
        y_34 = t;
        {
          ATerm a_111 = NULL;
          t = SSLgetAnnotations(not_null(x_110));
          {
            a_111 = t;
            if(((z_110 != NULL) && (z_110 != a_111)))
              _fail(a_111);
            else
              z_110 = a_111;
          }
        }
        t = y_34;
        {
          ATerm c_111 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_110));
          {
            c_111 = t;
            if(((b_111 != NULL) && (b_111 != c_111)))
              _fail(c_111);
            else
              b_111 = c_111;
          }
          t = not_null(b_111);
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
  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL;
  i_111 = t;
  h_111 :
  if(match_cons(i_111, sym__2))
    {
      j_111 = ATgetArgument(i_111, 0);
      k_111 = ATgetArgument(i_111, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(j_111), not_null(k_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_119 (ATerm))
{
  ATerm z_34;
  z_34 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = term_a_35;
      t = u_119(t);
      return(t);
    }
    t = try_1(t, n_6);
  }
  t = z_34;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm s_111 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm q_111 = NULL;
        ATerm r_111 = NULL;
        r_111 = t;
        if(((q_111 != NULL) && (q_111 != r_111)))
          _fail(r_111);
        else
          q_111 = r_111;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_33, not_null(q_111));
          t = set_config_0(t);
        }
      }
      t = b_35;
      {
        ATerm t_111 = NULL;
        t_111 = t;
        if(((s_111 != NULL) && (s_111 != t_111)))
          _fail(t_111);
        else
          s_111 = t_111;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_111));
      }
      return(t);
    }
    ATerm p_6 (ATerm t)
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_35);
            }
          else
            {
              t = e_35;
              {
                t = u_119(t);
                t = Cons_2(t, _id, p_6);
              }
            }
          ;
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_6, p_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
  ATerm g_35;
  g_35 = t;
  {
    ATerm c_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
    c_112 = t;
    y_111 :
    if(match_cons(c_112, sym__3))
      {
        f_112 = ATgetArgument(c_112, 0);
        g_112 = ATgetArgument(c_112, 1);
        h_112 = ATgetArgument(c_112, 2);
        {
          if(((z_111 != NULL) && (z_111 != f_112)))
            _fail(f_112);
          else
            z_111 = f_112;
          {
            if(((a_112 != NULL) && (a_112 != g_112)))
              _fail(g_112);
            else
              a_112 = g_112;
            {
              if(((b_112 != NULL) && (b_112 != h_112)))
                _fail(h_112);
              else
                b_112 = h_112;
              t = SSL_table_put(not_null(z_111), not_null(a_112), not_null(b_112));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_119 (ATerm))
{
  ATerm k_112 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    t = term_i_35;
    t = table_put_0(t);
  }
  t = h_35;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_119(t);
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
    t = parse_options_p__1(t, q_6);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_35;
            s_35 = t;
            {
              ATerm t_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_35);
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
                t = term_c_30;
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
              ATerm s_6 (ATerm t)
              {
                ATerm t_6 (ATerm t)
                {
                  ATerm l_112 = NULL;
                  l_112 = t;
                  if(((k_112 != NULL) && (k_112 != l_112)))
                    _fail(l_112);
                  else
                    k_112 = l_112;
                  return(t);
                }
                t = Undefined_1(t, t_6);
                return(t);
              }
              t = option_defined_1(t, s_6);
              {
                ATerm u_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_112)), term_z_35);
                  return(t);
                }
                t = say_1(t, u_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_6);
      {
        ATerm a_36;
        a_36 = t;
        {
          t = term_d_34;
          t = table_destroy_0(t);
        }
        t = a_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm y_115 (ATerm))
{
  t = parse_options_1(t, v_115);
  {
    t = store_options_0(t);
    {
      t = x_115(t);
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_115);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            {
              ATerm h_36 = t;
              int i_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_115(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_36);
                }
              else
                {
                  t = h_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm p_116 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_116(t);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_116);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_6, o_116, p_116, w_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm))
{
  ATerm x_6 (ATerm t)
  {
    ATerm y_6 (ATerm t)
    {
      ATerm n_36;
      n_36 = t;
      {
        ATerm o_112 = NULL;
        ATerm p_112 = NULL;
        t = term_i_33;
        {
          t = get_config_0(t);
          {
            p_112 = t;
            if(((o_112 != NULL) && (o_112 != p_112)))
              _fail(p_112);
            else
              o_112 = p_112;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATempty, not_null(o_112)));
          t = printnl_0(t);
        }
      }
      t = n_36;
      return(t);
    }
    t = if_verbose2_1(t, y_6);
    return(t);
  }
  t = iowrap_4(t, g_116, h_116, i_116, x_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_116 (ATerm), ATerm f_116 (ATerm))
{
  t = iowrap_3(t, e_116, f_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_116 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    t = _2(t, _id, b_116);
    return(t);
  }
  t = iowrap_2(t, z_6, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
