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
ATerm term_d_37;
ATerm term_l_36;
ATerm term_v_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_d_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_y_28;
ATerm term_f_28;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_a_18;
ATerm term_z_16;
ATerm term_c_15;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_o_13;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
void init_constant_terms (void)
{
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Op_2, term_r_20, (ATerm) ATempty);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_q_6);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_y_30);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_30);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_q_6);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_q_6);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_p_34, term_q_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_q_6);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__3, term_p_34, term_q_34, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_115 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_95 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm l_94 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm Let_2 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm));
ATerm sboundin_3 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm h_94 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm i_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm t_105 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_105 (ATerm), ATerm y_105 (ATerm));
ATerm diff_1 (ATerm, ATerm p_105 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_112 (ATerm), ATerm i_112 (ATerm));
ATerm for_3 (ATerm, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm k_108 (ATerm), ATerm l_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm e_108 (ATerm), ATerm f_108 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm p_108 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm i_109 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm s_108 (ATerm));
ATerm rename_4 (ATerm, ATerm z_107 (ATerm, ATerm (ATerm)), ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_108 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_115 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_115 (ATerm));
ATerm scope_2 (ATerm, ATerm e_115 (ATerm), ATerm f_115 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_115 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm));
ATerm crush_3 (ATerm, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_83 (ATerm), ATerm b_83 (ATerm));
ATerm Cong_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm Match_1 (ATerm, ATerm h_82 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_82 (ATerm), ATerm z_82 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_82 (ATerm), ATerm m_82 (ATerm));
ATerm Build_1 (ATerm, ATerm i_82 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_83 (ATerm));
ATerm Call_2 (ATerm, ATerm b_84 (ATerm), ATerm c_84 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm x_96 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm));
ATerm zip_1 (ATerm, ATerm e_100 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_82 (ATerm), ATerm e_82 (ATerm));
ATerm Explode_2 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm Op_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_121 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm q_111 (ATerm), ATerm r_111 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_111 (ATerm));
ATerm downup_1 (ATerm, ATerm j_95 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_84 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_117 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_115 (ATerm));
ATerm debug_1 (ATerm, ATerm y_121 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_98 (ATerm), ATerm a_99 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm crush_2 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_117 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_115 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_119 (ATerm));
ATerm map_1 (ATerm, ATerm n_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_119 (ATerm));
ATerm Program_1 (ATerm, ATerm h_92 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_121 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_92 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_118 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_98 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_82 (ATerm), ATerm c_82 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_116 (ATerm), ATerm h_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_116 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm i_115 (ATerm))
{
  ATerm o_7 = NULL;
  ATerm u_7 = NULL;
  o_7 = t;
  {
    ATerm v_7 = NULL;
    t = term_q_6;
    {
      t = i_115(t);
      {
        v_7 = t;
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(o_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  f_8 = t;
  d_8 :
  if(match_cons(f_8, sym_Call_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      i_8 = ATgetArgument(f_8, 1);
      e_8 :
      if(match_cons(g_8, sym_SVar_1))
        {
          h_8 = ATgetArgument(g_8, 0);
          {
            ATerm m_8 = NULL;
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), term_r_6);
            {
              ATerm b_0 (ATerm t)
              {
                t = term_s_6;
                return(t);
              }
              t = rewrite_1(t, b_0);
              {
                n_8 = t;
                b_8 :
                if(match_cons(n_8, sym_Defined_2))
                  {
                    o_8 = ATgetArgument(n_8, 0);
                    p_8 = ATgetArgument(n_8, 1);
                    c_8 :
                    if(match_string(o_8, "n_0"))
                      {
                        if(((m_8 != NULL) && (m_8 != p_8)))
                          _fail(p_8);
                        else
                          m_8 = p_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_8)), not_null(i_8));
          }
        }
      else
        {
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  w_8 :
  if(match_cons(z_8, sym_Call_2))
    {
      a_9 = ATgetArgument(z_8, 0);
      c_9 = ATgetArgument(z_8, 1);
      x_8 :
      if(match_cons(a_9, sym_SVar_1))
        {
          b_9 = ATgetArgument(a_9, 0);
          y_8 :
          if(((ATgetType(c_9) == AT_LIST) && ATisEmpty(c_9)))
            {
              {
                ATerm f_9 = NULL;
                ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
                t = not_null(z_8);
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = term_t_6;
                    return(t);
                  }
                  t = rewrite_1(t, f_0);
                  {
                    g_9 = t;
                    u_8 :
                    if(match_cons(g_9, sym_Defined_2))
                      {
                        h_9 = ATgetArgument(g_9, 0);
                        i_9 = ATgetArgument(g_9, 1);
                        v_8 :
                        if(match_string(h_9, "k_0"))
                          {
                            if(((f_9 != NULL) && (f_9 != i_9)))
                              _fail(i_9);
                            else
                              f_9 = i_9;
                          }
                        else
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
                  t = not_null(f_9);
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
ATerm topdown_1 (ATerm t, ATerm h_95 (ATerm))
{
  t = h_95(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, h_95);
      return(t);
    }
    t = _all(t, p_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  a_10 = t;
  n_9 :
  if(match_cons(a_10, sym__2))
    {
      b_10 = ATgetArgument(a_10, 0);
      i_10 = ATgetArgument(a_10, 1);
      o_9 :
      if(match_cons(b_10, sym_VarDec_2))
        {
          c_10 = ATgetArgument(b_10, 0);
          d_10 = ATgetArgument(b_10, 1);
          p_9 :
          if(match_cons(d_10, sym_FunType_2))
            {
              e_10 = ATgetArgument(d_10, 0);
              h_10 = ATgetArgument(d_10, 1);
              q_9 :
              if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
                {
                  f_10 = ATgetFirst((ATermList) e_10);
                  g_10 = (ATerm) ATgetNext((ATermList) e_10);
                  r_9 :
                  if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
                    {
                      v_9 = ATgetFirst((ATermList) g_10);
                      w_9 = (ATerm) ATgetNext((ATermList) g_10);
                      s_9 :
                      if(match_cons(i_10, sym_Call_2))
                        {
                          x_9 = ATgetArgument(i_10, 0);
                          z_9 = ATgetArgument(i_10, 1);
                          t_9 :
                          if(match_cons(x_9, sym_SVar_1))
                            {
                              y_9 = ATgetArgument(x_9, 0);
                              u_9 :
                              if(((ATgetType(z_9) == AT_LIST) && ATisEmpty(z_9)))
                                {
                                  {
                                    ATerm u_6;
                                    u_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), term_r_6), (ATerm) ATmakeAppl(sym_Defined_2, term_v_6, not_null(y_9)));
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = term_s_6;
                                          return(t);
                                        }
                                        t = assert_1(t, q_0);
                                      }
                                    }
                                    t = u_6;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(g_10) == AT_LIST) && ATisEmpty(g_10)))
                        {
                          {
                            ATerm w_6;
                            w_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_6, not_null(i_10)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_t_6;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = w_6;
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
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_s_6;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
      u_10 = t;
      q_10 :
      if(match_cons(u_10, sym__3))
        {
          v_10 = ATgetArgument(u_10, 0);
          w_10 = ATgetArgument(u_10, 1);
          x_10 = ATgetArgument(u_10, 2);
          {
            if(((r_10 != NULL) && (r_10 != v_10)))
              _fail(v_10);
            else
              r_10 = v_10;
            {
              if(((s_10 != NULL) && (s_10 != w_10)))
                _fail(w_10);
              else
                s_10 = w_10;
              {
                if(((t_10 != NULL) && (t_10 != x_10)))
                  _fail(x_10);
                else
                  t_10 = x_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), not_null(s_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(t_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm y_6 = t;
                          int z_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_7 = t;
                              int b_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SubsArgCall1_0(t);
                                  LocalPopChoice(b_7);
                                }
                              else
                                {
                                  t = a_7;
                                  t = SubsArgCall2_0(t);
                                }
                              LocalPopChoice(z_6);
                            }
                          else
                            {
                              t = y_6;
                              {
                              }
                            }
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
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
    {
      c_11 = ATgetFirst((ATermList) b_11);
      d_11 = (ATerm) ATgetNext((ATermList) b_11);
      t = not_null(c_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        t = split_2(t, _id, l_94);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
            m_11 = t;
            h_11 :
            if(match_cons(m_11, sym__2))
              {
                n_11 = ATgetArgument(m_11, 0);
                r_11 = ATgetArgument(m_11, 1);
                i_11 :
                if(match_cons(n_11, sym_SDef_3))
                  {
                    o_11 = ATgetArgument(n_11, 0);
                    p_11 = ATgetArgument(n_11, 1);
                    q_11 = ATgetArgument(n_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_11), not_null(p_11), not_null(q_11));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, y_0);
        }
        return(t);
      }
      t = Let_2(t, x_0, _id);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = split_2(t, _id, l_94);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                  v_11 = t;
                  k_11 :
                  if(match_cons(v_11, sym__2))
                    {
                      w_11 = ATgetArgument(v_11, 0);
                      z_11 = ATgetArgument(v_11, 1);
                      l_11 :
                      if(match_cons(w_11, sym_VarDec_2))
                        {
                          x_11 = ATgetArgument(w_11, 0);
                          y_11 = ATgetArgument(w_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_11), not_null(y_11));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, a_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, z_0, _id);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            {
              ATerm b_1 (ATerm t)
              {
                t = l_94(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, b_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Rec_2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = n_83(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = o_83(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
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
ATerm Let_2 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm q_13 = NULL,s_13 = NULL;
        ATerm r_13 = NULL;
        t = SSLgetAnnotations(not_null(k_13));
        {
          r_13 = t;
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
        }
        {
          t = not_null(l_13);
          {
            ATerm u_13 = NULL;
            t = p_83(t);
            {
              s_13 = t;
              {
                t = not_null(m_13);
                {
                  ATerm w_13 = NULL;
                  t = q_83(t);
                  {
                    u_13 = t;
                    {
                      ATerm x_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_13), not_null(u_13)), not_null(q_13));
                      {
                        x_13 = t;
                        if(((w_13 != NULL) && (w_13 != x_13)))
                          _fail(x_13);
                        else
                          w_13 = x_13;
                      }
                      t = not_null(w_13);
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
ATerm sboundin_3 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, m_94, m_94);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, o_94, o_94, m_94);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = Rec_2(t, o_94, m_94);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Rec_2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_SDef_3))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      s_14 = ATgetArgument(p_14, 2);
      {
        t = not_null(r_14);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
            w_14 = t;
            n_14 :
            if(match_cons(w_14, sym_VarDec_2))
              {
                x_14 = ATgetArgument(w_14, 0);
                y_14 = ATgetArgument(w_14, 1);
                t = not_null(x_14);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_1);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Let_2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        t = not_null(h_15);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
            l_15 = t;
            e_15 :
            if(match_cons(l_15, sym_SDef_3))
              {
                m_15 = ATgetArgument(l_15, 0);
                n_15 = ATgetArgument(l_15, 1);
                o_15 = ATgetArgument(l_15, 2);
                t = not_null(m_15);
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
ATerm srename_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, e_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm h_94 (ATerm))
{
  t = Scope_2(t, h_94, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_DynamicRules_1))
    {
      a_16 = ATgetArgument(z_15, 0);
      {
        ATerm d_16 = NULL,f_16 = NULL;
        ATerm e_16 = NULL;
        t = SSLgetAnnotations(not_null(z_15));
        {
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
        }
        {
          t = not_null(a_16);
          {
            ATerm h_16 = NULL;
            t = i_85(t);
            {
              f_16 = t;
              {
                ATerm i_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(f_16)), not_null(d_16));
                {
                  i_16 = t;
                  if(((h_16 != NULL) && (h_16 != i_16)))
                    _fail(i_16);
                  else
                    h_16 = i_16;
                }
                t = not_null(h_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm))
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_94, i_94);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      t = DynamicRules_1(t, i_94);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym_DynamicRules_1))
    {
      q_16 = ATgetArgument(p_16, 0);
      {
        t = not_null(q_16);
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
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_Var_1))
    {
      w_16 = ATgetArgument(v_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_105 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        t = not_null(c_17);
        {
          ATerm h_17 (ATerm t)
          {
            ATerm r_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_17);
                LocalPopChoice(s_7);
              }
            else
              {
                t = r_7;
                {
                  ATerm t_7 = t;
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(d_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_105, f_1);
                      t = h_17(t);
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = t_7;
                      t = Cons_2(t, _id, h_17);
                    }
                }
              }
            return(t);
          }
          t = h_17(t);
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      if(((l_17 != NULL) && (l_17 != m_17)))
        _fail(m_17);
      else
        l_17 = m_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_105 (ATerm), ATerm y_105 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
    {
      t_17 = ATgetFirst((ATermList) s_17);
      u_17 = (ATerm) ATgetNext((ATermList) s_17);
      {
        t = y_105(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm x_17 = NULL;
            x_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(x_17));
              t = x_105(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(u_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm p_105 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm j_18 (ATerm t)
          {
            ATerm x_7 = t;
            int y_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(y_7);
              }
            else
              {
                t = x_7;
                {
                  ATerm z_7 = t;
                  int a_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(f_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_105, h_1);
                      t = j_18(t);
                      LocalPopChoice(a_8);
                    }
                  else
                    {
                      t = z_7;
                      t = Cons_2(t, _id, j_18);
                    }
                }
              }
            return(t);
          }
          t = j_18(t);
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
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  l_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      m_18 :
      if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
        {
          q_18 = ATgetFirst((ATermList) p_18);
          r_18 = (ATerm) ATgetNext((ATermList) p_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_18)), not_null(q_18)), not_null(r_18));
        }
      else
        {
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
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  e_19 :
  if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
    {
      h_19 = ATgetFirst((ATermList) g_19);
      k_19 = (ATerm) ATgetNext((ATermList) g_19);
      f_19 :
      if(match_cons(h_19, sym__2))
        {
          i_19 = ATgetArgument(h_19, 0);
          j_19 = ATgetArgument(h_19, 1);
          {
            ATerm o_19 = NULL,p_19 = NULL,v_19 = NULL,b_20 = NULL;
            ATerm j_8;
            j_8 = t;
            {
              ATerm q_19 = NULL;
              ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
              t = not_null(j_19);
              {
                q_19 = t;
                {
                  t = SSL_explode_term(not_null(q_19));
                  {
                    s_19 = t;
                    z_18 :
                    if(match_cons(s_19, sym__2))
                      {
                        t_19 = ATgetArgument(s_19, 0);
                        u_19 = ATgetArgument(s_19, 1);
                        {
                          if(((o_19 != NULL) && (o_19 != t_19)))
                            _fail(t_19);
                          else
                            o_19 = t_19;
                          if(((p_19 != NULL) && (p_19 != u_19)))
                            _fail(u_19);
                          else
                            p_19 = u_19;
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
            t = j_8;
            {
              ATerm k_8;
              k_8 = t;
              {
                ATerm w_19 = NULL;
                ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
                t = not_null(i_19);
                {
                  w_19 = t;
                  {
                    t = SSL_explode_term(not_null(w_19));
                    {
                      y_19 = t;
                      c_19 :
                      if(match_cons(y_19, sym__2))
                        {
                          z_19 = ATgetArgument(y_19, 0);
                          a_20 = ATgetArgument(y_19, 1);
                          {
                            if(((o_19 != NULL) && (o_19 != z_19)))
                              _fail(z_19);
                            else
                              o_19 = z_19;
                            if(((v_19 != NULL) && (v_19 != a_20)))
                              _fail(a_20);
                            else
                              v_19 = a_20;
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
              t = k_8;
              {
                ATerm c_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(p_19));
                {
                  t = zip_1(t, _id);
                  {
                    c_20 = t;
                    if(((b_20 != NULL) && (b_20 != c_20)))
                      _fail(c_20);
                    else
                      b_20 = c_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(k_19));
                  {
                    ATerm l_8 = t;
                    int q_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(q_8);
                      }
                    else
                      {
                        t = l_8;
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
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  k_20 :
  if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
    {
      n_20 = ATgetFirst((ATermList) m_20);
      q_20 = (ATerm) ATgetNext((ATermList) m_20);
      l_20 :
      if(match_cons(n_20, sym__2))
        {
          o_20 = ATgetArgument(n_20, 0);
          p_20 = ATgetArgument(n_20, 1);
          {
            ATerm s_20 = NULL;
            if(((o_20 != NULL) && (o_20 != p_20)))
              _fail(p_20);
            else
              o_20 = p_20;
            {
              if(((s_20 != NULL) && (s_20 != q_20)))
                _fail(q_20);
              else
                s_20 = q_20;
              t = not_null(s_20);
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
ATerm while_not_2 (ATerm t, ATerm h_112 (ATerm), ATerm i_112 (ATerm))
{
  ATerm u_20 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_112(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        {
          t = i_112(t);
          t = u_20(t);
        }
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm))
{
  t = k_112(t);
  t = while_not_2(t, l_112, m_112);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm t_8 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm w_20 = NULL;
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_20));
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm e_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm k_9 = t;
              int l_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(l_9);
                }
              else
                {
                  t = k_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, l_1);
            LocalPopChoice(j_9);
          }
        else
          {
            t = e_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, i_1, j_1, k_1);
      LocalPopChoice(d_9);
    }
  else
    {
      t = t_8;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_21 (ATerm t)
  {
    ATerm m_9 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = m_9;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_21 = NULL;
              ATerm m_10;
              m_10 = t;
              {
                ATerm b_21 = NULL;
                t = d_110(t);
                {
                  b_21 = t;
                  if(((a_21 != NULL) && (a_21 != b_21)))
                    _fail(b_21);
                  else
                    a_21 = b_21;
                }
              }
              t = m_10;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = not_null(a_21);
                    return(t);
                  }
                  t = split_2(t, c_21, o_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm n_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = e_110(t, m_1, c_21, n_1);
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm q_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, p_1, q_1, _id);
                }
              }
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm s_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, r_1, s_1, c_21);
              }
            }
        }
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, t_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  g_21 :
  if(match_cons(l_21, sym_LRule_1))
    {
      m_21 = ATgetArgument(l_21, 0);
      h_21 :
      if(match_cons(m_21, sym_Rule_3))
        {
          i_21 = ATgetArgument(m_21, 0);
          j_21 = ATgetArgument(m_21, 1);
          k_21 = ATgetArgument(m_21, 2);
          {
            t = not_null(i_21);
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
      if(match_cons(l_21, sym_Scope_2))
        {
          m_21 = ATgetArgument(l_21, 0);
          n_21 = ATgetArgument(l_21, 1);
          t = not_null(m_21);
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
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Var_1))
    {
      f_22 = ATgetArgument(e_22, 0);
      {
        ATerm p_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 = NULL,k_22 = NULL;
            ATerm j_22 = NULL;
            t = SSLgetAnnotations(not_null(e_22));
            {
              j_22 = t;
              if(((i_22 != NULL) && (i_22 != j_22)))
                _fail(j_22);
              else
                i_22 = j_22;
            }
            {
              t = not_null(f_22);
              {
                ATerm m_22 = NULL;
                t = o_0(t);
                {
                  k_22 = t;
                  {
                    ATerm n_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_22)), not_null(i_22));
                    {
                      n_22 = t;
                      if(((m_22 != NULL) && (m_22 != n_22)))
                        _fail(n_22);
                      else
                        m_22 = n_22;
                    }
                    t = not_null(m_22);
                  }
                }
              }
            }
            LocalPopChoice(y_10);
          }
        else
          {
            t = p_10;
            {
              ATerm q_22 = NULL,s_22 = NULL;
              ATerm r_22 = NULL;
              t = SSLgetAnnotations(not_null(e_22));
              {
                r_22 = t;
                if(((q_22 != NULL) && (q_22 != r_22)))
                  _fail(r_22);
                else
                  q_22 = r_22;
              }
              {
                t = not_null(f_22);
                {
                  ATerm u_22 = NULL;
                  t = o_0(t);
                  {
                    s_22 = t;
                    {
                      ATerm v_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_22)), not_null(q_22));
                      {
                        v_22 = t;
                        if(((u_22 != NULL) && (u_22 != v_22)))
                          _fail(v_22);
                        else
                          u_22 = v_22;
                      }
                      t = not_null(u_22);
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
ATerm DistBinding_2 (ATerm t, ATerm k_108 (ATerm), ATerm l_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym__3))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      l_23 = ATgetArgument(i_23, 2);
      {
        t = not_null(j_23);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm p_23 = NULL;
            p_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), not_null(l_23));
              t = k_108(t);
            }
            return(t);
          }
          ATerm v_1 (ATerm t)
          {
            ATerm r_23 = NULL;
            r_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(k_23));
              t = k_108(t);
            }
            return(t);
          }
          t = l_108(t, u_1, v_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm e_108 (ATerm), ATerm f_108 (ATerm, ATerm (ATerm)))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,q_24 = NULL;
        ATerm z_10;
        z_10 = t;
        {
          ATerm l_24 = NULL;
          t = not_null(e_24);
          {
            ATerm m_24 = NULL;
            t = e_108(t);
            {
              l_24 = t;
              {
                if(((i_24 != NULL) && (i_24 != l_24)))
                  _fail(l_24);
                else
                  i_24 = l_24;
                {
                  ATerm n_24 = NULL,p_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    m_24 = t;
                    {
                      if(((j_24 != NULL) && (j_24 != m_24)))
                        _fail(m_24);
                      else
                        j_24 = m_24;
                      {
                        ATerm o_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(j_24));
                        {
                          t = zip_1(t, _id);
                          {
                            o_24 = t;
                            if(((n_24 != NULL) && (n_24 != o_24)))
                              _fail(o_24);
                            else
                              n_24 = o_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(f_24));
                          {
                            ATerm e_11 = t;
                            int f_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(f_11);
                              }
                            else
                              {
                                t = e_11;
                                t = conc_more_lists_0(t);
                              }
                            {
                              p_24 = t;
                              if(((k_24 != NULL) && (k_24 != p_24)))
                                _fail(p_24);
                              else
                                k_24 = p_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_10;
        {
          ATerm r_24 = NULL;
          t = not_null(e_24);
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(j_24);
              return(t);
            }
            t = f_108(t, w_1);
            {
              r_24 = t;
              if(((q_24 != NULL) && (q_24 != r_24)))
                _fail(r_24);
              else
                q_24 = r_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(q_24), not_null(f_24), not_null(k_24));
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      a_25 :
      if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
        {
          e_25 = ATgetFirst((ATermList) d_25);
          f_25 = (ATerm) ATgetNext((ATermList) d_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(f_25));
        }
      else
        {
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
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  n_25 = t;
  k_25 :
  if(match_cons(n_25, sym__2))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      l_25 :
      if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
        {
          q_25 = ATgetFirst((ATermList) p_25);
          t_25 = (ATerm) ATgetNext((ATermList) p_25);
          m_25 :
          if(match_cons(q_25, sym__2))
            {
              r_25 = ATgetArgument(q_25, 0);
              s_25 = ATgetArgument(q_25, 1);
              {
                ATerm v_25 = NULL;
                if(((o_25 != NULL) && (o_25 != r_25)))
                  _fail(r_25);
                else
                  o_25 = r_25;
                {
                  if(((v_25 != NULL) && (v_25 != s_25)))
                    _fail(s_25);
                  else
                    v_25 = s_25;
                  t = not_null(v_25);
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
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm p_108 (ATerm, ATerm (ATerm)))
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        t = not_null(b_26);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm y_1 (ATerm t)
            {
              t = not_null(c_26);
              return(t);
            }
            t = split_2(t, _id, y_1);
            t = lookup_0(t);
            return(t);
          }
          t = p_108(t, x_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm i_109 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        t = not_null(k_26);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm o_26 = NULL;
            o_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(l_26));
              t = i_109(t);
            }
            return(t);
          }
          t = _all(t, z_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = all_dist_1(t, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_107 (ATerm, ATerm (ATerm)), ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_108 (ATerm, ATerm (ATerm)))
{
  ATerm u_26 = NULL;
  u_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), (ATerm) ATempty);
    {
      ATerm x_26 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm u_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, z_107);
              LocalPopChoice(a_12);
            }
          else
            {
              t = u_11;
              {
                t = RnBinding_2(t, a_108, c_108);
                t = DistBinding_2(t, x_26, b_108);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, a_2);
        return(t);
      }
      t = x_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm y_26 (ATerm t, ATerm z_26 (ATerm))
  {
    t = Scope_2(t, z_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, y_26);
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
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  ATerm u_29 (ATerm t)
  {
    ATerm h_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        h_28 = t;
        g_27 :
        if(match_cons(h_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_c_12;
    return(t);
  }
  ATerm v_29 (ATerm t)
  {
    ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
    ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
    t = not_null(b_28);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        o_28 = t;
        m_27 :
        if(match_cons(o_28, sym_Defined_2))
          {
            p_28 = ATgetArgument(o_28, 0);
            q_28 = ATgetArgument(o_28, 1);
            n_27 :
            if(match_string(p_28, "g_0"))
              {
                ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
                if(((k_28 != NULL) && (k_28 != q_28)))
                  _fail(q_28);
                else
                  k_28 = q_28;
                {
                  t = not_null(k_28);
                  {
                    t = strename_0(t);
                    {
                      r_28 = t;
                      k_27 :
                      if(match_cons(r_28, sym_SDef_3))
                        {
                          s_28 = ATgetArgument(r_28, 0);
                          t_28 = ATgetArgument(r_28, 1);
                          w_28 = ATgetArgument(r_28, 2);
                          l_27 :
                          if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
                            {
                              u_28 = ATgetFirst((ATermList) t_28);
                              v_28 = (ATerm) ATgetNext((ATermList) t_28);
                              {
                                ATerm x_28 = NULL;
                                if(((d_28 != NULL) && (d_28 != s_28)))
                                  _fail(s_28);
                                else
                                  d_28 = s_28;
                                {
                                  if(((l_28 != NULL) && (l_28 != t_28)))
                                    _fail(t_28);
                                  else
                                    l_28 = t_28;
                                  {
                                    if(((m_28 != NULL) && (m_28 != w_28)))
                                      _fail(w_28);
                                    else
                                      m_28 = w_28;
                                    {
                                      t = new_0(t);
                                      {
                                        x_28 = t;
                                        {
                                          if(((n_28 != NULL) && (n_28 != x_28)))
                                            _fail(x_28);
                                          else
                                            n_28 = x_28;
                                          {
                                            ATerm d_12;
                                            d_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6), term_c_12);
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = term_b_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, d_2);
                                              }
                                            }
                                            t = d_12;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_28), not_null(l_28), not_null(m_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm w_29 (ATerm t)
  {
    ATerm a_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        a_29 = t;
        p_27 :
        if(match_cons(a_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_c_12;
    return(t);
  }
  ATerm x_29 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, f_2);
      {
        i_29 = t;
        u_27 :
        if(match_cons(i_29, sym_Defined_2))
          {
            j_29 = ATgetArgument(i_29, 0);
            k_29 = ATgetArgument(i_29, 1);
            v_27 :
            if(match_string(j_29, "d_0"))
              {
                ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
                if(((e_29 != NULL) && (e_29 != k_29)))
                  _fail(k_29);
                else
                  e_29 = k_29;
                {
                  t = not_null(e_29);
                  {
                    t = strename_0(t);
                    {
                      l_29 = t;
                      t_27 :
                      if(match_cons(l_29, sym_SDef_3))
                        {
                          m_29 = ATgetArgument(l_29, 0);
                          n_29 = ATgetArgument(l_29, 1);
                          o_29 = ATgetArgument(l_29, 2);
                          {
                            ATerm p_29 = NULL;
                            if(((d_28 != NULL) && (d_28 != m_29)))
                              _fail(m_29);
                            else
                              d_28 = m_29;
                            {
                              if(((f_29 != NULL) && (f_29 != n_29)))
                                _fail(n_29);
                              else
                                f_29 = n_29;
                              {
                                if(((g_29 != NULL) && (g_29 != o_29)))
                                  _fail(o_29);
                                else
                                  g_29 = o_29;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_29), not_null(e_28), not_null(g_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      p_29 = t;
                                      {
                                        if(((h_29 != NULL) && (h_29 != p_29)))
                                          _fail(p_29);
                                        else
                                          h_29 = p_29;
                                        {
                                          ATerm e_12;
                                          e_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6), term_c_12);
                                            {
                                              ATerm g_2 (ATerm t)
                                              {
                                                t = term_b_12;
                                                return(t);
                                              }
                                              t = assert_1(t, g_2);
                                            }
                                          }
                                          t = e_12;
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
    t = not_null(h_29);
    return(t);
  }
  ATerm y_29 (ATerm t)
  {
    ATerm t_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_28)), term_r_6);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, h_2);
      {
        t_29 = t;
        x_27 :
        if(match_cons(t_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_c_12;
    return(t);
  }
  b_28 = t;
  y_27 :
  if(match_cons(b_28, sym_Call_2))
    {
      c_28 = ATgetArgument(b_28, 0);
      e_28 = ATgetArgument(b_28, 1);
      z_27 :
      if(match_cons(c_28, sym_SVar_1))
        {
          d_28 = ATgetArgument(c_28, 0);
          a_28 :
          if(((ATgetType(e_28) == AT_LIST) && ATisEmpty(e_28)))
            {
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_29(t);
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = f_12;
                    {
                      ATerm h_12 = t;
                      int i_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_29(t);
                          LocalPopChoice(i_12);
                        }
                      else
                        {
                          t = h_12;
                          {
                            ATerm j_12 = t;
                            int o_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_29(t);
                                LocalPopChoice(o_12);
                              }
                            else
                              {
                                t = j_12;
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_29(t);
                                      LocalPopChoice(q_12);
                                    }
                                  else
                                    {
                                      t = p_12;
                                      t = y_29(t);
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
              ATerm u_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_29(t);
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = u_12;
                  {
                    ATerm z_12 = t;
                    int a_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_29(t);
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
                              t = x_29(t);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
                              t = y_29(t);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_SDef_3))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      n_30 = ATgetArgument(k_30, 2);
      {
        ATerm d_13;
        d_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_30)), term_r_6), term_c_12);
          {
            ATerm i_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = assert_1(t, i_2);
          }
        }
        t = d_13;
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
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
    {
      t_30 = ATgetFirst((ATermList) s_30);
      u_30 = (ATerm) ATgetNext((ATermList) s_30);
      t = not_null(u_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        ATerm e_13;
        e_13 = t;
        {
          ATerm f_31 = NULL;
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(c_31));
          {
            ATerm f_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_13);
              }
            else
              {
                t = f_13;
                t = (ATerm) ATempty;
              }
            {
              g_31 = t;
              if(((f_31 != NULL) && (f_31 != g_31)))
                _fail(g_31);
              else
                f_31 = g_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_31), not_null(c_31), not_null(f_31));
            t = table_put_0(t);
          }
        }
        t = e_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_115 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  ATerm h_13;
  h_13 = t;
  {
    ATerm q_31 = NULL;
    ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
    t = d_115(t);
    {
      q_31 = t;
      {
        if(((p_31 != NULL) && (p_31 != q_31)))
          _fail(q_31);
        else
          p_31 = q_31;
        {
          ATerm i_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), term_o_13);
              t = table_get_0(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = i_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_31 = t;
            m_31 :
            if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
              {
                s_31 = ATgetFirst((ATermList) r_31);
                t_31 = (ATerm) ATgetNext((ATermList) r_31);
                {
                  if(((o_31 != NULL) && (o_31 != s_31)))
                    _fail(s_31);
                  else
                    o_31 = s_31;
                  {
                    if(((n_31 != NULL) && (n_31 != t_31)))
                      _fail(t_31);
                    else
                      n_31 = t_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_31), term_o_13, not_null(n_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_31);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm u_31 = NULL;
                              u_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), not_null(u_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
  t = h_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  ATerm p_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_98(t);
      t = w_98(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = p_13;
      {
        t = w_98(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_115 (ATerm))
{
  ATerm b_32 = NULL;
  ATerm v_13;
  v_13 = t;
  {
    ATerm c_32 = NULL;
    ATerm d_32 = NULL;
    t = c_115(t);
    {
      c_32 = t;
      {
        if(((b_32 != NULL) && (b_32 != c_32)))
          _fail(c_32);
        else
          b_32 = c_32;
        {
          ATerm e_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), term_o_13);
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATempty;
              }
            {
              e_32 = t;
              if(((d_32 != NULL) && (d_32 != e_32)))
                _fail(e_32);
              else
                d_32 = e_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_32), term_o_13, (ATerm) ATinsert(CheckATermList(not_null(d_32)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_115 (ATerm), ATerm f_115 (ATerm))
{
  t = begin_scope_1(t, e_115);
  {
    ATerm k_2 (ATerm t)
    {
      t = end_scope_1(t, e_115);
      return(t);
    }
    t = restore_always_2(t, f_115, k_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = repeat_2(t, InlineCall_0, _id);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, l_2, m_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_115 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym__2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
        ATerm c_14;
        c_14 = t;
        {
          ATerm f_35 = NULL;
          ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
          t = g_115(t);
          {
            f_35 = t;
            {
              if(((e_34 != NULL) && (e_34 != f_35)))
                _fail(f_35);
              else
                e_34 = f_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_34), not_null(o_32), not_null(p_32));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_14 = t;
                    int i_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_o_13);
                        t = table_get_0(t);
                        LocalPopChoice(i_14);
                      }
                    else
                      {
                        t = d_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_35 = t;
                      l_32 :
                      if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
                        {
                          h_35 = ATgetFirst((ATermList) g_35);
                          i_35 = (ATerm) ATgetNext((ATermList) g_35);
                          {
                            if(((f_34 != NULL) && (f_34 != h_35)))
                              _fail(h_35);
                            else
                              f_34 = h_35;
                            {
                              if(((g_34 != NULL) && (g_34 != i_35)))
                                _fail(i_35);
                              else
                                g_34 = i_35;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_34), term_o_13, (ATerm) ATinsert(CheckATermList(not_null(g_34)), (ATerm) ATinsert(CheckATermList(not_null(f_34)), not_null(o_32))));
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
        t = c_14;
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
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_SDef_3))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      r_35 = ATgetArgument(o_35, 2);
      {
        ATerm j_14;
        j_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_35)), term_r_6), (ATerm) ATmakeAppl(sym_Defined_2, term_k_14, not_null(o_35)));
          {
            ATerm n_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = assert_1(t, n_2);
          }
        }
        t = j_14;
        {
          ATerm l_14;
          l_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_35)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_14, not_null(o_35)));
            {
              ATerm o_2 (ATerm t)
              {
                t = term_b_12;
                return(t);
              }
              t = assert_1(t, o_2);
            }
          }
          t = l_14;
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
  ATerm t_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm))
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_106(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
        a_36 = t;
        z_35 :
        if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
          {
            b_36 = ATgetFirst((ATermList) a_36);
            c_36 = (ATerm) ATgetNext((ATermList) a_36);
            {
              ATerm f_36 = NULL,h_36 = NULL;
              ATerm z_14;
              z_14 = t;
              {
                ATerm g_36 = NULL;
                t = not_null(b_36);
                {
                  t = o_106(t);
                  {
                    g_36 = t;
                    if(((f_36 != NULL) && (f_36 != g_36)))
                      _fail(g_36);
                    else
                      f_36 = g_36;
                  }
                }
              }
              t = z_14;
              {
                ATerm i_36 = NULL;
                t = not_null(c_36);
                {
                  t = foldr_3(t, m_106, n_106, o_106);
                  {
                    i_36 = t;
                    if(((h_36 != NULL) && (h_36 != i_36)))
                      _fail(i_36);
                    else
                      h_36 = i_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36));
                  t = n_106(t);
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
ATerm crush_3 (ATerm t, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  ATerm q_36 = NULL;
  ATerm s_36 = NULL;
  q_36 = t;
  {
    ATerm t_36 = NULL;
    ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
    t = not_null(q_36);
    {
      t_36 = t;
      {
        t = SSL_explode_term(not_null(t_36));
        {
          v_36 = t;
          p_36 :
          if(match_cons(v_36, sym__2))
            {
              w_36 = ATgetArgument(v_36, 0);
              x_36 = ATgetArgument(v_36, 1);
              if(((s_36 != NULL) && (s_36 != x_36)))
                _fail(x_36);
              else
                s_36 = x_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_36);
      t = foldr_3(t, k_105, l_105, m_105);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        t = term_c_15;
        return(t);
      }
      t = crush_3(t, p_2, add_0, term_size_0);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm b_37 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            t = term_c_15;
            return(t);
          }
          t = crush_3(t, q_2, add_0, b_37);
          return(t);
        }
        t = b_37(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  h_37 :
  if(match_cons(i_37, sym_LChoice_2))
    {
      j_37 = ATgetArgument(i_37, 0);
      k_37 = ATgetArgument(i_37, 1);
      {
        ATerm o_37 = NULL,q_37 = NULL;
        ATerm p_37 = NULL;
        t = SSLgetAnnotations(not_null(i_37));
        {
          p_37 = t;
          if(((o_37 != NULL) && (o_37 != p_37)))
            _fail(p_37);
          else
            o_37 = p_37;
        }
        {
          t = not_null(j_37);
          {
            ATerm s_37 = NULL;
            t = c_83(t);
            {
              q_37 = t;
              {
                t = not_null(k_37);
                {
                  ATerm u_37 = NULL;
                  t = d_83(t);
                  {
                    s_37 = t;
                    {
                      ATerm v_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_37), not_null(s_37)), not_null(o_37));
                      {
                        v_37 = t;
                        if(((u_37 != NULL) && (u_37 != v_37)))
                          _fail(v_37);
                        else
                          u_37 = v_37;
                      }
                      t = not_null(u_37);
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
ATerm Choice_2 (ATerm t, ATerm a_83 (ATerm), ATerm b_83 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Choice_2))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      {
        ATerm n_38 = NULL,p_38 = NULL;
        ATerm o_38 = NULL;
        t = SSLgetAnnotations(not_null(h_38));
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
        {
          t = not_null(i_38);
          {
            ATerm r_38 = NULL;
            t = a_83(t);
            {
              p_38 = t;
              {
                t = not_null(j_38);
                {
                  ATerm x_38 = NULL;
                  t = b_83(t);
                  {
                    r_38 = t;
                    {
                      ATerm y_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_38), not_null(r_38)), not_null(n_38));
                      {
                        y_38 = t;
                        if(((x_38 != NULL) && (x_38 != y_38)))
                          _fail(y_38);
                        else
                          x_38 = y_38;
                      }
                      t = not_null(x_38);
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
ATerm Cong_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym_Cong_2))
    {
      n_39 = ATgetArgument(m_39, 0);
      o_39 = ATgetArgument(m_39, 1);
      {
        ATerm s_39 = NULL,u_39 = NULL;
        ATerm t_39 = NULL;
        t = SSLgetAnnotations(not_null(m_39));
        {
          t_39 = t;
          if(((s_39 != NULL) && (s_39 != t_39)))
            _fail(t_39);
          else
            s_39 = t_39;
        }
        {
          t = not_null(n_39);
          {
            ATerm w_39 = NULL;
            t = q_82(t);
            {
              u_39 = t;
              {
                t = not_null(o_39);
                {
                  ATerm y_39 = NULL;
                  t = r_82(t);
                  {
                    w_39 = t;
                    {
                      ATerm z_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(u_39), not_null(w_39)), not_null(s_39));
                      {
                        z_39 = t;
                        if(((y_39 != NULL) && (y_39 != z_39)))
                          _fail(z_39);
                        else
                          y_39 = z_39;
                      }
                      t = not_null(y_39);
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
ATerm Match_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Match_1))
    {
      q_40 = ATgetArgument(p_40, 0);
      {
        ATerm t_40 = NULL,v_40 = NULL;
        ATerm u_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          u_40 = t;
          if(((t_40 != NULL) && (t_40 != u_40)))
            _fail(u_40);
          else
            t_40 = u_40;
        }
        {
          t = not_null(q_40);
          {
            ATerm x_40 = NULL;
            t = h_82(t);
            {
              v_40 = t;
              {
                ATerm y_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(v_40)), not_null(t_40));
                {
                  y_40 = t;
                  if(((x_40 != NULL) && (x_40 != y_40)))
                    _fail(y_40);
                  else
                    x_40 = y_40;
                }
                t = not_null(x_40);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm y_82 (ATerm), ATerm z_82 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym_Seq_2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        ATerm u_41 = NULL,w_41 = NULL;
        ATerm v_41 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          v_41 = t;
          if(((u_41 != NULL) && (u_41 != v_41)))
            _fail(v_41);
          else
            u_41 = v_41;
        }
        {
          t = not_null(p_41);
          {
            ATerm y_41 = NULL;
            t = y_82(t);
            {
              w_41 = t;
              {
                t = not_null(q_41);
                {
                  ATerm a_42 = NULL;
                  t = z_82(t);
                  {
                    y_41 = t;
                    {
                      ATerm b_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(w_41), not_null(y_41)), not_null(u_41));
                      {
                        b_42 = t;
                        if(((a_42 != NULL) && (a_42 != b_42)))
                          _fail(b_42);
                        else
                          a_42 = b_42;
                      }
                      t = not_null(a_42);
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
ATerm Scope_2 (ATerm t, ATerm l_82 (ATerm), ATerm m_82 (ATerm))
{
  ATerm p_42 = NULL,q_42 = NULL,v_42 = NULL;
  p_42 = t;
  m_42 :
  if(match_cons(p_42, sym_Scope_2))
    {
      q_42 = ATgetArgument(p_42, 0);
      v_42 = ATgetArgument(p_42, 1);
      {
        ATerm c_43 = NULL,e_43 = NULL;
        ATerm d_43 = NULL;
        t = SSLgetAnnotations(not_null(p_42));
        {
          d_43 = t;
          if(((c_43 != NULL) && (c_43 != d_43)))
            _fail(d_43);
          else
            c_43 = d_43;
        }
        {
          t = not_null(q_42);
          {
            ATerm g_43 = NULL;
            t = l_82(t);
            {
              e_43 = t;
              {
                t = not_null(v_42);
                {
                  ATerm i_43 = NULL;
                  t = m_82(t);
                  {
                    g_43 = t;
                    {
                      ATerm n_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_43), not_null(g_43)), not_null(c_43));
                      {
                        n_43 = t;
                        if(((i_43 != NULL) && (i_43 != n_43)))
                          _fail(n_43);
                        else
                          i_43 = n_43;
                      }
                      t = not_null(i_43);
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
ATerm Build_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm c_44 = NULL,d_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym_Build_1))
    {
      d_44 = ATgetArgument(c_44, 0);
      {
        ATerm g_44 = NULL,i_44 = NULL;
        ATerm h_44 = NULL;
        t = SSLgetAnnotations(not_null(c_44));
        {
          h_44 = t;
          if(((g_44 != NULL) && (g_44 != h_44)))
            _fail(h_44);
          else
            g_44 = h_44;
        }
        {
          t = not_null(d_44);
          {
            ATerm k_44 = NULL;
            t = i_82(t);
            {
              i_44 = t;
              {
                ATerm l_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(i_44)), not_null(g_44));
                {
                  l_44 = t;
                  if(((k_44 != NULL) && (k_44 != l_44)))
                    _fail(l_44);
                  else
                    k_44 = l_44;
                }
                t = not_null(k_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  u_44 :
  if(match_cons(v_44, sym_SVar_1))
    {
      w_44 = ATgetArgument(v_44, 0);
      {
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = SSLgetAnnotations(not_null(v_44));
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
        {
          t = not_null(w_44);
          {
            ATerm o_45 = NULL;
            t = m_83(t);
            {
              b_45 = t;
              {
                ATerm r_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_45)), not_null(z_44));
                {
                  r_45 = t;
                  if(((o_45 != NULL) && (o_45 != r_45)))
                    _fail(r_45);
                  else
                    o_45 = r_45;
                }
                t = not_null(o_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm b_84 (ATerm), ATerm c_84 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Call_2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        ATerm l_46 = NULL,n_46 = NULL;
        ATerm m_46 = NULL;
        t = SSLgetAnnotations(not_null(f_46));
        {
          m_46 = t;
          if(((l_46 != NULL) && (l_46 != m_46)))
            _fail(m_46);
          else
            l_46 = m_46;
        }
        {
          t = not_null(g_46);
          {
            ATerm p_46 = NULL;
            t = b_84(t);
            {
              n_46 = t;
              {
                t = not_null(h_46);
                {
                  ATerm s_46 = NULL;
                  t = c_84(t);
                  {
                    p_46 = t;
                    {
                      ATerm t_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(n_46), not_null(p_46)), not_null(l_46));
                      {
                        t_46 = t;
                        if(((s_46 != NULL) && (s_46 != t_46)))
                          _fail(t_46);
                        else
                          s_46 = t_46;
                      }
                      t = not_null(s_46);
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
  ATerm d_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym_Fail_0))
    {
      ATerm f_47 = NULL,h_47 = NULL;
      ATerm d_15;
      d_15 = t;
      {
        ATerm g_47 = NULL;
        t = SSLgetAnnotations(not_null(d_47));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
      }
      t = d_15;
      {
        ATerm i_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(f_47));
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
        t = not_null(h_47);
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
  ATerm q_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym_Id_0))
    {
      ATerm s_47 = NULL,u_47 = NULL;
      ATerm j_15;
      j_15 = t;
      {
        ATerm t_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          t_47 = t;
          if(((s_47 != NULL) && (s_47 != t_47)))
            _fail(t_47);
          else
            s_47 = t_47;
        }
      }
      t = j_15;
      {
        ATerm v_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_47));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm z_47 (ATerm t)
  {
    ATerm k_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = k_15;
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
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
                    ATerm r_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, r_2, _id);
                    LocalPopChoice(t_15);
                  }
                else
                  {
                    t = s_15;
                    {
                      ATerm u_15 = t;
                      int v_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(v_15);
                        }
                      else
                        {
                          t = u_15;
                          {
                            ATerm w_15 = t;
                            int x_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(x_15);
                              }
                            else
                              {
                                t = w_15;
                                {
                                  ATerm b_16 = t;
                                  int c_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, s_2, _id);
                                      LocalPopChoice(c_16);
                                    }
                                  else
                                    {
                                      t = b_16;
                                      {
                                        ATerm g_16 = t;
                                        int j_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, t_2);
                                            LocalPopChoice(j_16);
                                          }
                                        else
                                          {
                                            t = g_16;
                                            {
                                              ATerm k_16 = t;
                                              int l_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_2 (ATerm t)
                                                  {
                                                    ATerm v_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, v_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, u_2);
                                                  LocalPopChoice(l_16);
                                                }
                                              else
                                                {
                                                  t = k_16;
                                                  {
                                                    ATerm m_16 = t;
                                                    int n_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm w_2 (ATerm t)
                                                        {
                                                          ATerm x_2 (ATerm t)
                                                          {
                                                            ATerm y_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, y_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, x_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, w_2, _id);
                                                        LocalPopChoice(n_16);
                                                      }
                                                    else
                                                      {
                                                        t = m_16;
                                                        {
                                                          ATerm r_16 = t;
                                                          int s_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(s_16);
                                                            }
                                                          else
                                                            {
                                                              t = r_16;
                                                              {
                                                                ATerm t_16 = t;
                                                                int x_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, z_47, z_47);
                                                                    LocalPopChoice(x_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = t_16;
                                                                    t = LChoice_2(t, z_47, z_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = z_47(t);
  {
    ATerm y_16;
    y_16 = t;
    {
      ATerm z_2 (ATerm t)
      {
        t = term_z_16;
        return(t);
      }
      t = split_2(t, term_size_0, z_2);
      t = leq_0(t);
    }
    t = y_16;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_96 (ATerm))
{
  ATerm a_48 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_96(t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = _one(t, a_48);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym_SDef_3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      l_48 = ATgetArgument(i_48, 2);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(i_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(j_48);
          {
            ATerm u_48 = NULL;
            t = r_83(t);
            {
              s_48 = t;
              {
                t = not_null(k_48);
                {
                  ATerm w_48 = NULL;
                  t = s_83(t);
                  {
                    u_48 = t;
                    {
                      t = not_null(l_48);
                      {
                        ATerm y_48 = NULL;
                        t = t_83(t);
                        {
                          w_48 = t;
                          {
                            ATerm z_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_48), not_null(u_48), not_null(w_48)), not_null(q_48));
                            {
                              z_48 = t;
                              if(((y_48 != NULL) && (y_48 != z_48)))
                                _fail(z_48);
                              else
                                y_48 = z_48;
                            }
                            t = not_null(y_48);
                          }
                        }
                      }
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
  ATerm m_49 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm o_49 = NULL;
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        ATerm n_49 = NULL;
        n_49 = t;
        g_49 :
        if(!(match_string(n_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
    {
      o_49 = t;
      if(((m_49 != NULL) && (m_49 != o_49)))
        _fail(o_49);
      else
        m_49 = o_49;
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm i_17;
    i_17 = t;
    {
      ATerm n_17 = t;
      if((PushChoice() == 0))
        {
          ATerm c_3 (ATerm t)
          {
            ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
            p_49 = t;
            j_49 :
            if(match_cons(p_49, sym_Call_2))
              {
                q_49 = ATgetArgument(p_49, 0);
                s_49 = ATgetArgument(p_49, 1);
                k_49 :
                if(match_cons(q_49, sym_SVar_1))
                  {
                    r_49 = ATgetArgument(q_49, 0);
                    l_49 :
                    if(((ATgetType(s_49) == AT_LIST) && ATisEmpty(s_49)))
                      {
                        if(((m_49 != NULL) && (m_49 != r_49)))
                          _fail(r_49);
                        else
                          m_49 = r_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, c_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_17;
        }
    }
    t = i_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, a_3, _id, b_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
  m_50 = t;
  l_50 :
  if(match_cons(m_50, sym_Cong_2))
    {
      n_50 = ATgetArgument(m_50, 0);
      o_50 = ATgetArgument(m_50, 1);
      {
        ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,u_51 = NULL,w_51 = NULL,y_51 = NULL;
        ATerm o_17;
        o_17 = t;
        {
          ATerm x_50 = NULL;
          t = not_null(o_50);
          {
            ATerm a_51 = NULL;
            t = map_1(t, new_0);
            {
              x_50 = t;
              {
                if(((u_50 != NULL) && (u_50 != x_50)))
                  _fail(x_50);
                else
                  u_50 = x_50;
                {
                  t = not_null(u_50);
                  {
                    ATerm b_51 = NULL;
                    ATerm d_3 (ATerm t)
                    {
                      ATerm y_50 = NULL;
                      ATerm z_50 = NULL;
                      z_50 = t;
                      if(((y_50 != NULL) && (y_50 != z_50)))
                        _fail(z_50);
                      else
                        y_50 = z_50;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50));
                      return(t);
                    }
                    t = map_1(t, d_3);
                    {
                      a_51 = t;
                      {
                        if(((r_50 != NULL) && (r_50 != a_51)))
                          _fail(a_51);
                        else
                          r_50 = a_51;
                        {
                          ATerm c_51 = NULL;
                          t = new_0(t);
                          {
                            b_51 = t;
                            {
                              if(((s_50 != NULL) && (s_50 != b_51)))
                                _fail(b_51);
                              else
                                s_50 = b_51;
                              {
                                t = not_null(o_50);
                                {
                                  ATerm i_51 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    c_51 = t;
                                    {
                                      if(((v_50 != NULL) && (v_50 != c_51)))
                                        _fail(c_51);
                                      else
                                        v_50 = c_51;
                                      {
                                        t = not_null(v_50);
                                        {
                                          ATerm j_51 = NULL,t_51 = NULL;
                                          ATerm e_3 (ATerm t)
                                          {
                                            ATerm d_51 = NULL;
                                            ATerm h_51 = NULL;
                                            h_51 = t;
                                            if(((d_51 != NULL) && (d_51 != h_51)))
                                              _fail(h_51);
                                            else
                                              d_51 = h_51;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_51));
                                            return(t);
                                          }
                                          t = map_1(t, e_3);
                                          {
                                            i_51 = t;
                                            {
                                              if(((t_50 != NULL) && (t_50 != i_51)))
                                                _fail(i_51);
                                              else
                                                t_50 = i_51;
                                              {
                                                ATerm k_51 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(v_50));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    k_51 = t;
                                                    if(((j_51 != NULL) && (j_51 != k_51)))
                                                      _fail(k_51);
                                                    else
                                                      j_51 = k_51;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_51), not_null(o_50));
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
                                                      l_51 = t;
                                                      f_50 :
                                                      if(match_cons(l_51, sym__2))
                                                        {
                                                          m_51 = ATgetArgument(l_51, 0);
                                                          p_51 = ATgetArgument(l_51, 1);
                                                          g_50 :
                                                          if(match_cons(m_51, sym__2))
                                                            {
                                                              n_51 = ATgetArgument(m_51, 0);
                                                              o_51 = ATgetArgument(m_51, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_51))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, f_3);
                                                    {
                                                      t_51 = t;
                                                      if(((w_50 != NULL) && (w_50 != t_51)))
                                                        _fail(t_51);
                                                      else
                                                        w_50 = t_51;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = o_17;
        {
          ATerm p_17;
          p_17 = t;
          {
            ATerm v_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(v_50));
            {
              ATerm q_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = q_17;
                  t = conc_more_lists_0(t);
                }
              {
                v_51 = t;
                if(((u_51 != NULL) && (u_51 != v_51)))
                  _fail(v_51);
                else
                  u_51 = v_51;
              }
            }
          }
          t = p_17;
          {
            ATerm w_17;
            w_17 = t;
            {
              ATerm x_51 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_50), not_null(r_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_50))));
              {
                t = Mapp2_0(t);
                {
                  x_51 = t;
                  if(((w_51 != NULL) && (w_51 != x_51)))
                    _fail(x_51);
                  else
                    w_51 = x_51;
                }
              }
            }
            t = w_17;
            {
              ATerm z_51 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_50), not_null(t_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_50))));
              {
                t = Bapp2_0(t);
                {
                  z_51 = t;
                  if(((y_51 != NULL) && (y_51 != z_51)))
                    _fail(z_51);
                  else
                    y_51 = z_51;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_51)), not_null(s_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_50)), not_null(y_51))));
            }
          }
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
  ATerm h_53 = NULL,i_53 = NULL;
  h_53 = t;
  g_53 :
  if(match_cons(h_53, sym_Build_1))
    {
      i_53 = ATgetArgument(h_53, 0);
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
            ATerm o_53 = NULL;
            ATerm s_53 = NULL;
            t = new_0(t);
            {
              o_53 = t;
              {
                if(((m_53 != NULL) && (m_53 != o_53)))
                  _fail(o_53);
                else
                  m_53 = o_53;
                {
                  t = not_null(i_53);
                  {
                    ATerm g_3 (ATerm t)
                    {
                      ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
                      p_53 = t;
                      u_52 :
                      if(match_cons(p_53, sym_Anno_2))
                        {
                          q_53 = ATgetArgument(p_53, 0);
                          r_53 = ATgetArgument(p_53, 1);
                          {
                            if(((k_53 != NULL) && (k_53 != q_53)))
                              _fail(q_53);
                            else
                              k_53 = q_53;
                            {
                              if(((l_53 != NULL) && (l_53 != r_53)))
                                _fail(r_53);
                              else
                                l_53 = r_53;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_53));
                            }
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
                      s_53 = t;
                      if(((n_53 != NULL) && (n_53 != s_53)))
                        _fail(s_53);
                      else
                        n_53 = s_53;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_53)), not_null(k_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_53))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_53))));
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm b_18 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
                  ATerm x_53 = NULL;
                  ATerm c_54 = NULL;
                  t = new_0(t);
                  {
                    x_53 = t;
                    {
                      if(((v_53 != NULL) && (v_53 != x_53)))
                        _fail(x_53);
                      else
                        v_53 = x_53;
                      {
                        t = not_null(i_53);
                        {
                          ATerm h_3 (ATerm t)
                          {
                            ATerm a_54 = NULL,b_54 = NULL;
                            a_54 = t;
                            a_53 :
                            if(match_cons(a_54, sym_RootApp_1))
                              {
                                b_54 = ATgetArgument(a_54, 0);
                                {
                                  if(((u_53 != NULL) && (u_53 != b_54)))
                                    _fail(b_54);
                                  else
                                    u_53 = b_54;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_53));
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
                            c_54 = t;
                            if(((w_53 != NULL) && (w_53 != c_54)))
                              _fail(c_54);
                            else
                              w_53 = c_54;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_53))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_53))));
                  LocalPopChoice(g_18);
                }
              else
                {
                  t = b_18;
                  {
                    ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,t_54 = NULL;
                    ATerm u_54 = NULL;
                    ATerm y_54 = NULL;
                    t = new_0(t);
                    {
                      u_54 = t;
                      {
                        if(((r_54 != NULL) && (r_54 != u_54)))
                          _fail(u_54);
                        else
                          r_54 = u_54;
                        {
                          t = not_null(i_53);
                          {
                            ATerm i_3 (ATerm t)
                            {
                              ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
                              v_54 = t;
                              e_53 :
                              if(match_cons(v_54, sym_App_2))
                                {
                                  w_54 = ATgetArgument(v_54, 0);
                                  x_54 = ATgetArgument(v_54, 1);
                                  {
                                    if(((p_54 != NULL) && (p_54 != w_54)))
                                      _fail(w_54);
                                    else
                                      p_54 = w_54;
                                    {
                                      if(((q_54 != NULL) && (q_54 != x_54)))
                                        _fail(x_54);
                                      else
                                        q_54 = x_54;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_54));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, i_3);
                            {
                              y_54 = t;
                              if(((t_54 != NULL) && (t_54 != y_54)))
                                _fail(y_54);
                              else
                                t_54 = y_54;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_54), not_null(q_54), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_54)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_54))));
                  }
                }
            }
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
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym__2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_55)), not_null(x_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  l_56 = t;
  i_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      p_56 = ATgetArgument(l_56, 1);
      j_56 :
      if(((ATgetType(m_56) == AT_LIST) && !(ATisEmpty(m_56))))
        {
          n_56 = ATgetFirst((ATermList) m_56);
          o_56 = (ATerm) ATgetNext((ATermList) m_56);
          k_56 :
          if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
            {
              q_56 = ATgetFirst((ATermList) p_56);
              r_56 = (ATerm) ATgetNext((ATermList) p_56);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_56), not_null(q_56)), (ATerm) ATmakeAppl(sym__2, not_null(o_56), not_null(r_56)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  z_56 :
  if(match_cons(c_57, sym__2))
    {
      d_57 = ATgetArgument(c_57, 0);
      e_57 = ATgetArgument(c_57, 1);
      a_57 :
      if(((ATgetType(d_57) == AT_LIST) && ATisEmpty(d_57)))
        {
          b_57 :
          if(((ATgetType(e_57) == AT_LIST) && ATisEmpty(e_57)))
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
ATerm genzip_4 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm))
{
  ATerm g_57 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          t = a_100(t);
          {
            t = _2(t, c_100, g_57);
            t = b_100(t);
          }
        }
      }
    return(t);
  }
  t = g_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_100 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_100);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  f_58 = t;
  y_57 :
  if(match_cons(f_58, sym_Call_2))
    {
      g_58 = ATgetArgument(f_58, 0);
      i_58 = ATgetArgument(f_58, 1);
      z_57 :
      if(match_cons(g_58, sym_SVar_1))
        {
          h_58 = ATgetArgument(g_58, 0);
          a_58 :
          if(match_string(h_58, "Anno_Cong__"))
            {
              b_58 :
              if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
                {
                  j_58 = ATgetFirst((ATermList) i_58);
                  m_58 = (ATerm) ATgetNext((ATermList) i_58);
                  c_58 :
                  if(match_cons(j_58, sym_Cong_2))
                    {
                      k_58 = ATgetArgument(j_58, 0);
                      l_58 = ATgetArgument(j_58, 1);
                      d_58 :
                      if(((ATgetType(m_58) == AT_LIST) && !(ATisEmpty(m_58))))
                        {
                          n_58 = ATgetFirst((ATermList) m_58);
                          o_58 = (ATerm) ATgetNext((ATermList) m_58);
                          e_58 :
                          if(((ATgetType(o_58) == AT_LIST) && ATisEmpty(o_58)))
                            {
                              {
                                ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,f_60 = NULL,h_60 = NULL,j_60 = NULL;
                                ATerm k_18;
                                k_18 = t;
                                {
                                  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(l_58)), not_null(n_58));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      z_58 = t;
                                      u_57 :
                                      if(((ATgetType(z_58) == AT_LIST) && !(ATisEmpty(z_58))))
                                        {
                                          a_59 = ATgetFirst((ATermList) z_58);
                                          b_59 = (ATerm) ATgetNext((ATermList) z_58);
                                          {
                                            ATerm j_59 = NULL;
                                            if(((s_58 != NULL) && (s_58 != a_59)))
                                              _fail(a_59);
                                            else
                                              s_58 = a_59;
                                            {
                                              if(((w_58 != NULL) && (w_58 != b_59)))
                                                _fail(b_59);
                                              else
                                                w_58 = b_59;
                                              {
                                                ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
                                                ATerm j_3 (ATerm t)
                                                {
                                                  ATerm h_59 = NULL;
                                                  ATerm i_59 = NULL;
                                                  i_59 = t;
                                                  if(((h_59 != NULL) && (h_59 != i_59)))
                                                    _fail(i_59);
                                                  else
                                                    h_59 = i_59;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_59));
                                                  return(t);
                                                }
                                                t = map_1(t, j_3);
                                                {
                                                  j_59 = t;
                                                  {
                                                    if(((t_58 != NULL) && (t_58 != j_59)))
                                                      _fail(j_59);
                                                    else
                                                      t_58 = j_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(l_58)), not_null(n_58));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          k_59 = t;
                                                          t_57 :
                                                          if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
                                                            {
                                                              l_59 = ATgetFirst((ATermList) k_59);
                                                              m_59 = (ATerm) ATgetNext((ATermList) k_59);
                                                              {
                                                                ATerm t_59 = NULL;
                                                                if(((u_58 != NULL) && (u_58 != l_59)))
                                                                  _fail(l_59);
                                                                else
                                                                  u_58 = l_59;
                                                                {
                                                                  if(((x_58 != NULL) && (x_58 != m_59)))
                                                                    _fail(m_59);
                                                                  else
                                                                    x_58 = m_59;
                                                                  {
                                                                    ATerm u_59 = NULL,e_60 = NULL;
                                                                    ATerm k_3 (ATerm t)
                                                                    {
                                                                      ATerm n_59 = NULL;
                                                                      ATerm o_59 = NULL;
                                                                      o_59 = t;
                                                                      if(((n_59 != NULL) && (n_59 != o_59)))
                                                                        _fail(o_59);
                                                                      else
                                                                        n_59 = o_59;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_59));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, k_3);
                                                                    {
                                                                      t_59 = t;
                                                                      {
                                                                        if(((v_58 != NULL) && (v_58 != t_59)))
                                                                          _fail(t_59);
                                                                        else
                                                                          v_58 = t_59;
                                                                        {
                                                                          ATerm v_59 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_58), not_null(x_58));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              v_59 = t;
                                                                              if(((u_59 != NULL) && (u_59 != v_59)))
                                                                                _fail(v_59);
                                                                              else
                                                                                u_59 = v_59;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), (ATerm) ATinsert(CheckATermList(not_null(l_58)), not_null(n_58)));
                                                                            {
                                                                              ATerm l_3 (ATerm t)
                                                                              {
                                                                                ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
                                                                                w_59 = t;
                                                                                q_57 :
                                                                                if(match_cons(w_59, sym__2))
                                                                                  {
                                                                                    x_59 = ATgetArgument(w_59, 0);
                                                                                    a_60 = ATgetArgument(w_59, 1);
                                                                                    r_57 :
                                                                                    if(match_cons(x_59, sym__2))
                                                                                      {
                                                                                        y_59 = ATgetArgument(x_59, 0);
                                                                                        z_59 = ATgetArgument(x_59, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, l_3);
                                                                              {
                                                                                e_60 = t;
                                                                                if(((y_58 != NULL) && (y_58 != e_60)))
                                                                                  _fail(e_60);
                                                                                else
                                                                                  y_58 = e_60;
                                                                              }
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
                                t = k_18;
                                {
                                  ATerm s_18;
                                  s_18 = t;
                                  {
                                    ATerm g_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_58), not_null(x_58));
                                    {
                                      ATerm t_18 = t;
                                      int u_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(u_18);
                                        }
                                      else
                                        {
                                          t = t_18;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        g_60 = t;
                                        if(((f_60 != NULL) && (f_60 != g_60)))
                                          _fail(g_60);
                                        else
                                          f_60 = g_60;
                                      }
                                    }
                                  }
                                  t = s_18;
                                  {
                                    ATerm v_18;
                                    v_18 = t;
                                    {
                                      ATerm i_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(k_58), not_null(t_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_58))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          i_60 = t;
                                          if(((h_60 != NULL) && (h_60 != i_60)))
                                            _fail(i_60);
                                          else
                                            h_60 = i_60;
                                        }
                                      }
                                    }
                                    t = v_18;
                                    {
                                      ATerm k_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(k_58), not_null(v_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_58))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          k_60 = t;
                                          if(((j_60 != NULL) && (j_60 != k_60)))
                                            _fail(k_60);
                                          else
                                            j_60 = k_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(f_60)), not_null(u_58)), not_null(s_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_58)), not_null(j_60))));
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
ATerm As_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  f_61 = t;
  e_61 :
  if(match_cons(f_61, sym_As_2))
    {
      g_61 = ATgetArgument(f_61, 0);
      h_61 = ATgetArgument(f_61, 1);
      {
        ATerm l_61 = NULL,s_61 = NULL;
        ATerm r_61 = NULL;
        t = SSLgetAnnotations(not_null(f_61));
        {
          r_61 = t;
          if(((l_61 != NULL) && (l_61 != r_61)))
            _fail(r_61);
          else
            l_61 = r_61;
        }
        {
          t = not_null(g_61);
          {
            ATerm u_61 = NULL;
            t = x_85(t);
            {
              s_61 = t;
              {
                t = not_null(h_61);
                {
                  ATerm y_61 = NULL;
                  t = y_85(t);
                  {
                    u_61 = t;
                    {
                      ATerm z_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(s_61), not_null(u_61)), not_null(l_61));
                      {
                        z_61 = t;
                        if(((y_61 != NULL) && (y_61 != z_61)))
                          _fail(z_61);
                        else
                          y_61 = z_61;
                      }
                      t = not_null(y_61);
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
ATerm Prim_2 (ATerm t, ATerm d_82 (ATerm), ATerm e_82 (ATerm))
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  k_62 :
  if(match_cons(l_62, sym_Prim_2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      {
        ATerm r_62 = NULL,t_62 = NULL;
        ATerm s_62 = NULL;
        t = SSLgetAnnotations(not_null(l_62));
        {
          s_62 = t;
          if(((r_62 != NULL) && (r_62 != s_62)))
            _fail(s_62);
          else
            r_62 = s_62;
        }
        {
          t = not_null(m_62);
          {
            ATerm v_62 = NULL;
            t = d_82(t);
            {
              t_62 = t;
              {
                t = not_null(n_62);
                {
                  ATerm e_63 = NULL;
                  t = e_82(t);
                  {
                    v_62 = t;
                    {
                      ATerm f_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(t_62), not_null(v_62)), not_null(r_62));
                      {
                        f_63 = t;
                        if(((e_63 != NULL) && (e_63 != f_63)))
                          _fail(f_63);
                        else
                          e_63 = f_63;
                      }
                      t = not_null(e_63);
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
ATerm Explode_2 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  q_63 :
  if(match_cons(r_63, sym_Explode_2))
    {
      s_63 = ATgetArgument(r_63, 0);
      t_63 = ATgetArgument(r_63, 1);
      {
        ATerm x_63 = NULL,z_63 = NULL;
        ATerm y_63 = NULL;
        t = SSLgetAnnotations(not_null(r_63));
        {
          y_63 = t;
          if(((x_63 != NULL) && (x_63 != y_63)))
            _fail(y_63);
          else
            x_63 = y_63;
        }
        {
          t = not_null(s_63);
          {
            ATerm b_64 = NULL;
            t = t_85(t);
            {
              z_63 = t;
              {
                t = not_null(t_63);
                {
                  ATerm n_64 = NULL;
                  t = u_85(t);
                  {
                    b_64 = t;
                    {
                      ATerm o_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(z_63), not_null(b_64)), not_null(x_63));
                      {
                        o_64 = t;
                        if(((n_64 != NULL) && (n_64 != o_64)))
                          _fail(o_64);
                        else
                          n_64 = o_64;
                      }
                      t = not_null(n_64);
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
ATerm Op_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  q_65 :
  if(match_cons(r_65, sym_Op_2))
    {
      s_65 = ATgetArgument(r_65, 0);
      t_65 = ATgetArgument(r_65, 1);
      {
        ATerm x_65 = NULL,z_65 = NULL;
        ATerm y_65 = NULL;
        t = SSLgetAnnotations(not_null(r_65));
        {
          y_65 = t;
          if(((x_65 != NULL) && (x_65 != y_65)))
            _fail(y_65);
          else
            x_65 = y_65;
        }
        {
          t = not_null(s_65);
          {
            ATerm b_66 = NULL;
            t = h_84(t);
            {
              z_65 = t;
              {
                t = not_null(t_65);
                {
                  ATerm d_66 = NULL;
                  t = i_84(t);
                  {
                    b_66 = t;
                    {
                      ATerm e_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_65), not_null(b_66)), not_null(x_65));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1 (ATerm t, ATerm n_121 (ATerm))
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_121(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm y_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm n_3 (ATerm t)
              {
                t = pat_td_1(t, n_121);
                return(t);
              }
              t = fetch_1(t, n_3);
              return(t);
            }
            t = Op_2(t, _id, m_3);
            LocalPopChoice(a_19);
          }
        else
          {
            t = y_18;
            {
              ATerm b_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = pat_td_1(t, n_121);
                    return(t);
                  }
                  t = Explode_2(t, _id, o_3);
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = b_19;
                  {
                    ATerm l_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = pat_td_1(t, n_121);
                          return(t);
                        }
                        t = Explode_2(t, p_3, _id);
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = l_19;
                        {
                          ATerm n_19 = t;
                          int r_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, n_121);
                                  return(t);
                                }
                                t = fetch_1(t, r_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, q_3);
                              LocalPopChoice(r_19);
                            }
                          else
                            {
                              t = n_19;
                              {
                                ATerm s_3 (ATerm t)
                                {
                                  t = pat_td_1(t, n_121);
                                  return(t);
                                }
                                t = As_2(t, _id, s_3);
                              }
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
  ATerm a_67 = NULL,b_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym_Match_1))
    {
      b_67 = ATgetArgument(a_67, 0);
      {
        ATerm x_19 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
            ATerm h_67 = NULL;
            ATerm l_67 = NULL;
            t = new_0(t);
            {
              h_67 = t;
              {
                if(((f_67 != NULL) && (f_67 != h_67)))
                  _fail(h_67);
                else
                  f_67 = h_67;
                {
                  t = not_null(b_67);
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
                      i_67 = t;
                      p_66 :
                      if(match_cons(i_67, sym_Anno_2))
                        {
                          j_67 = ATgetArgument(i_67, 0);
                          k_67 = ATgetArgument(i_67, 1);
                          {
                            if(((d_67 != NULL) && (d_67 != j_67)))
                              _fail(j_67);
                            else
                              d_67 = j_67;
                            {
                              if(((e_67 != NULL) && (e_67 != k_67)))
                                _fail(k_67);
                              else
                                e_67 = k_67;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_67)), not_null(d_67));
                            }
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
                      l_67 = t;
                      if(((g_67 != NULL) && (g_67 != l_67)))
                        _fail(l_67);
                      else
                        g_67 = l_67;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_67)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_67))))));
            LocalPopChoice(d_20);
          }
        else
          {
            t = x_19;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
                  ATerm q_67 = NULL;
                  ATerm t_67 = NULL;
                  t = new_0(t);
                  {
                    q_67 = t;
                    {
                      if(((o_67 != NULL) && (o_67 != q_67)))
                        _fail(q_67);
                      else
                        o_67 = q_67;
                      {
                        t = not_null(b_67);
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm r_67 = NULL,s_67 = NULL;
                            r_67 = t;
                            t_66 :
                            if(match_cons(r_67, sym_RootApp_1))
                              {
                                s_67 = ATgetArgument(r_67, 0);
                                {
                                  if(((n_67 != NULL) && (n_67 != s_67)))
                                    _fail(s_67);
                                  else
                                    n_67 = s_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67));
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
                            t_67 = t;
                            if(((p_67 != NULL) && (p_67 != t_67)))
                              _fail(t_67);
                            else
                              p_67 = t_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67))), not_null(n_67))));
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  {
                    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,m_68 = NULL;
                    ATerm n_68 = NULL;
                    ATerm r_68 = NULL;
                    t = new_0(t);
                    {
                      n_68 = t;
                      {
                        if(((c_68 != NULL) && (c_68 != n_68)))
                          _fail(n_68);
                        else
                          c_68 = n_68;
                        {
                          t = not_null(b_67);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
                              o_68 = t;
                              x_66 :
                              if(match_cons(o_68, sym_App_2))
                                {
                                  p_68 = ATgetArgument(o_68, 0);
                                  q_68 = ATgetArgument(o_68, 1);
                                  {
                                    if(((b_68 != NULL) && (b_68 != p_68)))
                                      _fail(p_68);
                                    else
                                      b_68 = p_68;
                                    {
                                      if(((a_68 != NULL) && (a_68 != q_68)))
                                        _fail(q_68);
                                      else
                                        a_68 = q_68;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_68));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, v_3);
                            {
                              r_68 = t;
                              if(((m_68 != NULL) && (m_68 != r_68)))
                                _fail(r_68);
                              else
                                m_68 = r_68;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_68))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_68)), not_null(b_68)))));
                  }
                }
            }
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
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  s_70 :
  if(match_cons(t_70, sym_Cong_2))
    {
      u_70 = ATgetArgument(t_70, 0);
      v_70 = ATgetArgument(t_70, 1);
      {
        ATerm y_70 = NULL;
        ATerm c_71 = NULL;
        t = not_null(v_70);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm z_70 = NULL,a_71 = NULL;
            a_71 = t;
            q_70 :
            if(match_cons(a_71, sym_Match_1))
              {
                z_70 = ATgetArgument(a_71, 0);
                t = not_null(z_70);
              }
            else
              {
                if(match_cons(a_71, sym_Id_0))
                  {
                    t = term_h_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, w_3);
          {
            c_71 = t;
            if(((y_70 != NULL) && (y_70 != c_71)))
              _fail(c_71);
            else
              y_70 = c_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_70), not_null(y_70)));
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
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  i_71 :
  if(match_cons(k_71, sym_Scope_2))
    {
      l_71 = ATgetArgument(k_71, 0);
      m_71 = ATgetArgument(k_71, 1);
      j_71 :
      if(((ATgetType(l_71) == AT_LIST) && ATisEmpty(l_71)))
        {
          t = not_null(m_71);
        }
      else
        {
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
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  v_71 :
  if(match_cons(j_72, sym_Where_1))
    {
      k_72 = ATgetArgument(j_72, 0);
      w_71 :
      if(match_cons(k_72, sym_Seq_2))
        {
          i_72 = ATgetArgument(k_72, 0);
          d_72 = ATgetArgument(k_72, 1);
          x_71 :
          if(match_cons(i_72, sym_Where_1))
            {
              c_72 = ATgetArgument(i_72, 0);
              y_71 :
              if(match_cons(d_72, sym_Seq_2))
                {
                  e_72 = ATgetArgument(d_72, 0);
                  h_72 = ATgetArgument(d_72, 1);
                  z_71 :
                  if(match_cons(e_72, sym_Build_1))
                    {
                      f_72 = ATgetArgument(e_72, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_72)), not_null(h_72))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_72, sym_Where_1))
            {
              i_72 = ATgetArgument(k_72, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(i_72));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(j_72, sym_Test_1))
        {
          k_72 = ATgetArgument(j_72, 0);
          a_72 :
          if(match_cons(k_72, sym_Test_1))
            {
              i_72 = ATgetArgument(k_72, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(i_72));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_72, sym_Not_1))
            {
              k_72 = ATgetArgument(j_72, 0);
              b_72 :
              if(match_cons(k_72, sym_Not_1))
                {
                  i_72 = ATgetArgument(k_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(i_72));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(j_72, sym_LChoice_2))
                {
                  k_72 = ATgetArgument(j_72, 0);
                  l_72 = ATgetArgument(j_72, 1);
                  {
                    if(((k_72 != NULL) && (k_72 != l_72)))
                      _fail(l_72);
                    else
                      k_72 = l_72;
                    t = not_null(k_72);
                  }
                }
              else
                {
                  if(match_cons(j_72, sym_Choice_2))
                    {
                      k_72 = ATgetArgument(j_72, 0);
                      l_72 = ATgetArgument(j_72, 1);
                      {
                        if(((k_72 != NULL) && (k_72 != l_72)))
                          _fail(l_72);
                        else
                          k_72 = l_72;
                        t = not_null(k_72);
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
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  h_73 = t;
  d_73 :
  if(match_cons(h_73, sym_LChoice_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      l_73 = ATgetArgument(h_73, 1);
      e_73 :
      if(match_cons(i_73, sym_LChoice_2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_73), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_73), not_null(l_73)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(h_73, sym_Seq_2))
        {
          i_73 = ATgetArgument(h_73, 0);
          l_73 = ATgetArgument(h_73, 1);
          f_73 :
          if(match_cons(i_73, sym_Seq_2))
            {
              j_73 = ATgetArgument(i_73, 0);
              k_73 = ATgetArgument(i_73, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_73), not_null(l_73)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_73, sym_Choice_2))
            {
              i_73 = ATgetArgument(h_73, 0);
              l_73 = ATgetArgument(h_73, 1);
              g_73 :
              if(match_cons(i_73, sym_Choice_2))
                {
                  j_73 = ATgetArgument(i_73, 0);
                  k_73 = ATgetArgument(i_73, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_73), (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_73), not_null(l_73)));
                }
              else
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
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  l_74 :
  if(match_cons(s_74, sym_Lets_2))
    {
      t_74 = ATgetArgument(s_74, 0);
      u_74 = ATgetArgument(s_74, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_74), not_null(u_74));
    }
  else
    {
      if(match_cons(s_74, sym_LChoices_1))
        {
          t_74 = ATgetArgument(s_74, 0);
          m_74 :
          if(((ATgetType(t_74) == AT_LIST) && !(ATisEmpty(t_74))))
            {
              p_74 = ATgetFirst((ATermList) t_74);
              q_74 = (ATerm) ATgetNext((ATermList) t_74);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_74), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_74)));
            }
          else
            {
              if(((ATgetType(t_74) == AT_LIST) && ATisEmpty(t_74)))
                {
                  t = term_i_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_74, sym_Choices_1))
            {
              t_74 = ATgetArgument(s_74, 0);
              n_74 :
              if(((ATgetType(t_74) == AT_LIST) && !(ATisEmpty(t_74))))
                {
                  p_74 = ATgetFirst((ATermList) t_74);
                  q_74 = (ATerm) ATgetNext((ATermList) t_74);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_74), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_74)));
                }
              else
                {
                  if(((ATgetType(t_74) == AT_LIST) && ATisEmpty(t_74)))
                    {
                      t = term_i_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_74, sym_Seqs_1))
                {
                  t_74 = ATgetArgument(s_74, 0);
                  o_74 :
                  if(((ATgetType(t_74) == AT_LIST) && !(ATisEmpty(t_74))))
                    {
                      p_74 = ATgetFirst((ATermList) t_74);
                      q_74 = (ATerm) ATgetNext((ATermList) t_74);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_74), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_74)));
                    }
                  else
                    {
                      if(((ATgetType(t_74) == AT_LIST) && ATisEmpty(t_74)))
                        {
                          t = term_j_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_74, sym_DefaultVarDec_1))
                    {
                      t_74 = ATgetArgument(s_74, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_74), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_20), term_v_20));
                    }
                  else
                    {
                      if(match_cons(s_74, sym_InfixApp_3))
                        {
                          t_74 = ATgetArgument(s_74, 0);
                          u_74 = ATgetArgument(s_74, 1);
                          r_74 = ATgetArgument(s_74, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_74), (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_74)), not_null(t_74))));
                        }
                      else
                        {
                          if(match_cons(s_74, sym_BAM_3))
                            {
                              t_74 = ATgetArgument(s_74, 0);
                              u_74 = ATgetArgument(s_74, 1);
                              r_74 = ATgetArgument(s_74, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_74))), not_null(t_74)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_74))));
                            }
                          else
                            {
                              if(match_cons(s_74, sym_AM_2))
                                {
                                  t_74 = ATgetArgument(s_74, 0);
                                  u_74 = ATgetArgument(s_74, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_74), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_74)));
                                }
                              else
                                {
                                  if(match_cons(s_74, sym_MA_2))
                                    {
                                      t_74 = ATgetArgument(s_74, 0);
                                      u_74 = ATgetArgument(s_74, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_74)), not_null(u_74));
                                    }
                                  else
                                    {
                                      if(match_cons(s_74, sym_BA_2))
                                        {
                                          t_74 = ATgetArgument(s_74, 0);
                                          u_74 = ATgetArgument(s_74, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_74)), not_null(t_74));
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
  ATerm g_76 = NULL,i_76 = NULL;
  g_76 = t;
  e_76 :
  if(match_cons(g_76, sym_Where_1))
    {
      i_76 = ATgetArgument(g_76, 0);
      f_76 :
      if(match_cons(i_76, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  b_78 :
  if(match_cons(d_78, sym_LChoice_2))
    {
      e_78 = ATgetArgument(d_78, 0);
      f_78 = ATgetArgument(d_78, 1);
      c_78 :
      if(match_cons(f_78, sym_Fail_0))
        {
          t = not_null(e_78);
        }
      else
        {
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
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  j_78 :
  if(match_cons(l_78, sym_LChoice_2))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      k_78 :
      if(match_cons(m_78, sym_Fail_0))
        {
          t = not_null(n_78);
        }
      else
        {
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
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
  t_78 = t;
  r_78 :
  if(match_cons(t_78, sym_Choice_2))
    {
      u_78 = ATgetArgument(t_78, 0);
      v_78 = ATgetArgument(t_78, 1);
      s_78 :
      if(match_cons(v_78, sym_Fail_0))
        {
          t = not_null(u_78);
        }
      else
        {
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
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  z_78 :
  if(match_cons(b_79, sym_Choice_2))
    {
      c_79 = ATgetArgument(b_79, 0);
      d_79 = ATgetArgument(b_79, 1);
      a_79 :
      if(match_cons(c_79, sym_Fail_0))
        {
          t = not_null(d_79);
        }
      else
        {
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
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  i_79 :
  if(match_cons(j_79, sym_Cong_2))
    {
      k_79 = ATgetArgument(j_79, 0);
      l_79 = ATgetArgument(j_79, 1);
      {
        t = not_null(l_79);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm o_79 = NULL;
            o_79 = t;
            h_79 :
            if(!(match_cons(o_79, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, x_3);
        }
        t = term_i_20;
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
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t_79 = t;
  r_79 :
  if(match_cons(t_79, sym_Path_2))
    {
      u_79 = ATgetArgument(t_79, 0);
      v_79 = ATgetArgument(t_79, 1);
      s_79 :
      if(match_cons(v_79, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm b_80 = NULL,c_80 = NULL;
  b_80 = t;
  z_79 :
  if(match_cons(b_80, sym_One_1))
    {
      c_80 = ATgetArgument(b_80, 0);
      a_80 :
      if(match_cons(c_80, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm j_80 = NULL,k_80 = NULL;
  j_80 = t;
  f_80 :
  if(match_cons(j_80, sym_Some_1))
    {
      k_80 = ATgetArgument(j_80, 0);
      i_80 :
      if(match_cons(k_80, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  u_80 :
  if(match_cons(w_80, sym_Rec_2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      v_80 :
      if(match_cons(y_80, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
  e_81 = t;
  c_81 :
  if(match_cons(e_81, sym_Scope_2))
    {
      f_81 = ATgetArgument(e_81, 0);
      g_81 = ATgetArgument(e_81, 1);
      d_81 :
      if(match_cons(g_81, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  k_81 :
  if(match_cons(m_81, sym_Seq_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      l_81 :
      if(match_cons(n_81, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm u_81 = NULL,v_81 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym_Not_1))
    {
      v_81 = ATgetArgument(u_81, 0);
      t_81 :
      if(match_cons(v_81, sym_Fail_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm a_82 = NULL,f_82 = NULL;
  a_82 = t;
  y_81 :
  if(match_cons(a_82, sym_Test_1))
    {
      f_82 = ATgetArgument(a_82, 0);
      z_81 :
      if(match_cons(f_82, sym_Fail_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm f_21 = t;
              int o_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(o_21);
                }
              else
                {
                  t = f_21;
                  {
                    ATerm p_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
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
                              t = F6_0(t);
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
                                    t = F7_0(t);
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
                                          t = F8_0(t);
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
                                                t = F9_0(t);
                                                LocalPopChoice(y_21);
                                              }
                                            else
                                              {
                                                t = x_21;
                                                {
                                                  ATerm z_21 = t;
                                                  int a_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(a_22);
                                                    }
                                                  else
                                                    {
                                                      t = z_21;
                                                      {
                                                        ATerm b_22 = t;
                                                        int c_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(c_22);
                                                          }
                                                        else
                                                          {
                                                            t = b_22;
                                                            {
                                                              ATerm g_22 = t;
                                                              int h_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(h_22);
                                                                }
                                                              else
                                                                {
                                                                  t = g_22;
                                                                  {
                                                                    ATerm l_22 = t;
                                                                    int o_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(o_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_22;
                                                                        {
                                                                          ATerm p_22 = t;
                                                                          int t_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(t_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_22;
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
  ATerm o_82 = NULL,p_82 = NULL;
  o_82 = t;
  k_82 :
  if(match_cons(o_82, sym_Match_1))
    {
      p_82 = ATgetArgument(o_82, 0);
      n_82 :
      if(match_cons(p_82, sym_Wld_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm w_82 = NULL,x_82 = NULL;
  w_82 = t;
  u_82 :
  if(match_cons(w_82, sym_Where_1))
    {
      x_82 = ATgetArgument(w_82, 0);
      v_82 :
      if(match_cons(x_82, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm i_83 = NULL,j_83 = NULL;
  i_83 = t;
  g_83 :
  if(match_cons(i_83, sym_All_1))
    {
      j_83 = ATgetArgument(i_83, 0);
      h_83 :
      if(match_cons(j_83, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL;
  w_83 = t;
  u_83 :
  if(match_cons(w_83, sym_Rec_2))
    {
      x_83 = ATgetArgument(w_83, 0);
      y_83 = ATgetArgument(w_83, 1);
      v_83 :
      if(match_cons(y_83, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm g_84 = NULL,j_84 = NULL,k_84 = NULL;
  g_84 = t;
  e_84 :
  if(match_cons(g_84, sym_Scope_2))
    {
      j_84 = ATgetArgument(g_84, 0);
      k_84 = ATgetArgument(g_84, 1);
      f_84 :
      if(match_cons(k_84, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
  s_84 = t;
  q_84 :
  if(match_cons(s_84, sym_LChoice_2))
    {
      t_84 = ATgetArgument(s_84, 0);
      u_84 = ATgetArgument(s_84, 1);
      r_84 :
      if(match_cons(t_84, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  y_84 :
  if(match_cons(a_85, sym_Seq_2))
    {
      b_85 = ATgetArgument(a_85, 0);
      c_85 = ATgetArgument(a_85, 1);
      z_84 :
      if(match_cons(c_85, sym_Id_0))
        {
          t = not_null(b_85);
        }
      else
        {
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
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  g_85 :
  if(match_cons(j_85, sym_Seq_2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      h_85 :
      if(match_cons(k_85, sym_Id_0))
        {
          t = not_null(l_85);
        }
      else
        {
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
  ATerm r_85 = NULL,s_85 = NULL;
  r_85 = t;
  p_85 :
  if(match_cons(r_85, sym_Not_1))
    {
      s_85 = ATgetArgument(r_85, 0);
      q_85 :
      if(match_cons(s_85, sym_Id_0))
        {
          t = term_i_20;
        }
      else
        {
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
  ATerm b_86 = NULL,c_86 = NULL;
  b_86 = t;
  z_85 :
  if(match_cons(b_86, sym_Test_1))
    {
      c_86 = ATgetArgument(b_86, 0);
      a_86 :
      if(match_cons(c_86, sym_Id_0))
        {
          t = term_j_20;
        }
      else
        {
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
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
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
                  t = I3_0(t);
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm c_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
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
                              t = I7_0(t);
                              LocalPopChoice(f_23);
                            }
                          else
                            {
                              t = e_23;
                              {
                                ATerm g_23 = t;
                                int m_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(m_23);
                                  }
                                else
                                  {
                                    t = g_23;
                                    {
                                      ATerm n_23 = t;
                                      int o_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(o_23);
                                        }
                                      else
                                        {
                                          t = n_23;
                                          {
                                            ATerm q_23 = t;
                                            int s_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(s_23);
                                              }
                                            else
                                              {
                                                t = q_23;
                                                {
                                                  ATerm t_23 = t;
                                                  int u_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(u_23);
                                                    }
                                                  else
                                                    {
                                                      t = t_23;
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
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  {
                    ATerm b_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = b_24;
                        {
                          ATerm h_24 = t;
                          int s_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(s_24);
                            }
                          else
                            {
                              t = h_24;
                              {
                                ATerm t_24 = t;
                                int u_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(u_24);
                                  }
                                else
                                  {
                                    t = t_24;
                                    {
                                      ATerm v_24 = t;
                                      int w_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(w_24);
                                        }
                                      else
                                        {
                                          t = v_24;
                                          {
                                            ATerm x_24 = t;
                                            int y_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(y_24);
                                              }
                                            else
                                              {
                                                t = x_24;
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
ATerm repeat_2 (ATerm t, ATerm q_111 (ATerm), ATerm r_111 (ATerm))
{
  ATerm e_86 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_111(t);
        t = e_86(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = r_111(t);
      }
    return(t);
  }
  t = e_86(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_111 (ATerm))
{
  t = repeat_2(t, t_111, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm f_86 (ATerm t)
  {
    t = j_95(t);
    {
      t = _all(t, f_86);
      t = j_95(t);
    }
    return(t);
  }
  t = f_86(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = repeat_2(t, Simplify_0, _id);
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
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = inlineable_0(t);
          t = AddSDef_0(t);
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
          }
        }
    }
    return(t);
  }
  t = map_1(t, z_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm l_86 = NULL,m_86 = NULL;
  l_86 = t;
  k_86 :
  if(match_cons(l_86, sym_Strategies_1))
    {
      m_86 = ATgetArgument(l_86, 0);
      {
        ATerm p_86 = NULL,r_86 = NULL;
        ATerm q_86 = NULL;
        t = SSLgetAnnotations(not_null(l_86));
        {
          q_86 = t;
          if(((p_86 != NULL) && (p_86 != q_86)))
            _fail(q_86);
          else
            p_86 = q_86;
        }
        {
          t = not_null(m_86);
          {
            ATerm t_86 = NULL;
            t = m_84(t);
            {
              r_86 = t;
              {
                ATerm u_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_86)), not_null(p_86));
                {
                  u_86 = t;
                  if(((t_86 != NULL) && (t_86 != u_86)))
                    _fail(u_86);
                  else
                    t_86 = u_86;
                }
                t = not_null(t_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm o_84 (ATerm))
{
  ATerm e_87 = NULL,f_87 = NULL;
  e_87 = t;
  d_87 :
  if(match_cons(e_87, sym_Specification_1))
    {
      f_87 = ATgetArgument(e_87, 0);
      {
        ATerm i_87 = NULL,k_87 = NULL;
        ATerm j_87 = NULL;
        t = SSLgetAnnotations(not_null(e_87));
        {
          j_87 = t;
          if(((i_87 != NULL) && (i_87 != j_87)))
            _fail(j_87);
          else
            i_87 = j_87;
        }
        {
          t = not_null(f_87);
          {
            ATerm m_87 = NULL;
            t = o_84(t);
            {
              k_87 = t;
              {
                ATerm n_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_87)), not_null(i_87));
                {
                  n_87 = t;
                  if(((m_87 != NULL) && (m_87 != n_87)))
                    _fail(n_87);
                  else
                    m_87 = n_87;
                }
                t = not_null(m_87);
              }
            }
          }
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
  ATerm a_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, f_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, a_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym__2))
    {
      z_87 = ATgetArgument(y_87, 0);
      a_88 = ATgetArgument(y_87, 1);
      {
        ATerm e_88 = NULL,g_88 = NULL;
        ATerm f_88 = NULL;
        t = SSLgetAnnotations(not_null(y_87));
        {
          f_88 = t;
          if(((e_88 != NULL) && (e_88 != f_88)))
            _fail(f_88);
          else
            e_88 = f_88;
        }
        {
          t = not_null(z_87);
          {
            ATerm i_88 = NULL;
            t = s_80(t);
            {
              g_88 = t;
              {
                t = not_null(a_88);
                {
                  ATerm k_88 = NULL;
                  t = t_80(t);
                  {
                    i_88 = t;
                    {
                      ATerm l_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_88), not_null(i_88)), not_null(e_88));
                      {
                        l_88 = t;
                        if(((k_88 != NULL) && (k_88 != l_88)))
                          _fail(l_88);
                        else
                          k_88 = l_88;
                      }
                      t = not_null(k_88);
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
  ATerm t_88 = NULL;
  ATerm u_25;
  u_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm u_88 = NULL,v_88 = NULL;
      u_88 = t;
      s_88 :
      if(match_cons(u_88, sym_Program_1))
        {
          v_88 = ATgetArgument(u_88, 0);
          if(((t_88 != NULL) && (t_88 != v_88)))
            _fail(v_88);
          else
            t_88 = v_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), not_null(t_88)), term_x_25));
      {
        t = printnl_0(t);
        {
          t = term_c_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym__2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      {
        ATerm d_26;
        d_26 = t;
        t = SSL_printnl(not_null(a_89), not_null(b_89));
        t = d_26;
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
  ATerm g_89 = NULL;
  g_89 = t;
  t = SSL_implode_string(not_null(g_89));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
        l_89 = t;
        k_89 :
        if(((ATgetType(l_89) == AT_LIST) && !(ATisEmpty(l_89))))
          {
            m_89 = ATgetFirst((ATermList) l_89);
            n_89 = (ATerm) ATgetNext((ATermList) l_89);
            {
              t = not_null(m_89);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(n_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
  ATerm x_89 = NULL;
  ATerm z_89 = NULL;
  x_89 = t;
  {
    ATerm a_90 = NULL;
    ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
    t = not_null(x_89);
    {
      a_90 = t;
      {
        t = SSL_explode_term(not_null(a_90));
        {
          c_90 = t;
          v_89 :
          if(match_cons(c_90, sym__2))
            {
              d_90 = ATgetArgument(c_90, 0);
              e_90 = ATgetArgument(c_90, 1);
              w_89 :
              if(match_string(d_90, ""))
                {
                  if(((z_89 != NULL) && (z_89 != e_90)))
                    _fail(e_90);
                  else
                    z_89 = e_90;
                }
              else
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
      t = not_null(z_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm i_90 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_90);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          t = Nil_0(t);
          t = c_102(t);
        }
      }
    return(t);
  }
  t = i_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
  l_90 = t;
  k_90 :
  if(match_cons(l_90, sym__2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      {
        t = not_null(m_90);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(n_90);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  t = SSL_explode_string(not_null(s_90));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_90 = NULL;
  w_90 = t;
  t = SSL_is_string(not_null(w_90));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = r_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm a_27 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_27);
                }
              else
                {
                  t = a_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, j_4);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL;
              f_91 = t;
              e_91 :
              if(match_cons(f_91, sym_Path_1))
                {
                  g_91 = ATgetArgument(f_91, 0);
                  t = not_null(g_91);
                }
              else
                {
                  if(match_cons(f_91, sym_Var_1))
                    {
                      g_91 = ATgetArgument(f_91, 0);
                      {
                        t = not_null(g_91);
                        {
                          ATerm c_27 = t;
                          int d_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_27);
                            }
                          else
                            {
                              t = c_27;
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = term_e_27;
                                  return(t);
                                }
                                t = debug_1(t, k_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_91, sym_Prefix_2))
                        {
                          g_91 = ATgetArgument(f_91, 0);
                          h_91 = ATgetArgument(f_91, 1);
                          {
                            ATerm m_91 = NULL,o_91 = NULL;
                            ATerm f_27;
                            f_27 = t;
                            {
                              ATerm n_91 = NULL;
                              t = not_null(g_91);
                              {
                                t = eval_config_0(t);
                                {
                                  n_91 = t;
                                  if(((m_91 != NULL) && (m_91 != n_91)))
                                    _fail(n_91);
                                  else
                                    m_91 = n_91;
                                }
                              }
                            }
                            t = f_27;
                            {
                              ATerm p_91 = NULL;
                              t = not_null(h_91);
                              {
                                t = eval_config_0(t);
                                {
                                  p_91 = t;
                                  if(((o_91 != NULL) && (o_91 != p_91)))
                                    _fail(p_91);
                                  else
                                    o_91 = p_91;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(o_91));
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
  ATerm x_91 = NULL;
  x_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_27, not_null(x_91));
    {
      t = table_get_0(t);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm o_27;
              o_27 = t;
              {
                ATerm z_91 = NULL;
                ATerm a_92 = NULL;
                a_92 = t;
                if(((z_91 != NULL) && (z_91 != a_92)))
                  _fail(a_92);
                else
                  z_91 = a_92;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_h_27, not_null(x_91), not_null(z_91));
                  t = table_put_0(t);
                }
              }
              t = o_27;
            }
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_117 (ATerm))
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_27;
      s_27 = t;
      {
        ATerm e_92 = NULL;
        ATerm f_92 = NULL;
        t = term_w_27;
        {
          t = get_config_0(t);
          {
            f_92 = t;
            if(((e_92 != NULL) && (e_92 != f_92)))
              _fail(f_92);
            else
              e_92 = f_92;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_92), term_f_28);
          t = geq_0(t);
        }
      }
      t = s_27;
      t = q_117(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym__2))
    {
      m_92 = ATgetArgument(l_92, 0);
      n_92 = ATgetArgument(l_92, 1);
      t = SSL_WriteToTextFile(not_null(m_92), not_null(n_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  s_92 :
  if(match_cons(t_92, sym__2))
    {
      u_92 = ATgetArgument(t_92, 0);
      v_92 = ATgetArgument(t_92, 1);
      t = SSL_WriteToBinaryFile(not_null(u_92), not_null(v_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_93 = NULL;
  ATerm g_28;
  g_28 = t;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm i_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            ATerm e_93 = NULL,f_93 = NULL;
            e_93 = t;
            a_93 :
            if(match_cons(e_93, sym_Output_1))
              {
                f_93 = ATgetArgument(e_93, 0);
                if(((d_93 != NULL) && (d_93 != f_93)))
                  _fail(f_93);
                else
                  d_93 = f_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, m_4);
          LocalPopChoice(j_28);
        }
      else
        {
          t = i_28;
          {
            ATerm g_93 = NULL;
            t = term_y_28;
            {
              g_93 = t;
              if(((d_93 != NULL) && (d_93 != g_93)))
                _fail(g_93);
              else
                d_93 = g_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_4, _id);
  }
  t = g_28;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        t = not_null(d_93);
        return(t);
      }
      t = split_2(t, o_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm z_28 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm h_93 = NULL;
              h_93 = t;
              c_93 :
              if(!(match_cons(h_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, q_4);
            return(t);
          }
          t = _2(t, p_4, WriteToBinaryFile_0);
          LocalPopChoice(b_29);
        }
      else
        {
          t = z_28;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_115 (ATerm))
{
  ATerm q_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL;
  ATerm c_29;
  c_29 = t;
  t = dtime_0(t);
  t = c_29;
  {
    t = t_115(t);
    {
      ATerm d_29;
      d_29 = t;
      {
        ATerm r_93 = NULL;
        t = dtime_0(t);
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
      }
      t = d_29;
      {
        s_93 = t;
        p_93 :
        if(match_cons(s_93, sym__2))
          {
            t_93 = ATgetArgument(s_93, 0);
            u_93 = ATgetArgument(s_93, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_93)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_93))), not_null(u_93));
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
ATerm debug_1 (ATerm t, ATerm y_121 (ATerm))
{
  ATerm q_29;
  q_29 = t;
  {
    ATerm b_94 = NULL,d_94 = NULL;
    ATerm r_29;
    r_29 = t;
    {
      ATerm c_94 = NULL;
      t = y_121(t);
      {
        c_94 = t;
        if(((b_94 != NULL) && (b_94 != c_94)))
          _fail(c_94);
        else
          b_94 = c_94;
      }
    }
    t = r_29;
    {
      ATerm e_94 = NULL;
      e_94 = t;
      if(((d_94 != NULL) && (d_94 != e_94)))
        _fail(e_94);
      else
        d_94 = e_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_94)), not_null(b_94)));
        t = printnl_0(t);
      }
    }
  }
  t = q_29;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_94 = NULL;
  ATerm s_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_94 = NULL;
      r_94 = t;
      {
        if(((q_94 != NULL) && (q_94 != r_94)))
          _fail(r_94);
        else
          q_94 = r_94;
        t = SSL_ReadFromFile(not_null(q_94));
      }
      LocalPopChoice(z_29);
    }
  else
    {
      t = s_29;
      {
        ATerm r_4 (ATerm t)
        {
          t = term_a_30;
          return(t);
        }
        t = debug_1(t, r_4);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_98 (ATerm), ATerm a_99 (ATerm))
{
  ATerm v_94 = NULL,x_94 = NULL;
  ATerm b_30;
  b_30 = t;
  {
    ATerm w_94 = NULL;
    t = z_98(t);
    {
      w_94 = t;
      if(((v_94 != NULL) && (v_94 != w_94)))
        _fail(w_94);
      else
        v_94 = w_94;
    }
  }
  t = b_30;
  {
    ATerm y_94 = NULL;
    t = a_99(t);
    {
      y_94 = t;
      if(((x_94 != NULL) && (x_94 != y_94)))
        _fail(y_94);
      else
        x_94 = y_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_94), not_null(x_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_95 = NULL;
  ATerm c_30;
  c_30 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          ATerm f_95 = NULL,g_95 = NULL;
          f_95 = t;
          c_95 :
          if(match_cons(f_95, sym_Input_1))
            {
              g_95 = ATgetArgument(f_95, 0);
              if(((e_95 != NULL) && (e_95 != g_95)))
                _fail(g_95);
              else
                e_95 = g_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, s_4);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm i_95 = NULL;
          t = term_f_30;
          {
            i_95 = t;
            if(((e_95 != NULL) && (e_95 != i_95)))
              _fail(i_95);
            else
              e_95 = i_95;
          }
        }
      }
  }
  t = c_30;
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(e_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_4);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm o_95 = NULL;
    o_95 = t;
    n_95 :
    if(!(match_string(o_95, "-v")))
      {
        if(!(match_string(o_95, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_h_30;
    t = set_config_0(t);
    t = term_i_30;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_o_30;
    return(t);
  }
  t = Option_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm r_95 = NULL;
    r_95 = t;
    p_95 :
    if(!(match_string(r_95, "-k")))
      {
        if(!(match_string(r_95, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm p_30;
    p_30 = t;
    {
      ATerm s_95 = NULL;
      ATerm t_95 = NULL;
      t = string_to_int_0(t);
      {
        t_95 = t;
        if(((s_95 != NULL) && (s_95 != t_95)))
          _fail(t_95);
        else
          s_95 = t_95;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_30, not_null(s_95));
        t = set_config_0(t);
      }
    }
    t = p_30;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_v_30;
    return(t);
  }
  t = ArgOption_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_95 = NULL;
  w_95 = t;
  t = SSL_string_to_int(not_null(w_95));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm e_96 = NULL;
        e_96 = t;
        z_95 :
        if(!(match_string(e_96, "-S")))
          {
            if(!(match_string(e_96, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_d_31;
        t = set_config_0(t);
        t = term_e_31;
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = term_h_31;
        return(t);
      }
      t = Option_3(t, a_5, b_5, c_5);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              ATerm f_96 = NULL;
              f_96 = t;
              a_96 :
              if(!(match_string(f_96, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm i_96 = NULL;
              ATerm k_31;
              k_31 = t;
              {
                ATerm g_96 = NULL;
                ATerm h_96 = NULL;
                t = string_to_int_0(t);
                {
                  h_96 = t;
                  if(((g_96 != NULL) && (g_96 != h_96)))
                    _fail(h_96);
                  else
                    g_96 = h_96;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_27, not_null(g_96));
                  t = set_config_0(t);
                }
              }
              t = k_31;
              {
                ATerm j_96 = NULL;
                j_96 = t;
                if(((i_96 != NULL) && (i_96 != j_96)))
                  _fail(j_96);
                else
                  i_96 = j_96;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_96));
              }
              return(t);
            }
            ATerm f_5 (ATerm t)
            {
              t = term_l_31;
              return(t);
            }
            t = ArgOption_3(t, d_5, e_5, f_5);
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm k_96 = NULL;
                k_96 = t;
                d_96 :
                if(!(match_string(k_96, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_5 (ATerm t)
              {
                t = term_w_31;
                t = set_config_0(t);
                t = term_x_31;
                return(t);
              }
              ATerm i_5 (ATerm t)
              {
                t = term_y_31;
                return(t);
              }
              t = Option_3(t, g_5, h_5, i_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm q_96 = NULL;
    q_96 = t;
    n_96 :
    if(!(match_string(q_96, "-o")))
      {
        if(!(match_string(q_96, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm t_96 = NULL;
    ATerm h_32;
    h_32 = t;
    {
      ATerm r_96 = NULL;
      ATerm s_96 = NULL;
      s_96 = t;
      if(((r_96 != NULL) && (r_96 != s_96)))
        _fail(s_96);
      else
        r_96 = s_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_32, not_null(r_96));
        t = set_config_0(t);
      }
    }
    t = h_32;
    {
      ATerm u_96 = NULL;
      u_96 = t;
      if(((t_96 != NULL) && (t_96 != u_96)))
        _fail(u_96);
      else
        t_96 = u_96;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_96));
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_j_32;
    return(t);
  }
  t = ArgOption_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = k_32;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm a_97 = NULL;
          a_97 = t;
          z_96 :
          if(!(match_string(a_97, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_s_32;
          t = set_config_0(t);
          t = term_t_32;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_u_32;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
  g_97 = t;
  e_97 :
  if(match_string(g_97, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(g_97) == AT_LIST) && !(ATisEmpty(g_97))))
        {
          h_97 = ATgetFirst((ATermList) g_97);
          i_97 = (ATerm) ATgetNext((ATermList) g_97);
          f_97 :
          if(((ATgetType(i_97) == AT_LIST) && !(ATisEmpty(i_97))))
            {
              j_97 = ATgetFirst((ATermList) i_97);
              k_97 = (ATerm) ATgetNext((ATermList) i_97);
              {
                ATerm o_97 = NULL;
                ATerm v_32;
                v_32 = t;
                {
                  t = not_null(h_97);
                  t = j_0(t);
                }
                t = v_32;
                {
                  ATerm p_97 = NULL;
                  t = not_null(j_97);
                  {
                    t = l_0(t);
                    {
                      p_97 = t;
                      if(((o_97 != NULL) && (o_97 != p_97)))
                        _fail(p_97);
                      else
                        o_97 = p_97;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_97)), not_null(o_97));
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
  ATerm p_5 (ATerm t)
  {
    ATerm w_97 = NULL;
    w_97 = t;
    t_97 :
    if(!(match_string(w_97, "-i")))
      {
        if(!(match_string(w_97, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm z_97 = NULL;
    ATerm w_32;
    w_32 = t;
    {
      ATerm x_97 = NULL;
      ATerm y_97 = NULL;
      y_97 = t;
      if(((x_97 != NULL) && (x_97 != y_97)))
        _fail(y_97);
      else
        x_97 = y_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_32, not_null(x_97));
        t = set_config_0(t);
      }
    }
    t = w_32;
    {
      ATerm a_98 = NULL;
      a_98 = t;
      if(((z_97 != NULL) && (z_97 != a_98)))
        _fail(a_98);
      else
        z_97 = a_98;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_97));
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_y_32;
    return(t);
  }
  t = ArgOption_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, term_d_33));
  {
    t = printnl_0(t);
    {
      t = term_c_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_98 = NULL;
  e_98 = t;
  t = SSL_TicksToSeconds(not_null(e_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,m_98 = NULL;
  j_98 = t;
  i_98 :
  if(match_cons(j_98, sym__2))
    {
      k_98 = ATgetArgument(j_98, 0);
      m_98 = ATgetArgument(j_98, 1);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_98), not_null(m_98));
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = SSL_addr(not_null(k_98), not_null(m_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_106(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm t_98 = NULL,u_98 = NULL,x_98 = NULL;
        t_98 = t;
        s_98 :
        if(((ATgetType(t_98) == AT_LIST) && !(ATisEmpty(t_98))))
          {
            u_98 = ATgetFirst((ATermList) t_98);
            x_98 = (ATerm) ATgetNext((ATermList) t_98);
            {
              ATerm c_99 = NULL;
              ATerm d_99 = NULL;
              t = not_null(x_98);
              {
                t = foldr_2(t, k_106, l_106);
                {
                  d_99 = t;
                  if(((c_99 != NULL) && (c_99 != d_99)))
                    _fail(d_99);
                  else
                    c_99 = d_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_98), not_null(c_99));
                t = l_106(t);
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
ATerm crush_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  ATerm k_99 = NULL;
  ATerm m_99 = NULL;
  k_99 = t;
  {
    ATerm n_99 = NULL;
    ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL;
    t = not_null(k_99);
    {
      n_99 = t;
      {
        t = SSL_explode_term(not_null(n_99));
        {
          p_99 = t;
          j_99 :
          if(match_cons(p_99, sym__2))
            {
              q_99 = ATgetArgument(p_99, 0);
              r_99 = ATgetArgument(p_99, 1);
              if(((m_99 != NULL) && (m_99 != r_99)))
                _fail(r_99);
              else
                m_99 = r_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_99);
      t = foldr_2(t, i_105, j_105);
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
    ATerm s_5 (ATerm t)
    {
      t = term_y_30;
      return(t);
    }
    t = crush_2(t, s_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,f_100 = NULL;
  x_99 = t;
  w_99 :
  if(match_cons(x_99, sym__2))
    {
      y_99 = ATgetArgument(x_99, 0);
      f_100 = ATgetArgument(x_99, 1);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_99), not_null(f_100));
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(not_null(y_99), not_null(f_100));
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
  ATerm l_100 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
      m_100 = t;
      k_100 :
      if(match_cons(m_100, sym__2))
        {
          n_100 = ATgetArgument(m_100, 0);
          o_100 = ATgetArgument(m_100, 1);
          {
            if(((l_100 != NULL) && (l_100 != n_100)))
              _fail(n_100);
            else
              l_100 = n_100;
            if(((l_100 != NULL) && (l_100 != o_100)))
              _fail(o_100);
            else
              l_100 = o_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_117 (ATerm))
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33;
      p_33 = t;
      {
        ATerm r_100 = NULL;
        ATerm s_100 = NULL;
        t = term_w_27;
        {
          t = get_config_0(t);
          {
            s_100 = t;
            if(((r_100 != NULL) && (r_100 != s_100)))
              _fail(s_100);
            else
              r_100 = s_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_100), term_c_15);
          t = geq_0(t);
        }
      }
      t = p_33;
      t = p_117(t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm w_100 = NULL,y_100 = NULL;
    ATerm q_33;
    q_33 = t;
    {
      ATerm x_100 = NULL;
      t = run_time_0(t);
      {
        x_100 = t;
        if(((w_100 != NULL) && (w_100 != x_100)))
          _fail(x_100);
        else
          w_100 = x_100;
      }
    }
    t = q_33;
    {
      ATerm z_100 = NULL;
      t = term_r_33;
      {
        t = get_config_0(t);
        {
          z_100 = t;
          if(((y_100 != NULL) && (y_100 != z_100)))
            _fail(z_100);
          else
            y_100 = z_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_33), not_null(w_100)), term_s_33), not_null(y_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_5);
  {
    t = term_y_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_101 = NULL;
  g_101 = t;
  f_101 :
  if(match_cons(g_101, sym_Version_0))
    {
      ATerm i_101 = NULL,k_101 = NULL;
      ATerm u_33;
      u_33 = t;
      {
        ATerm j_101 = NULL;
        t = SSLgetAnnotations(not_null(g_101));
        {
          j_101 = t;
          if(((i_101 != NULL) && (i_101 != j_101)))
            _fail(j_101);
          else
            i_101 = j_101;
        }
      }
      t = u_33;
      {
        ATerm m_101 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_101));
        {
          m_101 = t;
          if(((k_101 != NULL) && (k_101 != m_101)))
            _fail(m_101);
          else
            k_101 = m_101;
        }
        t = not_null(k_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_115 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, u_5);
  t = r_115(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_101 = NULL;
  t_101 = t;
  t = SSL_table_create(not_null(t_101));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_101 = NULL;
  z_101 = t;
  {
    ATerm z_33;
    z_33 = t;
    {
      t = term_a_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_34, term_b_34, not_null(z_101));
          t = table_put_0(t);
        }
      }
    }
    t = z_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_102 = NULL;
  f_102 = t;
  t = SSL_table_destroy(not_null(f_102));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  t = SSL_exit(not_null(j_102));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
  n_102 = t;
  m_102 :
  if(((ATgetType(n_102) == AT_LIST) && ATisEmpty(n_102)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_102) == AT_LIST) && !(ATisEmpty(n_102))))
        {
          o_102 = ATgetFirst((ATermList) n_102);
          p_102 = (ATerm) ATgetNext((ATermList) n_102);
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
  ATerm c_34;
  c_34 = t;
  {
    ATerm s_102 = NULL;
    ATerm v_102 = NULL;
    ATerm d_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = d_34;
        {
          ATerm t_102 = NULL;
          ATerm u_102 = NULL;
          u_102 = t;
          if(((t_102 != NULL) && (t_102 != u_102)))
            _fail(u_102);
          else
            t_102 = u_102;
          t = (ATerm) ATinsert(ATempty, not_null(t_102));
        }
      }
    {
      v_102 = t;
      if(((s_102 != NULL) && (s_102 != v_102)))
        _fail(v_102);
      else
        s_102 = v_102;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_28, not_null(s_102));
      t = printnl_0(t);
    }
  }
  t = c_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm y_102 (ATerm t)
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = Cons_2(t, n_101, y_102);
      }
    return(t);
  }
  t = y_102(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL;
  h_103 = t;
  e_103 :
  if(((ATgetType(h_103) == AT_LIST) && !(ATisEmpty(h_103))))
    {
      f_103 = ATgetFirst((ATermList) h_103);
      g_103 = (ATerm) ATgetNext((ATermList) h_103);
      {
        ATerm k_103 = NULL;
        t = not_null(g_103);
        {
          ATerm k_34;
          k_34 = t;
          {
            ATerm l_103 = NULL,n_103 = NULL,p_103 = NULL;
            ATerm l_34;
            l_34 = t;
            {
              ATerm m_103 = NULL;
              t = i_0(t);
              {
                m_103 = t;
                if(((l_103 != NULL) && (l_103 != m_103)))
                  _fail(m_103);
                else
                  l_103 = m_103;
              }
            }
            t = l_34;
            {
              ATerm o_103 = NULL;
              t = not_null(f_103);
              {
                t = h_0(t);
                {
                  o_103 = t;
                  if(((n_103 != NULL) && (n_103 != o_103)))
                    _fail(o_103);
                  else
                    n_103 = o_103;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_103)), not_null(n_103));
                {
                  p_103 = t;
                  if(((k_103 != NULL) && (k_103 != p_103)))
                    _fail(p_103);
                  else
                    k_103 = p_103;
                }
              }
            }
          }
          t = k_34;
          {
            ATerm v_5 (ATerm t)
            {
              t = not_null(k_103);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_103) == AT_LIST) && ATisEmpty(h_103)))
        {
          {
            t = term_q_6;
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
  ATerm w_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL;
  a_104 = t;
  z_103 :
  if(match_cons(a_104, sym_Program_1))
    {
      b_104 = ATgetArgument(a_104, 0);
      {
        ATerm e_104 = NULL,g_104 = NULL;
        ATerm f_104 = NULL;
        t = SSLgetAnnotations(not_null(a_104));
        {
          f_104 = t;
          if(((e_104 != NULL) && (e_104 != f_104)))
            _fail(f_104);
          else
            e_104 = f_104;
        }
        {
          t = not_null(b_104);
          {
            ATerm i_104 = NULL;
            t = h_92(t);
            {
              g_104 = t;
              {
                ATerm j_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_104)), not_null(e_104));
                {
                  j_104 = t;
                  if(((i_104 != NULL) && (i_104 != j_104)))
                    _fail(j_104);
                  else
                    i_104 = j_104;
                }
                t = not_null(i_104);
              }
            }
          }
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
  ATerm r_104 = NULL;
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_104 = NULL;
      t = term_r_33;
      {
        t = get_config_0(t);
        {
          s_104 = t;
          if(((r_104 != NULL) && (r_104 != s_104)))
            _fail(s_104);
          else
            r_104 = s_104;
        }
      }
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      {
        ATerm x_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm t_104 = NULL;
            t_104 = t;
            if(((r_104 != NULL) && (r_104 != t_104)))
              _fail(t_104);
            else
              r_104 = t_104;
            return(t);
          }
          t = Program_1(t, y_5);
          return(t);
        }
        t = fetch_1(t, x_5);
      }
    }
  {
    t = term_o_34;
    {
      t = echo_0(t);
      {
        t = term_r_34;
        {
          t = table_get_0(t);
          {
            ATerm z_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, z_5);
            {
              ATerm a_6 (ATerm t)
              {
                ATerm u_104 = NULL;
                ATerm v_104 = NULL;
                v_104 = t;
                if(((u_104 != NULL) && (u_104 != v_104)))
                  _fail(v_104);
                else
                  u_104 = v_104;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_104)), term_s_34);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, a_6);
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
  ATerm t_34;
  t_34 = t;
  {
    ATerm a_105 = NULL;
    ATerm b_105 = NULL;
    b_105 = t;
    if(((a_105 != NULL) && (a_105 != b_105)))
      _fail(b_105);
    else
      a_105 = b_105;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, not_null(a_105)));
      t = printnl_0(t);
    }
  }
  t = t_34;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_121 (ATerm))
{
  ATerm u_34;
  u_34 = t;
  {
    t = z_121(t);
    t = debug_0(t);
  }
  t = u_34;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_92 (ATerm))
{
  ATerm n_105 = NULL,o_105 = NULL;
  n_105 = t;
  h_105 :
  if(match_cons(n_105, sym_Undefined_1))
    {
      o_105 = ATgetArgument(n_105, 0);
      {
        ATerm v_105 = NULL,a_106 = NULL;
        ATerm w_105 = NULL;
        t = SSLgetAnnotations(not_null(n_105));
        {
          w_105 = t;
          if(((v_105 != NULL) && (v_105 != w_105)))
            _fail(w_105);
          else
            v_105 = w_105;
        }
        {
          t = not_null(o_105);
          {
            ATerm c_106 = NULL;
            t = i_92(t);
            {
              a_106 = t;
              {
                ATerm d_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_106)), not_null(v_105));
                {
                  d_106 = t;
                  if(((c_106 != NULL) && (c_106 != d_106)))
                    _fail(d_106);
                  else
                    c_106 = d_106;
                }
                t = not_null(c_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_101 (ATerm))
{
  ATerm i_106 (ATerm t)
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_101, _id);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = Cons_2(t, _id, i_106);
      }
    return(t);
  }
  t = i_106(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_118 (ATerm))
{
  t = fetch_1(t, s_118);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_106 = NULL;
  s_106 = t;
  r_106 :
  if(match_cons(s_106, sym_Help_0))
    {
      ATerm u_106 = NULL,w_106 = NULL;
      ATerm x_34;
      x_34 = t;
      {
        ATerm v_106 = NULL;
        t = SSLgetAnnotations(not_null(s_106));
        {
          v_106 = t;
          if(((u_106 != NULL) && (u_106 != v_106)))
            _fail(v_106);
          else
            u_106 = v_106;
        }
      }
      t = x_34;
      {
        ATerm x_106 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_106));
        {
          x_106 = t;
          if(((w_106 != NULL) && (w_106 != x_106)))
            _fail(x_106);
          else
            w_106 = x_106;
        }
        t = not_null(w_106);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_98(t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
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
        ATerm a_35;
        a_35 = t;
        {
          ATerm t_107 = NULL;
          ATerm u_107 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(o_107));
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
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
        t = a_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_119 (ATerm))
{
  ATerm y_107 = NULL;
  ATerm g_108 = NULL;
  t = term_q_6;
  {
    t = x_119(t);
    {
      g_108 = t;
      if(((y_107 != NULL) && (y_107 != g_108)))
        _fail(g_108);
      else
        y_107 = g_108;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_34, term_q_34, not_null(y_107));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm o_108 = NULL,q_108 = NULL,r_108 = NULL;
  o_108 = t;
  n_108 :
  if(match_string(o_108, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(o_108) == AT_LIST) && !(ATisEmpty(o_108))))
        {
          q_108 = ATgetFirst((ATermList) o_108);
          r_108 = (ATerm) ATgetNext((ATermList) o_108);
          {
            ATerm w_108 = NULL;
            ATerm d_35;
            d_35 = t;
            {
              t = not_null(q_108);
              t = a_0(t);
            }
            t = d_35;
            {
              ATerm x_108 = NULL;
              t = term_q_6;
              {
                t = c_0(t);
                {
                  x_108 = t;
                  if(((w_108 != NULL) && (w_108 != x_108)))
                    _fail(x_108);
                  else
                    w_108 = x_108;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_108)), not_null(w_108));
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
  ATerm b_6 (ATerm t)
  {
    ATerm c_109 = NULL;
    c_109 = t;
    b_109 :
    if(!(match_string(c_109, "--help")))
      {
        if(!(match_string(c_109, "-h")))
          {
            if(!(match_string(c_109, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_j_35;
    {
      t = set_config_0(t);
      t = term_k_35;
    }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_l_35;
    return(t);
  }
  t = Option_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL;
  f_109 = t;
  e_109 :
  if(((ATgetType(f_109) == AT_LIST) && !(ATisEmpty(f_109))))
    {
      g_109 = ATgetFirst((ATermList) f_109);
      h_109 = (ATerm) ATgetNext((ATermList) f_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_82 (ATerm), ATerm c_82 (ATerm))
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  s_109 = t;
  r_109 :
  if(((ATgetType(s_109) == AT_LIST) && !(ATisEmpty(s_109))))
    {
      t_109 = ATgetFirst((ATermList) s_109);
      u_109 = (ATerm) ATgetNext((ATermList) s_109);
      {
        ATerm y_109 = NULL,a_110 = NULL;
        ATerm z_109 = NULL;
        t = SSLgetAnnotations(not_null(s_109));
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
        {
          t = not_null(t_109);
          {
            ATerm g_110 = NULL;
            t = b_82(t);
            {
              a_110 = t;
              {
                t = not_null(u_109);
                {
                  ATerm i_110 = NULL;
                  t = c_82(t);
                  {
                    g_110 = t;
                    {
                      ATerm j_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_110)), not_null(a_110)), not_null(y_109));
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
  ATerm t_110 = NULL;
  t_110 = t;
  s_110 :
  if(((ATgetType(t_110) == AT_LIST) && ATisEmpty(t_110)))
    {
      {
        ATerm v_110 = NULL,x_110 = NULL;
        ATerm m_35;
        m_35 = t;
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
        t = m_35;
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
        t = (ATerm) ATmakeAppl(sym__3, term_h_27, not_null(f_111), not_null(g_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_119 (ATerm))
{
  ATerm s_35;
  s_35 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_35;
        t = v_119(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
        }
      }
  }
  t = s_35;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm o_111 = NULL;
      ATerm w_35;
      w_35 = t;
      {
        ATerm m_111 = NULL;
        ATerm n_111 = NULL;
        n_111 = t;
        if(((m_111 != NULL) && (m_111 != n_111)))
          _fail(n_111);
        else
          m_111 = n_111;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_33, not_null(m_111));
          t = set_config_0(t);
        }
      }
      t = w_35;
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
    ATerm f_6 (ATerm t)
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              {
                t = v_119(t);
                t = Cons_2(t, _id, f_6);
              }
            }
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_6, f_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
  ATerm j_36;
  j_36 = t;
  {
    ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL;
    c_112 = t;
    y_111 :
    if(match_cons(c_112, sym__3))
      {
        d_112 = ATgetArgument(c_112, 0);
        e_112 = ATgetArgument(c_112, 1);
        f_112 = ATgetArgument(c_112, 2);
        {
          if(((z_111 != NULL) && (z_111 != d_112)))
            _fail(d_112);
          else
            z_111 = d_112;
          {
            if(((a_112 != NULL) && (a_112 != e_112)))
              _fail(e_112);
            else
              a_112 = e_112;
            {
              if(((b_112 != NULL) && (b_112 != f_112)))
                _fail(f_112);
              else
                b_112 = f_112;
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
  t = j_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_119 (ATerm))
{
  ATerm o_112 = NULL;
  ATerm k_36;
  k_36 = t;
  {
    t = term_l_36;
    t = table_put_0(t);
  }
  t = k_36;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_119(t);
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm o_36 = t;
      int r_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_36;
          u_36 = t;
          {
            ATerm y_36 = t;
            int z_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_e_35;
                t = get_config_0(t);
                LocalPopChoice(z_36);
              }
            else
              {
                t = y_36;
                t = fetch_1(t, Help_0);
              }
          }
          t = u_36;
          {
            t = system_usage_0(t);
            {
              t = term_y_30;
              t = exit_0(t);
            }
          }
          LocalPopChoice(r_36);
        }
      else
        {
          t = o_36;
          {
            ATerm a_37 = t;
            int c_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_6 (ATerm t)
                  {
                    ATerm p_112 = NULL;
                    p_112 = t;
                    if(((o_112 != NULL) && (o_112 != p_112)))
                      _fail(p_112);
                    else
                      o_112 = p_112;
                    return(t);
                  }
                  t = Undefined_1(t, i_6);
                  return(t);
                }
                t = fetch_1(t, h_6);
                {
                  ATerm k_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_112)), term_d_37);
                    return(t);
                  }
                  t = say_1(t, k_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_15;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(c_37);
              }
            else
              {
                t = a_37;
                {
                }
              }
          }
        }
      {
        ATerm e_37;
        e_37 = t;
        {
          t = term_p_34;
          t = table_destroy_0(t);
        }
        t = e_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm))
{
  t = parse_options_1(t, x_115);
  {
    t = store_options_0(t);
    {
      t = z_115(t);
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_115);
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            {
              ATerm l_37 = t;
              int m_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_116(t);
                  t = report_success_0(t);
                  LocalPopChoice(m_37);
                }
              else
                {
                  t = l_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm n_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_116(t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = n_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_116);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_6, q_116, r_116, m_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm o_6 (ATerm t)
    {
      ATerm t_37;
      t_37 = t;
      {
        ATerm s_112 = NULL;
        ATerm t_112 = NULL;
        t = term_r_33;
        {
          t = get_config_0(t);
          {
            t_112 = t;
            if(((s_112 != NULL) && (s_112 != t_112)))
              _fail(t_112);
            else
              s_112 = t_112;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, not_null(s_112)));
          t = printnl_0(t);
        }
      }
      t = t_37;
      return(t);
    }
    t = if_verbose2_1(t, o_6);
    return(t);
  }
  t = iowrap_4(t, i_116, j_116, k_116, n_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_116 (ATerm), ATerm h_116 (ATerm))
{
  t = iowrap_3(t, g_116, h_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_116 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    t = _2(t, _id, d_116);
    return(t);
  }
  t = iowrap_2(t, p_6, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
