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
ATerm term_f_53;
ATerm term_u_52;
ATerm term_k_52;
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
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_f_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_l_46;
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
ATerm term_h_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_p_34;
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
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_24);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, term_p_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_21);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
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
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_30);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
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
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Op_2, term_s_34, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_35);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
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
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
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
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_z_25);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_25);
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
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym__2, term_t_47, term_h_38);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, (ATerm) ATempty);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
                    ATerm b_0 (ATerm t)
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
                    t = oncetd_1(t, b_0);
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
                              ATerm f_0 (ATerm t)
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
                              t = oncetd_1(t, f_0);
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
                    ATerm h_0 (ATerm t)
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
                    t = pat_td_1(t, h_0);
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
                          ATerm j_0 (ATerm t)
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
                          t = pat_td_1(t, j_0);
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
          ATerm v_0 (ATerm t)
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
          t = pat_td_1(t, v_0);
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
                          ATerm y_0 (ATerm t)
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
                          t = pat_td_1(t, y_0);
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
ATerm As_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
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
            t = p_78(t);
            {
              b_18 = t;
              {
                t = not_null(v_17);
                {
                  ATerm f_18 = NULL;
                  t = q_78(t);
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
ATerm Prim_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
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
            t = m_74(t);
            {
              a_19 = t;
              {
                t = not_null(u_18);
                {
                  ATerm e_19 = NULL;
                  t = n_74(t);
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
ATerm Explode_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
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
            t = l_78(t);
            {
              z_19 = t;
              {
                t = not_null(t_19);
                {
                  ATerm d_20 = NULL;
                  t = m_78(t);
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
ATerm pat_td_1 (ATerm t, ATerm o_114 (ATerm))
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_114(t);
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
                    t = pat_td_1(t, o_114);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
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
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1(t, o_114);
                          return(t);
                        }
                        t = Explode_2(t, f_1, _id);
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
                                ATerm i_1 (ATerm t)
                                {
                                  t = pat_td_1(t, o_114);
                                  return(t);
                                }
                                t = fetch_1(t, i_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, g_1);
                              LocalPopChoice(z_16);
                            }
                          else
                            {
                              t = y_16;
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
              ATerm l_1 (ATerm t)
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
              t = pat_td_1(t, l_1);
              {
                d_21 = t;
                if(((z_20 != NULL) && (z_20 != d_21)))
                  _fail(d_21);
                else
                  z_20 = d_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_20));
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
          ATerm o_1 (ATerm t)
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
          t = fetch_1(t, o_1);
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
  ATerm r_1 (ATerm t)
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
            t = e_77(t);
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
ATerm Specification_1 (ATerm t, ATerm g_77 (ATerm))
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
            t = g_77(t);
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
ATerm if_verbose3_1 (ATerm t, ATerm s_106 (ATerm))
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
    t = s_106(t);
    return(t);
  }
  t = try_1(t, u_1);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, c_85);
    }
    t = m_18;
    return(t);
  }
  t = if_verbose3_1(t, v_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm a_114 (ATerm))
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        t = split_2(t, _id, a_114);
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
              t = split_2(t, _id, a_114);
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
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm a_2 (ATerm t)
              {
                t = a_114(t);
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
ATerm Rec_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
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
            t = w_75(t);
            {
              d_26 = t;
              {
                t = not_null(x_25);
                {
                  ATerm h_26 = NULL;
                  t = x_75(t);
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
ATerm SDef_3 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm))
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
            t = a_76(t);
            {
              f_27 = t;
              {
                t = not_null(x_26);
                {
                  ATerm j_27 = NULL;
                  t = b_76(t);
                  {
                    h_27 = t;
                    {
                      t = not_null(y_26);
                      {
                        ATerm l_27 = NULL;
                        t = c_76(t);
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
ATerm Let_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
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
            t = y_75(t);
            {
              h_28 = t;
              {
                t = not_null(b_28);
                {
                  ATerm l_28 = NULL;
                  t = z_75(t);
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
ATerm sboundin_3 (ATerm t, ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_114, b_114);
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
            t = SDef_3(t, d_114, d_114, b_114);
            LocalPopChoice(b_19);
          }
        else
          {
            t = x_18;
            t = Rec_2(t, d_114, b_114);
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
ATerm SVar_1 (ATerm t, ATerm v_75 (ATerm))
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
            t = v_75(t);
            {
              q_31 = t;
              {
                ATerm y_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_31)), not_null(o_31));
                {
                  y_31 = t;
                  if(((s_31 != NULL) && (s_31 != y_31)))
                    _fail(y_31);
                  else
                    s_31 = y_31;
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
ATerm rename_4 (ATerm t, ATerm w_110 (ATerm, ATerm (ATerm)), ATerm x_110 (ATerm), ATerm y_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_110 (ATerm, ATerm (ATerm)))
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
              t = RnVar_1(t, w_110);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                t = RnBinding_2(t, x_110, z_110);
                t = DistBinding_2(t, h_32, y_110);
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
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  l_32 :
  if(match_cons(s_32, sym_Var_1))
    {
      t_32 = ATgetArgument(s_32, 0);
      r_32 :
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
        ATerm i_35 = NULL,j_35 = NULL;
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
                                            t_34 :
                                            if(((ATgetType(t_35) == AT_LIST) && ATisEmpty(t_35)))
                                              {
                                                u_34 :
                                                if(((ATgetType(u_35) == AT_LIST) && ATisEmpty(u_35)))
                                                  {
                                                    {
                                                      if(((i_35 != NULL) && (i_35 != p_35)))
                                                        _fail(p_35);
                                                      else
                                                        i_35 = p_35;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
ATerm Con_3 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm))
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
        ATerm b_37 = NULL,f_37 = NULL;
        ATerm e_37 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          e_37 = t;
          if(((b_37 != NULL) && (b_37 != e_37)))
            _fail(e_37);
          else
            b_37 = e_37;
        }
        {
          t = not_null(u_36);
          {
            ATerm l_37 = NULL;
            t = c_78(t);
            {
              f_37 = t;
              {
                t = not_null(v_36);
                {
                  ATerm q_37 = NULL;
                  t = d_78(t);
                  {
                    l_37 = t;
                    {
                      t = not_null(w_36);
                      {
                        ATerm w_37 = NULL;
                        t = e_78(t);
                        {
                          q_37 = t;
                          {
                            ATerm x_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(f_37), not_null(l_37), not_null(q_37)), not_null(b_37));
                            {
                              x_37 = t;
                              if(((w_37 != NULL) && (w_37 != x_37)))
                                _fail(x_37);
                              else
                                w_37 = x_37;
                            }
                            t = not_null(w_37);
                          }
                        }
                      }
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
                              p_39 :
                              if(match_cons(t_40, sym_Con_3))
                                {
                                  u_40 = ATgetArgument(t_40, 0);
                                  w_40 = ATgetArgument(t_40, 1);
                                  x_40 = ATgetArgument(t_40, 2);
                                  q_39 :
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
                      LocalPopChoice(p_20);
                    }
                  else
                    {
                      t = m_20;
                      t = ListBuild_0(t);
                    }
                }
              }
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
  ATerm o_46 = NULL;
  ATerm q_46 = NULL;
  o_46 = t;
  {
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm t_2 (ATerm t)
      {
        t = term_i_23;
        return(t);
      }
      t = rewrite_1(t, t_2);
      {
        t_46 = t;
        k_46 :
        if(match_cons(t_46, sym_Defined_2))
          {
            u_46 = ATgetArgument(t_46, 0);
            v_46 = ATgetArgument(t_46, 1);
            n_46 :
            if(match_string(u_46, "n_1"))
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
        ATerm q_47 = NULL,g_48 = NULL;
        ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
        t = term_m_23;
        {
          ATerm u_2 (ATerm t)
          {
            t = term_p_23;
            return(t);
          }
          t = rewrite_1(t, u_2);
          {
            h_48 = t;
            f_47 :
            if(match_cons(h_48, sym_Defined_3))
              {
                i_48 = ATgetArgument(h_48, 0);
                j_48 = ATgetArgument(h_48, 1);
                k_48 = ATgetArgument(h_48, 2);
                g_47 :
                if(match_string(i_48, "q_1"))
                  {
                    ATerm l_48 = NULL;
                    if(((q_47 != NULL) && (q_47 != j_48)))
                      _fail(j_48);
                    else
                      q_47 = j_48;
                    {
                      if(((g_48 != NULL) && (g_48 != k_48)))
                        _fail(k_48);
                      else
                        g_48 = k_48;
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
                          t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_23), not_null(l_48)), term_v_23), not_null(j_47)), term_u_23), term_t_23), not_null(g_48)), term_s_23), not_null(q_47)), term_r_23));
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
    i_49 :
    if(match_cons(t_49, sym__3))
      {
        u_49 = ATgetArgument(t_49, 0);
        v_49 = ATgetArgument(t_49, 1);
        w_49 = ATgetArgument(t_49, 2);
        k_49 :
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
                  ATerm q_52 = NULL,r_52 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_52)));
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = term_k_25;
                      return(t);
                    }
                    t = rewrite_1(t, z_2);
                    {
                      q_52 = t;
                      v_51 :
                      if(match_cons(q_52, sym_Defined_1))
                        {
                          r_52 = ATgetArgument(q_52, 0);
                          w_51 :
                          if(!(match_string(r_52, "k_1")))
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
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm x_52 = NULL;
              t = not_null(d_52);
              {
                t = length_0(t);
                {
                  x_52 = t;
                  {
                    ATerm z_52 = NULL,a_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_52)));
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = term_k_25;
                        return(t);
                      }
                      t = rewrite_1(t, a_3);
                      {
                        z_52 = t;
                        y_51 :
                        if(match_cons(z_52, sym_Defined_1))
                          {
                            a_53 = ATgetArgument(z_52, 0);
                            z_51 :
                            if(!(match_string(a_53, "h_1")))
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
ATerm manytd_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm p_53 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_89(t);
        {
          ATerm b_3 (ATerm t)
          {
            t = try_1(t, p_53);
            return(t);
          }
          t = _all(t, b_3);
        }
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = _some(t, p_53);
      }
    return(t);
  }
  t = p_53(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm l_114 (ATerm), ATerm m_114 (ATerm))
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
      ATerm z_53 = NULL;
      t = l_114(t);
      {
        u_53 = t;
        {
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
          {
            t = m_114(t);
            {
              z_53 = t;
              if(((s_53 != NULL) && (s_53 != z_53)))
                _fail(z_53);
              else
                s_53 = z_53;
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
  w_54 :
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,j_57 = NULL,k_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  w_56 = t;
  h_56 :
  if(match_cons(w_56, sym_Specification_1))
    {
      x_56 = ATgetArgument(w_56, 0);
      i_56 :
      if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
        {
          y_56 = ATgetFirst((ATermList) x_56);
          k_57 = (ATerm) ATgetNext((ATermList) x_56);
          j_56 :
          if(match_cons(y_56, sym_Signature_1))
            {
              z_56 = ATgetArgument(y_56, 0);
              k_56 :
              if(((ATgetType(z_56) == AT_LIST) && !(ATisEmpty(z_56))))
                {
                  a_57 = ATgetFirst((ATermList) z_56);
                  j_57 = (ATerm) ATgetNext((ATermList) z_56);
                  l_56 :
                  if(match_cons(a_57, sym_Constructors_1))
                    {
                      b_57 = ATgetArgument(a_57, 0);
                      m_56 :
                      if(((ATgetType(j_57) == AT_LIST) && ATisEmpty(j_57)))
                        {
                          n_56 :
                          if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
                            {
                              m_57 = ATgetFirst((ATermList) k_57);
                              o_57 = (ATerm) ATgetNext((ATermList) k_57);
                              o_56 :
                              if(match_cons(m_57, sym_Strategies_1))
                                {
                                  n_57 = ATgetArgument(m_57, 0);
                                  p_56 :
                                  if(((ATgetType(o_57) == AT_LIST) && ATisEmpty(o_57)))
                                    {
                                      {
                                        ATerm m_58 = NULL,p_58 = NULL,t_58 = NULL;
                                        ATerm o_26;
                                        o_26 = t;
                                        {
                                          ATerm q_58 = NULL;
                                          ATerm r_58 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_57)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_m_24), term_m_24), term_m_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_24), term_m_24))), term_q_26);
                                          {
                                            q_58 = t;
                                            {
                                              if(((m_58 != NULL) && (m_58 != q_58)))
                                                _fail(q_58);
                                              else
                                                m_58 = q_58;
                                              {
                                                t = not_null(m_58);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(n_57);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        r_58 = t;
                                                        z_55 :
                                                        if(((ATgetType(r_58) == AT_LIST) && ATisEmpty(r_58)))
                                                          {
                                                            {
                                                              ATerm s_58 = NULL;
                                                              ATerm r_26 = t;
                                                              int s_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(s_26);
                                                                }
                                                              else
                                                                {
                                                                  t = r_26;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                s_58 = t;
                                                                if(((p_58 != NULL) && (p_58 != s_58)))
                                                                  _fail(s_58);
                                                                else
                                                                  p_58 = s_58;
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
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_58), not_null(m_58));
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
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(n_57))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_58))))));
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
  ATerm o_3 (ATerm t)
  {
    ATerm t_26;
    t_26 = t;
    {
      ATerm z_26 = t;
      if((PushChoice() == 0))
        {
          ATerm b_59 = NULL;
          t = b_113(t);
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
          t = ExpOverlay_1(t, b_113);
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
ATerm Op_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  h_68 = t;
  g_68 :
  if(match_cons(h_68, sym_Op_2))
    {
      i_68 = ATgetArgument(h_68, 0);
      j_68 = ATgetArgument(h_68, 1);
      {
        ATerm n_68 = NULL,p_68 = NULL;
        ATerm o_68 = NULL;
        t = SSLgetAnnotations(not_null(h_68));
        {
          o_68 = t;
          if(((n_68 != NULL) && (n_68 != o_68)))
            _fail(o_68);
          else
            n_68 = o_68;
        }
        {
          t = not_null(i_68);
          {
            ATerm r_68 = NULL;
            t = q_76(t);
            {
              p_68 = t;
              {
                t = not_null(j_68);
                {
                  ATerm t_68 = NULL;
                  t = r_76(t);
                  {
                    r_68 = t;
                    {
                      ATerm u_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(p_68), not_null(r_68)), not_null(n_68));
                      {
                        u_68 = t;
                        if(((t_68 != NULL) && (t_68 != u_68)))
                          _fail(u_68);
                        else
                          t_68 = u_68;
                      }
                      t = not_null(t_68);
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
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  k_73 = t;
  j_73 :
  if(match_cons(k_73, sym_Overlay_3))
    {
      l_73 = ATgetArgument(k_73, 0);
      m_73 = ATgetArgument(k_73, 1);
      n_73 = ATgetArgument(k_73, 2);
      {
        ATerm r_73 = NULL,v_73 = NULL;
        ATerm b_27;
        b_27 = t;
        {
          ATerm u_73 = NULL;
          t = not_null(m_73);
          {
            ATerm t_3 (ATerm t)
            {
              ATerm s_73 = NULL;
              ATerm t_73 = NULL;
              t_73 = t;
              if(((s_73 != NULL) && (s_73 != t_73)))
                _fail(t_73);
              else
                s_73 = t_73;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_73), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21));
              return(t);
            }
            t = map_1(t, t_3);
            {
              u_73 = t;
              if(((r_73 != NULL) && (r_73 != u_73)))
                _fail(u_73);
              else
                r_73 = u_73;
            }
          }
        }
        t = b_27;
        {
          ATerm w_73 = NULL;
          t = not_null(n_73);
          {
            t = trm_to_cong_0(t);
            {
              w_73 = t;
              if(((v_73 != NULL) && (v_73 != w_73)))
                _fail(w_73);
              else
                v_73 = w_73;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_73), not_null(r_73), not_null(v_73));
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
  ATerm d_74 = NULL,e_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym_Var_1))
    {
      e_74 = ATgetArgument(d_74, 0);
      t = not_null(e_74);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm h_111 (ATerm), ATerm i_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_74 = NULL,s_74 = NULL,t_74 = NULL,w_74 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym__3))
    {
      s_74 = ATgetArgument(p_74, 0);
      t_74 = ATgetArgument(p_74, 1);
      w_74 = ATgetArgument(p_74, 2);
      {
        t = not_null(s_74);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm a_75 = NULL;
            a_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(w_74));
              t = h_111(t);
            }
            return(t);
          }
          ATerm v_3 (ATerm t)
          {
            ATerm c_75 = NULL;
            c_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_75), not_null(t_74));
              t = h_111(t);
            }
            return(t);
          }
          t = i_111(t, u_3, v_3, _id);
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
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  u_75 :
  if(match_cons(d_76, sym__2))
    {
      e_76 = ATgetArgument(d_76, 0);
      f_76 = ATgetArgument(d_76, 1);
      {
        ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,s_76 = NULL;
        ATerm c_27;
        c_27 = t;
        {
          ATerm l_76 = NULL;
          t = not_null(e_76);
          {
            ATerm m_76 = NULL;
            t = b_111(t);
            {
              l_76 = t;
              {
                if(((i_76 != NULL) && (i_76 != l_76)))
                  _fail(l_76);
                else
                  i_76 = l_76;
                {
                  ATerm n_76 = NULL,p_76 = NULL;
                  t = map_1(t, new_0);
                  {
                    m_76 = t;
                    {
                      if(((j_76 != NULL) && (j_76 != m_76)))
                        _fail(m_76);
                      else
                        j_76 = m_76;
                      {
                        ATerm o_76 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), not_null(j_76));
                        {
                          t = zip_1(t, _id);
                          {
                            o_76 = t;
                            if(((n_76 != NULL) && (n_76 != o_76)))
                              _fail(o_76);
                            else
                              n_76 = o_76;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_76), not_null(f_76));
                          {
                            t = conc_0(t);
                            {
                              p_76 = t;
                              if(((k_76 != NULL) && (k_76 != p_76)))
                                _fail(p_76);
                              else
                                k_76 = p_76;
                            }
                          }
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
          ATerm t_76 = NULL;
          t = not_null(e_76);
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(j_76);
              return(t);
            }
            t = c_111(t, w_3);
            {
              t_76 = t;
              if(((s_76 != NULL) && (s_76 != t_76)))
                _fail(t_76);
              else
                s_76 = t_76;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(s_76), not_null(f_76), not_null(k_76));
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
  ATerm i_77 = NULL;
  ATerm k_77 = NULL,l_77 = NULL;
  i_77 = t;
  {
    ATerm p_77 = NULL;
    t = not_null(i_77);
    {
      ATerm q_77 = NULL;
      t = u_110(t);
      {
        p_77 = t;
        {
          if(((k_77 != NULL) && (k_77 != p_77)))
            _fail(p_77);
          else
            k_77 = p_77;
          {
            t = v_110(t);
            {
              q_77 = t;
              if(((l_77 != NULL) && (l_77 != q_77)))
                _fail(q_77);
              else
                l_77 = q_77;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_77), not_null(l_77));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm b_78 = NULL;
  ATerm j_78 = NULL,k_78 = NULL;
  b_78 = t;
  {
    ATerm n_78 = NULL;
    ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
    t = not_null(b_78);
    {
      n_78 = t;
      {
        t = SSL_explode_term(not_null(n_78));
        {
          r_78 = t;
          x_77 :
          if(match_cons(r_78, sym__2))
            {
              s_78 = ATgetArgument(r_78, 0);
              t_78 = ATgetArgument(r_78, 1);
              y_77 :
              if(match_string(s_78, ""))
                {
                  z_77 :
                  if(((ATgetType(t_78) == AT_LIST) && !(ATisEmpty(t_78))))
                    {
                      u_78 = ATgetFirst((ATermList) t_78);
                      v_78 = (ATerm) ATgetNext((ATermList) t_78);
                      {
                        if(((k_78 != NULL) && (k_78 != u_78)))
                          _fail(u_78);
                        else
                          k_78 = u_78;
                        if(((j_78 != NULL) && (j_78 != v_78)))
                          _fail(v_78);
                        else
                          j_78 = v_78;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(k_78);
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
  c_79 = t;
  a_79 :
  if(match_cons(c_79, sym__2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      b_79 :
      if(((ATgetType(e_79) == AT_LIST) && !(ATisEmpty(e_79))))
        {
          f_79 = ATgetFirst((ATermList) e_79);
          g_79 = (ATerm) ATgetNext((ATermList) e_79);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_79), not_null(g_79));
        }
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
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL;
  o_79 = t;
  l_79 :
  if(match_cons(o_79, sym__2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      m_79 :
      if(((ATgetType(q_79) == AT_LIST) && !(ATisEmpty(q_79))))
        {
          r_79 = ATgetFirst((ATermList) q_79);
          u_79 = (ATerm) ATgetNext((ATermList) q_79);
          n_79 :
          if(match_cons(r_79, sym__2))
            {
              s_79 = ATgetArgument(r_79, 0);
              t_79 = ATgetArgument(r_79, 1);
              {
                ATerm w_79 = NULL;
                if(((p_79 != NULL) && (p_79 != s_79)))
                  _fail(s_79);
                else
                  p_79 = s_79;
                {
                  if(((w_79 != NULL) && (w_79 != t_79)))
                    _fail(t_79);
                  else
                    w_79 = t_79;
                  t = not_null(w_79);
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
ATerm RnVar_1 (ATerm t, ATerm m_111 (ATerm, ATerm (ATerm)))
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  b_80 = t;
  a_80 :
  if(match_cons(b_80, sym__2))
    {
      c_80 = ATgetArgument(b_80, 0);
      d_80 = ATgetArgument(b_80, 1);
      {
        t = not_null(c_80);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(d_80);
              return(t);
            }
            t = split_2(t, _id, y_3);
            t = lookup_0(t);
            return(t);
          }
          t = m_111(t, x_3);
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
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL;
  k_80 = t;
  j_80 :
  if(match_cons(k_80, sym__2))
    {
      l_80 = ATgetArgument(k_80, 0);
      m_80 = ATgetArgument(k_80, 1);
      {
        t = not_null(l_80);
        {
          ATerm z_3 (ATerm t)
          {
            ATerm p_80 = NULL;
            p_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_80), not_null(m_80));
              t = l_92(t);
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
ATerm env_alltd_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm t_80 (ATerm t)
  {
    ATerm k_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_91(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = k_27;
        t = all_dist_1(t, t_80);
      }
    return(t);
  }
  t = t_80(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  y_80 = t;
  x_80 :
  if(match_cons(y_80, sym__2))
    {
      z_80 = ATgetArgument(y_80, 0);
      a_81 = ATgetArgument(y_80, 1);
      {
        ATerm d_81 = NULL;
        if(((d_81 != NULL) && (d_81 != a_81)))
          _fail(a_81);
        else
          d_81 = a_81;
      }
    }
  else
    {
      if(match_cons(y_80, sym__3))
        {
          z_80 = ATgetArgument(y_80, 0);
          a_81 = ATgetArgument(y_80, 1);
          b_81 = ATgetArgument(y_80, 2);
          {
            ATerm j_81 = NULL;
            ATerm k_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(a_81));
            {
              t = zip_1(t, _id);
              {
                k_81 = t;
                if(((j_81 != NULL) && (j_81 != k_81)))
                  _fail(k_81);
                else
                  j_81 = k_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_81), not_null(b_81));
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
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL;
  t = subs_args_0(t);
  {
    q_81 = t;
    p_81 :
    if(match_cons(q_81, sym__2))
      {
        r_81 = ATgetArgument(q_81, 0);
        s_81 = ATgetArgument(q_81, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_81), (ATerm) ATempty);
          {
            ATerm w_81 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                ATerm o_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, j_110);
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
                              t = not_null(r_81);
                              return(t);
                            }
                            t = SubsVar_2(t, i_110, b_4);
                            t = n_110(t);
                          }
                          LocalPopChoice(r_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            t = RnBinding_2(t, k_110, m_110);
                            t = DistBinding_2(t, w_81, l_110);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, a_4);
              return(t);
            }
            t = w_81(t);
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
  ATerm x_81 (ATerm t, ATerm y_81 (ATerm))
  {
    t = Scope_2(t, y_81, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, x_81);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm c_113 (ATerm))
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
  g_82 = t;
  f_82 :
  if(match_cons(g_82, sym_Op_2))
    {
      h_82 = ATgetArgument(g_82, 0);
      i_82 = ATgetArgument(g_82, 1);
      {
        ATerm l_82 = NULL,m_82 = NULL;
        t = c_113(t);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm s_27;
            s_27 = t;
            {
              ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
              n_82 = t;
              e_82 :
              if(match_cons(n_82, sym_Overlay_3))
                {
                  o_82 = ATgetArgument(n_82, 0);
                  p_82 = ATgetArgument(n_82, 1);
                  q_82 = ATgetArgument(n_82, 2);
                  {
                    ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,v_82 = NULL;
                    if(((h_82 != NULL) && (h_82 != o_82)))
                      _fail(o_82);
                    else
                      h_82 = o_82;
                    {
                      if(((r_82 != NULL) && (r_82 != p_82)))
                        _fail(p_82);
                      else
                        r_82 = p_82;
                      {
                        if(((s_82 != NULL) && (s_82 != q_82)))
                          _fail(q_82);
                        else
                          s_82 = q_82;
                        {
                          ATerm t_27;
                          t_27 = t;
                          {
                            ATerm u_82 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(i_82));
                            {
                              t = zip_1(t, _id);
                              {
                                u_82 = t;
                                if(((t_82 != NULL) && (t_82 != u_82)))
                                  _fail(u_82);
                                else
                                  t_82 = u_82;
                              }
                            }
                          }
                          t = t_27;
                          {
                            ATerm w_82 = NULL;
                            t = not_null(t_82);
                            {
                              v_82 = t;
                              {
                                if(((l_82 != NULL) && (l_82 != v_82)))
                                  _fail(v_82);
                                else
                                  l_82 = v_82;
                                {
                                  t = not_null(s_82);
                                  {
                                    w_82 = t;
                                    {
                                      if(((m_82 != NULL) && (m_82 != w_82)))
                                        _fail(w_82);
                                      else
                                        m_82 = w_82;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_82), not_null(s_82));
                                    }
                                  }
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(m_82));
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
  ATerm d_4 (ATerm t)
  {
    ATerm u_27;
    u_27 = t;
    {
      ATerm v_27 = t;
      if((PushChoice() == 0))
        {
          ATerm d_83 = NULL;
          t = a_113(t);
          {
            d_83 = t;
            c_83 :
            if(((ATgetType(d_83) == AT_LIST) && ATisEmpty(d_83)))
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
          t = ExpOverlay_1(t, a_113);
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
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  r_83 = t;
  j_83 :
  if(match_cons(r_83, sym_Specification_1))
    {
      s_83 = ATgetArgument(r_83, 0);
      k_83 :
      if(((ATgetType(s_83) == AT_LIST) && !(ATisEmpty(s_83))))
        {
          t_83 = ATgetFirst((ATermList) s_83);
          v_83 = (ATerm) ATgetNext((ATermList) s_83);
          l_83 :
          if(match_cons(t_83, sym_Signature_1))
            {
              u_83 = ATgetArgument(t_83, 0);
              m_83 :
              if(((ATgetType(v_83) == AT_LIST) && !(ATisEmpty(v_83))))
                {
                  w_83 = ATgetFirst((ATermList) v_83);
                  y_83 = (ATerm) ATgetNext((ATermList) v_83);
                  n_83 :
                  if(match_cons(w_83, sym_Overlays_1))
                    {
                      x_83 = ATgetArgument(w_83, 0);
                      o_83 :
                      if(((ATgetType(y_83) == AT_LIST) && !(ATisEmpty(y_83))))
                        {
                          z_83 = ATgetFirst((ATermList) y_83);
                          b_84 = (ATerm) ATgetNext((ATermList) y_83);
                          p_83 :
                          if(match_cons(z_83, sym_Strategies_1))
                            {
                              a_84 = ATgetArgument(z_83, 0);
                              q_83 :
                              if(((ATgetType(b_84) == AT_LIST) && ATisEmpty(b_84)))
                                {
                                  {
                                    ATerm f_84 = NULL,h_84 = NULL;
                                    ATerm w_27;
                                    w_27 = t;
                                    {
                                      ATerm g_84 = NULL;
                                      t = not_null(x_83);
                                      {
                                        ATerm g_4 (ATerm t)
                                        {
                                          t = not_null(x_83);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, g_4);
                                        {
                                          g_84 = t;
                                          if(((f_84 != NULL) && (f_84 != g_84)))
                                            _fail(g_84);
                                          else
                                            f_84 = g_84;
                                        }
                                      }
                                    }
                                    t = w_27;
                                    {
                                      ATerm i_84 = NULL,k_84 = NULL,m_84 = NULL;
                                      ATerm x_27;
                                      x_27 = t;
                                      {
                                        ATerm j_84 = NULL;
                                        t = not_null(x_83);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            j_84 = t;
                                            if(((i_84 != NULL) && (i_84 != j_84)))
                                              _fail(j_84);
                                            else
                                              i_84 = j_84;
                                          }
                                        }
                                      }
                                      t = x_27;
                                      {
                                        ATerm l_84 = NULL;
                                        t = not_null(a_84);
                                        {
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = not_null(f_84);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, h_4);
                                          {
                                            l_84 = t;
                                            if(((k_84 != NULL) && (k_84 != l_84)))
                                              _fail(l_84);
                                            else
                                              k_84 = l_84;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_84), not_null(k_84));
                                          {
                                            t = conc_0(t);
                                            {
                                              m_84 = t;
                                              if(((h_84 != NULL) && (h_84 != m_84)))
                                                _fail(m_84);
                                              else
                                                h_84 = m_84;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_84))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(u_83))));
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
    ATerm v_84 = NULL;
    v_84 = t;
    {
      ATerm c_28;
      c_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_84)), term_e_28);
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
  ATerm a_85 = NULL,b_85 = NULL,e_85 = NULL,f_85 = NULL;
  a_85 = t;
  z_84 :
  if(match_cons(a_85, sym_Overlay_3))
    {
      b_85 = ATgetArgument(a_85, 0);
      e_85 = ATgetArgument(a_85, 1);
      f_85 = ATgetArgument(a_85, 2);
      {
        ATerm k_28;
        k_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_28, not_null(b_85)));
          {
            ATerm k_4 (ATerm t)
            {
              t = term_o_28;
              return(t);
            }
            t = assert_1(t, k_4);
            {
              t = not_null(e_85);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(f_85);
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
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  q_85 = t;
  m_85 :
  if(match_cons(q_85, sym_RDef_3))
    {
      r_85 = ATgetArgument(q_85, 0);
      s_85 = ATgetArgument(q_85, 1);
      t_85 = ATgetArgument(q_85, 2);
      p_85 :
      if(match_cons(t_85, sym_StratRule_3))
        {
          w_85 = ATgetArgument(t_85, 0);
          x_85 = ATgetArgument(t_85, 1);
          y_85 = ATgetArgument(t_85, 2);
          {
            ATerm p_28;
            p_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_28, not_null(r_85)));
              {
                ATerm l_4 (ATerm t)
                {
                  t = term_o_28;
                  return(t);
                }
                t = assert_1(t, l_4);
                {
                  t = not_null(w_85);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(x_85);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(y_85);
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
          if(match_cons(t_85, sym_Rule_3))
            {
              w_85 = ATgetArgument(t_85, 0);
              x_85 = ATgetArgument(t_85, 1);
              y_85 = ATgetArgument(t_85, 2);
              {
                ATerm r_28;
                r_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_28, not_null(r_85)));
                  {
                    ATerm m_4 (ATerm t)
                    {
                      t = term_o_28;
                      return(t);
                    }
                    t = assert_1(t, m_4);
                    {
                      t = not_null(w_85);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(y_85);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(x_85);
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
ATerm guardedlchoice_1 (ATerm t, ATerm k_114 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, k_114, k_114, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, k_114);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL;
  a_87 = t;
  z_86 :
  if(match_cons(a_87, sym_GuardedLChoice_3))
    {
      b_87 = ATgetArgument(a_87, 0);
      c_87 = ATgetArgument(a_87, 1);
      d_87 = ATgetArgument(a_87, 2);
      {
        ATerm i_87 = NULL,k_87 = NULL;
        ATerm j_87 = NULL;
        t = SSLgetAnnotations(not_null(a_87));
        {
          j_87 = t;
          if(((i_87 != NULL) && (i_87 != j_87)))
            _fail(j_87);
          else
            i_87 = j_87;
        }
        {
          t = not_null(b_87);
          {
            ATerm m_87 = NULL;
            t = n_75(t);
            {
              k_87 = t;
              {
                t = not_null(c_87);
                {
                  ATerm o_87 = NULL;
                  t = o_75(t);
                  {
                    m_87 = t;
                    {
                      t = not_null(d_87);
                      {
                        ATerm q_87 = NULL;
                        t = p_75(t);
                        {
                          o_87 = t;
                          {
                            ATerm r_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(k_87), not_null(m_87), not_null(o_87)), not_null(i_87));
                            {
                              r_87 = t;
                              if(((q_87 != NULL) && (q_87 != r_87)))
                                _fail(r_87);
                              else
                                q_87 = r_87;
                            }
                            t = not_null(q_87);
                          }
                        }
                      }
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
  ATerm p_4 (ATerm t)
  {
    t = LChoice_2(t, j_114, _id);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = LChoice_2(t, _id, j_114);
    return(t);
  }
  t = abstract_choice_2(t, p_4, q_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
  e_88 = t;
  d_88 :
  if(match_cons(e_88, sym_LChoice_2))
    {
      f_88 = ATgetArgument(e_88, 0);
      g_88 = ATgetArgument(e_88, 1);
      {
        ATerm m_88 = NULL,o_88 = NULL;
        ATerm n_88 = NULL;
        t = SSLgetAnnotations(not_null(e_88));
        {
          n_88 = t;
          if(((m_88 != NULL) && (m_88 != n_88)))
            _fail(n_88);
          else
            m_88 = n_88;
        }
        {
          t = not_null(f_88);
          {
            ATerm q_88 = NULL;
            t = l_75(t);
            {
              o_88 = t;
              {
                t = not_null(g_88);
                {
                  ATerm s_88 = NULL;
                  t = m_75(t);
                  {
                    q_88 = t;
                    {
                      ATerm t_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(o_88), not_null(q_88)), not_null(m_88));
                      {
                        t_88 = t;
                        if(((s_88 != NULL) && (s_88 != t_88)))
                          _fail(t_88);
                        else
                          s_88 = t_88;
                      }
                      t = not_null(s_88);
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
      ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,s_89 = NULL,t_89 = NULL;
      l_89 = t;
      f_89 :
      if(match_cons(l_89, sym__2))
        {
          m_89 = ATgetArgument(l_89, 0);
          n_89 = ATgetArgument(l_89, 1);
          g_89 :
          if(((ATgetType(n_89) == AT_LIST) && !(ATisEmpty(n_89))))
            {
              o_89 = ATgetFirst((ATermList) n_89);
              t_89 = (ATerm) ATgetNext((ATermList) n_89);
              h_89 :
              if(match_cons(o_89, sym_Defined_2))
                {
                  p_89 = ATgetArgument(o_89, 0);
                  s_89 = ATgetArgument(o_89, 1);
                  i_89 :
                  if(!(match_cons(m_89, sym_Scopes_0)))
                    {
                      ATerm x_28 = t;
                      int y_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_28;
                          z_28 = t;
                          {
                            ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(m_89));
                            {
                              t = table_get_0(t);
                              {
                                w_89 = t;
                                d_89 :
                                if(((ATgetType(w_89) == AT_LIST) && !(ATisEmpty(w_89))))
                                  {
                                    x_89 = ATgetFirst((ATermList) w_89);
                                    a_90 = (ATerm) ATgetNext((ATermList) w_89);
                                    e_89 :
                                    if(match_cons(x_89, sym_Defined_2))
                                      {
                                        y_89 = ATgetArgument(x_89, 0);
                                        z_89 = ATgetArgument(x_89, 1);
                                        if(((s_89 != NULL) && (s_89 != z_89)))
                                          _fail(z_89);
                                        else
                                          s_89 = z_89;
                                      }
                                    else
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
                          LocalPopChoice(y_28);
                        }
                      else
                        {
                          t = x_28;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_89), (ATerm) ATinsert(ATempty, term_a_29));
                        }
                    }
                }
              else
                {
                  j_89 :
                  if(!(match_cons(m_89, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              k_89 :
              if(!(match_cons(m_89, sym_Scopes_0)))
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
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      {
        t = not_null(j_90);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
            m_90 = t;
            f_90 :
            if(match_cons(m_90, sym__2))
              {
                n_90 = ATgetArgument(m_90, 0);
                o_90 = ATgetArgument(m_90, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_90), not_null(n_90), not_null(o_90));
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
  ATerm u_90 = NULL;
  u_90 = t;
  {
    ATerm b_29;
    b_29 = t;
    {
      t = term_i_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(u_90));
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
  ATerm y_90 = NULL;
  y_90 = t;
  t = SSL_table_keys(not_null(y_90));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm e_91 = NULL;
  e_91 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm g_91 = NULL;
        ATerm i_91 = NULL;
        g_91 = t;
        {
          ATerm j_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_91), not_null(g_91));
          {
            t = table_get_0(t);
            {
              j_91 = t;
              if(((i_91 != NULL) && (i_91 != j_91)))
                _fail(j_91);
              else
                i_91 = j_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_91), not_null(i_91));
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
ATerm abstract_choice_2 (ATerm t, ATerm g_114 (ATerm), ATerm h_114 (ATerm))
{
  ATerm p_91 = NULL,r_91 = NULL;
  ATerm i_29;
  i_29 = t;
  {
    ATerm q_91 = NULL;
    t = save_Bound_0(t);
    {
      q_91 = t;
      if(((p_91 != NULL) && (p_91 != q_91)))
        _fail(q_91);
      else
        p_91 = q_91;
    }
  }
  t = i_29;
  {
    t = g_114(t);
    {
      ATerm j_29;
      j_29 = t;
      {
        ATerm s_91 = NULL;
        t = save_Bound_0(t);
        {
          s_91 = t;
          {
            if(((r_91 != NULL) && (r_91 != s_91)))
              _fail(s_91);
            else
              r_91 = s_91;
            {
              t = not_null(p_91);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = j_29;
      {
        t = h_114(t);
        {
          ATerm k_29;
          k_29 = t;
          {
            t = not_null(r_91);
            t = isect_Bound_0(t);
          }
          t = k_29;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm i_114 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = Choice_2(t, i_114, _id);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = Choice_2(t, _id, i_114);
    return(t);
  }
  t = abstract_choice_2(t, v_4, w_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL;
  d_92 = t;
  c_92 :
  if(match_cons(d_92, sym_Choice_2))
    {
      e_92 = ATgetArgument(d_92, 0);
      f_92 = ATgetArgument(d_92, 1);
      {
        ATerm j_92 = NULL,m_92 = NULL;
        ATerm k_92 = NULL;
        t = SSLgetAnnotations(not_null(d_92));
        {
          k_92 = t;
          if(((j_92 != NULL) && (j_92 != k_92)))
            _fail(k_92);
          else
            j_92 = k_92;
        }
        {
          t = not_null(e_92);
          {
            ATerm o_92 = NULL;
            t = j_75(t);
            {
              m_92 = t;
              {
                t = not_null(f_92);
                {
                  ATerm q_92 = NULL;
                  t = k_75(t);
                  {
                    o_92 = t;
                    {
                      ATerm r_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_92), not_null(o_92)), not_null(j_92));
                      {
                        r_92 = t;
                        if(((q_92 != NULL) && (q_92 != r_92)))
                          _fail(r_92);
                        else
                          q_92 = r_92;
                      }
                      t = not_null(q_92);
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
  ATerm u_93 = NULL;
  u_93 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_93 = NULL;
        ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm x_4 (ATerm t)
          {
            t = term_o_28;
            return(t);
          }
          t = rewrite_1(t, x_4);
          {
            y_93 = t;
            h_93 :
            if(match_cons(y_93, sym_Defined_2))
              {
                z_93 = ATgetArgument(y_93, 0);
                a_94 = ATgetArgument(y_93, 1);
                i_93 :
                if(match_string(z_93, "x_0"))
                  {
                    if(((x_93 != NULL) && (x_93 != a_94)))
                      _fail(a_94);
                    else
                      x_93 = a_94;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_93)), term_t_23), not_null(x_93)), term_q_29);
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
              ATerm f_94 = NULL;
              ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm y_4 (ATerm t)
                {
                  t = term_o_28;
                  return(t);
                }
                t = rewrite_1(t, y_4);
                {
                  g_94 = t;
                  k_93 :
                  if(match_cons(g_94, sym_Defined_2))
                    {
                      h_94 = ATgetArgument(g_94, 0);
                      i_94 = ATgetArgument(g_94, 1);
                      n_93 :
                      if(match_string(h_94, "u_0"))
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_93)), term_t_23), not_null(f_94)), term_t_29);
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
                    ATerm l_94 = NULL;
                    ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm z_4 (ATerm t)
                      {
                        t = term_o_28;
                        return(t);
                      }
                      t = rewrite_1(t, z_4);
                      {
                        m_94 = t;
                        p_93 :
                        if(match_cons(m_94, sym_Defined_2))
                          {
                            n_94 = ATgetArgument(m_94, 0);
                            o_94 = ATgetArgument(m_94, 1);
                            q_93 :
                            if(match_string(n_94, "r_0"))
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_93)), term_t_23), not_null(l_94)), term_t_29);
                    LocalPopChoice(v_29);
                  }
                else
                  {
                    t = u_29;
                    {
                      ATerm r_94 = NULL;
                      ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
                      t = (ATerm) ATempty;
                      {
                        ATerm a_5 (ATerm t)
                        {
                          t = term_o_28;
                          return(t);
                        }
                        t = rewrite_1(t, a_5);
                        {
                          s_94 = t;
                          s_93 :
                          if(match_cons(s_94, sym_Defined_2))
                            {
                              t_94 = ATgetArgument(s_94, 0);
                              u_94 = ATgetArgument(s_94, 1);
                              t_93 :
                              if(match_string(t_94, "o_0"))
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_93)), term_t_23), not_null(r_94)), term_w_29);
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
  ATerm m_95 = NULL,n_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym_Var_1))
    {
      n_95 = ATgetArgument(m_95, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_29), not_null(n_95)), term_x_29);
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
  ATerm a_96 = NULL,b_96 = NULL;
  a_96 = t;
  z_95 :
  if(match_cons(a_96, sym_Var_1))
    {
      b_96 = ATgetArgument(a_96, 0);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_96 = NULL,f_96 = NULL;
            t = not_null(a_96);
            {
              ATerm b_5 (ATerm t)
              {
                t = term_i_28;
                return(t);
              }
              t = rewrite_1(t, b_5);
              {
                e_96 = t;
                t_95 :
                if(match_cons(e_96, sym_Defined_1))
                  {
                    f_96 = ATgetArgument(e_96, 0);
                    u_95 :
                    if(!(match_string(f_96, "e_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_96));
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
                  ATerm i_96 = NULL;
                  t = not_null(a_96);
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = term_i_28;
                      return(t);
                    }
                    t = rewrite_1(t, c_5);
                    {
                      i_96 = t;
                      w_95 :
                      if(match_cons(i_96, sym_Undefined_0))
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
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm l_96 = NULL,m_96 = NULL;
                    t = not_null(a_96);
                    {
                      ATerm d_5 (ATerm t)
                      {
                        t = term_i_28;
                        return(t);
                      }
                      t = rewrite_1(t, d_5);
                      {
                        l_96 = t;
                        x_95 :
                        if(match_cons(l_96, sym_Defined_1))
                          {
                            m_96 = ATgetArgument(l_96, 0);
                            y_95 :
                            if(!(match_string(m_96, "a_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_96));
                  }
                }
            }
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
ATerm Rule_3 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
  y_96 = t;
  x_96 :
  if(match_cons(y_96, sym_Rule_3))
    {
      z_96 = ATgetArgument(y_96, 0);
      a_97 = ATgetArgument(y_96, 1);
      b_97 = ATgetArgument(y_96, 2);
      {
        ATerm g_97 = NULL,i_97 = NULL;
        ATerm h_97 = NULL;
        t = SSLgetAnnotations(not_null(y_96));
        {
          h_97 = t;
          if(((g_97 != NULL) && (g_97 != h_97)))
            _fail(h_97);
          else
            g_97 = h_97;
        }
        {
          t = not_null(z_96);
          {
            ATerm k_97 = NULL;
            t = m_77(t);
            {
              i_97 = t;
              {
                t = not_null(a_97);
                {
                  ATerm m_97 = NULL;
                  t = n_77(t);
                  {
                    k_97 = t;
                    {
                      t = not_null(b_97);
                      {
                        ATerm o_97 = NULL;
                        t = o_77(t);
                        {
                          m_97 = t;
                          {
                            ATerm p_97 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(i_97), not_null(k_97), not_null(m_97)), not_null(g_97));
                            {
                              p_97 = t;
                              if(((o_97 != NULL) && (o_97 != p_97)))
                                _fail(p_97);
                              else
                                o_97 = p_97;
                            }
                            t = not_null(o_97);
                          }
                        }
                      }
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
  ATerm b_98 = NULL,c_98 = NULL;
  b_98 = t;
  a_98 :
  if(match_cons(b_98, sym_RootApp_1))
    {
      c_98 = ATgetArgument(b_98, 0);
      {
        ATerm f_98 = NULL,h_98 = NULL;
        ATerm g_98 = NULL;
        t = SSLgetAnnotations(not_null(b_98));
        {
          g_98 = t;
          if(((f_98 != NULL) && (f_98 != g_98)))
            _fail(g_98);
          else
            f_98 = g_98;
        }
        {
          t = not_null(c_98);
          {
            ATerm o_98 = NULL;
            t = h_78(t);
            {
              h_98 = t;
              {
                ATerm r_98 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(h_98)), not_null(f_98));
                {
                  r_98 = t;
                  if(((o_98 != NULL) && (o_98 != r_98)))
                    _fail(r_98);
                  else
                    o_98 = r_98;
                }
                t = not_null(o_98);
              }
            }
          }
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
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym_App_2))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      {
        ATerm s_99 = NULL,u_99 = NULL;
        ATerm t_99 = NULL;
        t = SSLgetAnnotations(not_null(h_99));
        {
          t_99 = t;
          if(((s_99 != NULL) && (s_99 != t_99)))
            _fail(t_99);
          else
            s_99 = t_99;
        }
        {
          t = not_null(i_99);
          {
            ATerm w_99 = NULL;
            t = f_78(t);
            {
              u_99 = t;
              {
                t = not_null(j_99);
                {
                  ATerm y_99 = NULL;
                  t = g_78(t);
                  {
                    w_99 = t;
                    {
                      ATerm z_99 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(u_99), not_null(w_99)), not_null(s_99));
                      {
                        z_99 = t;
                        if(((y_99 != NULL) && (y_99 != z_99)))
                          _fail(z_99);
                        else
                          y_99 = z_99;
                      }
                      t = not_null(y_99);
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
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym__3))
    {
      k_100 = ATgetArgument(j_100, 0);
      l_100 = ATgetArgument(j_100, 1);
      m_100 = ATgetArgument(j_100, 2);
      {
        ATerm r_100 = NULL;
        ATerm l_30;
        l_30 = t;
        {
          ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_100), not_null(l_100));
          {
            t = table_get_0(t);
            {
              s_100 = t;
              h_100 :
              if(((ATgetType(s_100) == AT_LIST) && !(ATisEmpty(s_100))))
                {
                  t_100 = ATgetFirst((ATermList) s_100);
                  u_100 = (ATerm) ATgetNext((ATermList) s_100);
                  {
                    if(((r_100 != NULL) && (r_100 != u_100)))
                      _fail(u_100);
                    else
                      r_100 = u_100;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_100), not_null(l_100), (ATerm) ATinsert(CheckATermList(not_null(r_100)), not_null(m_100)));
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
ATerm override_key_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_cons(c_101, sym__2))
    {
      d_101 = ATgetArgument(c_101, 0);
      e_101 = ATgetArgument(c_101, 1);
      {
        ATerm h_101 = NULL;
        ATerm r_30;
        r_30 = t;
        {
          ATerm i_101 = NULL;
          t = o_103(t);
          {
            i_101 = t;
            {
              if(((h_101 != NULL) && (h_101 != i_101)))
                _fail(i_101);
              else
                h_101 = i_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_101), not_null(d_101), not_null(e_101));
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
  ATerm n_101 = NULL,o_101 = NULL;
  n_101 = t;
  m_101 :
  if(match_cons(n_101, sym_Var_1))
    {
      o_101 = ATgetArgument(n_101, 0);
      {
        ATerm s_30;
        s_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_101)), term_y_30);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm a_102 = NULL,b_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym_Var_1))
    {
      b_102 = ATgetArgument(a_102, 0);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_102 = NULL,g_102 = NULL;
            ATerm f_102 = NULL;
            t = SSLgetAnnotations(not_null(a_102));
            {
              f_102 = t;
              if(((e_102 != NULL) && (e_102 != f_102)))
                _fail(f_102);
              else
                e_102 = f_102;
            }
            {
              t = not_null(b_102);
              {
                ATerm i_102 = NULL;
                t = s_0(t);
                {
                  g_102 = t;
                  {
                    ATerm j_102 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_102)), not_null(e_102));
                    {
                      j_102 = t;
                      if(((i_102 != NULL) && (i_102 != j_102)))
                        _fail(j_102);
                      else
                        i_102 = j_102;
                    }
                    t = not_null(i_102);
                  }
                }
              }
            }
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm m_102 = NULL,o_102 = NULL;
              ATerm n_102 = NULL;
              t = SSLgetAnnotations(not_null(a_102));
              {
                n_102 = t;
                if(((m_102 != NULL) && (m_102 != n_102)))
                  _fail(n_102);
                else
                  m_102 = n_102;
              }
              {
                t = not_null(b_102);
                {
                  ATerm q_102 = NULL;
                  t = s_0(t);
                  {
                    o_102 = t;
                    {
                      ATerm r_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_102)), not_null(m_102));
                      {
                        r_102 = t;
                        if(((q_102 != NULL) && (q_102 != r_102)))
                          _fail(r_102);
                        else
                          q_102 = r_102;
                      }
                      t = not_null(q_102);
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
ATerm Match_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm f_103 = NULL,g_103 = NULL;
  f_103 = t;
  e_103 :
  if(match_cons(f_103, sym_Match_1))
    {
      g_103 = ATgetArgument(f_103, 0);
      {
        ATerm q_103 = NULL,s_103 = NULL;
        ATerm r_103 = NULL;
        t = SSLgetAnnotations(not_null(f_103));
        {
          r_103 = t;
          if(((q_103 != NULL) && (q_103 != r_103)))
            _fail(r_103);
          else
            q_103 = r_103;
        }
        {
          t = not_null(g_103);
          {
            ATerm w_103 = NULL;
            t = q_74(t);
            {
              s_103 = t;
              {
                ATerm x_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(s_103)), not_null(q_103));
                {
                  x_103 = t;
                  if(((w_103 != NULL) && (w_103 != x_103)))
                    _fail(x_103);
                  else
                    w_103 = x_103;
                }
                t = not_null(w_103);
              }
            }
          }
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
  ATerm h_104 = NULL,i_104 = NULL;
  h_104 = t;
  g_104 :
  if(match_cons(h_104, sym_Build_1))
    {
      i_104 = ATgetArgument(h_104, 0);
      {
        ATerm l_104 = NULL,n_104 = NULL;
        ATerm m_104 = NULL;
        t = SSLgetAnnotations(not_null(h_104));
        {
          m_104 = t;
          if(((l_104 != NULL) && (l_104 != m_104)))
            _fail(m_104);
          else
            l_104 = m_104;
        }
        {
          t = not_null(i_104);
          {
            ATerm p_104 = NULL;
            t = r_74(t);
            {
              n_104 = t;
              {
                ATerm q_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(n_104)), not_null(l_104));
                {
                  q_104 = t;
                  if(((p_104 != NULL) && (p_104 != q_104)))
                    _fail(q_104);
                  else
                    p_104 = q_104;
                }
                t = not_null(p_104);
              }
            }
          }
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
  ATerm f_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, f_114);
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
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(t_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = r_31;
                  {
                    ATerm u_31 = t;
                    int v_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(v_31);
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
                        t = u_31;
                        {
                          ATerm w_31 = t;
                          int x_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(x_31);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = w_31;
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
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL,g_105 = NULL;
  z_104 = t;
  x_104 :
  if(match_cons(z_104, sym_SDef_3))
    {
      a_105 = ATgetArgument(z_104, 0);
      b_105 = ATgetArgument(z_104, 1);
      g_105 = ATgetArgument(z_104, 2);
      {
        ATerm d_32;
        d_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_32, not_null(a_105)));
          {
            ATerm h_5 (ATerm t)
            {
              t = term_o_28;
              return(t);
            }
            t = assert_1(t, h_5);
            {
              t = not_null(g_105);
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
    ATerm s_105 = NULL;
    s_105 = t;
    {
      ATerm g_32;
      g_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_105)), term_a_29);
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
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_32;
          n_32 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = n_32;
          t = sdef_ud_0(t);
          LocalPopChoice(m_32);
        }
      else
        {
          t = k_32;
          {
            ATerm o_32 = t;
            int p_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(p_32);
              }
            else
              {
                t = o_32;
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
  ATerm q_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = q_32;
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
ATerm Signature_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm e_106 = NULL,f_106 = NULL;
  e_106 = t;
  d_106 :
  if(match_cons(e_106, sym_Signature_1))
    {
      f_106 = ATgetArgument(e_106, 0);
      {
        ATerm i_106 = NULL,k_106 = NULL;
        ATerm j_106 = NULL;
        t = SSLgetAnnotations(not_null(e_106));
        {
          j_106 = t;
          if(((i_106 != NULL) && (i_106 != j_106)))
            _fail(j_106);
          else
            i_106 = j_106;
        }
        {
          t = not_null(f_106);
          {
            ATerm m_106 = NULL;
            t = b_77(t);
            {
              k_106 = t;
              {
                ATerm n_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(k_106)), not_null(i_106));
                {
                  n_106 = t;
                  if(((m_106 != NULL) && (m_106 != n_106)))
                    _fail(n_106);
                  else
                    m_106 = n_106;
                }
                t = not_null(m_106);
              }
            }
          }
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
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
  p_107 = t;
  i_107 :
  if(match_cons(p_107, sym_Lets_2))
    {
      q_107 = ATgetArgument(p_107, 0);
      r_107 = ATgetArgument(p_107, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_107), not_null(r_107));
    }
  else
    {
      if(match_cons(p_107, sym_LChoices_1))
        {
          q_107 = ATgetArgument(p_107, 0);
          j_107 :
          if(((ATgetType(q_107) == AT_LIST) && !(ATisEmpty(q_107))))
            {
              m_107 = ATgetFirst((ATermList) q_107);
              n_107 = (ATerm) ATgetNext((ATermList) q_107);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_107), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_107)));
            }
          else
            {
              if(((ATgetType(q_107) == AT_LIST) && ATisEmpty(q_107)))
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
          if(match_cons(p_107, sym_Choices_1))
            {
              q_107 = ATgetArgument(p_107, 0);
              k_107 :
              if(((ATgetType(q_107) == AT_LIST) && !(ATisEmpty(q_107))))
                {
                  m_107 = ATgetFirst((ATermList) q_107);
                  n_107 = (ATerm) ATgetNext((ATermList) q_107);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_107), (ATerm) ATmakeAppl(sym_Choices_1, not_null(n_107)));
                }
              else
                {
                  if(((ATgetType(q_107) == AT_LIST) && ATisEmpty(q_107)))
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
              if(match_cons(p_107, sym_Seqs_1))
                {
                  q_107 = ATgetArgument(p_107, 0);
                  l_107 :
                  if(((ATgetType(q_107) == AT_LIST) && !(ATisEmpty(q_107))))
                    {
                      m_107 = ATgetFirst((ATermList) q_107);
                      n_107 = (ATerm) ATgetNext((ATermList) q_107);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_107), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_107)));
                    }
                  else
                    {
                      if(((ATgetType(q_107) == AT_LIST) && ATisEmpty(q_107)))
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
                  if(match_cons(p_107, sym_DefaultVarDec_1))
                    {
                      q_107 = ATgetArgument(p_107, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_107), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_21), term_n_21));
                    }
                  else
                    {
                      if(match_cons(p_107, sym_InfixApp_3))
                        {
                          q_107 = ATgetArgument(p_107, 0);
                          r_107 = ATgetArgument(p_107, 1);
                          o_107 = ATgetArgument(p_107, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_107), (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_107)), not_null(q_107))));
                        }
                      else
                        {
                          if(match_cons(p_107, sym_BAM_3))
                            {
                              q_107 = ATgetArgument(p_107, 0);
                              r_107 = ATgetArgument(p_107, 1);
                              o_107 = ATgetArgument(p_107, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_107))), not_null(q_107)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_107))));
                            }
                          else
                            {
                              if(match_cons(p_107, sym_AM_2))
                                {
                                  q_107 = ATgetArgument(p_107, 0);
                                  r_107 = ATgetArgument(p_107, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_107), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_107)));
                                }
                              else
                                {
                                  if(match_cons(p_107, sym_MA_2))
                                    {
                                      q_107 = ATgetArgument(p_107, 0);
                                      r_107 = ATgetArgument(p_107, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_107)), not_null(r_107));
                                    }
                                  else
                                    {
                                      if(match_cons(p_107, sym_BA_2))
                                        {
                                          q_107 = ATgetArgument(p_107, 0);
                                          r_107 = ATgetArgument(p_107, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_107)), not_null(q_107));
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
    ATerm v_5 (ATerm t)
    {
      t = topdown_1(t, s_86);
      return(t);
    }
    t = _all(t, v_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  l_109 = t;
  i_109 :
  if(match_cons(l_109, sym__2))
    {
      m_109 = ATgetArgument(l_109, 0);
      p_109 = ATgetArgument(l_109, 1);
      j_109 :
      if(match_cons(m_109, sym__2))
        {
          n_109 = ATgetArgument(m_109, 0);
          o_109 = ATgetArgument(m_109, 1);
          k_109 :
          if(match_cons(p_109, sym__2))
            {
              q_109 = ATgetArgument(p_109, 0);
              r_109 = ATgetArgument(p_109, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_109)), not_null(n_109)), (ATerm) ATinsert(CheckATermList(not_null(r_109)), not_null(o_109)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL;
  z_109 = t;
  y_109 :
  if(((ATgetType(z_109) == AT_LIST) && !(ATisEmpty(z_109))))
    {
      a_110 = ATgetFirst((ATermList) z_109);
      b_110 = (ATerm) ATgetNext((ATermList) z_109);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_110), not_null(b_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_110 = NULL;
  h_110 = t;
  g_110 :
  if(((ATgetType(h_110) == AT_LIST) && ATisEmpty(h_110)))
    {
      t = term_j_33;
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
  ATerm k_111 = NULL,l_111 = NULL;
  k_111 = t;
  j_111 :
  if(match_cons(k_111, sym_Var_1))
    {
      l_111 = ATgetArgument(k_111, 0);
      {
        ATerm p_111 = NULL,q_111 = NULL;
        t = not_null(k_111);
        {
          ATerm w_5 (ATerm t)
          {
            t = term_n_33;
            return(t);
          }
          t = rewrite_1(t, w_5);
          {
            p_111 = t;
            f_111 :
            if(match_cons(p_111, sym_Defined_1))
              {
                q_111 = ATgetArgument(p_111, 0);
                g_111 :
                if(!(match_string(q_111, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_111));
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
    ATerm t_111 = NULL;
    ATerm u_111 = NULL;
    u_111 = t;
    if(((t_111 != NULL) && (t_111 != u_111)))
      _fail(u_111);
    else
      t_111 = u_111;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(t_111));
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
    ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL;
    g_112 = t;
    f_112 :
    if(match_cons(g_112, sym_Var_1))
      {
        h_112 = ATgetArgument(g_112, 0);
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
        if(match_cons(g_112, sym_Wld_0))
          {
            t = term_g_34;
          }
        else
          {
            if(match_cons(g_112, sym_RootApp_1))
              {
                h_112 = ATgetArgument(g_112, 0);
                {
                  ATerm q_112 = NULL;
                  ATerm t_112 = NULL;
                  t = not_null(h_112);
                  {
                    t = tvars_0(t);
                    {
                      ATerm y_5 (ATerm t)
                      {
                        ATerm r_112 = NULL;
                        ATerm s_112 = NULL;
                        s_112 = t;
                        if(((r_112 != NULL) && (r_112 != s_112)))
                          _fail(s_112);
                        else
                          r_112 = s_112;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_112));
                        return(t);
                      }
                      t = map_1(t, y_5);
                      {
                        t_112 = t;
                        if(((q_112 != NULL) && (q_112 != t_112)))
                          _fail(t_112);
                        else
                          q_112 = t_112;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_34, not_null(q_112));
                }
              }
            else
              {
                if(match_cons(g_112, sym_App_2))
                  {
                    h_112 = ATgetArgument(g_112, 0);
                    i_112 = ATgetArgument(g_112, 1);
                    {
                      ATerm z_112 = NULL;
                      ATerm g_113 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_112), not_null(i_112));
                      {
                        t = tvars_0(t);
                        {
                          ATerm z_5 (ATerm t)
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
                          t = map_1(t, z_5);
                          {
                            g_113 = t;
                            if(((z_112 != NULL) && (z_112 != g_113)))
                              _fail(g_113);
                            else
                              z_112 = g_113;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_p_34, not_null(z_112));
                    }
                  }
                else
                  {
                    if(match_cons(g_112, sym_Con_3))
                      {
                        h_112 = ATgetArgument(g_112, 0);
                        i_112 = ATgetArgument(g_112, 1);
                        j_112 = ATgetArgument(g_112, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_q_34);
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
ATerm SplitDynamicRule_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
  ATerm d_117 (ATerm t)
  {
    ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,n_116 = NULL,a_117 = NULL;
    ATerm r_34;
    r_34 = t;
    {
      ATerm o_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_115), term_v_34);
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
          ATerm p_116 = NULL;
          t = new_0(t);
          {
            o_116 = t;
            {
              if(((h_116 != NULL) && (h_116 != o_116)))
                _fail(o_116);
              else
                h_116 = o_116;
              {
                t = not_null(m_115);
                {
                  ATerm r_116 = NULL;
                  t = dummify_0(t);
                  {
                    p_116 = t;
                    {
                      if(((j_116 != NULL) && (j_116 != p_116)))
                        _fail(p_116);
                      else
                        j_116 = p_116;
                      {
                        ATerm u_116 = NULL;
                        ATerm a_6 (ATerm t)
                        {
                          ATerm q_116 = NULL;
                          q_116 = t;
                          {
                            if(((m_115 != NULL) && (m_115 != q_116)))
                              _fail(q_116);
                            else
                              m_115 = q_116;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_116));
                          }
                          return(t);
                        }
                        t = try_1(t, a_6);
                        {
                          r_116 = t;
                          {
                            if(((i_116 != NULL) && (i_116 != r_116)))
                              _fail(r_116);
                            else
                              i_116 = r_116;
                            {
                              t = not_null(j_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm x_116 = NULL;
                                  ATerm b_6 (ATerm t)
                                  {
                                    ATerm s_116 = NULL;
                                    ATerm t_116 = NULL;
                                    t_116 = t;
                                    if(((s_116 != NULL) && (s_116 != t_116)))
                                      _fail(t_116);
                                    else
                                      s_116 = t_116;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_116));
                                    return(t);
                                  }
                                  t = map_1(t, b_6);
                                  {
                                    u_116 = t;
                                    {
                                      if(((l_116 != NULL) && (l_116 != u_116)))
                                        _fail(u_116);
                                      else
                                        l_116 = u_116;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_115), not_null(o_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm y_116 = NULL;
                                            ATerm c_6 (ATerm t)
                                            {
                                              ATerm v_116 = NULL;
                                              ATerm w_116 = NULL;
                                              w_116 = t;
                                              if(((v_116 != NULL) && (v_116 != w_116)))
                                                _fail(w_116);
                                              else
                                                v_116 = w_116;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_116));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, c_6);
                                            {
                                              x_116 = t;
                                              {
                                                if(((k_116 != NULL) && (k_116 != x_116)))
                                                  _fail(x_116);
                                                else
                                                  k_116 = x_116;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_116), not_null(l_116));
                                                  {
                                                    ATerm z_116 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      y_116 = t;
                                                      {
                                                        if(((m_116 != NULL) && (m_116 != y_116)))
                                                          _fail(y_116);
                                                        else
                                                          m_116 = y_116;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            z_116 = t;
                                                            if(((n_116 != NULL) && (n_116 != z_116)))
                                                              _fail(z_116);
                                                            else
                                                              n_116 = z_116;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = r_34;
    {
      ATerm b_117 = NULL;
      t = not_null(j_115);
      {
        t = q_0(t);
        {
          b_117 = t;
          if(((a_117 != NULL) && (a_117 != b_117)))
            _fail(b_117);
          else
            a_117 = b_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(a_117), (ATerm) ATmakeAppl(sym_Op_2, term_a_35, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(CheckATermList(not_null(m_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(n_116))))), not_null(j_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(j_115), not_null(k_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_116)), not_null(m_115)), not_null(n_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(j_115))))), not_null(i_116)), (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(CheckATermList(not_null(m_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(n_116))))), not_null(o_115)))));
    }
    return(t);
  }
  i_115 = t;
  a_115 :
  if(match_cons(i_115, sym_RDef_3))
    {
      j_115 = ATgetArgument(i_115, 0);
      k_115 = ATgetArgument(i_115, 1);
      l_115 = ATgetArgument(i_115, 2);
      b_115 :
      if(match_cons(l_115, sym_Rule_3))
        {
          m_115 = ATgetArgument(l_115, 0);
          n_115 = ATgetArgument(l_115, 1);
          o_115 = ATgetArgument(l_115, 2);
          c_115 :
          if(match_cons(n_115, sym_Op_2))
            {
              g_115 = ATgetArgument(n_115, 0);
              h_115 = ATgetArgument(n_115, 1);
              d_115 :
              if(((ATgetType(h_115) == AT_LIST) && ATisEmpty(h_115)))
                {
                  e_115 :
                  if(match_string(g_115, "Undefined"))
                    {
                      ATerm e_35 = t;
                      int f_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,a_116 = NULL;
                          ATerm g_35;
                          g_35 = t;
                          {
                            ATerm w_115 = NULL;
                            ATerm x_115 = NULL;
                            t = new_0(t);
                            {
                              w_115 = t;
                              {
                                if(((u_115 != NULL) && (u_115 != w_115)))
                                  _fail(w_115);
                                else
                                  u_115 = w_115;
                                {
                                  t = not_null(m_115);
                                  {
                                    ATerm z_115 = NULL;
                                    t = dummify_0(t);
                                    {
                                      x_115 = t;
                                      {
                                        if(((t_115 != NULL) && (t_115 != x_115)))
                                          _fail(x_115);
                                        else
                                          t_115 = x_115;
                                        {
                                          ATerm d_6 (ATerm t)
                                          {
                                            ATerm y_115 = NULL;
                                            y_115 = t;
                                            {
                                              if(((m_115 != NULL) && (m_115 != y_115)))
                                                _fail(y_115);
                                              else
                                                m_115 = y_115;
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_115));
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, d_6);
                                          {
                                            z_115 = t;
                                            if(((v_115 != NULL) && (v_115 != z_115)))
                                              _fail(z_115);
                                            else
                                              v_115 = z_115;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = g_35;
                          {
                            ATerm b_116 = NULL;
                            t = not_null(j_115);
                            {
                              t = q_0(t);
                              {
                                b_116 = t;
                                if(((a_116 != NULL) && (a_116 != b_116)))
                                  _fail(b_116);
                                else
                                  a_116 = b_116;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(a_116), (ATerm) ATmakeAppl(sym_Op_2, term_a_35, (ATerm) ATinsert(ATinsert(ATempty, term_v_34), not_null(t_115))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(j_115), not_null(k_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_115)), not_null(m_115)), term_v_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(j_115))))), not_null(v_115)), term_v_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_115), term_y_32)))));
                          }
                          LocalPopChoice(f_35);
                        }
                      else
                        {
                          t = e_35;
                          t = d_117(t);
                        }
                    }
                  else
                    {
                      t = d_117(t);
                    }
                }
              else
                {
                  f_115 :
                  t = d_117(t);
                }
            }
          else
            {
              t = d_117(t);
            }
        }
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
  ATerm z_117 = NULL,a_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym_OverrideDynamicRules_1))
    {
      a_118 = ATgetArgument(z_117, 0);
      {
        t = not_null(a_118);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm c_118 = NULL;
              ATerm d_118 = NULL;
              d_118 = t;
              if(((c_118 != NULL) && (c_118 != d_118)))
                _fail(d_118);
              else
                c_118 = d_118;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_118)))));
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
      if(match_cons(z_117, sym_DynamicRules_1))
        {
          a_118 = ATgetArgument(z_117, 0);
          {
            t = not_null(a_118);
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm f_118 = NULL;
                  ATerm g_118 = NULL;
                  g_118 = t;
                  if(((f_118 != NULL) && (f_118 != g_118)))
                    _fail(g_118);
                  else
                    f_118 = g_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_118)))));
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
ATerm split_under_scope_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL;
  o_118 = t;
  n_118 :
  if(match_cons(o_118, sym_Scope_2))
    {
      p_118 = ATgetArgument(o_118, 0);
      q_118 = ATgetArgument(o_118, 1);
      {
        ATerm t_118 = NULL;
        ATerm i_6 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          ATerm u_118 = NULL;
          t = not_null(p_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(q_118);
              {
                t = x_112(t);
                {
                  u_118 = t;
                  if(((t_118 != NULL) && (t_118 != u_118)))
                    _fail(u_118);
                  else
                    t_118 = u_118;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_6, j_6);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_118), not_null(t_118));
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
  ATerm x_118 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_88(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = _one(t, x_118);
      }
    return(t);
  }
  t = x_118(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm y_118 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm b_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_112(t);
          LocalPopChoice(e_36);
        }
      else
        {
          t = b_36;
          t = split_under_scope_1(t, y_118);
        }
      return(t);
    }
    t = oncetd_1(t, k_6);
    return(t);
  }
  t = y_118(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm a_119 = NULL;
    a_119 = t;
    {
      ATerm j_36;
      j_36 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_119)), term_l_36);
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
  ATerm i_119 = NULL,j_119 = NULL,k_119 = NULL;
  i_119 = t;
  h_119 :
  if(((ATgetType(i_119) == AT_LIST) && !(ATisEmpty(i_119))))
    {
      j_119 = ATgetFirst((ATermList) i_119);
      k_119 = (ATerm) ATgetNext((ATermList) i_119);
      {
        ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          ATerm t_119 = NULL;
          t = not_null(j_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(j_119);
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      q_119 = t;
                      f_119 :
                      if(match_cons(q_119, sym__2))
                        {
                          r_119 = ATgetArgument(q_119, 0);
                          s_119 = ATgetArgument(q_119, 1);
                          {
                            if(((o_119 != NULL) && (o_119 != r_119)))
                              _fail(r_119);
                            else
                              o_119 = r_119;
                            {
                              if(((n_119 != NULL) && (n_119 != s_119)))
                                _fail(s_119);
                              else
                                n_119 = s_119;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_119));
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
                    t_119 = t;
                    if(((p_119 != NULL) && (p_119 != t_119)))
                      _fail(t_119);
                    else
                      p_119 = t_119;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, n_6, o_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_119)), not_null(p_119)), not_null(k_119));
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
ATerm repeat_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm x_119 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = u_85(t);
      t = x_119(t);
      return(t);
    }
    t = try_1(t, q_6);
    return(t);
  }
  t = x_119(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm y_119 (ATerm t)
  {
    t = d_94(t);
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          t = Cons_2(t, _id, y_119);
        }
    }
    return(t);
  }
  t = y_119(t);
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
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL;
  f_120 = t;
  b_120 :
  if(match_cons(f_120, sym_DynRuleScope_2))
    {
      g_120 = ATgetArgument(f_120, 0);
      h_120 = ATgetArgument(f_120, 1);
      c_120 :
      if(((ATgetType(g_120) == AT_LIST) && !(ATisEmpty(g_120))))
        {
          d_120 = ATgetFirst((ATermList) g_120);
          e_120 = (ATerm) ATgetNext((ATermList) g_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(e_120), not_null(h_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_120)))));
        }
      else
        {
          if(((ATgetType(g_120) == AT_LIST) && ATisEmpty(g_120)))
            {
              t = not_null(h_120);
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
  ATerm r_120 = NULL,s_120 = NULL;
  r_120 = t;
  q_120 :
  if(match_cons(r_120, sym_ScopeDefault_1))
    {
      s_120 = ATgetArgument(r_120, 0);
      {
        ATerm u_120 = NULL;
        ATerm v_120 = NULL;
        t = not_null(s_120);
        {
          t = tvars_0(t);
          {
            v_120 = t;
            if(((u_120 != NULL) && (u_120 != v_120)))
              _fail(v_120);
            else
              u_120 = v_120;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_120), not_null(s_120));
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
  ATerm d_121 = NULL,e_121 = NULL;
  d_121 = t;
  c_121 :
  if(match_cons(d_121, sym_DynamicRules_1))
    {
      e_121 = ATgetArgument(d_121, 0);
      {
        ATerm h_121 = NULL,j_121 = NULL;
        ATerm i_121 = NULL;
        t = SSLgetAnnotations(not_null(d_121));
        {
          i_121 = t;
          if(((h_121 != NULL) && (h_121 != i_121)))
            _fail(i_121);
          else
            h_121 = i_121;
        }
        {
          t = not_null(e_121);
          {
            ATerm l_121 = NULL;
            t = a_78(t);
            {
              j_121 = t;
              {
                ATerm m_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(j_121)), not_null(h_121));
                {
                  m_121 = t;
                  if(((l_121 != NULL) && (l_121 != m_121)))
                    _fail(m_121);
                  else
                    l_121 = m_121;
                }
                t = not_null(l_121);
              }
            }
          }
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
  ATerm x_121 = NULL,y_121 = NULL,z_121 = NULL;
  x_121 = t;
  w_121 :
  if(match_cons(x_121, sym_Scope_2))
    {
      y_121 = ATgetArgument(x_121, 0);
      z_121 = ATgetArgument(x_121, 1);
      {
        ATerm d_122 = NULL,f_122 = NULL;
        ATerm e_122 = NULL;
        t = SSLgetAnnotations(not_null(x_121));
        {
          e_122 = t;
          if(((d_122 != NULL) && (d_122 != e_122)))
            _fail(e_122);
          else
            d_122 = e_122;
        }
        {
          t = not_null(y_121);
          {
            ATerm h_122 = NULL;
            t = u_74(t);
            {
              f_122 = t;
              {
                t = not_null(z_121);
                {
                  ATerm j_122 = NULL;
                  t = v_74(t);
                  {
                    h_122 = t;
                    {
                      ATerm k_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(f_122), not_null(h_122)), not_null(d_122));
                      {
                        k_122 = t;
                        if(((j_122 != NULL) && (j_122 != k_122)))
                          _fail(k_122);
                        else
                          j_122 = k_122;
                      }
                      t = not_null(j_122);
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
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, z_113, x_113);
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      t = DynamicRules_1(t, x_113);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm s_122 = NULL,t_122 = NULL;
  s_122 = t;
  r_122 :
  if(match_cons(s_122, sym_DynamicRules_1))
    {
      t_122 = ATgetArgument(s_122, 0);
      {
        t = not_null(t_122);
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
  ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL;
  d_123 = t;
  y_122 :
  if(match_cons(d_123, sym_LRule_1))
    {
      e_123 = ATgetArgument(d_123, 0);
      z_122 :
      if(match_cons(e_123, sym_Rule_3))
        {
          a_123 = ATgetArgument(e_123, 0);
          b_123 = ATgetArgument(e_123, 1);
          c_123 = ATgetArgument(e_123, 2);
          {
            t = not_null(a_123);
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
      if(match_cons(d_123, sym_Scope_2))
        {
          e_123 = ATgetArgument(d_123, 0);
          f_123 = ATgetArgument(d_123, 1);
          t = not_null(e_123);
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
  ATerm p_123 = NULL,q_123 = NULL;
  p_123 = t;
  o_123 :
  if(match_cons(p_123, sym_Var_1))
    {
      q_123 = ATgetArgument(p_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(q_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
  v_123 = t;
  u_123 :
  if(match_cons(v_123, sym__2))
    {
      w_123 = ATgetArgument(v_123, 0);
      x_123 = ATgetArgument(v_123, 1);
      {
        t = not_null(w_123);
        {
          ATerm b_124 (ATerm t)
          {
            ATerm x_36 = t;
            int y_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_123);
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
                        t = not_null(x_123);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_98, y_6);
                      t = b_124(t);
                      LocalPopChoice(a_37);
                    }
                  else
                    {
                      t = z_36;
                      t = Cons_2(t, _id, b_124);
                    }
                }
              }
            return(t);
          }
          t = b_124(t);
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
  ATerm g_124 = NULL;
  ATerm i_124 = NULL;
  g_124 = t;
  {
    ATerm j_124 = NULL;
    ATerm l_124 = NULL,m_124 = NULL,n_124 = NULL;
    t = not_null(g_124);
    {
      j_124 = t;
      {
        t = SSL_explode_term(not_null(j_124));
        {
          l_124 = t;
          f_124 :
          if(match_cons(l_124, sym__2))
            {
              m_124 = ATgetArgument(l_124, 0);
              n_124 = ATgetArgument(l_124, 1);
              if(((i_124 != NULL) && (i_124 != n_124)))
                _fail(n_124);
              else
                i_124 = n_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_124);
      t = foldr_3(t, k_98, l_98, m_98);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL;
  t_124 = t;
  s_124 :
  if(match_cons(t_124, sym__2))
    {
      u_124 = ATgetArgument(t_124, 0);
      v_124 = ATgetArgument(t_124, 1);
      if(((u_124 != NULL) && (u_124 != v_124)))
        _fail(v_124);
      else
        u_124 = v_124;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_98 (ATerm), ATerm y_98 (ATerm))
{
  ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL;
  b_125 = t;
  a_125 :
  if(((ATgetType(b_125) == AT_LIST) && !(ATisEmpty(b_125))))
    {
      c_125 = ATgetFirst((ATermList) b_125);
      d_125 = (ATerm) ATgetNext((ATermList) b_125);
      {
        t = y_98(t);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm g_125 = NULL;
            g_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_125), not_null(g_125));
              t = x_98(t);
            }
            return(t);
          }
          t = fetch_1(t, z_6);
        }
        t = not_null(d_125);
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
  ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
  m_125 = t;
  l_125 :
  if(match_cons(m_125, sym__2))
    {
      n_125 = ATgetArgument(m_125, 0);
      o_125 = ATgetArgument(m_125, 1);
      {
        t = not_null(n_125);
        {
          ATerm s_125 (ATerm t)
          {
            ATerm c_37 = t;
            int d_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(d_37);
              }
            else
              {
                t = c_37;
                {
                  ATerm g_37 = t;
                  int h_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = not_null(o_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_98, a_7);
                      t = s_125(t);
                      LocalPopChoice(h_37);
                    }
                  else
                    {
                      t = g_37;
                      t = Cons_2(t, _id, s_125);
                    }
                }
              }
            return(t);
          }
          t = s_125(t);
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
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL;
  w_125 = t;
  u_125 :
  if(match_cons(w_125, sym__2))
    {
      x_125 = ATgetArgument(w_125, 0);
      y_125 = ATgetArgument(w_125, 1);
      v_125 :
      if(((ATgetType(y_125) == AT_LIST) && !(ATisEmpty(y_125))))
        {
          z_125 = ATgetFirst((ATermList) y_125);
          a_126 = (ATerm) ATgetNext((ATermList) y_125);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_125)), not_null(z_125)), not_null(a_126));
        }
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
  ATerm h_126 = NULL,i_126 = NULL,j_126 = NULL;
  h_126 = t;
  g_126 :
  if(match_cons(h_126, sym__2))
    {
      i_126 = ATgetArgument(h_126, 0);
      j_126 = ATgetArgument(h_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_126)), not_null(i_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL;
  r_126 = t;
  o_126 :
  if(match_cons(r_126, sym__2))
    {
      s_126 = ATgetArgument(r_126, 0);
      v_126 = ATgetArgument(r_126, 1);
      p_126 :
      if(((ATgetType(s_126) == AT_LIST) && !(ATisEmpty(s_126))))
        {
          t_126 = ATgetFirst((ATermList) s_126);
          u_126 = (ATerm) ATgetNext((ATermList) s_126);
          q_126 :
          if(((ATgetType(v_126) == AT_LIST) && !(ATisEmpty(v_126))))
            {
              w_126 = ATgetFirst((ATermList) v_126);
              x_126 = (ATerm) ATgetNext((ATermList) v_126);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_126), not_null(w_126)), (ATerm) ATmakeAppl(sym__2, not_null(u_126), not_null(x_126)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm h_127 = NULL,i_127 = NULL,j_127 = NULL;
  h_127 = t;
  e_127 :
  if(match_cons(h_127, sym__2))
    {
      i_127 = ATgetArgument(h_127, 0);
      j_127 = ATgetArgument(h_127, 1);
      f_127 :
      if(((ATgetType(i_127) == AT_LIST) && ATisEmpty(i_127)))
        {
          g_127 :
          if(((ATgetType(j_127) == AT_LIST) && ATisEmpty(j_127)))
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
  ATerm l_127 (ATerm t)
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_94(t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        {
          t = y_94(t);
          {
            t = _2(t, a_95, l_127);
            t = z_94(t);
          }
        }
      }
    return(t);
  }
  t = l_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_95 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_95);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL;
  w_127 = t;
  u_127 :
  if(((ATgetType(w_127) == AT_LIST) && !(ATisEmpty(w_127))))
    {
      x_127 = ATgetFirst((ATermList) w_127);
      a_128 = (ATerm) ATgetNext((ATermList) w_127);
      v_127 :
      if(match_cons(x_127, sym__2))
        {
          y_127 = ATgetArgument(x_127, 0);
          z_127 = ATgetArgument(x_127, 1);
          {
            ATerm e_128 = NULL,f_128 = NULL,l_128 = NULL,r_128 = NULL;
            ATerm k_37;
            k_37 = t;
            {
              ATerm g_128 = NULL;
              ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
              t = not_null(z_127);
              {
                g_128 = t;
                {
                  t = SSL_explode_term(not_null(g_128));
                  {
                    i_128 = t;
                    p_127 :
                    if(match_cons(i_128, sym__2))
                      {
                        j_128 = ATgetArgument(i_128, 0);
                        k_128 = ATgetArgument(i_128, 1);
                        {
                          if(((e_128 != NULL) && (e_128 != j_128)))
                            _fail(j_128);
                          else
                            e_128 = j_128;
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
            t = k_37;
            {
              ATerm m_37;
              m_37 = t;
              {
                ATerm m_128 = NULL;
                ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
                t = not_null(y_127);
                {
                  m_128 = t;
                  {
                    t = SSL_explode_term(not_null(m_128));
                    {
                      o_128 = t;
                      s_127 :
                      if(match_cons(o_128, sym__2))
                        {
                          p_128 = ATgetArgument(o_128, 0);
                          q_128 = ATgetArgument(o_128, 1);
                          {
                            if(((e_128 != NULL) && (e_128 != p_128)))
                              _fail(p_128);
                            else
                              e_128 = p_128;
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
              t = m_37;
              {
                ATerm s_128 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_128), not_null(f_128));
                {
                  t = zip_1(t, _id);
                  {
                    s_128 = t;
                    if(((r_128 != NULL) && (r_128 != s_128)))
                      _fail(s_128);
                    else
                      r_128 = s_128;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_128), not_null(a_128));
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
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL;
  c_129 = t;
  a_129 :
  if(((ATgetType(c_129) == AT_LIST) && !(ATisEmpty(c_129))))
    {
      d_129 = ATgetFirst((ATermList) c_129);
      g_129 = (ATerm) ATgetNext((ATermList) c_129);
      b_129 :
      if(match_cons(d_129, sym__2))
        {
          e_129 = ATgetArgument(d_129, 0);
          f_129 = ATgetArgument(d_129, 1);
          {
            ATerm i_129 = NULL;
            if(((e_129 != NULL) && (e_129 != f_129)))
              _fail(f_129);
            else
              e_129 = f_129;
            {
              if(((i_129 != NULL) && (i_129 != g_129)))
                _fail(g_129);
              else
                i_129 = g_129;
              t = not_null(i_129);
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
  ATerm k_129 (ATerm t)
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        {
          t = k_86(t);
          t = k_129(t);
        }
      }
    return(t);
  }
  t = k_129(t);
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
  ATerm p_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm m_129 = NULL;
        m_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_129));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              ATerm u_37 = t;
              int v_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(v_37);
                }
              else
                {
                  t = u_37;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, e_7);
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, b_7, c_7, d_7);
      LocalPopChoice(r_37);
    }
  else
    {
      t = p_37;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_129 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
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
              ATerm q_129 = NULL;
              ATerm c_38;
              c_38 = t;
              {
                ATerm r_129 = NULL;
                t = n_112(t);
                {
                  r_129 = t;
                  if(((q_129 != NULL) && (q_129 != r_129)))
                    _fail(r_129);
                  else
                    q_129 = r_129;
                }
              }
              t = c_38;
              {
                ATerm f_7 (ATerm t)
                {
                  ATerm h_7 (ATerm t)
                  {
                    t = not_null(q_129);
                    return(t);
                  }
                  t = split_2(t, s_129, h_7);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_112(t, f_7, s_129, g_7);
                {
                  ATerm i_7 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, i_7, union_0, _id);
                }
              }
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
                t = crush_3(t, j_7, union_0, s_129);
              }
            }
        }
      }
    return(t);
  }
  t = s_129(t);
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
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL;
  y_129 = t;
  w_129 :
  if(match_cons(y_129, sym_LRule_1))
    {
      z_129 = ATgetArgument(y_129, 0);
      x_129 :
      if(match_cons(z_129, sym_Rule_3))
        {
          a_130 = ATgetArgument(z_129, 0);
          b_130 = ATgetArgument(z_129, 1);
          c_130 = ATgetArgument(z_129, 2);
          {
            ATerm g_130 = NULL;
            ATerm h_130 = NULL;
            t = not_null(a_130);
            {
              t = tvars_0(t);
              {
                h_130 = t;
                if(((g_130 != NULL) && (g_130 != h_130)))
                  _fail(h_130);
                else
                  g_130 = h_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_130), not_null(b_130), not_null(c_130))));
          }
        }
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
  ATerm l_7 (ATerm t)
  {
    t = bottomup_1(t, t_86);
    return(t);
  }
  t = _all(t, l_7);
  t = t_86(t);
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
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL;
  m_130 = t;
  l_130 :
  if(((ATgetType(m_130) == AT_LIST) && !(ATisEmpty(m_130))))
    {
      n_130 = ATgetFirst((ATermList) m_130);
      o_130 = (ATerm) ATgetNext((ATermList) m_130);
      t = not_null(n_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL,v_130 = NULL;
  t_130 = t;
  s_130 :
  if(match_cons(t_130, sym__2))
    {
      u_130 = ATgetArgument(t_130, 0);
      v_130 = ATgetArgument(t_130, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_130), not_null(v_130));
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
  ATerm b_131 = NULL;
  ATerm d_131 = NULL;
  b_131 = t;
  {
    ATerm e_131 = NULL;
    t = term_h_38;
    {
      t = p_103(t);
      {
        e_131 = t;
        if(((d_131 != NULL) && (d_131 != e_131)))
          _fail(e_131);
        else
          d_131 = e_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_131), not_null(b_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL;
  o_131 = t;
  n_131 :
  if(match_cons(o_131, sym_Var_1))
    {
      p_131 = ATgetArgument(o_131, 0);
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_131 = NULL,t_131 = NULL;
            t = not_null(o_131);
            {
              ATerm o_7 (ATerm t)
              {
                t = term_k_38;
                return(t);
              }
              t = rewrite_1(t, o_7);
              {
                s_131 = t;
                j_131 :
                if(match_cons(s_131, sym_Defined_1))
                  {
                    t_131 = ATgetArgument(s_131, 0);
                    k_131 :
                    if(!(match_string(t_131, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(p_131), (ATerm) ATempty);
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm w_131 = NULL,x_131 = NULL;
              t = not_null(o_131);
              {
                ATerm p_7 (ATerm t)
                {
                  t = term_k_38;
                  return(t);
                }
                t = rewrite_1(t, p_7);
                {
                  w_131 = t;
                  l_131 :
                  if(match_cons(w_131, sym_Defined_1))
                    {
                      x_131 = ATgetArgument(w_131, 0);
                      m_131 :
                      if(!(match_string(x_131, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(p_131), (ATerm) ATempty);
            }
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
  ATerm a_132 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = _all(t, a_132);
      }
    return(t);
  }
  t = a_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_103 (ATerm))
{
  ATerm h_132 = NULL,i_132 = NULL,k_132 = NULL;
  h_132 = t;
  g_132 :
  if(match_cons(h_132, sym__2))
    {
      i_132 = ATgetArgument(h_132, 0);
      k_132 = ATgetArgument(h_132, 1);
      {
        ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL;
        ATerm n_38;
        n_38 = t;
        {
          ATerm q_132 = NULL;
          ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL;
          t = n_103(t);
          {
            q_132 = t;
            {
              if(((n_132 != NULL) && (n_132 != q_132)))
                _fail(q_132);
              else
                n_132 = q_132;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_132), not_null(i_132), not_null(k_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_38 = t;
                    int p_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_132), term_q_38);
                        t = table_get_0(t);
                        LocalPopChoice(p_38);
                      }
                    else
                      {
                        t = o_38;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_132 = t;
                      f_132 :
                      if(((ATgetType(r_132) == AT_LIST) && !(ATisEmpty(r_132))))
                        {
                          s_132 = ATgetFirst((ATermList) r_132);
                          t_132 = (ATerm) ATgetNext((ATermList) r_132);
                          {
                            if(((o_132 != NULL) && (o_132 != s_132)))
                              _fail(s_132);
                            else
                              o_132 = s_132;
                            {
                              if(((p_132 != NULL) && (p_132 != t_132)))
                                _fail(t_132);
                              else
                                p_132 = t_132;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_132), term_q_38, (ATerm) ATinsert(CheckATermList(not_null(p_132)), (ATerm) ATinsert(CheckATermList(not_null(o_132)), not_null(i_132))));
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
  ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL;
  d_133 = t;
  z_132 :
  if(match_cons(d_133, sym_Overlay_3))
    {
      e_133 = ATgetArgument(d_133, 0);
      f_133 = ATgetArgument(d_133, 1);
      c_133 = ATgetArgument(d_133, 2);
      a_133 :
      if(((ATgetType(f_133) == AT_LIST) && ATisEmpty(f_133)))
        {
          {
            ATerm y_38;
            y_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_133)), term_a_39);
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
      if(match_cons(d_133, sym_OpDecl_2))
        {
          e_133 = ATgetArgument(d_133, 0);
          f_133 = ATgetArgument(d_133, 1);
          b_133 :
          if(match_cons(f_133, sym_ConstType_1))
            {
              g_133 = ATgetArgument(f_133, 0);
              {
                ATerm b_39;
                b_39 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_133)), term_d_39);
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
ATerm Overlays_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm v_133 = NULL,w_133 = NULL;
  v_133 = t;
  u_133 :
  if(match_cons(v_133, sym_Overlays_1))
    {
      w_133 = ATgetArgument(v_133, 0);
      {
        ATerm z_133 = NULL,b_134 = NULL;
        ATerm a_134 = NULL;
        t = SSLgetAnnotations(not_null(v_133));
        {
          a_134 = t;
          if(((z_133 != NULL) && (z_133 != a_134)))
            _fail(a_134);
          else
            z_133 = a_134;
        }
        {
          t = not_null(w_133);
          {
            ATerm d_134 = NULL;
            t = c_77(t);
            {
              b_134 = t;
              {
                ATerm e_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(b_134)), not_null(z_133));
                {
                  e_134 = t;
                  if(((d_134 != NULL) && (d_134 != e_134)))
                    _fail(e_134);
                  else
                    d_134 = e_134;
                }
                t = not_null(d_134);
              }
            }
          }
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
  ATerm o_134 = NULL,p_134 = NULL;
  o_134 = t;
  n_134 :
  if(match_cons(o_134, sym_Constructors_1))
    {
      p_134 = ATgetArgument(o_134, 0);
      {
        ATerm u_134 = NULL,w_134 = NULL;
        ATerm v_134 = NULL;
        t = SSLgetAnnotations(not_null(o_134));
        {
          v_134 = t;
          if(((u_134 != NULL) && (u_134 != v_134)))
            _fail(v_134);
          else
            u_134 = v_134;
        }
        {
          t = not_null(p_134);
          {
            ATerm y_134 = NULL;
            t = x_76(t);
            {
              w_134 = t;
              {
                ATerm z_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(w_134)), not_null(u_134));
                {
                  z_134 = t;
                  if(((y_134 != NULL) && (y_134 != z_134)))
                    _fail(z_134);
                  else
                    y_134 = z_134;
                }
                t = not_null(y_134);
              }
            }
          }
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
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  g_135 = t;
  f_135 :
  if(((ATgetType(g_135) == AT_LIST) && !(ATisEmpty(g_135))))
    {
      h_135 = ATgetFirst((ATermList) g_135);
      i_135 = (ATerm) ATgetNext((ATermList) g_135);
      t = not_null(i_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_135 = NULL,q_135 = NULL,r_135 = NULL;
  o_135 = t;
  n_135 :
  if(match_cons(o_135, sym__2))
    {
      q_135 = ATgetArgument(o_135, 0);
      r_135 = ATgetArgument(o_135, 1);
      {
        ATerm e_39;
        e_39 = t;
        {
          ATerm u_135 = NULL;
          ATerm v_135 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_135), not_null(r_135));
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = (ATerm) ATempty;
              }
            {
              v_135 = t;
              if(((u_135 != NULL) && (u_135 != v_135)))
                _fail(v_135);
              else
                u_135 = v_135;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_135), not_null(r_135), not_null(u_135));
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
ATerm end_scope_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL;
  ATerm h_39;
  h_39 = t;
  {
    ATerm h_136 = NULL;
    ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL;
    t = k_103(t);
    {
      h_136 = t;
      {
        if(((g_136 != NULL) && (g_136 != h_136)))
          _fail(h_136);
        else
          g_136 = h_136;
        {
          ATerm i_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_136), term_q_38);
              t = table_get_0(t);
              LocalPopChoice(l_39);
            }
          else
            {
              t = i_39;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_136 = t;
            b_136 :
            if(((ATgetType(i_136) == AT_LIST) && !(ATisEmpty(i_136))))
              {
                j_136 = ATgetFirst((ATermList) i_136);
                k_136 = (ATerm) ATgetNext((ATermList) i_136);
                {
                  if(((f_136 != NULL) && (f_136 != j_136)))
                    _fail(j_136);
                  else
                    f_136 = j_136;
                  {
                    if(((e_136 != NULL) && (e_136 != k_136)))
                      _fail(k_136);
                    else
                      e_136 = k_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_136), term_q_38, not_null(e_136));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_136);
                          {
                            ATerm s_7 (ATerm t)
                            {
                              ATerm l_136 = NULL;
                              l_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_136), not_null(l_136));
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
ATerm restore_always_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_85(t);
      t = o_85(t);
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        t = o_85(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm s_136 = NULL;
  ATerm o_39;
  o_39 = t;
  {
    ATerm t_136 = NULL;
    ATerm u_136 = NULL;
    t = j_103(t);
    {
      t_136 = t;
      {
        if(((s_136 != NULL) && (s_136 != t_136)))
          _fail(t_136);
        else
          s_136 = t_136;
        {
          ATerm v_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_136), term_q_38);
          {
            ATerm t_39 = t;
            int b_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_40);
              }
            else
              {
                t = t_39;
                t = (ATerm) ATempty;
              }
            {
              v_136 = t;
              if(((u_136 != NULL) && (u_136 != v_136)))
                _fail(v_136);
              else
                u_136 = v_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_136), term_q_38, (ATerm) ATinsert(CheckATermList(not_null(u_136)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_39;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_103 (ATerm), ATerm m_103 (ATerm))
{
  t = begin_scope_1(t, l_103);
  {
    ATerm t_7 (ATerm t)
    {
      t = end_scope_1(t, l_103);
      return(t);
    }
    t = restore_always_2(t, m_103, t_7);
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
  ATerm a_137 = NULL,b_137 = NULL;
  a_137 = t;
  z_136 :
  if(match_cons(a_137, sym_Rules_1))
    {
      b_137 = ATgetArgument(a_137, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
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
              t = filter_1(t, n_100);
              return(t);
            }
            t = Cons_2(t, n_100, d_8);
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm g_137 = NULL,h_137 = NULL,i_137 = NULL;
              g_137 = t;
              f_137 :
              if(((ATgetType(g_137) == AT_LIST) && !(ATisEmpty(g_137))))
                {
                  h_137 = ATgetFirst((ATermList) g_137);
                  i_137 = (ATerm) ATgetNext((ATermList) g_137);
                  {
                    t = not_null(i_137);
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
  ATerm q_137 = NULL,r_137 = NULL;
  q_137 = t;
  p_137 :
  if(match_cons(q_137, sym_Signature_1))
    {
      r_137 = ATgetArgument(q_137, 0);
      {
        ATerm t_137 = NULL;
        ATerm x_137 = NULL;
        t = not_null(r_137);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm u_137 = NULL,v_137 = NULL;
            u_137 = t;
            n_137 :
            if(match_cons(u_137, sym_Constructors_1))
              {
                v_137 = ATgetArgument(u_137, 0);
                t = not_null(v_137);
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
              x_137 = t;
              if(((t_137 != NULL) && (t_137 != x_137)))
                _fail(x_137);
              else
                t_137 = x_137;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_137));
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
  ATerm r_138 = NULL,s_138 = NULL,t_138 = NULL;
  r_138 = t;
  q_138 :
  if(match_cons(r_138, sym__2))
    {
      s_138 = ATgetArgument(r_138, 0);
      t_138 = ATgetArgument(r_138, 1);
      {
        ATerm w_138 = NULL,x_138 = NULL;
        ATerm y_138 = NULL;
        ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL;
        t = not_null(s_138);
        {
          y_138 = t;
          {
            t = SSL_explode_term(not_null(y_138));
            {
              a_139 = t;
              e_138 :
              if(match_cons(a_139, sym__2))
                {
                  b_139 = ATgetArgument(a_139, 0);
                  c_139 = ATgetArgument(a_139, 1);
                  f_138 :
                  if(((ATgetType(c_139) == AT_LIST) && !(ATisEmpty(c_139))))
                    {
                      d_139 = ATgetFirst((ATermList) c_139);
                      e_139 = (ATerm) ATgetNext((ATermList) c_139);
                      g_138 :
                      if(((ATgetType(e_139) == AT_LIST) && ATisEmpty(e_139)))
                        {
                          {
                            if(((w_138 != NULL) && (w_138 != b_139)))
                              _fail(b_139);
                            else
                              w_138 = b_139;
                            if(((x_138 != NULL) && (x_138 != d_139)))
                              _fail(d_139);
                            else
                              x_138 = d_139;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
          t = not_null(t_138);
          {
            ATerm f_8 (ATerm t)
            {
              ATerm f_139 = NULL;
              ATerm h_139 = NULL,p_139 = NULL,r_139 = NULL,t_139 = NULL;
              f_139 = t;
              {
                ATerm f_41;
                f_41 = t;
                {
                  ATerm i_139 = NULL;
                  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL;
                  t = not_null(f_139);
                  {
                    i_139 = t;
                    {
                      t = SSL_explode_term(not_null(i_139));
                      {
                        k_139 = t;
                        k_138 :
                        if(match_cons(k_139, sym__2))
                          {
                            l_139 = ATgetArgument(k_139, 0);
                            m_139 = ATgetArgument(k_139, 1);
                            l_138 :
                            if(((ATgetType(m_139) == AT_LIST) && !(ATisEmpty(m_139))))
                              {
                                n_139 = ATgetFirst((ATermList) m_139);
                                o_139 = (ATerm) ATgetNext((ATermList) m_139);
                                m_138 :
                                if(((ATgetType(o_139) == AT_LIST) && ATisEmpty(o_139)))
                                  {
                                    {
                                      if(((w_138 != NULL) && (w_138 != l_139)))
                                        _fail(l_139);
                                      else
                                        w_138 = l_139;
                                      if(((h_139 != NULL) && (h_139 != n_139)))
                                        _fail(n_139);
                                      else
                                        h_139 = n_139;
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
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
                    ATerm q_139 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_139), not_null(x_138));
                    {
                      t = conc_0(t);
                      {
                        q_139 = t;
                        if(((p_139 != NULL) && (p_139 != q_139)))
                          _fail(q_139);
                        else
                          p_139 = q_139;
                      }
                    }
                  }
                  t = g_41;
                  {
                    ATerm h_41;
                    h_41 = t;
                    {
                      ATerm s_139 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(p_139));
                      {
                        s_139 = t;
                        if(((r_139 != NULL) && (r_139 != s_139)))
                          _fail(s_139);
                        else
                          r_139 = s_139;
                      }
                    }
                    t = h_41;
                    {
                      t = SSL_mkterm(not_null(w_138), not_null(r_139));
                      {
                        t_139 = t;
                        t = not_null(t_139);
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
ATerm foldr_3 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_99(t);
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      {
        ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL;
        j_140 = t;
        i_140 :
        if(((ATgetType(j_140) == AT_LIST) && !(ATisEmpty(j_140))))
          {
            k_140 = ATgetFirst((ATermList) j_140);
            l_140 = (ATerm) ATgetNext((ATermList) j_140);
            {
              ATerm o_140 = NULL,q_140 = NULL;
              ATerm l_41;
              l_41 = t;
              {
                ATerm p_140 = NULL;
                t = not_null(k_140);
                {
                  t = o_99(t);
                  {
                    p_140 = t;
                    if(((o_140 != NULL) && (o_140 != p_140)))
                      _fail(p_140);
                    else
                      o_140 = p_140;
                  }
                }
              }
              t = l_41;
              {
                ATerm r_140 = NULL;
                t = not_null(l_140);
                {
                  t = foldr_3(t, m_99, n_99, o_99);
                  {
                    r_140 = t;
                    if(((q_140 != NULL) && (q_140 != r_140)))
                      _fail(r_140);
                    else
                      q_140 = r_140;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_140), not_null(q_140));
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
                  ATerm y_140 = NULL,z_140 = NULL;
                  y_140 = t;
                  x_140 :
                  if(match_cons(y_140, sym_Constructors_1))
                    {
                      z_140 = ATgetArgument(y_140, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(z_140))));
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
ATerm _2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL;
  i_141 = t;
  h_141 :
  if(match_cons(i_141, sym__2))
    {
      j_141 = ATgetArgument(i_141, 0);
      k_141 = ATgetArgument(i_141, 1);
      {
        ATerm o_141 = NULL,q_141 = NULL;
        ATerm p_141 = NULL;
        t = SSLgetAnnotations(not_null(i_141));
        {
          p_141 = t;
          if(((o_141 != NULL) && (o_141 != p_141)))
            _fail(p_141);
          else
            o_141 = p_141;
        }
        {
          t = not_null(j_141);
          {
            ATerm s_141 = NULL;
            t = b_73(t);
            {
              q_141 = t;
              {
                t = not_null(k_141);
                {
                  ATerm u_141 = NULL;
                  t = c_73(t);
                  {
                    s_141 = t;
                    {
                      ATerm v_141 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_141), not_null(s_141)), not_null(o_141));
                      {
                        v_141 = t;
                        if(((u_141 != NULL) && (u_141 != v_141)))
                          _fail(v_141);
                        else
                          u_141 = v_141;
                      }
                      t = not_null(u_141);
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
  ATerm d_142 = NULL;
  ATerm p_42;
  p_42 = t;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm e_142 = NULL,f_142 = NULL;
      e_142 = t;
      c_142 :
      if(match_cons(e_142, sym_Program_1))
        {
          f_142 = ATgetArgument(e_142, 0);
          if(((d_142 != NULL) && (d_142 != f_142)))
            _fail(f_142);
          else
            d_142 = f_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_42), not_null(d_142)), term_v_42));
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
  ATerm j_142 = NULL,k_142 = NULL,l_142 = NULL;
  j_142 = t;
  i_142 :
  if(match_cons(j_142, sym__2))
    {
      k_142 = ATgetArgument(j_142, 0);
      l_142 = ATgetArgument(j_142, 1);
      {
        ATerm x_42;
        x_42 = t;
        t = SSL_printnl(not_null(k_142), not_null(l_142));
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
  ATerm q_142 = NULL;
  q_142 = t;
  t = SSL_implode_string(not_null(q_142));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      {
        ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL;
        v_142 = t;
        u_142 :
        if(((ATgetType(v_142) == AT_LIST) && !(ATisEmpty(v_142))))
          {
            w_142 = ATgetFirst((ATermList) v_142);
            x_142 = (ATerm) ATgetNext((ATermList) v_142);
            {
              t = not_null(w_142);
              {
                ATerm a_9 (ATerm t)
                {
                  t = not_null(x_142);
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
  ATerm h_143 = NULL;
  ATerm j_143 = NULL;
  h_143 = t;
  {
    ATerm k_143 = NULL;
    ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL;
    t = not_null(h_143);
    {
      k_143 = t;
      {
        t = SSL_explode_term(not_null(k_143));
        {
          m_143 = t;
          f_143 :
          if(match_cons(m_143, sym__2))
            {
              n_143 = ATgetArgument(m_143, 0);
              o_143 = ATgetArgument(m_143, 1);
              g_143 :
              if(match_string(n_143, ""))
                {
                  if(((j_143 != NULL) && (j_143 != o_143)))
                    _fail(o_143);
                  else
                    j_143 = o_143;
                }
              else
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
      t = not_null(j_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm s_143 (ATerm t)
  {
    ATerm c_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_143);
        LocalPopChoice(e_43);
      }
    else
      {
        t = c_43;
        {
          t = Nil_0(t);
          t = l_93(t);
        }
      }
    return(t);
  }
  t = s_143(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_143 = NULL,w_143 = NULL,x_143 = NULL;
  v_143 = t;
  u_143 :
  if(match_cons(v_143, sym__2))
    {
      w_143 = ATgetArgument(v_143, 0);
      x_143 = ATgetArgument(v_143, 1);
      {
        t = not_null(w_143);
        {
          ATerm b_9 (ATerm t)
          {
            t = not_null(x_143);
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
  ATerm c_144 = NULL;
  c_144 = t;
  t = SSL_explode_string(not_null(c_144));
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
  ATerm g_144 = NULL;
  g_144 = t;
  t = SSL_is_string(not_null(g_144));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            {
              ATerm p_144 = NULL,q_144 = NULL,r_144 = NULL;
              p_144 = t;
              o_144 :
              if(match_cons(p_144, sym_Path_1))
                {
                  q_144 = ATgetArgument(p_144, 0);
                  t = not_null(q_144);
                }
              else
                {
                  if(match_cons(p_144, sym_Var_1))
                    {
                      q_144 = ATgetArgument(p_144, 0);
                      {
                        t = not_null(q_144);
                        {
                          ATerm m_43 = t;
                          int u_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
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
                      if(match_cons(p_144, sym_Prefix_2))
                        {
                          q_144 = ATgetArgument(p_144, 0);
                          r_144 = ATgetArgument(p_144, 1);
                          {
                            ATerm w_144 = NULL,y_144 = NULL;
                            ATerm w_43;
                            w_43 = t;
                            {
                              ATerm x_144 = NULL;
                              t = not_null(q_144);
                              {
                                t = eval_config_0(t);
                                {
                                  x_144 = t;
                                  if(((w_144 != NULL) && (w_144 != x_144)))
                                    _fail(x_144);
                                  else
                                    w_144 = x_144;
                                }
                              }
                            }
                            t = w_43;
                            {
                              ATerm z_144 = NULL;
                              t = not_null(r_144);
                              {
                                t = eval_config_0(t);
                                {
                                  z_144 = t;
                                  if(((y_144 != NULL) && (y_144 != z_144)))
                                    _fail(z_144);
                                  else
                                    y_144 = z_144;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_144), not_null(y_144));
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
  ATerm h_145 = NULL;
  h_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_44, not_null(h_145));
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
              ATerm j_145 = NULL;
              ATerm k_145 = NULL;
              k_145 = t;
              if(((j_145 != NULL) && (j_145 != k_145)))
                _fail(k_145);
              else
                j_145 = k_145;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_44, not_null(h_145), not_null(j_145));
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
ATerm if_verbose2_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm g_9 (ATerm t)
  {
    ATerm k_44;
    k_44 = t;
    {
      ATerm o_145 = NULL;
      ATerm p_145 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          p_145 = t;
          if(((o_145 != NULL) && (o_145 != p_145)))
            _fail(p_145);
          else
            o_145 = p_145;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_145), term_l_44);
        t = geq_0(t);
      }
    }
    t = k_44;
    t = r_106(t);
    return(t);
  }
  t = try_1(t, g_9);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL;
  t_145 = t;
  s_145 :
  if(match_cons(t_145, sym__2))
    {
      u_145 = ATgetArgument(t_145, 0);
      v_145 = ATgetArgument(t_145, 1);
      t = SSL_WriteToTextFile(not_null(u_145), not_null(v_145));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_146 = NULL,c_146 = NULL,d_146 = NULL;
  b_146 = t;
  a_146 :
  if(match_cons(b_146, sym__2))
    {
      c_146 = ATgetArgument(b_146, 0);
      d_146 = ATgetArgument(b_146, 1);
      t = SSL_WriteToBinaryFile(not_null(c_146), not_null(d_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_146 = NULL;
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
            ATerm m_146 = NULL,n_146 = NULL;
            m_146 = t;
            i_146 :
            if(match_cons(m_146, sym_Output_1))
              {
                n_146 = ATgetArgument(m_146, 0);
                if(((l_146 != NULL) && (l_146 != n_146)))
                  _fail(n_146);
                else
                  l_146 = n_146;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_9);
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          {
            ATerm o_146 = NULL;
            t = term_p_44;
            {
              o_146 = t;
              if(((l_146 != NULL) && (l_146 != o_146)))
                _fail(o_146);
              else
                l_146 = o_146;
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
        t = not_null(l_146);
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
              ATerm p_146 = NULL;
              p_146 = t;
              k_146 :
              if(!(match_cons(p_146, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_9);
            return(t);
          }
          t = _2(t, q_9, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm v_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL;
  ATerm s_44;
  s_44 = t;
  t = dtime_0(t);
  t = s_44;
  {
    t = y_104(t);
    {
      ATerm t_44;
      t_44 = t;
      {
        ATerm w_146 = NULL;
        t = dtime_0(t);
        {
          w_146 = t;
          if(((v_146 != NULL) && (v_146 != w_146)))
            _fail(w_146);
          else
            v_146 = w_146;
        }
      }
      t = t_44;
      {
        x_146 = t;
        u_146 :
        if(match_cons(x_146, sym__2))
          {
            y_146 = ATgetArgument(x_146, 0);
            z_146 = ATgetArgument(x_146, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_146)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_146))), not_null(z_146));
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
  ATerm u_44;
  u_44 = t;
  {
    ATerm g_147 = NULL,i_147 = NULL;
    ATerm y_44;
    y_44 = t;
    {
      ATerm h_147 = NULL;
      t = u_103(t);
      {
        h_147 = t;
        if(((g_147 != NULL) && (g_147 != h_147)))
          _fail(h_147);
        else
          g_147 = h_147;
      }
    }
    t = y_44;
    {
      ATerm j_147 = NULL;
      j_147 = t;
      if(((i_147 != NULL) && (i_147 != j_147)))
        _fail(j_147);
      else
        i_147 = j_147;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_147)), not_null(g_147)));
        t = printnl_0(t);
      }
    }
  }
  t = u_44;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_147 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_147 = NULL;
      o_147 = t;
      {
        if(((n_147 != NULL) && (n_147 != o_147)))
          _fail(o_147);
        else
          n_147 = o_147;
        t = SSL_ReadFromFile(not_null(n_147));
      }
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
ATerm split_2 (ATerm t, ATerm z_100 (ATerm), ATerm a_101 (ATerm))
{
  ATerm s_147 = NULL,u_147 = NULL;
  ATerm c_45;
  c_45 = t;
  {
    ATerm t_147 = NULL;
    t = z_100(t);
    {
      t_147 = t;
      if(((s_147 != NULL) && (s_147 != t_147)))
        _fail(t_147);
      else
        s_147 = t_147;
    }
  }
  t = c_45;
  {
    ATerm v_147 = NULL;
    t = a_101(t);
    {
      v_147 = t;
      if(((u_147 != NULL) && (u_147 != v_147)))
        _fail(v_147);
      else
        u_147 = v_147;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_147), not_null(u_147));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_148 = NULL;
  ATerm d_45;
  d_45 = t;
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 (ATerm t)
        {
          ATerm c_148 = NULL,d_148 = NULL;
          c_148 = t;
          z_147 :
          if(match_cons(c_148, sym_Input_1))
            {
              d_148 = ATgetArgument(c_148, 0);
              if(((b_148 != NULL) && (b_148 != d_148)))
                _fail(d_148);
              else
                b_148 = d_148;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_10);
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        {
          ATerm e_148 = NULL;
          t = term_u_45;
          {
            e_148 = t;
            if(((b_148 != NULL) && (b_148 != e_148)))
              _fail(e_148);
            else
              b_148 = e_148;
          }
        }
      }
  }
  t = d_45;
  {
    ATerm w_10 (ATerm t)
    {
      t = not_null(b_148);
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
    ATerm i_148 = NULL;
    i_148 = t;
    h_148 :
    if(!(match_string(i_148, "-v")))
      {
        if(!(match_string(i_148, "--version")))
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
    ATerm l_148 = NULL;
    l_148 = t;
    j_148 :
    if(!(match_string(l_148, "-k")))
      {
        if(!(match_string(l_148, "--keep")))
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
      ATerm m_148 = NULL;
      ATerm n_148 = NULL;
      t = string_to_int_0(t);
      {
        n_148 = t;
        if(((m_148 != NULL) && (m_148 != n_148)))
          _fail(n_148);
        else
          m_148 = n_148;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_46, not_null(m_148));
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
  ATerm q_148 = NULL;
  q_148 = t;
  t = SSL_string_to_int(not_null(q_148));
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
        ATerm y_148 = NULL;
        y_148 = t;
        t_148 :
        if(!(match_string(y_148, "-S")))
          {
            if(!(match_string(y_148, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_11 (ATerm t)
      {
        t = term_l_46;
        t = set_config_0(t);
        t = term_m_46;
        return(t);
      }
      ATerm f_11 (ATerm t)
      {
        t = term_p_46;
        return(t);
      }
      t = Option_3(t, d_11, e_11, f_11);
      LocalPopChoice(j_46);
    }
  else
    {
      t = i_46;
      {
        ATerm r_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_11 (ATerm t)
            {
              ATerm z_148 = NULL;
              z_148 = t;
              u_148 :
              if(!(match_string(z_148, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_11 (ATerm t)
            {
              ATerm c_149 = NULL;
              ATerm w_46;
              w_46 = t;
              {
                ATerm a_149 = NULL;
                ATerm b_149 = NULL;
                t = string_to_int_0(t);
                {
                  b_149 = t;
                  if(((a_149 != NULL) && (a_149 != b_149)))
                    _fail(b_149);
                  else
                    a_149 = b_149;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(a_149));
                  t = set_config_0(t);
                }
              }
              t = w_46;
              {
                ATerm d_149 = NULL;
                d_149 = t;
                if(((c_149 != NULL) && (c_149 != d_149)))
                  _fail(d_149);
                else
                  c_149 = d_149;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_149));
              }
              return(t);
            }
            ATerm i_11 (ATerm t)
            {
              t = term_x_46;
              return(t);
            }
            t = ArgOption_3(t, g_11, h_11, i_11);
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            {
              ATerm j_11 (ATerm t)
              {
                ATerm e_149 = NULL;
                e_149 = t;
                x_148 :
                if(!(match_string(e_149, "-s")))
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
    ATerm k_149 = NULL;
    k_149 = t;
    h_149 :
    if(!(match_string(k_149, "-o")))
      {
        if(!(match_string(k_149, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm n_149 = NULL;
    ATerm n_47;
    n_47 = t;
    {
      ATerm l_149 = NULL;
      ATerm m_149 = NULL;
      m_149 = t;
      if(((l_149 != NULL) && (l_149 != m_149)))
        _fail(m_149);
      else
        l_149 = m_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_47, not_null(l_149));
        t = set_config_0(t);
      }
    }
    t = n_47;
    {
      ATerm o_149 = NULL;
      o_149 = t;
      if(((n_149 != NULL) && (n_149 != o_149)))
        _fail(o_149);
      else
        n_149 = o_149;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_149));
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
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      {
        ATerm q_11 (ATerm t)
        {
          ATerm s_149 = NULL;
          s_149 = t;
          r_149 :
          if(!(match_string(s_149, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_11 (ATerm t)
        {
          t = term_u_47;
          t = set_config_0(t);
          t = term_v_47;
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_w_47;
          return(t);
        }
        t = Option_3(t, q_11, r_11, t_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL;
  y_149 = t;
  w_149 :
  if(match_string(y_149, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(y_149) == AT_LIST) && !(ATisEmpty(y_149))))
        {
          z_149 = ATgetFirst((ATermList) y_149);
          a_150 = (ATerm) ATgetNext((ATermList) y_149);
          x_149 :
          if(((ATgetType(a_150) == AT_LIST) && !(ATisEmpty(a_150))))
            {
              b_150 = ATgetFirst((ATermList) a_150);
              c_150 = (ATerm) ATgetNext((ATermList) a_150);
              {
                ATerm g_150 = NULL;
                ATerm x_47;
                x_47 = t;
                {
                  t = not_null(z_149);
                  t = m_0(t);
                }
                t = x_47;
                {
                  ATerm h_150 = NULL;
                  t = not_null(b_150);
                  {
                    t = n_0(t);
                    {
                      h_150 = t;
                      if(((g_150 != NULL) && (g_150 != h_150)))
                        _fail(h_150);
                      else
                        g_150 = h_150;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_150)), not_null(g_150));
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
    ATerm o_150 = NULL;
    o_150 = t;
    l_150 :
    if(!(match_string(o_150, "-i")))
      {
        if(!(match_string(o_150, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    ATerm r_150 = NULL;
    ATerm y_47;
    y_47 = t;
    {
      ATerm p_150 = NULL;
      ATerm q_150 = NULL;
      q_150 = t;
      if(((p_150 != NULL) && (p_150 != q_150)))
        _fail(q_150);
      else
        p_150 = q_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_47, not_null(p_150));
        t = set_config_0(t);
      }
    }
    t = y_47;
    {
      ATerm s_150 = NULL;
      s_150 = t;
      if(((r_150 != NULL) && (r_150 != s_150)))
        _fail(s_150);
      else
        r_150 = s_150;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_150));
    }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = term_a_48;
    return(t);
  }
  t = ArgOption_3(t, u_11, v_11, x_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_48 = t;
  int c_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(c_48);
    }
  else
    {
      t = b_48;
      {
        ATerm d_48 = t;
        int e_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(e_48);
          }
        else
          {
            t = d_48;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, term_f_48));
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
  ATerm w_150 = NULL;
  w_150 = t;
  t = SSL_TicksToSeconds(not_null(w_150));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_151 = NULL,c_151 = NULL,d_151 = NULL;
  b_151 = t;
  a_151 :
  if(match_cons(b_151, sym__2))
    {
      c_151 = ATgetArgument(b_151, 0);
      d_151 = ATgetArgument(b_151, 1);
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_151), not_null(d_151));
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            t = SSL_addr(not_null(c_151), not_null(d_151));
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
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_99(t);
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm k_151 = NULL,l_151 = NULL,m_151 = NULL;
        k_151 = t;
        j_151 :
        if(((ATgetType(k_151) == AT_LIST) && !(ATisEmpty(k_151))))
          {
            l_151 = ATgetFirst((ATermList) k_151);
            m_151 = (ATerm) ATgetNext((ATermList) k_151);
            {
              ATerm p_151 = NULL;
              ATerm q_151 = NULL;
              t = not_null(m_151);
              {
                t = foldr_2(t, k_99, l_99);
                {
                  q_151 = t;
                  if(((p_151 != NULL) && (p_151 != q_151)))
                    _fail(q_151);
                  else
                    p_151 = q_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_151), not_null(p_151));
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
  ATerm x_151 = NULL;
  ATerm z_151 = NULL;
  x_151 = t;
  {
    ATerm a_152 = NULL;
    ATerm c_152 = NULL,d_152 = NULL,e_152 = NULL;
    t = not_null(x_151);
    {
      a_152 = t;
      {
        t = SSL_explode_term(not_null(a_152));
        {
          c_152 = t;
          w_151 :
          if(match_cons(c_152, sym__2))
            {
              d_152 = ATgetArgument(c_152, 0);
              e_152 = ATgetArgument(c_152, 1);
              if(((z_151 != NULL) && (z_151 != e_152)))
                _fail(e_152);
              else
                z_151 = e_152;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_151);
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
  ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL;
  k_152 = t;
  j_152 :
  if(match_cons(k_152, sym__2))
    {
      l_152 = ATgetArgument(k_152, 0);
      m_152 = ATgetArgument(k_152, 1);
      {
        ATerm v_48;
        v_48 = t;
        {
          ATerm w_48 = t;
          int x_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_152), not_null(m_152));
              LocalPopChoice(x_48);
            }
          else
            {
              t = w_48;
              t = SSL_gtr(not_null(l_152), not_null(m_152));
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
  ATerm s_152 = NULL;
  ATerm y_48 = t;
  int z_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_152 = NULL,u_152 = NULL,v_152 = NULL;
      t_152 = t;
      r_152 :
      if(match_cons(t_152, sym__2))
        {
          u_152 = ATgetArgument(t_152, 0);
          v_152 = ATgetArgument(t_152, 1);
          {
            if(((s_152 != NULL) && (s_152 != u_152)))
              _fail(u_152);
            else
              s_152 = u_152;
            if(((s_152 != NULL) && (s_152 != v_152)))
              _fail(v_152);
            else
              s_152 = v_152;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_48);
    }
  else
    {
      t = y_48;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm l_12 (ATerm t)
  {
    ATerm a_49;
    a_49 = t;
    {
      ATerm y_152 = NULL;
      ATerm z_152 = NULL;
      t = term_k_18;
      {
        t = get_config_0(t);
        {
          z_152 = t;
          if(((y_152 != NULL) && (y_152 != z_152)))
            _fail(z_152);
          else
            y_152 = z_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_152), term_i_24);
        t = geq_0(t);
      }
    }
    t = a_49;
    t = q_106(t);
    return(t);
  }
  t = try_1(t, l_12);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm d_153 = NULL,f_153 = NULL;
    ATerm c_49;
    c_49 = t;
    {
      ATerm e_153 = NULL;
      t = run_time_0(t);
      {
        e_153 = t;
        if(((d_153 != NULL) && (d_153 != e_153)))
          _fail(e_153);
        else
          d_153 = e_153;
      }
    }
    t = c_49;
    {
      ATerm g_153 = NULL;
      t = term_d_49;
      {
        t = get_config_0(t);
        {
          g_153 = t;
          if(((f_153 != NULL) && (f_153 != g_153)))
            _fail(g_153);
          else
            f_153 = g_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_49), not_null(d_153)), term_e_49), not_null(f_153)));
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
  ATerm n_153 = NULL;
  n_153 = t;
  m_153 :
  if(match_cons(n_153, sym_Version_0))
    {
      ATerm p_153 = NULL,r_153 = NULL;
      ATerm g_49;
      g_49 = t;
      {
        ATerm q_153 = NULL;
        t = SSLgetAnnotations(not_null(n_153));
        {
          q_153 = t;
          if(((p_153 != NULL) && (p_153 != q_153)))
            _fail(q_153);
          else
            p_153 = q_153;
        }
      }
      t = g_49;
      {
        ATerm s_153 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_153));
        {
          s_153 = t;
          if(((r_153 != NULL) && (r_153 != s_153)))
            _fail(s_153);
          else
            r_153 = s_153;
        }
        t = not_null(r_153);
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
  ATerm d_13 (ATerm t)
  {
    ATerm h_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_49);
      }
    else
      {
        t = h_49;
        {
          ATerm l_49 = t;
          int m_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
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
  t = w_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_153 = NULL;
  x_153 = t;
  t = SSL_table_create(not_null(x_153));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_154 = NULL;
  b_154 = t;
  {
    ATerm r_49;
    r_49 = t;
    {
      t = term_s_49;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_49, term_x_49, not_null(b_154));
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
  ATerm f_154 = NULL;
  f_154 = t;
  t = SSL_table_destroy(not_null(f_154));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_154 = NULL;
  j_154 = t;
  t = SSL_exit(not_null(j_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_154 = NULL,o_154 = NULL,p_154 = NULL;
  n_154 = t;
  m_154 :
  if(((ATgetType(n_154) == AT_LIST) && ATisEmpty(n_154)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_154) == AT_LIST) && !(ATisEmpty(n_154))))
        {
          o_154 = ATgetFirst((ATermList) n_154);
          p_154 = (ATerm) ATgetNext((ATermList) n_154);
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
    ATerm s_154 = NULL;
    ATerm v_154 = NULL;
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_50);
      }
    else
      {
        t = d_50;
        {
          ATerm t_154 = NULL;
          ATerm u_154 = NULL;
          u_154 = t;
          if(((t_154 != NULL) && (t_154 != u_154)))
            _fail(u_154);
          else
            t_154 = u_154;
          t = (ATerm) ATinsert(ATempty, not_null(t_154));
        }
      }
    {
      v_154 = t;
      if(((s_154 != NULL) && (s_154 != v_154)))
        _fail(v_154);
      else
        s_154 = v_154;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_44, not_null(s_154));
      t = printnl_0(t);
    }
  }
  t = y_49;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm y_154 (ATerm t)
  {
    ATerm f_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_50);
      }
    else
      {
        t = f_50;
        t = Cons_2(t, w_92, y_154);
      }
    return(t);
  }
  t = y_154(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL;
  h_155 = t;
  e_155 :
  if(((ATgetType(h_155) == AT_LIST) && !(ATisEmpty(h_155))))
    {
      f_155 = ATgetFirst((ATermList) h_155);
      g_155 = (ATerm) ATgetNext((ATermList) h_155);
      {
        ATerm k_155 = NULL;
        t = not_null(g_155);
        {
          ATerm j_50;
          j_50 = t;
          {
            ATerm l_155 = NULL,n_155 = NULL,p_155 = NULL;
            ATerm k_50;
            k_50 = t;
            {
              ATerm m_155 = NULL;
              t = k_0(t);
              {
                m_155 = t;
                if(((l_155 != NULL) && (l_155 != m_155)))
                  _fail(m_155);
                else
                  l_155 = m_155;
              }
            }
            t = k_50;
            {
              ATerm o_155 = NULL;
              t = not_null(f_155);
              {
                t = i_0(t);
                {
                  o_155 = t;
                  if(((n_155 != NULL) && (n_155 != o_155)))
                    _fail(o_155);
                  else
                    n_155 = o_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_155)), not_null(n_155));
                {
                  p_155 = t;
                  if(((k_155 != NULL) && (k_155 != p_155)))
                    _fail(p_155);
                  else
                    k_155 = p_155;
                }
              }
            }
          }
          t = j_50;
          {
            ATerm e_13 (ATerm t)
            {
              t = not_null(k_155);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_13);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_155) == AT_LIST) && ATisEmpty(h_155)))
        {
          {
            t = term_h_38;
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
  ATerm f_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm a_156 = NULL,b_156 = NULL;
  a_156 = t;
  z_155 :
  if(match_cons(a_156, sym_Program_1))
    {
      b_156 = ATgetArgument(a_156, 0);
      {
        ATerm e_156 = NULL,g_156 = NULL;
        ATerm f_156 = NULL;
        t = SSLgetAnnotations(not_null(a_156));
        {
          f_156 = t;
          if(((e_156 != NULL) && (e_156 != f_156)))
            _fail(f_156);
          else
            e_156 = f_156;
        }
        {
          t = not_null(b_156);
          {
            ATerm i_156 = NULL;
            t = q_84(t);
            {
              g_156 = t;
              {
                ATerm j_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_156)), not_null(e_156));
                {
                  j_156 = t;
                  if(((i_156 != NULL) && (i_156 != j_156)))
                    _fail(j_156);
                  else
                    i_156 = j_156;
                }
                t = not_null(i_156);
              }
            }
          }
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
  ATerm s_156 = NULL;
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_156 = NULL;
      t = term_d_49;
      {
        t = get_config_0(t);
        {
          t_156 = t;
          if(((s_156 != NULL) && (s_156 != t_156)))
            _fail(t_156);
          else
            s_156 = t_156;
        }
      }
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
            ATerm u_156 = NULL;
            u_156 = t;
            if(((s_156 != NULL) && (s_156 != u_156)))
              _fail(u_156);
            else
              s_156 = u_156;
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
        t = not_null(s_156);
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
                  ATerm v_156 = NULL;
                  ATerm w_156 = NULL;
                  w_156 = t;
                  if(((v_156 != NULL) && (v_156 != w_156)))
                    _fail(w_156);
                  else
                    v_156 = w_156;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_156)), term_r_50);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_13);
                {
                  ATerm l_13 (ATerm t)
                  {
                    ATerm x_156 = NULL;
                    ATerm y_156 = NULL;
                    ATerm m_13 (ATerm t)
                    {
                      t = not_null(s_156);
                      return(t);
                    }
                    t = long_description_1(t, m_13);
                    {
                      y_156 = t;
                      if(((x_156 != NULL) && (x_156 != y_156)))
                        _fail(y_156);
                      else
                        x_156 = y_156;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_156)), term_s_50);
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
    ATerm e_157 = NULL;
    ATerm f_157 = NULL;
    f_157 = t;
    if(((e_157 != NULL) && (e_157 != f_157)))
      _fail(f_157);
    else
      e_157 = f_157;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, not_null(e_157)));
      t = printnl_0(t);
    }
  }
  t = y_50;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm l_51;
  l_51 = t;
  {
    t = v_103(t);
    t = debug_0(t);
  }
  t = l_51;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm m_157 = NULL,n_157 = NULL;
  m_157 = t;
  l_157 :
  if(match_cons(m_157, sym_Undefined_1))
    {
      n_157 = ATgetArgument(m_157, 0);
      {
        ATerm q_157 = NULL,s_157 = NULL;
        ATerm r_157 = NULL;
        t = SSLgetAnnotations(not_null(m_157));
        {
          r_157 = t;
          if(((q_157 != NULL) && (q_157 != r_157)))
            _fail(r_157);
          else
            q_157 = r_157;
        }
        {
          t = not_null(n_157);
          {
            ATerm u_157 = NULL;
            t = r_84(t);
            {
              s_157 = t;
              {
                ATerm v_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_157)), not_null(q_157));
                {
                  v_157 = t;
                  if(((u_157 != NULL) && (u_157 != v_157)))
                    _fail(v_157);
                  else
                    u_157 = v_157;
                }
                t = not_null(u_157);
              }
            }
          }
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
  ATerm a_158 (ATerm t)
  {
    ATerm m_51 = t;
    int n_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_93, _id);
        LocalPopChoice(n_51);
      }
    else
      {
        t = m_51;
        t = Cons_2(t, _id, a_158);
      }
    return(t);
  }
  t = a_158(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_107 (ATerm))
{
  t = fetch_1(t, t_107);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_158 = NULL;
  f_158 = t;
  e_158 :
  if(match_cons(f_158, sym_Help_0))
    {
      ATerm h_158 = NULL,j_158 = NULL;
      ATerm o_51;
      o_51 = t;
      {
        ATerm i_158 = NULL;
        t = SSLgetAnnotations(not_null(f_158));
        {
          i_158 = t;
          if(((h_158 != NULL) && (h_158 != i_158)))
            _fail(i_158);
          else
            h_158 = i_158;
        }
      }
      t = o_51;
      {
        ATerm k_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_158));
        {
          k_158 = t;
          if(((j_158 != NULL) && (j_158 != k_158)))
            _fail(k_158);
          else
            j_158 = k_158;
        }
        t = not_null(j_158);
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
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_85(t);
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
  ATerm s_158 = NULL,t_158 = NULL,u_158 = NULL;
  s_158 = t;
  r_158 :
  if(match_cons(s_158, sym__2))
    {
      t_158 = ATgetArgument(s_158, 0);
      u_158 = ATgetArgument(s_158, 1);
      t = SSL_table_get(not_null(t_158), not_null(u_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_159 = NULL,c_159 = NULL,d_159 = NULL,e_159 = NULL;
  b_159 = t;
  a_159 :
  if(match_cons(b_159, sym__3))
    {
      c_159 = ATgetArgument(b_159, 0);
      d_159 = ATgetArgument(b_159, 1);
      e_159 = ATgetArgument(b_159, 2);
      {
        ATerm r_51;
        r_51 = t;
        {
          ATerm i_159 = NULL;
          ATerm j_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_159), not_null(d_159));
          {
            ATerm s_51 = t;
            int t_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_51);
              }
            else
              {
                t = s_51;
                t = (ATerm) ATempty;
              }
            {
              j_159 = t;
              if(((i_159 != NULL) && (i_159 != j_159)))
                _fail(j_159);
              else
                i_159 = j_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_159), not_null(d_159), (ATerm) ATinsert(CheckATermList(not_null(i_159)), not_null(e_159)));
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
ATerm register_usage_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm n_159 = NULL;
  ATerm o_159 = NULL;
  t = term_h_38;
  {
    t = y_108(t);
    {
      o_159 = t;
      if(((n_159 != NULL) && (n_159 != o_159)))
        _fail(o_159);
      else
        n_159 = o_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, not_null(n_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_159 = NULL,v_159 = NULL,w_159 = NULL;
  u_159 = t;
  t_159 :
  if(match_string(u_159, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_159) == AT_LIST) && !(ATisEmpty(u_159))))
        {
          v_159 = ATgetFirst((ATermList) u_159);
          w_159 = (ATerm) ATgetNext((ATermList) u_159);
          {
            ATerm z_159 = NULL;
            ATerm u_51;
            u_51 = t;
            {
              t = not_null(v_159);
              t = a_0(t);
            }
            t = u_51;
            {
              ATerm a_160 = NULL;
              t = term_h_38;
              {
                t = d_0(t);
                {
                  a_160 = t;
                  if(((z_159 != NULL) && (z_159 != a_160)))
                    _fail(a_160);
                  else
                    z_159 = a_160;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_159)), not_null(z_159));
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
    ATerm f_160 = NULL;
    f_160 = t;
    e_160 :
    if(!(match_string(f_160, "--help")))
      {
        if(!(match_string(f_160, "-h")))
          {
            if(!(match_string(f_160, "-?")))
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
  ATerm i_160 = NULL,j_160 = NULL,k_160 = NULL;
  i_160 = t;
  h_160 :
  if(((ATgetType(i_160) == AT_LIST) && !(ATisEmpty(i_160))))
    {
      j_160 = ATgetFirst((ATermList) i_160);
      k_160 = (ATerm) ATgetNext((ATermList) i_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm u_160 = NULL,v_160 = NULL,w_160 = NULL;
  u_160 = t;
  t_160 :
  if(((ATgetType(u_160) == AT_LIST) && !(ATisEmpty(u_160))))
    {
      v_160 = ATgetFirst((ATermList) u_160);
      w_160 = (ATerm) ATgetNext((ATermList) u_160);
      {
        ATerm a_161 = NULL,c_161 = NULL;
        ATerm b_161 = NULL;
        t = SSLgetAnnotations(not_null(u_160));
        {
          b_161 = t;
          if(((a_161 != NULL) && (a_161 != b_161)))
            _fail(b_161);
          else
            a_161 = b_161;
        }
        {
          t = not_null(v_160);
          {
            ATerm e_161 = NULL;
            t = k_74(t);
            {
              c_161 = t;
              {
                t = not_null(w_160);
                {
                  ATerm g_161 = NULL;
                  t = l_74(t);
                  {
                    e_161 = t;
                    {
                      ATerm h_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_161)), not_null(c_161)), not_null(a_161));
                      {
                        h_161 = t;
                        if(((g_161 != NULL) && (g_161 != h_161)))
                          _fail(h_161);
                        else
                          g_161 = h_161;
                      }
                      t = not_null(g_161);
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
  ATerm r_161 = NULL;
  r_161 = t;
  q_161 :
  if(((ATgetType(r_161) == AT_LIST) && ATisEmpty(r_161)))
    {
      {
        ATerm t_161 = NULL,v_161 = NULL;
        ATerm i_52;
        i_52 = t;
        {
          ATerm u_161 = NULL;
          t = SSLgetAnnotations(not_null(r_161));
          {
            u_161 = t;
            if(((t_161 != NULL) && (t_161 != u_161)))
              _fail(u_161);
            else
              t_161 = u_161;
          }
        }
        t = i_52;
        {
          ATerm w_161 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_161));
          {
            w_161 = t;
            if(((v_161 != NULL) && (v_161 != w_161)))
              _fail(w_161);
            else
              v_161 = w_161;
          }
          t = not_null(v_161);
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
  ATerm c_162 = NULL,d_162 = NULL,e_162 = NULL;
  c_162 = t;
  b_162 :
  if(match_cons(c_162, sym__2))
    {
      d_162 = ATgetArgument(c_162, 0);
      e_162 = ATgetArgument(c_162, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_44, not_null(d_162), not_null(e_162));
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
  ATerm j_52;
  j_52 = t;
  {
    ATerm q_13 (ATerm t)
    {
      t = term_k_52;
      t = w_108(t);
      return(t);
    }
    t = try_1(t, q_13);
  }
  t = j_52;
  {
    ATerm x_13 (ATerm t)
    {
      ATerm m_162 = NULL;
      ATerm l_52;
      l_52 = t;
      {
        ATerm k_162 = NULL;
        ATerm l_162 = NULL;
        l_162 = t;
        if(((k_162 != NULL) && (k_162 != l_162)))
          _fail(l_162);
        else
          k_162 = l_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_49, not_null(k_162));
          t = set_config_0(t);
        }
      }
      t = l_52;
      {
        ATerm n_162 = NULL;
        n_162 = t;
        if(((m_162 != NULL) && (m_162 != n_162)))
          _fail(n_162);
        else
          m_162 = n_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_162));
      }
      return(t);
    }
    ATerm y_13 (ATerm t)
    {
      ATerm m_52 = t;
      int n_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_52 = t;
          int p_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_52);
            }
          else
            {
              t = o_52;
              {
                t = w_108(t);
                t = Cons_2(t, _id, y_13);
              }
            }
          LocalPopChoice(n_52);
        }
      else
        {
          t = m_52;
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
  ATerm t_162 = NULL,u_162 = NULL,v_162 = NULL;
  ATerm s_52;
  s_52 = t;
  {
    ATerm w_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL;
    w_162 = t;
    s_162 :
    if(match_cons(w_162, sym__3))
      {
        x_162 = ATgetArgument(w_162, 0);
        y_162 = ATgetArgument(w_162, 1);
        z_162 = ATgetArgument(w_162, 2);
        {
          if(((t_162 != NULL) && (t_162 != x_162)))
            _fail(x_162);
          else
            t_162 = x_162;
          {
            if(((u_162 != NULL) && (u_162 != y_162)))
              _fail(y_162);
            else
              u_162 = y_162;
            {
              if(((v_162 != NULL) && (v_162 != z_162)))
                _fail(z_162);
              else
                v_162 = z_162;
              t = SSL_table_put(not_null(t_162), not_null(u_162), not_null(v_162));
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
ATerm parse_options_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm c_163 = NULL;
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
      ATerm v_52 = t;
      int w_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_108(t);
          LocalPopChoice(w_52);
        }
      else
        {
          t = v_52;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_13);
    {
      ATerm a_14 (ATerm t)
      {
        ATerm y_52 = t;
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
            LocalPopChoice(b_53);
          }
        else
          {
            t = y_52;
            {
              ATerm b_14 (ATerm t)
              {
                ATerm c_14 (ATerm t)
                {
                  ATerm d_163 = NULL;
                  d_163 = t;
                  if(((c_163 != NULL) && (c_163 != d_163)))
                    _fail(d_163);
                  else
                    c_163 = d_163;
                  return(t);
                }
                t = Undefined_1(t, c_14);
                return(t);
              }
              t = option_defined_1(t, b_14);
              {
                ATerm d_14 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_163)), term_f_53);
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
        ATerm g_53;
        g_53 = t;
        {
          t = term_o_50;
          t = table_destroy_0(t);
        }
        t = g_53;
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
        ATerm h_53 = t;
        int i_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_105);
            LocalPopChoice(i_53);
          }
        else
          {
            t = h_53;
            {
              ATerm j_53 = t;
              int k_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_105(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_53);
                }
              else
                {
                  t = j_53;
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
  ATerm g_14 (ATerm t)
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_105(t);
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_14 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_14, v_105, w_105, k_14);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm))
{
  ATerm r_14 (ATerm t)
  {
    ATerm s_14 (ATerm t)
    {
      ATerm n_53;
      n_53 = t;
      {
        ATerm g_163 = NULL;
        ATerm h_163 = NULL;
        t = term_d_49;
        {
          t = get_config_0(t);
          {
            h_163 = t;
            if(((g_163 != NULL) && (g_163 != h_163)))
              _fail(h_163);
            else
              g_163 = h_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATinsert(ATempty, not_null(g_163)));
          t = printnl_0(t);
        }
      }
      t = n_53;
      return(t);
    }
    t = if_verbose2_1(t, s_14);
    return(t);
  }
  t = iowrap_4(t, n_105, o_105, p_105, r_14);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  t = iowrap_3(t, l_105, m_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_105 (ATerm))
{
  ATerm t_14 (ATerm t)
  {
    t = _2(t, _id, i_105);
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