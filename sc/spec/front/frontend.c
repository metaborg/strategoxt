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
ATerm term_s_55;
ATerm term_z_54;
ATerm term_r_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_t_52;
ATerm term_p_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_w_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_l_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_a_50;
ATerm term_t_49;
ATerm term_q_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_k_48;
ATerm term_f_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_u_47;
ATerm term_j_47;
ATerm term_e_47;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_w_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_r_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_l_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_k_34;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_n_32;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_j_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_u_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_b_25;
ATerm term_t_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_j_15;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_b_13;
ATerm term_t_12;
void init_constant_terms (void)
{
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Op_2, term_w_19, (ATerm) ATempty);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Var_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Var_1, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_o_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Var_1, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Var_1, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_t_20, term_x_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Call_2, term_b_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_f_21, term_o_20, term_t_20);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_20);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Call_2, term_v_21, (ATerm) ATempty);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_w_21, term_q_20, term_x_20);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Op_2, term_c_22, term_c_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Var_1, term_u_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_23);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, term_a_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_20);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_31);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Op_2, term_o_34, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Op_2, term_z_34, (ATerm) ATempty);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_36);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_36);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_37);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_40);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_41);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_l_39);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_l_25);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym__2, term_e_49, term_l_39);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym__2, term_a_50, term_l_39);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_h_53, term_i_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym__2, term_z_53, term_l_39);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym__3, term_h_53, term_i_53, (ATerm) ATempty);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm Prim_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm Explode_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm o_114 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_77 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm s_106 (ATerm));
ATerm timing_1 (ATerm, ATerm c_85 (ATerm));
ATerm spaste_1 (ATerm, ATerm a_114 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm Let_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm v_75 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm w_110 (ATerm, ATerm (ATerm)), ATerm x_110 (ATerm), ATerm y_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_110 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm));
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
ATerm manytd_1 (ATerm, ATerm q_89 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm l_114 (ATerm), ATerm m_114 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm b_113 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm w_113 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm h_111 (ATerm), ATerm i_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm b_111 (ATerm), ATerm c_111 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm u_110 (ATerm), ATerm v_110 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_111 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_92 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_91 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm, ATerm (ATerm)), ATerm k_110 (ATerm), ATerm l_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_110 (ATerm, ATerm (ATerm)), ATerm n_110 (ATerm));
ATerm substitute_5 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm, ATerm (ATerm)), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_110 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm c_113 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm a_113 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm k_114 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm lchoice_1 (ATerm, ATerm j_114 (ATerm));
ATerm LChoice_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm g_114 (ATerm), ATerm h_114 (ATerm));
ATerm choice_1 (ATerm, ATerm i_114 (ATerm));
ATerm Choice_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm RootApp_1 (ATerm, ATerm h_78 (ATerm));
ATerm App_2 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm o_103 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm q_74 (ATerm));
ATerm Build_1 (ATerm, ATerm r_74 (ATerm));
ATerm VarScope_1 (ATerm, ATerm f_114 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm b_77 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_86 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_95 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm x_112 (ATerm));
ATerm oncetd_1 (ATerm, ATerm i_88 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm v_112 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm u_85 (ATerm));
ATerm listtd_1 (ATerm, ATerm d_94 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm a_78 (ATerm));
ATerm Scope_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm tboundin_3 (ATerm, ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm t_98 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_98 (ATerm), ATerm y_98 (ATerm));
ATerm diff_1 (ATerm, ATerm p_98 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm zip_1 (ATerm, ATerm c_95 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm for_3 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm t_86 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_103 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_88 (ATerm));
ATerm assert_1 (ATerm, ATerm n_103 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm c_77 (ATerm));
ATerm Constructors_1 (ATerm, ATerm x_76 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_103 (ATerm));
ATerm restore_always_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_103 (ATerm));
ATerm scope_2 (ATerm, ATerm l_103 (ATerm), ATerm m_103 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_100 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_93 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_106 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_104 (ATerm));
ATerm debug_1 (ATerm, ATerm u_103 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_100 (ATerm), ATerm a_101 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_99 (ATerm), ATerm l_99 (ATerm));
ATerm crush_2 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_106 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_108 (ATerm));
ATerm map_1 (ATerm, ATerm w_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_108 (ATerm));
ATerm Program_1 (ATerm, ATerm q_84 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_103 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_84 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_93 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_107 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_105 (ATerm), ATerm m_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_105 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  r_9 = t;
  p_9 :
  if(match_cons(r_9, sym_ExplodeCong_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      q_9 = ATgetArgument(r_9, 1);
      {
        ATerm w_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
        ATerm b_10 = NULL;
        ATerm d_10 = NULL;
        t = new_0(t);
        {
          b_10 = t;
          {
            if(((w_9 != NULL) && (w_9 != b_10)))
              _fail(b_10);
            else
              w_9 = b_10;
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
                    ATerm f_10 = NULL;
                    t = new_0(t);
                    {
                      e_10 = t;
                      {
                        if(((z_9 != NULL) && (z_9 != e_10)))
                          _fail(e_10);
                        else
                          z_9 = e_10;
                        {
                          t = new_0(t);
                          {
                            f_10 = t;
                            if(((a_10 != NULL) && (a_10 != f_10)))
                              _fail(f_10);
                            else
                              a_10 = f_10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_10)), not_null(z_9)), not_null(y_9)), not_null(w_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(s_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9)))))));
      }
    }
  else
    {
      if(match_cons(r_9, sym_Build_1))
        {
          s_9 = ATgetArgument(r_9, 0);
          {
            ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
            ATerm m_10 = NULL;
            ATerm q_10 = NULL;
            t = new_0(t);
            {
              m_10 = t;
              {
                if(((k_10 != NULL) && (k_10 != m_10)))
                  _fail(m_10);
                else
                  k_10 = m_10;
                {
                  t = not_null(s_9);
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
                      n_10 = t;
                      g_9 :
                      if(match_cons(n_10, sym_Explode_2))
                        {
                          o_10 = ATgetArgument(n_10, 0);
                          p_10 = ATgetArgument(n_10, 1);
                          {
                            if(((h_10 != NULL) && (h_10 != o_10)))
                              _fail(o_10);
                            else
                              h_10 = o_10;
                            {
                              if(((j_10 != NULL) && (j_10 != p_10)))
                                _fail(p_10);
                              else
                                j_10 = p_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, b_0);
                    {
                      q_10 = t;
                      if(((l_10 != NULL) && (l_10 != q_10)))
                        _fail(q_10);
                      else
                        l_10 = q_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_10)), not_null(h_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_10)))));
          }
        }
      else
        {
          if(match_cons(r_9, sym_Match_1))
            {
              s_9 = ATgetArgument(r_9, 0);
              {
                ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
                ATerm x_10 = NULL;
                ATerm y_10 = NULL;
                t = new_0(t);
                {
                  x_10 = t;
                  {
                    if(((u_10 != NULL) && (u_10 != x_10)))
                      _fail(x_10);
                    else
                      u_10 = x_10;
                    {
                      ATerm c_11 = NULL;
                      t = new_0(t);
                      {
                        y_10 = t;
                        {
                          if(((v_10 != NULL) && (v_10 != y_10)))
                            _fail(y_10);
                          else
                            v_10 = y_10;
                          {
                            t = not_null(s_9);
                            {
                              ATerm f_0 (ATerm t)
                              {
                                ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                                z_10 = t;
                                n_9 :
                                if(match_cons(z_10, sym_Explode_2))
                                  {
                                    a_11 = ATgetArgument(z_10, 0);
                                    b_11 = ATgetArgument(z_10, 1);
                                    {
                                      if(((s_10 != NULL) && (s_10 != a_11)))
                                        _fail(a_11);
                                      else
                                        s_10 = a_11;
                                      {
                                        if(((t_10 != NULL) && (t_10 != b_11)))
                                          _fail(b_11);
                                        else
                                          t_10 = b_11;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_10));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, f_0);
                              {
                                c_11 = t;
                                if(((w_10 != NULL) && (w_10 != c_11)))
                                  _fail(c_11);
                                else
                                  w_10 = c_11;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_10)), (ATerm) ATmakeAppl(sym_Op_2, term_l_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_10)), not_null(s_10)))))));
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
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
            ATerm o_12 = NULL;
            ATerm s_12 = NULL;
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
                    ATerm h_0 (ATerm t)
                    {
                      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
                      p_12 = t;
                      w_11 :
                      if(match_cons(p_12, sym_Anno_2))
                        {
                          q_12 = ATgetArgument(p_12, 0);
                          r_12 = ATgetArgument(p_12, 1);
                          {
                            if(((k_12 != NULL) && (k_12 != q_12)))
                              _fail(q_12);
                            else
                              k_12 = q_12;
                            {
                              if(((l_12 != NULL) && (l_12 != r_12)))
                                _fail(r_12);
                              else
                                l_12 = r_12;
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
                    t = pat_td_1(t, h_0);
                    {
                      s_12 = t;
                      if(((n_12 != NULL) && (n_12 != s_12)))
                        _fail(s_12);
                      else
                        n_12 = s_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12))))));
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
                  ATerm x_12 = NULL;
                  ATerm a_13 = NULL;
                  t = new_0(t);
                  {
                    x_12 = t;
                    {
                      if(((v_12 != NULL) && (v_12 != x_12)))
                        _fail(x_12);
                      else
                        v_12 = x_12;
                      {
                        t = not_null(i_12);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm y_12 = NULL,z_12 = NULL;
                            y_12 = t;
                            a_12 :
                            if(match_cons(y_12, sym_RootApp_1))
                              {
                                z_12 = ATgetArgument(y_12, 0);
                                {
                                  if(((u_12 != NULL) && (u_12 != z_12)))
                                    _fail(z_12);
                                  else
                                    u_12 = z_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_12));
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
                            a_13 = t;
                            if(((w_12 != NULL) && (w_12 != a_13)))
                              _fail(a_13);
                            else
                              w_12 = a_13;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_12))), not_null(u_12))));
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  {
                    ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
                    ATerm g_13 = NULL;
                    ATerm k_13 = NULL;
                    t = new_0(t);
                    {
                      g_13 = t;
                      {
                        if(((e_13 != NULL) && (e_13 != g_13)))
                          _fail(g_13);
                        else
                          e_13 = g_13;
                        {
                          t = not_null(i_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                              h_13 = t;
                              e_12 :
                              if(match_cons(h_13, sym_App_2))
                                {
                                  i_13 = ATgetArgument(h_13, 0);
                                  j_13 = ATgetArgument(h_13, 1);
                                  {
                                    if(((d_13 != NULL) && (d_13 != i_13)))
                                      _fail(i_13);
                                    else
                                      d_13 = i_13;
                                    {
                                      if(((c_13 != NULL) && (c_13 != j_13)))
                                        _fail(j_13);
                                      else
                                        c_13 = j_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_13));
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
                              k_13 = t;
                              if(((f_13 != NULL) && (f_13 != k_13)))
                                _fail(k_13);
                              else
                                f_13 = k_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_13)), not_null(d_13)))));
                  }
                }
            }
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  b_14 = t;
  z_13 :
  if(match_cons(b_14, sym_Match_1))
    {
      c_14 = ATgetArgument(b_14, 0);
      a_14 :
      if(match_cons(c_14, sym_RootApp_1))
        {
          d_14 = ATgetArgument(c_14, 0);
          t = not_null(d_14);
        }
      else
        {
          if(match_cons(c_14, sym_App_2))
            {
              d_14 = ATgetArgument(c_14, 0);
              e_14 = ATgetArgument(c_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(d_14), not_null(e_14));
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
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Match_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm t_14 = NULL,u_14 = NULL;
        ATerm y_14 = NULL;
        t = not_null(r_14);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
            v_14 = t;
            m_14 :
            if(match_cons(v_14, sym_RootApp_1))
              {
                w_14 = ATgetArgument(v_14, 0);
                n_14 :
                if(match_cons(w_14, sym_Match_1))
                  {
                    x_14 = ATgetArgument(w_14, 0);
                    {
                      if(((t_14 != NULL) && (t_14 != x_14)))
                        _fail(x_14);
                      else
                        t_14 = x_14;
                      t = not_null(t_14);
                    }
                  }
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
          t = pat_td_1(t, v_0);
          {
            y_14 = t;
            if(((u_14 != NULL) && (u_14 != y_14)))
              _fail(y_14);
            else
              u_14 = y_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_14));
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
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_Build_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
            ATerm z_15 = NULL;
            ATerm d_16 = NULL;
            t = new_0(t);
            {
              z_15 = t;
              {
                if(((x_15 != NULL) && (x_15 != z_15)))
                  _fail(z_15);
                else
                  x_15 = z_15;
                {
                  t = not_null(t_15);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
                      a_16 = t;
                      h_15 :
                      if(match_cons(a_16, sym_Anno_2))
                        {
                          b_16 = ATgetArgument(a_16, 0);
                          c_16 = ATgetArgument(a_16, 1);
                          {
                            if(((v_15 != NULL) && (v_15 != b_16)))
                              _fail(b_16);
                            else
                              v_15 = b_16;
                            {
                              if(((w_15 != NULL) && (w_15 != c_16)))
                                _fail(c_16);
                              else
                                w_15 = c_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15));
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
                      d_16 = t;
                      if(((y_15 != NULL) && (y_15 != d_16)))
                        _fail(d_16);
                      else
                        y_15 = d_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_15)), not_null(v_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_15))));
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm y_13 = t;
              int f_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
                  ATerm i_16 = NULL;
                  ATerm l_16 = NULL;
                  t = new_0(t);
                  {
                    i_16 = t;
                    {
                      if(((g_16 != NULL) && (g_16 != i_16)))
                        _fail(i_16);
                      else
                        g_16 = i_16;
                      {
                        t = not_null(t_15);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm j_16 = NULL,k_16 = NULL;
                            j_16 = t;
                            l_15 :
                            if(match_cons(j_16, sym_RootApp_1))
                              {
                                k_16 = ATgetArgument(j_16, 0);
                                {
                                  if(((f_16 != NULL) && (f_16 != k_16)))
                                    _fail(k_16);
                                  else
                                    f_16 = k_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16));
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
                            l_16 = t;
                            if(((h_16 != NULL) && (h_16 != l_16)))
                              _fail(l_16);
                            else
                              h_16 = l_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_16))));
                  LocalPopChoice(f_14);
                }
              else
                {
                  t = y_13;
                  {
                    ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
                    ATerm r_16 = NULL;
                    ATerm v_16 = NULL;
                    t = new_0(t);
                    {
                      r_16 = t;
                      {
                        if(((p_16 != NULL) && (p_16 != r_16)))
                          _fail(r_16);
                        else
                          p_16 = r_16;
                        {
                          t = not_null(t_15);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
                              s_16 = t;
                              p_15 :
                              if(match_cons(s_16, sym_App_2))
                                {
                                  t_16 = ATgetArgument(s_16, 0);
                                  u_16 = ATgetArgument(s_16, 1);
                                  {
                                    if(((n_16 != NULL) && (n_16 != t_16)))
                                      _fail(t_16);
                                    else
                                      n_16 = t_16;
                                    {
                                      if(((o_16 != NULL) && (o_16 != u_16)))
                                        _fail(u_16);
                                      else
                                        o_16 = u_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_16));
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
                              v_16 = t;
                              if(((q_16 != NULL) && (q_16 != v_16)))
                                _fail(v_16);
                              else
                                q_16 = v_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_16), not_null(o_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_16))));
                  }
                }
            }
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
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  m_17 = t;
  k_17 :
  if(match_cons(m_17, sym_Build_1))
    {
      n_17 = ATgetArgument(m_17, 0);
      l_17 :
      if(match_cons(n_17, sym_RootApp_1))
        {
          o_17 = ATgetArgument(n_17, 0);
          t = not_null(o_17);
        }
      else
        {
          if(match_cons(n_17, sym_App_2))
            {
              o_17 = ATgetArgument(n_17, 0);
              p_17 = ATgetArgument(n_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_17)), not_null(o_17));
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
ATerm As_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_As_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      {
        ATerm h_18 = NULL,j_18 = NULL;
        ATerm i_18 = NULL;
        t = SSLgetAnnotations(not_null(b_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        {
          t = not_null(c_18);
          {
            ATerm l_18 = NULL;
            t = p_78(t);
            {
              j_18 = t;
              {
                t = not_null(d_18);
                {
                  ATerm n_18 = NULL;
                  t = q_78(t);
                  {
                    l_18 = t;
                    {
                      ATerm o_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(j_18), not_null(l_18)), not_null(h_18));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_Prim_2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm g_19 = NULL,i_19 = NULL;
        ATerm h_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm k_19 = NULL;
            t = m_74(t);
            {
              i_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm m_19 = NULL;
                  t = n_74(t);
                  {
                    k_19 = t;
                    {
                      ATerm n_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(i_19), not_null(k_19)), not_null(g_19));
                      {
                        n_19 = t;
                        if(((m_19 != NULL) && (m_19 != n_19)))
                          _fail(n_19);
                        else
                          m_19 = n_19;
                      }
                      t = not_null(m_19);
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
ATerm Explode_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Explode_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      {
        ATerm f_20 = NULL,h_20 = NULL;
        ATerm g_20 = NULL;
        t = SSLgetAnnotations(not_null(z_19));
        {
          g_20 = t;
          if(((f_20 != NULL) && (f_20 != g_20)))
            _fail(g_20);
          else
            f_20 = g_20;
        }
        {
          t = not_null(a_20);
          {
            ATerm j_20 = NULL;
            t = l_78(t);
            {
              h_20 = t;
              {
                t = not_null(b_20);
                {
                  ATerm l_20 = NULL;
                  t = m_78(t);
                  {
                    j_20 = t;
                    {
                      ATerm m_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(h_20), not_null(j_20)), not_null(f_20));
                      {
                        m_20 = t;
                        if(((l_20 != NULL) && (l_20 != m_20)))
                          _fail(m_20);
                        else
                          l_20 = m_20;
                      }
                      t = not_null(l_20);
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
ATerm pat_td_1 (ATerm t, ATerm o_114 (ATerm))
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_114(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, o_114);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, b_1);
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, o_114);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  {
                    ATerm o_14 = t;
                    int s_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1(t, o_114);
                          return(t);
                        }
                        t = Explode_2(t, f_1, _id);
                        LocalPopChoice(s_14);
                      }
                    else
                      {
                        t = o_14;
                        {
                          ATerm z_14 = t;
                          int a_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_1 (ATerm t)
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = pat_td_1(t, o_114);
                                  return(t);
                                }
                                t = fetch_1(t, i_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, g_1);
                              LocalPopChoice(a_15);
                            }
                          else
                            {
                              t = z_14;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, o_114);
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
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_Build_1))
    {
      e_21 = ATgetArgument(d_21, 0);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL,h_21 = NULL;
            ATerm l_21 = NULL;
            t = not_null(e_21);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
                i_21 = t;
                v_20 :
                if(match_cons(i_21, sym_RootApp_1))
                  {
                    j_21 = ATgetArgument(i_21, 0);
                    w_20 :
                    if(match_cons(j_21, sym_Build_1))
                      {
                        k_21 = ATgetArgument(j_21, 0);
                        {
                          if(((g_21 != NULL) && (g_21 != k_21)))
                            _fail(k_21);
                          else
                            g_21 = k_21;
                          t = not_null(g_21);
                        }
                      }
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
              t = pat_td_1(t, l_1);
              {
                l_21 = t;
                if(((h_21 != NULL) && (h_21 != l_21)))
                  _fail(l_21);
                else
                  h_21 = l_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_21));
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
              ATerm u_21 = NULL;
              t = not_null(e_21);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
                  q_21 = t;
                  z_20 :
                  if(match_cons(q_21, sym_App_2))
                    {
                      r_21 = ATgetArgument(q_21, 0);
                      t_21 = ATgetArgument(q_21, 1);
                      a_21 :
                      if(match_cons(r_21, sym_Build_1))
                        {
                          s_21 = ATgetArgument(r_21, 0);
                          {
                            if(((o_21 != NULL) && (o_21 != s_21)))
                              _fail(s_21);
                            else
                              o_21 = s_21;
                            {
                              if(((n_21 != NULL) && (n_21 != t_21)))
                                _fail(t_21);
                              else
                                n_21 = t_21;
                              t = not_null(o_21);
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
                  u_21 = t;
                  if(((p_21 != NULL) && (p_21 != u_21)))
                    _fail(u_21);
                  else
                    p_21 = u_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_21));
            }
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
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  ATerm l_22 (ATerm t)
  {
    ATerm i_22 = NULL;
    ATerm j_22 = NULL;
    t = not_null(f_22);
    {
      ATerm i_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_15;
        }
      {
        t = new_0(t);
        {
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(i_22)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_22)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_22))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_22))));
    return(t);
  }
  ATerm m_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_22))));
    return(t);
  }
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Var_1))
    {
      g_22 = ATgetArgument(f_22, 0);
      {
        ATerm k_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_22(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = k_15;
            t = m_22(t);
          }
      }
    }
  else
    {
      t = l_22(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Prim_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      {
        ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
        ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
        t = not_null(v_22);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm n_15 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_15;
              }
            return(t);
          }
          t = fetch_1(t, o_1);
          {
            t = not_null(v_22);
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
                  b_23 = t;
                  q_22 :
                  if(match_cons(b_23, sym__2))
                    {
                      c_23 = ATgetArgument(b_23, 0);
                      d_23 = ATgetArgument(b_23, 1);
                      r_22 :
                      if(match_cons(d_23, sym__2))
                        {
                          e_23 = ATgetArgument(d_23, 0);
                          f_23 = ATgetArgument(d_23, 1);
                          {
                            if(((y_22 != NULL) && (y_22 != c_23)))
                              _fail(c_23);
                            else
                              y_22 = c_23;
                            {
                              if(((z_22 != NULL) && (z_22 != e_23)))
                                _fail(e_23);
                              else
                                z_22 = e_23;
                              if(((a_23 != NULL) && (a_23 != f_23)))
                                _fail(f_23);
                              else
                                a_23 = f_23;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_22), not_null(a_23))));
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
  ATerm r_1 (ATerm t)
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        {
        }
      }
    {
      ATerm s_1 (ATerm t)
      {
        ATerm u_15 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(e_16);
          }
        else
          {
            t = u_15;
            {
              ATerm m_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = m_16;
                  {
                    ATerm x_16 = t;
                    int y_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(y_16);
                      }
                    else
                      {
                        t = x_16;
                        {
                          ATerm z_16 = t;
                          int a_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(a_17);
                            }
                          else
                            {
                              t = z_16;
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
  t = topdown_1(t, r_1);
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
ATerm Strategies_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Strategies_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = e_77(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Specification_1))
    {
      h_24 = ATgetArgument(g_24, 0);
      {
        ATerm k_24 = NULL,m_24 = NULL;
        ATerm l_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
        {
          t = not_null(h_24);
          {
            ATerm o_24 = NULL;
            t = g_77(t);
            {
              m_24 = t;
              {
                ATerm p_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_24)), not_null(k_24));
                {
                  p_24 = t;
                  if(((o_24 != NULL) && (o_24 != p_24)))
                    _fail(p_24);
                  else
                    o_24 = p_24;
                }
                t = not_null(o_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17;
      d_17 = t;
      {
        ATerm v_24 = NULL;
        ATerm w_24 = NULL;
        t = term_e_17;
        {
          t = get_config_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), term_f_17);
          t = geq_0(t);
        }
      }
      t = d_17;
      t = s_106(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
      }
    }
  return(t);
}
ATerm timing_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, c_85);
    }
    t = g_17;
    return(t);
  }
  t = if_verbose3_1(t, u_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm a_114 (ATerm))
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = split_2(t, _id, a_114);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
            e_25 = t;
            z_24 :
            if(match_cons(e_25, sym__2))
              {
                f_25 = ATgetArgument(e_25, 0);
                j_25 = ATgetArgument(e_25, 1);
                a_25 :
                if(match_cons(f_25, sym_SDef_3))
                  {
                    g_25 = ATgetArgument(f_25, 0);
                    h_25 = ATgetArgument(f_25, 1);
                    i_25 = ATgetArgument(f_25, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_25), not_null(h_25), not_null(i_25));
                  }
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
          t = zip_1(t, w_1);
        }
        return(t);
      }
      t = Let_2(t, v_1, _id);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm j_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = split_2(t, _id, a_114);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                  n_25 = t;
                  c_25 :
                  if(match_cons(n_25, sym__2))
                    {
                      o_25 = ATgetArgument(n_25, 0);
                      r_25 = ATgetArgument(n_25, 1);
                      d_25 :
                      if(match_cons(o_25, sym_VarDec_2))
                        {
                          p_25 = ATgetArgument(o_25, 0);
                          q_25 = ATgetArgument(o_25, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_25), not_null(q_25));
                        }
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
                t = zip_1(t, y_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, x_1, _id);
            LocalPopChoice(q_17);
          }
        else
          {
            t = j_17;
            {
              ATerm z_1 (ATerm t)
              {
                t = a_114(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, z_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Rec_2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      {
        ATerm j_26 = NULL,l_26 = NULL;
        ATerm k_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
        {
          t = not_null(e_26);
          {
            ATerm n_26 = NULL;
            t = w_75(t);
            {
              l_26 = t;
              {
                t = not_null(f_26);
                {
                  ATerm p_26 = NULL;
                  t = x_75(t);
                  {
                    n_26 = t;
                    {
                      ATerm q_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_26), not_null(n_26)), not_null(j_26));
                      {
                        q_26 = t;
                        if(((p_26 != NULL) && (p_26 != q_26)))
                          _fail(q_26);
                        else
                          p_26 = q_26;
                      }
                      t = not_null(p_26);
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
ATerm SDef_3 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_SDef_3))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      g_27 = ATgetArgument(d_27, 2);
      {
        ATerm l_27 = NULL,n_27 = NULL;
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm p_27 = NULL;
            t = a_76(t);
            {
              n_27 = t;
              {
                t = not_null(f_27);
                {
                  ATerm r_27 = NULL;
                  t = b_76(t);
                  {
                    p_27 = t;
                    {
                      t = not_null(g_27);
                      {
                        ATerm t_27 = NULL;
                        t = c_76(t);
                        {
                          r_27 = t;
                          {
                            ATerm u_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_27), not_null(p_27), not_null(r_27)), not_null(l_27));
                            {
                              u_27 = t;
                              if(((t_27 != NULL) && (t_27 != u_27)))
                                _fail(u_27);
                              else
                                t_27 = u_27;
                            }
                            t = not_null(t_27);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_Let_2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        ATerm n_28 = NULL,p_28 = NULL;
        ATerm o_28 = NULL;
        t = SSLgetAnnotations(not_null(h_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
        {
          t = not_null(i_28);
          {
            ATerm r_28 = NULL;
            t = y_75(t);
            {
              p_28 = t;
              {
                t = not_null(j_28);
                {
                  ATerm t_28 = NULL;
                  t = z_75(t);
                  {
                    r_28 = t;
                    {
                      ATerm u_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_28), not_null(r_28)), not_null(n_28));
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
ATerm sboundin_3 (ATerm t, ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_114, b_114);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_114, d_114, b_114);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = Rec_2(t, d_114, b_114);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym_Rec_2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_SDef_3))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      p_29 = ATgetArgument(m_29, 2);
      {
        t = not_null(o_29);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
            m_30 = t;
            k_29 :
            if(match_cons(m_30, sym_VarDec_2))
              {
                n_30 = ATgetArgument(m_30, 0);
                o_30 = ATgetArgument(m_30, 1);
                t = not_null(n_30);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, a_2);
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
  ATerm w_30 = NULL,x_30 = NULL,b_31 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Let_2))
    {
      x_30 = ATgetArgument(w_30, 0);
      b_31 = ATgetArgument(w_30, 1);
      {
        t = not_null(x_30);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
            e_31 = t;
            u_30 :
            if(match_cons(e_31, sym_SDef_3))
              {
                f_31 = ATgetArgument(e_31, 0);
                g_31 = ATgetArgument(e_31, 1);
                h_31 = ATgetArgument(e_31, 2);
                t = not_null(f_31);
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
ATerm SVar_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm s_31 = NULL,y_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_SVar_1))
    {
      y_31 = ATgetArgument(s_31, 0);
      {
        ATerm b_32 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(s_31));
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
            t = v_75(t);
            {
              d_32 = t;
              {
                ATerm g_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(d_32)), not_null(b_32));
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
ATerm srename_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, c_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm w_110 (ATerm, ATerm (ATerm)), ATerm x_110 (ATerm), ATerm y_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_110 (ATerm, ATerm (ATerm)))
{
  ATerm r_32 = NULL;
  r_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_32), (ATerm) ATempty);
    {
      ATerm u_32 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm z_17 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, w_110);
              LocalPopChoice(e_18);
            }
          else
            {
              t = z_17;
              {
                t = RnBinding_2(t, x_110, z_110);
                t = DistBinding_2(t, u_32, y_110);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, d_2);
        return(t);
      }
      t = u_32(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm v_32 (ATerm t, ATerm w_32 (ATerm))
  {
    t = Scope_2(t, w_32, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, v_32);
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  y_32 :
  if(match_cons(a_33, sym_Var_1))
    {
      b_33 = ATgetArgument(a_33, 0);
      z_32 :
      if(match_cons(b_33, sym_ListVar_1))
        {
          c_33 = ATgetArgument(b_33, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33));
        }
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
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_Build_1))
    {
      u_33 = ATgetArgument(t_33, 0);
      {
        ATerm w_33 = NULL,x_33 = NULL;
        ATerm j_34 = NULL;
        t = not_null(u_33);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
            y_33 = t;
            h_33 :
            if(match_cons(y_33, sym_Op_2))
              {
                z_33 = ATgetArgument(y_33, 0);
                a_34 = ATgetArgument(y_33, 1);
                i_33 :
                if(match_string(z_33, "Cons"))
                  {
                    j_33 :
                    if(((ATgetType(a_34) == AT_LIST) && !(ATisEmpty(a_34))))
                      {
                        b_34 = ATgetFirst((ATermList) a_34);
                        e_34 = (ATerm) ATgetNext((ATermList) a_34);
                        k_33 :
                        if(match_cons(b_34, sym_Var_1))
                          {
                            c_34 = ATgetArgument(b_34, 0);
                            l_33 :
                            if(match_cons(c_34, sym_ListVar_1))
                              {
                                d_34 = ATgetArgument(c_34, 0);
                                m_33 :
                                if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
                                  {
                                    f_34 = ATgetFirst((ATermList) e_34);
                                    i_34 = (ATerm) ATgetNext((ATermList) e_34);
                                    n_33 :
                                    if(match_cons(f_34, sym_Op_2))
                                      {
                                        g_34 = ATgetArgument(f_34, 0);
                                        h_34 = ATgetArgument(f_34, 1);
                                        o_33 :
                                        if(match_string(g_34, "Nil"))
                                          {
                                            p_33 :
                                            if(((ATgetType(h_34) == AT_LIST) && ATisEmpty(h_34)))
                                              {
                                                q_33 :
                                                if(((ATgetType(i_34) == AT_LIST) && ATisEmpty(i_34)))
                                                  {
                                                    {
                                                      if(((w_33 != NULL) && (w_33 != d_34)))
                                                        _fail(d_34);
                                                      else
                                                        w_33 = d_34;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = oncetd_1(t, e_2);
          {
            j_34 = t;
            if(((x_33 != NULL) && (x_33 != j_34)))
              _fail(j_34);
            else
              x_33 = j_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_33));
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
  ATerm n_35 = NULL,o_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_Match_1))
    {
      o_35 = ATgetArgument(n_35, 0);
      {
        ATerm q_35 = NULL,r_35 = NULL;
        ATerm d_36 = NULL;
        t = not_null(o_35);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
            s_35 = t;
            t_34 :
            if(match_cons(s_35, sym_Op_2))
              {
                t_35 = ATgetArgument(s_35, 0);
                u_35 = ATgetArgument(s_35, 1);
                u_34 :
                if(match_string(t_35, "Cons"))
                  {
                    v_34 :
                    if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
                      {
                        v_35 = ATgetFirst((ATermList) u_35);
                        y_35 = (ATerm) ATgetNext((ATermList) u_35);
                        w_34 :
                        if(match_cons(v_35, sym_Var_1))
                          {
                            w_35 = ATgetArgument(v_35, 0);
                            x_34 :
                            if(match_cons(w_35, sym_ListVar_1))
                              {
                                x_35 = ATgetArgument(w_35, 0);
                                y_34 :
                                if(((ATgetType(y_35) == AT_LIST) && !(ATisEmpty(y_35))))
                                  {
                                    z_35 = ATgetFirst((ATermList) y_35);
                                    c_36 = (ATerm) ATgetNext((ATermList) y_35);
                                    h_35 :
                                    if(match_cons(z_35, sym_Op_2))
                                      {
                                        a_36 = ATgetArgument(z_35, 0);
                                        b_36 = ATgetArgument(z_35, 1);
                                        i_35 :
                                        if(match_string(a_36, "Nil"))
                                          {
                                            j_35 :
                                            if(((ATgetType(b_36) == AT_LIST) && ATisEmpty(b_36)))
                                              {
                                                k_35 :
                                                if(((ATgetType(c_36) == AT_LIST) && ATisEmpty(c_36)))
                                                  {
                                                    {
                                                      if(((q_35 != NULL) && (q_35 != x_35)))
                                                        _fail(x_35);
                                                      else
                                                        q_35 = x_35;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            d_36 = t;
            if(((r_35 != NULL) && (r_35 != d_36)))
              _fail(d_36);
            else
              r_35 = d_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_35));
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
  ATerm l_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Wld_0))
    {
      ATerm n_36 = NULL,p_36 = NULL;
      ATerm f_18;
      f_18 = t;
      {
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(l_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
      }
      t = f_18;
      {
        ATerm q_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(n_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        t = not_null(p_36);
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
  ATerm g_18 = t;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm k_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(m_18);
          }
        else
          {
            t = k_18;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, g_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm b_37 = NULL,e_37 = NULL,f_37 = NULL,k_37 = NULL;
  b_37 = t;
  a_37 :
  if(match_cons(b_37, sym_Con_3))
    {
      e_37 = ATgetArgument(b_37, 0);
      f_37 = ATgetArgument(b_37, 1);
      k_37 = ATgetArgument(b_37, 2);
      {
        ATerm w_37 = NULL,c_38 = NULL;
        ATerm x_37 = NULL;
        t = SSLgetAnnotations(not_null(b_37));
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
        {
          t = not_null(e_37);
          {
            ATerm e_38 = NULL;
            t = c_78(t);
            {
              c_38 = t;
              {
                t = not_null(f_37);
                {
                  ATerm n_38 = NULL;
                  t = d_78(t);
                  {
                    e_38 = t;
                    {
                      t = not_null(k_37);
                      {
                        ATerm p_38 = NULL;
                        t = e_78(t);
                        {
                          n_38 = t;
                          {
                            ATerm q_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(c_38), not_null(e_38), not_null(n_38)), not_null(w_37));
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
  ATerm p_18 = t;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, h_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  z_38 :
  if(match_cons(b_39, sym_SRule_1))
    {
      c_39 = ATgetArgument(b_39, 0);
      a_39 :
      if(match_cons(c_39, sym_StratRule_3))
        {
          d_39 = ATgetArgument(c_39, 0);
          e_39 = ATgetArgument(c_39, 1);
          f_39 = ATgetArgument(c_39, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_39)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_39))), not_null(d_39)));
        }
      else
        {
          if(match_cons(c_39, sym_Rule_3))
            {
              d_39 = ATgetArgument(c_39, 0);
              e_39 = ATgetArgument(c_39, 1);
              f_39 = ATgetArgument(c_39, 2);
              {
                t = not_null(d_39);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_39);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_39))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_39))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_39))));
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  e_40 = t;
  c_40 :
  if(match_cons(e_40, sym_SRule_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      d_40 :
      if(match_cons(f_40, sym_Rule_3))
        {
          g_40 = ATgetArgument(f_40, 0);
          h_40 = ATgetArgument(f_40, 1);
          i_40 = ATgetArgument(f_40, 2);
          {
            ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
            ATerm u_40 = NULL;
            ATerm a_41 = NULL;
            t = new_0(t);
            {
              u_40 = t;
              {
                if(((r_40 != NULL) && (r_40 != u_40)))
                  _fail(u_40);
                else
                  r_40 = u_40;
                {
                  t = not_null(g_40);
                  {
                    ATerm i_41 = NULL;
                    ATerm i_2 (ATerm t)
                    {
                      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
                      v_40 = t;
                      t_39 :
                      if(match_cons(v_40, sym_Con_3))
                        {
                          w_40 = ATgetArgument(v_40, 0);
                          y_40 = ATgetArgument(v_40, 1);
                          z_40 = ATgetArgument(v_40, 2);
                          u_39 :
                          if(match_cons(w_40, sym_Var_1))
                            {
                              x_40 = ATgetArgument(w_40, 0);
                              {
                                if(((q_40 != NULL) && (q_40 != x_40)))
                                  _fail(x_40);
                                else
                                  q_40 = x_40;
                                {
                                  if(((o_40 != NULL) && (o_40 != y_40)))
                                    _fail(y_40);
                                  else
                                    o_40 = y_40;
                                  {
                                    if(((m_40 != NULL) && (m_40 != z_40)))
                                      _fail(z_40);
                                    else
                                      m_40 = z_40;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_40));
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
                    t = oncetd_1(t, i_2);
                    {
                      a_41 = t;
                      {
                        if(((s_40 != NULL) && (s_40 != a_41)))
                          _fail(a_41);
                        else
                          s_40 = a_41;
                        {
                          t = not_null(h_40);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
                              b_41 = t;
                              x_39 :
                              if(match_cons(b_41, sym_Con_3))
                                {
                                  c_41 = ATgetArgument(b_41, 0);
                                  e_41 = ATgetArgument(b_41, 1);
                                  f_41 = ATgetArgument(b_41, 2);
                                  y_39 :
                                  if(match_cons(c_41, sym_Var_1))
                                    {
                                      d_41 = ATgetArgument(c_41, 0);
                                      z_39 :
                                      if(match_cons(f_41, sym_Call_2))
                                        {
                                          g_41 = ATgetArgument(f_41, 0);
                                          h_41 = ATgetArgument(f_41, 1);
                                          a_40 :
                                          if(((ATgetType(h_41) == AT_LIST) && ATisEmpty(h_41)))
                                            {
                                              {
                                                if(((q_40 != NULL) && (q_40 != d_41)))
                                                  _fail(d_41);
                                                else
                                                  q_40 = d_41;
                                                {
                                                  if(((p_40 != NULL) && (p_40 != e_41)))
                                                    _fail(e_41);
                                                  else
                                                    p_40 = e_41;
                                                  {
                                                    if(((n_40 != NULL) && (n_40 != g_41)))
                                                      _fail(g_41);
                                                    else
                                                      n_40 = g_41;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_40));
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
                            t = oncetd_1(t, j_2);
                            {
                              i_41 = t;
                              if(((t_40 != NULL) && (t_40 != i_41)))
                                _fail(i_41);
                              else
                                t_40 = i_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_40)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_40), not_null(t_40), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_40), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(n_40), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_40), not_null(p_40), term_j_15)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_40)))))));
          }
        }
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
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
      }
    }
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Scope_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        ATerm a_42 = NULL;
        ATerm e_42 = NULL;
        t = not_null(w_41);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm y_18 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_42 = NULL,c_42 = NULL;
                b_42 = t;
                s_41 :
                if(match_cons(b_42, sym_ListVar_1))
                  {
                    c_42 = ATgetArgument(b_42, 0);
                    t = not_null(c_42);
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(d_19);
              }
            else
              {
                t = y_18;
                {
                }
              }
            return(t);
          }
          t = map_1(t, k_2);
          {
            e_42 = t;
            if(((a_42 != NULL) && (a_42 != e_42)))
              _fail(e_42);
            else
              a_42 = e_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_42), not_null(x_41));
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
  ATerm l_2 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListVarScope_0(t);
            LocalPopChoice(l_19);
          }
        else
          {
            t = j_19;
            t = desugarRule_0(t);
          }
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
        }
      }
    {
      ATerm m_2 (ATerm t)
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(r_19);
              }
            else
              {
                t = q_19;
                {
                  ATerm s_19 = t;
                  int t_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(t_19);
                    }
                  else
                    {
                      t = s_19;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, m_2);
    }
    return(t);
  }
  t = topdown_1(t, l_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym_SDef_3))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      o_42 = ATgetArgument(l_42, 2);
      {
        ATerm s_42 = NULL;
        ATerm t_42 = NULL;
        t = not_null(o_42);
        {
          t = tvars_0(t);
          {
            t_42 = t;
            if(((s_42 != NULL) && (s_42 != t_42)))
              _fail(t_42);
            else
              s_42 = t_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_42), not_null(n_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_42), not_null(o_42)));
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
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym_RDef_3))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      c_43 = ATgetArgument(z_42, 2);
      {
        ATerm g_43 = NULL;
        ATerm h_43 = NULL;
        t = not_null(c_43);
        {
          t = tvars_0(t);
          {
            h_43 = t;
            if(((g_43 != NULL) && (g_43 != h_43)))
              _fail(h_43);
            else
              g_43 = h_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_43), not_null(b_43), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_43), (ATerm) ATmakeAppl(sym_SRule_1, not_null(c_43))));
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
  ATerm l_43 = NULL;
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_43)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  y_43 = t;
  v_43 :
  if(match_cons(y_43, sym_OpDecl_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      w_43 :
      if(match_cons(a_44, sym_FunType_2))
        {
          b_44 = ATgetArgument(a_44, 0);
          x_43 = ATgetArgument(a_44, 1);
          {
            ATerm f_44 = NULL,g_44 = NULL,r_44 = NULL;
            ATerm u_19;
            u_19 = t;
            {
              ATerm l_44 = NULL,m_44 = NULL,q_44 = NULL;
              t = not_null(b_44);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm h_44 = NULL,j_44 = NULL;
                  t = new_0(t);
                  {
                    ATerm v_19;
                    v_19 = t;
                    {
                      ATerm i_44 = NULL;
                      i_44 = t;
                      if(((h_44 != NULL) && (h_44 != i_44)))
                        _fail(i_44);
                      else
                        h_44 = i_44;
                    }
                    t = v_19;
                    {
                      ATerm k_44 = NULL;
                      k_44 = t;
                      if(((j_44 != NULL) && (j_44 != k_44)))
                        _fail(k_44);
                      else
                        j_44 = k_44;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_44), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20)), not_null(j_44));
                    }
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  t = unzip_1(t, _id);
                  {
                    l_44 = t;
                    t_43 :
                    if(match_cons(l_44, sym__2))
                      {
                        m_44 = ATgetArgument(l_44, 0);
                        q_44 = ATgetArgument(l_44, 1);
                        {
                          if(((f_44 != NULL) && (f_44 != m_44)))
                            _fail(m_44);
                          else
                            f_44 = m_44;
                          if(((g_44 != NULL) && (g_44 != q_44)))
                            _fail(q_44);
                          else
                            g_44 = q_44;
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
            t = u_19;
            {
              ATerm s_44 = NULL;
              t = not_null(g_44);
              {
                t = map_1(t, MkCall_0);
                {
                  s_44 = t;
                  if(((r_44 != NULL) && (r_44 != s_44)))
                    _fail(s_44);
                  else
                    r_44 = s_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_43), not_null(f_44), (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_43), not_null(r_44)));
            }
          }
        }
      else
        {
          if(match_cons(a_44, sym_ConstType_1))
            {
              b_44 = ATgetArgument(a_44, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_43), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_43), (ATerm) ATempty));
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
  ATerm e_45 = NULL,f_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym_Constructors_1))
    {
      f_45 = ATgetArgument(e_45, 0);
      {
        t = not_null(f_45);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(e_45, sym_Sorts_1))
        {
          f_45 = ATgetArgument(e_45, 0);
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  u_45 = t;
  o_45 :
  if(match_cons(u_45, sym_Specification_1))
    {
      v_45 = ATgetArgument(u_45, 0);
      p_45 :
      if(((ATgetType(v_45) == AT_LIST) && !(ATisEmpty(v_45))))
        {
          w_45 = ATgetFirst((ATermList) v_45);
          y_45 = (ATerm) ATgetNext((ATermList) v_45);
          q_45 :
          if(match_cons(w_45, sym_Signature_1))
            {
              x_45 = ATgetArgument(w_45, 0);
              r_45 :
              if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
                {
                  z_45 = ATgetFirst((ATermList) y_45);
                  b_46 = (ATerm) ATgetNext((ATermList) y_45);
                  s_45 :
                  if(match_cons(z_45, sym_Strategies_1))
                    {
                      a_46 = ATgetArgument(z_45, 0);
                      t_45 :
                      if(((ATgetType(b_46) == AT_LIST) && ATisEmpty(b_46)))
                        {
                          {
                            ATerm e_46 = NULL;
                            ATerm h_46 = NULL,j_46 = NULL,n_46 = NULL;
                            ATerm d_20;
                            d_20 = t;
                            {
                              ATerm i_46 = NULL;
                              t = not_null(x_45);
                              {
                                t = congdefs_0(t);
                                {
                                  i_46 = t;
                                  if(((h_46 != NULL) && (h_46 != i_46)))
                                    _fail(i_46);
                                  else
                                    h_46 = i_46;
                                }
                              }
                            }
                            t = d_20;
                            {
                              ATerm k_46 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(a_46)), (ATerm) ATmakeAppl(sym_RDef_3, term_e_20, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_k_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20))), (ATerm) ATmakeAppl(sym_VarDec_2, term_i_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20))), (ATerm) ATmakeAppl(sym_Rule_3, term_r_20, term_y_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_x_21), term_m_21)))));
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  ATerm y_21 = t;
                                  int z_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(z_21);
                                    }
                                  else
                                    {
                                      t = y_21;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, o_2);
                                {
                                  k_46 = t;
                                  if(((j_46 != NULL) && (j_46 != k_46)))
                                    _fail(k_46);
                                  else
                                    j_46 = k_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_46), not_null(j_46));
                                {
                                  ATerm a_22 = t;
                                  int b_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = conc_two_lists_0(t);
                                      LocalPopChoice(b_22);
                                    }
                                  else
                                    {
                                      t = a_22;
                                      t = conc_more_lists_0(t);
                                    }
                                  {
                                    n_46 = t;
                                    if(((e_46 != NULL) && (e_46 != n_46)))
                                      _fail(n_46);
                                    else
                                      e_46 = n_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_46))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(x_45))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm y_46 = NULL;
  ATerm a_47 = NULL;
  y_46 = t;
  {
    ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
    t = term_c_22;
    {
      ATerm p_2 (ATerm t)
      {
        t = term_d_22;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        b_47 = t;
        w_46 :
        if(match_cons(b_47, sym_Defined_2))
          {
            c_47 = ATgetArgument(b_47, 0);
            d_47 = ATgetArgument(b_47, 1);
            x_46 :
            if(match_string(c_47, "n_1"))
              {
                if(((a_47 != NULL) && (a_47 != d_47)))
                  _fail(d_47);
                else
                  a_47 = d_47;
              }
            else
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
    t = not_null(a_47);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  t = SSL_int_to_string(not_null(h_47));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym_Op_2))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      {
        ATerm n_48 = NULL,o_48 = NULL;
        ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
        t = term_h_22;
        {
          ATerm q_2 (ATerm t)
          {
            t = term_k_22;
            return(t);
          }
          t = rewrite_1(t, q_2);
          {
            p_48 = t;
            p_47 :
            if(match_cons(p_48, sym_Defined_3))
              {
                q_48 = ATgetArgument(p_48, 0);
                r_48 = ATgetArgument(p_48, 1);
                s_48 = ATgetArgument(p_48, 2);
                q_47 :
                if(match_string(q_48, "q_1"))
                  {
                    ATerm t_48 = NULL;
                    if(((n_48 != NULL) && (n_48 != r_48)))
                      _fail(r_48);
                    else
                      n_48 = r_48;
                    {
                      if(((o_48 != NULL) && (o_48 != s_48)))
                        _fail(s_48);
                      else
                        o_48 = s_48;
                      {
                        ATerm u_48 = NULL;
                        t = not_null(j_48);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              u_48 = t;
                              if(((t_48 != NULL) && (t_48 != u_48)))
                                _fail(u_48);
                              else
                                t_48 = u_48;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), not_null(t_48)), term_g_23), not_null(i_48)), term_x_22), term_w_22), not_null(o_48)), term_p_22), not_null(n_48)), term_o_22));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_48), not_null(j_48));
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
  ATerm c_49 = NULL,i_49 = NULL,k_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym__2))
    {
      i_49 = ATgetArgument(c_49, 0);
      k_49 = ATgetArgument(c_49, 1);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_49), not_null(k_49));
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = SSL_subtr(not_null(i_49), not_null(k_49));
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
  ATerm r_2 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
    w_49 = t;
    p_49 :
    if(match_cons(w_49, sym__2))
      {
        x_49 = ATgetArgument(w_49, 0);
        y_49 = ATgetArgument(w_49, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_49), not_null(y_49), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
    b_50 = t;
    r_49 :
    if(match_cons(b_50, sym__3))
      {
        c_50 = ATgetArgument(b_50, 0);
        d_50 = ATgetArgument(b_50, 1);
        e_50 = ATgetArgument(b_50, 2);
        s_49 :
        if(match_int(c_50, 0))
          {
            t = not_null(e_50);
          }
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
  ATerm t_2 (ATerm t)
  {
    ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
    h_50 = t;
    v_49 :
    if(match_cons(h_50, sym__3))
      {
        i_50 = ATgetArgument(h_50, 0);
        j_50 = ATgetArgument(h_50, 1);
        k_50 = ATgetArgument(h_50, 2);
        {
          ATerm o_50 = NULL;
          ATerm k_23;
          k_23 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), term_l_23);
            t = geq_0(t);
          }
          t = k_23;
          {
            ATerm p_50 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), term_l_23);
            {
              t = subt_0(t);
              {
                p_50 = t;
                if(((o_50 != NULL) && (o_50 != p_50)))
                  _fail(p_50);
                else
                  o_50 = p_50;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_50), not_null(j_50), (ATerm) ATinsert(CheckATermList(not_null(k_50)), not_null(j_50)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  b_51 :
  if(match_cons(d_51, sym_Op_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      c_51 :
      if(match_string(e_51, ""))
        {
          ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
          ATerm p_23;
          p_23 = t;
          {
            ATerm l_51 = NULL;
            t = not_null(f_51);
            {
              ATerm m_51 = NULL;
              t = length_0(t);
              {
                l_51 = t;
                {
                  if(((i_51 != NULL) && (i_51 != l_51)))
                    _fail(l_51);
                  else
                    i_51 = l_51;
                  {
                    ATerm n_51 = NULL,p_51 = NULL;
                    t = term_l_13;
                    {
                      m_51 = t;
                      {
                        if(((h_51 != NULL) && (h_51 != m_51)))
                          _fail(m_51);
                        else
                          h_51 = m_51;
                        {
                          ATerm q_23;
                          q_23 = t;
                          {
                            ATerm o_51 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_51), term_x_23);
                            {
                              t = copy_0(t);
                              {
                                o_51 = t;
                                if(((n_51 != NULL) && (n_51 != o_51)))
                                  _fail(o_51);
                                else
                                  n_51 = o_51;
                              }
                            }
                          }
                          t = q_23;
                          {
                            ATerm q_51 = NULL,s_51 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, not_null(n_51), term_x_23));
                            {
                              p_51 = t;
                              {
                                if(((j_51 != NULL) && (j_51 != p_51)))
                                  _fail(p_51);
                                else
                                  j_51 = p_51;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm r_51 = NULL;
                                    ATerm y_23 = t;
                                    int z_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(z_23);
                                      }
                                    else
                                      {
                                        t = y_23;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      r_51 = t;
                                      if(((q_51 != NULL) && (q_51 != r_51)))
                                        _fail(r_51);
                                      else
                                        q_51 = r_51;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(q_51)), not_null(j_51));
                                      {
                                        s_51 = t;
                                        {
                                          if(((k_51 != NULL) && (k_51 != s_51)))
                                            _fail(s_51);
                                          else
                                            k_51 = s_51;
                                          {
                                            ATerm a_24;
                                            a_24 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_b_24, not_null(k_51)));
                                              {
                                                ATerm u_2 (ATerm t)
                                                {
                                                  t = term_d_22;
                                                  return(t);
                                                }
                                                t = assert_1(t, u_2);
                                              }
                                            }
                                            t = a_24;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = p_23;
        }
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  i_52 :
  if(match_cons(q_52, sym_Op_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_52 = NULL;
            t = not_null(s_52);
            {
              t = length_0(t);
              {
                y_52 = t;
                {
                  ATerm a_53 = NULL,b_53 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_52)));
                  {
                    ATerm v_2 (ATerm t)
                    {
                      t = term_e_24;
                      return(t);
                    }
                    t = rewrite_1(t, v_2);
                    {
                      a_53 = t;
                      d_52 :
                      if(match_cons(a_53, sym_Defined_1))
                        {
                          b_53 = ATgetArgument(a_53, 0);
                          e_52 :
                          if(!(match_string(b_53, "k_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_52), (ATerm) ATempty);
                }
              }
            }
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm p_53 = NULL;
              t = not_null(s_52);
              {
                t = length_0(t);
                {
                  p_53 = t;
                  {
                    ATerm r_53 = NULL,s_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_53)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_e_24;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        r_53 = t;
                        g_52 :
                        if(match_cons(r_53, sym_Defined_1))
                          {
                            s_53 = ATgetArgument(r_53, 0);
                            h_52 :
                            if(!(match_string(s_53, "h_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_52), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm b_54 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_89(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm n_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_54(t);
                LocalPopChoice(q_24);
              }
            else
              {
                t = n_24;
                {
                }
              }
            return(t);
          }
          t = _all(t, x_2);
        }
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = _some(t, b_54);
      }
    return(t);
  }
  t = b_54(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm l_114 (ATerm), ATerm m_114 (ATerm))
{
  ATerm e_54 = NULL,f_54 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_k_22;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm r_24;
    r_24 = t;
    {
      ATerm g_54 = NULL;
      ATerm h_54 = NULL;
      t = l_114(t);
      {
        g_54 = t;
        {
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
          {
            t = m_114(t);
            {
              h_54 = t;
              if(((e_54 != NULL) && (e_54 != h_54)))
                _fail(h_54);
              else
                e_54 = h_54;
            }
          }
        }
      }
    }
    t = r_24;
    {
      ATerm s_24;
      s_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATmakeAppl(sym_Defined_3, term_t_24, not_null(e_54), not_null(f_54)));
        {
          ATerm a_3 (ATerm t)
          {
            t = term_k_22;
            return(t);
          }
          t = assert_1(t, a_3);
        }
      }
      t = s_24;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm u_24 = t;
          if((PushChoice() == 0))
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_24;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, b_3);
      }
    }
    return(t);
  }
  t = scope_2(t, y_2, z_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_SDef_3))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      q_54 = ATgetArgument(n_54, 2);
      {
        t = not_null(q_54);
        {
          ATerm c_3 (ATerm t)
          {
            t = not_null(o_54);
            return(t);
          }
          ATerm d_3 (ATerm t)
          {
            t = term_b_25;
            return(t);
          }
          t = check_constructors_p__2(t, c_3, d_3);
        }
      }
    }
  else
    {
      if(match_cons(n_54, sym_RDef_3))
        {
          o_54 = ATgetArgument(n_54, 0);
          p_54 = ATgetArgument(n_54, 1);
          q_54 = ATgetArgument(n_54, 2);
          {
            t = not_null(q_54);
            {
              ATerm e_3 (ATerm t)
              {
                t = not_null(o_54);
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_k_25;
                return(t);
              }
              t = check_constructors_p__2(t, e_3, f_3);
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
  ATerm g_3 (ATerm t)
  {
    t = term_l_25;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_l_23;
    return(t);
  }
  t = foldr_3(t, g_3, add_0, h_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  h_55 = t;
  e_55 :
  if(match_cons(h_55, sym_OpDecl_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      f_55 :
      if(match_cons(j_55, sym_FunType_2))
        {
          k_55 = ATgetArgument(j_55, 0);
          g_55 = ATgetArgument(j_55, 1);
          {
            ATerm o_55 = NULL;
            ATerm m_25;
            m_25 = t;
            {
              ATerm p_55 = NULL;
              t = not_null(k_55);
              {
                t = length_0(t);
                {
                  p_55 = t;
                  if(((o_55 != NULL) && (o_55 != p_55)))
                    _fail(p_55);
                  else
                    o_55 = p_55;
                }
              }
            }
            t = m_25;
            {
              ATerm s_25;
              s_25 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_55))), term_u_25);
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = term_e_24;
                    return(t);
                  }
                  t = assert_1(t, i_3);
                }
              }
              t = s_25;
            }
          }
        }
      else
        {
          if(match_cons(j_55, sym_ConstType_1))
            {
              k_55 = ATgetArgument(j_55, 0);
              {
                ATerm x_55 = NULL;
                ATerm v_25;
                v_25 = t;
                {
                  ATerm y_55 = NULL;
                  t = term_l_25;
                  {
                    y_55 = t;
                    if(((x_55 != NULL) && (x_55 != y_55)))
                      _fail(y_55);
                    else
                      x_55 = y_55;
                  }
                }
                t = v_25;
                {
                  ATerm w_25;
                  w_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_55))), term_y_25);
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = term_e_24;
                        return(t);
                      }
                      t = assert_1(t, j_3);
                    }
                  }
                  t = w_25;
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,g_58 = NULL,m_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  m_57 = t;
  p_56 :
  if(match_cons(m_57, sym_Specification_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      w_56 :
      if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
        {
          o_57 = ATgetFirst((ATermList) n_57);
          q_58 = (ATerm) ATgetNext((ATermList) n_57);
          x_56 :
          if(match_cons(o_57, sym_Signature_1))
            {
              p_57 = ATgetArgument(o_57, 0);
              y_56 :
              if(((ATgetType(p_57) == AT_LIST) && !(ATisEmpty(p_57))))
                {
                  g_58 = ATgetFirst((ATermList) p_57);
                  p_58 = (ATerm) ATgetNext((ATermList) p_57);
                  z_56 :
                  if(match_cons(g_58, sym_Constructors_1))
                    {
                      m_58 = ATgetArgument(g_58, 0);
                      a_57 :
                      if(((ATgetType(p_58) == AT_LIST) && ATisEmpty(p_58)))
                        {
                          b_57 :
                          if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                            {
                              r_58 = ATgetFirst((ATermList) q_58);
                              t_58 = (ATerm) ATgetNext((ATermList) q_58);
                              j_57 :
                              if(match_cons(r_58, sym_Strategies_1))
                                {
                                  s_58 = ATgetArgument(r_58, 0);
                                  k_57 :
                                  if(((ATgetType(t_58) == AT_LIST) && ATisEmpty(t_58)))
                                    {
                                      {
                                        ATerm w_58 = NULL,x_58 = NULL,b_59 = NULL;
                                        ATerm z_25;
                                        z_25 = t;
                                        {
                                          ATerm y_58 = NULL;
                                          ATerm z_58 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_58)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_23), term_x_23))), term_b_26);
                                          {
                                            y_58 = t;
                                            {
                                              if(((w_58 != NULL) && (w_58 != y_58)))
                                                _fail(y_58);
                                              else
                                                w_58 = y_58;
                                              {
                                                t = not_null(w_58);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(s_58);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        z_58 = t;
                                                        n_56 :
                                                        if(((ATgetType(z_58) == AT_LIST) && ATisEmpty(z_58)))
                                                          {
                                                            {
                                                              ATerm a_59 = NULL;
                                                              ATerm g_26 = t;
                                                              int h_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(h_26);
                                                                }
                                                              else
                                                                {
                                                                  t = g_26;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                a_59 = t;
                                                                if(((x_58 != NULL) && (x_58 != a_59)))
                                                                  _fail(a_59);
                                                                else
                                                                  x_58 = a_59;
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
                                        t = z_25;
                                        {
                                          ATerm c_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_58), not_null(w_58));
                                          {
                                            ATerm i_26 = t;
                                            int m_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = conc_two_lists_0(t);
                                                LocalPopChoice(m_26);
                                              }
                                            else
                                              {
                                                t = i_26;
                                                t = conc_more_lists_0(t);
                                              }
                                            {
                                              c_59 = t;
                                              if(((b_59 != NULL) && (b_59 != c_59)))
                                                _fail(c_59);
                                              else
                                                b_59 = c_59;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_58))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(b_59))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm b_113 (ATerm))
{
  ATerm o_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26;
      s_26 = t;
      {
        ATerm t_26 = t;
        if((PushChoice() == 0))
          {
            ATerm j_59 = NULL;
            t = b_113(t);
            {
              j_59 = t;
              i_59 :
              if(((ATgetType(j_59) == AT_LIST) && ATisEmpty(j_59)))
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
            t = t_26;
          }
      }
      t = s_26;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = ExpOverlay_1(t, b_113);
            return(t);
          }
          t = try_1(t, l_3);
          return(t);
        }
        t = topdown_1(t, k_3);
      }
      LocalPopChoice(r_26);
    }
  else
    {
      t = o_26;
      {
      }
    }
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm s_59 = NULL,d_60 = NULL,e_60 = NULL;
  d_60 = t;
  r_59 :
  if(match_cons(d_60, sym_BuildDefault_1))
    {
      e_60 = ATgetArgument(d_60, 0);
      t = term_j_15;
    }
  else
    {
      if(match_cons(d_60, sym_Real_1))
        {
          e_60 = ATgetArgument(d_60, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(e_60)));
        }
      else
        {
          if(match_cons(d_60, sym_Int_1))
            {
              e_60 = ATgetArgument(d_60, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(e_60)));
            }
          else
            {
              if(match_cons(d_60, sym_Str_1))
                {
                  e_60 = ATgetArgument(d_60, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(e_60)));
                }
              else
                {
                  if(match_cons(d_60, sym_Anno_2))
                    {
                      e_60 = ATgetArgument(d_60, 0);
                      s_59 = ATgetArgument(d_60, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_59)), not_null(e_60)));
                    }
                  else
                    {
                      if(match_cons(d_60, sym_Op_2))
                        {
                          e_60 = ATgetArgument(d_60, 0);
                          s_59 = ATgetArgument(d_60, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_60)), not_null(s_59));
                        }
                      else
                        {
                          if(match_cons(d_60, sym_Var_1))
                            {
                              e_60 = ATgetArgument(d_60, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_60)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym_Op_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      {
        ATerm t_68 = NULL,v_68 = NULL;
        ATerm u_68 = NULL;
        t = SSLgetAnnotations(not_null(n_68));
        {
          u_68 = t;
          if(((t_68 != NULL) && (t_68 != u_68)))
            _fail(u_68);
          else
            t_68 = u_68;
        }
        {
          t = not_null(o_68);
          {
            ATerm z_72 = NULL;
            t = q_76(t);
            {
              v_68 = t;
              {
                t = not_null(p_68);
                {
                  ATerm d_73 = NULL;
                  t = r_76(t);
                  {
                    z_72 = t;
                    {
                      ATerm e_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_68), not_null(z_72)), not_null(t_68));
                      {
                        e_73 = t;
                        if(((d_73 != NULL) && (d_73 != e_73)))
                          _fail(e_73);
                        else
                          d_73 = e_73;
                      }
                      t = not_null(d_73);
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
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        t = map_1(t, trm_to_cong_0);
        return(t);
      }
      t = Op_2(t, _id, m_3);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
      }
    }
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym_Overlay_3))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      t_73 = ATgetArgument(q_73, 2);
      {
        ATerm x_73 = NULL,b_74 = NULL;
        ATerm x_26;
        x_26 = t;
        {
          ATerm a_74 = NULL;
          t = not_null(s_73);
          {
            ATerm n_3 (ATerm t)
            {
              ATerm y_73 = NULL;
              ATerm z_73 = NULL;
              z_73 = t;
              if(((y_73 != NULL) && (y_73 != z_73)))
                _fail(z_73);
              else
                y_73 = z_73;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_73), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20));
              return(t);
            }
            t = map_1(t, n_3);
            {
              a_74 = t;
              if(((x_73 != NULL) && (x_73 != a_74)))
                _fail(a_74);
              else
                x_73 = a_74;
            }
          }
        }
        t = x_26;
        {
          ATerm c_74 = NULL;
          t = not_null(t_73);
          {
            t = trm_to_cong_0(t);
            {
              c_74 = t;
              if(((b_74 != NULL) && (b_74 != c_74)))
                _fail(c_74);
              else
                b_74 = c_74;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_73), not_null(x_73), not_null(b_74));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm w_113 (ATerm))
{
  t = Scope_2(t, w_113, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm j_74 = NULL,o_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym_Var_1))
    {
      o_74 = ATgetArgument(j_74, 0);
      t = not_null(o_74);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm h_111 (ATerm), ATerm i_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  z_74 = t;
  y_74 :
  if(match_cons(z_74, sym__3))
    {
      a_75 = ATgetArgument(z_74, 0);
      b_75 = ATgetArgument(z_74, 1);
      c_75 = ATgetArgument(z_74, 2);
      {
        t = not_null(a_75);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm g_75 = NULL;
            g_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_75), not_null(c_75));
              t = h_111(t);
            }
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm i_75 = NULL;
            i_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_75), not_null(b_75));
              t = h_111(t);
            }
            return(t);
          }
          t = i_111(t, o_3, p_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm b_111 (ATerm), ATerm c_111 (ATerm, ATerm (ATerm)))
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_cons(j_76, sym__2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      {
        ATerm o_76 = NULL,p_76 = NULL,s_76 = NULL,z_76 = NULL;
        ATerm y_26;
        y_26 = t;
        {
          ATerm t_76 = NULL;
          t = not_null(k_76);
          {
            ATerm u_76 = NULL;
            t = b_111(t);
            {
              t_76 = t;
              {
                if(((o_76 != NULL) && (o_76 != t_76)))
                  _fail(t_76);
                else
                  o_76 = t_76;
                {
                  ATerm v_76 = NULL,y_76 = NULL;
                  t = map_1(t, new_0);
                  {
                    u_76 = t;
                    {
                      if(((p_76 != NULL) && (p_76 != u_76)))
                        _fail(u_76);
                      else
                        p_76 = u_76;
                      {
                        ATerm w_76 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_76), not_null(p_76));
                        {
                          t = zip_1(t, _id);
                          {
                            w_76 = t;
                            if(((v_76 != NULL) && (v_76 != w_76)))
                              _fail(w_76);
                            else
                              v_76 = w_76;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_76), not_null(l_76));
                          {
                            ATerm z_26 = t;
                            int a_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(a_27);
                              }
                            else
                              {
                                t = z_26;
                                t = conc_more_lists_0(t);
                              }
                            {
                              y_76 = t;
                              if(((s_76 != NULL) && (s_76 != y_76)))
                                _fail(y_76);
                              else
                                s_76 = y_76;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = y_26;
        {
          ATerm a_77 = NULL;
          t = not_null(k_76);
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(p_76);
              return(t);
            }
            t = c_111(t, q_3);
            {
              a_77 = t;
              if(((z_76 != NULL) && (z_76 != a_77)))
                _fail(a_77);
              else
                z_76 = a_77;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(z_76), not_null(l_76), not_null(s_76));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm u_110 (ATerm), ATerm v_110 (ATerm))
{
  ATerm r_77 = NULL;
  ATerm t_77 = NULL,u_77 = NULL;
  r_77 = t;
  {
    ATerm v_77 = NULL;
    t = not_null(r_77);
    {
      ATerm w_77 = NULL;
      t = u_110(t);
      {
        v_77 = t;
        {
          if(((t_77 != NULL) && (t_77 != v_77)))
            _fail(v_77);
          else
            t_77 = v_77;
          {
            t = v_110(t);
            {
              w_77 = t;
              if(((u_77 != NULL) && (u_77 != w_77)))
                _fail(w_77);
              else
                u_77 = w_77;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_77), not_null(u_77));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm r_78 = NULL;
  ATerm t_78 = NULL,u_78 = NULL;
  r_78 = t;
  {
    ATerm v_78 = NULL;
    ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
    t = not_null(r_78);
    {
      v_78 = t;
      {
        t = SSL_explode_term(not_null(v_78));
        {
          x_78 = t;
          k_78 :
          if(match_cons(x_78, sym__2))
            {
              y_78 = ATgetArgument(x_78, 0);
              z_78 = ATgetArgument(x_78, 1);
              n_78 :
              if(match_string(y_78, ""))
                {
                  o_78 :
                  if(((ATgetType(z_78) == AT_LIST) && !(ATisEmpty(z_78))))
                    {
                      a_79 = ATgetFirst((ATermList) z_78);
                      b_79 = (ATerm) ATgetNext((ATermList) z_78);
                      {
                        if(((u_78 != NULL) && (u_78 != a_79)))
                          _fail(a_79);
                        else
                          u_78 = a_79;
                        if(((t_78 != NULL) && (t_78 != b_79)))
                          _fail(b_79);
                        else
                          t_78 = b_79;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(u_78);
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL;
  i_79 = t;
  g_79 :
  if(match_cons(i_79, sym__2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      h_79 :
      if(((ATgetType(k_79) == AT_LIST) && !(ATisEmpty(k_79))))
        {
          l_79 = ATgetFirst((ATermList) k_79);
          m_79 = (ATerm) ATgetNext((ATermList) k_79);
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_79), not_null(m_79));
        }
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
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  u_79 = t;
  r_79 :
  if(match_cons(u_79, sym__2))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      s_79 :
      if(((ATgetType(w_79) == AT_LIST) && !(ATisEmpty(w_79))))
        {
          x_79 = ATgetFirst((ATermList) w_79);
          a_80 = (ATerm) ATgetNext((ATermList) w_79);
          t_79 :
          if(match_cons(x_79, sym__2))
            {
              y_79 = ATgetArgument(x_79, 0);
              z_79 = ATgetArgument(x_79, 1);
              {
                ATerm c_80 = NULL;
                if(((v_79 != NULL) && (v_79 != y_79)))
                  _fail(y_79);
                else
                  v_79 = y_79;
                {
                  if(((c_80 != NULL) && (c_80 != z_79)))
                    _fail(z_79);
                  else
                    c_80 = z_79;
                  t = not_null(c_80);
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
  ATerm b_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = b_27;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_111 (ATerm, ATerm (ATerm)))
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
  h_80 = t;
  g_80 :
  if(match_cons(h_80, sym__2))
    {
      i_80 = ATgetArgument(h_80, 0);
      j_80 = ATgetArgument(h_80, 1);
      {
        t = not_null(i_80);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(j_80);
              return(t);
            }
            t = split_2(t, _id, s_3);
            t = lookup_0(t);
            return(t);
          }
          t = m_111(t, r_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_92 (ATerm))
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  p_80 :
  if(match_cons(q_80, sym__2))
    {
      r_80 = ATgetArgument(q_80, 0);
      s_80 = ATgetArgument(q_80, 1);
      {
        t = not_null(r_80);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm v_80 = NULL;
            v_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_80), not_null(s_80));
              t = l_92(t);
            }
            return(t);
          }
          t = _all(t, t_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm z_80 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_91(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = all_dist_1(t, z_80);
      }
    return(t);
  }
  t = z_80(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
  e_81 = t;
  d_81 :
  if(match_cons(e_81, sym__2))
    {
      f_81 = ATgetArgument(e_81, 0);
      g_81 = ATgetArgument(e_81, 1);
      {
        ATerm j_81 = NULL;
        if(((j_81 != NULL) && (j_81 != g_81)))
          _fail(g_81);
        else
          j_81 = g_81;
      }
    }
  else
    {
      if(match_cons(e_81, sym__3))
        {
          f_81 = ATgetArgument(e_81, 0);
          g_81 = ATgetArgument(e_81, 1);
          h_81 = ATgetArgument(e_81, 2);
          {
            ATerm p_81 = NULL;
            ATerm q_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_81), not_null(g_81));
            {
              t = zip_1(t, _id);
              {
                q_81 = t;
                if(((p_81 != NULL) && (p_81 != q_81)))
                  _fail(q_81);
                else
                  p_81 = q_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_81), not_null(h_81));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm, ATerm (ATerm)), ATerm k_110 (ATerm), ATerm l_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_110 (ATerm, ATerm (ATerm)), ATerm n_110 (ATerm))
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  t = subs_args_0(t);
  {
    w_81 = t;
    v_81 :
    if(match_cons(w_81, sym__2))
      {
        x_81 = ATgetArgument(w_81, 0);
        y_81 = ATgetArgument(w_81, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_81), (ATerm) ATempty);
          {
            ATerm c_82 (ATerm t)
            {
              ATerm u_3 (ATerm t)
              {
                ATerm k_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, j_110);
                    LocalPopChoice(o_27);
                  }
                else
                  {
                    t = k_27;
                    {
                      ATerm q_27 = t;
                      int s_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              t = not_null(x_81);
                              return(t);
                            }
                            t = SubsVar_2(t, i_110, v_3);
                            t = n_110(t);
                          }
                          LocalPopChoice(s_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            t = RnBinding_2(t, k_110, m_110);
                            t = DistBinding_2(t, c_82, l_110);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, u_3);
              return(t);
            }
            t = c_82(t);
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
ATerm substitute_5 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm, ATerm (ATerm)), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_110 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, p_110, q_110, r_110, s_110, t_110, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm d_82 (ATerm t, ATerm e_82 (ATerm))
  {
    t = Scope_2(t, e_82, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, d_82);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm c_113 (ATerm))
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
  m_82 = t;
  l_82 :
  if(match_cons(m_82, sym_Op_2))
    {
      n_82 = ATgetArgument(m_82, 0);
      o_82 = ATgetArgument(m_82, 1);
      {
        ATerm r_82 = NULL,s_82 = NULL;
        t = c_113(t);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm v_27;
            v_27 = t;
            {
              ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
              t_82 = t;
              k_82 :
              if(match_cons(t_82, sym_Overlay_3))
                {
                  u_82 = ATgetArgument(t_82, 0);
                  v_82 = ATgetArgument(t_82, 1);
                  w_82 = ATgetArgument(t_82, 2);
                  {
                    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,b_83 = NULL;
                    if(((n_82 != NULL) && (n_82 != u_82)))
                      _fail(u_82);
                    else
                      n_82 = u_82;
                    {
                      if(((x_82 != NULL) && (x_82 != v_82)))
                        _fail(v_82);
                      else
                        x_82 = v_82;
                      {
                        if(((y_82 != NULL) && (y_82 != w_82)))
                          _fail(w_82);
                        else
                          y_82 = w_82;
                        {
                          ATerm w_27;
                          w_27 = t;
                          {
                            ATerm a_83 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(x_82), not_null(o_82));
                            {
                              t = zip_1(t, _id);
                              {
                                a_83 = t;
                                if(((z_82 != NULL) && (z_82 != a_83)))
                                  _fail(a_83);
                                else
                                  z_82 = a_83;
                              }
                            }
                          }
                          t = w_27;
                          {
                            ATerm c_83 = NULL;
                            t = not_null(z_82);
                            {
                              b_83 = t;
                              {
                                if(((r_82 != NULL) && (r_82 != b_83)))
                                  _fail(b_83);
                                else
                                  r_82 = b_83;
                                {
                                  t = not_null(y_82);
                                  {
                                    c_83 = t;
                                    {
                                      if(((s_82 != NULL) && (s_82 != c_83)))
                                        _fail(c_83);
                                      else
                                        s_82 = c_83;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_82), not_null(y_82));
                                    }
                                  }
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
            t = v_27;
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(s_82));
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
ATerm exp_overlays1_1 (ATerm t, ATerm a_113 (ATerm))
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27;
      z_27 = t;
      {
        ATerm a_28 = t;
        if((PushChoice() == 0))
          {
            ATerm j_83 = NULL;
            t = a_113(t);
            {
              j_83 = t;
              i_83 :
              if(((ATgetType(j_83) == AT_LIST) && ATisEmpty(j_83)))
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
            t = a_28;
          }
      }
      t = z_27;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm y_3 (ATerm t)
          {
            t = ExpOverlay_1(t, a_113);
            return(t);
          }
          t = repeat_1(t, y_3);
          return(t);
        }
        t = topdown_1(t, x_3);
      }
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
      }
    }
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
  x_83 = t;
  p_83 :
  if(match_cons(x_83, sym_Specification_1))
    {
      y_83 = ATgetArgument(x_83, 0);
      q_83 :
      if(((ATgetType(y_83) == AT_LIST) && !(ATisEmpty(y_83))))
        {
          z_83 = ATgetFirst((ATermList) y_83);
          b_84 = (ATerm) ATgetNext((ATermList) y_83);
          r_83 :
          if(match_cons(z_83, sym_Signature_1))
            {
              a_84 = ATgetArgument(z_83, 0);
              s_83 :
              if(((ATgetType(b_84) == AT_LIST) && !(ATisEmpty(b_84))))
                {
                  c_84 = ATgetFirst((ATermList) b_84);
                  e_84 = (ATerm) ATgetNext((ATermList) b_84);
                  t_83 :
                  if(match_cons(c_84, sym_Overlays_1))
                    {
                      d_84 = ATgetArgument(c_84, 0);
                      u_83 :
                      if(((ATgetType(e_84) == AT_LIST) && !(ATisEmpty(e_84))))
                        {
                          f_84 = ATgetFirst((ATermList) e_84);
                          h_84 = (ATerm) ATgetNext((ATermList) e_84);
                          v_83 :
                          if(match_cons(f_84, sym_Strategies_1))
                            {
                              g_84 = ATgetArgument(f_84, 0);
                              w_83 :
                              if(((ATgetType(h_84) == AT_LIST) && ATisEmpty(h_84)))
                                {
                                  {
                                    ATerm l_84 = NULL,n_84 = NULL;
                                    ATerm b_28;
                                    b_28 = t;
                                    {
                                      ATerm m_84 = NULL;
                                      t = not_null(d_84);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(d_84);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          m_84 = t;
                                          if(((l_84 != NULL) && (l_84 != m_84)))
                                            _fail(m_84);
                                          else
                                            l_84 = m_84;
                                        }
                                      }
                                    }
                                    t = b_28;
                                    {
                                      ATerm o_84 = NULL,s_84 = NULL,u_84 = NULL;
                                      ATerm c_28;
                                      c_28 = t;
                                      {
                                        ATerm p_84 = NULL;
                                        t = not_null(d_84);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            p_84 = t;
                                            if(((o_84 != NULL) && (o_84 != p_84)))
                                              _fail(p_84);
                                            else
                                              o_84 = p_84;
                                          }
                                        }
                                      }
                                      t = c_28;
                                      {
                                        ATerm t_84 = NULL;
                                        t = not_null(g_84);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(l_84);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            t_84 = t;
                                            if(((s_84 != NULL) && (s_84 != t_84)))
                                              _fail(t_84);
                                            else
                                              s_84 = t_84;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_84), not_null(s_84));
                                          {
                                            ATerm d_28 = t;
                                            int e_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = conc_two_lists_0(t);
                                                LocalPopChoice(e_28);
                                              }
                                            else
                                              {
                                                t = d_28;
                                                t = conc_more_lists_0(t);
                                              }
                                            {
                                              u_84 = t;
                                              if(((n_84 != NULL) && (n_84 != u_84)))
                                                _fail(u_84);
                                              else
                                                n_84 = u_84;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(n_84))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(a_84))));
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
  ATerm b_4 (ATerm t)
  {
    ATerm b_85 = NULL;
    b_85 = t;
    {
      ATerm f_28;
      f_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_85)), term_l_28);
        {
          ATerm c_4 (ATerm t)
          {
            t = term_m_28;
            return(t);
          }
          t = assert_1(t, c_4);
        }
      }
      t = f_28;
    }
    return(t);
  }
  t = map_1(t, b_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
  i_85 = t;
  h_85 :
  if(match_cons(i_85, sym_Overlay_3))
    {
      j_85 = ATgetArgument(i_85, 0);
      k_85 = ATgetArgument(i_85, 1);
      l_85 = ATgetArgument(i_85, 2);
      {
        ATerm q_28;
        q_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_s_28, not_null(j_85)));
          {
            ATerm d_4 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = assert_1(t, d_4);
            {
              t = not_null(k_85);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(l_85);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = q_28;
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
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
  y_85 = t;
  w_85 :
  if(match_cons(y_85, sym_RDef_3))
    {
      z_85 = ATgetArgument(y_85, 0);
      a_86 = ATgetArgument(y_85, 1);
      b_86 = ATgetArgument(y_85, 2);
      x_85 :
      if(match_cons(b_86, sym_StratRule_3))
        {
          c_86 = ATgetArgument(b_86, 0);
          d_86 = ATgetArgument(b_86, 1);
          e_86 = ATgetArgument(b_86, 2);
          {
            ATerm w_28;
            w_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_x_28, not_null(z_85)));
              {
                ATerm e_4 (ATerm t)
                {
                  t = term_v_28;
                  return(t);
                }
                t = assert_1(t, e_4);
                {
                  t = not_null(c_86);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(d_86);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(e_86);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = w_28;
          }
        }
      else
        {
          if(match_cons(b_86, sym_Rule_3))
            {
              c_86 = ATgetArgument(b_86, 0);
              d_86 = ATgetArgument(b_86, 1);
              e_86 = ATgetArgument(b_86, 2);
              {
                ATerm y_28;
                y_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_z_28, not_null(z_85)));
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_v_28;
                      return(t);
                    }
                    t = assert_1(t, f_4);
                    {
                      t = not_null(c_86);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(e_86);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(d_86);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = y_28;
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
ATerm guardedlchoice_1 (ATerm t, ATerm k_114 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, k_114, k_114, _id);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, k_114);
    return(t);
  }
  t = abstract_choice_2(t, g_4, h_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  g_87 = t;
  f_87 :
  if(match_cons(g_87, sym_GuardedLChoice_3))
    {
      h_87 = ATgetArgument(g_87, 0);
      i_87 = ATgetArgument(g_87, 1);
      j_87 = ATgetArgument(g_87, 2);
      {
        ATerm o_87 = NULL,q_87 = NULL;
        ATerm p_87 = NULL;
        t = SSLgetAnnotations(not_null(g_87));
        {
          p_87 = t;
          if(((o_87 != NULL) && (o_87 != p_87)))
            _fail(p_87);
          else
            o_87 = p_87;
        }
        {
          t = not_null(h_87);
          {
            ATerm s_87 = NULL;
            t = n_75(t);
            {
              q_87 = t;
              {
                t = not_null(i_87);
                {
                  ATerm u_87 = NULL;
                  t = o_75(t);
                  {
                    s_87 = t;
                    {
                      t = not_null(j_87);
                      {
                        ATerm w_87 = NULL;
                        t = p_75(t);
                        {
                          u_87 = t;
                          {
                            ATerm x_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(q_87), not_null(s_87), not_null(u_87)), not_null(o_87));
                            {
                              x_87 = t;
                              if(((w_87 != NULL) && (w_87 != x_87)))
                                _fail(x_87);
                              else
                                w_87 = x_87;
                            }
                            t = not_null(w_87);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm j_114 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = LChoice_2(t, j_114, _id);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = LChoice_2(t, _id, j_114);
    return(t);
  }
  t = abstract_choice_2(t, i_4, j_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL;
  m_88 = t;
  l_88 :
  if(match_cons(m_88, sym_LChoice_2))
    {
      n_88 = ATgetArgument(m_88, 0);
      o_88 = ATgetArgument(m_88, 1);
      {
        ATerm s_88 = NULL,u_88 = NULL;
        ATerm t_88 = NULL;
        t = SSLgetAnnotations(not_null(m_88));
        {
          t_88 = t;
          if(((s_88 != NULL) && (s_88 != t_88)))
            _fail(t_88);
          else
            s_88 = t_88;
        }
        {
          t = not_null(n_88);
          {
            ATerm y_88 = NULL;
            t = l_75(t);
            {
              u_88 = t;
              {
                t = not_null(o_88);
                {
                  ATerm a_89 = NULL;
                  t = m_75(t);
                  {
                    y_88 = t;
                    {
                      ATerm b_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(u_88), not_null(y_88)), not_null(s_88));
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
  ATerm k_4 (ATerm t)
  {
    ATerm a_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
        t_89 = t;
        l_89 :
        if(match_cons(t_89, sym__2))
          {
            u_89 = ATgetArgument(t_89, 0);
            v_89 = ATgetArgument(t_89, 1);
            m_89 :
            if(((ATgetType(v_89) == AT_LIST) && !(ATisEmpty(v_89))))
              {
                w_89 = ATgetFirst((ATermList) v_89);
                z_89 = (ATerm) ATgetNext((ATermList) v_89);
                n_89 :
                if(match_cons(w_89, sym_Defined_2))
                  {
                    x_89 = ATgetArgument(w_89, 0);
                    y_89 = ATgetArgument(w_89, 1);
                    o_89 :
                    if(!(match_cons(u_89, sym_Scopes_0)))
                      {
                        ATerm g_29 = t;
                        int h_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_29;
                            i_29 = t;
                            {
                              ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(u_89));
                              {
                                t = table_get_0(t);
                                {
                                  c_90 = t;
                                  j_89 :
                                  if(((ATgetType(c_90) == AT_LIST) && !(ATisEmpty(c_90))))
                                    {
                                      d_90 = ATgetFirst((ATermList) c_90);
                                      g_90 = (ATerm) ATgetNext((ATermList) c_90);
                                      k_89 :
                                      if(match_cons(d_90, sym_Defined_2))
                                        {
                                          e_90 = ATgetArgument(d_90, 0);
                                          f_90 = ATgetArgument(d_90, 1);
                                          if(((y_89 != NULL) && (y_89 != f_90)))
                                            _fail(f_90);
                                          else
                                            y_89 = f_90;
                                        }
                                      else
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
                            t = i_29;
                            LocalPopChoice(h_29);
                          }
                        else
                          {
                            t = g_29;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), (ATerm) ATinsert(ATempty, term_j_29));
                          }
                      }
                  }
                else
                  {
                    p_89 :
                    if(!(match_cons(u_89, sym_Scopes_0)))
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                s_89 :
                if(!(match_cons(u_89, sym_Scopes_0)))
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(f_29);
      }
    else
      {
        t = a_29;
        {
        }
      }
    return(t);
  }
  t = map_1(t, k_4);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      {
        t = not_null(p_90);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
            s_90 = t;
            l_90 :
            if(match_cons(s_90, sym__2))
              {
                t_90 = ATgetArgument(s_90, 0);
                u_90 = ATgetArgument(s_90, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_90), not_null(t_90), not_null(u_90));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_4);
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
  ATerm a_91 = NULL;
  a_91 = t;
  {
    ATerm q_29;
    q_29 = t;
    {
      t = term_m_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(a_91));
          t = table_putlist_0(t);
        }
      }
    }
    t = q_29;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_91 = NULL;
  e_91 = t;
  t = SSL_table_keys(not_null(e_91));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_91 = NULL;
  k_91 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm m_91 = NULL;
        ATerm o_91 = NULL;
        m_91 = t;
        {
          ATerm p_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_91), not_null(m_91));
          {
            t = table_get_0(t);
            {
              p_91 = t;
              if(((o_91 != NULL) && (o_91 != p_91)))
                _fail(p_91);
              else
                o_91 = p_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(o_91));
        }
        return(t);
      }
      t = map_1(t, m_4);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_m_28;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm g_114 (ATerm), ATerm h_114 (ATerm))
{
  ATerm x_91 = NULL,z_91 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm y_91 = NULL;
    t = save_Bound_0(t);
    {
      y_91 = t;
      if(((x_91 != NULL) && (x_91 != y_91)))
        _fail(y_91);
      else
        x_91 = y_91;
    }
  }
  t = r_29;
  {
    t = g_114(t);
    {
      ATerm s_29;
      s_29 = t;
      {
        ATerm a_92 = NULL;
        t = save_Bound_0(t);
        {
          a_92 = t;
          {
            if(((z_91 != NULL) && (z_91 != a_92)))
              _fail(a_92);
            else
              z_91 = a_92;
            {
              t = not_null(x_91);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = s_29;
      {
        t = h_114(t);
        {
          ATerm t_29;
          t_29 = t;
          {
            t = not_null(z_91);
            t = isect_Bound_0(t);
          }
          t = t_29;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm i_114 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = Choice_2(t, i_114, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = Choice_2(t, _id, i_114);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm j_92 = NULL,k_92 = NULL,m_92 = NULL;
  j_92 = t;
  i_92 :
  if(match_cons(j_92, sym_Choice_2))
    {
      k_92 = ATgetArgument(j_92, 0);
      m_92 = ATgetArgument(j_92, 1);
      {
        ATerm q_92 = NULL,s_92 = NULL;
        ATerm r_92 = NULL;
        t = SSLgetAnnotations(not_null(j_92));
        {
          r_92 = t;
          if(((q_92 != NULL) && (q_92 != r_92)))
            _fail(r_92);
          else
            q_92 = r_92;
        }
        {
          t = not_null(k_92);
          {
            ATerm v_92 = NULL;
            t = j_75(t);
            {
              s_92 = t;
              {
                t = not_null(m_92);
                {
                  ATerm z_92 = NULL;
                  t = k_75(t);
                  {
                    v_92 = t;
                    {
                      ATerm a_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(s_92), not_null(v_92)), not_null(q_92));
                      {
                        a_93 = t;
                        if(((z_92 != NULL) && (z_92 != a_93)))
                          _fail(a_93);
                        else
                          z_92 = a_93;
                      }
                      t = not_null(z_92);
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
  ATerm a_94 = NULL;
  a_94 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_94 = NULL;
        ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
        t = term_c_22;
        {
          ATerm p_4 (ATerm t)
          {
            t = term_v_28;
            return(t);
          }
          t = rewrite_1(t, p_4);
          {
            g_94 = t;
            p_93 :
            if(match_cons(g_94, sym_Defined_2))
              {
                h_94 = ATgetArgument(g_94, 0);
                i_94 = ATgetArgument(g_94, 1);
                q_93 :
                if(match_string(h_94, "x_0"))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_94)), term_w_22), not_null(f_94)), term_w_29);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_94 = NULL;
              ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL;
              t = term_c_22;
              {
                ATerm q_4 (ATerm t)
                {
                  t = term_v_28;
                  return(t);
                }
                t = rewrite_1(t, q_4);
                {
                  m_94 = t;
                  s_93 :
                  if(match_cons(m_94, sym_Defined_2))
                    {
                      n_94 = ATgetArgument(m_94, 0);
                      o_94 = ATgetArgument(m_94, 1);
                      t_93 :
                      if(match_string(n_94, "u_0"))
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_94)), term_w_22), not_null(l_94)), term_z_29);
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              {
                ATerm a_30 = t;
                int b_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_94 = NULL;
                    ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
                    t = term_c_22;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = term_v_28;
                        return(t);
                      }
                      t = rewrite_1(t, r_4);
                      {
                        s_94 = t;
                        v_93 :
                        if(match_cons(s_94, sym_Defined_2))
                          {
                            t_94 = ATgetArgument(s_94, 0);
                            u_94 = ATgetArgument(s_94, 1);
                            w_93 :
                            if(match_string(t_94, "r_0"))
                              {
                                if(((r_94 != NULL) && (r_94 != u_94)))
                                  _fail(u_94);
                                else
                                  r_94 = u_94;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_94)), term_w_22), not_null(r_94)), term_z_29);
                    LocalPopChoice(b_30);
                  }
                else
                  {
                    t = a_30;
                    {
                      ATerm d_95 = NULL;
                      ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
                      t = term_c_22;
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = term_v_28;
                          return(t);
                        }
                        t = rewrite_1(t, s_4);
                        {
                          e_95 = t;
                          y_93 :
                          if(match_cons(e_95, sym_Defined_2))
                            {
                              f_95 = ATgetArgument(e_95, 0);
                              g_95 = ATgetArgument(e_95, 1);
                              z_93 :
                              if(match_string(f_95, "o_0"))
                                {
                                  if(((d_95 != NULL) && (d_95 != g_95)))
                                    _fail(g_95);
                                  else
                                    d_95 = g_95;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_94)), term_w_22), not_null(d_95)), term_c_30);
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
  ATerm s_95 = NULL,t_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym_Var_1))
    {
      t_95 = ATgetArgument(s_95, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), not_null(t_95)), term_d_30);
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
  ATerm g_96 = NULL,h_96 = NULL;
  g_96 = t;
  f_96 :
  if(match_cons(g_96, sym_Var_1))
    {
      h_96 = ATgetArgument(g_96, 0);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_96 = NULL,l_96 = NULL;
            t = not_null(g_96);
            {
              ATerm t_4 (ATerm t)
              {
                t = term_m_28;
                return(t);
              }
              t = rewrite_1(t, t_4);
              {
                k_96 = t;
                z_95 :
                if(match_cons(k_96, sym_Defined_1))
                  {
                    l_96 = ATgetArgument(k_96, 0);
                    a_96 :
                    if(!(match_string(l_96, "e_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_96));
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm h_30 = t;
              int i_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_96 = NULL;
                  t = not_null(g_96);
                  {
                    ATerm u_4 (ATerm t)
                    {
                      t = term_m_28;
                      return(t);
                    }
                    t = rewrite_1(t, u_4);
                    {
                      o_96 = t;
                      c_96 :
                      if(match_cons(o_96, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_j_29;
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = h_30;
                  {
                    ATerm r_96 = NULL,s_96 = NULL;
                    t = not_null(g_96);
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = term_m_28;
                        return(t);
                      }
                      t = rewrite_1(t, v_4);
                      {
                        r_96 = t;
                        d_96 :
                        if(match_cons(r_96, sym_Defined_1))
                          {
                            s_96 = ATgetArgument(r_96, 0);
                            e_96 :
                            if(!(match_string(s_96, "a_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_96));
                  }
                }
            }
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
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(k_30);
      {
        ATerm l_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            LocalPopChoice(p_30);
          }
        else
          {
            t = l_30;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = j_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(r_30);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = q_30;
            {
              ATerm s_30 = t;
              int t_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(t_30);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = s_30;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
  e_97 = t;
  d_97 :
  if(match_cons(e_97, sym_Rule_3))
    {
      f_97 = ATgetArgument(e_97, 0);
      g_97 = ATgetArgument(e_97, 1);
      h_97 = ATgetArgument(e_97, 2);
      {
        ATerm m_97 = NULL,o_97 = NULL;
        ATerm n_97 = NULL;
        t = SSLgetAnnotations(not_null(e_97));
        {
          n_97 = t;
          if(((m_97 != NULL) && (m_97 != n_97)))
            _fail(n_97);
          else
            m_97 = n_97;
        }
        {
          t = not_null(f_97);
          {
            ATerm q_97 = NULL;
            t = m_77(t);
            {
              o_97 = t;
              {
                t = not_null(g_97);
                {
                  ATerm s_97 = NULL;
                  t = n_77(t);
                  {
                    q_97 = t;
                    {
                      t = not_null(h_97);
                      {
                        ATerm u_97 = NULL;
                        t = o_77(t);
                        {
                          s_97 = t;
                          {
                            ATerm v_97 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(o_97), not_null(q_97), not_null(s_97)), not_null(m_97));
                            {
                              v_97 = t;
                              if(((u_97 != NULL) && (u_97 != v_97)))
                                _fail(v_97);
                              else
                                u_97 = v_97;
                            }
                            t = not_null(u_97);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm h_98 = NULL,n_98 = NULL;
  h_98 = t;
  g_98 :
  if(match_cons(h_98, sym_RootApp_1))
    {
      n_98 = ATgetArgument(h_98, 0);
      {
        ATerm s_98 = NULL,w_98 = NULL;
        ATerm v_98 = NULL;
        t = SSLgetAnnotations(not_null(h_98));
        {
          v_98 = t;
          if(((s_98 != NULL) && (s_98 != v_98)))
            _fail(v_98);
          else
            s_98 = v_98;
        }
        {
          t = not_null(n_98);
          {
            ATerm b_99 = NULL;
            t = h_78(t);
            {
              w_98 = t;
              {
                ATerm c_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(w_98)), not_null(s_98));
                {
                  c_99 = t;
                  if(((b_99 != NULL) && (b_99 != c_99)))
                    _fail(c_99);
                  else
                    b_99 = c_99;
                }
                t = not_null(b_99);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL;
  s_99 = t;
  r_99 :
  if(match_cons(s_99, sym_App_2))
    {
      t_99 = ATgetArgument(s_99, 0);
      u_99 = ATgetArgument(s_99, 1);
      {
        ATerm y_99 = NULL,a_100 = NULL;
        ATerm z_99 = NULL;
        t = SSLgetAnnotations(not_null(s_99));
        {
          z_99 = t;
          if(((y_99 != NULL) && (y_99 != z_99)))
            _fail(z_99);
          else
            y_99 = z_99;
        }
        {
          t = not_null(t_99);
          {
            ATerm c_100 = NULL;
            t = f_78(t);
            {
              a_100 = t;
              {
                t = not_null(u_99);
                {
                  ATerm e_100 = NULL;
                  t = g_78(t);
                  {
                    c_100 = t;
                    {
                      ATerm f_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(a_100), not_null(c_100)), not_null(y_99));
                      {
                        f_100 = t;
                        if(((e_100 != NULL) && (e_100 != f_100)))
                          _fail(f_100);
                        else
                          e_100 = f_100;
                      }
                      t = not_null(e_100);
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
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym__3))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      t_100 = ATgetArgument(q_100, 2);
      {
        ATerm x_100 = NULL;
        ATerm y_30;
        y_30 = t;
        {
          ATerm y_100 = NULL,b_101 = NULL,c_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_100), not_null(s_100));
          {
            t = table_get_0(t);
            {
              y_100 = t;
              o_100 :
              if(((ATgetType(y_100) == AT_LIST) && !(ATisEmpty(y_100))))
                {
                  b_101 = ATgetFirst((ATermList) y_100);
                  c_101 = (ATerm) ATgetNext((ATermList) y_100);
                  {
                    if(((x_100 != NULL) && (x_100 != c_101)))
                      _fail(c_101);
                    else
                      x_100 = c_101;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_100), not_null(s_100), (ATerm) ATinsert(CheckATermList(not_null(x_100)), not_null(t_100)));
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
        t = y_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
  i_101 = t;
  h_101 :
  if(match_cons(i_101, sym__2))
    {
      j_101 = ATgetArgument(i_101, 0);
      k_101 = ATgetArgument(i_101, 1);
      {
        ATerm n_101 = NULL;
        ATerm z_30;
        z_30 = t;
        {
          ATerm o_101 = NULL;
          t = o_103(t);
          {
            o_101 = t;
            {
              if(((n_101 != NULL) && (n_101 != o_101)))
                _fail(o_101);
              else
                n_101 = o_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_101), not_null(j_101), not_null(k_101));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = z_30;
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
  ATerm t_101 = NULL,u_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym_Var_1))
    {
      u_101 = ATgetArgument(t_101, 0);
      {
        ATerm a_31;
        a_31 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_101)), term_d_31);
          {
            ATerm w_4 (ATerm t)
            {
              t = term_m_28;
              return(t);
            }
            t = override_key_1(t, w_4);
          }
        }
        t = a_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm g_102 = NULL,h_102 = NULL;
  g_102 = t;
  f_102 :
  if(match_cons(g_102, sym_Var_1))
    {
      h_102 = ATgetArgument(g_102, 0);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_102 = NULL,m_102 = NULL;
            ATerm l_102 = NULL;
            t = SSLgetAnnotations(not_null(g_102));
            {
              l_102 = t;
              if(((k_102 != NULL) && (k_102 != l_102)))
                _fail(l_102);
              else
                k_102 = l_102;
            }
            {
              t = not_null(h_102);
              {
                ATerm o_102 = NULL;
                t = s_0(t);
                {
                  m_102 = t;
                  {
                    ATerm p_102 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_102)), not_null(k_102));
                    {
                      p_102 = t;
                      if(((o_102 != NULL) && (o_102 != p_102)))
                        _fail(p_102);
                      else
                        o_102 = p_102;
                    }
                    t = not_null(o_102);
                  }
                }
              }
            }
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm s_102 = NULL,u_102 = NULL;
              ATerm t_102 = NULL;
              t = SSLgetAnnotations(not_null(g_102));
              {
                t_102 = t;
                if(((s_102 != NULL) && (s_102 != t_102)))
                  _fail(t_102);
                else
                  s_102 = t_102;
              }
              {
                t = not_null(h_102);
                {
                  ATerm w_102 = NULL;
                  t = s_0(t);
                  {
                    u_102 = t;
                    {
                      ATerm x_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_102)), not_null(s_102));
                      {
                        x_102 = t;
                        if(((w_102 != NULL) && (w_102 != x_102)))
                          _fail(x_102);
                        else
                          w_102 = x_102;
                      }
                      t = not_null(w_102);
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
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(l_31);
      t = Binding_0(t);
    }
  else
    {
      t = k_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(n_31);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = m_31;
            {
              ATerm o_31 = t;
              int p_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(p_31);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = o_31;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm s_103 = NULL,t_103 = NULL;
  s_103 = t;
  r_103 :
  if(match_cons(s_103, sym_Match_1))
    {
      t_103 = ATgetArgument(s_103, 0);
      {
        ATerm y_103 = NULL,a_104 = NULL;
        ATerm z_103 = NULL;
        t = SSLgetAnnotations(not_null(s_103));
        {
          z_103 = t;
          if(((y_103 != NULL) && (y_103 != z_103)))
            _fail(z_103);
          else
            y_103 = z_103;
        }
        {
          t = not_null(t_103);
          {
            ATerm c_104 = NULL;
            t = q_74(t);
            {
              a_104 = t;
              {
                ATerm d_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(a_104)), not_null(y_103));
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
ATerm Build_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym_Build_1))
    {
      o_104 = ATgetArgument(n_104, 0);
      {
        ATerm r_104 = NULL,t_104 = NULL;
        ATerm s_104 = NULL;
        t = SSLgetAnnotations(not_null(n_104));
        {
          s_104 = t;
          if(((r_104 != NULL) && (r_104 != s_104)))
            _fail(s_104);
          else
            r_104 = s_104;
        }
        {
          t = not_null(o_104);
          {
            ATerm v_104 = NULL;
            t = r_74(t);
            {
              t_104 = t;
              {
                ATerm x_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_104)), not_null(r_104));
                {
                  x_104 = t;
                  if(((v_104 != NULL) && (v_104 != x_104)))
                    _fail(x_104);
                  else
                    v_104 = x_104;
                }
                t = not_null(v_104);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarScope_1 (ATerm t, ATerm f_114 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, f_114);
    return(t);
  }
  t = scope_2(t, x_4, y_4);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm q_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(t_31);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = q_31;
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(v_31);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = u_31;
            {
              ATerm w_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(x_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm z_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(a_32);
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
                        t = z_31;
                        {
                          ATerm e_32 = t;
                          int h_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(h_32);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = e_32;
                              {
                                ATerm i_32 = t;
                                int j_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(j_32);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = i_32;
                                    {
                                      ATerm k_32 = t;
                                      int l_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(l_32);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = k_32;
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
  ATerm k_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL;
  k_105 = t;
  j_105 :
  if(match_cons(k_105, sym_SDef_3))
    {
      q_105 = ATgetArgument(k_105, 0);
      r_105 = ATgetArgument(k_105, 1);
      s_105 = ATgetArgument(k_105, 2);
      {
        ATerm m_32;
        m_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_n_32, not_null(q_105)));
          {
            ATerm z_4 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = assert_1(t, z_4);
            {
              t = not_null(s_105);
              t = unbound_vars_0(t);
            }
          }
        }
        t = m_32;
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
  ATerm a_5 (ATerm t)
  {
    ATerm c_106 = NULL;
    c_106 = t;
    {
      ATerm o_32;
      o_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_106)), term_j_29);
        {
          ATerm b_5 (ATerm t)
          {
            t = term_m_28;
            return(t);
          }
          t = assert_1(t, b_5);
        }
      }
      t = o_32;
    }
    return(t);
  }
  t = map_1(t, a_5);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = term_m_28;
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm p_32 = t;
      int q_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32;
          s_32 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = s_32;
          t = sdef_ud_0(t);
          LocalPopChoice(q_32);
        }
      else
        {
          t = p_32;
          {
            ATerm t_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(x_32);
              }
            else
              {
                t = t_32;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, e_5, f_5);
    return(t);
  }
  t = scope_2(t, c_5, d_5);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm f_33;
        f_33 = t;
        {
          ATerm g_5 (ATerm t)
          {
            ATerm g_33 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_33;
              }
            return(t);
          }
          t = filter_1(t, g_5);
          t = Nil_0(t);
        }
        t = f_33;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm k_106 = NULL,l_106 = NULL;
  k_106 = t;
  j_106 :
  if(match_cons(k_106, sym_Signature_1))
    {
      l_106 = ATgetArgument(k_106, 0);
      {
        ATerm o_106 = NULL,t_106 = NULL;
        ATerm p_106 = NULL;
        t = SSLgetAnnotations(not_null(k_106));
        {
          p_106 = t;
          if(((o_106 != NULL) && (o_106 != p_106)))
            _fail(p_106);
          else
            o_106 = p_106;
        }
        {
          t = not_null(l_106);
          {
            ATerm v_106 = NULL;
            t = b_77(t);
            {
              t_106 = t;
              {
                ATerm w_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_106)), not_null(o_106));
                {
                  w_106 = t;
                  if(((v_106 != NULL) && (v_106 != w_106)))
                    _fail(w_106);
                  else
                    v_106 = w_106;
                }
                t = not_null(v_106);
              }
            }
          }
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
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, m_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, k_5, l_5);
      return(t);
    }
    t = Cons_2(t, i_5, j_5);
    return(t);
  }
  t = Specification_1(t, h_5);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm s_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL;
  w_107 = t;
  o_107 :
  if(match_cons(w_107, sym_Lets_2))
    {
      x_107 = ATgetArgument(w_107, 0);
      y_107 = ATgetArgument(w_107, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_107), not_null(y_107));
    }
  else
    {
      if(match_cons(w_107, sym_LChoices_1))
        {
          x_107 = ATgetArgument(w_107, 0);
          p_107 :
          if(((ATgetType(x_107) == AT_LIST) && !(ATisEmpty(x_107))))
            {
              s_107 = ATgetFirst((ATermList) x_107);
              u_107 = (ATerm) ATgetNext((ATermList) x_107);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_107), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_107)));
            }
          else
            {
              if(((ATgetType(x_107) == AT_LIST) && ATisEmpty(x_107)))
                {
                  t = term_r_33;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_107, sym_Choices_1))
            {
              x_107 = ATgetArgument(w_107, 0);
              q_107 :
              if(((ATgetType(x_107) == AT_LIST) && !(ATisEmpty(x_107))))
                {
                  s_107 = ATgetFirst((ATermList) x_107);
                  u_107 = (ATerm) ATgetNext((ATermList) x_107);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_107), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_107)));
                }
              else
                {
                  if(((ATgetType(x_107) == AT_LIST) && ATisEmpty(x_107)))
                    {
                      t = term_r_33;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_107, sym_Seqs_1))
                {
                  x_107 = ATgetArgument(w_107, 0);
                  r_107 :
                  if(((ATgetType(x_107) == AT_LIST) && !(ATisEmpty(x_107))))
                    {
                      s_107 = ATgetFirst((ATermList) x_107);
                      u_107 = (ATerm) ATgetNext((ATermList) x_107);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_107), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_107)));
                    }
                  else
                    {
                      if(((ATgetType(x_107) == AT_LIST) && ATisEmpty(x_107)))
                        {
                          t = term_j_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_107, sym_DefaultVarDec_1))
                    {
                      x_107 = ATgetArgument(w_107, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_107), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20));
                    }
                  else
                    {
                      if(match_cons(w_107, sym_InfixApp_3))
                        {
                          x_107 = ATgetArgument(w_107, 0);
                          y_107 = ATgetArgument(w_107, 1);
                          v_107 = ATgetArgument(w_107, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_107), (ATerm) ATmakeAppl(sym_Op_2, term_l_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_107)), not_null(x_107))));
                        }
                      else
                        {
                          if(match_cons(w_107, sym_BAM_3))
                            {
                              x_107 = ATgetArgument(w_107, 0);
                              y_107 = ATgetArgument(w_107, 1);
                              v_107 = ATgetArgument(w_107, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_107))), not_null(x_107)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_107))));
                            }
                          else
                            {
                              if(match_cons(w_107, sym_AM_2))
                                {
                                  x_107 = ATgetArgument(w_107, 0);
                                  y_107 = ATgetArgument(w_107, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_107), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_107)));
                                }
                              else
                                {
                                  if(match_cons(w_107, sym_MA_2))
                                    {
                                      x_107 = ATgetArgument(w_107, 0);
                                      y_107 = ATgetArgument(w_107, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_107)), not_null(y_107));
                                    }
                                  else
                                    {
                                      if(match_cons(w_107, sym_BA_2))
                                        {
                                          x_107 = ATgetArgument(w_107, 0);
                                          y_107 = ATgetArgument(w_107, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_107)), not_null(x_107));
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
ATerm topdown_1 (ATerm t, ATerm s_86 (ATerm))
{
  t = s_86(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = topdown_1(t, s_86);
      return(t);
    }
    t = _all(t, n_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL;
  r_109 = t;
  o_109 :
  if(match_cons(r_109, sym__2))
    {
      s_109 = ATgetArgument(r_109, 0);
      v_109 = ATgetArgument(r_109, 1);
      p_109 :
      if(match_cons(s_109, sym__2))
        {
          t_109 = ATgetArgument(s_109, 0);
          u_109 = ATgetArgument(s_109, 1);
          q_109 :
          if(match_cons(v_109, sym__2))
            {
              w_109 = ATgetArgument(v_109, 0);
              x_109 = ATgetArgument(v_109, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_109)), not_null(t_109)), (ATerm) ATinsert(CheckATermList(not_null(x_109)), not_null(u_109)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm f_110 = NULL,g_110 = NULL,h_110 = NULL;
  f_110 = t;
  e_110 :
  if(((ATgetType(f_110) == AT_LIST) && !(ATisEmpty(f_110))))
    {
      g_110 = ATgetFirst((ATermList) f_110);
      h_110 = (ATerm) ATgetNext((ATermList) f_110);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_110), not_null(h_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  j_111 :
  if(((ATgetType(k_111) == AT_LIST) && ATisEmpty(k_111)))
    {
      t = term_v_33;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm h_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_95);
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
  ATerm r_111 = NULL,s_111 = NULL;
  r_111 = t;
  q_111 :
  if(match_cons(r_111, sym_Var_1))
    {
      s_111 = ATgetArgument(r_111, 0);
      {
        ATerm v_111 = NULL,w_111 = NULL;
        t = not_null(r_111);
        {
          ATerm o_5 (ATerm t)
          {
            t = term_k_34;
            return(t);
          }
          t = rewrite_1(t, o_5);
          {
            v_111 = t;
            o_111 :
            if(match_cons(v_111, sym_Defined_1))
              {
                w_111 = ATgetArgument(v_111, 0);
                p_111 :
                if(!(match_string(w_111, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_111));
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
  ATerm l_34;
  l_34 = t;
  {
    ATerm z_111 = NULL;
    ATerm a_112 = NULL;
    a_112 = t;
    if(((z_111 != NULL) && (z_111 != a_112)))
      _fail(a_112);
    else
      z_111 = a_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, not_null(z_111));
      t = printnl_0(t);
    }
  }
  t = l_34;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_34;
  m_34 = t;
  {
    t = error_0(t);
    {
      t = term_l_23;
      t = exit_0(t);
    }
  }
  t = m_34;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL;
    q_112 = t;
    l_112 :
    if(match_cons(q_112, sym_Var_1))
      {
        r_112 = ATgetArgument(q_112, 0);
        {
          ATerm n_34 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_34;
            }
          t = term_p_34;
        }
      }
    else
      {
        if(match_cons(q_112, sym_Wld_0))
          {
            t = term_p_34;
          }
        else
          {
            if(match_cons(q_112, sym_RootApp_1))
              {
                r_112 = ATgetArgument(q_112, 0);
                {
                  ATerm z_112 = NULL;
                  ATerm g_113 = NULL;
                  t = not_null(r_112);
                  {
                    t = tvars_0(t);
                    {
                      ATerm q_5 (ATerm t)
                      {
                        ATerm e_113 = NULL;
                        ATerm f_113 = NULL;
                        f_113 = t;
                        if(((e_113 != NULL) && (e_113 != f_113)))
                          _fail(f_113);
                        else
                          e_113 = f_113;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_113));
                        return(t);
                      }
                      t = map_1(t, q_5);
                      {
                        g_113 = t;
                        if(((z_112 != NULL) && (z_112 != g_113)))
                          _fail(g_113);
                        else
                          z_112 = g_113;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_34, not_null(z_112));
                }
              }
            else
              {
                if(match_cons(q_112, sym_App_2))
                  {
                    r_112 = ATgetArgument(q_112, 0);
                    s_112 = ATgetArgument(q_112, 1);
                    {
                      ATerm j_113 = NULL;
                      ATerm m_113 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_112), not_null(s_112));
                      {
                        t = tvars_0(t);
                        {
                          ATerm r_5 (ATerm t)
                          {
                            ATerm k_113 = NULL;
                            ATerm l_113 = NULL;
                            l_113 = t;
                            if(((k_113 != NULL) && (k_113 != l_113)))
                              _fail(l_113);
                            else
                              k_113 = l_113;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_113));
                            return(t);
                          }
                          t = map_1(t, r_5);
                          {
                            m_113 = t;
                            if(((j_113 != NULL) && (j_113 != m_113)))
                              _fail(m_113);
                            else
                              j_113 = m_113;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_q_34, not_null(j_113));
                    }
                  }
                else
                  {
                    if(match_cons(q_112, sym_Con_3))
                      {
                        r_112 = ATgetArgument(q_112, 0);
                        s_112 = ATgetArgument(q_112, 1);
                        t_112 = ATgetArgument(q_112, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_r_34);
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
  t = alltd_1(t, p_5);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL;
  ATerm j_117 (ATerm t)
  {
    ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,g_117 = NULL;
    ATerm s_34;
    s_34 = t;
    {
      ATerm u_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_115), term_a_35);
      {
        ATerm b_35 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_35;
          }
        {
          ATerm v_116 = NULL;
          t = new_0(t);
          {
            u_116 = t;
            {
              if(((n_116 != NULL) && (n_116 != u_116)))
                _fail(u_116);
              else
                n_116 = u_116;
              {
                t = not_null(s_115);
                {
                  ATerm x_116 = NULL;
                  t = dummify_0(t);
                  {
                    v_116 = t;
                    {
                      if(((p_116 != NULL) && (p_116 != v_116)))
                        _fail(v_116);
                      else
                        p_116 = v_116;
                      {
                        ATerm a_117 = NULL;
                        ATerm c_35 = t;
                        int d_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_116 = NULL;
                            w_116 = t;
                            {
                              if(((s_115 != NULL) && (s_115 != w_116)))
                                _fail(w_116);
                              else
                                s_115 = w_116;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_116));
                            }
                            LocalPopChoice(d_35);
                          }
                        else
                          {
                            t = c_35;
                            {
                            }
                          }
                        {
                          x_116 = t;
                          {
                            if(((o_116 != NULL) && (o_116 != x_116)))
                              _fail(x_116);
                            else
                              o_116 = x_116;
                            {
                              t = not_null(p_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm d_117 = NULL;
                                  ATerm s_5 (ATerm t)
                                  {
                                    ATerm y_116 = NULL;
                                    ATerm z_116 = NULL;
                                    z_116 = t;
                                    if(((y_116 != NULL) && (y_116 != z_116)))
                                      _fail(z_116);
                                    else
                                      y_116 = z_116;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_116));
                                    return(t);
                                  }
                                  t = map_1(t, s_5);
                                  {
                                    a_117 = t;
                                    {
                                      if(((r_116 != NULL) && (r_116 != a_117)))
                                        _fail(a_117);
                                      else
                                        r_116 = a_117;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_115), not_null(u_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm e_117 = NULL;
                                            ATerm t_5 (ATerm t)
                                            {
                                              ATerm b_117 = NULL;
                                              ATerm c_117 = NULL;
                                              c_117 = t;
                                              if(((b_117 != NULL) && (b_117 != c_117)))
                                                _fail(c_117);
                                              else
                                                b_117 = c_117;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_117));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, t_5);
                                            {
                                              d_117 = t;
                                              {
                                                if(((q_116 != NULL) && (q_116 != d_117)))
                                                  _fail(d_117);
                                                else
                                                  q_116 = d_117;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_116), not_null(r_116));
                                                  {
                                                    ATerm f_117 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      e_117 = t;
                                                      {
                                                        if(((s_116 != NULL) && (s_116 != e_117)))
                                                          _fail(e_117);
                                                        else
                                                          s_116 = e_117;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            f_117 = t;
                                                            if(((t_116 != NULL) && (t_116 != f_117)))
                                                              _fail(f_117);
                                                            else
                                                              t_116 = f_117;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = s_34;
    {
      ATerm h_117 = NULL;
      t = not_null(p_115);
      {
        t = q_0(t);
        {
          h_117 = t;
          if(((g_117 != NULL) && (g_117 != h_117)))
            _fail(h_117);
          else
            g_117 = h_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(g_117), (ATerm) ATmakeAppl(sym_Op_2, term_e_35, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_35, (ATerm) ATinsert(CheckATermList(not_null(s_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(t_116))))), not_null(p_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_115), not_null(q_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_116)), not_null(s_115)), not_null(t_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_115))))), not_null(o_116)), (ATerm) ATmakeAppl(sym_Op_2, term_f_35, (ATerm) ATinsert(CheckATermList(not_null(s_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(t_116))))), not_null(u_115)))));
    }
    return(t);
  }
  o_115 = t;
  g_115 :
  if(match_cons(o_115, sym_RDef_3))
    {
      p_115 = ATgetArgument(o_115, 0);
      q_115 = ATgetArgument(o_115, 1);
      r_115 = ATgetArgument(o_115, 2);
      h_115 :
      if(match_cons(r_115, sym_Rule_3))
        {
          s_115 = ATgetArgument(r_115, 0);
          t_115 = ATgetArgument(r_115, 1);
          u_115 = ATgetArgument(r_115, 2);
          i_115 :
          if(match_cons(t_115, sym_Op_2))
            {
              m_115 = ATgetArgument(t_115, 0);
              n_115 = ATgetArgument(t_115, 1);
              j_115 :
              if(((ATgetType(n_115) == AT_LIST) && ATisEmpty(n_115)))
                {
                  k_115 :
                  if(match_string(m_115, "Undefined"))
                    {
                      ATerm p_35 = t;
                      int e_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL,g_116 = NULL;
                          ATerm f_36;
                          f_36 = t;
                          {
                            ATerm c_116 = NULL;
                            ATerm d_116 = NULL;
                            t = new_0(t);
                            {
                              c_116 = t;
                              {
                                if(((a_116 != NULL) && (a_116 != c_116)))
                                  _fail(c_116);
                                else
                                  a_116 = c_116;
                                {
                                  t = not_null(s_115);
                                  {
                                    ATerm f_116 = NULL;
                                    t = dummify_0(t);
                                    {
                                      d_116 = t;
                                      {
                                        if(((z_115 != NULL) && (z_115 != d_116)))
                                          _fail(d_116);
                                        else
                                          z_115 = d_116;
                                        {
                                          ATerm g_36 = t;
                                          int h_36 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm e_116 = NULL;
                                              e_116 = t;
                                              {
                                                if(((s_115 != NULL) && (s_115 != e_116)))
                                                  _fail(e_116);
                                                else
                                                  s_115 = e_116;
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_116));
                                              }
                                              LocalPopChoice(h_36);
                                            }
                                          else
                                            {
                                              t = g_36;
                                              {
                                              }
                                            }
                                          {
                                            f_116 = t;
                                            if(((b_116 != NULL) && (b_116 != f_116)))
                                              _fail(f_116);
                                            else
                                              b_116 = f_116;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = f_36;
                          {
                            ATerm h_116 = NULL;
                            t = not_null(p_115);
                            {
                              t = q_0(t);
                              {
                                h_116 = t;
                                if(((g_116 != NULL) && (g_116 != h_116)))
                                  _fail(h_116);
                                else
                                  g_116 = h_116;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(g_116), (ATerm) ATmakeAppl(sym_Op_2, term_e_35, (ATerm) ATinsert(ATinsert(ATempty, term_a_35), not_null(z_115))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_115), not_null(q_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_116)), not_null(s_115)), term_a_35, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_115))))), not_null(b_116)), term_a_35), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_115), term_r_33)))));
                          }
                          LocalPopChoice(e_36);
                        }
                      else
                        {
                          t = p_35;
                          t = j_117(t);
                        }
                    }
                  else
                    {
                      t = j_117(t);
                    }
                }
              else
                {
                  l_115 :
                  t = j_117(t);
                }
            }
          else
            {
              t = j_117(t);
            }
        }
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
  ATerm f_118 = NULL,g_118 = NULL;
  f_118 = t;
  e_118 :
  if(match_cons(f_118, sym_OverrideDynamicRules_1))
    {
      g_118 = ATgetArgument(f_118, 0);
      {
        t = not_null(g_118);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm v_5 (ATerm t)
            {
              ATerm i_118 = NULL;
              ATerm j_118 = NULL;
              j_118 = t;
              if(((i_118 != NULL) && (i_118 != j_118)))
                _fail(j_118);
              else
                i_118 = j_118;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_118)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, v_5);
            return(t);
          }
          t = map_1(t, u_5);
          t = unzip_1(t, _id);
        }
      }
    }
  else
    {
      if(match_cons(f_118, sym_DynamicRules_1))
        {
          g_118 = ATgetArgument(f_118, 0);
          {
            t = not_null(g_118);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm l_118 = NULL;
                  ATerm m_118 = NULL;
                  m_118 = t;
                  if(((l_118 != NULL) && (l_118 != m_118)))
                    _fail(m_118);
                  else
                    l_118 = m_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_118)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, x_5);
                return(t);
              }
              t = map_1(t, w_5);
              t = unzip_1(t, _id);
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
ATerm split_under_scope_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
  u_118 = t;
  t_118 :
  if(match_cons(u_118, sym_Scope_2))
    {
      v_118 = ATgetArgument(u_118, 0);
      w_118 = ATgetArgument(u_118, 1);
      {
        ATerm z_118 = NULL;
        ATerm y_5 (ATerm t)
        {
          t = term_k_34;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          ATerm a_119 = NULL;
          t = not_null(v_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(w_118);
              {
                t = x_112(t);
                {
                  a_119 = t;
                  if(((z_118 != NULL) && (z_118 != a_119)))
                    _fail(a_119);
                  else
                    z_118 = a_119;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, y_5, z_5);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_118), not_null(z_118));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm d_119 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_88(t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = _one(t, d_119);
      }
    return(t);
  }
  t = d_119(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm e_119 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm u_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_112(t);
          LocalPopChoice(v_36);
        }
      else
        {
          t = u_36;
          t = split_under_scope_1(t, e_119);
        }
      return(t);
    }
    t = oncetd_1(t, a_6);
    return(t);
  }
  t = e_119(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm g_119 = NULL;
    g_119 = t;
    {
      ATerm w_36;
      w_36 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_119)), term_y_36);
        {
          ATerm c_6 (ATerm t)
          {
            t = term_k_34;
            return(t);
          }
          t = assert_1(t, c_6);
        }
      }
      t = w_36;
    }
    return(t);
  }
  t = map_1(t, b_6);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm o_119 = NULL,p_119 = NULL,q_119 = NULL;
  o_119 = t;
  n_119 :
  if(((ATgetType(o_119) == AT_LIST) && !(ATisEmpty(o_119))))
    {
      p_119 = ATgetFirst((ATermList) o_119);
      q_119 = (ATerm) ATgetNext((ATermList) o_119);
      {
        ATerm t_119 = NULL,u_119 = NULL,v_119 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = term_k_34;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          ATerm z_119 = NULL;
          t = not_null(p_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(p_119);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm w_119 = NULL,x_119 = NULL,y_119 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      w_119 = t;
                      l_119 :
                      if(match_cons(w_119, sym__2))
                        {
                          x_119 = ATgetArgument(w_119, 0);
                          y_119 = ATgetArgument(w_119, 1);
                          {
                            if(((u_119 != NULL) && (u_119 != x_119)))
                              _fail(x_119);
                            else
                              u_119 = x_119;
                            {
                              if(((t_119 != NULL) && (t_119 != y_119)))
                                _fail(y_119);
                              else
                                t_119 = y_119;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_119));
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
                  t = split_dynamic_rule_1(t, f_6);
                  {
                    z_119 = t;
                    if(((v_119 != NULL) && (v_119 != z_119)))
                      _fail(z_119);
                    else
                      v_119 = z_119;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, d_6, e_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_119)), not_null(v_119)), not_null(q_119));
          {
            ATerm z_36 = t;
            int c_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(c_37);
              }
            else
              {
                t = z_36;
                t = conc_more_lists_0(t);
              }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm d_120 (ATerm t)
  {
    ATerm d_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        t = d_120(t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = d_37;
        {
        }
      }
    return(t);
  }
  t = d_120(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm e_120 (ATerm t)
  {
    t = d_94(t);
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          t = Cons_2(t, _id, e_120);
        }
    }
    return(t);
  }
  t = e_120(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, g_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL;
  l_120 = t;
  h_120 :
  if(match_cons(l_120, sym_DynRuleScope_2))
    {
      m_120 = ATgetArgument(l_120, 0);
      n_120 = ATgetArgument(l_120, 1);
      i_120 :
      if(((ATgetType(m_120) == AT_LIST) && !(ATisEmpty(m_120))))
        {
          j_120 = ATgetFirst((ATermList) m_120);
          k_120 = (ATerm) ATgetNext((ATermList) m_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_l_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(k_120), not_null(n_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(j_120)))));
        }
      else
        {
          if(((ATgetType(m_120) == AT_LIST) && ATisEmpty(m_120)))
            {
              t = not_null(n_120);
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
  ATerm h_6 (ATerm t)
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DefDynamicRuleScope_0(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, h_6);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          ATerm m_6 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, m_6);
          return(t);
        }
        t = Cons_2(t, l_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, k_6);
      return(t);
    }
    t = Cons_2(t, _id, j_6);
    return(t);
  }
  t = Specification_1(t, i_6);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL;
  x_120 = t;
  w_120 :
  if(match_cons(x_120, sym_ScopeDefault_1))
    {
      y_120 = ATgetArgument(x_120, 0);
      {
        ATerm a_121 = NULL;
        ATerm b_121 = NULL;
        t = not_null(y_120);
        {
          t = tvars_0(t);
          {
            b_121 = t;
            if(((a_121 != NULL) && (a_121 != b_121)))
              _fail(b_121);
            else
              a_121 = b_121;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_121), not_null(y_120));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm j_121 = NULL,k_121 = NULL;
  j_121 = t;
  i_121 :
  if(match_cons(j_121, sym_DynamicRules_1))
    {
      k_121 = ATgetArgument(j_121, 0);
      {
        ATerm n_121 = NULL,p_121 = NULL;
        ATerm o_121 = NULL;
        t = SSLgetAnnotations(not_null(j_121));
        {
          o_121 = t;
          if(((n_121 != NULL) && (n_121 != o_121)))
            _fail(o_121);
          else
            n_121 = o_121;
        }
        {
          t = not_null(k_121);
          {
            ATerm r_121 = NULL;
            t = a_78(t);
            {
              p_121 = t;
              {
                ATerm s_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(p_121)), not_null(n_121));
                {
                  s_121 = t;
                  if(((r_121 != NULL) && (r_121 != s_121)))
                    _fail(s_121);
                  else
                    r_121 = s_121;
                }
                t = not_null(r_121);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
  d_122 = t;
  c_122 :
  if(match_cons(d_122, sym_Scope_2))
    {
      e_122 = ATgetArgument(d_122, 0);
      f_122 = ATgetArgument(d_122, 1);
      {
        ATerm j_122 = NULL,l_122 = NULL;
        ATerm k_122 = NULL;
        t = SSLgetAnnotations(not_null(d_122));
        {
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
        }
        {
          t = not_null(e_122);
          {
            ATerm n_122 = NULL;
            t = u_74(t);
            {
              l_122 = t;
              {
                t = not_null(f_122);
                {
                  ATerm p_122 = NULL;
                  t = v_74(t);
                  {
                    n_122 = t;
                    {
                      ATerm q_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_122), not_null(n_122)), not_null(j_122));
                      {
                        q_122 = t;
                        if(((p_122 != NULL) && (p_122 != q_122)))
                          _fail(q_122);
                        else
                          p_122 = q_122;
                      }
                      t = not_null(p_122);
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
ATerm tboundin_3 (ATerm t, ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm))
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, z_113, x_113);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      t = DynamicRules_1(t, x_113);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm y_122 = NULL,z_122 = NULL;
  y_122 = t;
  x_122 :
  if(match_cons(y_122, sym_DynamicRules_1))
    {
      z_122 = ATgetArgument(y_122, 0);
      {
        t = not_null(z_122);
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
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL;
  j_123 = t;
  e_123 :
  if(match_cons(j_123, sym_LRule_1))
    {
      k_123 = ATgetArgument(j_123, 0);
      f_123 :
      if(match_cons(k_123, sym_Rule_3))
        {
          g_123 = ATgetArgument(k_123, 0);
          h_123 = ATgetArgument(k_123, 1);
          i_123 = ATgetArgument(k_123, 2);
          {
            t = not_null(g_123);
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
      if(match_cons(j_123, sym_Scope_2))
        {
          k_123 = ATgetArgument(j_123, 0);
          l_123 = ATgetArgument(j_123, 1);
          t = not_null(k_123);
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
  ATerm v_123 = NULL,w_123 = NULL;
  v_123 = t;
  u_123 :
  if(match_cons(v_123, sym_Var_1))
    {
      w_123 = ATgetArgument(v_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL;
  b_124 = t;
  a_124 :
  if(match_cons(b_124, sym__2))
    {
      c_124 = ATgetArgument(b_124, 0);
      d_124 = ATgetArgument(b_124, 1);
      {
        t = not_null(c_124);
        {
          ATerm h_124 (ATerm t)
          {
            ATerm q_37 = t;
            int r_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_124);
                LocalPopChoice(r_37);
              }
            else
              {
                t = q_37;
                {
                  ATerm s_37 = t;
                  int t_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_6 (ATerm t)
                      {
                        t = not_null(d_124);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_98, n_6);
                      t = h_124(t);
                      LocalPopChoice(t_37);
                    }
                  else
                    {
                      t = s_37;
                      t = Cons_2(t, _id, h_124);
                    }
                }
              }
            return(t);
          }
          t = h_124(t);
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
ATerm crush_3 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  ATerm m_124 = NULL;
  ATerm o_124 = NULL;
  m_124 = t;
  {
    ATerm p_124 = NULL;
    ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
    t = not_null(m_124);
    {
      p_124 = t;
      {
        t = SSL_explode_term(not_null(p_124));
        {
          r_124 = t;
          l_124 :
          if(match_cons(r_124, sym__2))
            {
              s_124 = ATgetArgument(r_124, 0);
              t_124 = ATgetArgument(r_124, 1);
              if(((o_124 != NULL) && (o_124 != t_124)))
                _fail(t_124);
              else
                o_124 = t_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_124);
      t = foldr_3(t, k_98, l_98, m_98);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
  z_124 = t;
  y_124 :
  if(match_cons(z_124, sym__2))
    {
      a_125 = ATgetArgument(z_124, 0);
      b_125 = ATgetArgument(z_124, 1);
      if(((a_125 != NULL) && (a_125 != b_125)))
        _fail(b_125);
      else
        a_125 = b_125;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_98 (ATerm), ATerm y_98 (ATerm))
{
  ATerm h_125 = NULL,i_125 = NULL,j_125 = NULL;
  h_125 = t;
  g_125 :
  if(((ATgetType(h_125) == AT_LIST) && !(ATisEmpty(h_125))))
    {
      i_125 = ATgetFirst((ATermList) h_125);
      j_125 = (ATerm) ATgetNext((ATermList) h_125);
      {
        t = y_98(t);
        {
          ATerm o_6 (ATerm t)
          {
            ATerm m_125 = NULL;
            m_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_125), not_null(m_125));
              t = x_98(t);
            }
            return(t);
          }
          t = fetch_1(t, o_6);
        }
        t = not_null(j_125);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm s_125 = NULL,t_125 = NULL,u_125 = NULL;
  s_125 = t;
  r_125 :
  if(match_cons(s_125, sym__2))
    {
      t_125 = ATgetArgument(s_125, 0);
      u_125 = ATgetArgument(s_125, 1);
      {
        t = not_null(t_125);
        {
          ATerm y_125 (ATerm t)
          {
            ATerm u_37 = t;
            int v_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(v_37);
              }
            else
              {
                t = u_37;
                {
                  ATerm y_37 = t;
                  int z_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_6 (ATerm t)
                      {
                        t = not_null(u_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_98, p_6);
                      t = y_125(t);
                      LocalPopChoice(z_37);
                    }
                  else
                    {
                      t = y_37;
                      t = Cons_2(t, _id, y_125);
                    }
                }
              }
            return(t);
          }
          t = y_125(t);
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
  ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL;
  c_126 = t;
  a_126 :
  if(match_cons(c_126, sym__2))
    {
      d_126 = ATgetArgument(c_126, 0);
      e_126 = ATgetArgument(c_126, 1);
      b_126 :
      if(((ATgetType(e_126) == AT_LIST) && !(ATisEmpty(e_126))))
        {
          f_126 = ATgetFirst((ATermList) e_126);
          g_126 = (ATerm) ATgetNext((ATermList) e_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_126)), not_null(f_126)), not_null(g_126));
        }
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
  ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL;
  n_126 = t;
  m_126 :
  if(match_cons(n_126, sym__2))
    {
      o_126 = ATgetArgument(n_126, 0);
      p_126 = ATgetArgument(n_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_126)), not_null(o_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
  x_126 = t;
  u_126 :
  if(match_cons(x_126, sym__2))
    {
      y_126 = ATgetArgument(x_126, 0);
      b_127 = ATgetArgument(x_126, 1);
      v_126 :
      if(((ATgetType(y_126) == AT_LIST) && !(ATisEmpty(y_126))))
        {
          z_126 = ATgetFirst((ATermList) y_126);
          a_127 = (ATerm) ATgetNext((ATermList) y_126);
          w_126 :
          if(((ATgetType(b_127) == AT_LIST) && !(ATisEmpty(b_127))))
            {
              c_127 = ATgetFirst((ATermList) b_127);
              d_127 = (ATerm) ATgetNext((ATermList) b_127);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_126), not_null(c_127)), (ATerm) ATmakeAppl(sym__2, not_null(a_127), not_null(d_127)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
  n_127 = t;
  k_127 :
  if(match_cons(n_127, sym__2))
    {
      o_127 = ATgetArgument(n_127, 0);
      p_127 = ATgetArgument(n_127, 1);
      l_127 :
      if(((ATgetType(o_127) == AT_LIST) && ATisEmpty(o_127)))
        {
          m_127 :
          if(((ATgetType(p_127) == AT_LIST) && ATisEmpty(p_127)))
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
ATerm genzip_4 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm r_127 (ATerm t)
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_94(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          t = y_94(t);
          {
            t = _2(t, a_95, r_127);
            t = z_94(t);
          }
        }
      }
    return(t);
  }
  t = r_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_95 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_95);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL,g_128 = NULL;
  c_128 = t;
  a_128 :
  if(((ATgetType(c_128) == AT_LIST) && !(ATisEmpty(c_128))))
    {
      d_128 = ATgetFirst((ATermList) c_128);
      g_128 = (ATerm) ATgetNext((ATermList) c_128);
      b_128 :
      if(match_cons(d_128, sym__2))
        {
          e_128 = ATgetArgument(d_128, 0);
          f_128 = ATgetArgument(d_128, 1);
          {
            ATerm k_128 = NULL,l_128 = NULL,r_128 = NULL,x_128 = NULL;
            ATerm d_38;
            d_38 = t;
            {
              ATerm m_128 = NULL;
              ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
              t = not_null(f_128);
              {
                m_128 = t;
                {
                  t = SSL_explode_term(not_null(m_128));
                  {
                    o_128 = t;
                    v_127 :
                    if(match_cons(o_128, sym__2))
                      {
                        p_128 = ATgetArgument(o_128, 0);
                        q_128 = ATgetArgument(o_128, 1);
                        {
                          if(((k_128 != NULL) && (k_128 != p_128)))
                            _fail(p_128);
                          else
                            k_128 = p_128;
                          if(((l_128 != NULL) && (l_128 != q_128)))
                            _fail(q_128);
                          else
                            l_128 = q_128;
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
            t = d_38;
            {
              ATerm f_38;
              f_38 = t;
              {
                ATerm s_128 = NULL;
                ATerm u_128 = NULL,v_128 = NULL,w_128 = NULL;
                t = not_null(e_128);
                {
                  s_128 = t;
                  {
                    t = SSL_explode_term(not_null(s_128));
                    {
                      u_128 = t;
                      y_127 :
                      if(match_cons(u_128, sym__2))
                        {
                          v_128 = ATgetArgument(u_128, 0);
                          w_128 = ATgetArgument(u_128, 1);
                          {
                            if(((k_128 != NULL) && (k_128 != v_128)))
                              _fail(v_128);
                            else
                              k_128 = v_128;
                            if(((r_128 != NULL) && (r_128 != w_128)))
                              _fail(w_128);
                            else
                              r_128 = w_128;
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
              t = f_38;
              {
                ATerm y_128 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_128), not_null(l_128));
                {
                  t = zip_1(t, _id);
                  {
                    y_128 = t;
                    if(((x_128 != NULL) && (x_128 != y_128)))
                      _fail(y_128);
                    else
                      x_128 = y_128;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_128), not_null(g_128));
                  {
                    ATerm g_38 = t;
                    int h_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(h_38);
                      }
                    else
                      {
                        t = g_38;
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
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL;
  i_129 = t;
  g_129 :
  if(((ATgetType(i_129) == AT_LIST) && !(ATisEmpty(i_129))))
    {
      j_129 = ATgetFirst((ATermList) i_129);
      m_129 = (ATerm) ATgetNext((ATermList) i_129);
      h_129 :
      if(match_cons(j_129, sym__2))
        {
          k_129 = ATgetArgument(j_129, 0);
          l_129 = ATgetArgument(j_129, 1);
          {
            ATerm o_129 = NULL;
            if(((k_129 != NULL) && (k_129 != l_129)))
              _fail(l_129);
            else
              k_129 = l_129;
            {
              if(((o_129 != NULL) && (o_129 != m_129)))
                _fail(m_129);
              else
                o_129 = m_129;
              t = not_null(o_129);
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
ATerm while_not_2 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm q_129 (ATerm t)
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        {
          t = k_86(t);
          t = q_129(t);
        }
      }
    return(t);
  }
  t = q_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  t = m_86(t);
  t = while_not_2(t, n_86, o_86);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm s_129 = NULL;
        s_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_129));
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        ATerm m_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 (ATerm t)
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, t_6);
            LocalPopChoice(o_38);
          }
        else
          {
            t = m_38;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_6, r_6, s_6);
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_129 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm v_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_129 = NULL;
              ATerm x_38;
              x_38 = t;
              {
                ATerm x_129 = NULL;
                t = n_112(t);
                {
                  x_129 = t;
                  if(((w_129 != NULL) && (w_129 != x_129)))
                    _fail(x_129);
                  else
                    w_129 = x_129;
                }
              }
              t = x_38;
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm w_6 (ATerm t)
                  {
                    t = not_null(w_129);
                    return(t);
                  }
                  t = split_2(t, y_129, w_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_112(t, u_6, y_129, v_6);
                {
                  ATerm x_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm y_6 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, x_6, y_6, _id);
                }
              }
              LocalPopChoice(w_38);
            }
          else
            {
              t = v_38;
              {
                ATerm z_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm a_7 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, z_6, a_7, y_129);
              }
            }
        }
      }
    return(t);
  }
  t = y_129(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm y_38 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = y_38;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, b_7, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL;
  e_130 = t;
  c_130 :
  if(match_cons(e_130, sym_LRule_1))
    {
      f_130 = ATgetArgument(e_130, 0);
      d_130 :
      if(match_cons(f_130, sym_Rule_3))
        {
          g_130 = ATgetArgument(f_130, 0);
          h_130 = ATgetArgument(f_130, 1);
          i_130 = ATgetArgument(f_130, 2);
          {
            ATerm m_130 = NULL;
            ATerm n_130 = NULL;
            t = not_null(g_130);
            {
              t = tvars_0(t);
              {
                n_130 = t;
                if(((m_130 != NULL) && (m_130 != n_130)))
                  _fail(n_130);
                else
                  m_130 = n_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_130), not_null(h_130), not_null(i_130))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = bottomup_1(t, t_86);
    return(t);
  }
  t = _all(t, c_7);
  t = t_86(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefLRule_0(t);
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            t = DefScopeDefault_0(t);
          }
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, d_7);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_130 = NULL,t_130 = NULL,u_130 = NULL;
  s_130 = t;
  r_130 :
  if(((ATgetType(s_130) == AT_LIST) && !(ATisEmpty(s_130))))
    {
      t_130 = ATgetFirst((ATermList) s_130);
      u_130 = (ATerm) ATgetNext((ATermList) s_130);
      t = not_null(t_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
  z_130 = t;
  y_130 :
  if(match_cons(z_130, sym__2))
    {
      a_131 = ATgetArgument(z_130, 0);
      b_131 = ATgetArgument(z_130, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_131), not_null(b_131));
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
ATerm rewrite_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm h_131 = NULL;
  ATerm j_131 = NULL;
  h_131 = t;
  {
    ATerm k_131 = NULL;
    t = term_l_39;
    {
      t = p_103(t);
      {
        k_131 = t;
        if(((j_131 != NULL) && (j_131 != k_131)))
          _fail(k_131);
        else
          j_131 = k_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_131), not_null(h_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL;
  u_131 = t;
  t_131 :
  if(match_cons(u_131, sym_Var_1))
    {
      v_131 = ATgetArgument(u_131, 0);
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_131 = NULL,z_131 = NULL;
            t = not_null(u_131);
            {
              ATerm e_7 (ATerm t)
              {
                t = term_o_39;
                return(t);
              }
              t = rewrite_1(t, e_7);
              {
                y_131 = t;
                p_131 :
                if(match_cons(y_131, sym_Defined_1))
                  {
                    z_131 = ATgetArgument(y_131, 0);
                    q_131 :
                    if(!(match_string(z_131, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_131), (ATerm) ATempty);
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            {
              ATerm c_132 = NULL,e_132 = NULL;
              t = not_null(u_131);
              {
                ATerm f_7 (ATerm t)
                {
                  t = term_o_39;
                  return(t);
                }
                t = rewrite_1(t, f_7);
                {
                  c_132 = t;
                  r_131 :
                  if(match_cons(c_132, sym_Defined_1))
                    {
                      e_132 = ATgetArgument(c_132, 0);
                      s_131 :
                      if(!(match_string(e_132, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_131), (ATerm) ATempty);
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm h_132 (ATerm t)
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = _all(t, h_132);
      }
    return(t);
  }
  t = h_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_103 (ATerm))
{
  ATerm o_132 = NULL,p_132 = NULL,q_132 = NULL;
  o_132 = t;
  n_132 :
  if(match_cons(o_132, sym__2))
    {
      p_132 = ATgetArgument(o_132, 0);
      q_132 = ATgetArgument(o_132, 1);
      {
        ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL;
        ATerm r_39;
        r_39 = t;
        {
          ATerm w_132 = NULL;
          ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL;
          t = n_103(t);
          {
            w_132 = t;
            {
              if(((t_132 != NULL) && (t_132 != w_132)))
                _fail(w_132);
              else
                t_132 = w_132;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_132), not_null(p_132), not_null(q_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_39 = t;
                    int v_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_132), term_w_39);
                        t = table_get_0(t);
                        LocalPopChoice(v_39);
                      }
                    else
                      {
                        t = s_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_132 = t;
                      m_132 :
                      if(((ATgetType(x_132) == AT_LIST) && !(ATisEmpty(x_132))))
                        {
                          y_132 = ATgetFirst((ATermList) x_132);
                          z_132 = (ATerm) ATgetNext((ATermList) x_132);
                          {
                            if(((u_132 != NULL) && (u_132 != y_132)))
                              _fail(y_132);
                            else
                              u_132 = y_132;
                            {
                              if(((v_132 != NULL) && (v_132 != z_132)))
                                _fail(z_132);
                              else
                                v_132 = z_132;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_132), term_w_39, (ATerm) ATinsert(CheckATermList(not_null(v_132)), (ATerm) ATinsert(CheckATermList(not_null(u_132)), not_null(p_132))));
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
        t = r_39;
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
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL,n_133 = NULL;
  j_133 = t;
  f_133 :
  if(match_cons(j_133, sym_Overlay_3))
    {
      k_133 = ATgetArgument(j_133, 0);
      l_133 = ATgetArgument(j_133, 1);
      i_133 = ATgetArgument(j_133, 2);
      g_133 :
      if(((ATgetType(l_133) == AT_LIST) && ATisEmpty(l_133)))
        {
          {
            ATerm b_40;
            b_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_133)), term_k_40);
              {
                ATerm g_7 (ATerm t)
                {
                  t = term_o_39;
                  return(t);
                }
                t = assert_1(t, g_7);
              }
            }
            t = b_40;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_133, sym_OpDecl_2))
        {
          k_133 = ATgetArgument(j_133, 0);
          l_133 = ATgetArgument(j_133, 1);
          h_133 :
          if(match_cons(l_133, sym_ConstType_1))
            {
              n_133 = ATgetArgument(l_133, 0);
              {
                ATerm l_40;
                l_40 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_133)), term_k_41);
                  {
                    ATerm h_7 (ATerm t)
                    {
                      t = term_o_39;
                      return(t);
                    }
                    t = assert_1(t, h_7);
                  }
                }
                t = l_40;
              }
            }
          else
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
ATerm Overlays_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm b_134 = NULL,c_134 = NULL;
  b_134 = t;
  a_134 :
  if(match_cons(b_134, sym_Overlays_1))
    {
      c_134 = ATgetArgument(b_134, 0);
      {
        ATerm f_134 = NULL,h_134 = NULL;
        ATerm g_134 = NULL;
        t = SSLgetAnnotations(not_null(b_134));
        {
          g_134 = t;
          if(((f_134 != NULL) && (f_134 != g_134)))
            _fail(g_134);
          else
            f_134 = g_134;
        }
        {
          t = not_null(c_134);
          {
            ATerm j_134 = NULL;
            t = c_77(t);
            {
              h_134 = t;
              {
                ATerm k_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(h_134)), not_null(f_134));
                {
                  k_134 = t;
                  if(((j_134 != NULL) && (j_134 != k_134)))
                    _fail(k_134);
                  else
                    j_134 = k_134;
                }
                t = not_null(j_134);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Constructors_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm w_134 = NULL,x_134 = NULL;
  w_134 = t;
  v_134 :
  if(match_cons(w_134, sym_Constructors_1))
    {
      x_134 = ATgetArgument(w_134, 0);
      {
        ATerm a_135 = NULL,c_135 = NULL;
        ATerm b_135 = NULL;
        t = SSLgetAnnotations(not_null(w_134));
        {
          b_135 = t;
          if(((a_135 != NULL) && (a_135 != b_135)))
            _fail(b_135);
          else
            a_135 = b_135;
        }
        {
          t = not_null(x_134);
          {
            ATerm e_135 = NULL;
            t = x_76(t);
            {
              c_135 = t;
              {
                ATerm f_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(c_135)), not_null(a_135));
                {
                  f_135 = t;
                  if(((e_135 != NULL) && (e_135 != f_135)))
                    _fail(f_135);
                  else
                    e_135 = f_135;
                }
                t = not_null(e_135);
              }
            }
          }
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
  ATerm m_135 = NULL,n_135 = NULL,o_135 = NULL;
  m_135 = t;
  l_135 :
  if(((ATgetType(m_135) == AT_LIST) && !(ATisEmpty(m_135))))
    {
      n_135 = ATgetFirst((ATermList) m_135);
      o_135 = (ATerm) ATgetNext((ATermList) m_135);
      t = not_null(o_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL;
  v_135 = t;
  u_135 :
  if(match_cons(v_135, sym__2))
    {
      w_135 = ATgetArgument(v_135, 0);
      x_135 = ATgetArgument(v_135, 1);
      {
        ATerm l_41;
        l_41 = t;
        {
          ATerm a_136 = NULL;
          ATerm b_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_135), not_null(x_135));
          {
            ATerm m_41 = t;
            int n_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_41);
              }
            else
              {
                t = m_41;
                t = (ATerm) ATempty;
              }
            {
              b_136 = t;
              if(((a_136 != NULL) && (a_136 != b_136)))
                _fail(b_136);
              else
                a_136 = b_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_135), not_null(x_135), not_null(a_136));
            t = table_put_0(t);
          }
        }
        t = l_41;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm k_136 = NULL,l_136 = NULL,m_136 = NULL;
  ATerm o_41;
  o_41 = t;
  {
    ATerm n_136 = NULL;
    ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL;
    t = k_103(t);
    {
      n_136 = t;
      {
        if(((m_136 != NULL) && (m_136 != n_136)))
          _fail(n_136);
        else
          m_136 = n_136;
        {
          ATerm p_41 = t;
          int q_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_136), term_w_39);
              t = table_get_0(t);
              LocalPopChoice(q_41);
            }
          else
            {
              t = p_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_136 = t;
            j_136 :
            if(((ATgetType(o_136) == AT_LIST) && !(ATisEmpty(o_136))))
              {
                p_136 = ATgetFirst((ATermList) o_136);
                q_136 = (ATerm) ATgetNext((ATermList) o_136);
                {
                  if(((l_136 != NULL) && (l_136 != p_136)))
                    _fail(p_136);
                  else
                    l_136 = p_136;
                  {
                    if(((k_136 != NULL) && (k_136 != q_136)))
                      _fail(q_136);
                    else
                      k_136 = q_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_136), term_w_39, not_null(k_136));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(l_136);
                          {
                            ATerm i_7 (ATerm t)
                            {
                              ATerm r_136 = NULL;
                              r_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_136), not_null(r_136));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_7);
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
  t = o_41;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm r_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_85(t);
      t = o_85(t);
      LocalPopChoice(t_41);
    }
  else
    {
      t = r_41;
      {
        t = o_85(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm y_136 = NULL;
  ATerm y_41;
  y_41 = t;
  {
    ATerm z_136 = NULL;
    ATerm a_137 = NULL;
    t = j_103(t);
    {
      z_136 = t;
      {
        if(((y_136 != NULL) && (y_136 != z_136)))
          _fail(z_136);
        else
          y_136 = z_136;
        {
          ATerm b_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_136), term_w_39);
          {
            ATerm z_41 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_42);
              }
            else
              {
                t = z_41;
                t = (ATerm) ATempty;
              }
            {
              b_137 = t;
              if(((a_137 != NULL) && (a_137 != b_137)))
                _fail(b_137);
              else
                a_137 = b_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_136), term_w_39, (ATerm) ATinsert(CheckATermList(not_null(a_137)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_41;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_103 (ATerm), ATerm m_103 (ATerm))
{
  t = begin_scope_1(t, l_103);
  {
    ATerm j_7 (ATerm t)
    {
      t = end_scope_1(t, l_103);
      return(t);
    }
    t = restore_always_2(t, m_103, j_7);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    t = term_o_39;
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      ATerm n_7 (ATerm t)
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_42 = t;
            int i_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm p_7 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, p_7);
                  return(t);
                }
                t = Constructors_1(t, o_7);
                LocalPopChoice(i_42);
              }
            else
              {
                t = h_42;
                {
                  ATerm q_7 (ATerm t)
                  {
                    ATerm r_7 (ATerm t)
                    {
                      t = try_1(t, DeclareVarToConst_0);
                      return(t);
                    }
                    t = map_1(t, r_7);
                    return(t);
                  }
                  t = Overlays_1(t, q_7);
                }
              }
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            {
            }
          }
        return(t);
      }
      t = map_1(t, n_7);
      return(t);
    }
    t = Specification_1(t, m_7);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, k_7, l_7);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm g_137 = NULL,h_137 = NULL;
  g_137 = t;
  f_137 :
  if(match_cons(g_137, sym_Rules_1))
    {
      h_137 = ATgetArgument(g_137, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm j_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = j_42;
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              t = filter_1(t, n_100);
              return(t);
            }
            t = Cons_2(t, n_100, s_7);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            {
              ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL;
              m_137 = t;
              l_137 :
              if(((ATgetType(m_137) == AT_LIST) && !(ATisEmpty(m_137))))
                {
                  n_137 = ATgetFirst((ATermList) m_137);
                  o_137 = (ATerm) ATgetNext((ATermList) m_137);
                  {
                    t = not_null(o_137);
                    t = filter_1(t, n_100);
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
  ATerm w_137 = NULL,x_137 = NULL;
  w_137 = t;
  v_137 :
  if(match_cons(w_137, sym_Signature_1))
    {
      x_137 = ATgetArgument(w_137, 0);
      {
        ATerm z_137 = NULL;
        ATerm d_138 = NULL;
        t = not_null(x_137);
        {
          ATerm t_7 (ATerm t)
          {
            ATerm a_138 = NULL,b_138 = NULL;
            a_138 = t;
            t_137 :
            if(match_cons(a_138, sym_Constructors_1))
              {
                b_138 = ATgetArgument(a_138, 0);
                t = not_null(b_138);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, t_7);
          {
            t = concat_0(t);
            {
              d_138 = t;
              if(((z_137 != NULL) && (z_137 != d_138)))
                _fail(d_138);
              else
                z_137 = d_138;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(z_137));
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
  ATerm x_138 = NULL,y_138 = NULL,z_138 = NULL;
  x_138 = t;
  w_138 :
  if(match_cons(x_138, sym__2))
    {
      y_138 = ATgetArgument(x_138, 0);
      z_138 = ATgetArgument(x_138, 1);
      {
        ATerm c_139 = NULL,d_139 = NULL;
        ATerm e_139 = NULL;
        ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL;
        t = not_null(y_138);
        {
          e_139 = t;
          {
            t = SSL_explode_term(not_null(e_139));
            {
              g_139 = t;
              k_138 :
              if(match_cons(g_139, sym__2))
                {
                  h_139 = ATgetArgument(g_139, 0);
                  i_139 = ATgetArgument(g_139, 1);
                  l_138 :
                  if(((ATgetType(i_139) == AT_LIST) && !(ATisEmpty(i_139))))
                    {
                      j_139 = ATgetFirst((ATermList) i_139);
                      k_139 = (ATerm) ATgetNext((ATermList) i_139);
                      m_138 :
                      if(((ATgetType(k_139) == AT_LIST) && ATisEmpty(k_139)))
                        {
                          {
                            if(((c_139 != NULL) && (c_139 != h_139)))
                              _fail(h_139);
                            else
                              c_139 = h_139;
                            if(((d_139 != NULL) && (d_139 != j_139)))
                              _fail(j_139);
                            else
                              d_139 = j_139;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
          t = not_null(z_138);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm l_139 = NULL;
              ATerm n_139 = NULL,v_139 = NULL,x_139 = NULL,a_140 = NULL;
              l_139 = t;
              {
                ATerm u_42;
                u_42 = t;
                {
                  ATerm o_139 = NULL;
                  ATerm q_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL,u_139 = NULL;
                  t = not_null(l_139);
                  {
                    o_139 = t;
                    {
                      t = SSL_explode_term(not_null(o_139));
                      {
                        q_139 = t;
                        q_138 :
                        if(match_cons(q_139, sym__2))
                          {
                            r_139 = ATgetArgument(q_139, 0);
                            s_139 = ATgetArgument(q_139, 1);
                            r_138 :
                            if(((ATgetType(s_139) == AT_LIST) && !(ATisEmpty(s_139))))
                              {
                                t_139 = ATgetFirst((ATermList) s_139);
                                u_139 = (ATerm) ATgetNext((ATermList) s_139);
                                s_138 :
                                if(((ATgetType(u_139) == AT_LIST) && ATisEmpty(u_139)))
                                  {
                                    {
                                      if(((c_139 != NULL) && (c_139 != r_139)))
                                        _fail(r_139);
                                      else
                                        c_139 = r_139;
                                      if(((n_139 != NULL) && (n_139 != t_139)))
                                        _fail(t_139);
                                      else
                                        n_139 = t_139;
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
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
                t = u_42;
                {
                  ATerm v_42;
                  v_42 = t;
                  {
                    ATerm w_139 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_139), not_null(d_139));
                    {
                      ATerm w_42 = t;
                      int x_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = conc_two_lists_0(t);
                          LocalPopChoice(x_42);
                        }
                      else
                        {
                          t = w_42;
                          t = conc_more_lists_0(t);
                        }
                      {
                        w_139 = t;
                        if(((v_139 != NULL) && (v_139 != w_139)))
                          _fail(w_139);
                        else
                          v_139 = w_139;
                      }
                    }
                  }
                  t = v_42;
                  {
                    ATerm d_43;
                    d_43 = t;
                    {
                      ATerm y_139 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(v_139));
                      {
                        y_139 = t;
                        if(((x_139 != NULL) && (x_139 != y_139)))
                          _fail(y_139);
                        else
                          x_139 = y_139;
                      }
                    }
                    t = d_43;
                    {
                      t = SSL_mkterm(not_null(c_139), not_null(x_139));
                      {
                        a_140 = t;
                        t = not_null(a_140);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, u_7);
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_99(t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL;
        p_140 = t;
        o_140 :
        if(((ATgetType(p_140) == AT_LIST) && !(ATisEmpty(p_140))))
          {
            q_140 = ATgetFirst((ATermList) p_140);
            r_140 = (ATerm) ATgetNext((ATermList) p_140);
            {
              ATerm v_140 = NULL,x_140 = NULL;
              ATerm i_43;
              i_43 = t;
              {
                ATerm w_140 = NULL;
                t = not_null(q_140);
                {
                  t = o_99(t);
                  {
                    w_140 = t;
                    if(((v_140 != NULL) && (v_140 != w_140)))
                      _fail(w_140);
                    else
                      v_140 = w_140;
                  }
                }
              }
              t = i_43;
              {
                ATerm y_140 = NULL;
                t = not_null(r_140);
                {
                  t = foldr_3(t, m_99, n_99, o_99);
                  {
                    y_140 = t;
                    if(((x_140 != NULL) && (x_140 != y_140)))
                      _fail(y_140);
                    else
                      x_140 = y_140;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_140), not_null(x_140));
                  t = n_99(t);
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
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_43), term_k_43), term_j_43);
      return(t);
    }
    ATerm x_7 (ATerm t)
    {
      ATerm n_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = GetConstructors_0(t);
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              t = RulesToStrategies_0(t);
            }
          LocalPopChoice(o_43);
        }
      else
        {
          t = n_43;
          {
          }
        }
      return(t);
    }
    t = foldr_3(t, w_7, InsertBSpec_0, x_7);
    return(t);
  }
  t = Specification_1(t, v_7);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm r_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0(t);
          LocalPopChoice(s_43);
        }
      else
        {
          t = r_43;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, y_7);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm z_7 (ATerm t)
            {
              ATerm u_43 = t;
              int c_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(c_44);
                }
              else
                {
                  t = u_43;
                  {
                  }
                }
              return(t);
            }
            t = topdown_1(t, z_7);
            {
              ATerm a_8 (ATerm t)
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm e_141 = NULL,f_141 = NULL;
                  e_141 = t;
                  d_141 :
                  if(match_cons(e_141, sym_Constructors_1))
                    {
                      f_141 = ATgetArgument(e_141, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(f_141))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, b_8);
                return(t);
              }
              t = Specification_1(t, a_8);
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
  ATerm c_8 (ATerm t)
  {
    t = term_d_44;
    return(t);
  }
  t = timing_1(t, c_8);
  {
    t = normalize_spec_0(t);
    {
      ATerm d_8 (ATerm t)
      {
        t = term_e_44;
        return(t);
      }
      t = timing_1(t, d_8);
      {
        ATerm n_44;
        n_44 = t;
        t = spec_use_def_0(t);
        t = n_44;
        {
          ATerm e_8 (ATerm t)
          {
            t = term_o_44;
            return(t);
          }
          t = timing_1(t, e_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm f_8 (ATerm t)
              {
                t = term_p_44;
                return(t);
              }
              t = timing_1(t, f_8);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm g_8 (ATerm t)
                  {
                    t = term_t_44;
                    return(t);
                  }
                  t = timing_1(t, g_8);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = term_u_44;
                        return(t);
                      }
                      t = timing_1(t, h_8);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm i_8 (ATerm t)
                          {
                            t = term_v_44;
                            return(t);
                          }
                          t = timing_1(t, i_8);
                          {
                            t = strename_0(t);
                            {
                              ATerm j_8 (ATerm t)
                              {
                                t = term_w_44;
                                return(t);
                              }
                              t = timing_1(t, j_8);
                              {
                                ATerm k_8 (ATerm t)
                                {
                                  ATerm l_8 (ATerm t)
                                  {
                                    ATerm m_8 (ATerm t)
                                    {
                                      t = Strategies_1(t, desugar_spec_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, m_8, Nil_0);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, l_8);
                                  return(t);
                                }
                                t = Specification_1(t, k_8);
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm o_141 = NULL,p_141 = NULL,q_141 = NULL;
  o_141 = t;
  n_141 :
  if(match_cons(o_141, sym__2))
    {
      p_141 = ATgetArgument(o_141, 0);
      q_141 = ATgetArgument(o_141, 1);
      {
        ATerm u_141 = NULL,w_141 = NULL;
        ATerm v_141 = NULL;
        t = SSLgetAnnotations(not_null(o_141));
        {
          v_141 = t;
          if(((u_141 != NULL) && (u_141 != v_141)))
            _fail(v_141);
          else
            u_141 = v_141;
        }
        {
          t = not_null(p_141);
          {
            ATerm y_141 = NULL;
            t = b_73(t);
            {
              w_141 = t;
              {
                t = not_null(q_141);
                {
                  ATerm a_142 = NULL;
                  t = c_73(t);
                  {
                    y_141 = t;
                    {
                      ATerm b_142 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_141), not_null(y_141)), not_null(u_141));
                      {
                        b_142 = t;
                        if(((a_142 != NULL) && (a_142 != b_142)))
                          _fail(b_142);
                        else
                          a_142 = b_142;
                      }
                      t = not_null(a_142);
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
  ATerm j_142 = NULL;
  ATerm x_44;
  x_44 = t;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm k_142 = NULL,l_142 = NULL;
      k_142 = t;
      i_142 :
      if(match_cons(k_142, sym_Program_1))
        {
          l_142 = ATgetArgument(k_142, 0);
          if(((j_142 != NULL) && (j_142 != l_142)))
            _fail(l_142);
          else
            j_142 = l_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_44), not_null(j_142)), term_y_44));
      {
        t = printnl_0(t);
        {
          t = term_l_23;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_44;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL;
  p_142 = t;
  o_142 :
  if(match_cons(p_142, sym__2))
    {
      q_142 = ATgetArgument(p_142, 0);
      r_142 = ATgetArgument(p_142, 1);
      {
        ATerm a_45;
        a_45 = t;
        t = SSL_printnl(not_null(q_142), not_null(r_142));
        t = a_45;
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
  ATerm w_142 = NULL;
  w_142 = t;
  t = SSL_implode_string(not_null(w_142));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      {
        ATerm b_143 = NULL,c_143 = NULL,d_143 = NULL;
        b_143 = t;
        a_143 :
        if(((ATgetType(b_143) == AT_LIST) && !(ATisEmpty(b_143))))
          {
            c_143 = ATgetFirst((ATermList) b_143);
            d_143 = (ATerm) ATgetNext((ATermList) b_143);
            {
              t = not_null(c_143);
              {
                ATerm o_8 (ATerm t)
                {
                  t = not_null(d_143);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_8);
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
  ATerm n_143 = NULL;
  ATerm p_143 = NULL;
  n_143 = t;
  {
    ATerm q_143 = NULL;
    ATerm s_143 = NULL,t_143 = NULL,u_143 = NULL;
    t = not_null(n_143);
    {
      q_143 = t;
      {
        t = SSL_explode_term(not_null(q_143));
        {
          s_143 = t;
          l_143 :
          if(match_cons(s_143, sym__2))
            {
              t_143 = ATgetArgument(s_143, 0);
              u_143 = ATgetArgument(s_143, 1);
              m_143 :
              if(match_string(t_143, ""))
                {
                  if(((p_143 != NULL) && (p_143 != u_143)))
                    _fail(u_143);
                  else
                    p_143 = u_143;
                }
              else
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
      t = not_null(p_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm y_143 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_143);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          t = Nil_0(t);
          t = l_93(t);
        }
      }
    return(t);
  }
  t = y_143(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
  b_144 = t;
  a_144 :
  if(match_cons(b_144, sym__2))
    {
      c_144 = ATgetArgument(b_144, 0);
      d_144 = ATgetArgument(b_144, 1);
      {
        t = not_null(c_144);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(d_144);
            return(t);
          }
          t = at_end_1(t, p_8);
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
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_144 = NULL;
  i_144 = t;
  t = SSL_explode_string(not_null(i_144));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_45);
      }
    else
      {
        t = k_45;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_144 = NULL;
  m_144 = t;
  t = SSL_is_string(not_null(m_144));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_8);
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            {
              ATerm v_144 = NULL,w_144 = NULL,x_144 = NULL;
              v_144 = t;
              u_144 :
              if(match_cons(v_144, sym_Path_1))
                {
                  w_144 = ATgetArgument(v_144, 0);
                  t = not_null(w_144);
                }
              else
                {
                  if(match_cons(v_144, sym_Var_1))
                    {
                      w_144 = ATgetArgument(v_144, 0);
                      {
                        t = not_null(w_144);
                        {
                          ATerm l_46 = t;
                          int m_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_46);
                            }
                          else
                            {
                              t = l_46;
                              {
                                ATerm r_8 (ATerm t)
                                {
                                  t = term_o_46;
                                  return(t);
                                }
                                t = debug_1(t, r_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_144, sym_Prefix_2))
                        {
                          w_144 = ATgetArgument(v_144, 0);
                          x_144 = ATgetArgument(v_144, 1);
                          {
                            ATerm c_145 = NULL,e_145 = NULL;
                            ATerm p_46;
                            p_46 = t;
                            {
                              ATerm d_145 = NULL;
                              t = not_null(w_144);
                              {
                                t = eval_config_0(t);
                                {
                                  d_145 = t;
                                  if(((c_145 != NULL) && (c_145 != d_145)))
                                    _fail(d_145);
                                  else
                                    c_145 = d_145;
                                }
                              }
                            }
                            t = p_46;
                            {
                              ATerm f_145 = NULL;
                              t = not_null(x_144);
                              {
                                t = eval_config_0(t);
                                {
                                  f_145 = t;
                                  if(((e_145 != NULL) && (e_145 != f_145)))
                                    _fail(f_145);
                                  else
                                    e_145 = f_145;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_145), not_null(e_145));
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
  ATerm n_145 = NULL;
  n_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_46, not_null(n_145));
    {
      t = table_get_0(t);
      {
        ATerm r_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_46;
              t_46 = t;
              {
                ATerm p_145 = NULL;
                ATerm q_145 = NULL;
                q_145 = t;
                if(((p_145 != NULL) && (p_145 != q_145)))
                  _fail(q_145);
                else
                  p_145 = q_145;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_46, not_null(n_145), not_null(p_145));
                  t = table_put_0(t);
                }
              }
              t = t_46;
            }
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_46;
      z_46 = t;
      {
        ATerm u_145 = NULL;
        ATerm v_145 = NULL;
        t = term_e_17;
        {
          t = get_config_0(t);
          {
            v_145 = t;
            if(((u_145 != NULL) && (u_145 != v_145)))
              _fail(v_145);
            else
              u_145 = v_145;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_145), term_e_47);
          t = geq_0(t);
        }
      }
      t = z_46;
      t = r_106(t);
      LocalPopChoice(v_46);
    }
  else
    {
      t = u_46;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL;
  z_145 = t;
  y_145 :
  if(match_cons(z_145, sym__2))
    {
      a_146 = ATgetArgument(z_145, 0);
      b_146 = ATgetArgument(z_145, 1);
      t = SSL_WriteToTextFile(not_null(a_146), not_null(b_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_146 = NULL,i_146 = NULL,j_146 = NULL;
  h_146 = t;
  g_146 :
  if(match_cons(h_146, sym__2))
    {
      i_146 = ATgetArgument(h_146, 0);
      j_146 = ATgetArgument(h_146, 1);
      t = SSL_WriteToBinaryFile(not_null(i_146), not_null(j_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_146 = NULL;
  ATerm f_47;
  f_47 = t;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm g_47 = t;
      int i_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            ATerm s_146 = NULL,t_146 = NULL;
            s_146 = t;
            o_146 :
            if(match_cons(s_146, sym_Output_1))
              {
                t_146 = ATgetArgument(s_146, 0);
                if(((r_146 != NULL) && (r_146 != t_146)))
                  _fail(t_146);
                else
                  r_146 = t_146;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_8);
          LocalPopChoice(i_47);
        }
      else
        {
          t = g_47;
          {
            ATerm u_146 = NULL;
            t = term_j_47;
            {
              u_146 = t;
              if(((r_146 != NULL) && (r_146 != u_146)))
                _fail(u_146);
              else
                r_146 = u_146;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_8, _id);
  }
  t = f_47;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm v_8 (ATerm t)
      {
        t = not_null(r_146);
        return(t);
      }
      t = split_2(t, v_8, _id);
      return(t);
    }
    t = _2(t, _id, u_8);
    {
      ATerm k_47 = t;
      int l_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_8 (ATerm t)
          {
            ATerm x_8 (ATerm t)
            {
              ATerm v_146 = NULL;
              v_146 = t;
              q_146 :
              if(!(match_cons(v_146, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_8);
            return(t);
          }
          t = _2(t, w_8, WriteToBinaryFile_0);
          LocalPopChoice(l_47);
        }
      else
        {
          t = k_47;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm b_147 = NULL,d_147 = NULL,e_147 = NULL,f_147 = NULL;
  ATerm m_47;
  m_47 = t;
  t = dtime_0(t);
  t = m_47;
  {
    t = y_104(t);
    {
      ATerm n_47;
      n_47 = t;
      {
        ATerm c_147 = NULL;
        t = dtime_0(t);
        {
          c_147 = t;
          if(((b_147 != NULL) && (b_147 != c_147)))
            _fail(c_147);
          else
            b_147 = c_147;
        }
      }
      t = n_47;
      {
        d_147 = t;
        a_147 :
        if(match_cons(d_147, sym__2))
          {
            e_147 = ATgetArgument(d_147, 0);
            f_147 = ATgetArgument(d_147, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_147)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_147))), not_null(f_147));
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
ATerm debug_1 (ATerm t, ATerm u_103 (ATerm))
{
  ATerm o_47;
  o_47 = t;
  {
    ATerm m_147 = NULL,o_147 = NULL;
    ATerm r_47;
    r_47 = t;
    {
      ATerm n_147 = NULL;
      t = u_103(t);
      {
        n_147 = t;
        if(((m_147 != NULL) && (m_147 != n_147)))
          _fail(n_147);
        else
          m_147 = n_147;
      }
    }
    t = r_47;
    {
      ATerm p_147 = NULL;
      p_147 = t;
      if(((o_147 != NULL) && (o_147 != p_147)))
        _fail(p_147);
      else
        o_147 = p_147;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_147)), not_null(m_147)));
        t = printnl_0(t);
      }
    }
  }
  t = o_47;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_147 = NULL;
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_147 = NULL;
      u_147 = t;
      {
        if(((t_147 != NULL) && (t_147 != u_147)))
          _fail(u_147);
        else
          t_147 = u_147;
        t = SSL_ReadFromFile(not_null(t_147));
      }
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      {
        ATerm y_8 (ATerm t)
        {
          t = term_u_47;
          return(t);
        }
        t = debug_1(t, y_8);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_100 (ATerm), ATerm a_101 (ATerm))
{
  ATerm y_147 = NULL,a_148 = NULL;
  ATerm v_47;
  v_47 = t;
  {
    ATerm z_147 = NULL;
    t = z_100(t);
    {
      z_147 = t;
      if(((y_147 != NULL) && (y_147 != z_147)))
        _fail(z_147);
      else
        y_147 = z_147;
    }
  }
  t = v_47;
  {
    ATerm b_148 = NULL;
    t = a_101(t);
    {
      b_148 = t;
      if(((a_148 != NULL) && (a_148 != b_148)))
        _fail(b_148);
      else
        a_148 = b_148;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_147), not_null(a_148));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_148 = NULL;
  ATerm w_47;
  w_47 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 (ATerm t)
        {
          ATerm i_148 = NULL,j_148 = NULL;
          i_148 = t;
          f_148 :
          if(match_cons(i_148, sym_Input_1))
            {
              j_148 = ATgetArgument(i_148, 0);
              if(((h_148 != NULL) && (h_148 != j_148)))
                _fail(j_148);
              else
                h_148 = j_148;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_8);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        {
          ATerm k_148 = NULL;
          t = term_z_47;
          {
            k_148 = t;
            if(((h_148 != NULL) && (h_148 != k_148)))
              _fail(k_148);
            else
              h_148 = k_148;
          }
        }
      }
  }
  t = w_47;
  {
    ATerm a_9 (ATerm t)
    {
      t = not_null(h_148);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_9);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm o_148 = NULL;
    o_148 = t;
    n_148 :
    if(!(match_string(o_148, "-v")))
      {
        if(!(match_string(o_148, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_b_48;
    t = set_config_0(t);
    t = term_c_48;
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    t = term_d_48;
    return(t);
  }
  t = Option_3(t, b_9, c_9, d_9);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm r_148 = NULL;
    r_148 = t;
    p_148 :
    if(!(match_string(r_148, "-k")))
      {
        if(!(match_string(r_148, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    ATerm e_48;
    e_48 = t;
    {
      ATerm s_148 = NULL;
      ATerm t_148 = NULL;
      t = string_to_int_0(t);
      {
        t_148 = t;
        if(((s_148 != NULL) && (s_148 != t_148)))
          _fail(t_148);
        else
          s_148 = t_148;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_48, not_null(s_148));
        t = set_config_0(t);
      }
    }
    t = e_48;
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_k_48;
    return(t);
  }
  t = ArgOption_3(t, e_9, f_9, h_9);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_148 = NULL;
  w_148 = t;
  t = SSL_string_to_int(not_null(w_148));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 (ATerm t)
      {
        ATerm e_149 = NULL;
        e_149 = t;
        z_148 :
        if(!(match_string(e_149, "-S")))
          {
            if(!(match_string(e_149, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_9 (ATerm t)
      {
        t = term_v_48;
        t = set_config_0(t);
        t = term_w_48;
        return(t);
      }
      ATerm k_9 (ATerm t)
      {
        t = term_x_48;
        return(t);
      }
      t = Option_3(t, i_9, j_9, k_9);
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      {
        ATerm y_48 = t;
        int z_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 (ATerm t)
            {
              ATerm f_149 = NULL;
              f_149 = t;
              a_149 :
              if(!(match_string(f_149, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_9 (ATerm t)
            {
              ATerm i_149 = NULL;
              ATerm a_49;
              a_49 = t;
              {
                ATerm g_149 = NULL;
                ATerm h_149 = NULL;
                t = string_to_int_0(t);
                {
                  h_149 = t;
                  if(((g_149 != NULL) && (g_149 != h_149)))
                    _fail(h_149);
                  else
                    g_149 = h_149;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(g_149));
                  t = set_config_0(t);
                }
              }
              t = a_49;
              {
                ATerm j_149 = NULL;
                j_149 = t;
                if(((i_149 != NULL) && (i_149 != j_149)))
                  _fail(j_149);
                else
                  i_149 = j_149;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_149));
              }
              return(t);
            }
            ATerm o_9 (ATerm t)
            {
              t = term_d_49;
              return(t);
            }
            t = ArgOption_3(t, l_9, m_9, o_9);
            LocalPopChoice(z_48);
          }
        else
          {
            t = y_48;
            {
              ATerm t_9 (ATerm t)
              {
                ATerm k_149 = NULL;
                k_149 = t;
                d_149 :
                if(!(match_string(k_149, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_9 (ATerm t)
              {
                t = term_f_49;
                t = set_config_0(t);
                t = term_g_49;
                return(t);
              }
              ATerm v_9 (ATerm t)
              {
                t = term_h_49;
                return(t);
              }
              t = Option_3(t, t_9, u_9, v_9);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_49);
    }
  else
    {
      t = j_49;
      {
        ATerm m_49 = t;
        int n_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_49);
          }
        else
          {
            t = m_49;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    ATerm q_149 = NULL;
    q_149 = t;
    n_149 :
    if(!(match_string(q_149, "-o")))
      {
        if(!(match_string(q_149, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_10 (ATerm t)
  {
    ATerm t_149 = NULL;
    ATerm o_49;
    o_49 = t;
    {
      ATerm r_149 = NULL;
      ATerm s_149 = NULL;
      s_149 = t;
      if(((r_149 != NULL) && (r_149 != s_149)))
        _fail(s_149);
      else
        r_149 = s_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_49, not_null(r_149));
        t = set_config_0(t);
      }
    }
    t = o_49;
    {
      ATerm u_149 = NULL;
      u_149 = t;
      if(((t_149 != NULL) && (t_149 != u_149)))
        _fail(u_149);
      else
        t_149 = u_149;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_149));
    }
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = term_t_49;
    return(t);
  }
  t = ArgOption_3(t, x_9, c_10, g_10);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(z_49);
    }
  else
    {
      t = u_49;
      {
        ATerm i_10 (ATerm t)
        {
          ATerm y_149 = NULL;
          y_149 = t;
          x_149 :
          if(!(match_string(y_149, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_10 (ATerm t)
        {
          t = term_f_50;
          t = set_config_0(t);
          t = term_g_50;
          return(t);
        }
        ATerm d_11 (ATerm t)
        {
          t = term_l_50;
          return(t);
        }
        t = Option_3(t, i_10, r_10, d_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL,h_150 = NULL,i_150 = NULL;
  e_150 = t;
  c_150 :
  if(match_string(e_150, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(e_150) == AT_LIST) && !(ATisEmpty(e_150))))
        {
          f_150 = ATgetFirst((ATermList) e_150);
          g_150 = (ATerm) ATgetNext((ATermList) e_150);
          d_150 :
          if(((ATgetType(g_150) == AT_LIST) && !(ATisEmpty(g_150))))
            {
              h_150 = ATgetFirst((ATermList) g_150);
              i_150 = (ATerm) ATgetNext((ATermList) g_150);
              {
                ATerm m_150 = NULL;
                ATerm m_50;
                m_50 = t;
                {
                  t = not_null(f_150);
                  t = m_0(t);
                }
                t = m_50;
                {
                  ATerm n_150 = NULL;
                  t = not_null(h_150);
                  {
                    t = n_0(t);
                    {
                      n_150 = t;
                      if(((m_150 != NULL) && (m_150 != n_150)))
                        _fail(n_150);
                      else
                        m_150 = n_150;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_150)), not_null(m_150));
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
  ATerm e_11 (ATerm t)
  {
    ATerm u_150 = NULL;
    u_150 = t;
    r_150 :
    if(!(match_string(u_150, "-i")))
      {
        if(!(match_string(u_150, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    ATerm x_150 = NULL;
    ATerm n_50;
    n_50 = t;
    {
      ATerm v_150 = NULL;
      ATerm w_150 = NULL;
      w_150 = t;
      if(((v_150 != NULL) && (v_150 != w_150)))
        _fail(w_150);
      else
        v_150 = w_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_50, not_null(v_150));
        t = set_config_0(t);
      }
    }
    t = n_50;
    {
      ATerm y_150 = NULL;
      y_150 = t;
      if(((x_150 != NULL) && (x_150 != y_150)))
        _fail(y_150);
      else
        x_150 = y_150;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_150));
    }
    return(t);
  }
  ATerm g_11 (ATerm t)
  {
    t = term_r_50;
    return(t);
  }
  t = ArgOption_3(t, e_11, f_11, g_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(t_50);
    }
  else
    {
      t = s_50;
      {
        ATerm u_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(v_50);
          }
        else
          {
            t = u_50;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, term_w_50));
  {
    t = printnl_0(t);
    {
      t = term_l_23;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_151 = NULL;
  c_151 = t;
  t = SSL_TicksToSeconds(not_null(c_151));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL,j_151 = NULL;
  h_151 = t;
  g_151 :
  if(match_cons(h_151, sym__2))
    {
      i_151 = ATgetArgument(h_151, 0);
      j_151 = ATgetArgument(h_151, 1);
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_151), not_null(j_151));
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            t = SSL_addr(not_null(i_151), not_null(j_151));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_99 (ATerm), ATerm l_99 (ATerm))
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_99(t);
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm q_151 = NULL,r_151 = NULL,s_151 = NULL;
        q_151 = t;
        p_151 :
        if(((ATgetType(q_151) == AT_LIST) && !(ATisEmpty(q_151))))
          {
            r_151 = ATgetFirst((ATermList) q_151);
            s_151 = (ATerm) ATgetNext((ATermList) q_151);
            {
              ATerm v_151 = NULL;
              ATerm w_151 = NULL;
              t = not_null(s_151);
              {
                t = foldr_2(t, k_99, l_99);
                {
                  w_151 = t;
                  if(((v_151 != NULL) && (v_151 != w_151)))
                    _fail(w_151);
                  else
                    v_151 = w_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_151), not_null(v_151));
                t = l_99(t);
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
ATerm crush_2 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm))
{
  ATerm d_152 = NULL;
  ATerm f_152 = NULL;
  d_152 = t;
  {
    ATerm g_152 = NULL;
    ATerm i_152 = NULL,j_152 = NULL,k_152 = NULL;
    t = not_null(d_152);
    {
      g_152 = t;
      {
        t = SSL_explode_term(not_null(g_152));
        {
          i_152 = t;
          c_152 :
          if(match_cons(i_152, sym__2))
            {
              j_152 = ATgetArgument(i_152, 0);
              k_152 = ATgetArgument(i_152, 1);
              if(((f_152 != NULL) && (f_152 != k_152)))
                _fail(k_152);
              else
                f_152 = k_152;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_152);
      t = foldr_2(t, i_98, j_98);
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
    ATerm h_11 (ATerm t)
    {
      t = term_l_25;
      return(t);
    }
    t = crush_2(t, h_11, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_152 = NULL,r_152 = NULL,s_152 = NULL;
  q_152 = t;
  p_152 :
  if(match_cons(q_152, sym__2))
    {
      r_152 = ATgetArgument(q_152, 0);
      s_152 = ATgetArgument(q_152, 1);
      {
        ATerm g_51;
        g_51 = t;
        {
          ATerm t_51 = t;
          int u_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_152), not_null(s_152));
              LocalPopChoice(u_51);
            }
          else
            {
              t = t_51;
              t = SSL_gtr(not_null(r_152), not_null(s_152));
            }
        }
        t = g_51;
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
  ATerm y_152 = NULL;
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_152 = NULL,a_153 = NULL,b_153 = NULL;
      z_152 = t;
      x_152 :
      if(match_cons(z_152, sym__2))
        {
          a_153 = ATgetArgument(z_152, 0);
          b_153 = ATgetArgument(z_152, 1);
          {
            if(((y_152 != NULL) && (y_152 != a_153)))
              _fail(a_153);
            else
              y_152 = a_153;
            if(((y_152 != NULL) && (y_152 != b_153)))
              _fail(b_153);
            else
              y_152 = b_153;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_51);
    }
  else
    {
      t = v_51;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_51;
      z_51 = t;
      {
        ATerm e_153 = NULL;
        ATerm f_153 = NULL;
        t = term_e_17;
        {
          t = get_config_0(t);
          {
            f_153 = t;
            if(((e_153 != NULL) && (e_153 != f_153)))
              _fail(f_153);
            else
              e_153 = f_153;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_153), term_l_23);
          t = geq_0(t);
        }
      }
      t = z_51;
      t = q_106(t);
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm j_153 = NULL,l_153 = NULL;
    ATerm a_52;
    a_52 = t;
    {
      ATerm k_153 = NULL;
      t = run_time_0(t);
      {
        k_153 = t;
        if(((j_153 != NULL) && (j_153 != k_153)))
          _fail(k_153);
        else
          j_153 = k_153;
      }
    }
    t = a_52;
    {
      ATerm m_153 = NULL;
      t = term_b_52;
      {
        t = get_config_0(t);
        {
          m_153 = t;
          if(((l_153 != NULL) && (l_153 != m_153)))
            _fail(m_153);
          else
            l_153 = m_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_52), not_null(j_153)), term_c_52), not_null(l_153)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_11);
  {
    t = term_l_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_153 = NULL;
  t_153 = t;
  s_153 :
  if(match_cons(t_153, sym_Version_0))
    {
      ATerm v_153 = NULL,x_153 = NULL;
      ATerm j_52;
      j_52 = t;
      {
        ATerm w_153 = NULL;
        t = SSLgetAnnotations(not_null(t_153));
        {
          w_153 = t;
          if(((v_153 != NULL) && (v_153 != w_153)))
            _fail(w_153);
          else
            v_153 = w_153;
        }
      }
      t = j_52;
      {
        ATerm y_153 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_153));
        {
          y_153 = t;
          if(((x_153 != NULL) && (x_153 != y_153)))
            _fail(y_153);
          else
            x_153 = y_153;
        }
        t = not_null(x_153);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_104 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm k_52 = t;
    int l_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_52);
      }
    else
      {
        t = k_52;
        {
          ATerm m_52 = t;
          int n_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_52);
            }
          else
            {
              t = m_52;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_11);
  t = w_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_154 = NULL;
  d_154 = t;
  t = SSL_table_create(not_null(d_154));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_154 = NULL;
  h_154 = t;
  {
    ATerm o_52;
    o_52 = t;
    {
      t = term_p_52;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_52, term_t_52, not_null(h_154));
          t = table_put_0(t);
        }
      }
    }
    t = o_52;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_154 = NULL;
  l_154 = t;
  t = SSL_table_destroy(not_null(l_154));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_154 = NULL;
  p_154 = t;
  t = SSL_exit(not_null(p_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_154 = NULL,u_154 = NULL,v_154 = NULL;
  t_154 = t;
  s_154 :
  if(((ATgetType(t_154) == AT_LIST) && ATisEmpty(t_154)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_154) == AT_LIST) && !(ATisEmpty(t_154))))
        {
          u_154 = ATgetFirst((ATermList) t_154);
          v_154 = (ATerm) ATgetNext((ATermList) t_154);
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
  ATerm u_52;
  u_52 = t;
  {
    ATerm y_154 = NULL;
    ATerm b_155 = NULL;
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(w_52);
      }
    else
      {
        t = v_52;
        {
          ATerm z_154 = NULL;
          ATerm a_155 = NULL;
          a_155 = t;
          if(((z_154 != NULL) && (z_154 != a_155)))
            _fail(a_155);
          else
            z_154 = a_155;
          t = (ATerm) ATinsert(ATempty, not_null(z_154));
        }
      }
    {
      b_155 = t;
      if(((y_154 != NULL) && (y_154 != b_155)))
        _fail(b_155);
      else
        y_154 = b_155;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_47, not_null(y_154));
      t = printnl_0(t);
    }
  }
  t = u_52;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm e_155 (ATerm t)
  {
    ATerm x_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_52);
      }
    else
      {
        t = x_52;
        t = Cons_2(t, w_92, e_155);
      }
    return(t);
  }
  t = e_155(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm l_155 = NULL,m_155 = NULL,n_155 = NULL;
  n_155 = t;
  k_155 :
  if(((ATgetType(n_155) == AT_LIST) && !(ATisEmpty(n_155))))
    {
      l_155 = ATgetFirst((ATermList) n_155);
      m_155 = (ATerm) ATgetNext((ATermList) n_155);
      {
        ATerm q_155 = NULL;
        t = not_null(m_155);
        {
          ATerm c_53;
          c_53 = t;
          {
            ATerm r_155 = NULL,t_155 = NULL,v_155 = NULL;
            ATerm d_53;
            d_53 = t;
            {
              ATerm s_155 = NULL;
              t = k_0(t);
              {
                s_155 = t;
                if(((r_155 != NULL) && (r_155 != s_155)))
                  _fail(s_155);
                else
                  r_155 = s_155;
              }
            }
            t = d_53;
            {
              ATerm u_155 = NULL;
              t = not_null(l_155);
              {
                t = i_0(t);
                {
                  u_155 = t;
                  if(((t_155 != NULL) && (t_155 != u_155)))
                    _fail(u_155);
                  else
                    t_155 = u_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_155)), not_null(t_155));
                {
                  v_155 = t;
                  if(((q_155 != NULL) && (q_155 != v_155)))
                    _fail(v_155);
                  else
                    q_155 = v_155;
                }
              }
            }
          }
          t = c_53;
          {
            ATerm k_11 (ATerm t)
            {
              t = not_null(q_155);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_11);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_155) == AT_LIST) && ATisEmpty(n_155)))
        {
          {
            t = term_l_39;
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
  ATerm l_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_11);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm g_156 = NULL,h_156 = NULL;
  g_156 = t;
  f_156 :
  if(match_cons(g_156, sym_Program_1))
    {
      h_156 = ATgetArgument(g_156, 0);
      {
        ATerm k_156 = NULL,m_156 = NULL;
        ATerm l_156 = NULL;
        t = SSLgetAnnotations(not_null(g_156));
        {
          l_156 = t;
          if(((k_156 != NULL) && (k_156 != l_156)))
            _fail(l_156);
          else
            k_156 = l_156;
        }
        {
          t = not_null(h_156);
          {
            ATerm o_156 = NULL;
            t = q_84(t);
            {
              m_156 = t;
              {
                ATerm p_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_156)), not_null(k_156));
                {
                  p_156 = t;
                  if(((o_156 != NULL) && (o_156 != p_156)))
                    _fail(p_156);
                  else
                    o_156 = p_156;
                }
                t = not_null(o_156);
              }
            }
          }
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
  ATerm x_156 = NULL;
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_156 = NULL;
      t = term_b_52;
      {
        t = get_config_0(t);
        {
          y_156 = t;
          if(((x_156 != NULL) && (x_156 != y_156)))
            _fail(y_156);
          else
            x_156 = y_156;
        }
      }
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      {
        ATerm m_11 (ATerm t)
        {
          ATerm n_11 (ATerm t)
          {
            ATerm z_156 = NULL;
            z_156 = t;
            if(((x_156 != NULL) && (x_156 != z_156)))
              _fail(z_156);
            else
              x_156 = z_156;
            return(t);
          }
          t = Program_1(t, n_11);
          return(t);
        }
        t = fetch_1(t, m_11);
      }
    }
  {
    t = term_g_53;
    {
      t = echo_0(t);
      {
        t = term_j_53;
        {
          t = table_get_0(t);
          {
            ATerm o_11 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_11);
            {
              ATerm p_11 (ATerm t)
              {
                ATerm a_157 = NULL;
                ATerm b_157 = NULL;
                b_157 = t;
                if(((a_157 != NULL) && (a_157 != b_157)))
                  _fail(b_157);
                else
                  a_157 = b_157;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_157)), term_k_53);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, p_11);
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
  ATerm l_53;
  l_53 = t;
  {
    ATerm g_157 = NULL;
    ATerm h_157 = NULL;
    h_157 = t;
    if(((g_157 != NULL) && (g_157 != h_157)))
      _fail(h_157);
    else
      g_157 = h_157;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, not_null(g_157)));
      t = printnl_0(t);
    }
  }
  t = l_53;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm m_53;
  m_53 = t;
  {
    t = v_103(t);
    t = debug_0(t);
  }
  t = m_53;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm o_157 = NULL,p_157 = NULL;
  o_157 = t;
  n_157 :
  if(match_cons(o_157, sym_Undefined_1))
    {
      p_157 = ATgetArgument(o_157, 0);
      {
        ATerm s_157 = NULL,u_157 = NULL;
        ATerm t_157 = NULL;
        t = SSLgetAnnotations(not_null(o_157));
        {
          t_157 = t;
          if(((s_157 != NULL) && (s_157 != t_157)))
            _fail(t_157);
          else
            s_157 = t_157;
        }
        {
          t = not_null(p_157);
          {
            ATerm w_157 = NULL;
            t = r_84(t);
            {
              u_157 = t;
              {
                ATerm x_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_157)), not_null(s_157));
                {
                  x_157 = t;
                  if(((w_157 != NULL) && (w_157 != x_157)))
                    _fail(x_157);
                  else
                    w_157 = x_157;
                }
                t = not_null(w_157);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm c_158 (ATerm t)
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_93, _id);
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        t = Cons_2(t, _id, c_158);
      }
    return(t);
  }
  t = c_158(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_107 (ATerm))
{
  t = fetch_1(t, t_107);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_158 = NULL;
  h_158 = t;
  g_158 :
  if(match_cons(h_158, sym_Help_0))
    {
      ATerm j_158 = NULL,l_158 = NULL;
      ATerm q_53;
      q_53 = t;
      {
        ATerm k_158 = NULL;
        t = SSLgetAnnotations(not_null(h_158));
        {
          k_158 = t;
          if(((j_158 != NULL) && (j_158 != k_158)))
            _fail(k_158);
          else
            j_158 = k_158;
        }
      }
      t = q_53;
      {
        ATerm m_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_158));
        {
          m_158 = t;
          if(((l_158 != NULL) && (l_158 != m_158)))
            _fail(m_158);
          else
            l_158 = m_158;
        }
        t = not_null(l_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm t_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_85(t);
      LocalPopChoice(u_53);
    }
  else
    {
      t = t_53;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_158 = NULL,v_158 = NULL,w_158 = NULL;
  u_158 = t;
  t_158 :
  if(match_cons(u_158, sym__2))
    {
      v_158 = ATgetArgument(u_158, 0);
      w_158 = ATgetArgument(u_158, 1);
      t = SSL_table_get(not_null(v_158), not_null(w_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_159 = NULL,e_159 = NULL,f_159 = NULL,g_159 = NULL;
  d_159 = t;
  c_159 :
  if(match_cons(d_159, sym__3))
    {
      e_159 = ATgetArgument(d_159, 0);
      f_159 = ATgetArgument(d_159, 1);
      g_159 = ATgetArgument(d_159, 2);
      {
        ATerm v_53;
        v_53 = t;
        {
          ATerm k_159 = NULL;
          ATerm l_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_159), not_null(f_159));
          {
            ATerm w_53 = t;
            int x_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_53);
              }
            else
              {
                t = w_53;
                t = (ATerm) ATempty;
              }
            {
              l_159 = t;
              if(((k_159 != NULL) && (k_159 != l_159)))
                _fail(l_159);
              else
                k_159 = l_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_159), not_null(f_159), (ATerm) ATinsert(CheckATermList(not_null(k_159)), not_null(g_159)));
            t = table_put_0(t);
          }
        }
        t = v_53;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm p_159 = NULL;
  ATerm q_159 = NULL;
  t = term_l_39;
  {
    t = y_108(t);
    {
      q_159 = t;
      if(((p_159 != NULL) && (p_159 != q_159)))
        _fail(q_159);
      else
        p_159 = q_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_53, term_i_53, not_null(p_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_159 = NULL,x_159 = NULL,y_159 = NULL;
  w_159 = t;
  v_159 :
  if(match_string(w_159, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_159) == AT_LIST) && !(ATisEmpty(w_159))))
        {
          x_159 = ATgetFirst((ATermList) w_159);
          y_159 = (ATerm) ATgetNext((ATermList) w_159);
          {
            ATerm b_160 = NULL;
            ATerm y_53;
            y_53 = t;
            {
              t = not_null(x_159);
              t = a_0(t);
            }
            t = y_53;
            {
              ATerm c_160 = NULL;
              t = term_l_39;
              {
                t = d_0(t);
                {
                  c_160 = t;
                  if(((b_160 != NULL) && (b_160 != c_160)))
                    _fail(c_160);
                  else
                    b_160 = c_160;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_159)), not_null(b_160));
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
  ATerm q_11 (ATerm t)
  {
    ATerm h_160 = NULL;
    h_160 = t;
    g_160 :
    if(!(match_string(h_160, "--help")))
      {
        if(!(match_string(h_160, "-h")))
          {
            if(!(match_string(h_160, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    t = term_a_54;
    {
      t = set_config_0(t);
      t = term_c_54;
    }
    return(t);
  }
  ATerm s_11 (ATerm t)
  {
    t = term_d_54;
    return(t);
  }
  t = Option_3(t, q_11, r_11, s_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_160 = NULL,l_160 = NULL,m_160 = NULL;
  k_160 = t;
  j_160 :
  if(((ATgetType(k_160) == AT_LIST) && !(ATisEmpty(k_160))))
    {
      l_160 = ATgetFirst((ATermList) k_160);
      m_160 = (ATerm) ATgetNext((ATermList) k_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm w_160 = NULL,x_160 = NULL,y_160 = NULL;
  w_160 = t;
  v_160 :
  if(((ATgetType(w_160) == AT_LIST) && !(ATisEmpty(w_160))))
    {
      x_160 = ATgetFirst((ATermList) w_160);
      y_160 = (ATerm) ATgetNext((ATermList) w_160);
      {
        ATerm c_161 = NULL,e_161 = NULL;
        ATerm d_161 = NULL;
        t = SSLgetAnnotations(not_null(w_160));
        {
          d_161 = t;
          if(((c_161 != NULL) && (c_161 != d_161)))
            _fail(d_161);
          else
            c_161 = d_161;
        }
        {
          t = not_null(x_160);
          {
            ATerm g_161 = NULL;
            t = k_74(t);
            {
              e_161 = t;
              {
                t = not_null(y_160);
                {
                  ATerm i_161 = NULL;
                  t = l_74(t);
                  {
                    g_161 = t;
                    {
                      ATerm j_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_161)), not_null(e_161)), not_null(c_161));
                      {
                        j_161 = t;
                        if(((i_161 != NULL) && (i_161 != j_161)))
                          _fail(j_161);
                        else
                          i_161 = j_161;
                      }
                      t = not_null(i_161);
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
  ATerm t_161 = NULL;
  t_161 = t;
  s_161 :
  if(((ATgetType(t_161) == AT_LIST) && ATisEmpty(t_161)))
    {
      {
        ATerm v_161 = NULL,x_161 = NULL;
        ATerm i_54;
        i_54 = t;
        {
          ATerm w_161 = NULL;
          t = SSLgetAnnotations(not_null(t_161));
          {
            w_161 = t;
            if(((v_161 != NULL) && (v_161 != w_161)))
              _fail(w_161);
            else
              v_161 = w_161;
          }
        }
        t = i_54;
        {
          ATerm y_161 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_161));
          {
            y_161 = t;
            if(((x_161 != NULL) && (x_161 != y_161)))
              _fail(y_161);
            else
              x_161 = y_161;
          }
          t = not_null(x_161);
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
  ATerm e_162 = NULL,f_162 = NULL,g_162 = NULL;
  e_162 = t;
  d_162 :
  if(match_cons(e_162, sym__2))
    {
      f_162 = ATgetArgument(e_162, 0);
      g_162 = ATgetArgument(e_162, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_46, not_null(f_162), not_null(g_162));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm j_54;
  j_54 = t;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_54;
        t = w_108(t);
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        {
        }
      }
  }
  t = j_54;
  {
    ATerm t_11 (ATerm t)
    {
      ATerm o_162 = NULL;
      ATerm s_54;
      s_54 = t;
      {
        ATerm m_162 = NULL;
        ATerm n_162 = NULL;
        n_162 = t;
        if(((m_162 != NULL) && (m_162 != n_162)))
          _fail(n_162);
        else
          m_162 = n_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_52, not_null(m_162));
          t = set_config_0(t);
        }
      }
      t = s_54;
      {
        ATerm p_162 = NULL;
        p_162 = t;
        if(((o_162 != NULL) && (o_162 != p_162)))
          _fail(p_162);
        else
          o_162 = p_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_162));
      }
      return(t);
    }
    ATerm u_11 (ATerm t)
    {
      ATerm t_54 = t;
      int u_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                t = w_108(t);
                t = Cons_2(t, _id, u_11);
              }
            }
          LocalPopChoice(u_54);
        }
      else
        {
          t = t_54;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_11, u_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_162 = NULL,w_162 = NULL,x_162 = NULL;
  ATerm x_54;
  x_54 = t;
  {
    ATerm y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL;
    y_162 = t;
    u_162 :
    if(match_cons(y_162, sym__3))
      {
        z_162 = ATgetArgument(y_162, 0);
        a_163 = ATgetArgument(y_162, 1);
        b_163 = ATgetArgument(y_162, 2);
        {
          if(((v_162 != NULL) && (v_162 != z_162)))
            _fail(z_162);
          else
            v_162 = z_162;
          {
            if(((w_162 != NULL) && (w_162 != a_163)))
              _fail(a_163);
            else
              w_162 = a_163;
            {
              if(((x_162 != NULL) && (x_162 != b_163)))
                _fail(b_163);
              else
                x_162 = b_163;
              t = SSL_table_put(not_null(v_162), not_null(w_162), not_null(x_162));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_54;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm e_163 = NULL;
  ATerm y_54;
  y_54 = t;
  {
    t = term_z_54;
    t = table_put_0(t);
  }
  t = y_54;
  {
    ATerm v_11 (ATerm t)
    {
      ATerm a_55 = t;
      int b_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_108(t);
          LocalPopChoice(b_55);
        }
      else
        {
          t = a_55;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_11);
    {
      ATerm c_55 = t;
      int d_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_55;
          l_55 = t;
          {
            ATerm m_55 = t;
            int n_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_z_53;
                t = get_config_0(t);
                LocalPopChoice(n_55);
              }
            else
              {
                t = m_55;
                t = fetch_1(t, Help_0);
              }
          }
          t = l_55;
          {
            t = system_usage_0(t);
            {
              t = term_l_25;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_55);
        }
      else
        {
          t = c_55;
          {
            ATerm q_55 = t;
            int r_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 (ATerm t)
                {
                  ATerm y_11 (ATerm t)
                  {
                    ATerm f_163 = NULL;
                    f_163 = t;
                    if(((e_163 != NULL) && (e_163 != f_163)))
                      _fail(f_163);
                    else
                      e_163 = f_163;
                    return(t);
                  }
                  t = Undefined_1(t, y_11);
                  return(t);
                }
                t = fetch_1(t, x_11);
                {
                  ATerm z_11 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_163)), term_s_55);
                    return(t);
                  }
                  t = say_1(t, z_11);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_23;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(r_55);
              }
            else
              {
                t = q_55;
                {
                }
              }
          }
        }
      {
        ATerm t_55;
        t_55 = t;
        {
          t = term_h_53;
          t = table_destroy_0(t);
        }
        t = t_55;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  t = parse_options_1(t, c_105);
  {
    t = store_options_0(t);
    {
      t = e_105(t);
      {
        ATerm u_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_105);
            LocalPopChoice(v_55);
          }
        else
          {
            t = u_55;
            {
              ATerm w_55 = t;
              int z_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_105(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_55);
                }
              else
                {
                  t = w_55;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm))
{
  ATerm b_12 (ATerm t)
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_105(t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_12, v_105, w_105, c_12);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm))
{
  ATerm d_12 (ATerm t)
  {
    ATerm f_12 (ATerm t)
    {
      ATerm c_56;
      c_56 = t;
      {
        ATerm i_163 = NULL;
        ATerm j_163 = NULL;
        t = term_b_52;
        {
          t = get_config_0(t);
          {
            j_163 = t;
            if(((i_163 != NULL) && (i_163 != j_163)))
              _fail(j_163);
            else
              i_163 = j_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, not_null(i_163)));
          t = printnl_0(t);
        }
      }
      t = c_56;
      return(t);
    }
    t = if_verbose2_1(t, f_12);
    return(t);
  }
  t = iowrap_4(t, n_105, o_105, p_105, d_12);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  t = iowrap_3(t, l_105, m_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_105 (ATerm))
{
  ATerm j_12 (ATerm t)
  {
    t = _2(t, _id, i_105);
    return(t);
  }
  t = iowrap_2(t, j_12, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}