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
ATerm term_y_35;
ATerm term_h_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_v_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_h_31;
ATerm term_z_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_z_28;
ATerm term_f_28;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_f_25;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_e_18;
ATerm term_k_17;
ATerm term_n_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_w_13;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Op_2, term_r_20, (ATerm) ATempty);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_z_6);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_z_6);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_z_6);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_d_34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_z_6);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__3, term_c_34, term_d_34, (ATerm) ATempty);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_115 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_95 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm r_94 (ATerm));
ATerm Rec_2 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm));
ATerm Let_2 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm sboundin_3 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm n_94 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm o_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm g_106 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm diff_1 (ATerm, ATerm c_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_112 (ATerm), ATerm w_112 (ATerm));
ATerm for_3 (ATerm, ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm x_108 (ATerm), ATerm y_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm r_108 (ATerm), ATerm s_108 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm c_109 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm v_109 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm f_109 (ATerm));
ATerm rename_4 (ATerm, ATerm m_108 (ATerm, ATerm (ATerm)), ATerm n_108 (ATerm), ATerm o_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_108 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_115 (ATerm));
ATerm restore_always_2 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_115 (ATerm));
ATerm scope_2 (ATerm, ATerm r_115 (ATerm), ATerm s_115 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_115 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm));
ATerm crush_3 (ATerm, ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm Match_1 (ATerm, ATerm n_82 (ATerm));
ATerm Seq_2 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm Build_1 (ATerm, ATerm o_82 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_83 (ATerm));
ATerm Call_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm d_97 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm));
ATerm zip_1 (ATerm, ATerm q_100 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm Prim_2 (ATerm, ATerm j_82 (ATerm), ATerm k_82 (ATerm));
ATerm Explode_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm Op_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_122 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm g_112 (ATerm));
ATerm downup_1 (ATerm, ATerm p_95 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_84 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm y_80 (ATerm), ATerm z_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_118 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_116 (ATerm));
ATerm debug_1 (ATerm, ATerm l_122 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_99 (ATerm), ATerm m_99 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm crush_2 (ATerm, ATerm v_105 (ATerm), ATerm w_105 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_118 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_116 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_120 (ATerm));
ATerm map_1 (ATerm, ATerm a_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_120 (ATerm));
ATerm Program_1 (ATerm, ATerm n_92 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_122 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_92 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_119 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_98 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_120 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_120 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_120 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_116 (ATerm), ATerm u_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_116 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm v_115 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm s_7 = NULL;
    t = term_z_6;
    {
      t = v_115(t);
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
              ATerm b_0 (ATerm t)
              {
                t = term_a_7;
                return(t);
              }
              t = rewrite_1(t, b_0);
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
                  ATerm f_0 (ATerm t)
                  {
                    t = term_b_7;
                    return(t);
                  }
                  t = rewrite_1(t, f_0);
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
ATerm topdown_1 (ATerm t, ATerm n_95 (ATerm))
{
  t = n_95(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, n_95);
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
                                    ATerm c_7;
                                    c_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_7, not_null(u_9)));
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = term_a_7;
                                          return(t);
                                        }
                                        t = assert_1(t, q_0);
                                      }
                                    }
                                    t = c_7;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
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
                            ATerm e_7;
                            e_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_9)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_f_7, not_null(e_10)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_b_7;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = e_7;
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
    t = term_b_7;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_a_7;
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
                            ATerm g_7 = t;
                            int h_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(h_7);
                              }
                            else
                              {
                                t = g_7;
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
ATerm spaste_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, r_94);
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
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, r_94);
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
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = r_94(t);
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
ATerm Rec_2 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm))
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
            t = t_83(t);
            {
              p_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm t_12 = NULL;
                  t = u_83(t);
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
ATerm Let_2 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm))
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
            t = v_83(t);
            {
              o_13 = t;
              {
                t = not_null(i_13);
                {
                  ATerm s_13 = NULL;
                  t = w_83(t);
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
ATerm sboundin_3 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm n_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, s_94, s_94);
      LocalPopChoice(p_7);
    }
  else
    {
      t = n_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, u_94, u_94, s_94);
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            t = Rec_2(t, u_94, s_94);
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
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(w_7);
            }
          else
            {
              t = v_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm n_94 (ATerm))
{
  t = Scope_2(t, n_94, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm o_85 (ATerm))
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
            t = o_85(t);
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
ATerm tboundin_3 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, q_94, o_94);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = DynamicRules_1(t, o_94);
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
ATerm union_1 (ATerm t, ATerm g_106 (ATerm))
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
            ATerm h_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_16);
                LocalPopChoice(m_8);
              }
            else
              {
                t = h_8;
                {
                  ATerm n_8 = t;
                  int o_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(z_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_106, g_1);
                      t = d_17(t);
                      LocalPopChoice(o_8);
                    }
                  else
                    {
                      t = n_8;
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
ATerm HdMember_p__2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(((ATgetType(o_17) == AT_LIST) && !(ATisEmpty(o_17))))
    {
      p_17 = ATgetFirst((ATermList) o_17);
      q_17 = (ATerm) ATgetNext((ATermList) o_17);
      {
        t = l_106(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm t_17 = NULL;
            t_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), not_null(t_17));
              t = k_106(t);
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
ATerm diff_1 (ATerm t, ATerm c_106 (ATerm))
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
            ATerm p_8 = t;
            int z_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_8);
              }
            else
              {
                t = p_8;
                {
                  ATerm a_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(b_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_106, i_1);
                      t = f_18(t);
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = a_9;
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
            ATerm g_9;
            g_9 = t;
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
            t = g_9;
            {
              ATerm h_9;
              h_9 = t;
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
              t = h_9;
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
ATerm while_not_2 (ATerm t, ATerm v_112 (ATerm), ATerm w_112 (ATerm))
{
  ATerm q_20 (ATerm t)
  {
    ATerm i_9 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_112(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = i_9;
        {
          t = w_112(t);
          t = q_20(t);
        }
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm))
{
  t = y_112(t);
  t = while_not_2(t, z_112, a_113);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
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
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, m_1);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_1, k_1, l_1);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_20 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_110(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL;
              ATerm c_11;
              c_11 = t;
              {
                ATerm x_20 = NULL;
                t = q_110(t);
                {
                  x_20 = t;
                  if(((w_20 != NULL) && (w_20 != x_20)))
                    _fail(x_20);
                  else
                    w_20 = x_20;
                }
              }
              t = c_11;
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
                t = r_110(t, n_1, y_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
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
    ATerm f_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = f_11;
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
        ATerm p_11 = t;
        int q_11 = stack_ptr;
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
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
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
ATerm DistBinding_2 (ATerm t, ATerm x_108 (ATerm), ATerm y_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
              t = x_108(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm n_23 = NULL;
            n_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(g_23));
              t = x_108(t);
            }
            return(t);
          }
          t = y_108(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm r_108 (ATerm), ATerm s_108 (ATerm, ATerm (ATerm)))
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
        ATerm w_11;
        w_11 = t;
        {
          ATerm h_24 = NULL;
          t = not_null(a_24);
          {
            ATerm i_24 = NULL;
            t = r_108(t);
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
        t = w_11;
        {
          ATerm n_24 = NULL;
          t = not_null(a_24);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(f_24);
              return(t);
            }
            t = s_108(t, v_1);
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
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm c_109 (ATerm, ATerm (ATerm)))
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
          t = c_109(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm v_109 (ATerm))
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
              t = v_109(t);
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
ATerm env_alltd_1 (ATerm t, ATerm f_109 (ATerm))
{
  ATerm o_26 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_109(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = all_dist_1(t, o_26);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm m_108 (ATerm, ATerm (ATerm)), ATerm n_108 (ATerm), ATerm o_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_108 (ATerm, ATerm (ATerm)))
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
          ATerm b_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, m_108);
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
              {
                t = RnBinding_2(t, n_108, p_108);
                t = DistBinding_2(t, t_26, o_108);
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
        t = term_d_12;
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
    t = term_e_12;
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
        t = term_d_12;
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
                                            ATerm f_12;
                                            f_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty), term_e_12);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = term_d_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = f_12;
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
        t = term_d_12;
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
    t = term_e_12;
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
        t = term_d_12;
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
                                          ATerm k_12;
                                          k_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty), term_e_12);
                                            {
                                              ATerm f_2 (ATerm t)
                                              {
                                                t = term_d_12;
                                                return(t);
                                              }
                                              t = assert_1(t, f_2);
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
        t = term_d_12;
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
    t = term_e_12;
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
                ATerm l_12 = t;
                int m_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_29(t);
                    LocalPopChoice(m_12);
                  }
                else
                  {
                    t = l_12;
                    {
                      ATerm q_12 = t;
                      int s_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_29(t);
                          LocalPopChoice(s_12);
                        }
                      else
                        {
                          t = q_12;
                          {
                            ATerm v_12 = t;
                            int w_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_29(t);
                                LocalPopChoice(w_12);
                              }
                            else
                              {
                                t = v_12;
                                {
                                  ATerm x_12 = t;
                                  int y_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = t_29(t);
                                      LocalPopChoice(y_12);
                                    }
                                  else
                                    {
                                      t = x_12;
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
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_29(t);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = z_12;
                  {
                    ATerm b_13 = t;
                    int c_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_29(t);
                        LocalPopChoice(c_13);
                      }
                    else
                      {
                        t = b_13;
                        {
                          ATerm d_13 = t;
                          int e_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_29(t);
                              LocalPopChoice(e_13);
                            }
                          else
                            {
                              t = d_13;
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
        ATerm j_13;
        j_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_30)), (ATerm) ATempty), term_e_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            t = assert_1(t, h_2);
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
        ATerm k_13;
        k_13 = t;
        {
          ATerm b_31 = NULL;
          ATerm c_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_30), not_null(y_30));
          {
            ATerm l_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(p_13);
              }
            else
              {
                t = l_13;
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
        t = k_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_115 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm m_31 = NULL;
    ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
    t = q_115(t);
    {
      m_31 = t;
      {
        if(((l_31 != NULL) && (l_31 != m_31)))
          _fail(m_31);
        else
          l_31 = m_31;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), term_w_13);
              t = table_get_0(t);
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), term_w_13, not_null(j_31));
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
  t = r_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_99(t);
      t = h_99(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        t = h_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm x_31 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm y_31 = NULL;
    ATerm z_31 = NULL;
    t = p_115(t);
    {
      y_31 = t;
      {
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
        {
          ATerm a_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), term_w_13);
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), term_w_13, (ATerm) ATinsert(CheckATermList(not_null(z_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_115 (ATerm), ATerm s_115 (ATerm))
{
  t = begin_scope_1(t, r_115);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, r_115);
      return(t);
    }
    t = restore_always_2(t, s_115, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_115 (ATerm))
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
        ATerm i_14;
        i_14 = t;
        {
          ATerm r_32 = NULL;
          ATerm s_32 = NULL,t_32 = NULL,g_34 = NULL;
          t = t_115(t);
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
                    ATerm p_14 = t;
                    int q_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), term_w_13);
                        t = table_get_0(t);
                        LocalPopChoice(q_14);
                      }
                    else
                      {
                        t = p_14;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_32), term_w_13, (ATerm) ATinsert(CheckATermList(not_null(q_32)), (ATerm) ATinsert(CheckATermList(not_null(p_32)), not_null(k_32))));
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
        t = i_14;
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
        ATerm r_14;
        r_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_14, not_null(k_35)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = r_14;
        {
          ATerm w_14;
          w_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_14, not_null(k_35)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_d_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = w_14;
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
  ATerm y_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm))
{
  ATerm z_14 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_106(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = z_14;
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
              ATerm g_15;
              g_15 = t;
              {
                ATerm c_36 = NULL;
                t = not_null(w_35);
                {
                  t = b_107(t);
                  {
                    c_36 = t;
                    if(((b_36 != NULL) && (b_36 != c_36)))
                      _fail(c_36);
                    else
                      b_36 = c_36;
                  }
                }
              }
              t = g_15;
              {
                ATerm e_36 = NULL;
                t = not_null(x_35);
                {
                  t = foldr_3(t, z_106, a_107, b_107);
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
                  t = a_107(t);
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
ATerm crush_3 (ATerm t, ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm))
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
      t = foldr_3(t, x_105, y_105, z_105);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        t = term_n_15;
        return(t);
      }
      t = crush_3(t, o_2, add_0, term_size_0);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm x_36 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = term_n_15;
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
ATerm LChoice_2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
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
            t = i_83(t);
            {
              m_37 = t;
              {
                t = not_null(g_37);
                {
                  ATerm q_37 = NULL;
                  t = j_83(t);
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
ATerm Choice_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
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
            t = g_83(t);
            {
              l_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm p_38 = NULL;
                  t = h_83(t);
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
ATerm Cong_2 (ATerm t, ATerm w_82 (ATerm), ATerm x_82 (ATerm))
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
            t = w_82(t);
            {
              q_39 = t;
              {
                t = not_null(k_39);
                {
                  ATerm u_39 = NULL;
                  t = x_82(t);
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
ATerm Match_1 (ATerm t, ATerm n_82 (ATerm))
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
            t = n_82(t);
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
ATerm Seq_2 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm))
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
            t = e_83(t);
            {
              s_41 = t;
              {
                t = not_null(m_41);
                {
                  ATerm w_41 = NULL;
                  t = f_83(t);
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
ATerm Scope_2 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm))
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
            t = r_82(t);
            {
              r_42 = t;
              {
                t = not_null(l_42);
                {
                  ATerm b_43 = NULL;
                  t = s_82(t);
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
ATerm Build_1 (ATerm t, ATerm o_82 (ATerm))
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
            t = o_82(t);
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
ATerm SVar_1 (ATerm t, ATerm s_83 (ATerm))
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
            t = s_83(t);
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
ATerm Call_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Call_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      {
        ATerm e_46 = NULL,j_46 = NULL;
        ATerm f_46 = NULL;
        t = SSLgetAnnotations(not_null(y_45));
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
        {
          t = not_null(z_45);
          {
            ATerm l_46 = NULL;
            t = h_84(t);
            {
              j_46 = t;
              {
                t = not_null(a_46);
                {
                  ATerm n_46 = NULL;
                  t = i_84(t);
                  {
                    l_46 = t;
                    {
                      ATerm o_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(j_46), not_null(l_46)), not_null(e_46));
                      {
                        o_46 = t;
                        if(((n_46 != NULL) && (n_46 != o_46)))
                          _fail(o_46);
                        else
                          n_46 = o_46;
                      }
                      t = not_null(n_46);
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
  ATerm z_46 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym_Fail_0))
    {
      ATerm b_47 = NULL,d_47 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm c_47 = NULL;
        t = SSLgetAnnotations(not_null(z_46));
        {
          c_47 = t;
          if(((b_47 != NULL) && (b_47 != c_47)))
            _fail(c_47);
          else
            b_47 = c_47;
        }
      }
      t = o_15;
      {
        ATerm e_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(b_47));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
        t = not_null(d_47);
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
  ATerm m_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym_Id_0))
    {
      ATerm o_47 = NULL,q_47 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm p_47 = NULL;
        t = SSLgetAnnotations(not_null(m_47));
        {
          p_47 = t;
          if(((o_47 != NULL) && (o_47 != p_47)))
            _fail(p_47);
          else
            o_47 = p_47;
        }
      }
      t = p_15;
      {
        ATerm r_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(o_47));
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
        t = not_null(q_47);
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
  ATerm v_47 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              {
                ATerm x_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = x_15;
                    {
                      ATerm c_16 = t;
                      int f_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(f_16);
                        }
                      else
                        {
                          t = c_16;
                          {
                            ATerm g_16 = t;
                            int h_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(h_16);
                              }
                            else
                              {
                                t = g_16;
                                {
                                  ATerm i_16 = t;
                                  int j_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(j_16);
                                    }
                                  else
                                    {
                                      t = i_16;
                                      {
                                        ATerm n_16 = t;
                                        int o_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(o_16);
                                          }
                                        else
                                          {
                                            t = n_16;
                                            {
                                              ATerm p_16 = t;
                                              int t_16 = stack_ptr;
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
                                                  LocalPopChoice(t_16);
                                                }
                                              else
                                                {
                                                  t = p_16;
                                                  {
                                                    ATerm u_16 = t;
                                                    int v_16 = stack_ptr;
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
                                                        LocalPopChoice(v_16);
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                        {
                                                          ATerm a_17 = t;
                                                          int b_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(b_17);
                                                            }
                                                          else
                                                            {
                                                              t = a_17;
                                                              {
                                                                ATerm c_17 = t;
                                                                int e_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, v_47, v_47);
                                                                    LocalPopChoice(e_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_17;
                                                                    t = LChoice_2(t, v_47, v_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = v_47(t);
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_k_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = j_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_97 (ATerm))
{
  ATerm w_47 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = _one(t, w_47);
      }
    return(t);
  }
  t = w_47(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  e_48 = t;
  d_48 :
  if(match_cons(e_48, sym_SDef_3))
    {
      f_48 = ATgetArgument(e_48, 0);
      g_48 = ATgetArgument(e_48, 1);
      h_48 = ATgetArgument(e_48, 2);
      {
        ATerm m_48 = NULL,o_48 = NULL;
        ATerm n_48 = NULL;
        t = SSLgetAnnotations(not_null(e_48));
        {
          n_48 = t;
          if(((m_48 != NULL) && (m_48 != n_48)))
            _fail(n_48);
          else
            m_48 = n_48;
        }
        {
          t = not_null(f_48);
          {
            ATerm q_48 = NULL;
            t = x_83(t);
            {
              o_48 = t;
              {
                t = not_null(g_48);
                {
                  ATerm s_48 = NULL;
                  t = y_83(t);
                  {
                    q_48 = t;
                    {
                      t = not_null(h_48);
                      {
                        ATerm u_48 = NULL;
                        t = z_83(t);
                        {
                          s_48 = t;
                          {
                            ATerm v_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_48), not_null(q_48), not_null(s_48)), not_null(m_48));
                            {
                              v_48 = t;
                              if(((u_48 != NULL) && (u_48 != v_48)))
                                _fail(v_48);
                              else
                                u_48 = v_48;
                            }
                            t = not_null(u_48);
                          }
                        }
                      }
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
  ATerm i_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm k_49 = NULL;
    ATerm r_17 = t;
    if((PushChoice() == 0))
      {
        ATerm j_49 = NULL;
        j_49 = t;
        c_49 :
        if(!(match_string(j_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_17;
      }
    {
      k_49 = t;
      if(((i_49 != NULL) && (i_49 != k_49)))
        _fail(k_49);
      else
        i_49 = k_49;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm s_17;
    s_17 = t;
    {
      ATerm u_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
            l_49 = t;
            f_49 :
            if(match_cons(l_49, sym_Call_2))
              {
                m_49 = ATgetArgument(l_49, 0);
                o_49 = ATgetArgument(l_49, 1);
                g_49 :
                if(match_cons(m_49, sym_SVar_1))
                  {
                    n_49 = ATgetArgument(m_49, 0);
                    h_49 :
                    if(((ATgetType(o_49) == AT_LIST) && ATisEmpty(o_49)))
                      {
                        if(((i_49 != NULL) && (i_49 != n_49)))
                          _fail(n_49);
                        else
                          i_49 = n_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = u_17;
        }
    }
    t = s_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  h_50 :
  if(match_cons(i_50, sym_Cong_2))
    {
      j_50 = ATgetArgument(i_50, 0);
      k_50 = ATgetArgument(i_50, 1);
      {
        ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,q_51 = NULL,s_51 = NULL,u_51 = NULL;
        ATerm v_17;
        v_17 = t;
        {
          ATerm t_50 = NULL;
          t = not_null(k_50);
          {
            ATerm w_50 = NULL;
            t = map_1(t, new_0);
            {
              t_50 = t;
              {
                if(((q_50 != NULL) && (q_50 != t_50)))
                  _fail(t_50);
                else
                  q_50 = t_50;
                {
                  t = not_null(q_50);
                  {
                    ATerm x_50 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm u_50 = NULL;
                      ATerm v_50 = NULL;
                      v_50 = t;
                      if(((u_50 != NULL) && (u_50 != v_50)))
                        _fail(v_50);
                      else
                        u_50 = v_50;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_50));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      w_50 = t;
                      {
                        if(((n_50 != NULL) && (n_50 != w_50)))
                          _fail(w_50);
                        else
                          n_50 = w_50;
                        {
                          ATerm y_50 = NULL;
                          t = new_0(t);
                          {
                            x_50 = t;
                            {
                              if(((o_50 != NULL) && (o_50 != x_50)))
                                _fail(x_50);
                              else
                                o_50 = x_50;
                              {
                                t = not_null(k_50);
                                {
                                  ATerm b_51 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    y_50 = t;
                                    {
                                      if(((r_50 != NULL) && (r_50 != y_50)))
                                        _fail(y_50);
                                      else
                                        r_50 = y_50;
                                      {
                                        t = not_null(r_50);
                                        {
                                          ATerm c_51 = NULL,p_51 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm z_50 = NULL;
                                            ATerm a_51 = NULL;
                                            a_51 = t;
                                            if(((z_50 != NULL) && (z_50 != a_51)))
                                              _fail(a_51);
                                            else
                                              z_50 = a_51;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_50));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            b_51 = t;
                                            {
                                              if(((p_50 != NULL) && (p_50 != b_51)))
                                                _fail(b_51);
                                              else
                                                p_50 = b_51;
                                              {
                                                ATerm d_51 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), not_null(r_50));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    d_51 = t;
                                                    if(((c_51 != NULL) && (c_51 != d_51)))
                                                      _fail(d_51);
                                                    else
                                                      c_51 = d_51;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_51), not_null(k_50));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
                                                      e_51 = t;
                                                      b_50 :
                                                      if(match_cons(e_51, sym__2))
                                                        {
                                                          f_51 = ATgetArgument(e_51, 0);
                                                          i_51 = ATgetArgument(e_51, 1);
                                                          c_50 :
                                                          if(match_cons(f_51, sym__2))
                                                            {
                                                              g_51 = ATgetArgument(f_51, 0);
                                                              h_51 = ATgetArgument(f_51, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_51))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_51)))));
                                                            }
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
                                                      p_51 = t;
                                                      if(((s_50 != NULL) && (s_50 != p_51)))
                                                        _fail(p_51);
                                                      else
                                                        s_50 = p_51;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = v_17;
        {
          ATerm w_17;
          w_17 = t;
          {
            ATerm r_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), not_null(r_50));
            {
              t = conc_0(t);
              {
                r_51 = t;
                if(((q_51 != NULL) && (q_51 != r_51)))
                  _fail(r_51);
                else
                  q_51 = r_51;
              }
            }
          }
          t = w_17;
          {
            ATerm x_17;
            x_17 = t;
            {
              ATerm t_51 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_50), not_null(n_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_50))));
              {
                t = Mapp2_0(t);
                {
                  t_51 = t;
                  if(((s_51 != NULL) && (s_51 != t_51)))
                    _fail(t_51);
                  else
                    s_51 = t_51;
                }
              }
            }
            t = x_17;
            {
              ATerm v_51 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(j_50), not_null(p_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_50))));
              {
                t = Bapp2_0(t);
                {
                  v_51 = t;
                  if(((u_51 != NULL) && (u_51 != v_51)))
                    _fail(v_51);
                  else
                    u_51 = v_51;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_51)), not_null(o_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_50)), not_null(u_51))));
            }
          }
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
  ATerm b_53 = NULL,c_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Build_1))
    {
      c_53 = ATgetArgument(b_53, 0);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
            ATerm k_53 = NULL;
            ATerm o_53 = NULL;
            t = new_0(t);
            {
              k_53 = t;
              {
                if(((i_53 != NULL) && (i_53 != k_53)))
                  _fail(k_53);
                else
                  i_53 = k_53;
                {
                  t = not_null(c_53);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
                      l_53 = t;
                      p_52 :
                      if(match_cons(l_53, sym_Anno_2))
                        {
                          m_53 = ATgetArgument(l_53, 0);
                          n_53 = ATgetArgument(l_53, 1);
                          {
                            if(((g_53 != NULL) && (g_53 != m_53)))
                              _fail(m_53);
                            else
                              g_53 = m_53;
                            {
                              if(((h_53 != NULL) && (h_53 != n_53)))
                                _fail(n_53);
                              else
                                h_53 = n_53;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_53));
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
                      o_53 = t;
                      if(((j_53 != NULL) && (j_53 != o_53)))
                        _fail(o_53);
                      else
                        j_53 = o_53;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_53)), not_null(g_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_53))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_53))));
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm g_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
                  ATerm t_53 = NULL;
                  ATerm w_53 = NULL;
                  t = new_0(t);
                  {
                    t_53 = t;
                    {
                      if(((r_53 != NULL) && (r_53 != t_53)))
                        _fail(t_53);
                      else
                        r_53 = t_53;
                      {
                        t = not_null(c_53);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm u_53 = NULL,v_53 = NULL;
                            u_53 = t;
                            t_52 :
                            if(match_cons(u_53, sym_RootApp_1))
                              {
                                v_53 = ATgetArgument(u_53, 0);
                                {
                                  if(((q_53 != NULL) && (q_53 != v_53)))
                                    _fail(v_53);
                                  else
                                    q_53 = v_53;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_53));
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
                            w_53 = t;
                            if(((s_53 != NULL) && (s_53 != w_53)))
                              _fail(w_53);
                            else
                              s_53 = w_53;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_53))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_53))));
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = g_18;
                  {
                    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
                    ATerm c_54 = NULL;
                    ATerm i_54 = NULL;
                    t = new_0(t);
                    {
                      c_54 = t;
                      {
                        if(((a_54 != NULL) && (a_54 != c_54)))
                          _fail(c_54);
                        else
                          a_54 = c_54;
                        {
                          t = not_null(c_53);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm d_54 = NULL,g_54 = NULL,h_54 = NULL;
                              d_54 = t;
                              x_52 :
                              if(match_cons(d_54, sym_App_2))
                                {
                                  g_54 = ATgetArgument(d_54, 0);
                                  h_54 = ATgetArgument(d_54, 1);
                                  {
                                    if(((y_53 != NULL) && (y_53 != g_54)))
                                      _fail(g_54);
                                    else
                                      y_53 = g_54;
                                    {
                                      if(((z_53 != NULL) && (z_53 != h_54)))
                                        _fail(h_54);
                                      else
                                        z_53 = h_54;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54));
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
                              i_54 = t;
                              if(((b_54 != NULL) && (b_54 != i_54)))
                                _fail(i_54);
                              else
                                b_54 = i_54;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_53), not_null(z_53), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_54))));
                  }
                }
            }
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
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym__2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_55)), not_null(k_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,n_56 = NULL;
  c_56 = t;
  x_55 :
  if(match_cons(c_56, sym__2))
    {
      d_56 = ATgetArgument(c_56, 0);
      g_56 = ATgetArgument(c_56, 1);
      y_55 :
      if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
        {
          e_56 = ATgetFirst((ATermList) d_56);
          f_56 = (ATerm) ATgetNext((ATermList) d_56);
          b_56 :
          if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
            {
              h_56 = ATgetFirst((ATermList) g_56);
              n_56 = (ATerm) ATgetNext((ATermList) g_56);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_56), not_null(h_56)), (ATerm) ATmakeAppl(sym__2, not_null(f_56), not_null(n_56)));
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm genzip_4 (ATerm t, ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm))
{
  ATerm b_57 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          t = m_100(t);
          {
            t = _2(t, o_100, b_57);
            t = n_100(t);
          }
        }
      }
    return(t);
  }
  t = b_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_100 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_100);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  b_58 = t;
  u_57 :
  if(match_cons(b_58, sym_Call_2))
    {
      c_58 = ATgetArgument(b_58, 0);
      e_58 = ATgetArgument(b_58, 1);
      v_57 :
      if(match_cons(c_58, sym_SVar_1))
        {
          d_58 = ATgetArgument(c_58, 0);
          w_57 :
          if(match_string(d_58, "Anno_Cong__"))
            {
              x_57 :
              if(((ATgetType(e_58) == AT_LIST) && !(ATisEmpty(e_58))))
                {
                  f_58 = ATgetFirst((ATermList) e_58);
                  i_58 = (ATerm) ATgetNext((ATermList) e_58);
                  y_57 :
                  if(match_cons(f_58, sym_Cong_2))
                    {
                      g_58 = ATgetArgument(f_58, 0);
                      h_58 = ATgetArgument(f_58, 1);
                      z_57 :
                      if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
                        {
                          j_58 = ATgetFirst((ATermList) i_58);
                          k_58 = (ATerm) ATgetNext((ATermList) i_58);
                          a_58 :
                          if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
                            {
                              {
                                ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,b_60 = NULL,d_60 = NULL,f_60 = NULL;
                                ATerm r_18;
                                r_18 = t;
                                {
                                  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(h_58)), not_null(j_58));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      v_58 = t;
                                      q_57 :
                                      if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
                                        {
                                          w_58 = ATgetFirst((ATermList) v_58);
                                          x_58 = (ATerm) ATgetNext((ATermList) v_58);
                                          {
                                            ATerm a_59 = NULL;
                                            if(((o_58 != NULL) && (o_58 != w_58)))
                                              _fail(w_58);
                                            else
                                              o_58 = w_58;
                                            {
                                              if(((s_58 != NULL) && (s_58 != x_58)))
                                                _fail(x_58);
                                              else
                                                s_58 = x_58;
                                              {
                                                ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm y_58 = NULL;
                                                  ATerm z_58 = NULL;
                                                  z_58 = t;
                                                  if(((y_58 != NULL) && (y_58 != z_58)))
                                                    _fail(z_58);
                                                  else
                                                    y_58 = z_58;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_58));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  a_59 = t;
                                                  {
                                                    if(((p_58 != NULL) && (p_58 != a_59)))
                                                      _fail(a_59);
                                                    else
                                                      p_58 = a_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(h_58)), not_null(j_58));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          b_59 = t;
                                                          p_57 :
                                                          if(((ATgetType(b_59) == AT_LIST) && !(ATisEmpty(b_59))))
                                                            {
                                                              c_59 = ATgetFirst((ATermList) b_59);
                                                              d_59 = (ATerm) ATgetNext((ATermList) b_59);
                                                              {
                                                                ATerm g_59 = NULL;
                                                                if(((q_58 != NULL) && (q_58 != c_59)))
                                                                  _fail(c_59);
                                                                else
                                                                  q_58 = c_59;
                                                                {
                                                                  if(((t_58 != NULL) && (t_58 != d_59)))
                                                                    _fail(d_59);
                                                                  else
                                                                    t_58 = d_59;
                                                                  {
                                                                    ATerm h_59 = NULL,a_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm e_59 = NULL;
                                                                      ATerm f_59 = NULL;
                                                                      f_59 = t;
                                                                      if(((e_59 != NULL) && (e_59 != f_59)))
                                                                        _fail(f_59);
                                                                      else
                                                                        e_59 = f_59;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_59));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      g_59 = t;
                                                                      {
                                                                        if(((r_58 != NULL) && (r_58 != g_59)))
                                                                          _fail(g_59);
                                                                        else
                                                                          r_58 = g_59;
                                                                        {
                                                                          ATerm n_59 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_58), not_null(t_58));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              n_59 = t;
                                                                              if(((h_59 != NULL) && (h_59 != n_59)))
                                                                                _fail(n_59);
                                                                              else
                                                                                h_59 = n_59;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), (ATerm) ATinsert(CheckATermList(not_null(h_58)), not_null(j_58)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
                                                                                o_59 = t;
                                                                                m_57 :
                                                                                if(match_cons(o_59, sym__2))
                                                                                  {
                                                                                    p_59 = ATgetArgument(o_59, 0);
                                                                                    s_59 = ATgetArgument(o_59, 1);
                                                                                    n_57 :
                                                                                    if(match_cons(p_59, sym__2))
                                                                                      {
                                                                                        q_59 = ATgetArgument(p_59, 0);
                                                                                        r_59 = ATgetArgument(p_59, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_59)))));
                                                                                      }
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
                                                                                a_60 = t;
                                                                                if(((u_58 != NULL) && (u_58 != a_60)))
                                                                                  _fail(a_60);
                                                                                else
                                                                                  u_58 = a_60;
                                                                              }
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
                                t = r_18;
                                {
                                  ATerm s_18;
                                  s_18 = t;
                                  {
                                    ATerm c_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_58), not_null(t_58));
                                    {
                                      t = conc_0(t);
                                      {
                                        c_60 = t;
                                        if(((b_60 != NULL) && (b_60 != c_60)))
                                          _fail(c_60);
                                        else
                                          b_60 = c_60;
                                      }
                                    }
                                  }
                                  t = s_18;
                                  {
                                    ATerm t_18;
                                    t_18 = t;
                                    {
                                      ATerm e_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_58), not_null(p_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_58))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          e_60 = t;
                                          if(((d_60 != NULL) && (d_60 != e_60)))
                                            _fail(e_60);
                                          else
                                            d_60 = e_60;
                                        }
                                      }
                                    }
                                    t = t_18;
                                    {
                                      ATerm g_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_58), not_null(r_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_58))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          g_60 = t;
                                          if(((f_60 != NULL) && (f_60 != g_60)))
                                            _fail(g_60);
                                          else
                                            f_60 = g_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(b_60)), not_null(q_58)), not_null(o_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_58)), not_null(f_60))));
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
ATerm As_2 (ATerm t, ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  b_61 = t;
  a_61 :
  if(match_cons(b_61, sym_As_2))
    {
      c_61 = ATgetArgument(b_61, 0);
      d_61 = ATgetArgument(b_61, 1);
      {
        ATerm h_61 = NULL,j_61 = NULL;
        ATerm i_61 = NULL;
        t = SSLgetAnnotations(not_null(b_61));
        {
          i_61 = t;
          if(((h_61 != NULL) && (h_61 != i_61)))
            _fail(i_61);
          else
            h_61 = i_61;
        }
        {
          t = not_null(c_61);
          {
            ATerm l_61 = NULL;
            t = d_86(t);
            {
              j_61 = t;
              {
                t = not_null(d_61);
                {
                  ATerm n_61 = NULL;
                  t = e_86(t);
                  {
                    l_61 = t;
                    {
                      ATerm o_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(j_61), not_null(l_61)), not_null(h_61));
                      {
                        o_61 = t;
                        if(((n_61 != NULL) && (n_61 != o_61)))
                          _fail(o_61);
                        else
                          n_61 = o_61;
                      }
                      t = not_null(n_61);
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
ATerm Prim_2 (ATerm t, ATerm j_82 (ATerm), ATerm k_82 (ATerm))
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
  h_62 = t;
  g_62 :
  if(match_cons(h_62, sym_Prim_2))
    {
      i_62 = ATgetArgument(h_62, 0);
      j_62 = ATgetArgument(h_62, 1);
      {
        ATerm n_62 = NULL,p_62 = NULL;
        ATerm o_62 = NULL;
        t = SSLgetAnnotations(not_null(h_62));
        {
          o_62 = t;
          if(((n_62 != NULL) && (n_62 != o_62)))
            _fail(o_62);
          else
            n_62 = o_62;
        }
        {
          t = not_null(i_62);
          {
            ATerm r_62 = NULL;
            t = j_82(t);
            {
              p_62 = t;
              {
                t = not_null(j_62);
                {
                  ATerm t_62 = NULL;
                  t = k_82(t);
                  {
                    r_62 = t;
                    {
                      ATerm u_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(p_62), not_null(r_62)), not_null(n_62));
                      {
                        u_62 = t;
                        if(((t_62 != NULL) && (t_62 != u_62)))
                          _fail(u_62);
                        else
                          t_62 = u_62;
                      }
                      t = not_null(t_62);
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
ATerm Explode_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
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
            t = z_85(t);
            {
              v_63 = t;
              {
                t = not_null(p_63);
                {
                  ATerm z_63 = NULL;
                  t = a_86(t);
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
ATerm Op_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm f_65 = NULL,g_65 = NULL,p_65 = NULL;
  f_65 = t;
  e_65 :
  if(match_cons(f_65, sym_Op_2))
    {
      g_65 = ATgetArgument(f_65, 0);
      p_65 = ATgetArgument(f_65, 1);
      {
        ATerm t_65 = NULL,v_65 = NULL;
        ATerm u_65 = NULL;
        t = SSLgetAnnotations(not_null(f_65));
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
            t = n_84(t);
            {
              v_65 = t;
              {
                t = not_null(p_65);
                {
                  ATerm z_65 = NULL;
                  t = o_84(t);
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
ATerm pat_td_1 (ATerm t, ATerm a_122 (ATerm))
{
  ATerm u_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_122(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = u_18;
      {
        ATerm x_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, a_122);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            LocalPopChoice(z_18);
          }
        else
          {
            t = x_18;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, a_122);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  {
                    ATerm j_19 = t;
                    int n_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, a_122);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(n_19);
                      }
                    else
                      {
                        t = j_19;
                        {
                          ATerm t_19 = t;
                          int z_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, a_122);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              LocalPopChoice(z_19);
                            }
                          else
                            {
                              t = t_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, a_122);
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
        ATerm a_20 = t;
        int b_20 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_67)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_67)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_67))))));
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
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
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
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
        ATerm u_70 = NULL;
        ATerm y_70 = NULL;
        t = not_null(w_69);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm v_70 = NULL,w_70 = NULL;
            w_70 = t;
            r_69 :
            if(match_cons(w_70, sym_Match_1))
              {
                v_70 = ATgetArgument(w_70, 0);
                t = not_null(v_70);
              }
            else
              {
                if(match_cons(w_70, sym_Id_0))
                  {
                    t = term_f_20;
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
            if(((u_70 != NULL) && (u_70 != y_70)))
              _fail(y_70);
            else
              u_70 = y_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(v_69), not_null(u_70)));
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
                  t = term_n_20;
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
                      t = term_n_20;
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
                  if(match_cons(o_74, sym_DefaultVarDec_1))
                    {
                      p_74 = ATgetArgument(o_74, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_74), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_20), term_u_20));
                    }
                  else
                    {
                      if(match_cons(o_74, sym_InfixApp_3))
                        {
                          p_74 = ATgetArgument(o_74, 0);
                          q_74 = ATgetArgument(o_74, 1);
                          n_74 = ATgetArgument(o_74, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_74), (ATerm) ATmakeAppl(sym_Op_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_74)), not_null(p_74))));
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
          t = term_n_20;
        }
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
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  a_77 :
  if(match_cons(h_78, sym_LChoice_2))
    {
      i_78 = ATgetArgument(h_78, 0);
      j_78 = ATgetArgument(h_78, 1);
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
        t = term_n_20;
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
          t = term_n_20;
        }
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
          t = term_n_20;
        }
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
          t = term_n_20;
        }
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
          t = term_n_20;
        }
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
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
  a_81 = t;
  r_80 :
  if(match_cons(a_81, sym_Scope_2))
    {
      b_81 = ATgetArgument(a_81, 0);
      c_81 = ATgetArgument(a_81, 1);
      x_80 :
      if(match_cons(c_81, sym_Fail_0))
        {
          t = term_n_20;
        }
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
          t = term_n_20;
        }
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
          t = term_n_20;
        }
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
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm b_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(k_21);
          }
        else
          {
            t = b_21;
            {
              ATerm l_21 = t;
              int m_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(m_21);
                }
              else
                {
                  t = l_21;
                  {
                    ATerm n_21 = t;
                    int o_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
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
                              t = F6_0(t);
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
                                    t = F7_0(t);
                                    LocalPopChoice(s_21);
                                  }
                                else
                                  {
                                    t = r_21;
                                    {
                                      ATerm t_21 = t;
                                      int u_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(u_21);
                                        }
                                      else
                                        {
                                          t = t_21;
                                          {
                                            ATerm v_21 = t;
                                            int w_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(w_21);
                                              }
                                            else
                                              {
                                                t = v_21;
                                                {
                                                  ATerm x_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = x_21;
                                                      {
                                                        ATerm c_22 = t;
                                                        int d_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(d_22);
                                                          }
                                                        else
                                                          {
                                                            t = c_22;
                                                            {
                                                              ATerm h_22 = t;
                                                              int k_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(k_22);
                                                                }
                                                              else
                                                                {
                                                                  t = h_22;
                                                                  {
                                                                    ATerm l_22 = t;
                                                                    int p_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(p_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_22;
                                                                        {
                                                                          ATerm s_22 = t;
                                                                          int t_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(t_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_22;
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
ATerm I12_0 (ATerm t)
{
  ATerm m_82 = NULL,p_82 = NULL;
  m_82 = t;
  g_82 :
  if(match_cons(m_82, sym_Where_1))
    {
      p_82 = ATgetArgument(m_82, 0);
      l_82 :
      if(match_cons(p_82, sym_Id_0))
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
ATerm I10_0 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL;
  y_82 = t;
  u_82 :
  if(match_cons(y_82, sym_All_1))
    {
      z_82 = ATgetArgument(y_82, 0);
      v_82 :
      if(match_cons(z_82, sym_Id_0))
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
ATerm I9_0 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
  k_83 = t;
  c_83 :
  if(match_cons(k_83, sym_Rec_2))
    {
      l_83 = ATgetArgument(k_83, 0);
      m_83 = ATgetArgument(k_83, 1);
      d_83 :
      if(match_cons(m_83, sym_Id_0))
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
ATerm I8_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  a_84 = t;
  q_83 :
  if(match_cons(a_84, sym_Scope_2))
    {
      b_84 = ATgetArgument(a_84, 0);
      c_84 = ATgetArgument(a_84, 1);
      r_83 :
      if(match_cons(c_84, sym_Id_0))
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
ATerm I7_0 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  g_84 :
  if(match_cons(k_84, sym_LChoice_2))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      j_84 :
      if(match_cons(l_84, sym_Id_0))
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
ATerm I4_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  w_84 = t;
  t_84 :
  if(match_cons(w_84, sym_Seq_2))
    {
      x_84 = ATgetArgument(w_84, 0);
      y_84 = ATgetArgument(w_84, 1);
      v_84 :
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
          t = term_n_20;
        }
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
ATerm ElimId_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
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
                        t = I4_0(t);
                        LocalPopChoice(b_23);
                      }
                    else
                      {
                        t = a_23;
                        {
                          ATerm c_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = c_23;
                              {
                                ATerm j_23 = t;
                                int k_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(k_23);
                                  }
                                else
                                  {
                                    t = j_23;
                                    {
                                      ATerm m_23 = t;
                                      int o_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(o_23);
                                        }
                                      else
                                        {
                                          t = m_23;
                                          {
                                            ATerm p_23 = t;
                                            int q_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(s_23);
                                                    }
                                                  else
                                                    {
                                                      t = r_23;
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
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
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
            t = ElimFail_0(t);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm x_23 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = x_23;
                  {
                    ATerm d_24 = t;
                    int o_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(o_24);
                      }
                    else
                      {
                        t = d_24;
                        {
                          ATerm p_24 = t;
                          int q_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(q_24);
                            }
                          else
                            {
                              t = p_24;
                              {
                                ATerm r_24 = t;
                                int s_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(s_24);
                                  }
                                else
                                  {
                                    t = r_24;
                                    {
                                      ATerm t_24 = t;
                                      int u_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(u_24);
                                        }
                                      else
                                        {
                                          t = t_24;
                                          {
                                            ATerm c_25 = t;
                                            int d_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(d_25);
                                              }
                                            else
                                              {
                                                t = c_25;
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
ATerm repeat_1 (ATerm t, ATerm g_112 (ATerm))
{
  ATerm w_85 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = g_112(t);
      t = w_85(t);
      return(t);
    }
    t = try_1(t, x_3);
    return(t);
  }
  t = w_85(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm x_85 (ATerm t)
  {
    t = p_95(t);
    {
      t = _all(t, x_85);
      t = p_95(t);
    }
    return(t);
  }
  t = x_85(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, y_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm a_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, a_4);
    }
    return(t);
  }
  t = map_1(t, z_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm h_86 = NULL,i_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym_Strategies_1))
    {
      i_86 = ATgetArgument(h_86, 0);
      {
        ATerm l_86 = NULL,n_86 = NULL;
        ATerm m_86 = NULL;
        t = SSLgetAnnotations(not_null(h_86));
        {
          m_86 = t;
          if(((l_86 != NULL) && (l_86 != m_86)))
            _fail(m_86);
          else
            l_86 = m_86;
        }
        {
          t = not_null(i_86);
          {
            ATerm p_86 = NULL;
            t = s_84(t);
            {
              n_86 = t;
              {
                ATerm q_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_86)), not_null(l_86));
                {
                  q_86 = t;
                  if(((p_86 != NULL) && (p_86 != q_86)))
                    _fail(q_86);
                  else
                    p_86 = q_86;
                }
                t = not_null(p_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm a_87 = NULL,b_87 = NULL;
  a_87 = t;
  z_86 :
  if(match_cons(a_87, sym_Specification_1))
    {
      b_87 = ATgetArgument(a_87, 0);
      {
        ATerm e_87 = NULL,g_87 = NULL;
        ATerm f_87 = NULL;
        t = SSLgetAnnotations(not_null(a_87));
        {
          f_87 = t;
          if(((e_87 != NULL) && (e_87 != f_87)))
            _fail(f_87);
          else
            e_87 = f_87;
        }
        {
          t = not_null(b_87);
          {
            ATerm i_87 = NULL;
            t = u_84(t);
            {
              g_87 = t;
              {
                ATerm j_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_87)), not_null(e_87));
                {
                  j_87 = t;
                  if(((i_87 != NULL) && (i_87 != j_87)))
                    _fail(j_87);
                  else
                    i_87 = j_87;
                }
                t = not_null(i_87);
              }
            }
          }
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
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, g_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_4);
    return(t);
  }
  t = Specification_1(t, e_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  t_87 :
  if(match_cons(u_87, sym__2))
    {
      v_87 = ATgetArgument(u_87, 0);
      w_87 = ATgetArgument(u_87, 1);
      {
        ATerm a_88 = NULL,c_88 = NULL;
        ATerm b_88 = NULL;
        t = SSLgetAnnotations(not_null(u_87));
        {
          b_88 = t;
          if(((a_88 != NULL) && (a_88 != b_88)))
            _fail(b_88);
          else
            a_88 = b_88;
        }
        {
          t = not_null(v_87);
          {
            ATerm e_88 = NULL;
            t = y_80(t);
            {
              c_88 = t;
              {
                t = not_null(w_87);
                {
                  ATerm g_88 = NULL;
                  t = z_80(t);
                  {
                    e_88 = t;
                    {
                      ATerm h_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_88), not_null(e_88)), not_null(a_88));
                      {
                        h_88 = t;
                        if(((g_88 != NULL) && (g_88 != h_88)))
                          _fail(h_88);
                        else
                          g_88 = h_88;
                      }
                      t = not_null(g_88);
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
  ATerm p_88 = NULL;
  ATerm e_25;
  e_25 = t;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm q_88 = NULL,r_88 = NULL;
      q_88 = t;
      o_88 :
      if(match_cons(q_88, sym_Program_1))
        {
          r_88 = ATgetArgument(q_88, 0);
          if(((p_88 != NULL) && (p_88 != r_88)))
            _fail(r_88);
          else
            p_88 = r_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_25), not_null(p_88)), term_q_25));
      {
        t = printnl_0(t);
        {
          t = term_n_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
  v_88 = t;
  u_88 :
  if(match_cons(v_88, sym__2))
    {
      w_88 = ATgetArgument(v_88, 0);
      x_88 = ATgetArgument(v_88, 1);
      {
        ATerm t_25;
        t_25 = t;
        t = SSL_printnl(not_null(w_88), not_null(x_88));
        t = t_25;
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
  ATerm c_89 = NULL;
  c_89 = t;
  t = SSL_implode_string(not_null(c_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = u_25;
      {
        ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL;
        h_89 = t;
        g_89 :
        if(((ATgetType(h_89) == AT_LIST) && !(ATisEmpty(h_89))))
          {
            i_89 = ATgetFirst((ATermList) h_89);
            j_89 = (ATerm) ATgetNext((ATermList) h_89);
            {
              t = not_null(i_89);
              {
                ATerm i_4 (ATerm t)
                {
                  t = not_null(j_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_4);
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
  ATerm t_89 = NULL;
  ATerm v_89 = NULL;
  t_89 = t;
  {
    ATerm w_89 = NULL;
    ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL;
    t = not_null(t_89);
    {
      w_89 = t;
      {
        t = SSL_explode_term(not_null(w_89));
        {
          y_89 = t;
          r_89 :
          if(match_cons(y_89, sym__2))
            {
              z_89 = ATgetArgument(y_89, 0);
              a_90 = ATgetArgument(y_89, 1);
              s_89 :
              if(match_string(z_89, ""))
                {
                  if(((v_89 != NULL) && (v_89 != a_90)))
                    _fail(a_90);
                  else
                    v_89 = a_90;
                }
              else
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
      t = not_null(v_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_102 (ATerm))
{
  ATerm e_90 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_90);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          t = Nil_0(t);
          t = p_102(t);
        }
      }
    return(t);
  }
  t = e_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      {
        t = not_null(i_90);
        {
          ATerm j_4 (ATerm t)
          {
            t = not_null(j_90);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_90 = NULL;
  o_90 = t;
  t = SSL_explode_string(not_null(o_90));
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
  ATerm s_90 = NULL;
  s_90 = t;
  t = SSL_is_string(not_null(s_90));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_4);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
              b_91 = t;
              a_91 :
              if(match_cons(b_91, sym_Path_1))
                {
                  c_91 = ATgetArgument(b_91, 0);
                  t = not_null(c_91);
                }
              else
                {
                  if(match_cons(b_91, sym_Var_1))
                    {
                      c_91 = ATgetArgument(b_91, 0);
                      {
                        t = not_null(c_91);
                        {
                          ATerm n_26 = t;
                          int p_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_26);
                            }
                          else
                            {
                              t = n_26;
                              {
                                ATerm l_4 (ATerm t)
                                {
                                  t = term_r_26;
                                  return(t);
                                }
                                t = debug_1(t, l_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_91, sym_Prefix_2))
                        {
                          c_91 = ATgetArgument(b_91, 0);
                          d_91 = ATgetArgument(b_91, 1);
                          {
                            ATerm i_91 = NULL,k_91 = NULL;
                            ATerm s_26;
                            s_26 = t;
                            {
                              ATerm j_91 = NULL;
                              t = not_null(c_91);
                              {
                                t = eval_config_0(t);
                                {
                                  j_91 = t;
                                  if(((i_91 != NULL) && (i_91 != j_91)))
                                    _fail(j_91);
                                  else
                                    i_91 = j_91;
                                }
                              }
                            }
                            t = s_26;
                            {
                              ATerm l_91 = NULL;
                              t = not_null(d_91);
                              {
                                t = eval_config_0(t);
                                {
                                  l_91 = t;
                                  if(((k_91 != NULL) && (k_91 != l_91)))
                                    _fail(l_91);
                                  else
                                    k_91 = l_91;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_91), not_null(k_91));
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
  ATerm t_91 = NULL;
  t_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_26, not_null(t_91));
    {
      t = table_get_0(t);
      {
        ATerm m_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_26;
            x_26 = t;
            {
              ATerm v_91 = NULL;
              ATerm w_91 = NULL;
              w_91 = t;
              if(((v_91 != NULL) && (v_91 != w_91)))
                _fail(w_91);
              else
                v_91 = w_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_26, not_null(t_91), not_null(v_91));
                t = table_put_0(t);
              }
            }
            t = x_26;
          }
          return(t);
        }
        t = try_1(t, m_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_118 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm y_26;
    y_26 = t;
    {
      ATerm a_92 = NULL;
      ATerm b_92 = NULL;
      t = term_z_26;
      {
        t = get_config_0(t);
        {
          b_92 = t;
          if(((a_92 != NULL) && (a_92 != b_92)))
            _fail(b_92);
          else
            a_92 = b_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_92), term_a_27);
        t = geq_0(t);
      }
    }
    t = y_26;
    t = d_118(t);
    return(t);
  }
  t = try_1(t, n_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  e_92 :
  if(match_cons(f_92, sym__2))
    {
      g_92 = ATgetArgument(f_92, 0);
      h_92 = ATgetArgument(f_92, 1);
      t = SSL_WriteToTextFile(not_null(g_92), not_null(h_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  m_92 :
  if(match_cons(p_92, sym__2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      t = SSL_WriteToBinaryFile(not_null(q_92), not_null(r_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_92 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm d_27 = t;
      int e_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm a_93 = NULL,b_93 = NULL;
            a_93 = t;
            w_92 :
            if(match_cons(a_93, sym_Output_1))
              {
                b_93 = ATgetArgument(a_93, 0);
                if(((z_92 != NULL) && (z_92 != b_93)))
                  _fail(b_93);
                else
                  z_92 = b_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_4);
          LocalPopChoice(e_27);
        }
      else
        {
          t = d_27;
          {
            ATerm c_93 = NULL;
            t = term_f_27;
            {
              c_93 = t;
              if(((z_92 != NULL) && (z_92 != c_93)))
                _fail(c_93);
              else
                z_92 = c_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_4, _id);
  }
  t = b_27;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm r_4 (ATerm t)
      {
        t = not_null(z_92);
        return(t);
      }
      t = split_2(t, r_4, _id);
      return(t);
    }
    t = _2(t, _id, q_4);
    {
      ATerm k_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              ATerm d_93 = NULL;
              d_93 = t;
              y_92 :
              if(!(match_cons(d_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_4);
            return(t);
          }
          t = _2(t, s_4, WriteToBinaryFile_0);
          LocalPopChoice(m_27);
        }
      else
        {
          t = k_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm j_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL;
  ATerm n_27;
  n_27 = t;
  t = dtime_0(t);
  t = n_27;
  {
    t = g_116(t);
    {
      ATerm o_27;
      o_27 = t;
      {
        ATerm k_93 = NULL;
        t = dtime_0(t);
        {
          k_93 = t;
          if(((j_93 != NULL) && (j_93 != k_93)))
            _fail(k_93);
          else
            j_93 = k_93;
        }
      }
      t = o_27;
      {
        l_93 = t;
        i_93 :
        if(match_cons(l_93, sym__2))
          {
            m_93 = ATgetArgument(l_93, 0);
            n_93 = ATgetArgument(l_93, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_93)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_93))), not_null(n_93));
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
ATerm debug_1 (ATerm t, ATerm l_122 (ATerm))
{
  ATerm s_27;
  s_27 = t;
  {
    ATerm x_93 = NULL,z_93 = NULL;
    ATerm b_28;
    b_28 = t;
    {
      ATerm y_93 = NULL;
      t = l_122(t);
      {
        y_93 = t;
        if(((x_93 != NULL) && (x_93 != y_93)))
          _fail(y_93);
        else
          x_93 = y_93;
      }
    }
    t = b_28;
    {
      ATerm a_94 = NULL;
      a_94 = t;
      if(((z_93 != NULL) && (z_93 != a_94)))
        _fail(a_94);
      else
        z_93 = a_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_93)), not_null(x_93)));
        t = printnl_0(t);
      }
    }
  }
  t = s_27;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_94 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_94 = NULL;
      f_94 = t;
      {
        if(((e_94 != NULL) && (e_94 != f_94)))
          _fail(f_94);
        else
          e_94 = f_94;
        t = SSL_ReadFromFile(not_null(e_94));
      }
      LocalPopChoice(e_28);
    }
  else
    {
      t = c_28;
      {
        ATerm u_4 (ATerm t)
        {
          t = term_f_28;
          return(t);
        }
        t = debug_1(t, u_4);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_99 (ATerm), ATerm m_99 (ATerm))
{
  ATerm j_94 = NULL,l_94 = NULL;
  ATerm u_28;
  u_28 = t;
  {
    ATerm k_94 = NULL;
    t = l_99(t);
    {
      k_94 = t;
      if(((j_94 != NULL) && (j_94 != k_94)))
        _fail(k_94);
      else
        j_94 = k_94;
    }
  }
  t = u_28;
  {
    ATerm m_94 = NULL;
    t = m_99(t);
    {
      m_94 = t;
      if(((l_94 != NULL) && (l_94 != m_94)))
        _fail(m_94);
      else
        l_94 = m_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_94), not_null(l_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_95 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 (ATerm t)
        {
          ATerm b_95 = NULL,c_95 = NULL;
          b_95 = t;
          y_94 :
          if(match_cons(b_95, sym_Input_1))
            {
              c_95 = ATgetArgument(b_95, 0);
              if(((a_95 != NULL) && (a_95 != c_95)))
                _fail(c_95);
              else
                a_95 = c_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_4);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm d_95 = NULL;
          t = term_z_28;
          {
            d_95 = t;
            if(((a_95 != NULL) && (a_95 != d_95)))
              _fail(d_95);
            else
              a_95 = d_95;
          }
        }
      }
  }
  t = v_28;
  {
    ATerm w_4 (ATerm t)
    {
      t = not_null(a_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_4);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm h_95 = NULL;
    h_95 = t;
    g_95 :
    if(!(match_string(h_95, "-v")))
      {
        if(!(match_string(h_95, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_n_29;
    t = set_config_0(t);
    t = term_o_29;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  t = Option_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm k_95 = NULL;
    k_95 = t;
    i_95 :
    if(!(match_string(k_95, "-k")))
      {
        if(!(match_string(k_95, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm w_29;
    w_29 = t;
    {
      ATerm l_95 = NULL;
      ATerm m_95 = NULL;
      t = string_to_int_0(t);
      {
        m_95 = t;
        if(((l_95 != NULL) && (l_95 != m_95)))
          _fail(m_95);
        else
          l_95 = m_95;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_29, not_null(l_95));
        t = set_config_0(t);
      }
    }
    t = w_29;
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_y_29;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_95 = NULL;
  s_95 = t;
  t = SSL_string_to_int(not_null(s_95));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 (ATerm t)
      {
        ATerm a_96 = NULL;
        a_96 = t;
        v_95 :
        if(!(match_string(a_96, "-S")))
          {
            if(!(match_string(a_96, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_c_30;
        t = set_config_0(t);
        t = term_d_30;
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_e_30;
        return(t);
      }
      t = Option_3(t, d_5, e_5, f_5);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              ATerm b_96 = NULL;
              b_96 = t;
              w_95 :
              if(!(match_string(b_96, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm e_96 = NULL;
              ATerm m_30;
              m_30 = t;
              {
                ATerm c_96 = NULL;
                ATerm d_96 = NULL;
                t = string_to_int_0(t);
                {
                  d_96 = t;
                  if(((c_96 != NULL) && (c_96 != d_96)))
                    _fail(d_96);
                  else
                    c_96 = d_96;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_26, not_null(c_96));
                  t = set_config_0(t);
                }
              }
              t = m_30;
              {
                ATerm f_96 = NULL;
                f_96 = t;
                if(((e_96 != NULL) && (e_96 != f_96)))
                  _fail(f_96);
                else
                  e_96 = f_96;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_96));
              }
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              t = term_r_30;
              return(t);
            }
            t = ArgOption_3(t, g_5, h_5, i_5);
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            {
              ATerm j_5 (ATerm t)
              {
                ATerm g_96 = NULL;
                g_96 = t;
                z_95 :
                if(!(match_string(g_96, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_t_30;
                t = set_config_0(t);
                t = term_u_30;
                return(t);
              }
              ATerm l_5 (ATerm t)
              {
                t = term_z_30;
                return(t);
              }
              t = Option_3(t, j_5, k_5, l_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = a_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm m_96 = NULL;
    m_96 = t;
    j_96 :
    if(!(match_string(m_96, "-o")))
      {
        if(!(match_string(m_96, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm p_96 = NULL;
    ATerm g_31;
    g_31 = t;
    {
      ATerm n_96 = NULL;
      ATerm o_96 = NULL;
      o_96 = t;
      if(((n_96 != NULL) && (n_96 != o_96)))
        _fail(o_96);
      else
        n_96 = o_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_31, not_null(n_96));
        t = set_config_0(t);
      }
    }
    t = g_31;
    {
      ATerm q_96 = NULL;
      q_96 = t;
      if(((p_96 != NULL) && (p_96 != q_96)))
        _fail(q_96);
      else
        p_96 = q_96;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_96));
    }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_r_31;
    return(t);
  }
  t = ArgOption_3(t, m_5, n_5, o_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm u_96 = NULL;
          u_96 = t;
          t_96 :
          if(!(match_string(u_96, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_v_31;
          t = set_config_0(t);
          t = term_w_31;
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = term_b_32;
          return(t);
        }
        t = Option_3(t, p_5, q_5, r_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,f_97 = NULL,g_97 = NULL;
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
              f_97 = ATgetFirst((ATermList) c_97);
              g_97 = (ATerm) ATgetNext((ATermList) c_97);
              {
                ATerm k_97 = NULL;
                ATerm c_32;
                c_32 = t;
                {
                  t = not_null(b_97);
                  t = j_0(t);
                }
                t = c_32;
                {
                  ATerm l_97 = NULL;
                  t = not_null(f_97);
                  {
                    t = l_0(t);
                    {
                      l_97 = t;
                      if(((k_97 != NULL) && (k_97 != l_97)))
                        _fail(l_97);
                      else
                        k_97 = l_97;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_97)), not_null(k_97));
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
  ATerm s_5 (ATerm t)
  {
    ATerm s_97 = NULL;
    s_97 = t;
    p_97 :
    if(!(match_string(s_97, "-i")))
      {
        if(!(match_string(s_97, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm v_97 = NULL;
    ATerm d_32;
    d_32 = t;
    {
      ATerm t_97 = NULL;
      ATerm u_97 = NULL;
      u_97 = t;
      if(((t_97 != NULL) && (t_97 != u_97)))
        _fail(u_97);
      else
        t_97 = u_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_32, not_null(t_97));
        t = set_config_0(t);
      }
    }
    t = d_32;
    {
      ATerm w_97 = NULL;
      w_97 = t;
      if(((v_97 != NULL) && (v_97 != w_97)))
        _fail(w_97);
      else
        v_97 = w_97;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_97));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_f_32;
    return(t);
  }
  t = ArgOption_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = g_32;
      {
        ATerm n_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_32);
          }
        else
          {
            t = n_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATempty, term_v_32));
  {
    t = printnl_0(t);
    {
      t = term_n_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  t = SSL_TicksToSeconds(not_null(a_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL;
  f_98 = t;
  e_98 :
  if(match_cons(f_98, sym__2))
    {
      g_98 = ATgetArgument(f_98, 0);
      h_98 = ATgetArgument(f_98, 1);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_98), not_null(h_98));
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = SSL_addr(not_null(g_98), not_null(h_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_106(t);
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
        o_98 = t;
        n_98 :
        if(((ATgetType(o_98) == AT_LIST) && !(ATisEmpty(o_98))))
          {
            p_98 = ATgetFirst((ATermList) o_98);
            q_98 = (ATerm) ATgetNext((ATermList) o_98);
            {
              ATerm u_98 = NULL;
              ATerm v_98 = NULL;
              t = not_null(q_98);
              {
                t = foldr_2(t, x_106, y_106);
                {
                  v_98 = t;
                  if(((u_98 != NULL) && (u_98 != v_98)))
                    _fail(v_98);
                  else
                    u_98 = v_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_98), not_null(u_98));
                t = y_106(t);
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
ATerm crush_2 (ATerm t, ATerm v_105 (ATerm), ATerm w_105 (ATerm))
{
  ATerm c_99 = NULL;
  ATerm e_99 = NULL;
  c_99 = t;
  {
    ATerm f_99 = NULL;
    ATerm j_99 = NULL,k_99 = NULL,n_99 = NULL;
    t = not_null(c_99);
    {
      f_99 = t;
      {
        t = SSL_explode_term(not_null(f_99));
        {
          j_99 = t;
          b_99 :
          if(match_cons(j_99, sym__2))
            {
              k_99 = ATgetArgument(j_99, 0);
              n_99 = ATgetArgument(j_99, 1);
              if(((e_99 != NULL) && (e_99 != n_99)))
                _fail(n_99);
              else
                e_99 = n_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_99);
      t = foldr_2(t, v_105, w_105);
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
    ATerm v_5 (ATerm t)
    {
      t = term_b_30;
      return(t);
    }
    t = crush_2(t, v_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
  t_99 = t;
  s_99 :
  if(match_cons(t_99, sym__2))
    {
      u_99 = ATgetArgument(t_99, 0);
      v_99 = ATgetArgument(t_99, 1);
      {
        ATerm a_33;
        a_33 = t;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_99), not_null(v_99));
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = SSL_gtr(not_null(u_99), not_null(v_99));
            }
        }
        t = a_33;
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
  ATerm b_100 = NULL;
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL;
      c_100 = t;
      a_100 :
      if(match_cons(c_100, sym__2))
        {
          d_100 = ATgetArgument(c_100, 0);
          e_100 = ATgetArgument(c_100, 1);
          {
            if(((b_100 != NULL) && (b_100 != d_100)))
              _fail(d_100);
            else
              b_100 = d_100;
            if(((b_100 != NULL) && (b_100 != e_100)))
              _fail(e_100);
            else
              b_100 = e_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_118 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm f_33;
    f_33 = t;
    {
      ATerm h_100 = NULL;
      ATerm i_100 = NULL;
      t = term_z_26;
      {
        t = get_config_0(t);
        {
          i_100 = t;
          if(((h_100 != NULL) && (h_100 != i_100)))
            _fail(i_100);
          else
            h_100 = i_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_100), term_n_15);
        t = geq_0(t);
      }
    }
    t = f_33;
    t = c_118(t);
    return(t);
  }
  t = try_1(t, w_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm s_100 = NULL,u_100 = NULL;
    ATerm g_33;
    g_33 = t;
    {
      ATerm t_100 = NULL;
      t = run_time_0(t);
      {
        t_100 = t;
        if(((s_100 != NULL) && (s_100 != t_100)))
          _fail(t_100);
        else
          s_100 = t_100;
      }
    }
    t = g_33;
    {
      ATerm v_100 = NULL;
      t = term_h_33;
      {
        t = get_config_0(t);
        {
          v_100 = t;
          if(((u_100 != NULL) && (u_100 != v_100)))
            _fail(v_100);
          else
            u_100 = v_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), not_null(s_100)), term_i_33), not_null(u_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_5);
  {
    t = term_b_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_cons(c_101, sym_Version_0))
    {
      ATerm e_101 = NULL,g_101 = NULL;
      ATerm k_33;
      k_33 = t;
      {
        ATerm f_101 = NULL;
        t = SSLgetAnnotations(not_null(c_101));
        {
          f_101 = t;
          if(((e_101 != NULL) && (e_101 != f_101)))
            _fail(f_101);
          else
            e_101 = f_101;
        }
      }
      t = k_33;
      {
        ATerm h_101 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_101));
        {
          h_101 = t;
          if(((g_101 != NULL) && (g_101 != h_101)))
            _fail(h_101);
          else
            g_101 = h_101;
        }
        t = not_null(g_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_116 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_5);
  t = e_116(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_101 = NULL;
  m_101 = t;
  t = SSL_table_create(not_null(m_101));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_101 = NULL;
  q_101 = t;
  {
    ATerm p_33;
    p_33 = t;
    {
      t = term_q_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_33, term_r_33, not_null(q_101));
          t = table_put_0(t);
        }
      }
    }
    t = p_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_101 = NULL;
  u_101 = t;
  t = SSL_table_destroy(not_null(u_101));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_101 = NULL;
  z_101 = t;
  t = SSL_exit(not_null(z_101));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(((ATgetType(f_102) == AT_LIST) && ATisEmpty(f_102)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_102) == AT_LIST) && !(ATisEmpty(f_102))))
        {
          g_102 = ATgetFirst((ATermList) f_102);
          h_102 = (ATerm) ATgetNext((ATermList) f_102);
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
  ATerm s_33;
  s_33 = t;
  {
    ATerm m_102 = NULL;
    ATerm r_102 = NULL;
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
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
      r_102 = t;
      if(((m_102 != NULL) && (m_102 != r_102)))
        _fail(r_102);
      else
        m_102 = r_102;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_27, not_null(m_102));
      t = printnl_0(t);
    }
  }
  t = s_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm u_102 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = Cons_2(t, a_102, u_102);
      }
    return(t);
  }
  t = u_102(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL;
  d_103 = t;
  a_103 :
  if(((ATgetType(d_103) == AT_LIST) && !(ATisEmpty(d_103))))
    {
      b_103 = ATgetFirst((ATermList) d_103);
      c_103 = (ATerm) ATgetNext((ATermList) d_103);
      {
        ATerm g_103 = NULL;
        t = not_null(c_103);
        {
          ATerm x_33;
          x_33 = t;
          {
            ATerm h_103 = NULL,j_103 = NULL,l_103 = NULL;
            ATerm y_33;
            y_33 = t;
            {
              ATerm i_103 = NULL;
              t = i_0(t);
              {
                i_103 = t;
                if(((h_103 != NULL) && (h_103 != i_103)))
                  _fail(i_103);
                else
                  h_103 = i_103;
              }
            }
            t = y_33;
            {
              ATerm k_103 = NULL;
              t = not_null(b_103);
              {
                t = h_0(t);
                {
                  k_103 = t;
                  if(((j_103 != NULL) && (j_103 != k_103)))
                    _fail(k_103);
                  else
                    j_103 = k_103;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_103)), not_null(j_103));
                {
                  l_103 = t;
                  if(((g_103 != NULL) && (g_103 != l_103)))
                    _fail(l_103);
                  else
                    g_103 = l_103;
                }
              }
            }
          }
          t = x_33;
          {
            ATerm z_5 (ATerm t)
            {
              t = not_null(g_103);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_103) == AT_LIST) && ATisEmpty(d_103)))
        {
          {
            t = term_z_6;
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
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL;
  w_103 = t;
  v_103 :
  if(match_cons(w_103, sym_Program_1))
    {
      x_103 = ATgetArgument(w_103, 0);
      {
        ATerm a_104 = NULL,c_104 = NULL;
        ATerm b_104 = NULL;
        t = SSLgetAnnotations(not_null(w_103));
        {
          b_104 = t;
          if(((a_104 != NULL) && (a_104 != b_104)))
            _fail(b_104);
          else
            a_104 = b_104;
        }
        {
          t = not_null(x_103);
          {
            ATerm e_104 = NULL;
            t = n_92(t);
            {
              c_104 = t;
              {
                ATerm f_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_104)), not_null(a_104));
                {
                  f_104 = t;
                  if(((e_104 != NULL) && (e_104 != f_104)))
                    _fail(f_104);
                  else
                    e_104 = f_104;
                }
                t = not_null(e_104);
              }
            }
          }
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
  ATerm o_104 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_104 = NULL;
      t = term_h_33;
      {
        t = get_config_0(t);
        {
          p_104 = t;
          if(((o_104 != NULL) && (o_104 != p_104)))
            _fail(p_104);
          else
            o_104 = p_104;
        }
      }
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm c_6 (ATerm t)
          {
            ATerm q_104 = NULL;
            q_104 = t;
            if(((o_104 != NULL) && (o_104 != q_104)))
              _fail(q_104);
            else
              o_104 = q_104;
            return(t);
          }
          t = Program_1(t, c_6);
          return(t);
        }
        t = option_defined_1(t, b_6);
      }
    }
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(o_104);
        return(t);
      }
      t = short_description_1(t, e_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, d_6);
    {
      t = term_b_34;
      {
        t = echo_0(t);
        {
          t = term_e_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm r_104 = NULL;
                  ATerm s_104 = NULL;
                  s_104 = t;
                  if(((r_104 != NULL) && (r_104 != s_104)))
                    _fail(s_104);
                  else
                    r_104 = s_104;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_104)), term_f_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_6);
                {
                  ATerm g_6 (ATerm t)
                  {
                    ATerm t_104 = NULL;
                    ATerm u_104 = NULL;
                    ATerm h_6 (ATerm t)
                    {
                      t = not_null(o_104);
                      return(t);
                    }
                    t = long_description_1(t, h_6);
                    {
                      u_104 = t;
                      if(((t_104 != NULL) && (t_104 != u_104)))
                        _fail(u_104);
                      else
                        t_104 = u_104;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_104)), term_h_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_6);
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
  ATerm i_34;
  i_34 = t;
  {
    ATerm a_105 = NULL;
    ATerm b_105 = NULL;
    b_105 = t;
    if(((a_105 != NULL) && (a_105 != b_105)))
      _fail(b_105);
    else
      a_105 = b_105;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATempty, not_null(a_105)));
      t = printnl_0(t);
    }
  }
  t = i_34;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_122 (ATerm))
{
  ATerm j_34;
  j_34 = t;
  {
    t = m_122(t);
    t = debug_0(t);
  }
  t = j_34;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm i_105 = NULL,j_105 = NULL;
  i_105 = t;
  h_105 :
  if(match_cons(i_105, sym_Undefined_1))
    {
      j_105 = ATgetArgument(i_105, 0);
      {
        ATerm m_105 = NULL,o_105 = NULL;
        ATerm n_105 = NULL;
        t = SSLgetAnnotations(not_null(i_105));
        {
          n_105 = t;
          if(((m_105 != NULL) && (m_105 != n_105)))
            _fail(n_105);
          else
            m_105 = n_105;
        }
        {
          t = not_null(j_105);
          {
            ATerm q_105 = NULL;
            t = o_92(t);
            {
              o_105 = t;
              {
                ATerm r_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_105)), not_null(m_105));
                {
                  r_105 = t;
                  if(((q_105 != NULL) && (q_105 != r_105)))
                    _fail(r_105);
                  else
                    q_105 = r_105;
                }
                t = not_null(q_105);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm j_102 (ATerm))
{
  ATerm b_106 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_102, _id);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = Cons_2(t, _id, b_106);
      }
    return(t);
  }
  t = b_106(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_119 (ATerm))
{
  t = fetch_1(t, f_119);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_106 = NULL;
  n_106 = t;
  j_106 :
  if(match_cons(n_106, sym_Help_0))
    {
      ATerm p_106 = NULL,r_106 = NULL;
      ATerm m_34;
      m_34 = t;
      {
        ATerm q_106 = NULL;
        t = SSLgetAnnotations(not_null(n_106));
        {
          q_106 = t;
          if(((p_106 != NULL) && (p_106 != q_106)))
            _fail(q_106);
          else
            p_106 = q_106;
        }
      }
      t = m_34;
      {
        ATerm s_106 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_106));
        {
          s_106 = t;
          if(((r_106 != NULL) && (r_106 != s_106)))
            _fail(s_106);
          else
            r_106 = s_106;
        }
        t = not_null(r_106);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_98(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  d_107 = t;
  c_107 :
  if(match_cons(d_107, sym__2))
    {
      e_107 = ATgetArgument(d_107, 0);
      f_107 = ATgetArgument(d_107, 1);
      t = SSL_table_get(not_null(e_107), not_null(f_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL;
  m_107 = t;
  l_107 :
  if(match_cons(m_107, sym__3))
    {
      n_107 = ATgetArgument(m_107, 0);
      o_107 = ATgetArgument(m_107, 1);
      p_107 = ATgetArgument(m_107, 2);
      {
        ATerm p_34;
        p_34 = t;
        {
          ATerm t_107 = NULL;
          ATerm u_107 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(o_107));
          {
            ATerm q_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_34);
              }
            else
              {
                t = q_34;
                t = (ATerm) ATempty;
              }
            {
              u_107 = t;
              if(((t_107 != NULL) && (t_107 != u_107)))
                _fail(u_107);
              else
                t_107 = u_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_107), not_null(o_107), (ATerm) ATinsert(CheckATermList(not_null(t_107)), not_null(p_107)));
            t = table_put_0(t);
          }
        }
        t = p_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm y_107 = NULL;
  ATerm z_107 = NULL;
  t = term_z_6;
  {
    t = k_120(t);
    {
      z_107 = t;
      if(((y_107 != NULL) && (y_107 != z_107)))
        _fail(z_107);
      else
        y_107 = z_107;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_34, term_d_34, not_null(y_107));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  f_108 = t;
  e_108 :
  if(match_string(f_108, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(f_108) == AT_LIST) && !(ATisEmpty(f_108))))
        {
          g_108 = ATgetFirst((ATermList) f_108);
          h_108 = (ATerm) ATgetNext((ATermList) f_108);
          {
            ATerm k_108 = NULL;
            ATerm s_34;
            s_34 = t;
            {
              t = not_null(g_108);
              t = a_0(t);
            }
            t = s_34;
            {
              ATerm l_108 = NULL;
              t = term_z_6;
              {
                t = c_0(t);
                {
                  l_108 = t;
                  if(((k_108 != NULL) && (k_108 != l_108)))
                    _fail(l_108);
                  else
                    k_108 = l_108;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_108)), not_null(k_108));
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
  ATerm i_6 (ATerm t)
  {
    ATerm z_108 = NULL;
    z_108 = t;
    w_108 :
    if(!(match_string(z_108, "--help")))
      {
        if(!(match_string(z_108, "-h")))
          {
            if(!(match_string(z_108, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_u_34;
    {
      t = set_config_0(t);
      t = term_v_34;
    }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  t = Option_3(t, i_6, k_6, l_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,h_109 = NULL;
  d_109 = t;
  b_109 :
  if(((ATgetType(d_109) == AT_LIST) && !(ATisEmpty(d_109))))
    {
      e_109 = ATgetFirst((ATermList) d_109);
      h_109 = (ATerm) ATgetNext((ATermList) d_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL;
  r_109 = t;
  q_109 :
  if(((ATgetType(r_109) == AT_LIST) && !(ATisEmpty(r_109))))
    {
      s_109 = ATgetFirst((ATermList) r_109);
      t_109 = (ATerm) ATgetNext((ATermList) r_109);
      {
        ATerm y_109 = NULL,a_110 = NULL;
        ATerm z_109 = NULL;
        t = SSLgetAnnotations(not_null(r_109));
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
        {
          t = not_null(s_109);
          {
            ATerm c_110 = NULL;
            t = h_82(t);
            {
              a_110 = t;
              {
                t = not_null(t_109);
                {
                  ATerm e_110 = NULL;
                  t = i_82(t);
                  {
                    c_110 = t;
                    {
                      ATerm f_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_110)), not_null(a_110)), not_null(y_109));
                      {
                        f_110 = t;
                        if(((e_110 != NULL) && (e_110 != f_110)))
                          _fail(f_110);
                        else
                          e_110 = f_110;
                      }
                      t = not_null(e_110);
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
  ATerm t_110 = NULL;
  t_110 = t;
  o_110 :
  if(((ATgetType(t_110) == AT_LIST) && ATisEmpty(t_110)))
    {
      {
        ATerm v_110 = NULL,x_110 = NULL;
        ATerm x_34;
        x_34 = t;
        {
          ATerm w_110 = NULL;
          t = SSLgetAnnotations(not_null(t_110));
          {
            w_110 = t;
            if(((v_110 != NULL) && (v_110 != w_110)))
              _fail(w_110);
            else
              v_110 = w_110;
          }
        }
        t = x_34;
        {
          ATerm y_110 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_110));
          {
            y_110 = t;
            if(((x_110 != NULL) && (x_110 != y_110)))
              _fail(y_110);
            else
              x_110 = y_110;
          }
          t = not_null(x_110);
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
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym__2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_26, not_null(f_111), not_null(g_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm y_34;
  y_34 = t;
  {
    ATerm m_6 (ATerm t)
    {
      t = term_z_34;
      t = i_120(t);
      return(t);
    }
    t = try_1(t, m_6);
  }
  t = y_34;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm o_111 = NULL;
      ATerm a_35;
      a_35 = t;
      {
        ATerm m_111 = NULL;
        ATerm n_111 = NULL;
        n_111 = t;
        if(((m_111 != NULL) && (m_111 != n_111)))
          _fail(n_111);
        else
          m_111 = n_111;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_33, not_null(m_111));
          t = set_config_0(t);
        }
      }
      t = a_35;
      {
        ATerm p_111 = NULL;
        p_111 = t;
        if(((o_111 != NULL) && (o_111 != p_111)))
          _fail(p_111);
        else
          o_111 = p_111;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_111));
      }
      return(t);
    }
    ATerm o_6 (ATerm t)
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              {
                t = i_120(t);
                t = Cons_2(t, _id, o_6);
              }
            }
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_6, o_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL;
  ATerm f_35;
  f_35 = t;
  {
    ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL;
    y_111 = t;
    u_111 :
    if(match_cons(y_111, sym__3))
      {
        z_111 = ATgetArgument(y_111, 0);
        a_112 = ATgetArgument(y_111, 1);
        b_112 = ATgetArgument(y_111, 2);
        {
          if(((v_111 != NULL) && (v_111 != z_111)))
            _fail(z_111);
          else
            v_111 = z_111;
          {
            if(((w_111 != NULL) && (w_111 != a_112)))
              _fail(a_112);
            else
              w_111 = a_112;
            {
              if(((x_111 != NULL) && (x_111 != b_112)))
                _fail(b_112);
              else
                x_111 = b_112;
              t = SSL_table_put(not_null(v_111), not_null(w_111), not_null(x_111));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_120 (ATerm))
{
  ATerm e_112 = NULL;
  ATerm g_35;
  g_35 = t;
  {
    t = term_h_35;
    t = table_put_0(t);
  }
  t = g_35;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm i_35 = t;
      int o_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_120(t);
          LocalPopChoice(o_35);
        }
      else
        {
          t = i_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_6);
    {
      ATerm q_6 (ATerm t)
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_35;
            r_35 = t;
            {
              ATerm s_35 = t;
              int t_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_34;
                  t = get_config_0(t);
                  LocalPopChoice(t_35);
                }
              else
                {
                  t = s_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_35;
            {
              t = system_usage_0(t);
              {
                t = term_b_30;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm r_6 (ATerm t)
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm f_112 = NULL;
                  f_112 = t;
                  if(((e_112 != NULL) && (e_112 != f_112)))
                    _fail(f_112);
                  else
                    e_112 = f_112;
                  return(t);
                }
                t = Undefined_1(t, s_6);
                return(t);
              }
              t = option_defined_1(t, r_6);
              {
                ATerm t_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_112)), term_y_35);
                  return(t);
                }
                t = say_1(t, t_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_6);
      {
        ATerm z_35;
        z_35 = t;
        {
          t = term_c_34;
          t = table_destroy_0(t);
        }
        t = z_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm))
{
  t = parse_options_1(t, k_116);
  {
    t = store_options_0(t);
    {
      t = m_116(t);
      {
        ATerm a_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_116);
            LocalPopChoice(f_36);
          }
        else
          {
            t = a_36;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_116(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_117(t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_6, d_117, e_117, v_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm k_36;
      k_36 = t;
      {
        ATerm k_112 = NULL;
        ATerm l_112 = NULL;
        t = term_h_33;
        {
          t = get_config_0(t);
          {
            l_112 = t;
            if(((k_112 != NULL) && (k_112 != l_112)))
              _fail(l_112);
            else
              k_112 = l_112;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATempty, not_null(k_112)));
          t = printnl_0(t);
        }
      }
      t = k_36;
      return(t);
    }
    t = if_verbose2_1(t, x_6);
    return(t);
  }
  t = iowrap_4(t, v_116, w_116, x_116, w_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_116 (ATerm), ATerm u_116 (ATerm))
{
  t = iowrap_3(t, t_116, u_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_116 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    t = _2(t, _id, q_116);
    return(t);
  }
  t = iowrap_2(t, y_6, _fail);
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
