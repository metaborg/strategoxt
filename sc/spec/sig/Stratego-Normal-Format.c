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
ATerm term_v_14;
ATerm term_h_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_j_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_s_6;
ATerm term_p_4;
void init_constant_terms (void)
{
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_z_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_z_8);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_z_8);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, (ATerm) ATempty);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm Op_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm o_58 (ATerm));
ATerm Str_1 (ATerm, ATerm m_56 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm l_56 (ATerm));
ATerm Int_1 (ATerm, ATerm k_56 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm Where_1 (ATerm, ATerm t_54 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm Build_1 (ATerm, ATerm o_54 (ATerm));
ATerm Match_1 (ATerm, ATerm n_54 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_55 (ATerm));
ATerm All_1 (ATerm, ATerm a_55 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm y_54 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm));
ATerm Rec_2 (ATerm, ATerm t_55 (ATerm), ATerm u_55 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_55 (ATerm));
ATerm Call_2 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm GChoice_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm LChoice_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm Seq_2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm Test_1 (ATerm, ATerm c_55 (ATerm));
ATerm Not_1 (ATerm, ATerm d_55 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm Mod_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_73 (ATerm));
ATerm Strategies_1 (ATerm, ATerm b_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_57 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_85 (ATerm));
ATerm debug_1 (ATerm, ATerm w_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm crush_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_88 (ATerm));
ATerm map_1 (ATerm, ATerm y_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_88 (ATerm));
ATerm Program_1 (ATerm, ATerm n_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_54 (ATerm), ATerm i_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_88 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_85 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  c_8 :
  if(match_cons(g_8, sym_Let_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      {
        ATerm q_10 = NULL,s_10 = NULL;
        ATerm r_10 = NULL;
        t = SSLgetAnnotations(not_null(g_8));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        {
          t = not_null(h_8);
          {
            ATerm e_11 = NULL;
            t = v_55(t);
            {
              s_10 = t;
              {
                t = not_null(i_8);
                {
                  ATerm j_11 = NULL;
                  t = w_55(t);
                  {
                    e_11 = t;
                    {
                      ATerm k_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_10), not_null(e_11)), not_null(q_10));
                      {
                        k_11 = t;
                        if(((j_11 != NULL) && (j_11 != k_11)))
                          _fail(k_11);
                        else
                          j_11 = k_11;
                      }
                      t = not_null(j_11);
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
ATerm Op_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Op_2))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm g_12 = NULL;
            t = n_56(t);
            {
              e_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm i_12 = NULL;
                  t = o_56(t);
                  {
                    g_12 = t;
                    {
                      ATerm j_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_12), not_null(g_12)), not_null(c_12));
                      {
                        j_12 = t;
                        if(((i_12 != NULL) && (i_12 != j_12)))
                          _fail(j_12);
                        else
                          i_12 = j_12;
                      }
                      t = not_null(i_12);
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
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Var_1))
    {
      z_12 = ATgetArgument(y_12, 0);
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,e_13 = NULL;
            ATerm d_13 = NULL;
            t = SSLgetAnnotations(not_null(y_12));
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
            {
              t = not_null(z_12);
              {
                ATerm g_13 = NULL;
                t = n_0(t);
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
            ;
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm l_13 = NULL;
              t = SSLgetAnnotations(not_null(y_12));
              {
                l_13 = t;
                if(((k_13 != NULL) && (k_13 != l_13)))
                  _fail(l_13);
                else
                  k_13 = l_13;
              }
              {
                t = not_null(z_12);
                {
                  ATerm o_13 = NULL;
                  t = n_0(t);
                  {
                    m_13 = t;
                    {
                      ATerm p_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_13)), not_null(k_13));
                      {
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                      }
                      t = not_null(o_13);
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
ATerm As_2 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_As_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm o_14 = NULL;
            t = m_58(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = n_58(t);
                  {
                    o_14 = t;
                    {
                      ATerm r_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(m_14), not_null(o_14)), not_null(k_14));
                      {
                        r_14 = t;
                        if(((q_14 != NULL) && (q_14 != r_14)))
                          _fail(r_14);
                        else
                          q_14 = r_14;
                      }
                      t = not_null(q_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_BuildDefault_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      {
        ATerm g_15 = NULL,i_15 = NULL;
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
        {
          t = not_null(d_15);
          {
            ATerm k_15 = NULL;
            t = o_58(t);
            {
              i_15 = t;
              {
                ATerm l_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(i_15)), not_null(g_15));
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
                t = not_null(k_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Str_1))
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
            t = m_56(t);
            {
              b_16 = t;
              {
                ATerm e_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(b_16)), not_null(z_15));
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
ATerm is_real_0 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  t = SSL_is_real(not_null(k_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Real_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm w_16 = NULL,y_16 = NULL;
        ATerm x_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        {
          t = not_null(t_16);
          {
            ATerm a_17 = NULL;
            t = l_56(t);
            {
              y_16 = t;
              {
                ATerm b_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_16)), not_null(w_16));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_Int_1))
    {
      m_17 = ATgetArgument(l_17, 0);
      {
        ATerm p_17 = NULL,r_17 = NULL;
        ATerm q_17 = NULL;
        t = SSLgetAnnotations(not_null(l_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        {
          t = not_null(m_17);
          {
            ATerm t_17 = NULL;
            t = k_56(t);
            {
              r_17 = t;
              {
                ATerm u_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(r_17)), not_null(p_17));
                {
                  u_17 = t;
                  if(((t_17 != NULL) && (t_17 != u_17)))
                    _fail(u_17);
                  else
                    t_17 = u_17;
                }
                t = not_null(t_17);
              }
            }
          }
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
  ATerm d_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Wld_0))
    {
      ATerm f_18 = NULL,h_18 = NULL;
      ATerm y_3;
      y_3 = t;
      {
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = y_3;
      {
        ATerm i_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        t = not_null(h_18);
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
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            {
              ATerm d_4 = t;
              int e_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(e_4);
                }
              else
                {
                  t = d_4;
                  {
                    ATerm f_4 = t;
                    int g_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(g_4);
                      }
                    else
                      {
                        t = f_4;
                        {
                          ATerm h_4 = t;
                          int i_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(i_4);
                            }
                          else
                            {
                              t = h_4;
                              {
                                ATerm j_4 = t;
                                int k_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(k_4);
                                  }
                                else
                                  {
                                    t = j_4;
                                    {
                                      ATerm l_4 = t;
                                      int m_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          ;
                                          LocalPopChoice(m_4);
                                        }
                                      else
                                        {
                                          t = l_4;
                                          {
                                            ATerm n_4 = t;
                                            int o_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                ;
                                                LocalPopChoice(o_4);
                                              }
                                            else
                                              {
                                                t = n_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_p_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, e_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Prim_2))
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
            t = j_54(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = k_54(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_19), not_null(d_19)), not_null(z_18));
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
ATerm Where_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Where_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm z_19 = NULL;
            t = t_54(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(x_19)), not_null(v_19));
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                t = not_null(z_19);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Scope_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm v_20 = NULL;
            t = r_54(t);
            {
              t_20 = t;
              {
                t = not_null(n_20);
                {
                  ATerm x_20 = NULL;
                  t = s_54(t);
                  {
                    v_20 = t;
                    {
                      ATerm y_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_20), not_null(v_20)), not_null(r_20));
                      {
                        y_20 = t;
                        if(((x_20 != NULL) && (x_20 != y_20)))
                          _fail(y_20);
                        else
                          x_20 = y_20;
                      }
                      t = not_null(x_20);
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
ATerm Build_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Build_1))
    {
      k_21 = ATgetArgument(j_21, 0);
      {
        ATerm n_21 = NULL,p_21 = NULL;
        ATerm o_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
        }
        {
          t = not_null(k_21);
          {
            ATerm r_21 = NULL;
            t = o_54(t);
            {
              p_21 = t;
              {
                ATerm s_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_21)), not_null(n_21));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Match_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm g_22 = NULL,i_22 = NULL;
        ATerm h_22 = NULL;
        t = SSLgetAnnotations(not_null(c_22));
        {
          h_22 = t;
          if(((g_22 != NULL) && (g_22 != h_22)))
            _fail(h_22);
          else
            g_22 = h_22;
        }
        {
          t = not_null(d_22);
          {
            ATerm k_22 = NULL;
            t = n_54(t);
            {
              i_22 = t;
              {
                ATerm l_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(i_22)), not_null(g_22));
                {
                  l_22 = t;
                  if(((k_22 != NULL) && (k_22 != l_22)))
                    _fail(l_22);
                  else
                    k_22 = l_22;
                }
                t = not_null(k_22);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_Thread_1))
    {
      w_22 = ATgetArgument(v_22, 0);
      {
        ATerm z_22 = NULL,b_23 = NULL;
        ATerm a_23 = NULL;
        t = SSLgetAnnotations(not_null(v_22));
        {
          a_23 = t;
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
        }
        {
          t = not_null(w_22);
          {
            ATerm d_23 = NULL;
            t = b_55(t);
            {
              b_23 = t;
              {
                ATerm e_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(b_23)), not_null(z_22));
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
                t = not_null(d_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_All_1))
    {
      p_23 = ATgetArgument(o_23, 0);
      {
        ATerm s_23 = NULL,u_23 = NULL;
        ATerm t_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm w_23 = NULL;
            t = a_55(t);
            {
              u_23 = t;
              {
                ATerm x_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(u_23)), not_null(s_23));
                {
                  x_23 = t;
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                }
                t = not_null(w_23);
              }
            }
          }
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
  ATerm q_24 = NULL,r_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym_Some_1))
    {
      r_24 = ATgetArgument(q_24, 0);
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL,w_24 = NULL;
            ATerm v_24 = NULL;
            t = SSLgetAnnotations(not_null(q_24));
            {
              v_24 = t;
              if(((u_24 != NULL) && (u_24 != v_24)))
                _fail(v_24);
              else
                u_24 = v_24;
            }
            {
              t = not_null(r_24);
              {
                ATerm y_24 = NULL;
                t = m_0(t);
                {
                  w_24 = t;
                  {
                    ATerm z_24 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(w_24)), not_null(u_24));
                    {
                      z_24 = t;
                      if(((y_24 != NULL) && (y_24 != z_24)))
                        _fail(z_24);
                      else
                        y_24 = z_24;
                    }
                    t = not_null(y_24);
                  }
                }
              }
            }
            ;
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm f_25 = NULL,h_25 = NULL;
              ATerm g_25 = NULL;
              t = SSLgetAnnotations(not_null(q_24));
              {
                g_25 = t;
                if(((f_25 != NULL) && (f_25 != g_25)))
                  _fail(g_25);
                else
                  f_25 = g_25;
              }
              {
                t = not_null(r_24);
                {
                  ATerm j_25 = NULL;
                  t = m_0(t);
                  {
                    h_25 = t;
                    {
                      ATerm k_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(h_25)), not_null(f_25));
                      {
                        k_25 = t;
                        if(((j_25 != NULL) && (j_25 != k_25)))
                          _fail(k_25);
                        else
                          j_25 = k_25;
                      }
                      t = not_null(j_25);
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
ATerm One_1 (ATerm t, ATerm y_54 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_One_1))
    {
      z_25 = ATgetArgument(y_25, 0);
      {
        ATerm c_26 = NULL,e_26 = NULL;
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(y_25));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
        {
          t = not_null(z_25);
          {
            ATerm g_26 = NULL;
            t = y_54(t);
            {
              e_26 = t;
              {
                ATerm h_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(e_26)), not_null(c_26));
                {
                  h_26 = t;
                  if(((g_26 != NULL) && (g_26 != h_26)))
                    _fail(h_26);
                  else
                    g_26 = h_26;
                }
                t = not_null(g_26);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Cong_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm y_26 = NULL,a_27 = NULL;
        ATerm z_26 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          z_26 = t;
          if(((y_26 != NULL) && (y_26 != z_26)))
            _fail(z_26);
          else
            y_26 = z_26;
        }
        {
          t = not_null(t_26);
          {
            ATerm c_27 = NULL;
            t = w_54(t);
            {
              a_27 = t;
              {
                t = not_null(u_26);
                {
                  ATerm e_27 = NULL;
                  t = x_54(t);
                  {
                    c_27 = t;
                    {
                      ATerm f_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(a_27), not_null(c_27)), not_null(y_26));
                      {
                        f_27 = t;
                        if(((e_27 != NULL) && (e_27 != f_27)))
                          _fail(f_27);
                        else
                          e_27 = f_27;
                      }
                      t = not_null(e_27);
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
ATerm is_int_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_is_int(not_null(m_27));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Path_2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(w_27);
          {
            ATerm f_28 = NULL;
            t = u_54(t);
            {
              d_28 = t;
              {
                t = not_null(x_27);
                {
                  ATerm h_28 = NULL;
                  t = v_54(t);
                  {
                    f_28 = t;
                    {
                      ATerm i_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(d_28), not_null(f_28)), not_null(b_28));
                      {
                        i_28 = t;
                        if(((h_28 != NULL) && (h_28 != i_28)))
                          _fail(i_28);
                        else
                          h_28 = i_28;
                      }
                      t = not_null(h_28);
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
ATerm Rec_2 (ATerm t, ATerm t_55 (ATerm), ATerm u_55 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Rec_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        ATerm a_29 = NULL,c_29 = NULL;
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        {
          t = not_null(v_28);
          {
            ATerm e_29 = NULL;
            t = t_55(t);
            {
              c_29 = t;
              {
                t = not_null(w_28);
                {
                  ATerm g_29 = NULL;
                  t = u_55(t);
                  {
                    e_29 = t;
                    {
                      ATerm h_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(c_29), not_null(e_29)), not_null(a_29));
                      {
                        h_29 = t;
                        if(((g_29 != NULL) && (g_29 != h_29)))
                          _fail(h_29);
                        else
                          g_29 = h_29;
                      }
                      t = not_null(g_29);
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
ATerm SVar_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm t_29 = NULL,u_29 = NULL;
  t_29 = t;
  r_29 :
  if(match_cons(t_29, sym_SVar_1))
    {
      u_29 = ATgetArgument(t_29, 0);
      {
        ATerm x_29 = NULL,z_29 = NULL;
        ATerm y_29 = NULL;
        t = SSLgetAnnotations(not_null(t_29));
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
        {
          t = not_null(u_29);
          {
            ATerm b_30 = NULL;
            t = s_55(t);
            {
              z_29 = t;
              {
                ATerm c_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(z_29)), not_null(x_29));
                {
                  c_30 = t;
                  if(((b_30 != NULL) && (b_30 != c_30)))
                    _fail(c_30);
                  else
                    b_30 = c_30;
                }
                t = not_null(b_30);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm n_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Call_2))
    {
      q_30 = ATgetArgument(n_30, 0);
      r_30 = ATgetArgument(n_30, 1);
      {
        ATerm v_30 = NULL,x_30 = NULL;
        ATerm w_30 = NULL;
        t = SSLgetAnnotations(not_null(n_30));
        {
          w_30 = t;
          if(((v_30 != NULL) && (v_30 != w_30)))
            _fail(w_30);
          else
            v_30 = w_30;
        }
        {
          t = not_null(q_30);
          {
            ATerm z_30 = NULL;
            t = h_56(t);
            {
              x_30 = t;
              {
                t = not_null(r_30);
                {
                  ATerm b_31 = NULL;
                  t = i_56(t);
                  {
                    z_30 = t;
                    {
                      ATerm c_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(x_30), not_null(z_30)), not_null(v_30));
                      {
                        c_31 = t;
                        if(((b_31 != NULL) && (b_31 != c_31)))
                          _fail(c_31);
                        else
                          b_31 = c_31;
                      }
                      t = not_null(b_31);
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
ATerm LGChoice_2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym_LGChoice_2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      {
        ATerm u_31 = NULL,w_31 = NULL;
        ATerm v_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm y_31 = NULL;
            t = p_55(t);
            {
              w_31 = t;
              {
                t = not_null(q_31);
                {
                  ATerm a_32 = NULL;
                  t = q_55(t);
                  {
                    y_31 = t;
                    {
                      ATerm b_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(w_31), not_null(y_31)), not_null(u_31));
                      {
                        b_32 = t;
                        if(((a_32 != NULL) && (a_32 != b_32)))
                          _fail(b_32);
                        else
                          a_32 = b_32;
                      }
                      t = not_null(a_32);
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
ATerm GChoice_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_GChoice_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm t_32 = NULL,v_32 = NULL;
        ATerm u_32 = NULL;
        t = SSLgetAnnotations(not_null(n_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        {
          t = not_null(o_32);
          {
            ATerm x_32 = NULL;
            t = n_55(t);
            {
              v_32 = t;
              {
                t = not_null(p_32);
                {
                  ATerm z_32 = NULL;
                  t = o_55(t);
                  {
                    x_32 = t;
                    {
                      ATerm a_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(v_32), not_null(x_32)), not_null(t_32));
                      {
                        a_33 = t;
                        if(((z_32 != NULL) && (z_32 != a_33)))
                          _fail(a_33);
                        else
                          z_32 = a_33;
                      }
                      t = not_null(z_32);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym_GuardedLChoice_3))
    {
      o_33 = ATgetArgument(n_33, 0);
      p_33 = ATgetArgument(n_33, 1);
      q_33 = ATgetArgument(n_33, 2);
      {
        ATerm v_33 = NULL,x_33 = NULL;
        ATerm w_33 = NULL;
        t = SSLgetAnnotations(not_null(n_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        {
          t = not_null(o_33);
          {
            ATerm z_33 = NULL;
            t = k_55(t);
            {
              x_33 = t;
              {
                t = not_null(p_33);
                {
                  ATerm b_34 = NULL;
                  t = l_55(t);
                  {
                    z_33 = t;
                    {
                      t = not_null(q_33);
                      {
                        ATerm d_34 = NULL;
                        t = m_55(t);
                        {
                          b_34 = t;
                          {
                            ATerm e_34 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(x_33), not_null(z_33), not_null(b_34)), not_null(v_33));
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
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym_LChoice_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      {
        ATerm x_34 = NULL,z_34 = NULL;
        ATerm y_34 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
        {
          t = not_null(s_34);
          {
            ATerm b_35 = NULL;
            t = i_55(t);
            {
              z_34 = t;
              {
                t = not_null(t_34);
                {
                  ATerm d_35 = NULL;
                  t = j_55(t);
                  {
                    b_35 = t;
                    {
                      ATerm e_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(z_34), not_null(b_35)), not_null(x_34));
                      {
                        e_35 = t;
                        if(((d_35 != NULL) && (d_35 != e_35)))
                          _fail(e_35);
                        else
                          d_35 = e_35;
                      }
                      t = not_null(d_35);
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
ATerm Choice_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Choice_2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        ATerm w_35 = NULL,y_35 = NULL;
        ATerm x_35 = NULL;
        t = SSLgetAnnotations(not_null(q_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
        {
          t = not_null(r_35);
          {
            ATerm a_36 = NULL;
            t = g_55(t);
            {
              y_35 = t;
              {
                t = not_null(s_35);
                {
                  ATerm c_36 = NULL;
                  t = h_55(t);
                  {
                    a_36 = t;
                    {
                      ATerm d_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(y_35), not_null(a_36)), not_null(w_35));
                      {
                        d_36 = t;
                        if(((c_36 != NULL) && (c_36 != d_36)))
                          _fail(d_36);
                        else
                          c_36 = d_36;
                      }
                      t = not_null(c_36);
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
ATerm Seq_2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_Seq_2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm v_36 = NULL,x_36 = NULL;
        ATerm w_36 = NULL;
        t = SSLgetAnnotations(not_null(p_36));
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
        {
          t = not_null(q_36);
          {
            ATerm z_36 = NULL;
            t = e_55(t);
            {
              x_36 = t;
              {
                t = not_null(r_36);
                {
                  ATerm b_37 = NULL;
                  t = f_55(t);
                  {
                    z_36 = t;
                    {
                      ATerm c_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(x_36), not_null(z_36)), not_null(v_36));
                      {
                        c_37 = t;
                        if(((b_37 != NULL) && (b_37 != c_37)))
                          _fail(c_37);
                        else
                          b_37 = c_37;
                      }
                      t = not_null(b_37);
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
ATerm Test_1 (ATerm t, ATerm c_55 (ATerm))
{
  ATerm q_37 = NULL,r_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym_Test_1))
    {
      r_37 = ATgetArgument(q_37, 0);
      {
        ATerm u_37 = NULL,w_37 = NULL;
        ATerm v_37 = NULL;
        t = SSLgetAnnotations(not_null(q_37));
        {
          v_37 = t;
          if(((u_37 != NULL) && (u_37 != v_37)))
            _fail(v_37);
          else
            u_37 = v_37;
        }
        {
          t = not_null(r_37);
          {
            ATerm y_37 = NULL;
            t = c_55(t);
            {
              w_37 = t;
              {
                ATerm z_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(w_37)), not_null(u_37));
                {
                  z_37 = t;
                  if(((y_37 != NULL) && (y_37 != z_37)))
                    _fail(z_37);
                  else
                    y_37 = z_37;
                }
                t = not_null(y_37);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Not_1))
    {
      k_38 = ATgetArgument(j_38, 0);
      {
        ATerm n_38 = NULL,p_38 = NULL;
        ATerm o_38 = NULL;
        t = SSLgetAnnotations(not_null(j_38));
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
        {
          t = not_null(k_38);
          {
            ATerm r_38 = NULL;
            t = d_55(t);
            {
              p_38 = t;
              {
                ATerm s_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(p_38)), not_null(n_38));
                {
                  s_38 = t;
                  if(((r_38 != NULL) && (r_38 != s_38)))
                    _fail(s_38);
                  else
                    r_38 = s_38;
                }
                t = not_null(r_38);
              }
            }
          }
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
  ATerm f_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_Fail_0))
    {
      ATerm h_39 = NULL,j_39 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(f_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
      }
      t = s_4;
      {
        ATerm k_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(h_39));
        {
          k_39 = t;
          if(((j_39 != NULL) && (j_39 != k_39)))
            _fail(k_39);
          else
            j_39 = k_39;
        }
        t = not_null(j_39);
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
  ATerm s_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Id_0))
    {
      ATerm u_39 = NULL,w_39 = NULL;
      ATerm t_4;
      t_4 = t;
      {
        ATerm v_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
      }
      t = t_4;
      {
        ATerm x_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(u_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        t = not_null(w_39);
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
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            {
              ATerm y_4 = t;
              int z_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(z_4);
                }
              else
                {
                  t = y_4;
                  {
                    ATerm a_5 = t;
                    int b_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(b_5);
                      }
                    else
                      {
                        t = a_5;
                        {
                          ATerm c_5 = t;
                          int d_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(d_5);
                            }
                          else
                            {
                              t = c_5;
                              {
                                ATerm e_5 = t;
                                int f_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(f_5);
                                  }
                                else
                                  {
                                    t = e_5;
                                    {
                                      ATerm g_5 = t;
                                      int h_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(h_5);
                                        }
                                      else
                                        {
                                          t = g_5;
                                          {
                                            ATerm i_5 = t;
                                            int j_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(j_5);
                                              }
                                            else
                                              {
                                                t = i_5;
                                                {
                                                  ATerm k_5 = t;
                                                  int l_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(l_5);
                                                    }
                                                  else
                                                    {
                                                      t = k_5;
                                                      {
                                                        ATerm m_5 = t;
                                                        int n_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(n_5);
                                                          }
                                                        else
                                                          {
                                                            t = m_5;
                                                            {
                                                              ATerm o_5 = t;
                                                              int p_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm q_5 = t;
                                                                      int r_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          ;
                                                                          LocalPopChoice(r_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, p_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, f_0, o_0);
                                                                  ;
                                                                  LocalPopChoice(p_5);
                                                                }
                                                              else
                                                                {
                                                                  t = o_5;
                                                                  {
                                                                    ATerm s_5 = t;
                                                                    int t_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(t_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_5;
                                                                        {
                                                                          ATerm u_5 = t;
                                                                          int v_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(v_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_5;
                                                                              {
                                                                                ATerm w_5 = t;
                                                                                int x_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
                                                                                    ;
                                                                                    LocalPopChoice(x_5);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_5;
                                                                                    {
                                                                                      ATerm y_5 = t;
                                                                                      int z_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(z_5);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_5;
                                                                                          {
                                                                                            ATerm a_6 = t;
                                                                                            int b_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(b_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_6;
                                                                                                {
                                                                                                  ATerm c_6 = t;
                                                                                                  int d_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_6;
                                                                                                      {
                                                                                                        ATerm e_6 = t;
                                                                                                        int f_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_6;
                                                                                                            {
                                                                                                              ATerm g_6 = t;
                                                                                                              int h_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(h_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_6;
                                                                                                                  {
                                                                                                                    ATerm i_6 = t;
                                                                                                                    int j_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(j_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_6;
                                                                                                                        {
                                                                                                                          ATerm k_6 = t;
                                                                                                                          int l_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_6;
                                                                                                                              {
                                                                                                                                ATerm m_6 = t;
                                                                                                                                int n_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(n_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = m_6;
                                                                                                                                    {
                                                                                                                                      ATerm o_6 = t;
                                                                                                                                      int p_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(p_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = o_6;
                                                                                                                                          {
                                                                                                                                            ATerm q_6 = t;
                                                                                                                                            int r_6 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, u_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, t_0, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(r_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = q_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_s_6;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, v_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_VarDec_2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm r_40 = NULL,t_40 = NULL;
        ATerm s_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          s_40 = t;
          if(((r_40 != NULL) && (r_40 != s_40)))
            _fail(s_40);
          else
            r_40 = s_40;
        }
        {
          t = not_null(m_40);
          {
            ATerm v_40 = NULL;
            t = a_56(t);
            {
              t_40 = t;
              {
                t = not_null(n_40);
                {
                  ATerm y_40 = NULL;
                  t = b_56(t);
                  {
                    v_40 = t;
                    {
                      ATerm z_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(t_40), not_null(v_40)), not_null(r_40));
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
ATerm Mod_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm l_41 = NULL,m_41 = NULL,p_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym_Mod_2))
    {
      m_41 = ATgetArgument(l_41, 0);
      p_41 = ATgetArgument(l_41, 1);
      {
        ATerm y_41 = NULL,b_42 = NULL;
        ATerm a_42 = NULL;
        t = SSLgetAnnotations(not_null(l_41));
        {
          a_42 = t;
          if(((y_41 != NULL) && (y_41 != a_42)))
            _fail(a_42);
          else
            y_41 = a_42;
        }
        {
          t = not_null(m_41);
          {
            ATerm d_42 = NULL;
            t = h_57(t);
            {
              b_42 = t;
              {
                t = not_null(p_41);
                {
                  ATerm f_42 = NULL;
                  t = i_57(t);
                  {
                    d_42 = t;
                    {
                      ATerm g_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(b_42), not_null(d_42)), not_null(y_41));
                      {
                        g_42 = t;
                        if(((f_42 != NULL) && (f_42 != g_42)))
                          _fail(g_42);
                        else
                          f_42 = g_42;
                      }
                      t = not_null(f_42);
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
ATerm SDef_3 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm z_55 (ATerm))
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_SDef_3))
    {
      u_42 = ATgetArgument(t_42, 0);
      v_42 = ATgetArgument(t_42, 1);
      w_42 = ATgetArgument(t_42, 2);
      {
        ATerm b_43 = NULL,d_43 = NULL;
        ATerm c_43 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          c_43 = t;
          if(((b_43 != NULL) && (b_43 != c_43)))
            _fail(c_43);
          else
            b_43 = c_43;
        }
        {
          t = not_null(u_42);
          {
            ATerm f_43 = NULL;
            t = x_55(t);
            {
              d_43 = t;
              {
                t = not_null(v_42);
                {
                  ATerm h_43 = NULL;
                  t = y_55(t);
                  {
                    f_43 = t;
                    {
                      t = not_null(w_42);
                      {
                        ATerm j_43 = NULL;
                        t = z_55(t);
                        {
                          h_43 = t;
                          {
                            ATerm k_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_43), not_null(f_43), not_null(h_43)), not_null(b_43));
                            {
                              k_43 = t;
                              if(((j_43 != NULL) && (j_43 != k_43)))
                                _fail(k_43);
                              else
                                j_43 = k_43;
                            }
                            t = not_null(j_43);
                          }
                        }
                      }
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
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            ;
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, y_0);
        return(t);
      }
      t = SDef_3(t, w_0, x_0, strategy_expression_0);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_x_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm r_43 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = Cons_2(t, a_73, r_43);
      }
    return(t);
  }
  t = r_43(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm x_43 = NULL,y_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym_Strategies_1))
    {
      y_43 = ATgetArgument(x_43, 0);
      {
        ATerm b_44 = NULL,d_44 = NULL;
        ATerm c_44 = NULL;
        t = SSLgetAnnotations(not_null(x_43));
        {
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
        }
        {
          t = not_null(y_43);
          {
            ATerm f_44 = NULL;
            t = b_57(t);
            {
              d_44 = t;
              {
                ATerm g_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_44)), not_null(b_44));
                {
                  g_44 = t;
                  if(((f_44 != NULL) && (f_44 != g_44)))
                    _fail(g_44);
                  else
                    f_44 = g_44;
                }
                t = not_null(f_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm q_44 = NULL,r_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym_Specification_1))
    {
      r_44 = ATgetArgument(q_44, 0);
      {
        ATerm u_44 = NULL,w_44 = NULL;
        ATerm v_44 = NULL;
        t = SSLgetAnnotations(not_null(q_44));
        {
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
        }
        {
          t = not_null(r_44);
          {
            ATerm y_44 = NULL;
            t = d_57(t);
            {
              w_44 = t;
              {
                ATerm g_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_44)), not_null(u_44));
                {
                  g_45 = t;
                  if(((y_44 != NULL) && (y_44 != g_45)))
                    _fail(g_45);
                  else
                    y_44 = g_45;
                }
                t = not_null(y_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, d_1);
            return(t);
          }
          t = Cons_2(t, c_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, b_1);
        return(t);
      }
      t = Specification_1(t, a_1);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_c_7;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  s_45 :
  if(match_cons(d_46, sym__2))
    {
      e_46 = ATgetArgument(d_46, 0);
      f_46 = ATgetArgument(d_46, 1);
      {
        ATerm j_46 = NULL,p_46 = NULL;
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
          t = not_null(e_46);
          {
            ATerm r_46 = NULL;
            t = y_52(t);
            {
              p_46 = t;
              {
                t = not_null(f_46);
                {
                  ATerm t_46 = NULL;
                  t = z_52(t);
                  {
                    r_46 = t;
                    {
                      ATerm u_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_46), not_null(r_46)), not_null(j_46));
                      {
                        u_46 = t;
                        if(((t_46 != NULL) && (t_46 != u_46)))
                          _fail(u_46);
                        else
                          t_46 = u_46;
                      }
                      t = not_null(t_46);
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
  ATerm c_47 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm d_47 = NULL,e_47 = NULL;
      d_47 = t;
      b_47 :
      if(match_cons(d_47, sym_Program_1))
        {
          e_47 = ATgetArgument(d_47, 0);
          if(((c_47 != NULL) && (c_47 != e_47)))
            _fail(e_47);
          else
            c_47 = e_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(c_47)), term_f_7));
      {
        t = printnl_0(t);
        {
          t = term_h_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  h_47 :
  if(match_cons(j_47, sym__2))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      {
        ATerm i_7;
        i_7 = t;
        t = SSL_printnl(not_null(k_47), not_null(l_47));
        t = i_7;
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
  ATerm q_47 = NULL;
  q_47 = t;
  t = SSL_implode_string(not_null(q_47));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
        v_47 = t;
        u_47 :
        if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
          {
            w_47 = ATgetFirst((ATermList) v_47);
            x_47 = (ATerm) ATgetNext((ATermList) v_47);
            {
              t = not_null(w_47);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(x_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_1);
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
  ATerm h_48 = NULL;
  ATerm m_48 = NULL;
  h_48 = t;
  {
    ATerm n_48 = NULL;
    ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
    t = not_null(h_48);
    {
      n_48 = t;
      {
        t = SSL_explode_term(not_null(n_48));
        {
          p_48 = t;
          f_48 :
          if(match_cons(p_48, sym__2))
            {
              q_48 = ATgetArgument(p_48, 0);
              r_48 = ATgetArgument(p_48, 1);
              g_48 :
              if(match_string(q_48, ""))
                {
                  if(((m_48 != NULL) && (m_48 != r_48)))
                    _fail(r_48);
                  else
                    m_48 = r_48;
                }
              else
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
      t = not_null(m_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm v_48 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_48);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          t = Nil_0(t);
          t = n_73(t);
        }
      }
    return(t);
  }
  t = v_48(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym__2))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      {
        t = not_null(z_48);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(a_49);
            return(t);
          }
          t = at_end_1(t, h_1);
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  t = SSL_explode_string(not_null(f_49));
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
  ATerm j_49 = NULL;
  j_49 = t;
  t = SSL_is_string(not_null(j_49));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_1);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
              z_49 = t;
              r_49 :
              if(match_cons(z_49, sym_Path_1))
                {
                  a_50 = ATgetArgument(z_49, 0);
                  t = not_null(a_50);
                }
              else
                {
                  if(match_cons(z_49, sym_Var_1))
                    {
                      a_50 = ATgetArgument(z_49, 0);
                      {
                        t = not_null(a_50);
                        {
                          ATerm t_7 = t;
                          int u_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_7);
                            }
                          else
                            {
                              t = t_7;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = term_v_7;
                                  return(t);
                                }
                                t = debug_1(t, j_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_49, sym_Prefix_2))
                        {
                          a_50 = ATgetArgument(z_49, 0);
                          b_50 = ATgetArgument(z_49, 1);
                          {
                            ATerm g_50 = NULL,i_50 = NULL;
                            ATerm w_7;
                            w_7 = t;
                            {
                              ATerm h_50 = NULL;
                              t = not_null(a_50);
                              {
                                t = eval_config_0(t);
                                {
                                  h_50 = t;
                                  if(((g_50 != NULL) && (g_50 != h_50)))
                                    _fail(h_50);
                                  else
                                    g_50 = h_50;
                                }
                              }
                            }
                            t = w_7;
                            {
                              ATerm j_50 = NULL;
                              t = not_null(b_50);
                              {
                                t = eval_config_0(t);
                                {
                                  j_50 = t;
                                  if(((i_50 != NULL) && (i_50 != j_50)))
                                    _fail(j_50);
                                  else
                                    i_50 = j_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), not_null(i_50));
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
  ATerm r_50 = NULL;
  r_50 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(r_50));
    {
      t = table_get_0(t);
      {
        ATerm k_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_7;
            y_7 = t;
            {
              ATerm t_50 = NULL;
              ATerm u_50 = NULL;
              u_50 = t;
              if(((t_50 != NULL) && (t_50 != u_50)))
                _fail(u_50);
              else
                t_50 = u_50;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(r_50), not_null(t_50));
                t = table_put_0(t);
              }
            }
            t = y_7;
          }
          return(t);
        }
        t = try_1(t, k_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm z_7;
    z_7 = t;
    {
      ATerm y_50 = NULL;
      ATerm z_50 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          z_50 = t;
          if(((y_50 != NULL) && (y_50 != z_50)))
            _fail(z_50);
          else
            y_50 = z_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), term_b_8);
        t = geq_0(t);
      }
    }
    t = z_7;
    t = t_86(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym__2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      t = SSL_WriteToTextFile(not_null(e_51), not_null(f_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  l_51 = t;
  k_51 :
  if(match_cons(l_51, sym__2))
    {
      m_51 = ATgetArgument(l_51, 0);
      n_51 = ATgetArgument(l_51, 1);
      t = SSL_WriteToBinaryFile(not_null(m_51), not_null(n_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_51 = NULL;
  ATerm d_8;
  d_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm w_51 = NULL,x_51 = NULL;
            w_51 = t;
            s_51 :
            if(match_cons(w_51, sym_Output_1))
              {
                x_51 = ATgetArgument(w_51, 0);
                if(((v_51 != NULL) && (v_51 != x_51)))
                  _fail(x_51);
                else
                  v_51 = x_51;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          {
            ATerm y_51 = NULL;
            t = term_j_8;
            {
              y_51 = t;
              if(((v_51 != NULL) && (v_51 != y_51)))
                _fail(y_51);
              else
                v_51 = y_51;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = d_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(v_51);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm z_51 = NULL;
              z_51 = t;
              u_51 :
              if(!(match_cons(z_51, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm f_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  ATerm m_8;
  m_8 = t;
  t = dtime_0(t);
  t = m_8;
  {
    t = a_85(t);
    {
      ATerm n_8;
      n_8 = t;
      {
        ATerm g_52 = NULL;
        t = dtime_0(t);
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
      }
      t = n_8;
      {
        h_52 = t;
        e_52 :
        if(match_cons(h_52, sym__2))
          {
            i_52 = ATgetArgument(h_52, 0);
            j_52 = ATgetArgument(h_52, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_52))), not_null(j_52));
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
ATerm debug_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm o_8;
  o_8 = t;
  {
    ATerm q_52 = NULL,s_52 = NULL;
    ATerm p_8;
    p_8 = t;
    {
      ATerm r_52 = NULL;
      t = w_83(t);
      {
        r_52 = t;
        if(((q_52 != NULL) && (q_52 != r_52)))
          _fail(r_52);
        else
          q_52 = r_52;
      }
    }
    t = p_8;
    {
      ATerm t_52 = NULL;
      t_52 = t;
      if(((s_52 != NULL) && (s_52 != t_52)))
        _fail(t_52);
      else
        s_52 = t_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_52)), not_null(q_52)));
        t = printnl_0(t);
      }
    }
  }
  t = o_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_52 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_53 = NULL;
      a_53 = t;
      {
        if(((x_52 != NULL) && (x_52 != a_53)))
          _fail(a_53);
        else
          x_52 = a_53;
        t = SSL_ReadFromFile(not_null(x_52));
      }
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_s_8;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm e_53 = NULL,g_53 = NULL;
  ATerm t_8;
  t_8 = t;
  {
    ATerm f_53 = NULL;
    t = b_81(t);
    {
      f_53 = t;
      if(((e_53 != NULL) && (e_53 != f_53)))
        _fail(f_53);
      else
        e_53 = f_53;
    }
  }
  t = t_8;
  {
    ATerm h_53 = NULL;
    t = c_81(t);
    {
      h_53 = t;
      if(((g_53 != NULL) && (g_53 != h_53)))
        _fail(h_53);
      else
        g_53 = h_53;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_53), not_null(g_53));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_53 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm o_53 = NULL,p_53 = NULL;
          o_53 = t;
          l_53 :
          if(match_cons(o_53, sym_Input_1))
            {
              p_53 = ATgetArgument(o_53, 0);
              if(((n_53 != NULL) && (n_53 != p_53)))
                _fail(p_53);
              else
                n_53 = p_53;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_1);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        {
          ATerm q_53 = NULL;
          t = term_x_8;
          {
            q_53 = t;
            if(((n_53 != NULL) && (n_53 != q_53)))
              _fail(q_53);
            else
              n_53 = q_53;
          }
        }
      }
  }
  t = u_8;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(n_53);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm u_53 = NULL;
    u_53 = t;
    t_53 :
    if(!(match_string(u_53, "-v")))
      {
        if(!(match_string(u_53, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_a_9;
    t = set_config_0(t);
    t = term_b_9;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = Option_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm x_53 = NULL;
    x_53 = t;
    v_53 :
    if(!(match_string(x_53, "-k")))
      {
        if(!(match_string(x_53, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm d_9;
    d_9 = t;
    {
      ATerm y_53 = NULL;
      ATerm z_53 = NULL;
      t = string_to_int_0(t);
      {
        z_53 = t;
        if(((y_53 != NULL) && (y_53 != z_53)))
          _fail(z_53);
        else
          y_53 = z_53;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(y_53));
        t = set_config_0(t);
      }
    }
    t = d_9;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  t = SSL_string_to_int(not_null(c_54));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm q_54 = NULL;
        q_54 = t;
        f_54 :
        if(!(match_string(q_54, "-S")))
          {
            if(!(match_string(q_54, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_j_9;
        t = set_config_0(t);
        t = term_k_9;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_l_9;
        return(t);
      }
      t = Option_3(t, b_2, c_2, d_2);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm z_54 = NULL;
              z_54 = t;
              g_54 :
              if(!(match_string(z_54, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm d_56 = NULL;
              ATerm o_9;
              o_9 = t;
              {
                ATerm r_55 = NULL;
                ATerm c_56 = NULL;
                t = string_to_int_0(t);
                {
                  c_56 = t;
                  if(((r_55 != NULL) && (r_55 != c_56)))
                    _fail(c_56);
                  else
                    r_55 = c_56;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(r_55));
                  t = set_config_0(t);
                }
              }
              t = o_9;
              {
                ATerm e_56 = NULL;
                e_56 = t;
                if(((d_56 != NULL) && (d_56 != e_56)))
                  _fail(e_56);
                else
                  d_56 = e_56;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_56));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_p_9;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm f_56 = NULL;
                f_56 = t;
                p_54 :
                if(!(match_string(f_56, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_r_9;
                t = set_config_0(t);
                t = term_s_9;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_t_9;
                return(t);
              }
              t = Option_3(t, h_2, i_2, j_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm s_56 = NULL;
    s_56 = t;
    p_56 :
    if(!(match_string(s_56, "-o")))
      {
        if(!(match_string(s_56, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm v_56 = NULL;
    ATerm y_9;
    y_9 = t;
    {
      ATerm t_56 = NULL;
      ATerm u_56 = NULL;
      u_56 = t;
      if(((t_56 != NULL) && (t_56 != u_56)))
        _fail(u_56);
      else
        t_56 = u_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(t_56));
        t = set_config_0(t);
      }
    }
    t = y_9;
    {
      ATerm w_56 = NULL;
      w_56 = t;
      if(((v_56 != NULL) && (v_56 != w_56)))
        _fail(w_56);
      else
        v_56 = w_56;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_56));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm a_57 = NULL;
          a_57 = t;
          z_56 :
          if(!(match_string(a_57, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_e_10;
          t = set_config_0(t);
          t = term_f_10;
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = Option_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  k_57 = t;
  g_57 :
  if(match_string(k_57, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
        {
          l_57 = ATgetFirst((ATermList) k_57);
          m_57 = (ATerm) ATgetNext((ATermList) k_57);
          j_57 :
          if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
            {
              n_57 = ATgetFirst((ATermList) m_57);
              o_57 = (ATerm) ATgetNext((ATermList) m_57);
              {
                ATerm s_57 = NULL;
                ATerm h_10;
                h_10 = t;
                {
                  t = not_null(l_57);
                  t = j_0(t);
                }
                t = h_10;
                {
                  ATerm t_57 = NULL;
                  t = not_null(n_57);
                  {
                    t = k_0(t);
                    {
                      t_57 = t;
                      if(((s_57 != NULL) && (s_57 != t_57)))
                        _fail(t_57);
                      else
                        s_57 = t_57;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_57)), not_null(s_57));
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
  ATerm q_2 (ATerm t)
  {
    ATerm a_58 = NULL;
    a_58 = t;
    x_57 :
    if(!(match_string(a_58, "-i")))
      {
        if(!(match_string(a_58, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm d_58 = NULL;
    ATerm i_10;
    i_10 = t;
    {
      ATerm b_58 = NULL;
      ATerm c_58 = NULL;
      c_58 = t;
      if(((b_58 != NULL) && (b_58 != c_58)))
        _fail(c_58);
      else
        b_58 = c_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(b_58));
        t = set_config_0(t);
      }
    }
    t = i_10;
    {
      ATerm e_58 = NULL;
      e_58 = t;
      if(((d_58 != NULL) && (d_58 != e_58)))
        _fail(e_58);
      else
        d_58 = e_58;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_58));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_p_10));
  {
    t = printnl_0(t);
    {
      t = term_h_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  t = SSL_TicksToSeconds(not_null(i_58));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym__2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_58), not_null(s_58));
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = SSL_addr(not_null(r_58), not_null(s_58));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_79(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
        z_58 = t;
        y_58 :
        if(((ATgetType(z_58) == AT_LIST) && !(ATisEmpty(z_58))))
          {
            a_59 = ATgetFirst((ATermList) z_58);
            b_59 = (ATerm) ATgetNext((ATermList) z_58);
            {
              ATerm e_59 = NULL;
              ATerm f_59 = NULL;
              t = not_null(b_59);
              {
                t = foldr_2(t, m_79, n_79);
                {
                  f_59 = t;
                  if(((e_59 != NULL) && (e_59 != f_59)))
                    _fail(f_59);
                  else
                    e_59 = f_59;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_59), not_null(e_59));
                t = n_79(t);
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
ATerm crush_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  ATerm m_59 = NULL;
  ATerm o_59 = NULL;
  m_59 = t;
  {
    ATerm p_59 = NULL;
    ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
    t = not_null(m_59);
    {
      p_59 = t;
      {
        t = SSL_explode_term(not_null(p_59));
        {
          r_59 = t;
          l_59 :
          if(match_cons(r_59, sym__2))
            {
              s_59 = ATgetArgument(r_59, 0);
              t_59 = ATgetArgument(r_59, 1);
              if(((o_59 != NULL) && (o_59 != t_59)))
                _fail(t_59);
              else
                o_59 = t_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_59);
      t = foldr_2(t, k_78, l_78);
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
    ATerm t_2 (ATerm t)
    {
      t = term_i_9;
      return(t);
    }
    t = crush_2(t, t_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym__2))
    {
      a_60 = ATgetArgument(z_59, 0);
      b_60 = ATgetArgument(z_59, 1);
      {
        ATerm x_10;
        x_10 = t;
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_60), not_null(b_60));
              ;
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              t = SSL_gtr(not_null(a_60), not_null(b_60));
            }
        }
        t = x_10;
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
  ATerm h_60 = NULL;
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
      i_60 = t;
      g_60 :
      if(match_cons(i_60, sym__2))
        {
          j_60 = ATgetArgument(i_60, 0);
          k_60 = ATgetArgument(i_60, 1);
          {
            if(((h_60 != NULL) && (h_60 != j_60)))
              _fail(j_60);
            else
              h_60 = j_60;
            if(((h_60 != NULL) && (h_60 != k_60)))
              _fail(k_60);
            else
              h_60 = k_60;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm c_11;
    c_11 = t;
    {
      ATerm n_60 = NULL;
      ATerm o_60 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          o_60 = t;
          if(((n_60 != NULL) && (n_60 != o_60)))
            _fail(o_60);
          else
            n_60 = o_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_60), term_h_7);
        t = geq_0(t);
      }
    }
    t = c_11;
    t = s_86(t);
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm s_60 = NULL,u_60 = NULL;
    ATerm d_11;
    d_11 = t;
    {
      ATerm t_60 = NULL;
      t = run_time_0(t);
      {
        t_60 = t;
        if(((s_60 != NULL) && (s_60 != t_60)))
          _fail(t_60);
        else
          s_60 = t_60;
      }
    }
    t = d_11;
    {
      ATerm v_60 = NULL;
      t = term_f_11;
      {
        t = get_config_0(t);
        {
          v_60 = t;
          if(((u_60 != NULL) && (u_60 != v_60)))
            _fail(v_60);
          else
            u_60 = v_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), not_null(s_60)), term_g_11), not_null(u_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_2);
  {
    t = term_i_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_61 = NULL;
  c_61 = t;
  b_61 :
  if(match_cons(c_61, sym_Version_0))
    {
      ATerm e_61 = NULL,g_61 = NULL;
      ATerm i_11;
      i_11 = t;
      {
        ATerm f_61 = NULL;
        t = SSLgetAnnotations(not_null(c_61));
        {
          f_61 = t;
          if(((e_61 != NULL) && (e_61 != f_61)))
            _fail(f_61);
          else
            e_61 = f_61;
        }
      }
      t = i_11;
      {
        ATerm h_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_61));
        {
          h_61 = t;
          if(((g_61 != NULL) && (g_61 != h_61)))
            _fail(h_61);
          else
            g_61 = h_61;
        }
        t = not_null(g_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_2);
  t = y_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_61 = NULL;
  m_61 = t;
  t = SSL_table_create(not_null(m_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  {
    ATerm p_11;
    p_11 = t;
    {
      t = term_q_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, not_null(q_61));
          t = table_put_0(t);
        }
      }
    }
    t = p_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_61 = NULL;
  u_61 = t;
  t = SSL_table_destroy(not_null(u_61));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  t = SSL_exit(not_null(y_61));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(((ATgetType(c_62) == AT_LIST) && ATisEmpty(c_62)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_62) == AT_LIST) && !(ATisEmpty(c_62))))
        {
          d_62 = ATgetFirst((ATermList) c_62);
          e_62 = (ATerm) ATgetNext((ATermList) c_62);
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
  ATerm s_11;
  s_11 = t;
  {
    ATerm h_62 = NULL;
    ATerm k_62 = NULL;
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        {
          ATerm i_62 = NULL;
          ATerm j_62 = NULL;
          j_62 = t;
          if(((i_62 != NULL) && (i_62 != j_62)))
            _fail(j_62);
          else
            i_62 = j_62;
          t = (ATerm) ATinsert(ATempty, not_null(i_62));
        }
      }
    {
      k_62 = t;
      if(((h_62 != NULL) && (h_62 != k_62)))
        _fail(k_62);
      else
        h_62 = k_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_8, not_null(h_62));
      t = printnl_0(t);
    }
  }
  t = s_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm n_62 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = Cons_2(t, y_72, n_62);
      }
    return(t);
  }
  t = n_62(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  w_62 = t;
  t_62 :
  if(((ATgetType(w_62) == AT_LIST) && !(ATisEmpty(w_62))))
    {
      u_62 = ATgetFirst((ATermList) w_62);
      v_62 = (ATerm) ATgetNext((ATermList) w_62);
      {
        ATerm z_62 = NULL;
        t = not_null(v_62);
        {
          ATerm b_12;
          b_12 = t;
          {
            ATerm a_63 = NULL,c_63 = NULL,e_63 = NULL;
            ATerm f_12;
            f_12 = t;
            {
              ATerm b_63 = NULL;
              t = i_0(t);
              {
                b_63 = t;
                if(((a_63 != NULL) && (a_63 != b_63)))
                  _fail(b_63);
                else
                  a_63 = b_63;
              }
            }
            t = f_12;
            {
              ATerm d_63 = NULL;
              t = not_null(u_62);
              {
                t = h_0(t);
                {
                  d_63 = t;
                  if(((c_63 != NULL) && (c_63 != d_63)))
                    _fail(d_63);
                  else
                    c_63 = d_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_63)), not_null(c_63));
                {
                  e_63 = t;
                  if(((z_62 != NULL) && (z_62 != e_63)))
                    _fail(e_63);
                  else
                    z_62 = e_63;
                }
              }
            }
          }
          t = b_12;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(z_62);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_62) == AT_LIST) && ATisEmpty(w_62)))
        {
          {
            t = term_z_8;
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
ATerm short_description_1 (ATerm t, ATerm v_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  o_63 :
  if(match_cons(p_63, sym_Program_1))
    {
      q_63 = ATgetArgument(p_63, 0);
      {
        ATerm t_63 = NULL,v_63 = NULL;
        ATerm u_63 = NULL;
        t = SSLgetAnnotations(not_null(p_63));
        {
          u_63 = t;
          if(((t_63 != NULL) && (t_63 != u_63)))
            _fail(u_63);
          else
            t_63 = u_63;
        }
        {
          t = not_null(q_63);
          {
            ATerm x_63 = NULL;
            t = n_64(t);
            {
              v_63 = t;
              {
                ATerm y_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_63)), not_null(t_63));
                {
                  y_63 = t;
                  if(((x_63 != NULL) && (x_63 != y_63)))
                    _fail(y_63);
                  else
                    x_63 = y_63;
                }
                t = not_null(x_63);
              }
            }
          }
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
  ATerm h_64 = NULL;
  ATerm h_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_64 = NULL;
      t = term_f_11;
      {
        t = get_config_0(t);
        {
          i_64 = t;
          if(((h_64 != NULL) && (h_64 != i_64)))
            _fail(i_64);
          else
            h_64 = i_64;
        }
      }
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = h_12;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm j_64 = NULL;
            j_64 = t;
            if(((h_64 != NULL) && (h_64 != j_64)))
              _fail(j_64);
            else
              h_64 = j_64;
            return(t);
          }
          t = Program_1(t, a_3);
          return(t);
        }
        t = option_defined_1(t, z_2);
      }
    }
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = not_null(h_64);
        return(t);
      }
      t = short_description_1(t, c_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_3);
    {
      t = term_l_12;
      {
        t = echo_0(t);
        {
          t = term_o_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm k_64 = NULL;
                  ATerm l_64 = NULL;
                  l_64 = t;
                  if(((k_64 != NULL) && (k_64 != l_64)))
                    _fail(l_64);
                  else
                    k_64 = l_64;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_64)), term_p_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm m_64 = NULL;
                    ATerm p_64 = NULL;
                    ATerm f_3 (ATerm t)
                    {
                      t = not_null(h_64);
                      return(t);
                    }
                    t = long_description_1(t, f_3);
                    {
                      p_64 = t;
                      if(((m_64 != NULL) && (m_64 != p_64)))
                        _fail(p_64);
                      else
                        m_64 = p_64;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_64)), term_q_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_3);
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
  ATerm r_12;
  r_12 = t;
  {
    ATerm v_64 = NULL;
    ATerm w_64 = NULL;
    w_64 = t;
    if(((v_64 != NULL) && (v_64 != w_64)))
      _fail(w_64);
    else
      v_64 = w_64;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(v_64)));
      t = printnl_0(t);
    }
  }
  t = r_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm s_12;
  s_12 = t;
  {
    t = x_83(t);
    t = debug_0(t);
  }
  t = s_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm g_65 = NULL,h_65 = NULL;
  g_65 = t;
  f_65 :
  if(match_cons(g_65, sym_Undefined_1))
    {
      h_65 = ATgetArgument(g_65, 0);
      {
        ATerm k_65 = NULL,m_65 = NULL;
        ATerm l_65 = NULL;
        t = SSLgetAnnotations(not_null(g_65));
        {
          l_65 = t;
          if(((k_65 != NULL) && (k_65 != l_65)))
            _fail(l_65);
          else
            k_65 = l_65;
        }
        {
          t = not_null(h_65);
          {
            ATerm o_65 = NULL;
            t = o_64(t);
            {
              m_65 = t;
              {
                ATerm p_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_65)), not_null(k_65));
                {
                  p_65 = t;
                  if(((o_65 != NULL) && (o_65 != p_65)))
                    _fail(p_65);
                  else
                    o_65 = p_65;
                }
                t = not_null(o_65);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm u_65 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_73, _id);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = Cons_2(t, _id, u_65);
      }
    return(t);
  }
  t = u_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_87 (ATerm))
{
  t = fetch_1(t, v_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym_Help_0))
    {
      ATerm b_66 = NULL,d_66 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm c_66 = NULL;
        t = SSLgetAnnotations(not_null(z_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
      }
      t = v_12;
      {
        ATerm e_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_66));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm w_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_65(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = w_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  k_66 = t;
  j_66 :
  if(match_cons(k_66, sym__2))
    {
      l_66 = ATgetArgument(k_66, 0);
      m_66 = ATgetArgument(k_66, 1);
      t = SSL_table_get(not_null(l_66), not_null(m_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t_66 = t;
  s_66 :
  if(match_cons(t_66, sym__3))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      w_66 = ATgetArgument(t_66, 2);
      {
        ATerm b_13;
        b_13 = t;
        {
          ATerm a_67 = NULL;
          ATerm b_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_66), not_null(v_66));
          {
            ATerm f_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = f_13;
                t = (ATerm) ATempty;
              }
            {
              b_67 = t;
              if(((a_67 != NULL) && (a_67 != b_67)))
                _fail(b_67);
              else
                a_67 = b_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_66), not_null(v_66), (ATerm) ATinsert(CheckATermList(not_null(a_67)), not_null(w_66)));
            t = table_put_0(t);
          }
        }
        t = b_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_89 (ATerm))
{
  ATerm f_67 = NULL;
  ATerm g_67 = NULL;
  t = term_z_8;
  {
    t = a_89(t);
    {
      g_67 = t;
      if(((f_67 != NULL) && (f_67 != g_67)))
        _fail(g_67);
      else
        f_67 = g_67;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, not_null(f_67));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_string(m_67, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_67) == AT_LIST) && !(ATisEmpty(m_67))))
        {
          n_67 = ATgetFirst((ATermList) m_67);
          o_67 = (ATerm) ATgetNext((ATermList) m_67);
          {
            ATerm r_67 = NULL;
            ATerm j_13;
            j_13 = t;
            {
              t = not_null(n_67);
              t = a_0(t);
            }
            t = j_13;
            {
              ATerm s_67 = NULL;
              t = term_z_8;
              {
                t = d_0(t);
                {
                  s_67 = t;
                  if(((r_67 != NULL) && (r_67 != s_67)))
                    _fail(s_67);
                  else
                    r_67 = s_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_67)), not_null(r_67));
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
  ATerm g_3 (ATerm t)
  {
    ATerm x_67 = NULL;
    x_67 = t;
    w_67 :
    if(!(match_string(x_67, "--help")))
      {
        if(!(match_string(x_67, "-h")))
          {
            if(!(match_string(x_67, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_q_13;
    {
      t = set_config_0(t);
      t = term_r_13;
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_s_13;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  z_67 :
  if(((ATgetType(a_68) == AT_LIST) && !(ATisEmpty(a_68))))
    {
      b_68 = ATgetFirst((ATermList) a_68);
      c_68 = (ATerm) ATgetNext((ATermList) a_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_68)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_54 (ATerm), ATerm i_54 (ATerm))
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
    {
      n_68 = ATgetFirst((ATermList) m_68);
      o_68 = (ATerm) ATgetNext((ATermList) m_68);
      {
        ATerm s_68 = NULL,u_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(m_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(n_68);
          {
            ATerm w_68 = NULL;
            t = h_54(t);
            {
              u_68 = t;
              {
                t = not_null(o_68);
                {
                  ATerm y_68 = NULL;
                  t = i_54(t);
                  {
                    w_68 = t;
                    {
                      ATerm z_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_68)), not_null(u_68)), not_null(s_68));
                      {
                        z_68 = t;
                        if(((y_68 != NULL) && (y_68 != z_68)))
                          _fail(z_68);
                        else
                          y_68 = z_68;
                      }
                      t = not_null(y_68);
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
  ATerm j_69 = NULL;
  j_69 = t;
  i_69 :
  if(((ATgetType(j_69) == AT_LIST) && ATisEmpty(j_69)))
    {
      {
        ATerm l_69 = NULL,n_69 = NULL;
        ATerm t_13;
        t_13 = t;
        {
          ATerm m_69 = NULL;
          t = SSLgetAnnotations(not_null(j_69));
          {
            m_69 = t;
            if(((l_69 != NULL) && (l_69 != m_69)))
              _fail(m_69);
            else
              l_69 = m_69;
          }
        }
        t = t_13;
        {
          ATerm o_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_69));
          {
            o_69 = t;
            if(((n_69 != NULL) && (n_69 != o_69)))
              _fail(o_69);
            else
              n_69 = o_69;
          }
          t = not_null(n_69);
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
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym__2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_7, not_null(v_69), not_null(w_69));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm u_13;
  u_13 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_v_13;
      t = y_88(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = u_13;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm e_70 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm c_70 = NULL;
        ATerm d_70 = NULL;
        d_70 = t;
        if(((c_70 != NULL) && (c_70 != d_70)))
          _fail(d_70);
        else
          c_70 = d_70;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(c_70));
          t = set_config_0(t);
        }
      }
      t = w_13;
      {
        ATerm f_70 = NULL;
        f_70 = t;
        if(((e_70 != NULL) && (e_70 != f_70)))
          _fail(f_70);
        else
          e_70 = f_70;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_70));
      }
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              {
                t = y_88(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
    o_70 = t;
    k_70 :
    if(match_cons(o_70, sym__3))
      {
        p_70 = ATgetArgument(o_70, 0);
        q_70 = ATgetArgument(o_70, 1);
        r_70 = ATgetArgument(o_70, 2);
        {
          if(((l_70 != NULL) && (l_70 != p_70)))
            _fail(p_70);
          else
            l_70 = p_70;
          {
            if(((m_70 != NULL) && (m_70 != q_70)))
              _fail(q_70);
            else
              m_70 = q_70;
            {
              if(((n_70 != NULL) && (n_70 != r_70)))
                _fail(r_70);
              else
                n_70 = r_70;
              t = SSL_table_put(not_null(l_70), not_null(m_70), not_null(n_70));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm u_70 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    t = term_h_14;
    t = table_put_0(t);
  }
  t = c_14;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_88(t);
          ;
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm n_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14;
            s_14 = t;
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_14;
            {
              t = system_usage_0(t);
              {
                t = term_i_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = n_14;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm v_70 = NULL;
                  v_70 = t;
                  if(((u_70 != NULL) && (u_70 != v_70)))
                    _fail(v_70);
                  else
                    u_70 = v_70;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm q_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_70)), term_v_14);
                  return(t);
                }
                t = say_1(t, q_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_3);
      {
        ATerm w_14;
        w_14 = t;
        {
          t = term_m_12;
          t = table_destroy_0(t);
        }
        t = w_14;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm))
{
  t = parse_options_1(t, e_85);
  {
    t = store_options_0(t);
    {
      t = g_85(t);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_85);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = z_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_85(t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_85);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_3, x_85, y_85, s_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm j_15;
      j_15 = t;
      {
        ATerm y_70 = NULL;
        ATerm z_70 = NULL;
        t = term_f_11;
        {
          t = get_config_0(t);
          {
            z_70 = t;
            if(((y_70 != NULL) && (y_70 != z_70)))
              _fail(z_70);
            else
              y_70 = z_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(y_70)));
          t = printnl_0(t);
        }
      }
      t = j_15;
      return(t);
    }
    t = if_verbose2_1(t, u_3);
    return(t);
  }
  t = iowrap_4(t, p_85, q_85, r_85, t_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  t = iowrap_3(t, n_85, o_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = _2(t, _id, k_85);
    return(t);
  }
  t = iowrap_2(t, v_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
