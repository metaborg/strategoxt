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
ATerm term_g_53;
ATerm term_u_52;
ATerm term_m_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_x_51;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_x_49;
ATerm term_s_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_h_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_b_45;
ATerm term_p_44;
ATerm term_l_44;
ATerm term_i_44;
ATerm term_v_43;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_v_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_q_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_n_33;
ATerm term_j_33;
ATerm term_y_32;
ATerm term_f_32;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_a_29;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_e_21;
ATerm term_x_20;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_n_17;
ATerm term_e_16;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
void init_constant_terms (void)
{
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Var_1, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Var_1, term_u_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Anno_2, term_t_21, term_v_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Var_1, term_c_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Var_1, term_g_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Anno_2, term_f_22, term_h_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Call_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_BAM_3, term_y_22, term_t_21, term_f_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_BAM_3, term_b_23, term_v_21, term_h_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Var_1, term_l_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_24);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, term_p_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_21);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_30);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Op_2, term_f_34, (ATerm) ATempty);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Op_2, term_u_34, (ATerm) ATempty);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_35);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_36);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_39);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym__2, term_v_45, term_h_38);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_z_25);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_25);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym__2, term_y_46, term_h_38);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_h_38);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym__2, term_o_50, term_p_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym__2, term_x_51, term_h_38);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, (ATerm) ATempty);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_114 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm h_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_77 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm k_106 (ATerm));
ATerm timing_1 (ATerm, ATerm f_85 (ATerm));
ATerm spaste_1 (ATerm, ATerm s_113 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm Let_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm y_75 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm o_110 (ATerm, ATerm (ATerm)), ATerm p_110 (ATerm), ATerm q_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_110 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm ListVarScope_0 (ATerm);
ATerm DesugarListMatching_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm TupleDeclarations_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_0 (ATerm);
ATerm CheckTuple_0 (ATerm);
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm m_89 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm d_114 (ATerm), ATerm e_114 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm t_112 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_113 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm z_110 (ATerm), ATerm a_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm m_110 (ATerm), ATerm n_110 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm e_111 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm g_92 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_91 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm a_110 (ATerm), ATerm b_110 (ATerm, ATerm (ATerm)), ATerm c_110 (ATerm), ATerm d_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_110 (ATerm, ATerm (ATerm)), ATerm f_110 (ATerm));
ATerm substitute_5 (ATerm, ATerm h_110 (ATerm), ATerm i_110 (ATerm, ATerm (ATerm)), ATerm j_110 (ATerm), ATerm k_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_110 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm u_112 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm s_112 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm c_114 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm));
ATerm lchoice_1 (ATerm, ATerm b_114 (ATerm));
ATerm LChoice_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm y_113 (ATerm), ATerm z_113 (ATerm));
ATerm choice_1 (ATerm, ATerm a_114 (ATerm));
ATerm Choice_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm RootApp_1 (ATerm, ATerm k_78 (ATerm));
ATerm App_2 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm f_103 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm t_74 (ATerm));
ATerm Build_1 (ATerm, ATerm u_74 (ATerm));
ATerm VarScope_1 (ATerm, ATerm x_113 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm e_77 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_87 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm c_95 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm o_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm p_112 (ATerm));
ATerm oncetd_1 (ATerm, ATerm e_88 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm n_112 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm c_86 (ATerm));
ATerm listtd_1 (ATerm, ATerm y_93 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm d_78 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_74 (ATerm), ATerm y_74 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm k_98 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm diff_1 (ATerm, ATerm g_98 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm zip_1 (ATerm, ATerm x_94 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm for_3 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm b_87 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_103 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm s_88 (ATerm));
ATerm assert_1 (ATerm, ATerm e_103 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm f_77 (ATerm));
ATerm Constructors_1 (ATerm, ATerm a_77 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm b_103 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm a_103 (ATerm));
ATerm scope_2 (ATerm, ATerm c_103 (ATerm), ATerm d_103 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_100 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_93 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_106 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_104 (ATerm));
ATerm debug_1 (ATerm, ATerm l_103 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_100 (ATerm), ATerm r_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm));
ATerm crush_2 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_106 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_108 (ATerm));
ATerm map_1 (ATerm, ATerm r_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_108 (ATerm));
ATerm Program_1 (ATerm, ATerm t_84 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_103 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_84 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_93 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_107 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_105 (ATerm), ATerm e_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_105 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  n_9 = t;
  l_9 :
  if(match_cons(n_9, sym_ExplodeCong_2))
    {
      o_9 = ATgetArgument(n_9, 0);
      m_9 = ATgetArgument(n_9, 1);
      {
        ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
        ATerm v_9 = NULL;
        ATerm w_9 = NULL;
        t = new_0(t);
        {
          v_9 = t;
          {
            if(((r_9 != NULL) && (r_9 != v_9)))
              _fail(v_9);
            else
              r_9 = v_9;
            {
              ATerm x_9 = NULL;
              t = new_0(t);
              {
                w_9 = t;
                {
                  if(((s_9 != NULL) && (s_9 != w_9)))
                    _fail(w_9);
                  else
                    s_9 = w_9;
                  {
                    ATerm y_9 = NULL;
                    t = new_0(t);
                    {
                      x_9 = t;
                      {
                        if(((t_9 != NULL) && (t_9 != x_9)))
                          _fail(x_9);
                        else
                          t_9 = x_9;
                        {
                          t = new_0(t);
                          {
                            y_9 = t;
                            if(((u_9 != NULL) && (u_9 != y_9)))
                              _fail(y_9);
                            else
                              u_9 = y_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_9)), not_null(t_9)), not_null(s_9)), not_null(r_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(o_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_9)))))));
      }
    }
  else
    {
      if(match_cons(n_9, sym_Build_1))
        {
          o_9 = ATgetArgument(n_9, 0);
          {
            ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
            ATerm e_10 = NULL;
            ATerm i_10 = NULL;
            t = new_0(t);
            {
              e_10 = t;
              {
                if(((c_10 != NULL) && (c_10 != e_10)))
                  _fail(e_10);
                else
                  c_10 = e_10;
                {
                  t = not_null(o_9);
                  {
                    ATerm e_0 (ATerm t)
                    {
                      ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
                      f_10 = t;
                      e_9 :
                      if(match_cons(f_10, sym_Explode_2))
                        {
                          g_10 = ATgetArgument(f_10, 0);
                          h_10 = ATgetArgument(f_10, 1);
                          {
                            if(((a_10 != NULL) && (a_10 != g_10)))
                              _fail(g_10);
                            else
                              a_10 = g_10;
                            {
                              if(((b_10 != NULL) && (b_10 != h_10)))
                                _fail(h_10);
                              else
                                b_10 = h_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_10));
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
                      i_10 = t;
                      if(((d_10 != NULL) && (d_10 != i_10)))
                        _fail(i_10);
                      else
                        d_10 = i_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_10)), not_null(a_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_10)))));
          }
        }
      else
        {
          if(match_cons(n_9, sym_Match_1))
            {
              o_9 = ATgetArgument(n_9, 0);
              {
                ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
                ATerm p_10 = NULL;
                ATerm q_10 = NULL;
                t = new_0(t);
                {
                  p_10 = t;
                  {
                    if(((m_10 != NULL) && (m_10 != p_10)))
                      _fail(p_10);
                    else
                      m_10 = p_10;
                    {
                      ATerm u_10 = NULL;
                      t = new_0(t);
                      {
                        q_10 = t;
                        {
                          if(((n_10 != NULL) && (n_10 != q_10)))
                            _fail(q_10);
                          else
                            n_10 = q_10;
                          {
                            t = not_null(o_9);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
                                r_10 = t;
                                j_9 :
                                if(match_cons(r_10, sym_Explode_2))
                                  {
                                    s_10 = ATgetArgument(r_10, 0);
                                    t_10 = ATgetArgument(r_10, 1);
                                    {
                                      if(((k_10 != NULL) && (k_10 != s_10)))
                                        _fail(s_10);
                                      else
                                        k_10 = s_10;
                                      {
                                        if(((l_10 != NULL) && (l_10 != t_10)))
                                          _fail(t_10);
                                        else
                                          l_10 = t_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_10));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, h_0);
                              {
                                u_10 = t;
                                if(((o_10 != NULL) && (o_10 != u_10)))
                                  _fail(u_10);
                                else
                                  o_10 = u_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_10)), (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_10)), not_null(k_10)))))));
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
  ATerm z_11 = NULL,a_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym_Match_1))
    {
      a_12 = ATgetArgument(z_11, 0);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
            ATerm g_12 = NULL;
            ATerm k_12 = NULL;
            t = new_0(t);
            {
              g_12 = t;
              {
                if(((e_12 != NULL) && (e_12 != g_12)))
                  _fail(g_12);
                else
                  e_12 = g_12;
                {
                  t = not_null(a_12);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
                      h_12 = t;
                      o_11 :
                      if(match_cons(h_12, sym_Anno_2))
                        {
                          i_12 = ATgetArgument(h_12, 0);
                          j_12 = ATgetArgument(h_12, 1);
                          {
                            if(((c_12 != NULL) && (c_12 != i_12)))
                              _fail(i_12);
                            else
                              c_12 = i_12;
                            {
                              if(((d_12 != NULL) && (d_12 != j_12)))
                                _fail(j_12);
                              else
                                d_12 = j_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_12)), not_null(c_12));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_0);
                    {
                      k_12 = t;
                      if(((f_12 != NULL) && (f_12 != k_12)))
                        _fail(k_12);
                      else
                        f_12 = k_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_12))))));
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
                  ATerm p_12 = NULL;
                  ATerm s_12 = NULL;
                  t = new_0(t);
                  {
                    p_12 = t;
                    {
                      if(((n_12 != NULL) && (n_12 != p_12)))
                        _fail(p_12);
                      else
                        n_12 = p_12;
                      {
                        t = not_null(a_12);
                        {
                          ATerm r_0 (ATerm t)
                          {
                            ATerm q_12 = NULL,r_12 = NULL;
                            q_12 = t;
                            s_11 :
                            if(match_cons(q_12, sym_RootApp_1))
                              {
                                r_12 = ATgetArgument(q_12, 0);
                                {
                                  if(((m_12 != NULL) && (m_12 != r_12)))
                                    _fail(r_12);
                                  else
                                    m_12 = r_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_12));
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
                            s_12 = t;
                            if(((o_12 != NULL) && (o_12 != s_12)))
                              _fail(s_12);
                            else
                              o_12 = s_12;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_12))), not_null(m_12))));
                  ;
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  {
                    ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                    ATerm y_12 = NULL;
                    ATerm c_13 = NULL;
                    t = new_0(t);
                    {
                      y_12 = t;
                      {
                        if(((w_12 != NULL) && (w_12 != y_12)))
                          _fail(y_12);
                        else
                          w_12 = y_12;
                        {
                          t = not_null(a_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
                              z_12 = t;
                              w_11 :
                              if(match_cons(z_12, sym_App_2))
                                {
                                  a_13 = ATgetArgument(z_12, 0);
                                  b_13 = ATgetArgument(z_12, 1);
                                  {
                                    if(((v_12 != NULL) && (v_12 != a_13)))
                                      _fail(a_13);
                                    else
                                      v_12 = a_13;
                                    {
                                      if(((u_12 != NULL) && (u_12 != b_13)))
                                        _fail(b_13);
                                      else
                                        u_12 = b_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12));
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
                              c_13 = t;
                              if(((x_12 != NULL) && (x_12 != c_13)))
                                _fail(c_13);
                              else
                                x_12 = c_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_12)), not_null(v_12)))));
                  }
                }
            }
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
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  t_13 = t;
  r_13 :
  if(match_cons(t_13, sym_Match_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      s_13 :
      if(match_cons(u_13, sym_RootApp_1))
        {
          v_13 = ATgetArgument(u_13, 0);
          t = not_null(v_13);
        }
      else
        {
          if(match_cons(u_13, sym_App_2))
            {
              v_13 = ATgetArgument(u_13, 0);
              w_13 = ATgetArgument(u_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(v_13), not_null(w_13));
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
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_Match_1))
    {
      j_14 = ATgetArgument(i_14, 0);
      {
        ATerm l_14 = NULL,m_14 = NULL;
        ATerm q_14 = NULL;
        t = not_null(j_14);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
            n_14 = t;
            e_14 :
            if(match_cons(n_14, sym_RootApp_1))
              {
                o_14 = ATgetArgument(n_14, 0);
                f_14 :
                if(match_cons(o_14, sym_Match_1))
                  {
                    p_14 = ATgetArgument(o_14, 0);
                    {
                      if(((l_14 != NULL) && (l_14 != p_14)))
                        _fail(p_14);
                      else
                        l_14 = p_14;
                      t = not_null(l_14);
                    }
                  }
                else
                  {
                    _fail(t);
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
            q_14 = t;
            if(((m_14 != NULL) && (m_14 != q_14)))
              _fail(q_14);
            else
              m_14 = q_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_14));
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
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = g_15;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Build_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm m_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
            ATerm r_15 = NULL;
            ATerm v_15 = NULL;
            t = new_0(t);
            {
              r_15 = t;
              {
                if(((p_15 != NULL) && (p_15 != r_15)))
                  _fail(r_15);
                else
                  p_15 = r_15;
                {
                  t = not_null(l_15);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
                      s_15 = t;
                      z_14 :
                      if(match_cons(s_15, sym_Anno_2))
                        {
                          t_15 = ATgetArgument(s_15, 0);
                          u_15 = ATgetArgument(s_15, 1);
                          {
                            if(((n_15 != NULL) && (n_15 != t_15)))
                              _fail(t_15);
                            else
                              n_15 = t_15;
                            {
                              if(((o_15 != NULL) && (o_15 != u_15)))
                                _fail(u_15);
                              else
                                o_15 = u_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_15));
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
                      v_15 = t;
                      if(((q_15 != NULL) && (q_15 != v_15)))
                        _fail(v_15);
                      else
                        q_15 = v_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_15)), not_null(n_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_15))));
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = m_15;
            {
              ATerm o_16 = t;
              int p_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
                  ATerm a_16 = NULL;
                  ATerm d_16 = NULL;
                  t = new_0(t);
                  {
                    a_16 = t;
                    {
                      if(((y_15 != NULL) && (y_15 != a_16)))
                        _fail(a_16);
                      else
                        y_15 = a_16;
                      {
                        t = not_null(l_15);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm b_16 = NULL,c_16 = NULL;
                            b_16 = t;
                            d_15 :
                            if(match_cons(b_16, sym_RootApp_1))
                              {
                                c_16 = ATgetArgument(b_16, 0);
                                {
                                  if(((x_15 != NULL) && (x_15 != c_16)))
                                    _fail(c_16);
                                  else
                                    x_15 = c_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_15));
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
                            d_16 = t;
                            if(((z_15 != NULL) && (z_15 != d_16)))
                              _fail(d_16);
                            else
                              z_15 = d_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_15))));
                  ;
                  LocalPopChoice(p_16);
                }
              else
                {
                  t = o_16;
                  {
                    ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
                    ATerm j_16 = NULL;
                    ATerm n_16 = NULL;
                    t = new_0(t);
                    {
                      j_16 = t;
                      {
                        if(((h_16 != NULL) && (h_16 != j_16)))
                          _fail(j_16);
                        else
                          h_16 = j_16;
                        {
                          t = not_null(l_15);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
                              k_16 = t;
                              h_15 :
                              if(match_cons(k_16, sym_App_2))
                                {
                                  l_16 = ATgetArgument(k_16, 0);
                                  m_16 = ATgetArgument(k_16, 1);
                                  {
                                    if(((f_16 != NULL) && (f_16 != l_16)))
                                      _fail(l_16);
                                    else
                                      f_16 = l_16;
                                    {
                                      if(((g_16 != NULL) && (g_16 != m_16)))
                                        _fail(m_16);
                                      else
                                        g_16 = m_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_16));
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
                              n_16 = t;
                              if(((i_16 != NULL) && (i_16 != n_16)))
                                _fail(n_16);
                              else
                                i_16 = n_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_16), not_null(g_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_16))));
                  }
                }
            }
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  c_17 :
  if(match_cons(e_17, sym_Build_1))
    {
      f_17 = ATgetArgument(e_17, 0);
      d_17 :
      if(match_cons(f_17, sym_RootApp_1))
        {
          g_17 = ATgetArgument(f_17, 0);
          t = not_null(g_17);
        }
      else
        {
          if(match_cons(f_17, sym_App_2))
            {
              g_17 = ATgetArgument(f_17, 0);
              h_17 = ATgetArgument(f_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_17)), not_null(g_17));
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
ATerm As_2 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_As_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm z_17 = NULL,b_18 = NULL;
        ATerm a_18 = NULL;
        t = SSLgetAnnotations(not_null(t_17));
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
        {
          t = not_null(u_17);
          {
            ATerm d_18 = NULL;
            t = s_78(t);
            {
              b_18 = t;
              {
                t = not_null(v_17);
                {
                  ATerm f_18 = NULL;
                  t = t_78(t);
                  {
                    d_18 = t;
                    {
                      ATerm g_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(b_18), not_null(d_18)), not_null(z_17));
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
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_Prim_2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        ATerm y_18 = NULL,a_19 = NULL;
        ATerm z_18 = NULL;
        t = SSLgetAnnotations(not_null(s_18));
        {
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
        }
        {
          t = not_null(t_18);
          {
            ATerm c_19 = NULL;
            t = p_74(t);
            {
              a_19 = t;
              {
                t = not_null(u_18);
                {
                  ATerm e_19 = NULL;
                  t = q_74(t);
                  {
                    c_19 = t;
                    {
                      ATerm f_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(a_19), not_null(c_19)), not_null(y_18));
                      {
                        f_19 = t;
                        if(((e_19 != NULL) && (e_19 != f_19)))
                          _fail(f_19);
                        else
                          e_19 = f_19;
                      }
                      t = not_null(e_19);
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
ATerm Explode_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Explode_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      {
        ATerm x_19 = NULL,z_19 = NULL;
        ATerm y_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          y_19 = t;
          if(((x_19 != NULL) && (x_19 != y_19)))
            _fail(y_19);
          else
            x_19 = y_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm b_20 = NULL;
            t = o_78(t);
            {
              z_19 = t;
              {
                t = not_null(t_19);
                {
                  ATerm d_20 = NULL;
                  t = p_78(t);
                  {
                    b_20 = t;
                    {
                      ATerm e_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(z_19), not_null(b_20)), not_null(x_19));
                      {
                        e_20 = t;
                        if(((d_20 != NULL) && (d_20 != e_20)))
                          _fail(e_20);
                        else
                          d_20 = e_20;
                      }
                      t = not_null(d_20);
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
ATerm pat_td_1 (ATerm t, ATerm g_114 (ATerm))
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_114(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, g_114);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, a_1);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_114);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_114);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
                        ;
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm y_16 = t;
                          int z_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_1 (ATerm t)
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_114);
                                  return(t);
                                }
                                t = fetch_1(t, h_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, g_1);
                              ;
                              LocalPopChoice(z_16);
                            }
                          else
                            {
                              t = y_16;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_114);
                                  return(t);
                                }
                                t = As_2(t, _id, j_1);
                              }
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
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym_Build_1))
    {
      w_20 = ATgetArgument(v_20, 0);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = NULL,z_20 = NULL;
            ATerm d_21 = NULL;
            t = not_null(w_20);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
                a_21 = t;
                n_20 :
                if(match_cons(a_21, sym_RootApp_1))
                  {
                    b_21 = ATgetArgument(a_21, 0);
                    o_20 :
                    if(match_cons(b_21, sym_Build_1))
                      {
                        c_21 = ATgetArgument(b_21, 0);
                        {
                          if(((y_20 != NULL) && (y_20 != c_21)))
                            _fail(c_21);
                          else
                            y_20 = c_21;
                          t = not_null(y_20);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = pat_td_1(t, k_1);
              {
                d_21 = t;
                if(((z_20 != NULL) && (z_20 != d_21)))
                  _fail(d_21);
                else
                  z_20 = d_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_20));
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
              ATerm m_21 = NULL;
              t = not_null(w_20);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
                  i_21 = t;
                  r_20 :
                  if(match_cons(i_21, sym_App_2))
                    {
                      j_21 = ATgetArgument(i_21, 0);
                      l_21 = ATgetArgument(i_21, 1);
                      s_20 :
                      if(match_cons(j_21, sym_Build_1))
                        {
                          k_21 = ATgetArgument(j_21, 0);
                          {
                            if(((g_21 != NULL) && (g_21 != k_21)))
                              _fail(k_21);
                            else
                              g_21 = k_21;
                            {
                              if(((f_21 != NULL) && (f_21 != l_21)))
                                _fail(l_21);
                              else
                                f_21 = l_21;
                              t = not_null(g_21);
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
                t = pat_td_1(t, m_1);
                {
                  m_21 = t;
                  if(((h_21 != NULL) && (h_21 != m_21)))
                    _fail(m_21);
                  else
                    h_21 = m_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_21));
            }
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
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  ATerm d_22 (ATerm t)
  {
    ATerm a_22 = NULL;
    ATerm b_22 = NULL;
    t = not_null(x_21);
    {
      ATerm m_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_17;
        }
      {
        t = new_0(t);
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(a_22)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_21)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_22))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_22))));
    return(t);
  }
  ATerm e_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_21))));
    return(t);
  }
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym_Var_1))
    {
      y_21 = ATgetArgument(x_21, 0);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_22(t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = e_22(t);
          }
      }
    }
  else
    {
      t = d_22(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Prim_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
        t = not_null(n_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm q_17 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_17;
              }
            return(t);
          }
          t = fetch_1(t, n_1);
          {
            t = not_null(n_22);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm p_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, p_1);
                {
                  t_22 = t;
                  i_22 :
                  if(match_cons(t_22, sym__2))
                    {
                      u_22 = ATgetArgument(t_22, 0);
                      v_22 = ATgetArgument(t_22, 1);
                      j_22 :
                      if(match_cons(v_22, sym__2))
                        {
                          w_22 = ATgetArgument(v_22, 0);
                          x_22 = ATgetArgument(v_22, 1);
                          {
                            if(((q_22 != NULL) && (q_22 != u_22)))
                              _fail(u_22);
                            else
                              q_22 = u_22;
                            {
                              if(((r_22 != NULL) && (r_22 != w_22)))
                                _fail(w_22);
                              else
                                r_22 = w_22;
                              if(((s_22 != NULL) && (s_22 != x_22)))
                                _fail(x_22);
                              else
                                s_22 = x_22;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_22), not_null(s_22))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm r_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = r_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  {
                    ATerm c_18 = t;
                    int e_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(e_18);
                      }
                    else
                      {
                        t = c_18;
                        {
                          ATerm h_18 = t;
                          int i_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(i_18);
                            }
                          else
                            {
                              t = h_18;
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
      t = repeat_1(t, s_1);
    }
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, t_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_Strategies_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm j_23 = NULL,l_23 = NULL;
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(f_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        {
          t = not_null(g_23);
          {
            ATerm n_23 = NULL;
            t = h_77(t);
            {
              l_23 = t;
              {
                ATerm o_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_23)), not_null(j_23));
                {
                  o_23 = t;
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                }
                t = not_null(n_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_Specification_1))
    {
      z_23 = ATgetArgument(y_23, 0);
      {
        ATerm c_24 = NULL,e_24 = NULL;
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
        {
          t = not_null(z_23);
          {
            ATerm g_24 = NULL;
            t = j_77(t);
            {
              e_24 = t;
              {
                ATerm h_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(e_24)), not_null(c_24));
                {
                  h_24 = t;
                  if(((g_24 != NULL) && (g_24 != h_24)))
                    _fail(h_24);
                  else
                    g_24 = h_24;
                }
                t = not_null(g_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm j_18;
    j_18 = t;
    {
      ATerm n_24 = NULL;
      ATerm o_24 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_l_18);
        t = geq_0(t);
      }
    }
    t = j_18;
    t = k_106(t);
    return(t);
  }
  t = try_1(t, u_1);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, f_85);
    }
    t = m_18;
    return(t);
  }
  t = if_verbose3_1(t, v_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm s_113 (ATerm))
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        t = split_2(t, _id, s_113);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
            w_24 = t;
            r_24 :
            if(match_cons(w_24, sym__2))
              {
                x_24 = ATgetArgument(w_24, 0);
                b_25 = ATgetArgument(w_24, 1);
                s_24 :
                if(match_cons(x_24, sym_SDef_3))
                  {
                    y_24 = ATgetArgument(x_24, 0);
                    z_24 = ATgetArgument(x_24, 1);
                    a_25 = ATgetArgument(x_24, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_25), not_null(z_24), not_null(a_25));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, x_1);
        }
        return(t);
      }
      t = Let_2(t, w_1, _id);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = split_2(t, _id, s_113);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
                  f_25 = t;
                  u_24 :
                  if(match_cons(f_25, sym__2))
                    {
                      g_25 = ATgetArgument(f_25, 0);
                      j_25 = ATgetArgument(f_25, 1);
                      v_24 :
                      if(match_cons(g_25, sym_VarDec_2))
                        {
                          h_25 = ATgetArgument(g_25, 0);
                          i_25 = ATgetArgument(g_25, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_25), not_null(i_25));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, z_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, y_1, _id);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm a_2 (ATerm t)
              {
                t = s_113(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, a_2, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Rec_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm b_26 = NULL,d_26 = NULL;
        ATerm c_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm f_26 = NULL;
            t = z_75(t);
            {
              d_26 = t;
              {
                t = not_null(x_25);
                {
                  ATerm h_26 = NULL;
                  t = a_76(t);
                  {
                    f_26 = t;
                    {
                      ATerm i_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(d_26), not_null(f_26)), not_null(b_26));
                      {
                        i_26 = t;
                        if(((h_26 != NULL) && (h_26 != i_26)))
                          _fail(i_26);
                        else
                          h_26 = i_26;
                      }
                      t = not_null(h_26);
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
ATerm SDef_3 (ATerm t, ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_SDef_3))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      y_26 = ATgetArgument(v_26, 2);
      {
        ATerm d_27 = NULL,f_27 = NULL;
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(v_26));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
        {
          t = not_null(w_26);
          {
            ATerm h_27 = NULL;
            t = d_76(t);
            {
              f_27 = t;
              {
                t = not_null(x_26);
                {
                  ATerm j_27 = NULL;
                  t = e_76(t);
                  {
                    h_27 = t;
                    {
                      t = not_null(y_26);
                      {
                        ATerm l_27 = NULL;
                        t = f_76(t);
                        {
                          j_27 = t;
                          {
                            ATerm m_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_27), not_null(h_27), not_null(j_27)), not_null(d_27));
                            {
                              m_27 = t;
                              if(((l_27 != NULL) && (l_27 != m_27)))
                                _fail(m_27);
                              else
                                l_27 = m_27;
                            }
                            t = not_null(l_27);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Let_2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      {
        ATerm f_28 = NULL,h_28 = NULL;
        ATerm g_28 = NULL;
        t = SSLgetAnnotations(not_null(z_27));
        {
          g_28 = t;
          if(((f_28 != NULL) && (f_28 != g_28)))
            _fail(g_28);
          else
            f_28 = g_28;
        }
        {
          t = not_null(a_28);
          {
            ATerm j_28 = NULL;
            t = b_76(t);
            {
              h_28 = t;
              {
                t = not_null(b_28);
                {
                  ATerm l_28 = NULL;
                  t = c_76(t);
                  {
                    j_28 = t;
                    {
                      ATerm m_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(h_28), not_null(j_28)), not_null(f_28));
                      {
                        m_28 = t;
                        if(((l_28 != NULL) && (l_28 != m_28)))
                          _fail(m_28);
                        else
                          l_28 = m_28;
                      }
                      t = not_null(l_28);
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
ATerm sboundin_3 (ATerm t, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_113, t_113);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm x_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_113, v_113, t_113);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = x_18;
            t = Rec_2(t, v_113, t_113);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Rec_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      t = (ATerm) ATinsert(ATempty, not_null(v_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_SDef_3))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      h_29 = ATgetArgument(e_29, 2);
      {
        t = not_null(g_29);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
            l_29 = t;
            c_29 :
            if(match_cons(l_29, sym_VarDec_2))
              {
                m_29 = ATgetArgument(l_29, 0);
                n_29 = ATgetArgument(l_29, 1);
                t = not_null(m_29);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_2);
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
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym_Let_2))
    {
      p_30 = ATgetArgument(o_30, 0);
      q_30 = ATgetArgument(o_30, 1);
      {
        t = not_null(p_30);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
            t_30 = t;
            m_30 :
            if(match_cons(t_30, sym_SDef_3))
              {
                u_30 = ATgetArgument(t_30, 0);
                v_30 = ATgetArgument(t_30, 1);
                w_30 = ATgetArgument(t_30, 2);
                t = not_null(u_30);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_SVar_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      {
        ATerm o_31 = NULL,q_31 = NULL;
        ATerm p_31 = NULL;
        t = SSLgetAnnotations(not_null(k_31));
        {
          p_31 = t;
          if(((o_31 != NULL) && (o_31 != p_31)))
            _fail(p_31);
          else
            o_31 = p_31;
        }
        {
          t = not_null(l_31);
          {
            ATerm s_31 = NULL;
            t = y_75(t);
            {
              q_31 = t;
              {
                ATerm t_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_31)), not_null(o_31));
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
                t = not_null(s_31);
              }
            }
          }
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
  ATerm d_2 (ATerm t)
  {
    ATerm d_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = d_19;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, d_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm o_110 (ATerm, ATerm (ATerm)), ATerm p_110 (ATerm), ATerm q_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_110 (ATerm, ATerm (ATerm)))
{
  ATerm e_32 = NULL;
  e_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), (ATerm) ATempty);
    {
      ATerm h_32 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, o_110);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                t = RnBinding_2(t, p_110, r_110);
                t = DistBinding_2(t, h_32, q_110);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_2);
        return(t);
      }
      t = h_32(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm i_32 (ATerm t, ATerm j_32 (ATerm))
  {
    t = Scope_2(t, j_32, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, i_32);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm SingleListVar_0 (ATerm t)
{
  ATerm n_32 = NULL,t_32 = NULL,u_32 = NULL;
  n_32 = t;
  l_32 :
  if(match_cons(n_32, sym_Var_1))
    {
      t_32 = ATgetArgument(n_32, 0);
      m_32 :
      if(match_cons(t_32, sym_ListVar_1))
        {
          u_32 = ATgetArgument(t_32, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_32));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListBuild_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym_Build_1))
    {
      m_33 = ATgetArgument(l_33, 0);
      {
        ATerm o_33 = NULL,p_33 = NULL;
        ATerm b_34 = NULL;
        t = not_null(m_33);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
            q_33 = t;
            z_32 :
            if(match_cons(q_33, sym_Op_2))
              {
                r_33 = ATgetArgument(q_33, 0);
                s_33 = ATgetArgument(q_33, 1);
                a_33 :
                if(match_string(r_33, "Cons"))
                  {
                    b_33 :
                    if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
                      {
                        t_33 = ATgetFirst((ATermList) s_33);
                        w_33 = (ATerm) ATgetNext((ATermList) s_33);
                        c_33 :
                        if(match_cons(t_33, sym_Var_1))
                          {
                            u_33 = ATgetArgument(t_33, 0);
                            d_33 :
                            if(match_cons(u_33, sym_ListVar_1))
                              {
                                v_33 = ATgetArgument(u_33, 0);
                                e_33 :
                                if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
                                  {
                                    x_33 = ATgetFirst((ATermList) w_33);
                                    a_34 = (ATerm) ATgetNext((ATermList) w_33);
                                    f_33 :
                                    if(match_cons(x_33, sym_Op_2))
                                      {
                                        y_33 = ATgetArgument(x_33, 0);
                                        z_33 = ATgetArgument(x_33, 1);
                                        g_33 :
                                        if(match_string(y_33, "Nil"))
                                          {
                                            h_33 :
                                            if(((ATgetType(z_33) == AT_LIST) && ATisEmpty(z_33)))
                                              {
                                                i_33 :
                                                if(((ATgetType(a_34) == AT_LIST) && ATisEmpty(a_34)))
                                                  {
                                                    {
                                                      if(((o_33 != NULL) && (o_33 != v_33)))
                                                        _fail(v_33);
                                                      else
                                                        o_33 = v_33;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_33));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, f_2);
          {
            b_34 = t;
            if(((p_33 != NULL) && (p_33 != b_34)))
              _fail(b_34);
            else
              p_33 = b_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListMatch_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Match_1))
    {
      y_34 = ATgetArgument(x_34, 0);
      {
        ATerm a_35 = NULL,j_35 = NULL;
        ATerm v_35 = NULL;
        t = not_null(y_34);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
            k_35 = t;
            h_34 :
            if(match_cons(k_35, sym_Op_2))
              {
                l_35 = ATgetArgument(k_35, 0);
                m_35 = ATgetArgument(k_35, 1);
                i_34 :
                if(match_string(l_35, "Cons"))
                  {
                    j_34 :
                    if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
                      {
                        n_35 = ATgetFirst((ATermList) m_35);
                        q_35 = (ATerm) ATgetNext((ATermList) m_35);
                        k_34 :
                        if(match_cons(n_35, sym_Var_1))
                          {
                            o_35 = ATgetArgument(n_35, 0);
                            l_34 :
                            if(match_cons(o_35, sym_ListVar_1))
                              {
                                p_35 = ATgetArgument(o_35, 0);
                                m_34 :
                                if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
                                  {
                                    r_35 = ATgetFirst((ATermList) q_35);
                                    u_35 = (ATerm) ATgetNext((ATermList) q_35);
                                    n_34 :
                                    if(match_cons(r_35, sym_Op_2))
                                      {
                                        s_35 = ATgetArgument(r_35, 0);
                                        t_35 = ATgetArgument(r_35, 1);
                                        o_34 :
                                        if(match_string(s_35, "Nil"))
                                          {
                                            p_34 :
                                            if(((ATgetType(t_35) == AT_LIST) && ATisEmpty(t_35)))
                                              {
                                                q_34 :
                                                if(((ATgetType(u_35) == AT_LIST) && ATisEmpty(u_35)))
                                                  {
                                                    {
                                                      if(((a_35 != NULL) && (a_35 != p_35)))
                                                        _fail(p_35);
                                                      else
                                                        a_35 = p_35;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_35));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, g_2);
          {
            v_35 = t;
            if(((j_35 != NULL) && (j_35 != v_35)))
              _fail(v_35);
            else
              j_35 = v_35;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_35));
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
  ATerm d_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym_Wld_0))
    {
      ATerm f_36 = NULL,h_36 = NULL;
      ATerm l_19;
      l_19 = t;
      {
        ATerm g_36 = NULL;
        t = SSLgetAnnotations(not_null(d_36));
        {
          g_36 = t;
          if(((f_36 != NULL) && (f_36 != g_36)))
            _fail(g_36);
          else
            f_36 = g_36;
        }
      }
      t = l_19;
      {
        ATerm i_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_36));
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
        t = not_null(h_36);
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
  ATerm m_19 = t;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, h_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Con_3))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      w_36 = ATgetArgument(t_36, 2);
      {
        ATerm b_37 = NULL,d_37 = NULL;
        ATerm c_37 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
        {
          t = not_null(u_36);
          {
            ATerm h_37 = NULL;
            t = f_78(t);
            {
              d_37 = t;
              {
                t = not_null(v_36);
                {
                  ATerm n_37 = NULL;
                  t = g_78(t);
                  {
                    h_37 = t;
                    {
                      t = not_null(w_36);
                      {
                        ATerm s_37 = NULL;
                        t = h_78(t);
                        {
                          n_37 = t;
                          {
                            ATerm t_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(d_37), not_null(h_37), not_null(n_37)), not_null(b_37));
                            {
                              t_37 = t;
                              if(((s_37 != NULL) && (s_37 != t_37)))
                                _fail(t_37);
                              else
                                s_37 = t_37;
                            }
                            t = not_null(s_37);
                          }
                        }
                      }
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
  ATerm p_19 = t;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t_38 = t;
  r_38 :
  if(match_cons(t_38, sym_SRule_1))
    {
      u_38 = ATgetArgument(t_38, 0);
      s_38 :
      if(match_cons(u_38, sym_StratRule_3))
        {
          v_38 = ATgetArgument(u_38, 0);
          w_38 = ATgetArgument(u_38, 1);
          x_38 = ATgetArgument(u_38, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_38)), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_38))), not_null(v_38)));
        }
      else
        {
          if(match_cons(u_38, sym_Rule_3))
            {
              v_38 = ATgetArgument(u_38, 0);
              w_38 = ATgetArgument(u_38, 1);
              x_38 = ATgetArgument(u_38, 2);
              {
                t = not_null(v_38);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(w_38);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(w_38))), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_38))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_38))));
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
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  w_39 = t;
  u_39 :
  if(match_cons(w_39, sym_SRule_1))
    {
      x_39 = ATgetArgument(w_39, 0);
      v_39 :
      if(match_cons(x_39, sym_Rule_3))
        {
          y_39 = ATgetArgument(x_39, 0);
          z_39 = ATgetArgument(x_39, 1);
          a_40 = ATgetArgument(x_39, 2);
          {
            ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
            ATerm m_40 = NULL;
            ATerm s_40 = NULL;
            t = new_0(t);
            {
              m_40 = t;
              {
                if(((j_40 != NULL) && (j_40 != m_40)))
                  _fail(m_40);
                else
                  j_40 = m_40;
                {
                  t = not_null(y_39);
                  {
                    ATerm a_41 = NULL;
                    ATerm j_2 (ATerm t)
                    {
                      ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
                      n_40 = t;
                      j_39 :
                      if(match_cons(n_40, sym_Con_3))
                        {
                          o_40 = ATgetArgument(n_40, 0);
                          q_40 = ATgetArgument(n_40, 1);
                          r_40 = ATgetArgument(n_40, 2);
                          k_39 :
                          if(match_cons(o_40, sym_Var_1))
                            {
                              p_40 = ATgetArgument(o_40, 0);
                              {
                                if(((i_40 != NULL) && (i_40 != p_40)))
                                  _fail(p_40);
                                else
                                  i_40 = p_40;
                                {
                                  if(((g_40 != NULL) && (g_40 != q_40)))
                                    _fail(q_40);
                                  else
                                    g_40 = q_40;
                                  {
                                    if(((e_40 != NULL) && (e_40 != r_40)))
                                      _fail(r_40);
                                    else
                                      e_40 = r_40;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_40));
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
                    t = oncetd_1(t, j_2);
                    {
                      s_40 = t;
                      {
                        if(((k_40 != NULL) && (k_40 != s_40)))
                          _fail(s_40);
                        else
                          k_40 = s_40;
                        {
                          t = not_null(z_39);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
                              t_40 = t;
                              n_39 :
                              if(match_cons(t_40, sym_Con_3))
                                {
                                  u_40 = ATgetArgument(t_40, 0);
                                  w_40 = ATgetArgument(t_40, 1);
                                  x_40 = ATgetArgument(t_40, 2);
                                  o_39 :
                                  if(match_cons(u_40, sym_Var_1))
                                    {
                                      v_40 = ATgetArgument(u_40, 0);
                                      r_39 :
                                      if(match_cons(x_40, sym_Call_2))
                                        {
                                          y_40 = ATgetArgument(x_40, 0);
                                          z_40 = ATgetArgument(x_40, 1);
                                          s_39 :
                                          if(((ATgetType(z_40) == AT_LIST) && ATisEmpty(z_40)))
                                            {
                                              {
                                                if(((i_40 != NULL) && (i_40 != v_40)))
                                                  _fail(v_40);
                                                else
                                                  i_40 = v_40;
                                                {
                                                  if(((h_40 != NULL) && (h_40 != w_40)))
                                                    _fail(w_40);
                                                  else
                                                    h_40 = w_40;
                                                  {
                                                    if(((f_40 != NULL) && (f_40 != y_40)))
                                                      _fail(y_40);
                                                    else
                                                      f_40 = y_40;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40));
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
                            t = oncetd_1(t, k_2);
                            {
                              a_41 = t;
                              if(((l_40 != NULL) && (l_40 != a_41)))
                                _fail(a_41);
                              else
                                l_40 = a_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_40)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_40), not_null(l_40), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_40), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(f_40), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_40), not_null(h_40), term_n_17)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40)))))));
          }
        }
      else
        {
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
  ATerm l_2 (ATerm t)
  {
    ATerm w_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = w_19;
        {
          ATerm c_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = c_20;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym_Scope_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm s_41 = NULL;
        ATerm w_41 = NULL;
        t = not_null(o_41);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              ATerm t_41 = NULL,u_41 = NULL;
              t_41 = t;
              k_41 :
              if(match_cons(t_41, sym_ListVar_1))
                {
                  u_41 = ATgetArgument(t_41, 0);
                  t = not_null(u_41);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, n_2);
            return(t);
          }
          t = map_1(t, m_2);
          {
            w_41 = t;
            if(((s_41 != NULL) && (s_41 != w_41)))
              _fail(w_41);
            else
              s_41 = w_41;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_41), not_null(p_41));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarListMatching_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          ;
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, p_2);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                ;
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                {
                  ATerm m_20 = t;
                  int p_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      ;
                      LocalPopChoice(p_20);
                    }
                  else
                    {
                      t = m_20;
                      t = ListBuild_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, q_2);
    }
    return(t);
  }
  t = topdown_1(t, o_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym_SDef_3))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      g_42 = ATgetArgument(d_42, 2);
      {
        ATerm k_42 = NULL;
        ATerm l_42 = NULL;
        t = not_null(g_42);
        {
          t = tvars_0(t);
          {
            l_42 = t;
            if(((k_42 != NULL) && (k_42 != l_42)))
              _fail(l_42);
            else
              k_42 = l_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_42), not_null(f_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_42), not_null(g_42)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym_RDef_3))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      u_42 = ATgetArgument(r_42, 2);
      {
        ATerm y_42 = NULL;
        ATerm z_42 = NULL;
        t = not_null(u_42);
        {
          t = tvars_0(t);
          {
            z_42 = t;
            if(((y_42 != NULL) && (y_42 != z_42)))
              _fail(z_42);
            else
              y_42 = z_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_42), not_null(t_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_42), (ATerm) ATmakeAppl(sym_SRule_1, not_null(u_42))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_43)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  q_43 = t;
  n_43 :
  if(match_cons(q_43, sym_OpDecl_2))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      o_43 :
      if(match_cons(s_43, sym_FunType_2))
        {
          t_43 = ATgetArgument(s_43, 0);
          p_43 = ATgetArgument(s_43, 1);
          {
            ATerm x_43 = NULL,y_43 = NULL,g_44 = NULL;
            ATerm q_20;
            q_20 = t;
            {
              ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
              t = not_null(t_43);
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm z_43 = NULL,b_44 = NULL;
                  t = new_0(t);
                  {
                    ATerm t_20;
                    t_20 = t;
                    {
                      ATerm a_44 = NULL;
                      a_44 = t;
                      if(((z_43 != NULL) && (z_43 != a_44)))
                        _fail(a_44);
                      else
                        z_43 = a_44;
                    }
                    t = t_20;
                    {
                      ATerm c_44 = NULL;
                      c_44 = t;
                      if(((b_44 != NULL) && (b_44 != c_44)))
                        _fail(c_44);
                      else
                        b_44 = c_44;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_43), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21)), not_null(b_44));
                    }
                  }
                  return(t);
                }
                t = map_1(t, r_2);
                {
                  t = unzip_0(t);
                  {
                    d_44 = t;
                    l_43 :
                    if(match_cons(d_44, sym__2))
                      {
                        e_44 = ATgetArgument(d_44, 0);
                        f_44 = ATgetArgument(d_44, 1);
                        {
                          if(((x_43 != NULL) && (x_43 != e_44)))
                            _fail(e_44);
                          else
                            x_43 = e_44;
                          if(((y_43 != NULL) && (y_43 != f_44)))
                            _fail(f_44);
                          else
                            y_43 = f_44;
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
            t = q_20;
            {
              ATerm h_44 = NULL;
              t = not_null(y_43);
              {
                t = map_1(t, MkCall_0);
                {
                  h_44 = t;
                  if(((g_44 != NULL) && (g_44 != h_44)))
                    _fail(h_44);
                  else
                    g_44 = h_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_43), not_null(x_43), (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_43), not_null(g_44)));
            }
          }
        }
      else
        {
          if(match_cons(s_43, sym_ConstType_1))
            {
              t_43 = ATgetArgument(s_43, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_43), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_43), (ATerm) ATempty));
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
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_cons(w_44, sym_Constructors_1))
    {
      x_44 = ATgetArgument(w_44, 0);
      {
        t = not_null(x_44);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(w_44, sym_Sorts_1))
        {
          x_44 = ATgetArgument(w_44, 0);
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  m_45 = t;
  g_45 :
  if(match_cons(m_45, sym_Specification_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      h_45 :
      if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
        {
          o_45 = ATgetFirst((ATermList) n_45);
          q_45 = (ATerm) ATgetNext((ATermList) n_45);
          i_45 :
          if(match_cons(o_45, sym_Signature_1))
            {
              p_45 = ATgetArgument(o_45, 0);
              j_45 :
              if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
                {
                  r_45 = ATgetFirst((ATermList) q_45);
                  t_45 = (ATerm) ATgetNext((ATermList) q_45);
                  k_45 :
                  if(match_cons(r_45, sym_Strategies_1))
                    {
                      s_45 = ATgetArgument(r_45, 0);
                      l_45 :
                      if(((ATgetType(t_45) == AT_LIST) && ATisEmpty(t_45)))
                        {
                          {
                            ATerm w_45 = NULL;
                            ATerm x_45 = NULL,z_45 = NULL,b_46 = NULL;
                            ATerm o_21;
                            o_21 = t;
                            {
                              ATerm y_45 = NULL;
                              t = not_null(p_45);
                              {
                                t = congdefs_0(t);
                                {
                                  y_45 = t;
                                  if(((x_45 != NULL) && (x_45 != y_45)))
                                    _fail(y_45);
                                  else
                                    x_45 = y_45;
                                }
                              }
                            }
                            t = o_21;
                            {
                              ATerm a_46 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(s_45)), (ATerm) ATmakeAppl(sym_RDef_3, term_p_21, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_r_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21))), (ATerm) ATmakeAppl(sym_VarDec_2, term_q_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21))), (ATerm) ATmakeAppl(sym_Rule_3, term_z_21, term_o_22, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_z_22)))));
                              {
                                ATerm s_2 (ATerm t)
                                {
                                  ATerm d_23 = t;
                                  int h_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      ;
                                      LocalPopChoice(h_23);
                                    }
                                  else
                                    {
                                      t = d_23;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, s_2);
                                {
                                  a_46 = t;
                                  if(((z_45 != NULL) && (z_45 != a_46)))
                                    _fail(a_46);
                                  else
                                    z_45 = a_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(z_45));
                                {
                                  t = conc_0(t);
                                  {
                                    b_46 = t;
                                    if(((w_45 != NULL) && (w_45 != b_46)))
                                      _fail(b_46);
                                    else
                                      w_45 = b_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_45))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(p_45))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TupleDeclarations_0 (ATerm t)
{
  ATerm m_46 = NULL;
  ATerm q_46 = NULL;
  m_46 = t;
  {
    ATerm r_46 = NULL,s_46 = NULL,v_46 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm t_2 (ATerm t)
      {
        t = term_i_23;
        return(t);
      }
      t = rewrite_1(t, t_2);
      {
        r_46 = t;
        k_46 :
        if(match_cons(r_46, sym_Defined_2))
          {
            s_46 = ATgetArgument(r_46, 0);
            v_46 = ATgetArgument(r_46, 1);
            l_46 :
            if(match_string(s_46, "o_1"))
              {
                if(((q_46 != NULL) && (q_46 != v_46)))
                  _fail(v_46);
                else
                  q_46 = v_46;
              }
            else
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
    t = not_null(q_46);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  t = SSL_int_to_string(not_null(z_46));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  h_47 :
  if(match_cons(i_47, sym_Op_2))
    {
      j_47 = ATgetArgument(i_47, 0);
      k_47 = ATgetArgument(i_47, 1);
      {
        ATerm q_47 = NULL,r_47 = NULL;
        ATerm s_47 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
        t = term_m_23;
        {
          ATerm u_2 (ATerm t)
          {
            t = term_p_23;
            return(t);
          }
          t = rewrite_1(t, u_2);
          {
            s_47 = t;
            f_47 :
            if(match_cons(s_47, sym_Defined_3))
              {
                i_48 = ATgetArgument(s_47, 0);
                j_48 = ATgetArgument(s_47, 1);
                k_48 = ATgetArgument(s_47, 2);
                g_47 :
                if(match_string(i_48, "r_1"))
                  {
                    ATerm l_48 = NULL;
                    if(((q_47 != NULL) && (q_47 != j_48)))
                      _fail(j_48);
                    else
                      q_47 = j_48;
                    {
                      if(((r_47 != NULL) && (r_47 != k_48)))
                        _fail(k_48);
                      else
                        r_47 = k_48;
                      {
                        ATerm m_48 = NULL;
                        t = not_null(k_47);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              m_48 = t;
                              if(((l_48 != NULL) && (l_48 != m_48)))
                                _fail(m_48);
                              else
                                l_48 = m_48;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_23), not_null(l_48)), term_v_23), not_null(j_47)), term_u_23), term_t_23), not_null(r_47)), term_s_23), not_null(q_47)), term_r_23));
                          t = printnl_0(t);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_47), not_null(k_47));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym__2))
    {
      t_48 = ATgetArgument(s_48, 0);
      u_48 = ATgetArgument(s_48, 1);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(t_48), not_null(u_48));
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = SSL_subtr(not_null(t_48), not_null(u_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
    o_49 = t;
    b_49 :
    if(match_cons(o_49, sym__2))
      {
        p_49 = ATgetArgument(o_49, 0);
        q_49 = ATgetArgument(o_49, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_49), not_null(q_49), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
    t_49 = t;
    d_49 :
    if(match_cons(t_49, sym__3))
      {
        u_49 = ATgetArgument(t_49, 0);
        v_49 = ATgetArgument(t_49, 1);
        w_49 = ATgetArgument(t_49, 2);
        e_49 :
        if(match_int(u_49, 0))
          {
            t = not_null(w_49);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
    z_49 = t;
    n_49 :
    if(match_cons(z_49, sym__3))
      {
        a_50 = ATgetArgument(z_49, 0);
        b_50 = ATgetArgument(z_49, 1);
        c_50 = ATgetArgument(z_49, 2);
        {
          ATerm g_50 = NULL;
          ATerm f_24;
          f_24 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_50), term_i_24);
            t = geq_0(t);
          }
          t = f_24;
          {
            ATerm h_50 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_50), term_i_24);
            {
              t = subt_0(t);
              {
                h_50 = t;
                if(((g_50 != NULL) && (g_50 != h_50)))
                  _fail(h_50);
                else
                  g_50 = h_50;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_50), not_null(b_50), (ATerm) ATinsert(CheckATermList(not_null(c_50)), not_null(b_50)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  t_50 :
  if(match_cons(v_50, sym_Op_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      u_50 :
      if(match_string(w_50, ""))
        {
          ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
          ATerm j_24;
          j_24 = t;
          {
            ATerm d_51 = NULL;
            t = not_null(x_50);
            {
              ATerm e_51 = NULL;
              t = length_0(t);
              {
                d_51 = t;
                {
                  if(((a_51 != NULL) && (a_51 != d_51)))
                    _fail(d_51);
                  else
                    a_51 = d_51;
                  {
                    ATerm f_51 = NULL,h_51 = NULL;
                    t = term_w_14;
                    {
                      e_51 = t;
                      {
                        if(((z_50 != NULL) && (z_50 != e_51)))
                          _fail(e_51);
                        else
                          z_50 = e_51;
                        {
                          ATerm k_24;
                          k_24 = t;
                          {
                            ATerm g_51 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), term_m_24);
                            {
                              t = copy_0(t);
                              {
                                g_51 = t;
                                if(((f_51 != NULL) && (f_51 != g_51)))
                                  _fail(g_51);
                                else
                                  f_51 = g_51;
                              }
                            }
                          }
                          t = k_24;
                          {
                            ATerm i_51 = NULL,k_51 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, not_null(f_51), term_m_24));
                            {
                              h_51 = t;
                              {
                                if(((b_51 != NULL) && (b_51 != h_51)))
                                  _fail(h_51);
                                else
                                  b_51 = h_51;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm j_51 = NULL;
                                    ATerm p_24 = t;
                                    int q_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        ;
                                        LocalPopChoice(q_24);
                                      }
                                    else
                                      {
                                        t = p_24;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      j_51 = t;
                                      if(((i_51 != NULL) && (i_51 != j_51)))
                                        _fail(j_51);
                                      else
                                        i_51 = j_51;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(i_51)), not_null(b_51));
                                      {
                                        k_51 = t;
                                        {
                                          if(((c_51 != NULL) && (c_51 != k_51)))
                                            _fail(k_51);
                                          else
                                            c_51 = k_51;
                                          {
                                            ATerm t_24;
                                            t_24 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, not_null(c_51)));
                                              {
                                                ATerm y_2 (ATerm t)
                                                {
                                                  t = term_i_23;
                                                  return(t);
                                                }
                                                t = assert_1(t, y_2);
                                              }
                                            }
                                            t = t_24;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = j_24;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym_Op_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_52 = NULL;
            t = not_null(d_52);
            {
              t = length_0(t);
              {
                h_52 = t;
                {
                  ATerm j_52 = NULL,k_52 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_52)));
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = term_k_25;
                      return(t);
                    }
                    t = rewrite_1(t, z_2);
                    {
                      j_52 = t;
                      v_51 :
                      if(match_cons(j_52, sym_Defined_1))
                        {
                          k_52 = ATgetArgument(j_52, 0);
                          w_51 :
                          if(!(match_string(k_52, "l_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATempty);
                }
              }
            }
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm v_52 = NULL;
              t = not_null(d_52);
              {
                t = length_0(t);
                {
                  v_52 = t;
                  {
                    ATerm x_52 = NULL,a_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_52)));
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = term_k_25;
                        return(t);
                      }
                      t = rewrite_1(t, a_3);
                      {
                        x_52 = t;
                        y_51 :
                        if(match_cons(x_52, sym_Defined_1))
                          {
                            a_53 = ATgetArgument(x_52, 0);
                            z_51 :
                            if(!(match_string(a_53, "i_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm f_53 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_89(t);
        {
          ATerm b_3 (ATerm t)
          {
            t = try_1(t, f_53);
            return(t);
          }
          t = _all(t, b_3);
        }
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = _some(t, f_53);
      }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm d_114 (ATerm), ATerm e_114 (ATerm))
{
  ATerm s_53 = NULL,t_53 = NULL;
  ATerm c_3 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm n_25;
    n_25 = t;
    {
      ATerm u_53 = NULL;
      ATerm v_53 = NULL;
      t = d_114(t);
      {
        u_53 = t;
        {
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
          {
            t = e_114(t);
            {
              v_53 = t;
              if(((s_53 != NULL) && (s_53 != v_53)))
                _fail(v_53);
              else
                s_53 = v_53;
            }
          }
        }
      }
    }
    t = n_25;
    {
      ATerm o_25;
      o_25 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_23, (ATerm) ATmakeAppl(sym_Defined_3, term_p_25, not_null(s_53), not_null(t_53)));
        {
          ATerm e_3 (ATerm t)
          {
            t = term_p_23;
            return(t);
          }
          t = assert_1(t, e_3);
        }
      }
      t = o_25;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm q_25 = t;
          if((PushChoice() == 0))
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  ;
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = r_25;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_25;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, f_3);
      }
    }
    return(t);
  }
  t = scope_2(t, c_3, d_3);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym_SDef_3))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      i_54 = ATgetArgument(f_54, 2);
      {
        t = not_null(i_54);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(g_54);
            return(t);
          }
          ATerm h_3 (ATerm t)
          {
            t = term_t_25;
            return(t);
          }
          t = check_constructors_p__2(t, g_3, h_3);
        }
      }
    }
  else
    {
      if(match_cons(f_54, sym_RDef_3))
        {
          g_54 = ATgetArgument(f_54, 0);
          h_54 = ATgetArgument(f_54, 1);
          i_54 = ATgetArgument(f_54, 2);
          {
            t = not_null(i_54);
            {
              ATerm i_3 (ATerm t)
              {
                t = not_null(g_54);
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_y_25;
                return(t);
              }
              t = check_constructors_p__2(t, i_3, j_3);
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
ATerm length_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  t = foldr_3(t, k_3, add_0, l_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
  z_54 = t;
  v_54 :
  if(match_cons(z_54, sym_OpDecl_2))
    {
      a_55 = ATgetArgument(z_54, 0);
      b_55 = ATgetArgument(z_54, 1);
      x_54 :
      if(match_cons(b_55, sym_FunType_2))
        {
          c_55 = ATgetArgument(b_55, 0);
          y_54 = ATgetArgument(b_55, 1);
          {
            ATerm g_55 = NULL;
            ATerm a_26;
            a_26 = t;
            {
              ATerm h_55 = NULL;
              t = not_null(c_55);
              {
                t = length_0(t);
                {
                  h_55 = t;
                  if(((g_55 != NULL) && (g_55 != h_55)))
                    _fail(h_55);
                  else
                    g_55 = h_55;
                }
              }
            }
            t = a_26;
            {
              ATerm e_26;
              e_26 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(g_55))), term_j_26);
                {
                  ATerm m_3 (ATerm t)
                  {
                    t = term_k_25;
                    return(t);
                  }
                  t = assert_1(t, m_3);
                }
              }
              t = e_26;
            }
          }
        }
      else
        {
          if(match_cons(b_55, sym_ConstType_1))
            {
              c_55 = ATgetArgument(b_55, 0);
              {
                ATerm k_55 = NULL;
                ATerm k_26;
                k_26 = t;
                {
                  ATerm l_55 = NULL;
                  t = term_z_25;
                  {
                    l_55 = t;
                    if(((k_55 != NULL) && (k_55 != l_55)))
                      _fail(l_55);
                    else
                      k_55 = l_55;
                  }
                }
                t = k_26;
                {
                  ATerm l_26;
                  l_26 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_55))), term_n_26);
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = term_k_25;
                        return(t);
                      }
                      t = assert_1(t, n_3);
                    }
                  }
                  t = l_26;
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
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,n_57 = NULL;
  q_56 = t;
  b_56 :
  if(match_cons(q_56, sym_Specification_1))
    {
      r_56 = ATgetArgument(q_56, 0);
      c_56 :
      if(((ATgetType(r_56) == AT_LIST) && !(ATisEmpty(r_56))))
        {
          s_56 = ATgetFirst((ATermList) r_56);
          d_57 = (ATerm) ATgetNext((ATermList) r_56);
          d_56 :
          if(match_cons(s_56, sym_Signature_1))
            {
              t_56 = ATgetArgument(s_56, 0);
              e_56 :
              if(((ATgetType(t_56) == AT_LIST) && !(ATisEmpty(t_56))))
                {
                  a_57 = ATgetFirst((ATermList) t_56);
                  c_57 = (ATerm) ATgetNext((ATermList) t_56);
                  l_56 :
                  if(match_cons(a_57, sym_Constructors_1))
                    {
                      b_57 = ATgetArgument(a_57, 0);
                      m_56 :
                      if(((ATgetType(c_57) == AT_LIST) && ATisEmpty(c_57)))
                        {
                          n_56 :
                          if(((ATgetType(d_57) == AT_LIST) && !(ATisEmpty(d_57))))
                            {
                              e_57 = ATgetFirst((ATermList) d_57);
                              n_57 = (ATerm) ATgetNext((ATermList) d_57);
                              o_56 :
                              if(match_cons(e_57, sym_Strategies_1))
                                {
                                  f_57 = ATgetArgument(e_57, 0);
                                  p_56 :
                                  if(((ATgetType(n_57) == AT_LIST) && ATisEmpty(n_57)))
                                    {
                                      {
                                        ATerm r_57 = NULL,s_57 = NULL,t_58 = NULL;
                                        ATerm o_26;
                                        o_26 = t;
                                        {
                                          ATerm t_57 = NULL;
                                          ATerm k_58 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_57)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_24), term_m_24))), term_q_26);
                                          {
                                            t_57 = t;
                                            {
                                              if(((r_57 != NULL) && (r_57 != t_57)))
                                                _fail(t_57);
                                              else
                                                r_57 = t_57;
                                              {
                                                t = not_null(r_57);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(f_57);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        k_58 = t;
                                                        u_55 :
                                                        if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
                                                          {
                                                            {
                                                              ATerm q_58 = NULL;
                                                              ATerm r_26 = t;
                                                              int s_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_26);
                                                                }
                                                              else
                                                                {
                                                                  t = r_26;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                q_58 = t;
                                                                if(((s_57 != NULL) && (s_57 != q_58)))
                                                                  _fail(q_58);
                                                                else
                                                                  s_57 = q_58;
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
                                        t = o_26;
                                        {
                                          ATerm u_58 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_57), not_null(r_57));
                                          {
                                            t = conc_0(t);
                                            {
                                              u_58 = t;
                                              if(((t_58 != NULL) && (t_58 != u_58)))
                                                _fail(u_58);
                                              else
                                                t_58 = u_58;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_57))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_58))))));
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
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm t_112 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm t_26;
    t_26 = t;
    {
      ATerm z_26 = t;
      if((PushChoice() == 0))
        {
          ATerm b_59 = NULL;
          t = t_112(t);
          {
            b_59 = t;
            a_59 :
            if(((ATgetType(b_59) == AT_LIST) && ATisEmpty(b_59)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_26;
        }
    }
    t = t_26;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm q_3 (ATerm t)
        {
          t = ExpOverlay_1(t, t_112);
          return(t);
        }
        t = try_1(t, q_3);
        return(t);
      }
      t = topdown_1(t, p_3);
    }
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  l_59 = t;
  j_59 :
  if(match_cons(l_59, sym_BuildDefault_1))
    {
      m_59 = ATgetArgument(l_59, 0);
      t = term_n_17;
    }
  else
    {
      if(match_cons(l_59, sym_Real_1))
        {
          m_59 = ATgetArgument(l_59, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(m_59)));
        }
      else
        {
          if(match_cons(l_59, sym_Int_1))
            {
              m_59 = ATgetArgument(l_59, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(m_59)));
            }
          else
            {
              if(match_cons(l_59, sym_Str_1))
                {
                  m_59 = ATgetArgument(l_59, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_59)));
                }
              else
                {
                  if(match_cons(l_59, sym_Anno_2))
                    {
                      m_59 = ATgetArgument(l_59, 0);
                      k_59 = ATgetArgument(l_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_59)), not_null(m_59)));
                    }
                  else
                    {
                      if(match_cons(l_59, sym_Op_2))
                        {
                          m_59 = ATgetArgument(l_59, 0);
                          k_59 = ATgetArgument(l_59, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_59)), not_null(k_59));
                        }
                      else
                        {
                          if(match_cons(l_59, sym_Var_1))
                            {
                              m_59 = ATgetArgument(l_59, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_59)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm v_64 = NULL,w_64 = NULL,i_68 = NULL;
  v_64 = t;
  u_64 :
  if(match_cons(v_64, sym_Op_2))
    {
      w_64 = ATgetArgument(v_64, 0);
      i_68 = ATgetArgument(v_64, 1);
      {
        ATerm m_68 = NULL,o_68 = NULL;
        ATerm n_68 = NULL;
        t = SSLgetAnnotations(not_null(v_64));
        {
          n_68 = t;
          if(((m_68 != NULL) && (m_68 != n_68)))
            _fail(n_68);
          else
            m_68 = n_68;
        }
        {
          t = not_null(w_64);
          {
            ATerm q_68 = NULL;
            t = t_76(t);
            {
              o_68 = t;
              {
                t = not_null(i_68);
                {
                  ATerm s_68 = NULL;
                  t = u_76(t);
                  {
                    q_68 = t;
                    {
                      ATerm t_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_68), not_null(q_68)), not_null(m_68));
                      {
                        t_68 = t;
                        if(((s_68 != NULL) && (s_68 != t_68)))
                          _fail(t_68);
                        else
                          s_68 = t_68;
                      }
                      t = not_null(s_68);
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, s_3);
    return(t);
  }
  t = try_1(t, r_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  j_73 = t;
  i_73 :
  if(match_cons(j_73, sym_Overlay_3))
    {
      k_73 = ATgetArgument(j_73, 0);
      l_73 = ATgetArgument(j_73, 1);
      m_73 = ATgetArgument(j_73, 2);
      {
        ATerm q_73 = NULL,u_73 = NULL;
        ATerm b_27;
        b_27 = t;
        {
          ATerm t_73 = NULL;
          t = not_null(l_73);
          {
            ATerm t_3 (ATerm t)
            {
              ATerm r_73 = NULL;
              ATerm s_73 = NULL;
              s_73 = t;
              if(((r_73 != NULL) && (r_73 != s_73)))
                _fail(s_73);
              else
                r_73 = s_73;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_73), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21));
              return(t);
            }
            t = map_1(t, t_3);
            {
              t_73 = t;
              if(((q_73 != NULL) && (q_73 != t_73)))
                _fail(t_73);
              else
                q_73 = t_73;
            }
          }
        }
        t = b_27;
        {
          ATerm v_73 = NULL;
          t = not_null(m_73);
          {
            t = trm_to_cong_0(t);
            {
              v_73 = t;
              if(((u_73 != NULL) && (u_73 != v_73)))
                _fail(v_73);
              else
                u_73 = v_73;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_73), not_null(q_73), not_null(u_73));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm o_113 (ATerm))
{
  t = Scope_2(t, o_113, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL;
  c_74 = t;
  b_74 :
  if(match_cons(c_74, sym_Var_1))
    {
      d_74 = ATgetArgument(c_74, 0);
      t = not_null(d_74);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm z_110 (ATerm), ATerm a_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,r_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym__3))
    {
      l_74 = ATgetArgument(k_74, 0);
      m_74 = ATgetArgument(k_74, 1);
      r_74 = ATgetArgument(k_74, 2);
      {
        t = not_null(l_74);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm z_74 = NULL;
            z_74 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), not_null(r_74));
              t = z_110(t);
            }
            return(t);
          }
          ATerm v_3 (ATerm t)
          {
            ATerm b_75 = NULL;
            b_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_75), not_null(m_74));
              t = z_110(t);
            }
            return(t);
          }
          t = a_111(t, u_3, v_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm, ATerm (ATerm)))
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  u_75 = t;
  t_75 :
  if(match_cons(u_75, sym__2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      {
        ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,p_76 = NULL;
        ATerm c_27;
        c_27 = t;
        {
          ATerm k_76 = NULL;
          t = not_null(v_75);
          {
            ATerm l_76 = NULL;
            t = t_110(t);
            {
              k_76 = t;
              {
                if(((h_76 != NULL) && (h_76 != k_76)))
                  _fail(k_76);
                else
                  h_76 = k_76;
                {
                  ATerm m_76 = NULL,o_76 = NULL;
                  t = map_1(t, new_0);
                  {
                    l_76 = t;
                    {
                      if(((i_76 != NULL) && (i_76 != l_76)))
                        _fail(l_76);
                      else
                        i_76 = l_76;
                      {
                        ATerm n_76 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_76), not_null(i_76));
                        {
                          t = zip_1(t, _id);
                          {
                            n_76 = t;
                            if(((m_76 != NULL) && (m_76 != n_76)))
                              _fail(n_76);
                            else
                              m_76 = n_76;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_76), not_null(w_75));
                          {
                            t = conc_0(t);
                            {
                              o_76 = t;
                              if(((j_76 != NULL) && (j_76 != o_76)))
                                _fail(o_76);
                              else
                                j_76 = o_76;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = c_27;
        {
          ATerm q_76 = NULL;
          t = not_null(v_75);
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(i_76);
              return(t);
            }
            t = u_110(t, w_3);
            {
              q_76 = t;
              if(((p_76 != NULL) && (p_76 != q_76)))
                _fail(q_76);
              else
                p_76 = q_76;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_76), not_null(w_75), not_null(j_76));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm m_110 (ATerm), ATerm n_110 (ATerm))
{
  ATerm d_77 = NULL;
  ATerm i_77 = NULL,k_77 = NULL;
  d_77 = t;
  {
    ATerm l_77 = NULL;
    t = not_null(d_77);
    {
      ATerm m_77 = NULL;
      t = m_110(t);
      {
        l_77 = t;
        {
          if(((i_77 != NULL) && (i_77 != l_77)))
            _fail(l_77);
          else
            i_77 = l_77;
          {
            t = n_110(t);
            {
              m_77 = t;
              if(((k_77 != NULL) && (k_77 != m_77)))
                _fail(m_77);
              else
                k_77 = m_77;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_77), not_null(k_77));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm z_77 = NULL;
  ATerm b_78 = NULL,c_78 = NULL;
  z_77 = t;
  {
    ATerm e_78 = NULL;
    ATerm m_78 = NULL,n_78 = NULL,q_78 = NULL,r_78 = NULL,u_78 = NULL;
    t = not_null(z_77);
    {
      e_78 = t;
      {
        t = SSL_explode_term(not_null(e_78));
        {
          m_78 = t;
          w_77 :
          if(match_cons(m_78, sym__2))
            {
              n_78 = ATgetArgument(m_78, 0);
              q_78 = ATgetArgument(m_78, 1);
              x_77 :
              if(match_string(n_78, ""))
                {
                  y_77 :
                  if(((ATgetType(q_78) == AT_LIST) && !(ATisEmpty(q_78))))
                    {
                      r_78 = ATgetFirst((ATermList) q_78);
                      u_78 = (ATerm) ATgetNext((ATermList) q_78);
                      {
                        if(((c_78 != NULL) && (c_78 != r_78)))
                          _fail(r_78);
                        else
                          c_78 = r_78;
                        if(((b_78 != NULL) && (b_78 != u_78)))
                          _fail(u_78);
                        else
                          b_78 = u_78;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(c_78);
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL;
  b_79 = t;
  z_78 :
  if(match_cons(b_79, sym__2))
    {
      c_79 = ATgetArgument(b_79, 0);
      d_79 = ATgetArgument(b_79, 1);
      a_79 :
      if(((ATgetType(d_79) == AT_LIST) && !(ATisEmpty(d_79))))
        {
          e_79 = ATgetFirst((ATermList) d_79);
          f_79 = (ATerm) ATgetNext((ATermList) d_79);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_79), not_null(f_79));
        }
      else
        {
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
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  n_79 = t;
  k_79 :
  if(match_cons(n_79, sym__2))
    {
      o_79 = ATgetArgument(n_79, 0);
      p_79 = ATgetArgument(n_79, 1);
      l_79 :
      if(((ATgetType(p_79) == AT_LIST) && !(ATisEmpty(p_79))))
        {
          q_79 = ATgetFirst((ATermList) p_79);
          t_79 = (ATerm) ATgetNext((ATermList) p_79);
          m_79 :
          if(match_cons(q_79, sym__2))
            {
              r_79 = ATgetArgument(q_79, 0);
              s_79 = ATgetArgument(q_79, 1);
              {
                ATerm v_79 = NULL;
                if(((o_79 != NULL) && (o_79 != r_79)))
                  _fail(r_79);
                else
                  o_79 = r_79;
                {
                  if(((v_79 != NULL) && (v_79 != s_79)))
                    _fail(s_79);
                  else
                    v_79 = s_79;
                  t = not_null(v_79);
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
  ATerm g_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = g_27;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm e_111 (ATerm, ATerm (ATerm)))
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  z_79 :
  if(match_cons(a_80, sym__2))
    {
      b_80 = ATgetArgument(a_80, 0);
      c_80 = ATgetArgument(a_80, 1);
      {
        t = not_null(b_80);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(c_80);
              return(t);
            }
            t = split_2(t, _id, y_3);
            t = lookup_0(t);
            return(t);
          }
          t = e_111(t, x_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym__2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      {
        t = not_null(k_80);
        {
          ATerm z_3 (ATerm t)
          {
            ATerm o_80 = NULL;
            o_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(l_80));
              t = g_92(t);
            }
            return(t);
          }
          t = _all(t, z_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm s_80 (ATerm t)
  {
    ATerm k_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = k_27;
        t = all_dist_1(t, s_80);
      }
    return(t);
  }
  t = s_80(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL;
  x_80 = t;
  w_80 :
  if(match_cons(x_80, sym__2))
    {
      y_80 = ATgetArgument(x_80, 0);
      z_80 = ATgetArgument(x_80, 1);
      {
        ATerm c_81 = NULL;
        if(((c_81 != NULL) && (c_81 != z_80)))
          _fail(z_80);
        else
          c_81 = z_80;
      }
    }
  else
    {
      if(match_cons(x_80, sym__3))
        {
          y_80 = ATgetArgument(x_80, 0);
          z_80 = ATgetArgument(x_80, 1);
          a_81 = ATgetArgument(x_80, 2);
          {
            ATerm i_81 = NULL;
            ATerm j_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(z_80));
            {
              t = zip_1(t, _id);
              {
                j_81 = t;
                if(((i_81 != NULL) && (i_81 != j_81)))
                  _fail(j_81);
                else
                  i_81 = j_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_81), not_null(a_81));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm a_110 (ATerm), ATerm b_110 (ATerm, ATerm (ATerm)), ATerm c_110 (ATerm), ATerm d_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_110 (ATerm, ATerm (ATerm)), ATerm f_110 (ATerm))
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  t = subs_args_0(t);
  {
    p_81 = t;
    o_81 :
    if(match_cons(p_81, sym__2))
      {
        q_81 = ATgetArgument(p_81, 0);
        r_81 = ATgetArgument(p_81, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_81), (ATerm) ATempty);
          {
            ATerm v_81 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                ATerm o_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, b_110);
                    ;
                    LocalPopChoice(p_27);
                  }
                else
                  {
                    t = o_27;
                    {
                      ATerm q_27 = t;
                      int r_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm b_4 (ATerm t)
                            {
                              t = not_null(q_81);
                              return(t);
                            }
                            t = SubsVar_2(t, a_110, b_4);
                            t = f_110(t);
                          }
                          ;
                          LocalPopChoice(r_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            t = RnBinding_2(t, c_110, e_110);
                            t = DistBinding_2(t, v_81, d_110);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, a_4);
              return(t);
            }
            t = v_81(t);
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
ATerm substitute_5 (ATerm t, ATerm h_110 (ATerm), ATerm i_110 (ATerm, ATerm (ATerm)), ATerm j_110 (ATerm), ATerm k_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_110 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, h_110, i_110, j_110, k_110, l_110, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm w_81 (ATerm t, ATerm x_81 (ATerm))
  {
    t = Scope_2(t, x_81, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, w_81);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm u_112 (ATerm))
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  e_82 :
  if(match_cons(f_82, sym_Op_2))
    {
      g_82 = ATgetArgument(f_82, 0);
      h_82 = ATgetArgument(f_82, 1);
      {
        ATerm k_82 = NULL,l_82 = NULL;
        t = u_112(t);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm s_27;
            s_27 = t;
            {
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
              m_82 = t;
              d_82 :
              if(match_cons(m_82, sym_Overlay_3))
                {
                  n_82 = ATgetArgument(m_82, 0);
                  o_82 = ATgetArgument(m_82, 1);
                  p_82 = ATgetArgument(m_82, 2);
                  {
                    ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL,u_82 = NULL;
                    if(((g_82 != NULL) && (g_82 != n_82)))
                      _fail(n_82);
                    else
                      g_82 = n_82;
                    {
                      if(((q_82 != NULL) && (q_82 != o_82)))
                        _fail(o_82);
                      else
                        q_82 = o_82;
                      {
                        if(((r_82 != NULL) && (r_82 != p_82)))
                          _fail(p_82);
                        else
                          r_82 = p_82;
                        {
                          ATerm t_27;
                          t_27 = t;
                          {
                            ATerm t_82 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_82), not_null(h_82));
                            {
                              t = zip_1(t, _id);
                              {
                                t_82 = t;
                                if(((s_82 != NULL) && (s_82 != t_82)))
                                  _fail(t_82);
                                else
                                  s_82 = t_82;
                              }
                            }
                          }
                          t = t_27;
                          {
                            ATerm v_82 = NULL;
                            t = not_null(s_82);
                            {
                              u_82 = t;
                              {
                                if(((k_82 != NULL) && (k_82 != u_82)))
                                  _fail(u_82);
                                else
                                  k_82 = u_82;
                                {
                                  t = not_null(r_82);
                                  {
                                    v_82 = t;
                                    {
                                      if(((l_82 != NULL) && (l_82 != v_82)))
                                        _fail(v_82);
                                      else
                                        l_82 = v_82;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_82), not_null(r_82));
                                    }
                                  }
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
            t = s_27;
            return(t);
          }
          t = fetch_1(t, c_4);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(l_82));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_27;
    u_27 = t;
    {
      ATerm v_27 = t;
      if((PushChoice() == 0))
        {
          ATerm c_83 = NULL;
          t = s_112(t);
          {
            c_83 = t;
            b_83 :
            if(((ATgetType(c_83) == AT_LIST) && ATisEmpty(c_83)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_27;
        }
    }
    t = u_27;
    {
      ATerm e_4 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = ExpOverlay_1(t, s_112);
          return(t);
        }
        t = repeat_1(t, f_4);
        return(t);
      }
      t = topdown_1(t, e_4);
    }
    return(t);
  }
  t = try_1(t, d_4);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL;
  q_83 = t;
  i_83 :
  if(match_cons(q_83, sym_Specification_1))
    {
      r_83 = ATgetArgument(q_83, 0);
      j_83 :
      if(((ATgetType(r_83) == AT_LIST) && !(ATisEmpty(r_83))))
        {
          s_83 = ATgetFirst((ATermList) r_83);
          u_83 = (ATerm) ATgetNext((ATermList) r_83);
          k_83 :
          if(match_cons(s_83, sym_Signature_1))
            {
              t_83 = ATgetArgument(s_83, 0);
              l_83 :
              if(((ATgetType(u_83) == AT_LIST) && !(ATisEmpty(u_83))))
                {
                  v_83 = ATgetFirst((ATermList) u_83);
                  x_83 = (ATerm) ATgetNext((ATermList) u_83);
                  m_83 :
                  if(match_cons(v_83, sym_Overlays_1))
                    {
                      w_83 = ATgetArgument(v_83, 0);
                      n_83 :
                      if(((ATgetType(x_83) == AT_LIST) && !(ATisEmpty(x_83))))
                        {
                          y_83 = ATgetFirst((ATermList) x_83);
                          a_84 = (ATerm) ATgetNext((ATermList) x_83);
                          o_83 :
                          if(match_cons(y_83, sym_Strategies_1))
                            {
                              z_83 = ATgetArgument(y_83, 0);
                              p_83 :
                              if(((ATgetType(a_84) == AT_LIST) && ATisEmpty(a_84)))
                                {
                                  {
                                    ATerm e_84 = NULL,g_84 = NULL;
                                    ATerm w_27;
                                    w_27 = t;
                                    {
                                      ATerm f_84 = NULL;
                                      t = not_null(w_83);
                                      {
                                        ATerm g_4 (ATerm t)
                                        {
                                          t = not_null(w_83);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, g_4);
                                        {
                                          f_84 = t;
                                          if(((e_84 != NULL) && (e_84 != f_84)))
                                            _fail(f_84);
                                          else
                                            e_84 = f_84;
                                        }
                                      }
                                    }
                                    t = w_27;
                                    {
                                      ATerm h_84 = NULL,j_84 = NULL,l_84 = NULL;
                                      ATerm x_27;
                                      x_27 = t;
                                      {
                                        ATerm i_84 = NULL;
                                        t = not_null(w_83);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            i_84 = t;
                                            if(((h_84 != NULL) && (h_84 != i_84)))
                                              _fail(i_84);
                                            else
                                              h_84 = i_84;
                                          }
                                        }
                                      }
                                      t = x_27;
                                      {
                                        ATerm k_84 = NULL;
                                        t = not_null(z_83);
                                        {
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = not_null(e_84);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, h_4);
                                          {
                                            k_84 = t;
                                            if(((j_84 != NULL) && (j_84 != k_84)))
                                              _fail(k_84);
                                            else
                                              j_84 = k_84;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_84), not_null(j_84));
                                          {
                                            t = conc_0(t);
                                            {
                                              l_84 = t;
                                              if(((g_84 != NULL) && (g_84 != l_84)))
                                                _fail(l_84);
                                              else
                                                g_84 = l_84;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_84))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(t_83))));
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
ATerm DefineBound_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm s_84 = NULL;
    s_84 = t;
    {
      ATerm c_28;
      c_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_84)), term_e_28);
        {
          ATerm j_4 (ATerm t)
          {
            t = term_i_28;
            return(t);
          }
          t = assert_1(t, j_4);
        }
      }
      t = c_28;
    }
    return(t);
  }
  t = map_1(t, i_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym_Overlay_3))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      c_85 = ATgetArgument(z_84, 2);
      {
        ATerm k_28;
        k_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_28, not_null(a_85)));
          {
            ATerm k_4 (ATerm t)
            {
              t = term_o_28;
              return(t);
            }
            t = assert_1(t, k_4);
            {
              t = not_null(b_85);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(c_85);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = k_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  n_85 = t;
  l_85 :
  if(match_cons(n_85, sym_RDef_3))
    {
      o_85 = ATgetArgument(n_85, 0);
      p_85 = ATgetArgument(n_85, 1);
      q_85 = ATgetArgument(n_85, 2);
      m_85 :
      if(match_cons(q_85, sym_StratRule_3))
        {
          r_85 = ATgetArgument(q_85, 0);
          s_85 = ATgetArgument(q_85, 1);
          t_85 = ATgetArgument(q_85, 2);
          {
            ATerm p_28;
            p_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_28, not_null(o_85)));
              {
                ATerm l_4 (ATerm t)
                {
                  t = term_o_28;
                  return(t);
                }
                t = assert_1(t, l_4);
                {
                  t = not_null(r_85);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(s_85);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(t_85);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = p_28;
          }
        }
      else
        {
          if(match_cons(q_85, sym_Rule_3))
            {
              r_85 = ATgetArgument(q_85, 0);
              s_85 = ATgetArgument(q_85, 1);
              t_85 = ATgetArgument(q_85, 2);
              {
                ATerm r_28;
                r_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_28, not_null(o_85)));
                  {
                    ATerm m_4 (ATerm t)
                    {
                      t = term_o_28;
                      return(t);
                    }
                    t = assert_1(t, m_4);
                    {
                      t = not_null(r_85);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(t_85);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(s_85);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = r_28;
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
ATerm guardedlchoice_1 (ATerm t, ATerm c_114 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, c_114, c_114, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, c_114);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm))
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,c_87 = NULL;
  x_86 = t;
  q_86 :
  if(match_cons(x_86, sym_GuardedLChoice_3))
    {
      y_86 = ATgetArgument(x_86, 0);
      z_86 = ATgetArgument(x_86, 1);
      c_87 = ATgetArgument(x_86, 2);
      {
        ATerm h_87 = NULL,j_87 = NULL;
        ATerm i_87 = NULL;
        t = SSLgetAnnotations(not_null(x_86));
        {
          i_87 = t;
          if(((h_87 != NULL) && (h_87 != i_87)))
            _fail(i_87);
          else
            h_87 = i_87;
        }
        {
          t = not_null(y_86);
          {
            ATerm l_87 = NULL;
            t = q_75(t);
            {
              j_87 = t;
              {
                t = not_null(z_86);
                {
                  ATerm n_87 = NULL;
                  t = r_75(t);
                  {
                    l_87 = t;
                    {
                      t = not_null(c_87);
                      {
                        ATerm p_87 = NULL;
                        t = s_75(t);
                        {
                          n_87 = t;
                          {
                            ATerm q_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(j_87), not_null(l_87), not_null(n_87)), not_null(h_87));
                            {
                              q_87 = t;
                              if(((p_87 != NULL) && (p_87 != q_87)))
                                _fail(q_87);
                              else
                                p_87 = q_87;
                            }
                            t = not_null(p_87);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm b_114 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = LChoice_2(t, b_114, _id);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = LChoice_2(t, _id, b_114);
    return(t);
  }
  t = abstract_choice_2(t, p_4, q_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm d_88 = NULL,g_88 = NULL,h_88 = NULL;
  d_88 = t;
  c_88 :
  if(match_cons(d_88, sym_LChoice_2))
    {
      g_88 = ATgetArgument(d_88, 0);
      h_88 = ATgetArgument(d_88, 1);
      {
        ATerm l_88 = NULL,n_88 = NULL;
        ATerm m_88 = NULL;
        t = SSLgetAnnotations(not_null(d_88));
        {
          m_88 = t;
          if(((l_88 != NULL) && (l_88 != m_88)))
            _fail(m_88);
          else
            l_88 = m_88;
        }
        {
          t = not_null(g_88);
          {
            ATerm p_88 = NULL;
            t = o_75(t);
            {
              n_88 = t;
              {
                t = not_null(h_88);
                {
                  ATerm r_88 = NULL;
                  t = p_75(t);
                  {
                    p_88 = t;
                    {
                      ATerm u_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(n_88), not_null(p_88)), not_null(l_88));
                      {
                        u_88 = t;
                        if(((r_88 != NULL) && (r_88 != u_88)))
                          _fail(u_88);
                        else
                          r_88 = u_88;
                      }
                      t = not_null(r_88);
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
ATerm isect_Bound_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
      j_89 = t;
      d_89 :
      if(match_cons(j_89, sym__2))
        {
          k_89 = ATgetArgument(j_89, 0);
          l_89 = ATgetArgument(j_89, 1);
          e_89 :
          if(((ATgetType(l_89) == AT_LIST) && !(ATisEmpty(l_89))))
            {
              o_89 = ATgetFirst((ATermList) l_89);
              q_89 = (ATerm) ATgetNext((ATermList) l_89);
              f_89 :
              if(match_cons(o_89, sym_Defined_1))
                {
                  p_89 = ATgetArgument(o_89, 0);
                  g_89 :
                  if(!(match_cons(k_89, sym_Scopes_0)))
                    {
                      ATerm x_28 = t;
                      int y_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_28;
                          z_28 = t;
                          {
                            ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(k_89));
                            {
                              t = table_get_0(t);
                              {
                                s_89 = t;
                                b_89 :
                                if(((ATgetType(s_89) == AT_LIST) && !(ATisEmpty(s_89))))
                                  {
                                    t_89 = ATgetFirst((ATermList) s_89);
                                    v_89 = (ATerm) ATgetNext((ATermList) s_89);
                                    c_89 :
                                    if(match_cons(t_89, sym_Defined_1))
                                      {
                                        u_89 = ATgetArgument(t_89, 0);
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
                            }
                          }
                          t = z_28;
                          ;
                          LocalPopChoice(y_28);
                        }
                      else
                        {
                          t = x_28;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), (ATerm) ATinsert(ATempty, term_a_29));
                        }
                    }
                }
              else
                {
                  h_89 :
                  if(!(match_cons(k_89, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              i_89 :
              if(!(match_cons(k_89, sym_Scopes_0)))
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
    t = try_1(t, s_4);
    return(t);
  }
  t = map_1(t, r_4);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  a_90 :
  if(match_cons(b_90, sym__2))
    {
      c_90 = ATgetArgument(b_90, 0);
      d_90 = ATgetArgument(b_90, 1);
      {
        t = not_null(d_90);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
            g_90 = t;
            z_89 :
            if(match_cons(g_90, sym__2))
              {
                h_90 = ATgetArgument(g_90, 0);
                i_90 = ATgetArgument(g_90, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_90), not_null(h_90), not_null(i_90));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm o_90 = NULL;
  o_90 = t;
  {
    ATerm b_29;
    b_29 = t;
    {
      t = term_i_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(o_90));
          t = table_putlist_0(t);
        }
      }
    }
    t = b_29;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  t = SSL_table_keys(not_null(s_90));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_90 = NULL;
  y_90 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm a_91 = NULL;
        ATerm c_91 = NULL;
        a_91 = t;
        {
          ATerm d_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_90), not_null(a_91));
          {
            t = table_get_0(t);
            {
              d_91 = t;
              if(((c_91 != NULL) && (c_91 != d_91)))
                _fail(d_91);
              else
                c_91 = d_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_91), not_null(c_91));
        }
        return(t);
      }
      t = map_1(t, u_4);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_i_28;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm y_113 (ATerm), ATerm z_113 (ATerm))
{
  ATerm j_91 = NULL,l_91 = NULL;
  ATerm i_29;
  i_29 = t;
  {
    ATerm k_91 = NULL;
    t = save_Bound_0(t);
    {
      k_91 = t;
      if(((j_91 != NULL) && (j_91 != k_91)))
        _fail(k_91);
      else
        j_91 = k_91;
    }
  }
  t = i_29;
  {
    t = y_113(t);
    {
      ATerm j_29;
      j_29 = t;
      {
        ATerm m_91 = NULL;
        t = save_Bound_0(t);
        {
          m_91 = t;
          {
            if(((l_91 != NULL) && (l_91 != m_91)))
              _fail(m_91);
            else
              l_91 = m_91;
            {
              t = not_null(j_91);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = j_29;
      {
        t = z_113(t);
        {
          ATerm k_29;
          k_29 = t;
          {
            t = not_null(l_91);
            t = isect_Bound_0(t);
          }
          t = k_29;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm a_114 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = Choice_2(t, a_114, _id);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = Choice_2(t, _id, a_114);
    return(t);
  }
  t = abstract_choice_2(t, v_4, w_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  w_91 :
  if(match_cons(x_91, sym_Choice_2))
    {
      y_91 = ATgetArgument(x_91, 0);
      z_91 = ATgetArgument(x_91, 1);
      {
        ATerm d_92 = NULL,f_92 = NULL;
        ATerm e_92 = NULL;
        t = SSLgetAnnotations(not_null(x_91));
        {
          e_92 = t;
          if(((d_92 != NULL) && (d_92 != e_92)))
            _fail(e_92);
          else
            d_92 = e_92;
        }
        {
          t = not_null(y_91);
          {
            ATerm i_92 = NULL;
            t = m_75(t);
            {
              f_92 = t;
              {
                t = not_null(z_91);
                {
                  ATerm k_92 = NULL;
                  t = n_75(t);
                  {
                    i_92 = t;
                    {
                      ATerm l_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_92), not_null(i_92)), not_null(d_92));
                      {
                        l_92 = t;
                        if(((k_92 != NULL) && (k_92 != l_92)))
                          _fail(l_92);
                        else
                          k_92 = l_92;
                      }
                      t = not_null(k_92);
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
ATerm Context_0 (ATerm t)
{
  ATerm o_93 = NULL;
  o_93 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_93 = NULL;
        ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm x_4 (ATerm t)
          {
            t = term_o_28;
            return(t);
          }
          t = rewrite_1(t, x_4);
          {
            s_93 = t;
            z_92 :
            if(match_cons(s_93, sym_Defined_2))
              {
                t_93 = ATgetArgument(s_93, 0);
                u_93 = ATgetArgument(s_93, 1);
                c_93 :
                if(match_string(t_93, "y_0"))
                  {
                    if(((r_93 != NULL) && (r_93 != u_93)))
                      _fail(u_93);
                    else
                      r_93 = u_93;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_93)), term_t_23), not_null(r_93)), term_q_29);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        {
          ATerm r_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_93 = NULL;
              ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm y_4 (ATerm t)
                {
                  t = term_o_28;
                  return(t);
                }
                t = rewrite_1(t, y_4);
                {
                  a_94 = t;
                  e_93 :
                  if(match_cons(a_94, sym_Defined_2))
                    {
                      b_94 = ATgetArgument(a_94, 0);
                      c_94 = ATgetArgument(a_94, 1);
                      f_93 :
                      if(match_string(b_94, "v_0"))
                        {
                          if(((x_93 != NULL) && (x_93 != c_94)))
                            _fail(c_94);
                          else
                            x_93 = c_94;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_93)), term_t_23), not_null(x_93)), term_t_29);
              ;
              LocalPopChoice(s_29);
            }
          else
            {
              t = r_29;
              {
                ATerm u_29 = t;
                int v_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_94 = NULL;
                    ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm z_4 (ATerm t)
                      {
                        t = term_o_28;
                        return(t);
                      }
                      t = rewrite_1(t, z_4);
                      {
                        g_94 = t;
                        j_93 :
                        if(match_cons(g_94, sym_Defined_2))
                          {
                            h_94 = ATgetArgument(g_94, 0);
                            i_94 = ATgetArgument(g_94, 1);
                            k_93 :
                            if(match_string(h_94, "s_0"))
                              {
                                if(((f_94 != NULL) && (f_94 != i_94)))
                                  _fail(i_94);
                                else
                                  f_94 = i_94;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_93)), term_t_23), not_null(f_94)), term_t_29);
                    ;
                    LocalPopChoice(v_29);
                  }
                else
                  {
                    t = u_29;
                    {
                      ATerm l_94 = NULL;
                      ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL;
                      t = (ATerm) ATempty;
                      {
                        ATerm a_5 (ATerm t)
                        {
                          t = term_o_28;
                          return(t);
                        }
                        t = rewrite_1(t, a_5);
                        {
                          m_94 = t;
                          m_93 :
                          if(match_cons(m_94, sym_Defined_2))
                            {
                              n_94 = ATgetArgument(m_94, 0);
                              o_94 = ATgetArgument(m_94, 1);
                              n_93 :
                              if(match_string(n_94, "p_0"))
                                {
                                  if(((l_94 != NULL) && (l_94 != o_94)))
                                    _fail(o_94);
                                  else
                                    l_94 = o_94;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_93)), term_t_23), not_null(l_94)), term_w_29);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Unbound_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL;
  g_95 = t;
  f_95 :
  if(match_cons(g_95, sym_Var_1))
    {
      h_95 = ATgetArgument(g_95, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_29), not_null(h_95)), term_x_29);
        {
          t = Context_0(t);
          t = error_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym_Var_1))
    {
      v_95 = ATgetArgument(u_95, 0);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_95 = NULL,z_95 = NULL;
            t = not_null(u_95);
            {
              ATerm b_5 (ATerm t)
              {
                t = term_i_28;
                return(t);
              }
              t = rewrite_1(t, b_5);
              {
                y_95 = t;
                n_95 :
                if(match_cons(y_95, sym_Defined_1))
                  {
                    z_95 = ATgetArgument(y_95, 0);
                    o_95 :
                    if(!(match_string(z_95, "f_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_95));
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_96 = NULL;
                  t = not_null(u_95);
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = term_i_28;
                      return(t);
                    }
                    t = rewrite_1(t, c_5);
                    {
                      c_96 = t;
                      q_95 :
                      if(match_cons(c_96, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_a_29;
                  ;
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm f_96 = NULL,g_96 = NULL;
                    t = not_null(u_95);
                    {
                      ATerm d_5 (ATerm t)
                      {
                        t = term_i_28;
                        return(t);
                      }
                      t = rewrite_1(t, d_5);
                      {
                        f_96 = t;
                        r_95 :
                        if(match_cons(f_96, sym_Defined_1))
                          {
                            g_96 = ATgetArgument(f_96, 0);
                            s_95 :
                            if(!(match_string(g_96, "b_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_95));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm use_vars_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(e_30);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = d_30;
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(i_30);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = h_30;
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(k_30);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = j_30;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL;
  s_96 = t;
  r_96 :
  if(match_cons(s_96, sym_Rule_3))
    {
      t_96 = ATgetArgument(s_96, 0);
      u_96 = ATgetArgument(s_96, 1);
      v_96 = ATgetArgument(s_96, 2);
      {
        ATerm a_97 = NULL,c_97 = NULL;
        ATerm b_97 = NULL;
        t = SSLgetAnnotations(not_null(s_96));
        {
          b_97 = t;
          if(((a_97 != NULL) && (a_97 != b_97)))
            _fail(b_97);
          else
            a_97 = b_97;
        }
        {
          t = not_null(t_96);
          {
            ATerm e_97 = NULL;
            t = p_77(t);
            {
              c_97 = t;
              {
                t = not_null(u_96);
                {
                  ATerm g_97 = NULL;
                  t = q_77(t);
                  {
                    e_97 = t;
                    {
                      t = not_null(v_96);
                      {
                        ATerm i_97 = NULL;
                        t = r_77(t);
                        {
                          g_97 = t;
                          {
                            ATerm j_97 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(c_97), not_null(e_97), not_null(g_97)), not_null(a_97));
                            {
                              j_97 = t;
                              if(((i_97 != NULL) && (i_97 != j_97)))
                                _fail(j_97);
                              else
                                i_97 = j_97;
                            }
                            t = not_null(i_97);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm v_97 = NULL,w_97 = NULL;
  v_97 = t;
  u_97 :
  if(match_cons(v_97, sym_RootApp_1))
    {
      w_97 = ATgetArgument(v_97, 0);
      {
        ATerm e_98 = NULL,i_98 = NULL;
        ATerm f_98 = NULL;
        t = SSLgetAnnotations(not_null(v_97));
        {
          f_98 = t;
          if(((e_98 != NULL) && (e_98 != f_98)))
            _fail(f_98);
          else
            e_98 = f_98;
        }
        {
          t = not_null(w_97);
          {
            ATerm m_98 = NULL;
            t = k_78(t);
            {
              i_98 = t;
              {
                ATerm n_98 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(i_98)), not_null(e_98));
                {
                  n_98 = t;
                  if(((m_98 != NULL) && (m_98 != n_98)))
                    _fail(n_98);
                  else
                    m_98 = n_98;
                }
                t = not_null(m_98);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
  g_99 = t;
  a_99 :
  if(match_cons(g_99, sym_App_2))
    {
      h_99 = ATgetArgument(g_99, 0);
      i_99 = ATgetArgument(g_99, 1);
      {
        ATerm m_99 = NULL,o_99 = NULL;
        ATerm n_99 = NULL;
        t = SSLgetAnnotations(not_null(g_99));
        {
          n_99 = t;
          if(((m_99 != NULL) && (m_99 != n_99)))
            _fail(n_99);
          else
            m_99 = n_99;
        }
        {
          t = not_null(h_99);
          {
            ATerm q_99 = NULL;
            t = i_78(t);
            {
              o_99 = t;
              {
                t = not_null(i_99);
                {
                  ATerm s_99 = NULL;
                  t = j_78(t);
                  {
                    q_99 = t;
                    {
                      ATerm t_99 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(o_99), not_null(q_99)), not_null(m_99));
                      {
                        t_99 = t;
                        if(((s_99 != NULL) && (s_99 != t_99)))
                          _fail(t_99);
                        else
                          s_99 = t_99;
                      }
                      t = not_null(s_99);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm d_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  d_100 = t;
  c_100 :
  if(match_cons(d_100, sym__3))
    {
      f_100 = ATgetArgument(d_100, 0);
      g_100 = ATgetArgument(d_100, 1);
      h_100 = ATgetArgument(d_100, 2);
      {
        ATerm l_100 = NULL;
        ATerm l_30;
        l_30 = t;
        {
          ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_100), not_null(g_100));
          {
            t = table_get_0(t);
            {
              m_100 = t;
              b_100 :
              if(((ATgetType(m_100) == AT_LIST) && !(ATisEmpty(m_100))))
                {
                  n_100 = ATgetFirst((ATermList) m_100);
                  o_100 = (ATerm) ATgetNext((ATermList) m_100);
                  {
                    if(((l_100 != NULL) && (l_100 != o_100)))
                      _fail(o_100);
                    else
                      l_100 = o_100;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_100), not_null(g_100), (ATerm) ATinsert(CheckATermList(not_null(l_100)), not_null(h_100)));
                      t = table_put_0(t);
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
        t = l_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm f_103 (ATerm))
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
  w_100 = t;
  v_100 :
  if(match_cons(w_100, sym__2))
    {
      x_100 = ATgetArgument(w_100, 0);
      y_100 = ATgetArgument(w_100, 1);
      {
        ATerm b_101 = NULL;
        ATerm r_30;
        r_30 = t;
        {
          ATerm c_101 = NULL;
          t = f_103(t);
          {
            c_101 = t;
            {
              if(((b_101 != NULL) && (b_101 != c_101)))
                _fail(c_101);
              else
                b_101 = c_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_101), not_null(x_100), not_null(y_100));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = r_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL;
  h_101 = t;
  g_101 :
  if(match_cons(h_101, sym_Var_1))
    {
      i_101 = ATgetArgument(h_101, 0);
      {
        ATerm s_30;
        s_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_101)), term_y_30);
          {
            ATerm e_5 (ATerm t)
            {
              t = term_i_28;
              return(t);
            }
            t = override_key_1(t, e_5);
          }
        }
        t = s_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm u_101 = NULL,v_101 = NULL;
  u_101 = t;
  t_101 :
  if(match_cons(u_101, sym_Var_1))
    {
      v_101 = ATgetArgument(u_101, 0);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_101 = NULL,a_102 = NULL;
            ATerm z_101 = NULL;
            t = SSLgetAnnotations(not_null(u_101));
            {
              z_101 = t;
              if(((y_101 != NULL) && (y_101 != z_101)))
                _fail(z_101);
              else
                y_101 = z_101;
            }
            {
              t = not_null(v_101);
              {
                ATerm c_102 = NULL;
                t = q_0(t);
                {
                  a_102 = t;
                  {
                    ATerm d_102 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_102)), not_null(y_101));
                    {
                      d_102 = t;
                      if(((c_102 != NULL) && (c_102 != d_102)))
                        _fail(d_102);
                      else
                        c_102 = d_102;
                    }
                    t = not_null(c_102);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm g_102 = NULL,i_102 = NULL;
              ATerm h_102 = NULL;
              t = SSLgetAnnotations(not_null(u_101));
              {
                h_102 = t;
                if(((g_102 != NULL) && (g_102 != h_102)))
                  _fail(h_102);
                else
                  g_102 = h_102;
              }
              {
                t = not_null(v_101);
                {
                  ATerm k_102 = NULL;
                  t = q_0(t);
                  {
                    i_102 = t;
                    {
                      ATerm l_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_102)), not_null(g_102));
                      {
                        l_102 = t;
                        if(((k_102 != NULL) && (k_102 != l_102)))
                          _fail(l_102);
                        else
                          k_102 = l_102;
                      }
                      t = not_null(k_102);
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
ATerm bind_vars_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(c_31);
      t = Binding_0(t);
    }
  else
    {
      t = b_31;
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(e_31);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = d_31;
            {
              ATerm f_31 = t;
              int g_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(g_31);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = f_31;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm z_102 = NULL,h_103 = NULL;
  z_102 = t;
  y_102 :
  if(match_cons(z_102, sym_Match_1))
    {
      h_103 = ATgetArgument(z_102, 0);
      {
        ATerm k_103 = NULL,o_103 = NULL;
        ATerm n_103 = NULL;
        t = SSLgetAnnotations(not_null(z_102));
        {
          n_103 = t;
          if(((k_103 != NULL) && (k_103 != n_103)))
            _fail(n_103);
          else
            k_103 = n_103;
        }
        {
          t = not_null(h_103);
          {
            ATerm q_103 = NULL;
            t = t_74(t);
            {
              o_103 = t;
              {
                ATerm r_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(o_103)), not_null(k_103));
                {
                  r_103 = t;
                  if(((q_103 != NULL) && (q_103 != r_103)))
                    _fail(r_103);
                  else
                    q_103 = r_103;
                }
                t = not_null(q_103);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm b_104 = NULL,c_104 = NULL;
  b_104 = t;
  a_104 :
  if(match_cons(b_104, sym_Build_1))
    {
      c_104 = ATgetArgument(b_104, 0);
      {
        ATerm f_104 = NULL,h_104 = NULL;
        ATerm g_104 = NULL;
        t = SSLgetAnnotations(not_null(b_104));
        {
          g_104 = t;
          if(((f_104 != NULL) && (f_104 != g_104)))
            _fail(g_104);
          else
            f_104 = g_104;
        }
        {
          t = not_null(c_104);
          {
            ATerm j_104 = NULL;
            t = u_74(t);
            {
              h_104 = t;
              {
                ATerm k_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(h_104)), not_null(f_104));
                {
                  k_104 = t;
                  if(((j_104 != NULL) && (j_104 != k_104)))
                    _fail(k_104);
                  else
                    j_104 = k_104;
                }
                t = not_null(j_104);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarScope_1 (ATerm t, ATerm x_113 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, x_113);
    return(t);
  }
  t = scope_2(t, f_5, g_5);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(i_31);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = h_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(n_31);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = m_31;
            {
              ATerm r_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(u_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = r_31;
                  {
                    ATerm v_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(w_31);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = v_31;
                        {
                          ATerm x_31 = t;
                          int y_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(y_31);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = x_31;
                              {
                                ATerm z_31 = t;
                                int a_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(a_32);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = z_31;
                                    {
                                      ATerm b_32 = t;
                                      int c_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(c_32);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = b_32;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm sdef_ud_0 (ATerm t)
{
  ATerm t_104 = NULL,y_104 = NULL,z_104 = NULL,b_105 = NULL;
  t_104 = t;
  s_104 :
  if(match_cons(t_104, sym_SDef_3))
    {
      y_104 = ATgetArgument(t_104, 0);
      z_104 = ATgetArgument(t_104, 1);
      b_105 = ATgetArgument(t_104, 2);
      {
        ATerm d_32;
        d_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_32, not_null(y_104)));
          {
            ATerm h_5 (ATerm t)
            {
              t = term_o_28;
              return(t);
            }
            t = assert_1(t, h_5);
            {
              t = not_null(b_105);
              t = unbound_vars_0(t);
            }
          }
        }
        t = d_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm q_105 = NULL;
    q_105 = t;
    {
      ATerm g_32;
      g_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_105)), term_a_29);
        {
          ATerm j_5 (ATerm t)
          {
            t = term_i_28;
            return(t);
          }
          t = assert_1(t, j_5);
        }
      }
      t = g_32;
    }
    return(t);
  }
  t = map_1(t, i_5);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      t = term_i_28;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm k_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_32;
          p_32 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = p_32;
          t = sdef_ud_0(t);
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = k_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, m_5, n_5);
    return(t);
  }
  t = scope_2(t, k_5, l_5);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm s_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = s_32;
      {
        ATerm w_32;
        w_32 = t;
        {
          ATerm o_5 (ATerm t)
          {
            ATerm x_32 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_32;
              }
            return(t);
          }
          t = filter_1(t, o_5);
          t = Nil_0(t);
        }
        t = w_32;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm y_105 = NULL,z_105 = NULL;
  y_105 = t;
  x_105 :
  if(match_cons(y_105, sym_Signature_1))
    {
      z_105 = ATgetArgument(y_105, 0);
      {
        ATerm c_106 = NULL,e_106 = NULL;
        ATerm d_106 = NULL;
        t = SSLgetAnnotations(not_null(y_105));
        {
          d_106 = t;
          if(((c_106 != NULL) && (c_106 != d_106)))
            _fail(d_106);
          else
            c_106 = d_106;
        }
        {
          t = not_null(z_105);
          {
            ATerm g_106 = NULL;
            t = e_77(t);
            {
              e_106 = t;
              {
                ATerm h_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(e_106)), not_null(c_106));
                {
                  h_106 = t;
                  if(((g_106 != NULL) && (g_106 != h_106)))
                    _fail(h_106);
                  else
                    g_106 = h_106;
                }
                t = not_null(g_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_5, t_5);
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
    return(t);
  }
  t = Specification_1(t, p_5);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,m_107 = NULL;
  j_107 = t;
  c_107 :
  if(match_cons(j_107, sym_Lets_2))
    {
      k_107 = ATgetArgument(j_107, 0);
      m_107 = ATgetArgument(j_107, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_107), not_null(m_107));
    }
  else
    {
      if(match_cons(j_107, sym_LChoices_1))
        {
          k_107 = ATgetArgument(j_107, 0);
          d_107 :
          if(((ATgetType(k_107) == AT_LIST) && !(ATisEmpty(k_107))))
            {
              g_107 = ATgetFirst((ATermList) k_107);
              h_107 = (ATerm) ATgetNext((ATermList) k_107);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_107), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_107)));
            }
          else
            {
              if(((ATgetType(k_107) == AT_LIST) && ATisEmpty(k_107)))
                {
                  t = term_y_32;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(j_107, sym_Choices_1))
            {
              k_107 = ATgetArgument(j_107, 0);
              e_107 :
              if(((ATgetType(k_107) == AT_LIST) && !(ATisEmpty(k_107))))
                {
                  g_107 = ATgetFirst((ATermList) k_107);
                  h_107 = (ATerm) ATgetNext((ATermList) k_107);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_107), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_107)));
                }
              else
                {
                  if(((ATgetType(k_107) == AT_LIST) && ATisEmpty(k_107)))
                    {
                      t = term_y_32;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(j_107, sym_Seqs_1))
                {
                  k_107 = ATgetArgument(j_107, 0);
                  f_107 :
                  if(((ATgetType(k_107) == AT_LIST) && !(ATisEmpty(k_107))))
                    {
                      g_107 = ATgetFirst((ATermList) k_107);
                      h_107 = (ATerm) ATgetNext((ATermList) k_107);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_107), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_107)));
                    }
                  else
                    {
                      if(((ATgetType(k_107) == AT_LIST) && ATisEmpty(k_107)))
                        {
                          t = term_n_17;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(j_107, sym_DefaultVarDec_1))
                    {
                      k_107 = ATgetArgument(j_107, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_107), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21));
                    }
                  else
                    {
                      if(match_cons(j_107, sym_InfixApp_3))
                        {
                          k_107 = ATgetArgument(j_107, 0);
                          m_107 = ATgetArgument(j_107, 1);
                          i_107 = ATgetArgument(j_107, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_107), (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_107)), not_null(k_107))));
                        }
                      else
                        {
                          if(match_cons(j_107, sym_BAM_3))
                            {
                              k_107 = ATgetArgument(j_107, 0);
                              m_107 = ATgetArgument(j_107, 1);
                              i_107 = ATgetArgument(j_107, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(i_107))), not_null(k_107)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_107))));
                            }
                          else
                            {
                              if(match_cons(j_107, sym_AM_2))
                                {
                                  k_107 = ATgetArgument(j_107, 0);
                                  m_107 = ATgetArgument(j_107, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_107), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_107)));
                                }
                              else
                                {
                                  if(match_cons(j_107, sym_MA_2))
                                    {
                                      k_107 = ATgetArgument(j_107, 0);
                                      m_107 = ATgetArgument(j_107, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_107)), not_null(m_107));
                                    }
                                  else
                                    {
                                      if(match_cons(j_107, sym_BA_2))
                                        {
                                          k_107 = ATgetArgument(j_107, 0);
                                          m_107 = ATgetArgument(j_107, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_107)), not_null(k_107));
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
ATerm topdown_1 (ATerm t, ATerm a_87 (ATerm))
{
  t = a_87(t);
  {
    ATerm v_5 (ATerm t)
    {
      t = topdown_1(t, a_87);
      return(t);
    }
    t = _all(t, v_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL;
  f_109 = t;
  c_109 :
  if(match_cons(f_109, sym__2))
    {
      g_109 = ATgetArgument(f_109, 0);
      j_109 = ATgetArgument(f_109, 1);
      d_109 :
      if(match_cons(g_109, sym__2))
        {
          h_109 = ATgetArgument(g_109, 0);
          i_109 = ATgetArgument(g_109, 1);
          e_109 :
          if(match_cons(j_109, sym__2))
            {
              k_109 = ATgetArgument(j_109, 0);
              l_109 = ATgetArgument(j_109, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_109)), not_null(h_109)), (ATerm) ATinsert(CheckATermList(not_null(l_109)), not_null(i_109)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL;
  t_109 = t;
  s_109 :
  if(((ATgetType(t_109) == AT_LIST) && !(ATisEmpty(t_109))))
    {
      u_109 = ATgetFirst((ATermList) t_109);
      v_109 = (ATerm) ATgetNext((ATermList) t_109);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_109), not_null(v_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_110 = NULL;
  w_110 = t;
  v_110 :
  if(((ATgetType(w_110) == AT_LIST) && ATisEmpty(w_110)))
    {
      t = term_j_33;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm c_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, c_95);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL;
  f_111 = t;
  d_111 :
  if(match_cons(f_111, sym_Var_1))
    {
      g_111 = ATgetArgument(f_111, 0);
      {
        ATerm j_111 = NULL,k_111 = NULL;
        t = not_null(f_111);
        {
          ATerm w_5 (ATerm t)
          {
            t = term_n_33;
            return(t);
          }
          t = rewrite_1(t, w_5);
          {
            j_111 = t;
            b_111 :
            if(match_cons(j_111, sym_Defined_1))
              {
                k_111 = ATgetArgument(j_111, 0);
                c_111 :
                if(!(match_string(k_111, "m_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_111));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm c_34;
  c_34 = t;
  {
    ATerm n_111 = NULL;
    ATerm o_111 = NULL;
    o_111 = t;
    if(((n_111 != NULL) && (n_111 != o_111)))
      _fail(o_111);
    else
      n_111 = o_111;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(n_111));
      t = printnl_0(t);
    }
  }
  t = c_34;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm d_34;
  d_34 = t;
  {
    t = error_0(t);
    {
      t = term_i_24;
      t = exit_0(t);
    }
  }
  t = d_34;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
    a_112 = t;
    z_111 :
    if(match_cons(a_112, sym_Var_1))
      {
        b_112 = ATgetArgument(a_112, 0);
        {
          ATerm e_34 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_34;
            }
          t = term_g_34;
        }
      }
    else
      {
        if(match_cons(a_112, sym_Wld_0))
          {
            t = term_g_34;
          }
        else
          {
            if(match_cons(a_112, sym_RootApp_1))
              {
                b_112 = ATgetArgument(a_112, 0);
                {
                  ATerm k_112 = NULL;
                  ATerm q_112 = NULL;
                  t = not_null(b_112);
                  {
                    t = tvars_0(t);
                    {
                      ATerm y_5 (ATerm t)
                      {
                        ATerm l_112 = NULL;
                        ATerm m_112 = NULL;
                        m_112 = t;
                        if(((l_112 != NULL) && (l_112 != m_112)))
                          _fail(m_112);
                        else
                          l_112 = m_112;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_112));
                        return(t);
                      }
                      t = map_1(t, y_5);
                      {
                        q_112 = t;
                        if(((k_112 != NULL) && (k_112 != q_112)))
                          _fail(q_112);
                        else
                          k_112 = q_112;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_34, not_null(k_112));
                }
              }
            else
              {
                if(match_cons(a_112, sym_App_2))
                  {
                    b_112 = ATgetArgument(a_112, 0);
                    c_112 = ATgetArgument(a_112, 1);
                    {
                      ATerm x_112 = NULL;
                      ATerm a_113 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_112), not_null(c_112));
                      {
                        t = tvars_0(t);
                        {
                          ATerm z_5 (ATerm t)
                          {
                            ATerm y_112 = NULL;
                            ATerm z_112 = NULL;
                            z_112 = t;
                            if(((y_112 != NULL) && (y_112 != z_112)))
                              _fail(z_112);
                            else
                              y_112 = z_112;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_112));
                            return(t);
                          }
                          t = map_1(t, z_5);
                          {
                            a_113 = t;
                            if(((x_112 != NULL) && (x_112 != a_113)))
                              _fail(a_113);
                            else
                              x_112 = a_113;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_r_34, not_null(x_112));
                    }
                  }
                else
                  {
                    if(match_cons(a_112, sym_Con_3))
                      {
                        b_112 = ATgetArgument(a_112, 0);
                        c_112 = ATgetArgument(a_112, 1);
                        d_112 = ATgetArgument(a_112, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_s_34);
                          t = fatal_error_0(t);
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
  t = alltd_1(t, x_5);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL;
  ATerm x_116 (ATerm t)
  {
    ATerm b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,u_116 = NULL;
    ATerm t_34;
    t_34 = t;
    {
      ATerm i_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_115), term_v_34);
      {
        ATerm z_34 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_34;
          }
        {
          ATerm j_116 = NULL;
          t = new_0(t);
          {
            i_116 = t;
            {
              if(((b_116 != NULL) && (b_116 != i_116)))
                _fail(i_116);
              else
                b_116 = i_116;
              {
                t = not_null(g_115);
                {
                  ATerm l_116 = NULL;
                  t = dummify_0(t);
                  {
                    j_116 = t;
                    {
                      if(((d_116 != NULL) && (d_116 != j_116)))
                        _fail(j_116);
                      else
                        d_116 = j_116;
                      {
                        ATerm o_116 = NULL;
                        ATerm a_6 (ATerm t)
                        {
                          ATerm k_116 = NULL;
                          k_116 = t;
                          {
                            if(((g_115 != NULL) && (g_115 != k_116)))
                              _fail(k_116);
                            else
                              g_115 = k_116;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_116));
                          }
                          return(t);
                        }
                        t = try_1(t, a_6);
                        {
                          l_116 = t;
                          {
                            if(((c_116 != NULL) && (c_116 != l_116)))
                              _fail(l_116);
                            else
                              c_116 = l_116;
                            {
                              t = not_null(d_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm r_116 = NULL;
                                  ATerm b_6 (ATerm t)
                                  {
                                    ATerm m_116 = NULL;
                                    ATerm n_116 = NULL;
                                    n_116 = t;
                                    if(((m_116 != NULL) && (m_116 != n_116)))
                                      _fail(n_116);
                                    else
                                      m_116 = n_116;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_116));
                                    return(t);
                                  }
                                  t = map_1(t, b_6);
                                  {
                                    o_116 = t;
                                    {
                                      if(((f_116 != NULL) && (f_116 != o_116)))
                                        _fail(o_116);
                                      else
                                        f_116 = o_116;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_115), not_null(i_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm s_116 = NULL;
                                            ATerm c_6 (ATerm t)
                                            {
                                              ATerm p_116 = NULL;
                                              ATerm q_116 = NULL;
                                              q_116 = t;
                                              if(((p_116 != NULL) && (p_116 != q_116)))
                                                _fail(q_116);
                                              else
                                                p_116 = q_116;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_116));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, c_6);
                                            {
                                              r_116 = t;
                                              {
                                                if(((e_116 != NULL) && (e_116 != r_116)))
                                                  _fail(r_116);
                                                else
                                                  e_116 = r_116;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_116), not_null(f_116));
                                                  {
                                                    ATerm t_116 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      s_116 = t;
                                                      {
                                                        if(((g_116 != NULL) && (g_116 != s_116)))
                                                          _fail(s_116);
                                                        else
                                                          g_116 = s_116;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            t_116 = t;
                                                            if(((h_116 != NULL) && (h_116 != t_116)))
                                                              _fail(t_116);
                                                            else
                                                              h_116 = t_116;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = t_34;
    {
      ATerm v_116 = NULL;
      t = not_null(d_115);
      {
        t = o_0(t);
        {
          v_116 = t;
          if(((u_116 != NULL) && (u_116 != v_116)))
            _fail(v_116);
          else
            u_116 = v_116;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(u_116), (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_35, (ATerm) ATinsert(CheckATermList(not_null(g_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_116))))), not_null(d_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_115), not_null(e_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_116)), not_null(g_115)), not_null(h_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_115))))), not_null(c_116)), (ATerm) ATmakeAppl(sym_Op_2, term_c_35, (ATerm) ATinsert(CheckATermList(not_null(g_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_116))))), not_null(i_115)))));
    }
    return(t);
  }
  c_115 = t;
  u_114 :
  if(match_cons(c_115, sym_RDef_3))
    {
      d_115 = ATgetArgument(c_115, 0);
      e_115 = ATgetArgument(c_115, 1);
      f_115 = ATgetArgument(c_115, 2);
      v_114 :
      if(match_cons(f_115, sym_Rule_3))
        {
          g_115 = ATgetArgument(f_115, 0);
          h_115 = ATgetArgument(f_115, 1);
          i_115 = ATgetArgument(f_115, 2);
          w_114 :
          if(match_cons(h_115, sym_Op_2))
            {
              a_115 = ATgetArgument(h_115, 0);
              b_115 = ATgetArgument(h_115, 1);
              x_114 :
              if(((ATgetType(b_115) == AT_LIST) && ATisEmpty(b_115)))
                {
                  y_114 :
                  if(match_string(a_115, "Undefined"))
                    {
                      ATerm f_35 = t;
                      int g_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL,u_115 = NULL;
                          ATerm h_35;
                          h_35 = t;
                          {
                            ATerm q_115 = NULL;
                            ATerm r_115 = NULL;
                            t = new_0(t);
                            {
                              q_115 = t;
                              {
                                if(((o_115 != NULL) && (o_115 != q_115)))
                                  _fail(q_115);
                                else
                                  o_115 = q_115;
                                {
                                  t = not_null(g_115);
                                  {
                                    ATerm t_115 = NULL;
                                    t = dummify_0(t);
                                    {
                                      r_115 = t;
                                      {
                                        if(((n_115 != NULL) && (n_115 != r_115)))
                                          _fail(r_115);
                                        else
                                          n_115 = r_115;
                                        {
                                          ATerm d_6 (ATerm t)
                                          {
                                            ATerm s_115 = NULL;
                                            s_115 = t;
                                            {
                                              if(((g_115 != NULL) && (g_115 != s_115)))
                                                _fail(s_115);
                                              else
                                                g_115 = s_115;
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_115));
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, d_6);
                                          {
                                            t_115 = t;
                                            if(((p_115 != NULL) && (p_115 != t_115)))
                                              _fail(t_115);
                                            else
                                              p_115 = t_115;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = h_35;
                          {
                            ATerm v_115 = NULL;
                            t = not_null(d_115);
                            {
                              t = o_0(t);
                              {
                                v_115 = t;
                                if(((u_115 != NULL) && (u_115 != v_115)))
                                  _fail(v_115);
                                else
                                  u_115 = v_115;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(u_115), (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(ATinsert(ATempty, term_v_34), not_null(n_115))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_115), not_null(e_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_115)), not_null(g_115)), term_v_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_115))))), not_null(p_115)), term_v_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_115), term_y_32)))));
                          }
                          ;
                          LocalPopChoice(g_35);
                        }
                      else
                        {
                          t = f_35;
                          t = x_116(t);
                        }
                    }
                  else
                    {
                      t = x_116(t);
                    }
                }
              else
                {
                  z_114 :
                  t = x_116(t);
                }
            }
          else
            {
              t = x_116(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL;
  t_117 = t;
  s_117 :
  if(match_cons(t_117, sym_OverrideDynamicRules_1))
    {
      u_117 = ATgetArgument(t_117, 0);
      {
        t = not_null(u_117);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm w_117 = NULL;
              ATerm x_117 = NULL;
              x_117 = t;
              if(((w_117 != NULL) && (w_117 != x_117)))
                _fail(x_117);
              else
                w_117 = x_117;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_117)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, f_6);
            return(t);
          }
          t = map_1(t, e_6);
          t = unzip_0(t);
        }
      }
    }
  else
    {
      if(match_cons(t_117, sym_DynamicRules_1))
        {
          u_117 = ATgetArgument(t_117, 0);
          {
            t = not_null(u_117);
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm z_117 = NULL;
                  ATerm a_118 = NULL;
                  a_118 = t;
                  if(((z_117 != NULL) && (z_117 != a_118)))
                    _fail(a_118);
                  else
                    z_117 = a_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(z_117)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, h_6);
                return(t);
              }
              t = map_1(t, g_6);
              t = unzip_0(t);
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
ATerm split_under_scope_1 (ATerm t, ATerm p_112 (ATerm))
{
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
  i_118 = t;
  h_118 :
  if(match_cons(i_118, sym_Scope_2))
    {
      j_118 = ATgetArgument(i_118, 0);
      k_118 = ATgetArgument(i_118, 1);
      {
        ATerm n_118 = NULL;
        ATerm i_6 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          ATerm o_118 = NULL;
          t = not_null(j_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(k_118);
              {
                t = p_112(t);
                {
                  o_118 = t;
                  if(((n_118 != NULL) && (n_118 != o_118)))
                    _fail(o_118);
                  else
                    n_118 = o_118;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_6, j_6);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_118), not_null(n_118));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm r_118 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = _one(t, r_118);
      }
    return(t);
  }
  t = r_118(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm s_118 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm b_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_112(t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = b_36;
          t = split_under_scope_1(t, s_118);
        }
      return(t);
    }
    t = oncetd_1(t, k_6);
    return(t);
  }
  t = s_118(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm u_118 = NULL;
    u_118 = t;
    {
      ATerm j_36;
      j_36 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_118)), term_l_36);
        {
          ATerm m_6 (ATerm t)
          {
            t = term_n_33;
            return(t);
          }
          t = assert_1(t, m_6);
        }
      }
      t = j_36;
    }
    return(t);
  }
  t = map_1(t, l_6);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL;
  c_119 = t;
  b_119 :
  if(((ATgetType(c_119) == AT_LIST) && !(ATisEmpty(c_119))))
    {
      d_119 = ATgetFirst((ATermList) c_119);
      e_119 = (ATerm) ATgetNext((ATermList) c_119);
      {
        ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          ATerm n_119 = NULL;
          t = not_null(d_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(d_119);
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      k_119 = t;
                      z_118 :
                      if(match_cons(k_119, sym__2))
                        {
                          l_119 = ATgetArgument(k_119, 0);
                          m_119 = ATgetArgument(k_119, 1);
                          {
                            if(((i_119 != NULL) && (i_119 != l_119)))
                              _fail(l_119);
                            else
                              i_119 = l_119;
                            {
                              if(((h_119 != NULL) && (h_119 != m_119)))
                                _fail(m_119);
                              else
                                h_119 = m_119;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_119));
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
                  t = split_dynamic_rule_1(t, p_6);
                  {
                    n_119 = t;
                    if(((j_119 != NULL) && (j_119 != n_119)))
                      _fail(n_119);
                    else
                      j_119 = n_119;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, n_6, o_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_119)), not_null(j_119)), not_null(e_119));
          t = conc_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm r_119 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = c_86(t);
      t = r_119(t);
      return(t);
    }
    t = try_1(t, q_6);
    return(t);
  }
  t = r_119(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm s_119 (ATerm t)
  {
    t = y_93(t);
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          t = Cons_2(t, _id, s_119);
        }
    }
    return(t);
  }
  t = s_119(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, r_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL;
  z_119 = t;
  v_119 :
  if(match_cons(z_119, sym_DynRuleScope_2))
    {
      a_120 = ATgetArgument(z_119, 0);
      b_120 = ATgetArgument(z_119, 1);
      w_119 :
      if(((ATgetType(a_120) == AT_LIST) && !(ATisEmpty(a_120))))
        {
          x_119 = ATgetFirst((ATermList) a_120);
          y_119 = (ATerm) ATgetNext((ATermList) a_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(y_119), not_null(b_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_119)))));
        }
      else
        {
          if(((ATgetType(a_120) == AT_LIST) && ATisEmpty(a_120)))
            {
              t = not_null(b_120);
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
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, s_6);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm x_6 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, x_6);
          return(t);
        }
        t = Cons_2(t, w_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, v_6);
      return(t);
    }
    t = Cons_2(t, _id, u_6);
    return(t);
  }
  t = Specification_1(t, t_6);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL;
  l_120 = t;
  k_120 :
  if(match_cons(l_120, sym_ScopeDefault_1))
    {
      m_120 = ATgetArgument(l_120, 0);
      {
        ATerm o_120 = NULL;
        ATerm p_120 = NULL;
        t = not_null(m_120);
        {
          t = tvars_0(t);
          {
            p_120 = t;
            if(((o_120 != NULL) && (o_120 != p_120)))
              _fail(p_120);
            else
              o_120 = p_120;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_120), not_null(m_120));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm x_120 = NULL,y_120 = NULL;
  x_120 = t;
  w_120 :
  if(match_cons(x_120, sym_DynamicRules_1))
    {
      y_120 = ATgetArgument(x_120, 0);
      {
        ATerm b_121 = NULL,d_121 = NULL;
        ATerm c_121 = NULL;
        t = SSLgetAnnotations(not_null(x_120));
        {
          c_121 = t;
          if(((b_121 != NULL) && (b_121 != c_121)))
            _fail(c_121);
          else
            b_121 = c_121;
        }
        {
          t = not_null(y_120);
          {
            ATerm f_121 = NULL;
            t = d_78(t);
            {
              d_121 = t;
              {
                ATerm g_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(d_121)), not_null(b_121));
                {
                  g_121 = t;
                  if(((f_121 != NULL) && (f_121 != g_121)))
                    _fail(g_121);
                  else
                    f_121 = g_121;
                }
                t = not_null(f_121);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm x_74 (ATerm), ATerm y_74 (ATerm))
{
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL;
  r_121 = t;
  q_121 :
  if(match_cons(r_121, sym_Scope_2))
    {
      s_121 = ATgetArgument(r_121, 0);
      t_121 = ATgetArgument(r_121, 1);
      {
        ATerm x_121 = NULL,z_121 = NULL;
        ATerm y_121 = NULL;
        t = SSLgetAnnotations(not_null(r_121));
        {
          y_121 = t;
          if(((x_121 != NULL) && (x_121 != y_121)))
            _fail(y_121);
          else
            x_121 = y_121;
        }
        {
          t = not_null(s_121);
          {
            ATerm b_122 = NULL;
            t = x_74(t);
            {
              z_121 = t;
              {
                t = not_null(t_121);
                {
                  ATerm d_122 = NULL;
                  t = y_74(t);
                  {
                    b_122 = t;
                    {
                      ATerm e_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_121), not_null(b_122)), not_null(x_121));
                      {
                        e_122 = t;
                        if(((d_122 != NULL) && (d_122 != e_122)))
                          _fail(e_122);
                        else
                          d_122 = e_122;
                      }
                      t = not_null(d_122);
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
ATerm tboundin_3 (ATerm t, ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm))
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_113, p_113);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      t = DynamicRules_1(t, p_113);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm m_122 = NULL,n_122 = NULL;
  m_122 = t;
  l_122 :
  if(match_cons(m_122, sym_DynamicRules_1))
    {
      n_122 = ATgetArgument(m_122, 0);
      {
        t = not_null(n_122);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL;
  x_122 = t;
  s_122 :
  if(match_cons(x_122, sym_LRule_1))
    {
      y_122 = ATgetArgument(x_122, 0);
      t_122 :
      if(match_cons(y_122, sym_Rule_3))
        {
          u_122 = ATgetArgument(y_122, 0);
          v_122 = ATgetArgument(y_122, 1);
          w_122 = ATgetArgument(y_122, 2);
          {
            t = not_null(u_122);
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
      if(match_cons(x_122, sym_Scope_2))
        {
          y_122 = ATgetArgument(x_122, 0);
          z_122 = ATgetArgument(x_122, 1);
          t = not_null(y_122);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL;
  j_123 = t;
  i_123 :
  if(match_cons(j_123, sym_Var_1))
    {
      k_123 = ATgetArgument(j_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
  p_123 = t;
  o_123 :
  if(match_cons(p_123, sym__2))
    {
      q_123 = ATgetArgument(p_123, 0);
      r_123 = ATgetArgument(p_123, 1);
      {
        t = not_null(q_123);
        {
          ATerm v_123 (ATerm t)
          {
            ATerm x_36 = t;
            int y_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_123);
                ;
                LocalPopChoice(y_36);
              }
            else
              {
                t = x_36;
                {
                  ATerm z_36 = t;
                  int a_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_6 (ATerm t)
                      {
                        t = not_null(r_123);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_98, y_6);
                      t = v_123(t);
                      ;
                      LocalPopChoice(a_37);
                    }
                  else
                    {
                      t = z_36;
                      t = Cons_2(t, _id, v_123);
                    }
                }
              }
            return(t);
          }
          t = v_123(t);
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
ATerm crush_3 (ATerm t, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm))
{
  ATerm a_124 = NULL;
  ATerm c_124 = NULL;
  a_124 = t;
  {
    ATerm d_124 = NULL;
    ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
    t = not_null(a_124);
    {
      d_124 = t;
      {
        t = SSL_explode_term(not_null(d_124));
        {
          f_124 = t;
          z_123 :
          if(match_cons(f_124, sym__2))
            {
              g_124 = ATgetArgument(f_124, 0);
              h_124 = ATgetArgument(f_124, 1);
              if(((c_124 != NULL) && (c_124 != h_124)))
                _fail(h_124);
              else
                c_124 = h_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_124);
      t = foldr_3(t, b_98, c_98, d_98);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL;
  n_124 = t;
  m_124 :
  if(match_cons(n_124, sym__2))
    {
      o_124 = ATgetArgument(n_124, 0);
      p_124 = ATgetArgument(n_124, 1);
      if(((o_124 != NULL) && (o_124 != p_124)))
        _fail(p_124);
      else
        o_124 = p_124;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL;
  v_124 = t;
  u_124 :
  if(((ATgetType(v_124) == AT_LIST) && !(ATisEmpty(v_124))))
    {
      w_124 = ATgetFirst((ATermList) v_124);
      x_124 = (ATerm) ATgetNext((ATermList) v_124);
      {
        t = p_98(t);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm a_125 = NULL;
            a_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_124), not_null(a_125));
              t = o_98(t);
            }
            return(t);
          }
          t = fetch_1(t, z_6);
        }
        t = not_null(x_124);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm g_98 (ATerm))
{
  ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
  g_125 = t;
  f_125 :
  if(match_cons(g_125, sym__2))
    {
      h_125 = ATgetArgument(g_125, 0);
      i_125 = ATgetArgument(g_125, 1);
      {
        t = not_null(h_125);
        {
          ATerm m_125 (ATerm t)
          {
            ATerm e_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(f_37);
              }
            else
              {
                t = e_37;
                {
                  ATerm g_37 = t;
                  int i_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = not_null(i_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_98, a_7);
                      t = m_125(t);
                      ;
                      LocalPopChoice(i_37);
                    }
                  else
                    {
                      t = g_37;
                      t = Cons_2(t, _id, m_125);
                    }
                }
              }
            return(t);
          }
          t = m_125(t);
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
  ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL;
  q_125 = t;
  o_125 :
  if(match_cons(q_125, sym__2))
    {
      r_125 = ATgetArgument(q_125, 0);
      s_125 = ATgetArgument(q_125, 1);
      p_125 :
      if(((ATgetType(s_125) == AT_LIST) && !(ATisEmpty(s_125))))
        {
          t_125 = ATgetFirst((ATermList) s_125);
          u_125 = (ATerm) ATgetNext((ATermList) s_125);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_125)), not_null(t_125)), not_null(u_125));
        }
      else
        {
          _fail(t);
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
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
  b_126 = t;
  a_126 :
  if(match_cons(b_126, sym__2))
    {
      c_126 = ATgetArgument(b_126, 0);
      d_126 = ATgetArgument(b_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_126)), not_null(c_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL;
  l_126 = t;
  i_126 :
  if(match_cons(l_126, sym__2))
    {
      m_126 = ATgetArgument(l_126, 0);
      p_126 = ATgetArgument(l_126, 1);
      j_126 :
      if(((ATgetType(m_126) == AT_LIST) && !(ATisEmpty(m_126))))
        {
          n_126 = ATgetFirst((ATermList) m_126);
          o_126 = (ATerm) ATgetNext((ATermList) m_126);
          k_126 :
          if(((ATgetType(p_126) == AT_LIST) && !(ATisEmpty(p_126))))
            {
              q_126 = ATgetFirst((ATermList) p_126);
              r_126 = (ATerm) ATgetNext((ATermList) p_126);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_126), not_null(q_126)), (ATerm) ATmakeAppl(sym__2, not_null(o_126), not_null(r_126)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL;
  b_127 = t;
  y_126 :
  if(match_cons(b_127, sym__2))
    {
      c_127 = ATgetArgument(b_127, 0);
      d_127 = ATgetArgument(b_127, 1);
      z_126 :
      if(((ATgetType(c_127) == AT_LIST) && ATisEmpty(c_127)))
        {
          a_127 :
          if(((ATgetType(d_127) == AT_LIST) && ATisEmpty(d_127)))
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
ATerm genzip_4 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm f_127 (ATerm t)
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_94(t);
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        {
          t = t_94(t);
          {
            t = _2(t, v_94, f_127);
            t = u_94(t);
          }
        }
      }
    return(t);
  }
  t = f_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm x_94 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_94);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  q_127 = t;
  o_127 :
  if(((ATgetType(q_127) == AT_LIST) && !(ATisEmpty(q_127))))
    {
      r_127 = ATgetFirst((ATermList) q_127);
      u_127 = (ATerm) ATgetNext((ATermList) q_127);
      p_127 :
      if(match_cons(r_127, sym__2))
        {
          s_127 = ATgetArgument(r_127, 0);
          t_127 = ATgetArgument(r_127, 1);
          {
            ATerm y_127 = NULL,z_127 = NULL,f_128 = NULL,l_128 = NULL;
            ATerm l_37;
            l_37 = t;
            {
              ATerm a_128 = NULL;
              ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL;
              t = not_null(t_127);
              {
                a_128 = t;
                {
                  t = SSL_explode_term(not_null(a_128));
                  {
                    c_128 = t;
                    j_127 :
                    if(match_cons(c_128, sym__2))
                      {
                        d_128 = ATgetArgument(c_128, 0);
                        e_128 = ATgetArgument(c_128, 1);
                        {
                          if(((y_127 != NULL) && (y_127 != d_128)))
                            _fail(d_128);
                          else
                            y_127 = d_128;
                          if(((z_127 != NULL) && (z_127 != e_128)))
                            _fail(e_128);
                          else
                            z_127 = e_128;
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
            t = l_37;
            {
              ATerm m_37;
              m_37 = t;
              {
                ATerm g_128 = NULL;
                ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
                t = not_null(s_127);
                {
                  g_128 = t;
                  {
                    t = SSL_explode_term(not_null(g_128));
                    {
                      i_128 = t;
                      m_127 :
                      if(match_cons(i_128, sym__2))
                        {
                          j_128 = ATgetArgument(i_128, 0);
                          k_128 = ATgetArgument(i_128, 1);
                          {
                            if(((y_127 != NULL) && (y_127 != j_128)))
                              _fail(j_128);
                            else
                              y_127 = j_128;
                            if(((f_128 != NULL) && (f_128 != k_128)))
                              _fail(k_128);
                            else
                              f_128 = k_128;
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
              t = m_37;
              {
                ATerm m_128 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_128), not_null(z_127));
                {
                  t = zip_1(t, _id);
                  {
                    m_128 = t;
                    if(((l_128 != NULL) && (l_128 != m_128)))
                      _fail(m_128);
                    else
                      l_128 = m_128;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_128), not_null(u_127));
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
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
  w_128 = t;
  u_128 :
  if(((ATgetType(w_128) == AT_LIST) && !(ATisEmpty(w_128))))
    {
      x_128 = ATgetFirst((ATermList) w_128);
      a_129 = (ATerm) ATgetNext((ATermList) w_128);
      v_128 :
      if(match_cons(x_128, sym__2))
        {
          y_128 = ATgetArgument(x_128, 0);
          z_128 = ATgetArgument(x_128, 1);
          {
            ATerm c_129 = NULL;
            if(((y_128 != NULL) && (y_128 != z_128)))
              _fail(z_128);
            else
              y_128 = z_128;
            {
              if(((c_129 != NULL) && (c_129 != a_129)))
                _fail(a_129);
              else
                c_129 = a_129;
              t = not_null(c_129);
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
ATerm while_not_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm e_129 (ATerm t)
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_86(t);
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        {
          t = s_86(t);
          t = e_129(t);
        }
      }
    return(t);
  }
  t = e_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  t = u_86(t);
  t = while_not_2(t, v_86, w_86);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm g_129 = NULL;
        g_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_129));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, e_7);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, b_7, c_7, d_7);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm m_129 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          ATerm a_38 = t;
          int b_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_129 = NULL;
              ATerm c_38;
              c_38 = t;
              {
                ATerm l_129 = NULL;
                t = f_112(t);
                {
                  l_129 = t;
                  if(((k_129 != NULL) && (k_129 != l_129)))
                    _fail(l_129);
                  else
                    k_129 = l_129;
                }
              }
              t = c_38;
              {
                ATerm f_7 (ATerm t)
                {
                  ATerm h_7 (ATerm t)
                  {
                    t = not_null(k_129);
                    return(t);
                  }
                  t = split_2(t, m_129, h_7);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = g_112(t, f_7, m_129, g_7);
                {
                  ATerm i_7 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, i_7, union_0, _id);
                }
              }
              ;
              LocalPopChoice(b_38);
            }
          else
            {
              t = a_38;
              {
                ATerm j_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, j_7, union_0, m_129);
              }
            }
        }
      }
    return(t);
  }
  t = m_129(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, k_7, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL;
  s_129 = t;
  q_129 :
  if(match_cons(s_129, sym_LRule_1))
    {
      t_129 = ATgetArgument(s_129, 0);
      r_129 :
      if(match_cons(t_129, sym_Rule_3))
        {
          u_129 = ATgetArgument(t_129, 0);
          v_129 = ATgetArgument(t_129, 1);
          w_129 = ATgetArgument(t_129, 2);
          {
            ATerm a_130 = NULL;
            ATerm b_130 = NULL;
            t = not_null(u_129);
            {
              t = tvars_0(t);
              {
                b_130 = t;
                if(((a_130 != NULL) && (a_130 != b_130)))
                  _fail(b_130);
                else
                  a_130 = b_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_129), not_null(v_129), not_null(w_129))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    t = bottomup_1(t, b_87);
    return(t);
  }
  t = _all(t, l_7);
  t = b_87(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm f_38 = t;
      int g_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          ;
          LocalPopChoice(g_38);
        }
      else
        {
          t = f_38;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, n_7);
    return(t);
  }
  t = bottomup_1(t, m_7);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL;
  g_130 = t;
  f_130 :
  if(((ATgetType(g_130) == AT_LIST) && !(ATisEmpty(g_130))))
    {
      h_130 = ATgetFirst((ATermList) g_130);
      i_130 = (ATerm) ATgetNext((ATermList) g_130);
      t = not_null(h_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_130 = NULL,o_130 = NULL,p_130 = NULL;
  n_130 = t;
  m_130 :
  if(match_cons(n_130, sym__2))
    {
      o_130 = ATgetArgument(n_130, 0);
      p_130 = ATgetArgument(n_130, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_130), not_null(p_130));
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
ATerm rewrite_1 (ATerm t, ATerm g_103 (ATerm))
{
  ATerm v_130 = NULL;
  ATerm x_130 = NULL;
  v_130 = t;
  {
    ATerm y_130 = NULL;
    t = term_h_38;
    {
      t = g_103(t);
      {
        y_130 = t;
        if(((x_130 != NULL) && (x_130 != y_130)))
          _fail(y_130);
        else
          x_130 = y_130;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_130), not_null(v_130));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm i_131 = NULL,j_131 = NULL;
  i_131 = t;
  h_131 :
  if(match_cons(i_131, sym_Var_1))
    {
      j_131 = ATgetArgument(i_131, 0);
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_131 = NULL,n_131 = NULL;
            t = not_null(i_131);
            {
              ATerm o_7 (ATerm t)
              {
                t = term_k_38;
                return(t);
              }
              t = rewrite_1(t, o_7);
              {
                m_131 = t;
                d_131 :
                if(match_cons(m_131, sym_Defined_1))
                  {
                    n_131 = ATgetArgument(m_131, 0);
                    e_131 :
                    if(!(match_string(n_131, "f_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_131), (ATerm) ATempty);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm q_131 = NULL,r_131 = NULL;
              t = not_null(i_131);
              {
                ATerm p_7 (ATerm t)
                {
                  t = term_k_38;
                  return(t);
                }
                t = rewrite_1(t, p_7);
                {
                  q_131 = t;
                  f_131 :
                  if(match_cons(q_131, sym_Defined_1))
                    {
                      r_131 = ATgetArgument(q_131, 0);
                      g_131 :
                      if(!(match_string(r_131, "b_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_131), (ATerm) ATempty);
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm u_131 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = _all(t, u_131);
      }
    return(t);
  }
  t = u_131(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL;
  c_132 = t;
  a_132 :
  if(match_cons(c_132, sym__2))
    {
      d_132 = ATgetArgument(c_132, 0);
      e_132 = ATgetArgument(c_132, 1);
      {
        ATerm h_132 = NULL,i_132 = NULL,j_132 = NULL;
        ATerm n_38;
        n_38 = t;
        {
          ATerm k_132 = NULL;
          ATerm l_132 = NULL,m_132 = NULL,n_132 = NULL;
          t = e_103(t);
          {
            k_132 = t;
            {
              if(((h_132 != NULL) && (h_132 != k_132)))
                _fail(k_132);
              else
                h_132 = k_132;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_132), not_null(d_132), not_null(e_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_38 = t;
                    int p_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_132), term_q_38);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_38);
                      }
                    else
                      {
                        t = o_38;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_132 = t;
                      z_131 :
                      if(((ATgetType(l_132) == AT_LIST) && !(ATisEmpty(l_132))))
                        {
                          m_132 = ATgetFirst((ATermList) l_132);
                          n_132 = (ATerm) ATgetNext((ATermList) l_132);
                          {
                            if(((i_132 != NULL) && (i_132 != m_132)))
                              _fail(m_132);
                            else
                              i_132 = m_132;
                            {
                              if(((j_132 != NULL) && (j_132 != n_132)))
                                _fail(n_132);
                              else
                                j_132 = n_132;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_132), term_q_38, (ATerm) ATinsert(CheckATermList(not_null(j_132)), (ATerm) ATinsert(CheckATermList(not_null(i_132)), not_null(d_132))));
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
        t = n_38;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareVarToConst_0 (ATerm t)
{
  ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL;
  x_132 = t;
  t_132 :
  if(match_cons(x_132, sym_Overlay_3))
    {
      y_132 = ATgetArgument(x_132, 0);
      z_132 = ATgetArgument(x_132, 1);
      w_132 = ATgetArgument(x_132, 2);
      u_132 :
      if(((ATgetType(z_132) == AT_LIST) && ATisEmpty(z_132)))
        {
          {
            ATerm y_38;
            y_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_132)), term_a_39);
              {
                ATerm q_7 (ATerm t)
                {
                  t = term_k_38;
                  return(t);
                }
                t = assert_1(t, q_7);
              }
            }
            t = y_38;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(x_132, sym_OpDecl_2))
        {
          y_132 = ATgetArgument(x_132, 0);
          z_132 = ATgetArgument(x_132, 1);
          v_132 :
          if(match_cons(z_132, sym_ConstType_1))
            {
              a_133 = ATgetArgument(z_132, 0);
              {
                ATerm b_39;
                b_39 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_132)), term_d_39);
                  {
                    ATerm r_7 (ATerm t)
                    {
                      t = term_k_38;
                      return(t);
                    }
                    t = assert_1(t, r_7);
                  }
                }
                t = b_39;
              }
            }
          else
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
ATerm Overlays_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm p_133 = NULL,q_133 = NULL;
  p_133 = t;
  o_133 :
  if(match_cons(p_133, sym_Overlays_1))
    {
      q_133 = ATgetArgument(p_133, 0);
      {
        ATerm t_133 = NULL,v_133 = NULL;
        ATerm u_133 = NULL;
        t = SSLgetAnnotations(not_null(p_133));
        {
          u_133 = t;
          if(((t_133 != NULL) && (t_133 != u_133)))
            _fail(u_133);
          else
            t_133 = u_133;
        }
        {
          t = not_null(q_133);
          {
            ATerm x_133 = NULL;
            t = f_77(t);
            {
              v_133 = t;
              {
                ATerm y_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(v_133)), not_null(t_133));
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
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Constructors_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm i_134 = NULL,j_134 = NULL;
  i_134 = t;
  h_134 :
  if(match_cons(i_134, sym_Constructors_1))
    {
      j_134 = ATgetArgument(i_134, 0);
      {
        ATerm o_134 = NULL,q_134 = NULL;
        ATerm p_134 = NULL;
        t = SSLgetAnnotations(not_null(i_134));
        {
          p_134 = t;
          if(((o_134 != NULL) && (o_134 != p_134)))
            _fail(p_134);
          else
            o_134 = p_134;
        }
        {
          t = not_null(j_134);
          {
            ATerm s_134 = NULL;
            t = a_77(t);
            {
              q_134 = t;
              {
                ATerm t_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(q_134)), not_null(o_134));
                {
                  t_134 = t;
                  if(((s_134 != NULL) && (s_134 != t_134)))
                    _fail(t_134);
                  else
                    s_134 = t_134;
                }
                t = not_null(s_134);
              }
            }
          }
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
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL;
  a_135 = t;
  z_134 :
  if(((ATgetType(a_135) == AT_LIST) && !(ATisEmpty(a_135))))
    {
      b_135 = ATgetFirst((ATermList) a_135);
      c_135 = (ATerm) ATgetNext((ATermList) a_135);
      t = not_null(c_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL;
  j_135 = t;
  i_135 :
  if(match_cons(j_135, sym__2))
    {
      k_135 = ATgetArgument(j_135, 0);
      l_135 = ATgetArgument(j_135, 1);
      {
        ATerm e_39;
        e_39 = t;
        {
          ATerm o_135 = NULL;
          ATerm p_135 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_135), not_null(l_135));
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = (ATerm) ATempty;
              }
            {
              p_135 = t;
              if(((o_135 != NULL) && (o_135 != p_135)))
                _fail(p_135);
              else
                o_135 = p_135;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_135), not_null(l_135), not_null(o_135));
            t = table_put_0(t);
          }
        }
        t = e_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm b_103 (ATerm))
{
  ATerm y_135 = NULL,z_135 = NULL,a_136 = NULL;
  ATerm h_39;
  h_39 = t;
  {
    ATerm b_136 = NULL;
    ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL;
    t = b_103(t);
    {
      b_136 = t;
      {
        if(((a_136 != NULL) && (a_136 != b_136)))
          _fail(b_136);
        else
          a_136 = b_136;
        {
          ATerm i_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_136), term_q_38);
              t = table_get_0(t);
              ;
              LocalPopChoice(l_39);
            }
          else
            {
              t = i_39;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_136 = t;
            x_135 :
            if(((ATgetType(c_136) == AT_LIST) && !(ATisEmpty(c_136))))
              {
                d_136 = ATgetFirst((ATermList) c_136);
                e_136 = (ATerm) ATgetNext((ATermList) c_136);
                {
                  if(((z_135 != NULL) && (z_135 != d_136)))
                    _fail(d_136);
                  else
                    z_135 = d_136;
                  {
                    if(((y_135 != NULL) && (y_135 != e_136)))
                      _fail(e_136);
                    else
                      y_135 = e_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_136), term_q_38, not_null(y_135));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_135);
                          {
                            ATerm s_7 (ATerm t)
                            {
                              ATerm f_136 = NULL;
                              f_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_136), not_null(f_136));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_7);
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
  t = h_39;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm))
{
  ATerm m_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_85(t);
      t = w_85(t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = m_39;
      {
        t = w_85(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm a_103 (ATerm))
{
  ATerm m_136 = NULL;
  ATerm q_39;
  q_39 = t;
  {
    ATerm n_136 = NULL;
    ATerm o_136 = NULL;
    t = a_103(t);
    {
      n_136 = t;
      {
        if(((m_136 != NULL) && (m_136 != n_136)))
          _fail(n_136);
        else
          m_136 = n_136;
        {
          ATerm p_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_136), term_q_38);
          {
            ATerm t_39 = t;
            int b_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_40);
              }
            else
              {
                t = t_39;
                t = (ATerm) ATempty;
              }
            {
              p_136 = t;
              if(((o_136 != NULL) && (o_136 != p_136)))
                _fail(p_136);
              else
                o_136 = p_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_136), term_q_38, (ATerm) ATinsert(CheckATermList(not_null(o_136)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_39;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm c_103 (ATerm), ATerm d_103 (ATerm))
{
  t = begin_scope_1(t, c_103);
  {
    ATerm t_7 (ATerm t)
    {
      t = end_scope_1(t, c_103);
      return(t);
    }
    t = restore_always_2(t, d_103, t_7);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = term_k_38;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      ATerm x_7 (ATerm t)
      {
        ATerm y_7 (ATerm t)
        {
          ATerm c_40 = t;
          int d_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_7 (ATerm t)
              {
                ATerm a_8 (ATerm t)
                {
                  t = try_1(t, DeclareVarToConst_0);
                  return(t);
                }
                t = map_1(t, a_8);
                return(t);
              }
              t = Constructors_1(t, z_7);
              ;
              LocalPopChoice(d_40);
            }
          else
            {
              t = c_40;
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm c_8 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, c_8);
                  return(t);
                }
                t = Overlays_1(t, b_8);
              }
            }
          return(t);
        }
        t = try_1(t, y_7);
        return(t);
      }
      t = map_1(t, x_7);
      return(t);
    }
    t = Specification_1(t, w_7);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, u_7, v_7);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL;
  u_136 = t;
  t_136 :
  if(match_cons(u_136, sym_Rules_1))
    {
      v_136 = ATgetArgument(u_136, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm e_100 (ATerm))
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 (ATerm t)
            {
              t = filter_1(t, e_100);
              return(t);
            }
            t = Cons_2(t, e_100, d_8);
            ;
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
              a_137 = t;
              z_136 :
              if(((ATgetType(a_137) == AT_LIST) && !(ATisEmpty(a_137))))
                {
                  b_137 = ATgetFirst((ATermList) a_137);
                  c_137 = (ATerm) ATgetNext((ATermList) a_137);
                  {
                    t = not_null(c_137);
                    t = filter_1(t, e_100);
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
ATerm GetConstructors_0 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL;
  k_137 = t;
  j_137 :
  if(match_cons(k_137, sym_Signature_1))
    {
      l_137 = ATgetArgument(k_137, 0);
      {
        ATerm n_137 = NULL;
        ATerm r_137 = NULL;
        t = not_null(l_137);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm o_137 = NULL,p_137 = NULL;
            o_137 = t;
            h_137 :
            if(match_cons(o_137, sym_Constructors_1))
              {
                p_137 = ATgetArgument(o_137, 0);
                t = not_null(p_137);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, e_8);
          {
            t = concat_0(t);
            {
              r_137 = t;
              if(((n_137 != NULL) && (n_137 != r_137)))
                _fail(r_137);
              else
                n_137 = r_137;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(n_137));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InsertBSpec_0 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL;
  l_138 = t;
  k_138 :
  if(match_cons(l_138, sym__2))
    {
      m_138 = ATgetArgument(l_138, 0);
      n_138 = ATgetArgument(l_138, 1);
      {
        ATerm q_138 = NULL,r_138 = NULL;
        ATerm s_138 = NULL;
        ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL;
        t = not_null(m_138);
        {
          s_138 = t;
          {
            t = SSL_explode_term(not_null(s_138));
            {
              u_138 = t;
              y_137 :
              if(match_cons(u_138, sym__2))
                {
                  v_138 = ATgetArgument(u_138, 0);
                  w_138 = ATgetArgument(u_138, 1);
                  z_137 :
                  if(((ATgetType(w_138) == AT_LIST) && !(ATisEmpty(w_138))))
                    {
                      x_138 = ATgetFirst((ATermList) w_138);
                      y_138 = (ATerm) ATgetNext((ATermList) w_138);
                      a_138 :
                      if(((ATgetType(y_138) == AT_LIST) && ATisEmpty(y_138)))
                        {
                          {
                            if(((q_138 != NULL) && (q_138 != v_138)))
                              _fail(v_138);
                            else
                              q_138 = v_138;
                            if(((r_138 != NULL) && (r_138 != x_138)))
                              _fail(x_138);
                            else
                              r_138 = x_138;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
          t = not_null(n_138);
          {
            ATerm f_8 (ATerm t)
            {
              ATerm z_138 = NULL;
              ATerm b_139 = NULL,j_139 = NULL,l_139 = NULL,n_139 = NULL;
              z_138 = t;
              {
                ATerm f_41;
                f_41 = t;
                {
                  ATerm c_139 = NULL;
                  ATerm e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL;
                  t = not_null(z_138);
                  {
                    c_139 = t;
                    {
                      t = SSL_explode_term(not_null(c_139));
                      {
                        e_139 = t;
                        e_138 :
                        if(match_cons(e_139, sym__2))
                          {
                            f_139 = ATgetArgument(e_139, 0);
                            g_139 = ATgetArgument(e_139, 1);
                            f_138 :
                            if(((ATgetType(g_139) == AT_LIST) && !(ATisEmpty(g_139))))
                              {
                                h_139 = ATgetFirst((ATermList) g_139);
                                i_139 = (ATerm) ATgetNext((ATermList) g_139);
                                g_138 :
                                if(((ATgetType(i_139) == AT_LIST) && ATisEmpty(i_139)))
                                  {
                                    {
                                      if(((q_138 != NULL) && (q_138 != f_139)))
                                        _fail(f_139);
                                      else
                                        q_138 = f_139;
                                      if(((b_139 != NULL) && (b_139 != h_139)))
                                        _fail(h_139);
                                      else
                                        b_139 = h_139;
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
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
                t = f_41;
                {
                  ATerm g_41;
                  g_41 = t;
                  {
                    ATerm k_139 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_139), not_null(r_138));
                    {
                      t = conc_0(t);
                      {
                        k_139 = t;
                        if(((j_139 != NULL) && (j_139 != k_139)))
                          _fail(k_139);
                        else
                          j_139 = k_139;
                      }
                    }
                  }
                  t = g_41;
                  {
                    ATerm h_41;
                    h_41 = t;
                    {
                      ATerm m_139 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(j_139));
                      {
                        m_139 = t;
                        if(((l_139 != NULL) && (l_139 != m_139)))
                          _fail(m_139);
                        else
                          l_139 = m_139;
                      }
                    }
                    t = h_41;
                    {
                      t = SSL_mkterm(not_null(q_138), not_null(l_139));
                      {
                        n_139 = t;
                        t = not_null(n_139);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, f_8);
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm))
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_99(t);
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      {
        ATerm d_140 = NULL,e_140 = NULL,f_140 = NULL;
        d_140 = t;
        c_140 :
        if(((ATgetType(d_140) == AT_LIST) && !(ATisEmpty(d_140))))
          {
            e_140 = ATgetFirst((ATermList) d_140);
            f_140 = (ATerm) ATgetNext((ATermList) d_140);
            {
              ATerm i_140 = NULL,k_140 = NULL;
              ATerm l_41;
              l_41 = t;
              {
                ATerm j_140 = NULL;
                t = not_null(e_140);
                {
                  t = f_99(t);
                  {
                    j_140 = t;
                    if(((i_140 != NULL) && (i_140 != j_140)))
                      _fail(j_140);
                    else
                      i_140 = j_140;
                  }
                }
              }
              t = l_41;
              {
                ATerm l_140 = NULL;
                t = not_null(f_140);
                {
                  t = foldr_3(t, d_99, e_99, f_99);
                  {
                    l_140 = t;
                    if(((k_140 != NULL) && (k_140 != l_140)))
                      _fail(l_140);
                    else
                      k_140 = l_140;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_140), not_null(k_140));
                  t = e_99(t);
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
ATerm CombineSections_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm h_8 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_41), term_r_41), term_q_41);
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      ATerm j_8 (ATerm t)
      {
        ATerm x_41 = t;
        int y_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0(t);
            ;
            LocalPopChoice(y_41);
          }
        else
          {
            t = x_41;
            t = RulesToStrategies_0(t);
          }
        return(t);
      }
      t = try_1(t, j_8);
      return(t);
    }
    t = foldr_3(t, h_8, InsertBSpec_0, i_8);
    return(t);
  }
  t = Specification_1(t, g_8);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm k_8 (ATerm t)
    {
      t = try_1(t, HL_0);
      return(t);
    }
    t = topdown_1(t, k_8);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm l_8 (ATerm t)
            {
              t = try_1(t, HL_0);
              return(t);
            }
            t = topdown_1(t, l_8);
            {
              ATerm m_8 (ATerm t)
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm s_140 = NULL,t_140 = NULL;
                  s_140 = t;
                  r_140 :
                  if(match_cons(s_140, sym_Constructors_1))
                    {
                      t_140 = ATgetArgument(s_140, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_140))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, n_8);
                return(t);
              }
              t = Specification_1(t, m_8);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    t = term_z_41;
    return(t);
  }
  t = timing_1(t, o_8);
  {
    t = normalize_spec_0(t);
    {
      ATerm p_8 (ATerm t)
      {
        t = term_a_42;
        return(t);
      }
      t = timing_1(t, p_8);
      {
        ATerm b_42;
        b_42 = t;
        t = spec_use_def_0(t);
        t = b_42;
        {
          ATerm q_8 (ATerm t)
          {
            t = term_h_42;
            return(t);
          }
          t = timing_1(t, q_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm r_8 (ATerm t)
              {
                t = term_i_42;
                return(t);
              }
              t = timing_1(t, r_8);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm s_8 (ATerm t)
                  {
                    t = term_j_42;
                    return(t);
                  }
                  t = timing_1(t, s_8);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm t_8 (ATerm t)
                      {
                        t = term_m_42;
                        return(t);
                      }
                      t = timing_1(t, t_8);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm u_8 (ATerm t)
                          {
                            t = term_n_42;
                            return(t);
                          }
                          t = timing_1(t, u_8);
                          {
                            t = strename_0(t);
                            {
                              ATerm v_8 (ATerm t)
                              {
                                t = term_o_42;
                                return(t);
                              }
                              t = timing_1(t, v_8);
                              {
                                ATerm w_8 (ATerm t)
                                {
                                  ATerm x_8 (ATerm t)
                                  {
                                    ATerm y_8 (ATerm t)
                                    {
                                      t = Strategies_1(t, desugar_spec_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, y_8, Nil_0);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, x_8);
                                  return(t);
                                }
                                t = Specification_1(t, w_8);
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm c_141 = NULL,d_141 = NULL,e_141 = NULL;
  c_141 = t;
  b_141 :
  if(match_cons(c_141, sym__2))
    {
      d_141 = ATgetArgument(c_141, 0);
      e_141 = ATgetArgument(c_141, 1);
      {
        ATerm i_141 = NULL,k_141 = NULL;
        ATerm j_141 = NULL;
        t = SSLgetAnnotations(not_null(c_141));
        {
          j_141 = t;
          if(((i_141 != NULL) && (i_141 != j_141)))
            _fail(j_141);
          else
            i_141 = j_141;
        }
        {
          t = not_null(d_141);
          {
            ATerm m_141 = NULL;
            t = e_73(t);
            {
              k_141 = t;
              {
                t = not_null(e_141);
                {
                  ATerm o_141 = NULL;
                  t = f_73(t);
                  {
                    m_141 = t;
                    {
                      ATerm p_141 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_141), not_null(m_141)), not_null(i_141));
                      {
                        p_141 = t;
                        if(((o_141 != NULL) && (o_141 != p_141)))
                          _fail(p_141);
                        else
                          o_141 = p_141;
                      }
                      t = not_null(o_141);
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
  ATerm x_141 = NULL;
  ATerm p_42;
  p_42 = t;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm y_141 = NULL,z_141 = NULL;
      y_141 = t;
      w_141 :
      if(match_cons(y_141, sym_Program_1))
        {
          z_141 = ATgetArgument(y_141, 0);
          if(((x_141 != NULL) && (x_141 != z_141)))
            _fail(z_141);
          else
            x_141 = z_141;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_42), not_null(x_141)), term_v_42));
      {
        t = printnl_0(t);
        {
          t = term_i_24;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_42;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL;
  d_142 = t;
  c_142 :
  if(match_cons(d_142, sym__2))
    {
      e_142 = ATgetArgument(d_142, 0);
      f_142 = ATgetArgument(d_142, 1);
      {
        ATerm x_42;
        x_42 = t;
        t = SSL_printnl(not_null(e_142), not_null(f_142));
        t = x_42;
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
  ATerm k_142 = NULL;
  k_142 = t;
  t = SSL_implode_string(not_null(k_142));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      {
        ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL;
        p_142 = t;
        o_142 :
        if(((ATgetType(p_142) == AT_LIST) && !(ATisEmpty(p_142))))
          {
            q_142 = ATgetFirst((ATermList) p_142);
            r_142 = (ATerm) ATgetNext((ATermList) p_142);
            {
              t = not_null(q_142);
              {
                ATerm a_9 (ATerm t)
                {
                  t = not_null(r_142);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_9);
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
  ATerm b_143 = NULL;
  ATerm d_143 = NULL;
  b_143 = t;
  {
    ATerm e_143 = NULL;
    ATerm g_143 = NULL,h_143 = NULL,i_143 = NULL;
    t = not_null(b_143);
    {
      e_143 = t;
      {
        t = SSL_explode_term(not_null(e_143));
        {
          g_143 = t;
          z_142 :
          if(match_cons(g_143, sym__2))
            {
              h_143 = ATgetArgument(g_143, 0);
              i_143 = ATgetArgument(g_143, 1);
              a_143 :
              if(match_string(h_143, ""))
                {
                  if(((d_143 != NULL) && (d_143 != i_143)))
                    _fail(i_143);
                  else
                    d_143 = i_143;
                }
              else
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
      t = not_null(d_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_93 (ATerm))
{
  ATerm m_143 (ATerm t)
  {
    ATerm c_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_143);
        ;
        LocalPopChoice(e_43);
      }
    else
      {
        t = c_43;
        {
          t = Nil_0(t);
          t = g_93(t);
        }
      }
    return(t);
  }
  t = m_143(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_143 = NULL,q_143 = NULL,r_143 = NULL;
  p_143 = t;
  o_143 :
  if(match_cons(p_143, sym__2))
    {
      q_143 = ATgetArgument(p_143, 0);
      r_143 = ATgetArgument(p_143, 1);
      {
        t = not_null(q_143);
        {
          ATerm b_9 (ATerm t)
          {
            t = not_null(r_143);
            return(t);
          }
          t = at_end_1(t, b_9);
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
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_143 = NULL;
  w_143 = t;
  t = SSL_explode_string(not_null(w_143));
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
  ATerm a_144 = NULL;
  a_144 = t;
  t = SSL_is_string(not_null(a_144));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_43);
    }
  else
    {
      t = h_43;
      {
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_9);
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            {
              ATerm j_144 = NULL,k_144 = NULL,l_144 = NULL;
              j_144 = t;
              i_144 :
              if(match_cons(j_144, sym_Path_1))
                {
                  k_144 = ATgetArgument(j_144, 0);
                  t = not_null(k_144);
                }
              else
                {
                  if(match_cons(j_144, sym_Var_1))
                    {
                      k_144 = ATgetArgument(j_144, 0);
                      {
                        t = not_null(k_144);
                        {
                          ATerm m_43 = t;
                          int u_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_43);
                            }
                          else
                            {
                              t = m_43;
                              {
                                ATerm d_9 (ATerm t)
                                {
                                  t = term_v_43;
                                  return(t);
                                }
                                t = debug_1(t, d_9);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_144, sym_Prefix_2))
                        {
                          k_144 = ATgetArgument(j_144, 0);
                          l_144 = ATgetArgument(j_144, 1);
                          {
                            ATerm q_144 = NULL,s_144 = NULL;
                            ATerm w_43;
                            w_43 = t;
                            {
                              ATerm r_144 = NULL;
                              t = not_null(k_144);
                              {
                                t = eval_config_0(t);
                                {
                                  r_144 = t;
                                  if(((q_144 != NULL) && (q_144 != r_144)))
                                    _fail(r_144);
                                  else
                                    q_144 = r_144;
                                }
                              }
                            }
                            t = w_43;
                            {
                              ATerm t_144 = NULL;
                              t = not_null(l_144);
                              {
                                t = eval_config_0(t);
                                {
                                  t_144 = t;
                                  if(((s_144 != NULL) && (s_144 != t_144)))
                                    _fail(t_144);
                                  else
                                    s_144 = t_144;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_144), not_null(s_144));
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
  ATerm b_145 = NULL;
  b_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_44, not_null(b_145));
    {
      t = table_get_0(t);
      {
        ATerm f_9 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_44;
            j_44 = t;
            {
              ATerm d_145 = NULL;
              ATerm e_145 = NULL;
              e_145 = t;
              if(((d_145 != NULL) && (d_145 != e_145)))
                _fail(e_145);
              else
                d_145 = e_145;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_44, not_null(b_145), not_null(d_145));
                t = table_put_0(t);
              }
            }
            t = j_44;
          }
          return(t);
        }
        t = try_1(t, f_9);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm g_9 (ATerm t)
  {
    ATerm k_44;
    k_44 = t;
    {
      ATerm i_145 = NULL;
      ATerm j_145 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          j_145 = t;
          if(((i_145 != NULL) && (i_145 != j_145)))
            _fail(j_145);
          else
            i_145 = j_145;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_145), term_l_44);
        t = geq_0(t);
      }
    }
    t = k_44;
    t = j_106(t);
    return(t);
  }
  t = try_1(t, g_9);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_145 = NULL,o_145 = NULL,p_145 = NULL;
  n_145 = t;
  m_145 :
  if(match_cons(n_145, sym__2))
    {
      o_145 = ATgetArgument(n_145, 0);
      p_145 = ATgetArgument(n_145, 1);
      t = SSL_WriteToTextFile(not_null(o_145), not_null(p_145));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_145 = NULL,w_145 = NULL,x_145 = NULL;
  v_145 = t;
  u_145 :
  if(match_cons(v_145, sym__2))
    {
      w_145 = ATgetArgument(v_145, 0);
      x_145 = ATgetArgument(v_145, 1);
      t = SSL_WriteToBinaryFile(not_null(w_145), not_null(x_145));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_146 = NULL;
  ATerm m_44;
  m_44 = t;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_9 (ATerm t)
          {
            ATerm g_146 = NULL,h_146 = NULL;
            g_146 = t;
            c_146 :
            if(match_cons(g_146, sym_Output_1))
              {
                h_146 = ATgetArgument(g_146, 0);
                if(((f_146 != NULL) && (f_146 != h_146)))
                  _fail(h_146);
                else
                  f_146 = h_146;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_9);
          ;
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          {
            ATerm i_146 = NULL;
            t = term_p_44;
            {
              i_146 = t;
              if(((f_146 != NULL) && (f_146 != i_146)))
                _fail(i_146);
              else
                f_146 = i_146;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_9, _id);
  }
  t = m_44;
  {
    ATerm k_9 (ATerm t)
    {
      ATerm p_9 (ATerm t)
      {
        t = not_null(f_146);
        return(t);
      }
      t = split_2(t, p_9, _id);
      return(t);
    }
    t = _2(t, _id, k_9);
    {
      ATerm q_44 = t;
      int r_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_9 (ATerm t)
          {
            ATerm z_9 (ATerm t)
            {
              ATerm j_146 = NULL;
              j_146 = t;
              e_146 :
              if(!(match_cons(j_146, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_9);
            return(t);
          }
          t = _2(t, q_9, WriteToBinaryFile_0);
          ;
          LocalPopChoice(r_44);
        }
      else
        {
          t = q_44;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_104 (ATerm))
{
  ATerm p_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL;
  ATerm s_44;
  s_44 = t;
  t = dtime_0(t);
  t = s_44;
  {
    t = q_104(t);
    {
      ATerm t_44;
      t_44 = t;
      {
        ATerm q_146 = NULL;
        t = dtime_0(t);
        {
          q_146 = t;
          if(((p_146 != NULL) && (p_146 != q_146)))
            _fail(q_146);
          else
            p_146 = q_146;
        }
      }
      t = t_44;
      {
        r_146 = t;
        o_146 :
        if(match_cons(r_146, sym__2))
          {
            s_146 = ATgetArgument(r_146, 0);
            t_146 = ATgetArgument(r_146, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_146)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_146))), not_null(t_146));
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
ATerm debug_1 (ATerm t, ATerm l_103 (ATerm))
{
  ATerm u_44;
  u_44 = t;
  {
    ATerm a_147 = NULL,c_147 = NULL;
    ATerm y_44;
    y_44 = t;
    {
      ATerm b_147 = NULL;
      t = l_103(t);
      {
        b_147 = t;
        if(((a_147 != NULL) && (a_147 != b_147)))
          _fail(b_147);
        else
          a_147 = b_147;
      }
    }
    t = y_44;
    {
      ATerm d_147 = NULL;
      d_147 = t;
      if(((c_147 != NULL) && (c_147 != d_147)))
        _fail(d_147);
      else
        c_147 = d_147;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_147)), not_null(a_147)));
        t = printnl_0(t);
      }
    }
  }
  t = u_44;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_147 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_147 = NULL;
      i_147 = t;
      {
        if(((h_147 != NULL) && (h_147 != i_147)))
          _fail(i_147);
        else
          h_147 = i_147;
        t = SSL_ReadFromFile(not_null(h_147));
      }
      ;
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      {
        ATerm j_10 (ATerm t)
        {
          t = term_b_45;
          return(t);
        }
        t = debug_1(t, j_10);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_100 (ATerm), ATerm r_100 (ATerm))
{
  ATerm m_147 = NULL,o_147 = NULL;
  ATerm c_45;
  c_45 = t;
  {
    ATerm n_147 = NULL;
    t = q_100(t);
    {
      n_147 = t;
      if(((m_147 != NULL) && (m_147 != n_147)))
        _fail(n_147);
      else
        m_147 = n_147;
    }
  }
  t = c_45;
  {
    ATerm p_147 = NULL;
    t = r_100(t);
    {
      p_147 = t;
      if(((o_147 != NULL) && (o_147 != p_147)))
        _fail(p_147);
      else
        o_147 = p_147;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_147), not_null(o_147));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_147 = NULL;
  ATerm d_45;
  d_45 = t;
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 (ATerm t)
        {
          ATerm w_147 = NULL,x_147 = NULL;
          w_147 = t;
          t_147 :
          if(match_cons(w_147, sym_Input_1))
            {
              x_147 = ATgetArgument(w_147, 0);
              if(((v_147 != NULL) && (v_147 != x_147)))
                _fail(x_147);
              else
                v_147 = x_147;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_10);
        ;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        {
          ATerm y_147 = NULL;
          t = term_u_45;
          {
            y_147 = t;
            if(((v_147 != NULL) && (v_147 != y_147)))
              _fail(y_147);
            else
              v_147 = y_147;
          }
        }
      }
  }
  t = d_45;
  {
    ATerm w_10 (ATerm t)
    {
      t = not_null(v_147);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_10);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    ATerm c_148 = NULL;
    c_148 = t;
    b_148 :
    if(!(match_string(c_148, "-v")))
      {
        if(!(match_string(c_148, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    t = term_c_46;
    t = set_config_0(t);
    t = term_d_46;
    return(t);
  }
  ATerm z_10 (ATerm t)
  {
    t = term_e_46;
    return(t);
  }
  t = Option_3(t, x_10, y_10, z_10);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm f_148 = NULL;
    f_148 = t;
    d_148 :
    if(!(match_string(f_148, "-k")))
      {
        if(!(match_string(f_148, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    ATerm f_46;
    f_46 = t;
    {
      ATerm g_148 = NULL;
      ATerm h_148 = NULL;
      t = string_to_int_0(t);
      {
        h_148 = t;
        if(((g_148 != NULL) && (g_148 != h_148)))
          _fail(h_148);
        else
          g_148 = h_148;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_46, not_null(g_148));
        t = set_config_0(t);
      }
    }
    t = f_46;
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = term_h_46;
    return(t);
  }
  t = ArgOption_3(t, a_11, b_11, c_11);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_148 = NULL;
  k_148 = t;
  t = SSL_string_to_int(not_null(k_148));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 (ATerm t)
      {
        ATerm s_148 = NULL;
        s_148 = t;
        n_148 :
        if(!(match_string(s_148, "-S")))
          {
            if(!(match_string(s_148, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_11 (ATerm t)
      {
        t = term_n_46;
        t = set_config_0(t);
        t = term_o_46;
        return(t);
      }
      ATerm f_11 (ATerm t)
      {
        t = term_p_46;
        return(t);
      }
      t = Option_3(t, d_11, e_11, f_11);
      ;
      LocalPopChoice(j_46);
    }
  else
    {
      t = i_46;
      {
        ATerm t_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_11 (ATerm t)
            {
              ATerm t_148 = NULL;
              t_148 = t;
              o_148 :
              if(!(match_string(t_148, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_11 (ATerm t)
            {
              ATerm w_148 = NULL;
              ATerm w_46;
              w_46 = t;
              {
                ATerm u_148 = NULL;
                ATerm v_148 = NULL;
                t = string_to_int_0(t);
                {
                  v_148 = t;
                  if(((u_148 != NULL) && (u_148 != v_148)))
                    _fail(v_148);
                  else
                    u_148 = v_148;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(u_148));
                  t = set_config_0(t);
                }
              }
              t = w_46;
              {
                ATerm x_148 = NULL;
                x_148 = t;
                if(((w_148 != NULL) && (w_148 != x_148)))
                  _fail(x_148);
                else
                  w_148 = x_148;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_148));
              }
              return(t);
            }
            ATerm i_11 (ATerm t)
            {
              t = term_x_46;
              return(t);
            }
            t = ArgOption_3(t, g_11, h_11, i_11);
            ;
            LocalPopChoice(u_46);
          }
        else
          {
            t = t_46;
            {
              ATerm j_11 (ATerm t)
              {
                ATerm y_148 = NULL;
                y_148 = t;
                r_148 :
                if(!(match_string(y_148, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_11 (ATerm t)
              {
                t = term_a_47;
                t = set_config_0(t);
                t = term_b_47;
                return(t);
              }
              ATerm l_11 (ATerm t)
              {
                t = term_c_47;
                return(t);
              }
              t = Option_3(t, j_11, k_11, l_11);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(e_47);
    }
  else
    {
      t = d_47;
      {
        ATerm l_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(m_47);
          }
        else
          {
            t = l_47;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_11 (ATerm t)
  {
    ATerm e_149 = NULL;
    e_149 = t;
    b_149 :
    if(!(match_string(e_149, "-o")))
      {
        if(!(match_string(e_149, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm h_149 = NULL;
    ATerm n_47;
    n_47 = t;
    {
      ATerm f_149 = NULL;
      ATerm g_149 = NULL;
      g_149 = t;
      if(((f_149 != NULL) && (f_149 != g_149)))
        _fail(g_149);
      else
        f_149 = g_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_47, not_null(f_149));
        t = set_config_0(t);
      }
    }
    t = n_47;
    {
      ATerm i_149 = NULL;
      i_149 = t;
      if(((h_149 != NULL) && (h_149 != i_149)))
        _fail(i_149);
      else
        h_149 = i_149;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_149));
    }
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    t = term_p_47;
    return(t);
  }
  t = ArgOption_3(t, m_11, n_11, p_11);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      {
        ATerm q_11 (ATerm t)
        {
          ATerm m_149 = NULL;
          m_149 = t;
          l_149 :
          if(!(match_string(m_149, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_11 (ATerm t)
        {
          t = term_w_47;
          t = set_config_0(t);
          t = term_x_47;
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_y_47;
          return(t);
        }
        t = Option_3(t, q_11, r_11, t_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm s_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL;
  s_149 = t;
  q_149 :
  if(match_string(s_149, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(s_149) == AT_LIST) && !(ATisEmpty(s_149))))
        {
          t_149 = ATgetFirst((ATermList) s_149);
          u_149 = (ATerm) ATgetNext((ATermList) s_149);
          r_149 :
          if(((ATgetType(u_149) == AT_LIST) && !(ATisEmpty(u_149))))
            {
              v_149 = ATgetFirst((ATermList) u_149);
              w_149 = (ATerm) ATgetNext((ATermList) u_149);
              {
                ATerm a_150 = NULL;
                ATerm z_47;
                z_47 = t;
                {
                  t = not_null(t_149);
                  t = k_0(t);
                }
                t = z_47;
                {
                  ATerm b_150 = NULL;
                  t = not_null(v_149);
                  {
                    t = l_0(t);
                    {
                      b_150 = t;
                      if(((a_150 != NULL) && (a_150 != b_150)))
                        _fail(b_150);
                      else
                        a_150 = b_150;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_149)), not_null(a_150));
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
  ATerm u_11 (ATerm t)
  {
    ATerm i_150 = NULL;
    i_150 = t;
    f_150 :
    if(!(match_string(i_150, "-i")))
      {
        if(!(match_string(i_150, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    ATerm l_150 = NULL;
    ATerm a_48;
    a_48 = t;
    {
      ATerm j_150 = NULL;
      ATerm k_150 = NULL;
      k_150 = t;
      if(((j_150 != NULL) && (j_150 != k_150)))
        _fail(k_150);
      else
        j_150 = k_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_48, not_null(j_150));
        t = set_config_0(t);
      }
    }
    t = a_48;
    {
      ATerm m_150 = NULL;
      m_150 = t;
      if(((l_150 != NULL) && (l_150 != m_150)))
        _fail(m_150);
      else
        l_150 = m_150;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_150));
    }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = term_c_48;
    return(t);
  }
  t = ArgOption_3(t, u_11, v_11, x_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, term_h_48));
  {
    t = printnl_0(t);
    {
      t = term_i_24;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_150 = NULL;
  q_150 = t;
  t = SSL_TicksToSeconds(not_null(q_150));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_150 = NULL,w_150 = NULL,x_150 = NULL;
  v_150 = t;
  u_150 :
  if(match_cons(v_150, sym__2))
    {
      w_150 = ATgetArgument(v_150, 0);
      x_150 = ATgetArgument(v_150, 1);
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_150), not_null(x_150));
            ;
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            t = SSL_addr(not_null(w_150), not_null(x_150));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm))
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_99(t);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL;
        e_151 = t;
        d_151 :
        if(((ATgetType(e_151) == AT_LIST) && !(ATisEmpty(e_151))))
          {
            f_151 = ATgetFirst((ATermList) e_151);
            g_151 = (ATerm) ATgetNext((ATermList) e_151);
            {
              ATerm j_151 = NULL;
              ATerm k_151 = NULL;
              t = not_null(g_151);
              {
                t = foldr_2(t, b_99, c_99);
                {
                  k_151 = t;
                  if(((j_151 != NULL) && (j_151 != k_151)))
                    _fail(k_151);
                  else
                    j_151 = k_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_151), not_null(j_151));
                t = c_99(t);
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
ATerm crush_2 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  ATerm r_151 = NULL;
  ATerm t_151 = NULL;
  r_151 = t;
  {
    ATerm u_151 = NULL;
    ATerm w_151 = NULL,x_151 = NULL,y_151 = NULL;
    t = not_null(r_151);
    {
      u_151 = t;
      {
        t = SSL_explode_term(not_null(u_151));
        {
          w_151 = t;
          q_151 :
          if(match_cons(w_151, sym__2))
            {
              x_151 = ATgetArgument(w_151, 0);
              y_151 = ATgetArgument(w_151, 1);
              if(((t_151 != NULL) && (t_151 != y_151)))
                _fail(y_151);
              else
                t_151 = y_151;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_151);
      t = foldr_2(t, z_97, a_98);
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
    ATerm b_12 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    t = crush_2(t, b_12, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_152 = NULL,f_152 = NULL,g_152 = NULL;
  e_152 = t;
  d_152 :
  if(match_cons(e_152, sym__2))
    {
      f_152 = ATgetArgument(e_152, 0);
      g_152 = ATgetArgument(e_152, 1);
      {
        ATerm v_48;
        v_48 = t;
        {
          ATerm w_48 = t;
          int x_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_152), not_null(g_152));
              ;
              LocalPopChoice(x_48);
            }
          else
            {
              t = w_48;
              t = SSL_gtr(not_null(f_152), not_null(g_152));
            }
        }
        t = v_48;
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
  ATerm m_152 = NULL;
  ATerm y_48 = t;
  int z_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_152 = NULL,o_152 = NULL,p_152 = NULL;
      n_152 = t;
      l_152 :
      if(match_cons(n_152, sym__2))
        {
          o_152 = ATgetArgument(n_152, 0);
          p_152 = ATgetArgument(n_152, 1);
          {
            if(((m_152 != NULL) && (m_152 != o_152)))
              _fail(o_152);
            else
              m_152 = o_152;
            if(((m_152 != NULL) && (m_152 != p_152)))
              _fail(p_152);
            else
              m_152 = p_152;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_48);
    }
  else
    {
      t = y_48;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm l_12 (ATerm t)
  {
    ATerm a_49;
    a_49 = t;
    {
      ATerm s_152 = NULL;
      ATerm t_152 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          t_152 = t;
          if(((s_152 != NULL) && (s_152 != t_152)))
            _fail(t_152);
          else
            s_152 = t_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_152), term_i_24);
        t = geq_0(t);
      }
    }
    t = a_49;
    t = i_106(t);
    return(t);
  }
  t = try_1(t, l_12);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm x_152 = NULL,z_152 = NULL;
    ATerm c_49;
    c_49 = t;
    {
      ATerm y_152 = NULL;
      t = run_time_0(t);
      {
        y_152 = t;
        if(((x_152 != NULL) && (x_152 != y_152)))
          _fail(y_152);
        else
          x_152 = y_152;
      }
    }
    t = c_49;
    {
      ATerm a_153 = NULL;
      t = term_f_49;
      {
        t = get_config_0(t);
        {
          a_153 = t;
          if(((z_152 != NULL) && (z_152 != a_153)))
            _fail(a_153);
          else
            z_152 = a_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_49), not_null(x_152)), term_g_49), not_null(z_152)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_12);
  {
    t = term_z_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_153 = NULL;
  h_153 = t;
  g_153 :
  if(match_cons(h_153, sym_Version_0))
    {
      ATerm j_153 = NULL,l_153 = NULL;
      ATerm i_49;
      i_49 = t;
      {
        ATerm k_153 = NULL;
        t = SSLgetAnnotations(not_null(h_153));
        {
          k_153 = t;
          if(((j_153 != NULL) && (j_153 != k_153)))
            _fail(k_153);
          else
            j_153 = k_153;
        }
      }
      t = i_49;
      {
        ATerm m_153 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_153));
        {
          m_153 = t;
          if(((l_153 != NULL) && (l_153 != m_153)))
            _fail(m_153);
          else
            l_153 = m_153;
        }
        t = not_null(l_153);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_104 (ATerm))
{
  ATerm d_13 (ATerm t)
  {
    ATerm j_49 = t;
    int k_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(k_49);
      }
    else
      {
        t = j_49;
        {
          ATerm l_49 = t;
          int m_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(m_49);
            }
          else
            {
              t = l_49;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_13);
  t = o_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_153 = NULL;
  r_153 = t;
  t = SSL_table_create(not_null(r_153));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_153 = NULL;
  v_153 = t;
  {
    ATerm r_49;
    r_49 = t;
    {
      t = term_s_49;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_49, term_x_49, not_null(v_153));
          t = table_put_0(t);
        }
      }
    }
    t = r_49;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_153 = NULL;
  z_153 = t;
  t = SSL_table_destroy(not_null(z_153));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_154 = NULL;
  d_154 = t;
  t = SSL_exit(not_null(d_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_154 = NULL,i_154 = NULL,j_154 = NULL;
  h_154 = t;
  g_154 :
  if(((ATgetType(h_154) == AT_LIST) && ATisEmpty(h_154)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_154) == AT_LIST) && !(ATisEmpty(h_154))))
        {
          i_154 = ATgetFirst((ATermList) h_154);
          j_154 = (ATerm) ATgetNext((ATermList) h_154);
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
  ATerm y_49;
  y_49 = t;
  {
    ATerm m_154 = NULL;
    ATerm p_154 = NULL;
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_50);
      }
    else
      {
        t = d_50;
        {
          ATerm n_154 = NULL;
          ATerm o_154 = NULL;
          o_154 = t;
          if(((n_154 != NULL) && (n_154 != o_154)))
            _fail(o_154);
          else
            n_154 = o_154;
          t = (ATerm) ATinsert(ATempty, not_null(n_154));
        }
      }
    {
      p_154 = t;
      if(((m_154 != NULL) && (m_154 != p_154)))
        _fail(p_154);
      else
        m_154 = p_154;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_44, not_null(m_154));
      t = printnl_0(t);
    }
  }
  t = y_49;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm s_154 (ATerm t)
  {
    ATerm f_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = f_50;
        t = Cons_2(t, r_92, s_154);
      }
    return(t);
  }
  t = s_154(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_154 = NULL,a_155 = NULL,b_155 = NULL;
  b_155 = t;
  y_154 :
  if(((ATgetType(b_155) == AT_LIST) && !(ATisEmpty(b_155))))
    {
      z_154 = ATgetFirst((ATermList) b_155);
      a_155 = (ATerm) ATgetNext((ATermList) b_155);
      {
        ATerm e_155 = NULL;
        t = not_null(a_155);
        {
          ATerm j_50;
          j_50 = t;
          {
            ATerm f_155 = NULL,h_155 = NULL,j_155 = NULL;
            ATerm k_50;
            k_50 = t;
            {
              ATerm g_155 = NULL;
              t = i_0(t);
              {
                g_155 = t;
                if(((f_155 != NULL) && (f_155 != g_155)))
                  _fail(g_155);
                else
                  f_155 = g_155;
              }
            }
            t = k_50;
            {
              ATerm i_155 = NULL;
              t = not_null(z_154);
              {
                t = g_0(t);
                {
                  i_155 = t;
                  if(((h_155 != NULL) && (h_155 != i_155)))
                    _fail(i_155);
                  else
                    h_155 = i_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_155)), not_null(h_155));
                {
                  j_155 = t;
                  if(((e_155 != NULL) && (e_155 != j_155)))
                    _fail(j_155);
                  else
                    e_155 = j_155;
                }
              }
            }
          }
          t = j_50;
          {
            ATerm e_13 (ATerm t)
            {
              t = not_null(e_155);
              return(t);
            }
            t = reverse_acc_2(t, g_0, e_13);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_155) == AT_LIST) && ATisEmpty(b_155)))
        {
          {
            t = term_h_38;
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
  ATerm f_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm u_155 = NULL,v_155 = NULL;
  u_155 = t;
  t_155 :
  if(match_cons(u_155, sym_Program_1))
    {
      v_155 = ATgetArgument(u_155, 0);
      {
        ATerm y_155 = NULL,a_156 = NULL;
        ATerm z_155 = NULL;
        t = SSLgetAnnotations(not_null(u_155));
        {
          z_155 = t;
          if(((y_155 != NULL) && (y_155 != z_155)))
            _fail(z_155);
          else
            y_155 = z_155;
        }
        {
          t = not_null(v_155);
          {
            ATerm c_156 = NULL;
            t = t_84(t);
            {
              a_156 = t;
              {
                ATerm d_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_156)), not_null(y_155));
                {
                  d_156 = t;
                  if(((c_156 != NULL) && (c_156 != d_156)))
                    _fail(d_156);
                  else
                    c_156 = d_156;
                }
                t = not_null(c_156);
              }
            }
          }
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
  ATerm m_156 = NULL;
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_156 = NULL;
      t = term_f_49;
      {
        t = get_config_0(t);
        {
          n_156 = t;
          if(((m_156 != NULL) && (m_156 != n_156)))
            _fail(n_156);
          else
            m_156 = n_156;
        }
      }
      ;
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
      {
        ATerm g_13 (ATerm t)
        {
          ATerm h_13 (ATerm t)
          {
            ATerm o_156 = NULL;
            o_156 = t;
            if(((m_156 != NULL) && (m_156 != o_156)))
              _fail(o_156);
            else
              m_156 = o_156;
            return(t);
          }
          t = Program_1(t, h_13);
          return(t);
        }
        t = option_defined_1(t, g_13);
      }
    }
  {
    ATerm i_13 (ATerm t)
    {
      ATerm j_13 (ATerm t)
      {
        t = not_null(m_156);
        return(t);
      }
      t = short_description_1(t, j_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_13);
    {
      t = term_n_50;
      {
        t = echo_0(t);
        {
          t = term_q_50;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_13 (ATerm t)
                {
                  ATerm p_156 = NULL;
                  ATerm q_156 = NULL;
                  q_156 = t;
                  if(((p_156 != NULL) && (p_156 != q_156)))
                    _fail(q_156);
                  else
                    p_156 = q_156;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_156)), term_r_50);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_13);
                {
                  ATerm l_13 (ATerm t)
                  {
                    ATerm r_156 = NULL;
                    ATerm s_156 = NULL;
                    ATerm m_13 (ATerm t)
                    {
                      t = not_null(m_156);
                      return(t);
                    }
                    t = long_description_1(t, m_13);
                    {
                      s_156 = t;
                      if(((r_156 != NULL) && (r_156 != s_156)))
                        _fail(s_156);
                      else
                        r_156 = s_156;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_156)), term_s_50);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_13);
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
  ATerm y_50;
  y_50 = t;
  {
    ATerm y_156 = NULL;
    ATerm z_156 = NULL;
    z_156 = t;
    if(((y_156 != NULL) && (y_156 != z_156)))
      _fail(z_156);
    else
      y_156 = z_156;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, not_null(y_156)));
      t = printnl_0(t);
    }
  }
  t = y_50;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_103 (ATerm))
{
  ATerm l_51;
  l_51 = t;
  {
    t = m_103(t);
    t = debug_0(t);
  }
  t = l_51;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm g_157 = NULL,h_157 = NULL;
  g_157 = t;
  f_157 :
  if(match_cons(g_157, sym_Undefined_1))
    {
      h_157 = ATgetArgument(g_157, 0);
      {
        ATerm k_157 = NULL,m_157 = NULL;
        ATerm l_157 = NULL;
        t = SSLgetAnnotations(not_null(g_157));
        {
          l_157 = t;
          if(((k_157 != NULL) && (k_157 != l_157)))
            _fail(l_157);
          else
            k_157 = l_157;
        }
        {
          t = not_null(h_157);
          {
            ATerm o_157 = NULL;
            t = u_84(t);
            {
              m_157 = t;
              {
                ATerm p_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_157)), not_null(k_157));
                {
                  p_157 = t;
                  if(((o_157 != NULL) && (o_157 != p_157)))
                    _fail(p_157);
                  else
                    o_157 = p_157;
                }
                t = not_null(o_157);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_93 (ATerm))
{
  ATerm u_157 (ATerm t)
  {
    ATerm m_51 = t;
    int n_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_93, _id);
        ;
        LocalPopChoice(n_51);
      }
    else
      {
        t = m_51;
        t = Cons_2(t, _id, u_157);
      }
    return(t);
  }
  t = u_157(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_107 (ATerm))
{
  t = fetch_1(t, l_107);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_157 = NULL;
  z_157 = t;
  y_157 :
  if(match_cons(z_157, sym_Help_0))
    {
      ATerm b_158 = NULL,d_158 = NULL;
      ATerm o_51;
      o_51 = t;
      {
        ATerm c_158 = NULL;
        t = SSLgetAnnotations(not_null(z_157));
        {
          c_158 = t;
          if(((b_158 != NULL) && (b_158 != c_158)))
            _fail(c_158);
          else
            b_158 = c_158;
        }
      }
      t = o_51;
      {
        ATerm e_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_158));
        {
          e_158 = t;
          if(((d_158 != NULL) && (d_158 != e_158)))
            _fail(e_158);
          else
            d_158 = e_158;
        }
        t = not_null(d_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_85(t);
      ;
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_158 = NULL,l_158 = NULL,m_158 = NULL;
  k_158 = t;
  j_158 :
  if(match_cons(k_158, sym__2))
    {
      l_158 = ATgetArgument(k_158, 0);
      m_158 = ATgetArgument(k_158, 1);
      t = SSL_table_get(not_null(l_158), not_null(m_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_158 = NULL,u_158 = NULL,v_158 = NULL,w_158 = NULL;
  t_158 = t;
  s_158 :
  if(match_cons(t_158, sym__3))
    {
      u_158 = ATgetArgument(t_158, 0);
      v_158 = ATgetArgument(t_158, 1);
      w_158 = ATgetArgument(t_158, 2);
      {
        ATerm r_51;
        r_51 = t;
        {
          ATerm a_159 = NULL;
          ATerm b_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_158), not_null(v_158));
          {
            ATerm s_51 = t;
            int t_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_51);
              }
            else
              {
                t = s_51;
                t = (ATerm) ATempty;
              }
            {
              b_159 = t;
              if(((a_159 != NULL) && (a_159 != b_159)))
                _fail(b_159);
              else
                a_159 = b_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_158), not_null(v_158), (ATerm) ATinsert(CheckATermList(not_null(a_159)), not_null(w_158)));
            t = table_put_0(t);
          }
        }
        t = r_51;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_108 (ATerm))
{
  ATerm f_159 = NULL;
  ATerm g_159 = NULL;
  t = term_h_38;
  {
    t = q_108(t);
    {
      g_159 = t;
      if(((f_159 != NULL) && (f_159 != g_159)))
        _fail(g_159);
      else
        f_159 = g_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, not_null(f_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_159 = NULL,p_159 = NULL,q_159 = NULL;
  o_159 = t;
  l_159 :
  if(match_string(o_159, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_159) == AT_LIST) && !(ATisEmpty(o_159))))
        {
          p_159 = ATgetFirst((ATermList) o_159);
          q_159 = (ATerm) ATgetNext((ATermList) o_159);
          {
            ATerm t_159 = NULL;
            ATerm u_51;
            u_51 = t;
            {
              t = not_null(p_159);
              t = a_0(t);
            }
            t = u_51;
            {
              ATerm u_159 = NULL;
              t = term_h_38;
              {
                t = c_0(t);
                {
                  u_159 = t;
                  if(((t_159 != NULL) && (t_159 != u_159)))
                    _fail(u_159);
                  else
                    t_159 = u_159;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_159)), not_null(t_159));
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
  ATerm n_13 (ATerm t)
  {
    ATerm z_159 = NULL;
    z_159 = t;
    y_159 :
    if(!(match_string(z_159, "--help")))
      {
        if(!(match_string(z_159, "-h")))
          {
            if(!(match_string(z_159, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_13 (ATerm t)
  {
    t = term_e_52;
    {
      t = set_config_0(t);
      t = term_f_52;
    }
    return(t);
  }
  ATerm p_13 (ATerm t)
  {
    t = term_g_52;
    return(t);
  }
  t = Option_3(t, n_13, o_13, p_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_160 = NULL,d_160 = NULL,e_160 = NULL;
  c_160 = t;
  b_160 :
  if(((ATgetType(c_160) == AT_LIST) && !(ATisEmpty(c_160))))
    {
      d_160 = ATgetFirst((ATermList) c_160);
      e_160 = (ATerm) ATgetNext((ATermList) c_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm o_160 = NULL,p_160 = NULL,q_160 = NULL;
  o_160 = t;
  n_160 :
  if(((ATgetType(o_160) == AT_LIST) && !(ATisEmpty(o_160))))
    {
      p_160 = ATgetFirst((ATermList) o_160);
      q_160 = (ATerm) ATgetNext((ATermList) o_160);
      {
        ATerm u_160 = NULL,w_160 = NULL;
        ATerm v_160 = NULL;
        t = SSLgetAnnotations(not_null(o_160));
        {
          v_160 = t;
          if(((u_160 != NULL) && (u_160 != v_160)))
            _fail(v_160);
          else
            u_160 = v_160;
        }
        {
          t = not_null(p_160);
          {
            ATerm y_160 = NULL;
            t = n_74(t);
            {
              w_160 = t;
              {
                t = not_null(q_160);
                {
                  ATerm a_161 = NULL;
                  t = o_74(t);
                  {
                    y_160 = t;
                    {
                      ATerm b_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_160)), not_null(w_160)), not_null(u_160));
                      {
                        b_161 = t;
                        if(((a_161 != NULL) && (a_161 != b_161)))
                          _fail(b_161);
                        else
                          a_161 = b_161;
                      }
                      t = not_null(a_161);
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
  ATerm l_161 = NULL;
  l_161 = t;
  k_161 :
  if(((ATgetType(l_161) == AT_LIST) && ATisEmpty(l_161)))
    {
      {
        ATerm n_161 = NULL,p_161 = NULL;
        ATerm i_52;
        i_52 = t;
        {
          ATerm o_161 = NULL;
          t = SSLgetAnnotations(not_null(l_161));
          {
            o_161 = t;
            if(((n_161 != NULL) && (n_161 != o_161)))
              _fail(o_161);
            else
              n_161 = o_161;
          }
        }
        t = i_52;
        {
          ATerm q_161 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_161));
          {
            q_161 = t;
            if(((p_161 != NULL) && (p_161 != q_161)))
              _fail(q_161);
            else
              p_161 = q_161;
          }
          t = not_null(p_161);
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
  ATerm w_161 = NULL,x_161 = NULL,y_161 = NULL;
  w_161 = t;
  v_161 :
  if(match_cons(w_161, sym__2))
    {
      x_161 = ATgetArgument(w_161, 0);
      y_161 = ATgetArgument(w_161, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_44, not_null(x_161), not_null(y_161));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_108 (ATerm))
{
  ATerm l_52;
  l_52 = t;
  {
    ATerm q_13 (ATerm t)
    {
      t = term_m_52;
      t = o_108(t);
      return(t);
    }
    t = try_1(t, q_13);
  }
  t = l_52;
  {
    ATerm x_13 (ATerm t)
    {
      ATerm g_162 = NULL;
      ATerm n_52;
      n_52 = t;
      {
        ATerm e_162 = NULL;
        ATerm f_162 = NULL;
        f_162 = t;
        if(((e_162 != NULL) && (e_162 != f_162)))
          _fail(f_162);
        else
          e_162 = f_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_49, not_null(e_162));
          t = set_config_0(t);
        }
      }
      t = n_52;
      {
        ATerm h_162 = NULL;
        h_162 = t;
        if(((g_162 != NULL) && (g_162 != h_162)))
          _fail(h_162);
        else
          g_162 = h_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_162));
      }
      return(t);
    }
    ATerm y_13 (ATerm t)
    {
      ATerm o_52 = t;
      int p_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_52 = t;
          int r_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_52);
            }
          else
            {
              t = q_52;
              {
                t = o_108(t);
                t = Cons_2(t, _id, y_13);
              }
            }
          ;
          LocalPopChoice(p_52);
        }
      else
        {
          t = o_52;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_13, y_13);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_162 = NULL,o_162 = NULL,p_162 = NULL;
  ATerm s_52;
  s_52 = t;
  {
    ATerm q_162 = NULL,r_162 = NULL,s_162 = NULL,t_162 = NULL;
    q_162 = t;
    m_162 :
    if(match_cons(q_162, sym__3))
      {
        r_162 = ATgetArgument(q_162, 0);
        s_162 = ATgetArgument(q_162, 1);
        t_162 = ATgetArgument(q_162, 2);
        {
          if(((n_162 != NULL) && (n_162 != r_162)))
            _fail(r_162);
          else
            n_162 = r_162;
          {
            if(((o_162 != NULL) && (o_162 != s_162)))
              _fail(s_162);
            else
              o_162 = s_162;
            {
              if(((p_162 != NULL) && (p_162 != t_162)))
                _fail(t_162);
              else
                p_162 = t_162;
              t = SSL_table_put(not_null(n_162), not_null(o_162), not_null(p_162));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_52;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_108 (ATerm))
{
  ATerm w_162 = NULL;
  ATerm t_52;
  t_52 = t;
  {
    t = term_u_52;
    t = table_put_0(t);
  }
  t = t_52;
  {
    ATerm z_13 (ATerm t)
    {
      ATerm w_52 = t;
      int y_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_108(t);
          ;
          LocalPopChoice(y_52);
        }
      else
        {
          t = w_52;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_13);
    {
      ATerm a_14 (ATerm t)
      {
        ATerm z_52 = t;
        int b_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_53;
            c_53 = t;
            {
              ATerm d_53 = t;
              int e_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_51;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_53);
                }
              else
                {
                  t = d_53;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_53;
            {
              t = system_usage_0(t);
              {
                t = term_z_25;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(b_53);
          }
        else
          {
            t = z_52;
            {
              ATerm b_14 (ATerm t)
              {
                ATerm c_14 (ATerm t)
                {
                  ATerm x_162 = NULL;
                  x_162 = t;
                  if(((w_162 != NULL) && (w_162 != x_162)))
                    _fail(x_162);
                  else
                    w_162 = x_162;
                  return(t);
                }
                t = Undefined_1(t, c_14);
                return(t);
              }
              t = option_defined_1(t, b_14);
              {
                ATerm d_14 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_162)), term_g_53);
                  return(t);
                }
                t = say_1(t, d_14);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_24;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, a_14);
      {
        ATerm h_53;
        h_53 = t;
        {
          t = term_o_50;
          t = table_destroy_0(t);
        }
        t = h_53;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm))
{
  t = parse_options_1(t, u_104);
  {
    t = store_options_0(t);
    {
      t = w_104(t);
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_104);
            ;
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_104(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = k_53;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm))
{
  ATerm g_14 (ATerm t)
  {
    ATerm m_53 = t;
    int n_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_105(t);
        ;
        LocalPopChoice(n_53);
      }
    else
      {
        t = m_53;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_14 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_14, n_105, o_105, k_14);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  ATerm r_14 (ATerm t)
  {
    ATerm s_14 (ATerm t)
    {
      ATerm o_53;
      o_53 = t;
      {
        ATerm a_163 = NULL;
        ATerm b_163 = NULL;
        t = term_f_49;
        {
          t = get_config_0(t);
          {
            b_163 = t;
            if(((a_163 != NULL) && (a_163 != b_163)))
              _fail(b_163);
            else
              a_163 = b_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, not_null(a_163)));
          t = printnl_0(t);
        }
      }
      t = o_53;
      return(t);
    }
    t = if_verbose2_1(t, s_14);
    return(t);
  }
  t = iowrap_4(t, f_105, g_105, h_105, r_14);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_105 (ATerm), ATerm e_105 (ATerm))
{
  t = iowrap_3(t, d_105, e_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_105 (ATerm))
{
  ATerm t_14 (ATerm t)
  {
    t = _2(t, _id, a_105);
    return(t);
  }
  t = iowrap_2(t, t_14, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
