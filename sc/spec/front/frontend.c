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
ATerm term_q_55;
ATerm term_z_54;
ATerm term_o_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_q_52;
ATerm term_m_52;
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
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_x_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_k_48;
ATerm term_d_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_s_47;
ATerm term_i_47;
ATerm term_e_47;
ATerm term_q_46;
ATerm term_n_46;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_l_44;
ATerm term_k_44;
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
ATerm term_i_37;
ATerm term_f_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_r_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_l_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_v_34;
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
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Dummy", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Op_2, term_o_34, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Op_2, term_v_34, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_35);
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
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_37);
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
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
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
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_l_39);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_l_25);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__2, term_c_49, term_l_39);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym__2, term_f_53, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym__2, term_z_53, term_l_39);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym__3, term_f_53, term_g_53, (ATerm) ATempty);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_78 (ATerm), ATerm i_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm i_114 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_77 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm m_106 (ATerm));
ATerm timing_1 (ATerm, ATerm y_84 (ATerm));
ATerm spaste_1 (ATerm, ATerm u_113 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm Let_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm r_75 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm q_110 (ATerm, ATerm (ATerm)), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_110 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm));
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
ATerm manytd_1 (ATerm, ATerm l_89 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm f_114 (ATerm), ATerm g_114 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm v_112 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm q_113 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm b_111 (ATerm), ATerm c_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm v_110 (ATerm), ATerm w_110 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm o_110 (ATerm), ATerm p_110 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm g_111 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm g_92 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_91 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm c_110 (ATerm), ATerm d_110 (ATerm, ATerm (ATerm)), ATerm e_110 (ATerm), ATerm f_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_110 (ATerm, ATerm (ATerm)), ATerm h_110 (ATerm));
ATerm substitute_5 (ATerm, ATerm j_110 (ATerm), ATerm k_110 (ATerm, ATerm (ATerm)), ATerm l_110 (ATerm), ATerm m_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_110 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm w_112 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm u_112 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm e_114 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm lchoice_1 (ATerm, ATerm d_114 (ATerm));
ATerm LChoice_2 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm a_114 (ATerm), ATerm b_114 (ATerm));
ATerm choice_1 (ATerm, ATerm c_114 (ATerm));
ATerm Choice_2 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm RootApp_1 (ATerm, ATerm d_78 (ATerm));
ATerm App_2 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm i_103 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm m_74 (ATerm));
ATerm Build_1 (ATerm, ATerm n_74 (ATerm));
ATerm VarScope_1 (ATerm, ATerm z_113 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm x_76 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_86 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm b_95 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm r_112 (ATerm));
ATerm oncetd_1 (ATerm, ATerm d_88 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm p_112 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_85 (ATerm));
ATerm listtd_1 (ATerm, ATerm x_93 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm w_77 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm tboundin_3 (ATerm, ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm n_98 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm));
ATerm diff_1 (ATerm, ATerm j_98 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm zip_1 (ATerm, ATerm w_94 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm for_3 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm o_86 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm j_103 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm r_88 (ATerm));
ATerm assert_1 (ATerm, ATerm h_103 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm y_76 (ATerm));
ATerm Constructors_1 (ATerm, ATerm t_76 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_103 (ATerm));
ATerm restore_always_2 (ATerm, ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_103 (ATerm));
ATerm scope_2 (ATerm, ATerm f_103 (ATerm), ATerm g_103 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_100 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_93 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_106 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_104 (ATerm));
ATerm debug_1 (ATerm, ATerm o_103 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_100 (ATerm), ATerm u_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_99 (ATerm), ATerm f_99 (ATerm));
ATerm crush_2 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_106 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_108 (ATerm));
ATerm map_1 (ATerm, ATerm q_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_108 (ATerm));
ATerm Program_1 (ATerm, ATerm m_84 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_103 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_84 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_92 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_107 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_84 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_105 (ATerm), ATerm g_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_105 (ATerm));
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
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL;
        ATerm b_10 = NULL;
        ATerm c_10 = NULL;
        t = new_0(t);
        {
          b_10 = t;
          {
            if(((v_9 != NULL) && (v_9 != b_10)))
              _fail(b_10);
            else
              v_9 = b_10;
            {
              ATerm d_10 = NULL;
              t = new_0(t);
              {
                c_10 = t;
                {
                  if(((w_9 != NULL) && (w_9 != c_10)))
                    _fail(c_10);
                  else
                    w_9 = c_10;
                  {
                    ATerm e_10 = NULL;
                    t = new_0(t);
                    {
                      d_10 = t;
                      {
                        if(((x_9 != NULL) && (x_9 != d_10)))
                          _fail(d_10);
                        else
                          x_9 = d_10;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(x_9)), not_null(w_9)), not_null(v_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(s_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9)))))));
      }
    }
  else
    {
      if(match_cons(r_9, sym_Build_1))
        {
          s_9 = ATgetArgument(r_9, 0);
          {
            ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
            ATerm m_10 = NULL;
            ATerm q_10 = NULL;
            t = new_0(t);
            {
              m_10 = t;
              {
                if(((j_10 != NULL) && (j_10 != m_10)))
                  _fail(m_10);
                else
                  j_10 = m_10;
                {
                  t = not_null(s_9);
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
                      n_10 = t;
                      e_9 :
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
                              if(((i_10 != NULL) && (i_10 != p_10)))
                                _fail(p_10);
                              else
                                i_10 = p_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10));
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
                      if(((k_10 != NULL) && (k_10 != q_10)))
                        _fail(q_10);
                      else
                        k_10 = q_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_10)), not_null(h_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_10)))));
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
ATerm As_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
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
            t = l_78(t);
            {
              j_18 = t;
              {
                t = not_null(d_18);
                {
                  ATerm n_18 = NULL;
                  t = m_78(t);
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
ATerm Prim_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
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
            t = i_74(t);
            {
              i_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm m_19 = NULL;
                  t = j_74(t);
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
ATerm Explode_2 (ATerm t, ATerm h_78 (ATerm), ATerm i_78 (ATerm))
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
            t = h_78(t);
            {
              h_20 = t;
              {
                t = not_null(b_20);
                {
                  ATerm l_20 = NULL;
                  t = i_78(t);
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
ATerm pat_td_1 (ATerm t, ATerm i_114 (ATerm))
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_114(t);
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
                t = pat_td_1(t, i_114);
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
                    t = pat_td_1(t, i_114);
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
                          t = pat_td_1(t, i_114);
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
                                  t = pat_td_1(t, i_114);
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
                                  t = pat_td_1(t, i_114);
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
      t = repeat_2(t, s_1, _id);
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
ATerm Strategies_1 (ATerm t, ATerm a_77 (ATerm))
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
            t = a_77(t);
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
ATerm Specification_1 (ATerm t, ATerm c_77 (ATerm))
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
            t = c_77(t);
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
ATerm if_verbose3_1 (ATerm t, ATerm m_106 (ATerm))
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
      t = m_106(t);
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
ATerm timing_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, y_84);
    }
    t = g_17;
    return(t);
  }
  t = if_verbose3_1(t, u_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm u_113 (ATerm))
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = split_2(t, _id, u_113);
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
              t = split_2(t, _id, u_113);
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
                t = u_113(t);
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
ATerm Rec_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
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
            t = s_75(t);
            {
              l_26 = t;
              {
                t = not_null(f_26);
                {
                  ATerm p_26 = NULL;
                  t = t_75(t);
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
ATerm SDef_3 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm))
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
            t = w_75(t);
            {
              n_27 = t;
              {
                t = not_null(f_27);
                {
                  ATerm r_27 = NULL;
                  t = x_75(t);
                  {
                    p_27 = t;
                    {
                      t = not_null(g_27);
                      {
                        ATerm t_27 = NULL;
                        t = y_75(t);
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
ATerm Let_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
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
            t = u_75(t);
            {
              p_28 = t;
              {
                t = not_null(j_28);
                {
                  ATerm t_28 = NULL;
                  t = v_75(t);
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
ATerm sboundin_3 (ATerm t, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm))
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, v_113, v_113);
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
            t = SDef_3(t, x_113, x_113, v_113);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = Rec_2(t, x_113, v_113);
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
  ATerm w_30 = NULL,a_31 = NULL,b_31 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_Let_2))
    {
      a_31 = ATgetArgument(w_30, 0);
      b_31 = ATgetArgument(w_30, 1);
      {
        t = not_null(a_31);
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
ATerm SVar_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_SVar_1))
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
            t = r_75(t);
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
ATerm rename_4 (ATerm t, ATerm q_110 (ATerm, ATerm (ATerm)), ATerm r_110 (ATerm), ATerm s_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_110 (ATerm, ATerm (ATerm)))
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
              t = RnVar_1(t, q_110);
              LocalPopChoice(e_18);
            }
          else
            {
              t = z_17;
              {
                t = RnBinding_2(t, r_110, t_110);
                t = DistBinding_2(t, u_32, s_110);
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
                    d_35 :
                    if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
                      {
                        v_35 = ATgetFirst((ATermList) u_35);
                        y_35 = (ATerm) ATgetNext((ATermList) u_35);
                        e_35 :
                        if(match_cons(v_35, sym_Var_1))
                          {
                            w_35 = ATgetArgument(v_35, 0);
                            f_35 :
                            if(match_cons(w_35, sym_ListVar_1))
                              {
                                x_35 = ATgetArgument(w_35, 0);
                                g_35 :
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
ATerm Con_3 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm h_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Con_3))
    {
      l_37 = ATgetArgument(h_37, 0);
      m_37 = ATgetArgument(h_37, 1);
      n_37 = ATgetArgument(h_37, 2);
      {
        ATerm a_38 = NULL,j_38 = NULL;
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(h_37));
        {
          i_38 = t;
          if(((a_38 != NULL) && (a_38 != i_38)))
            _fail(i_38);
          else
            a_38 = i_38;
        }
        {
          t = not_null(l_37);
          {
            ATerm l_38 = NULL;
            t = y_77(t);
            {
              j_38 = t;
              {
                t = not_null(m_37);
                {
                  ATerm n_38 = NULL;
                  t = z_77(t);
                  {
                    l_38 = t;
                    {
                      t = not_null(n_37);
                      {
                        ATerm p_38 = NULL;
                        t = a_78(t);
                        {
                          n_38 = t;
                          {
                            ATerm q_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_38), not_null(l_38), not_null(n_38)), not_null(a_38));
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
      t = repeat_2(t, m_2, _id);
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
              ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
              t = not_null(b_44);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm h_44 = NULL,m_44 = NULL;
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
                      ATerm n_44 = NULL;
                      n_44 = t;
                      if(((m_44 != NULL) && (m_44 != n_44)))
                        _fail(n_44);
                      else
                        m_44 = n_44;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_44), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20)), not_null(m_44));
                    }
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  t = unzip_1(t, _id);
                  {
                    o_44 = t;
                    t_43 :
                    if(match_cons(o_44, sym__2))
                      {
                        p_44 = ATgetArgument(o_44, 0);
                        q_44 = ATgetArgument(o_44, 1);
                        {
                          if(((f_44 != NULL) && (f_44 != p_44)))
                            _fail(p_44);
                          else
                            f_44 = p_44;
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,d_46 = NULL;
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
                  d_46 = (ATerm) ATgetNext((ATermList) y_45);
                  s_45 :
                  if(match_cons(z_45, sym_Strategies_1))
                    {
                      a_46 = ATgetArgument(z_45, 0);
                      t_45 :
                      if(((ATgetType(d_46) == AT_LIST) && ATisEmpty(d_46)))
                        {
                          {
                            ATerm g_46 = NULL;
                            ATerm j_46 = NULL,l_46 = NULL,p_46 = NULL;
                            ATerm d_20;
                            d_20 = t;
                            {
                              ATerm k_46 = NULL;
                              t = not_null(x_45);
                              {
                                t = congdefs_0(t);
                                {
                                  k_46 = t;
                                  if(((j_46 != NULL) && (j_46 != k_46)))
                                    _fail(k_46);
                                  else
                                    j_46 = k_46;
                                }
                              }
                            }
                            t = d_20;
                            {
                              ATerm m_46 = NULL;
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
                                  m_46 = t;
                                  if(((l_46 != NULL) && (l_46 != m_46)))
                                    _fail(m_46);
                                  else
                                    l_46 = m_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(l_46));
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
                                    p_46 = t;
                                    if(((g_46 != NULL) && (g_46 != p_46)))
                                      _fail(p_46);
                                    else
                                      g_46 = p_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_46))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(x_45))));
                          }
                        }
                      else
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
  ATerm j_47 = NULL;
  j_47 = t;
  t = SSL_int_to_string(not_null(j_47));
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
            e_48 :
            if(match_cons(p_48, sym_Defined_3))
              {
                q_48 = ATgetArgument(p_48, 0);
                r_48 = ATgetArgument(p_48, 1);
                s_48 = ATgetArgument(p_48, 2);
                f_48 :
                if(match_string(q_48, "q_1"))
                  {
                    ATerm v_48 = NULL;
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
                        ATerm w_48 = NULL;
                        t = not_null(j_48);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              w_48 = t;
                              if(((v_48 != NULL) && (v_48 != w_48)))
                                _fail(w_48);
                              else
                                v_48 = w_48;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), not_null(v_48)), term_g_23), not_null(i_48)), term_x_22), term_w_22), not_null(o_48)), term_p_22), not_null(n_48)), term_o_22));
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym__2))
    {
      j_49 = ATgetArgument(i_49, 0);
      k_49 = ATgetArgument(i_49, 1);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_49), not_null(k_49));
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = SSL_subtr(not_null(j_49), not_null(k_49));
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
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  p_52 :
  if(match_cons(s_52, sym_Op_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      u_52 = ATgetArgument(s_52, 1);
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_52 = NULL;
            t = not_null(u_52);
            {
              t = length_0(t);
              {
                y_52 = t;
                {
                  ATerm k_53 = NULL,l_53 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_52)));
                  {
                    ATerm v_2 (ATerm t)
                    {
                      t = term_e_24;
                      return(t);
                    }
                    t = rewrite_1(t, v_2);
                    {
                      k_53 = t;
                      d_52 :
                      if(match_cons(k_53, sym_Defined_1))
                        {
                          l_53 = ATgetArgument(k_53, 0);
                          e_52 :
                          if(!(match_string(l_53, "k_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_52), (ATerm) ATempty);
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
              t = not_null(u_52);
              {
                t = length_0(t);
                {
                  p_53 = t;
                  {
                    ATerm v_53 = NULL,w_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_52), (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_53)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_e_24;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        v_53 = t;
                        n_52 :
                        if(match_cons(v_53, sym_Defined_1))
                          {
                            w_53 = ATgetArgument(v_53, 0);
                            o_52 :
                            if(!(match_string(w_53, "h_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_52), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm b_54 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_89(t);
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
ATerm check_constructors_p__2 (ATerm t, ATerm f_114 (ATerm), ATerm g_114 (ATerm))
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
      t = f_114(t);
      {
        g_54 = t;
        {
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
          {
            t = g_114(t);
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
  ATerm n_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_SDef_3))
    {
      p_54 = ATgetArgument(n_54, 0);
      q_54 = ATgetArgument(n_54, 1);
      r_54 = ATgetArgument(n_54, 2);
      {
        t = not_null(r_54);
        {
          ATerm c_3 (ATerm t)
          {
            t = not_null(p_54);
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
          p_54 = ATgetArgument(n_54, 0);
          q_54 = ATgetArgument(n_54, 1);
          r_54 = ATgetArgument(n_54, 2);
          {
            t = not_null(r_54);
            {
              ATerm e_3 (ATerm t)
              {
                t = not_null(p_54);
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
            ATerm t_55 = NULL;
            ATerm m_25;
            m_25 = t;
            {
              ATerm u_55 = NULL;
              t = not_null(k_55);
              {
                t = length_0(t);
                {
                  u_55 = t;
                  if(((t_55 != NULL) && (t_55 != u_55)))
                    _fail(u_55);
                  else
                    t_55 = u_55;
                }
              }
            }
            t = m_25;
            {
              ATerm s_25;
              s_25 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(t_55))), term_u_25);
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
                ATerm d_56 = NULL;
                ATerm v_25;
                v_25 = t;
                {
                  ATerm e_56 = NULL;
                  t = term_l_25;
                  {
                    e_56 = t;
                    if(((d_56 != NULL) && (d_56 != e_56)))
                      _fail(e_56);
                    else
                      d_56 = e_56;
                  }
                }
                t = v_25;
                {
                  ATerm w_25;
                  w_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_56))), term_y_25);
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
  ATerm c_58 = NULL,i_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  c_58 = t;
  v_56 :
  if(match_cons(c_58, sym_Specification_1))
    {
      i_58 = ATgetArgument(c_58, 0);
      w_56 :
      if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
        {
          l_58 = ATgetFirst((ATermList) i_58);
          q_58 = (ATerm) ATgetNext((ATermList) i_58);
          x_56 :
          if(match_cons(l_58, sym_Signature_1))
            {
              m_58 = ATgetArgument(l_58, 0);
              f_57 :
              if(((ATgetType(m_58) == AT_LIST) && !(ATisEmpty(m_58))))
                {
                  n_58 = ATgetFirst((ATermList) m_58);
                  p_58 = (ATerm) ATgetNext((ATermList) m_58);
                  g_57 :
                  if(match_cons(n_58, sym_Constructors_1))
                    {
                      o_58 = ATgetArgument(n_58, 0);
                      i_57 :
                      if(((ATgetType(p_58) == AT_LIST) && ATisEmpty(p_58)))
                        {
                          j_57 :
                          if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                            {
                              r_58 = ATgetFirst((ATermList) q_58);
                              t_58 = (ATerm) ATgetNext((ATermList) q_58);
                              k_57 :
                              if(match_cons(r_58, sym_Strategies_1))
                                {
                                  s_58 = ATgetArgument(r_58, 0);
                                  l_57 :
                                  if(((ATgetType(t_58) == AT_LIST) && ATisEmpty(t_58)))
                                    {
                                      {
                                        ATerm w_58 = NULL,x_58 = NULL,b_59 = NULL;
                                        ATerm z_25;
                                        z_25 = t;
                                        {
                                          ATerm y_58 = NULL;
                                          ATerm z_58 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_58)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_x_23), term_x_23), term_x_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_23), term_x_23))), term_b_26);
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
                                                        t_56 :
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
ATerm exp_overlays2_1 (ATerm t, ATerm v_112 (ATerm))
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
            t = v_112(t);
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
            t = ExpOverlay_1(t, v_112);
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
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  s_61 = t;
  c_60 :
  if(match_cons(s_61, sym_BuildDefault_1))
    {
      t_61 = ATgetArgument(s_61, 0);
      t = term_j_15;
    }
  else
    {
      if(match_cons(s_61, sym_Real_1))
        {
          t_61 = ATgetArgument(s_61, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(t_61)));
        }
      else
        {
          if(match_cons(s_61, sym_Int_1))
            {
              t_61 = ATgetArgument(s_61, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(t_61)));
            }
          else
            {
              if(match_cons(s_61, sym_Str_1))
                {
                  t_61 = ATgetArgument(s_61, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_61)));
                }
              else
                {
                  if(match_cons(s_61, sym_Anno_2))
                    {
                      t_61 = ATgetArgument(s_61, 0);
                      r_61 = ATgetArgument(s_61, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), not_null(t_61)));
                    }
                  else
                    {
                      if(match_cons(s_61, sym_Op_2))
                        {
                          t_61 = ATgetArgument(s_61, 0);
                          r_61 = ATgetArgument(s_61, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_61)), not_null(r_61));
                        }
                      else
                        {
                          if(match_cons(s_61, sym_Var_1))
                            {
                              t_61 = ATgetArgument(s_61, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_61)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym_Op_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      {
        ATerm v_72 = NULL,z_72 = NULL;
        ATerm w_72 = NULL;
        t = SSLgetAnnotations(not_null(n_68));
        {
          w_72 = t;
          if(((v_72 != NULL) && (v_72 != w_72)))
            _fail(w_72);
          else
            v_72 = w_72;
        }
        {
          t = not_null(o_68);
          {
            ATerm b_73 = NULL;
            t = m_76(t);
            {
              z_72 = t;
              {
                t = not_null(p_68);
                {
                  ATerm d_73 = NULL;
                  t = n_76(t);
                  {
                    b_73 = t;
                    {
                      ATerm e_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_72), not_null(b_73)), not_null(v_72));
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
ATerm tpaste_1 (ATerm t, ATerm q_113 (ATerm))
{
  t = Scope_2(t, q_113, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm p_74 = NULL,s_74 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym_Var_1))
    {
      s_74 = ATgetArgument(p_74, 0);
      t = not_null(s_74);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm b_111 (ATerm), ATerm c_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
            ATerm n_75 = NULL;
            n_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_75), not_null(c_75));
              t = b_111(t);
            }
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm p_75 = NULL;
            p_75 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_75), not_null(b_75));
              t = b_111(t);
            }
            return(t);
          }
          t = c_111(t, o_3, p_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm v_110 (ATerm), ATerm w_110 (ATerm, ATerm (ATerm)))
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_cons(j_76, sym__2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      {
        ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,d_77 = NULL;
        ATerm y_26;
        y_26 = t;
        {
          ATerm u_76 = NULL;
          t = not_null(k_76);
          {
            ATerm v_76 = NULL;
            t = v_110(t);
            {
              u_76 = t;
              {
                if(((q_76 != NULL) && (q_76 != u_76)))
                  _fail(u_76);
                else
                  q_76 = u_76;
                {
                  ATerm w_76 = NULL,b_77 = NULL;
                  t = map_1(t, new_0);
                  {
                    v_76 = t;
                    {
                      if(((r_76 != NULL) && (r_76 != v_76)))
                        _fail(v_76);
                      else
                        r_76 = v_76;
                      {
                        ATerm z_76 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(r_76));
                        {
                          t = zip_1(t, _id);
                          {
                            z_76 = t;
                            if(((w_76 != NULL) && (w_76 != z_76)))
                              _fail(z_76);
                            else
                              w_76 = z_76;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_76), not_null(l_76));
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
                              b_77 = t;
                              if(((s_76 != NULL) && (s_76 != b_77)))
                                _fail(b_77);
                              else
                                s_76 = b_77;
                            }
                          }
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
          ATerm e_77 = NULL;
          t = not_null(k_76);
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(r_76);
              return(t);
            }
            t = w_110(t, q_3);
            {
              e_77 = t;
              if(((d_77 != NULL) && (d_77 != e_77)))
                _fail(e_77);
              else
                d_77 = e_77;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(d_77), not_null(l_76), not_null(s_76));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_110 (ATerm), ATerm p_110 (ATerm))
{
  ATerm r_77 = NULL;
  ATerm t_77 = NULL,u_77 = NULL;
  r_77 = t;
  {
    ATerm v_77 = NULL;
    t = not_null(r_77);
    {
      ATerm x_77 = NULL;
      t = o_110(t);
      {
        v_77 = t;
        {
          if(((t_77 != NULL) && (t_77 != v_77)))
            _fail(v_77);
          else
            t_77 = v_77;
          {
            t = p_110(t);
            {
              x_77 = t;
              if(((u_77 != NULL) && (u_77 != x_77)))
                _fail(x_77);
              else
                u_77 = x_77;
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
          o_78 :
          if(match_cons(x_78, sym__2))
            {
              y_78 = ATgetArgument(x_78, 0);
              z_78 = ATgetArgument(x_78, 1);
              p_78 :
              if(match_string(y_78, ""))
                {
                  q_78 :
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
ATerm RnVar_1 (ATerm t, ATerm g_111 (ATerm, ATerm (ATerm)))
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
          t = g_111(t, r_3);
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
              t = g_92(t);
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
ATerm env_alltd_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm z_80 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
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
ATerm substitute_6 (ATerm t, ATerm c_110 (ATerm), ATerm d_110 (ATerm, ATerm (ATerm)), ATerm e_110 (ATerm), ATerm f_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_110 (ATerm, ATerm (ATerm)), ATerm h_110 (ATerm))
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
                    t = RnVar_1(t, d_110);
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
                            t = SubsVar_2(t, c_110, v_3);
                            t = h_110(t);
                          }
                          LocalPopChoice(s_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            t = RnBinding_2(t, e_110, g_110);
                            t = DistBinding_2(t, c_82, f_110);
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
ATerm substitute_5 (ATerm t, ATerm j_110 (ATerm), ATerm k_110 (ATerm, ATerm (ATerm)), ATerm l_110 (ATerm), ATerm m_110 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_110 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, j_110, k_110, l_110, m_110, n_110, _id);
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
ATerm ExpOverlay_1 (ATerm t, ATerm w_112 (ATerm))
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
        t = w_112(t);
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
ATerm exp_overlays1_1 (ATerm t, ATerm u_112 (ATerm))
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
            t = u_112(t);
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
            t = ExpOverlay_1(t, u_112);
            return(t);
          }
          t = repeat_2(t, y_3, _id);
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
                                    ATerm l_84 = NULL,p_84 = NULL;
                                    ATerm b_28;
                                    b_28 = t;
                                    {
                                      ATerm o_84 = NULL;
                                      t = not_null(d_84);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(d_84);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          o_84 = t;
                                          if(((l_84 != NULL) && (l_84 != o_84)))
                                            _fail(o_84);
                                          else
                                            l_84 = o_84;
                                        }
                                      }
                                    }
                                    t = b_28;
                                    {
                                      ATerm q_84 = NULL,s_84 = NULL,u_84 = NULL;
                                      ATerm c_28;
                                      c_28 = t;
                                      {
                                        ATerm r_84 = NULL;
                                        t = not_null(d_84);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            r_84 = t;
                                            if(((q_84 != NULL) && (q_84 != r_84)))
                                              _fail(r_84);
                                            else
                                              q_84 = r_84;
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
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_84), not_null(s_84));
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
                                              if(((p_84 != NULL) && (p_84 != u_84)))
                                                _fail(u_84);
                                              else
                                                p_84 = u_84;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_84))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(a_84))));
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
    ATerm d_85 = NULL;
    d_85 = t;
    {
      ATerm f_28;
      f_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_85)), term_l_28);
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
  ATerm i_85 = NULL,l_85 = NULL,m_85 = NULL,r_85 = NULL;
  i_85 = t;
  h_85 :
  if(match_cons(i_85, sym_Overlay_3))
    {
      l_85 = ATgetArgument(i_85, 0);
      m_85 = ATgetArgument(i_85, 1);
      r_85 = ATgetArgument(i_85, 2);
      {
        ATerm q_28;
        q_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_s_28, not_null(l_85)));
          {
            ATerm d_4 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = assert_1(t, d_4);
            {
              t = not_null(m_85);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(r_85);
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
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL;
  a_86 = t;
  y_85 :
  if(match_cons(a_86, sym_RDef_3))
    {
      b_86 = ATgetArgument(a_86, 0);
      c_86 = ATgetArgument(a_86, 1);
      d_86 = ATgetArgument(a_86, 2);
      z_85 :
      if(match_cons(d_86, sym_StratRule_3))
        {
          k_86 = ATgetArgument(d_86, 0);
          l_86 = ATgetArgument(d_86, 1);
          m_86 = ATgetArgument(d_86, 2);
          {
            ATerm w_28;
            w_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_x_28, not_null(b_86)));
              {
                ATerm e_4 (ATerm t)
                {
                  t = term_v_28;
                  return(t);
                }
                t = assert_1(t, e_4);
                {
                  t = not_null(k_86);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(l_86);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(m_86);
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
          if(match_cons(d_86, sym_Rule_3))
            {
              k_86 = ATgetArgument(d_86, 0);
              l_86 = ATgetArgument(d_86, 1);
              m_86 = ATgetArgument(d_86, 2);
              {
                ATerm y_28;
                y_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_z_28, not_null(b_86)));
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_v_28;
                      return(t);
                    }
                    t = assert_1(t, f_4);
                    {
                      t = not_null(k_86);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(m_86);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(l_86);
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
ATerm guardedlchoice_1 (ATerm t, ATerm e_114 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, e_114, e_114, _id);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, e_114);
    return(t);
  }
  t = abstract_choice_2(t, g_4, h_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym_GuardedLChoice_3))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      l_87 = ATgetArgument(i_87, 2);
      {
        ATerm q_87 = NULL,s_87 = NULL;
        ATerm r_87 = NULL;
        t = SSLgetAnnotations(not_null(i_87));
        {
          r_87 = t;
          if(((q_87 != NULL) && (q_87 != r_87)))
            _fail(r_87);
          else
            q_87 = r_87;
        }
        {
          t = not_null(j_87);
          {
            ATerm u_87 = NULL;
            t = j_75(t);
            {
              s_87 = t;
              {
                t = not_null(k_87);
                {
                  ATerm w_87 = NULL;
                  t = k_75(t);
                  {
                    u_87 = t;
                    {
                      t = not_null(l_87);
                      {
                        ATerm y_87 = NULL;
                        t = l_75(t);
                        {
                          w_87 = t;
                          {
                            ATerm z_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(s_87), not_null(u_87), not_null(w_87)), not_null(q_87));
                            {
                              z_87 = t;
                              if(((y_87 != NULL) && (y_87 != z_87)))
                                _fail(z_87);
                              else
                                y_87 = z_87;
                            }
                            t = not_null(y_87);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm d_114 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = LChoice_2(t, d_114, _id);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = LChoice_2(t, _id, d_114);
    return(t);
  }
  t = abstract_choice_2(t, i_4, j_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm))
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_LChoice_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      {
        ATerm w_88 = NULL,y_88 = NULL;
        ATerm x_88 = NULL;
        t = SSLgetAnnotations(not_null(o_88));
        {
          x_88 = t;
          if(((w_88 != NULL) && (w_88 != x_88)))
            _fail(x_88);
          else
            w_88 = x_88;
        }
        {
          t = not_null(p_88);
          {
            ATerm a_89 = NULL;
            t = h_75(t);
            {
              y_88 = t;
              {
                t = not_null(q_88);
                {
                  ATerm c_89 = NULL;
                  t = i_75(t);
                  {
                    a_89 = t;
                    {
                      ATerm d_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(y_88), not_null(a_89)), not_null(w_88));
                      {
                        d_89 = t;
                        if(((c_89 != NULL) && (c_89 != d_89)))
                          _fail(d_89);
                        else
                          c_89 = d_89;
                      }
                      t = not_null(c_89);
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
        ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL;
        v_89 = t;
        p_89 :
        if(match_cons(v_89, sym__2))
          {
            w_89 = ATgetArgument(v_89, 0);
            x_89 = ATgetArgument(v_89, 1);
            q_89 :
            if(((ATgetType(x_89) == AT_LIST) && !(ATisEmpty(x_89))))
              {
                y_89 = ATgetFirst((ATermList) x_89);
                b_90 = (ATerm) ATgetNext((ATermList) x_89);
                r_89 :
                if(match_cons(y_89, sym_Defined_2))
                  {
                    z_89 = ATgetArgument(y_89, 0);
                    a_90 = ATgetArgument(y_89, 1);
                    s_89 :
                    if(!(match_cons(w_89, sym_Scopes_0)))
                      {
                        ATerm g_29 = t;
                        int h_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_29;
                            i_29 = t;
                            {
                              ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(w_89));
                              {
                                t = table_get_0(t);
                                {
                                  e_90 = t;
                                  n_89 :
                                  if(((ATgetType(e_90) == AT_LIST) && !(ATisEmpty(e_90))))
                                    {
                                      f_90 = ATgetFirst((ATermList) e_90);
                                      i_90 = (ATerm) ATgetNext((ATermList) e_90);
                                      o_89 :
                                      if(match_cons(f_90, sym_Defined_2))
                                        {
                                          g_90 = ATgetArgument(f_90, 0);
                                          h_90 = ATgetArgument(f_90, 1);
                                          if(((a_90 != NULL) && (a_90 != h_90)))
                                            _fail(h_90);
                                          else
                                            a_90 = h_90;
                                        }
                                      else
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_89), (ATerm) ATinsert(ATempty, term_j_29));
                          }
                      }
                  }
                else
                  {
                    t_89 :
                    if(!(match_cons(w_89, sym_Scopes_0)))
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                u_89 :
                if(!(match_cons(w_89, sym_Scopes_0)))
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
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  o_90 :
  if(match_cons(p_90, sym__2))
    {
      q_90 = ATgetArgument(p_90, 0);
      r_90 = ATgetArgument(p_90, 1);
      {
        t = not_null(r_90);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
            u_90 = t;
            n_90 :
            if(match_cons(u_90, sym__2))
              {
                v_90 = ATgetArgument(u_90, 0);
                w_90 = ATgetArgument(u_90, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_90), not_null(v_90), not_null(w_90));
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
  ATerm c_91 = NULL;
  c_91 = t;
  {
    ATerm q_29;
    q_29 = t;
    {
      t = term_m_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(c_91));
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
  ATerm g_91 = NULL;
  g_91 = t;
  t = SSL_table_keys(not_null(g_91));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_91 = NULL;
  m_91 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm o_91 = NULL;
        ATerm s_91 = NULL;
        o_91 = t;
        {
          ATerm t_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(o_91));
          {
            t = table_get_0(t);
            {
              t_91 = t;
              if(((s_91 != NULL) && (s_91 != t_91)))
                _fail(t_91);
              else
                s_91 = t_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_91), not_null(s_91));
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
ATerm abstract_choice_2 (ATerm t, ATerm a_114 (ATerm), ATerm b_114 (ATerm))
{
  ATerm z_91 = NULL,b_92 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm a_92 = NULL;
    t = save_Bound_0(t);
    {
      a_92 = t;
      if(((z_91 != NULL) && (z_91 != a_92)))
        _fail(a_92);
      else
        z_91 = a_92;
    }
  }
  t = r_29;
  {
    t = a_114(t);
    {
      ATerm s_29;
      s_29 = t;
      {
        ATerm c_92 = NULL;
        t = save_Bound_0(t);
        {
          c_92 = t;
          {
            if(((b_92 != NULL) && (b_92 != c_92)))
              _fail(c_92);
            else
              b_92 = c_92;
            {
              t = not_null(z_91);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = s_29;
      {
        t = b_114(t);
        {
          ATerm t_29;
          t_29 = t;
          {
            t = not_null(b_92);
            t = isect_Bound_0(t);
          }
          t = t_29;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm c_114 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = Choice_2(t, c_114, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = Choice_2(t, _id, c_114);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  ATerm m_92 = NULL,n_92 = NULL,p_92 = NULL;
  m_92 = t;
  l_92 :
  if(match_cons(m_92, sym_Choice_2))
    {
      n_92 = ATgetArgument(m_92, 0);
      p_92 = ATgetArgument(m_92, 1);
      {
        ATerm v_92 = NULL,x_92 = NULL;
        ATerm w_92 = NULL;
        t = SSLgetAnnotations(not_null(m_92));
        {
          w_92 = t;
          if(((v_92 != NULL) && (v_92 != w_92)))
            _fail(w_92);
          else
            v_92 = w_92;
        }
        {
          t = not_null(n_92);
          {
            ATerm b_93 = NULL;
            t = f_75(t);
            {
              x_92 = t;
              {
                t = not_null(p_92);
                {
                  ATerm d_93 = NULL;
                  t = g_75(t);
                  {
                    b_93 = t;
                    {
                      ATerm e_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(x_92), not_null(b_93)), not_null(v_92));
                      {
                        e_93 = t;
                        if(((d_93 != NULL) && (d_93 != e_93)))
                          _fail(e_93);
                        else
                          d_93 = e_93;
                      }
                      t = not_null(d_93);
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
  ATerm e_94 = NULL;
  e_94 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_94 = NULL;
        ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
        t = term_c_22;
        {
          ATerm p_4 (ATerm t)
          {
            t = term_v_28;
            return(t);
          }
          t = rewrite_1(t, p_4);
          {
            i_94 = t;
            r_93 :
            if(match_cons(i_94, sym_Defined_2))
              {
                j_94 = ATgetArgument(i_94, 0);
                k_94 = ATgetArgument(i_94, 1);
                s_93 :
                if(match_string(j_94, "x_0"))
                  {
                    if(((h_94 != NULL) && (h_94 != k_94)))
                      _fail(k_94);
                    else
                      h_94 = k_94;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_94)), term_w_22), not_null(h_94)), term_w_29);
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
              ATerm n_94 = NULL;
              ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
              t = term_c_22;
              {
                ATerm q_4 (ATerm t)
                {
                  t = term_v_28;
                  return(t);
                }
                t = rewrite_1(t, q_4);
                {
                  o_94 = t;
                  u_93 :
                  if(match_cons(o_94, sym_Defined_2))
                    {
                      p_94 = ATgetArgument(o_94, 0);
                      q_94 = ATgetArgument(o_94, 1);
                      v_93 :
                      if(match_string(p_94, "u_0"))
                        {
                          if(((n_94 != NULL) && (n_94 != q_94)))
                            _fail(q_94);
                          else
                            n_94 = q_94;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_94)), term_w_22), not_null(n_94)), term_z_29);
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
                    ATerm z_94 = NULL;
                    ATerm a_95 = NULL,c_95 = NULL,d_95 = NULL;
                    t = term_c_22;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = term_v_28;
                        return(t);
                      }
                      t = rewrite_1(t, r_4);
                      {
                        a_95 = t;
                        z_93 :
                        if(match_cons(a_95, sym_Defined_2))
                          {
                            c_95 = ATgetArgument(a_95, 0);
                            d_95 = ATgetArgument(a_95, 1);
                            a_94 :
                            if(match_string(c_95, "r_0"))
                              {
                                if(((z_94 != NULL) && (z_94 != d_95)))
                                  _fail(d_95);
                                else
                                  z_94 = d_95;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_94)), term_w_22), not_null(z_94)), term_z_29);
                    LocalPopChoice(b_30);
                  }
                else
                  {
                    t = a_30;
                    {
                      ATerm g_95 = NULL;
                      ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
                      t = term_c_22;
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = term_v_28;
                          return(t);
                        }
                        t = rewrite_1(t, s_4);
                        {
                          h_95 = t;
                          c_94 :
                          if(match_cons(h_95, sym_Defined_2))
                            {
                              i_95 = ATgetArgument(h_95, 0);
                              j_95 = ATgetArgument(h_95, 1);
                              d_94 :
                              if(match_string(i_95, "o_0"))
                                {
                                  if(((g_95 != NULL) && (g_95 != j_95)))
                                    _fail(j_95);
                                  else
                                    g_95 = j_95;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_94)), term_w_22), not_null(g_95)), term_c_30);
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
  ATerm u_95 = NULL,v_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym_Var_1))
    {
      v_95 = ATgetArgument(u_95, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), not_null(v_95)), term_d_30);
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
  ATerm i_96 = NULL,j_96 = NULL;
  i_96 = t;
  h_96 :
  if(match_cons(i_96, sym_Var_1))
    {
      j_96 = ATgetArgument(i_96, 0);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_96 = NULL,n_96 = NULL;
            t = not_null(i_96);
            {
              ATerm t_4 (ATerm t)
              {
                t = term_m_28;
                return(t);
              }
              t = rewrite_1(t, t_4);
              {
                m_96 = t;
                b_96 :
                if(match_cons(m_96, sym_Defined_1))
                  {
                    n_96 = ATgetArgument(m_96, 0);
                    c_96 :
                    if(!(match_string(n_96, "e_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_96));
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
                  ATerm q_96 = NULL;
                  t = not_null(i_96);
                  {
                    ATerm u_4 (ATerm t)
                    {
                      t = term_m_28;
                      return(t);
                    }
                    t = rewrite_1(t, u_4);
                    {
                      q_96 = t;
                      e_96 :
                      if(match_cons(q_96, sym_Undefined_0))
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
                    ATerm t_96 = NULL,u_96 = NULL;
                    t = not_null(i_96);
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = term_m_28;
                        return(t);
                      }
                      t = rewrite_1(t, v_4);
                      {
                        t_96 = t;
                        f_96 :
                        if(match_cons(t_96, sym_Defined_1))
                          {
                            u_96 = ATgetArgument(t_96, 0);
                            g_96 :
                            if(!(match_string(u_96, "a_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_96));
                  }
                }
            }
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
ATerm Rule_3 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL;
  g_97 = t;
  f_97 :
  if(match_cons(g_97, sym_Rule_3))
    {
      h_97 = ATgetArgument(g_97, 0);
      i_97 = ATgetArgument(g_97, 1);
      j_97 = ATgetArgument(g_97, 2);
      {
        ATerm o_97 = NULL,q_97 = NULL;
        ATerm p_97 = NULL;
        t = SSLgetAnnotations(not_null(g_97));
        {
          p_97 = t;
          if(((o_97 != NULL) && (o_97 != p_97)))
            _fail(p_97);
          else
            o_97 = p_97;
        }
        {
          t = not_null(h_97);
          {
            ATerm s_97 = NULL;
            t = i_77(t);
            {
              q_97 = t;
              {
                t = not_null(i_97);
                {
                  ATerm u_97 = NULL;
                  t = j_77(t);
                  {
                    s_97 = t;
                    {
                      t = not_null(j_97);
                      {
                        ATerm w_97 = NULL;
                        t = k_77(t);
                        {
                          u_97 = t;
                          {
                            ATerm x_97 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(q_97), not_null(s_97), not_null(u_97)), not_null(o_97));
                            {
                              x_97 = t;
                              if(((w_97 != NULL) && (w_97 != x_97)))
                                _fail(x_97);
                              else
                                w_97 = x_97;
                            }
                            t = not_null(w_97);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm v_98 = NULL,w_98 = NULL;
  v_98 = t;
  u_98 :
  if(match_cons(v_98, sym_RootApp_1))
    {
      w_98 = ATgetArgument(v_98, 0);
      {
        ATerm z_98 = NULL,b_99 = NULL;
        ATerm a_99 = NULL;
        t = SSLgetAnnotations(not_null(v_98));
        {
          a_99 = t;
          if(((z_98 != NULL) && (z_98 != a_99)))
            _fail(a_99);
          else
            z_98 = a_99;
        }
        {
          t = not_null(w_98);
          {
            ATerm d_99 = NULL;
            t = d_78(t);
            {
              b_99 = t;
              {
                ATerm j_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(b_99)), not_null(z_98));
                {
                  j_99 = t;
                  if(((d_99 != NULL) && (d_99 != j_99)))
                    _fail(j_99);
                  else
                    d_99 = j_99;
                }
                t = not_null(d_99);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL;
  u_99 = t;
  t_99 :
  if(match_cons(u_99, sym_App_2))
    {
      v_99 = ATgetArgument(u_99, 0);
      w_99 = ATgetArgument(u_99, 1);
      {
        ATerm a_100 = NULL,c_100 = NULL;
        ATerm b_100 = NULL;
        t = SSLgetAnnotations(not_null(u_99));
        {
          b_100 = t;
          if(((a_100 != NULL) && (a_100 != b_100)))
            _fail(b_100);
          else
            a_100 = b_100;
        }
        {
          t = not_null(v_99);
          {
            ATerm e_100 = NULL;
            t = b_78(t);
            {
              c_100 = t;
              {
                t = not_null(w_99);
                {
                  ATerm g_100 = NULL;
                  t = c_78(t);
                  {
                    e_100 = t;
                    {
                      ATerm i_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(c_100), not_null(e_100)), not_null(a_100));
                      {
                        i_100 = t;
                        if(((g_100 != NULL) && (g_100 != i_100)))
                          _fail(i_100);
                        else
                          g_100 = i_100;
                      }
                      t = not_null(g_100);
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
  ATerm s_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL;
  s_100 = t;
  r_100 :
  if(match_cons(s_100, sym__3))
    {
      v_100 = ATgetArgument(s_100, 0);
      w_100 = ATgetArgument(s_100, 1);
      x_100 = ATgetArgument(s_100, 2);
      {
        ATerm b_101 = NULL;
        ATerm x_30;
        x_30 = t;
        {
          ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_100), not_null(w_100));
          {
            t = table_get_0(t);
            {
              c_101 = t;
              q_100 :
              if(((ATgetType(c_101) == AT_LIST) && !(ATisEmpty(c_101))))
                {
                  d_101 = ATgetFirst((ATermList) c_101);
                  e_101 = (ATerm) ATgetNext((ATermList) c_101);
                  {
                    if(((b_101 != NULL) && (b_101 != e_101)))
                      _fail(e_101);
                    else
                      b_101 = e_101;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_100), not_null(w_100), (ATerm) ATinsert(CheckATermList(not_null(b_101)), not_null(x_100)));
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
        t = x_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm i_103 (ATerm))
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL;
  k_101 = t;
  j_101 :
  if(match_cons(k_101, sym__2))
    {
      l_101 = ATgetArgument(k_101, 0);
      m_101 = ATgetArgument(k_101, 1);
      {
        ATerm p_101 = NULL;
        ATerm y_30;
        y_30 = t;
        {
          ATerm q_101 = NULL;
          t = i_103(t);
          {
            q_101 = t;
            {
              if(((p_101 != NULL) && (p_101 != q_101)))
                _fail(q_101);
              else
                p_101 = q_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_101), not_null(l_101), not_null(m_101));
                t = table_replace_0(t);
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
ATerm Binding_0 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL;
  v_101 = t;
  u_101 :
  if(match_cons(v_101, sym_Var_1))
    {
      w_101 = ATgetArgument(v_101, 0);
      {
        ATerm z_30;
        z_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_101)), term_d_31);
          {
            ATerm w_4 (ATerm t)
            {
              t = term_m_28;
              return(t);
            }
            t = override_key_1(t, w_4);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm i_102 = NULL,j_102 = NULL;
  i_102 = t;
  h_102 :
  if(match_cons(i_102, sym_Var_1))
    {
      j_102 = ATgetArgument(i_102, 0);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_102 = NULL,o_102 = NULL;
            ATerm n_102 = NULL;
            t = SSLgetAnnotations(not_null(i_102));
            {
              n_102 = t;
              if(((m_102 != NULL) && (m_102 != n_102)))
                _fail(n_102);
              else
                m_102 = n_102;
            }
            {
              t = not_null(j_102);
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
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm u_102 = NULL,w_102 = NULL;
              ATerm v_102 = NULL;
              t = SSLgetAnnotations(not_null(i_102));
              {
                v_102 = t;
                if(((u_102 != NULL) && (u_102 != v_102)))
                  _fail(v_102);
                else
                  u_102 = v_102;
              }
              {
                t = not_null(j_102);
                {
                  ATerm y_102 = NULL;
                  t = s_0(t);
                  {
                    w_102 = t;
                    {
                      ATerm z_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_102)), not_null(u_102));
                      {
                        z_102 = t;
                        if(((y_102 != NULL) && (y_102 != z_102)))
                          _fail(z_102);
                        else
                          y_102 = z_102;
                      }
                      t = not_null(y_102);
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
ATerm Match_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL;
  w_103 = t;
  v_103 :
  if(match_cons(w_103, sym_Match_1))
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
            t = m_74(t);
            {
              c_104 = t;
              {
                ATerm f_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(c_104)), not_null(a_104));
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
ATerm Build_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm p_104 = NULL,r_104 = NULL;
  p_104 = t;
  o_104 :
  if(match_cons(p_104, sym_Build_1))
    {
      r_104 = ATgetArgument(p_104, 0);
      {
        ATerm v_104 = NULL,b_105 = NULL;
        ATerm a_105 = NULL;
        t = SSLgetAnnotations(not_null(p_104));
        {
          a_105 = t;
          if(((v_104 != NULL) && (v_104 != a_105)))
            _fail(a_105);
          else
            v_104 = a_105;
        }
        {
          t = not_null(r_104);
          {
            ATerm e_105 = NULL;
            t = n_74(t);
            {
              b_105 = t;
              {
                ATerm k_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(b_105)), not_null(v_104));
                {
                  k_105 = t;
                  if(((e_105 != NULL) && (e_105 != k_105)))
                    _fail(k_105);
                  else
                    e_105 = k_105;
                }
                t = not_null(e_105);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarScope_1 (ATerm t, ATerm z_113 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, z_113);
    return(t);
  }
  t = scope_2(t, x_4, y_4);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(r_31);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = q_31;
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(t_31);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = s_31;
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(v_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = u_31;
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
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL;
  v_105 = t;
  u_105 :
  if(match_cons(v_105, sym_SDef_3))
    {
      w_105 = ATgetArgument(v_105, 0);
      x_105 = ATgetArgument(v_105, 1);
      y_105 = ATgetArgument(v_105, 2);
      {
        ATerm m_32;
        m_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Defined_2, term_n_32, not_null(w_105)));
          {
            ATerm z_4 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = assert_1(t, z_4);
            {
              t = not_null(y_105);
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
    ATerm e_106 = NULL;
    e_106 = t;
    {
      ATerm o_32;
      o_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_106)), term_j_29);
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
ATerm Signature_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm p_106 = NULL,q_106 = NULL;
  p_106 = t;
  o_106 :
  if(match_cons(p_106, sym_Signature_1))
    {
      q_106 = ATgetArgument(p_106, 0);
      {
        ATerm t_106 = NULL,v_106 = NULL;
        ATerm u_106 = NULL;
        t = SSLgetAnnotations(not_null(p_106));
        {
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
        }
        {
          t = not_null(q_106);
          {
            ATerm x_106 = NULL;
            t = x_76(t);
            {
              v_106 = t;
              {
                ATerm y_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(v_106)), not_null(t_106));
                {
                  y_106 = t;
                  if(((x_106 != NULL) && (x_106 != y_106)))
                    _fail(y_106);
                  else
                    x_106 = y_106;
                }
                t = not_null(x_106);
              }
            }
          }
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
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
  y_107 = t;
  r_107 :
  if(match_cons(y_107, sym_Lets_2))
    {
      z_107 = ATgetArgument(y_107, 0);
      a_108 = ATgetArgument(y_107, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_107), not_null(a_108));
    }
  else
    {
      if(match_cons(y_107, sym_LChoices_1))
        {
          z_107 = ATgetArgument(y_107, 0);
          s_107 :
          if(((ATgetType(z_107) == AT_LIST) && !(ATisEmpty(z_107))))
            {
              v_107 = ATgetFirst((ATermList) z_107);
              w_107 = (ATerm) ATgetNext((ATermList) z_107);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_107), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(w_107)));
            }
          else
            {
              if(((ATgetType(z_107) == AT_LIST) && ATisEmpty(z_107)))
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
          if(match_cons(y_107, sym_Choices_1))
            {
              z_107 = ATgetArgument(y_107, 0);
              t_107 :
              if(((ATgetType(z_107) == AT_LIST) && !(ATisEmpty(z_107))))
                {
                  v_107 = ATgetFirst((ATermList) z_107);
                  w_107 = (ATerm) ATgetNext((ATermList) z_107);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_107), (ATerm) ATmakeAppl(sym_Choices_1, not_null(w_107)));
                }
              else
                {
                  if(((ATgetType(z_107) == AT_LIST) && ATisEmpty(z_107)))
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
              if(match_cons(y_107, sym_Seqs_1))
                {
                  z_107 = ATgetArgument(y_107, 0);
                  u_107 :
                  if(((ATgetType(z_107) == AT_LIST) && !(ATisEmpty(z_107))))
                    {
                      v_107 = ATgetFirst((ATermList) z_107);
                      w_107 = (ATerm) ATgetNext((ATermList) z_107);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_107), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_107)));
                    }
                  else
                    {
                      if(((ATgetType(z_107) == AT_LIST) && ATisEmpty(z_107)))
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
                  if(match_cons(y_107, sym_DefaultVarDec_1))
                    {
                      z_107 = ATgetArgument(y_107, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_107), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_20), term_c_20));
                    }
                  else
                    {
                      if(match_cons(y_107, sym_InfixApp_3))
                        {
                          z_107 = ATgetArgument(y_107, 0);
                          a_108 = ATgetArgument(y_107, 1);
                          x_107 = ATgetArgument(y_107, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_108), (ATerm) ATmakeAppl(sym_Op_2, term_l_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_107)), not_null(z_107))));
                        }
                      else
                        {
                          if(match_cons(y_107, sym_BAM_3))
                            {
                              z_107 = ATgetArgument(y_107, 0);
                              a_108 = ATgetArgument(y_107, 1);
                              x_107 = ATgetArgument(y_107, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_107))), not_null(z_107)), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_108))));
                            }
                          else
                            {
                              if(match_cons(y_107, sym_AM_2))
                                {
                                  z_107 = ATgetArgument(y_107, 0);
                                  a_108 = ATgetArgument(y_107, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_107), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_108)));
                                }
                              else
                                {
                                  if(match_cons(y_107, sym_MA_2))
                                    {
                                      z_107 = ATgetArgument(y_107, 0);
                                      a_108 = ATgetArgument(y_107, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_107)), not_null(a_108));
                                    }
                                  else
                                    {
                                      if(match_cons(y_107, sym_BA_2))
                                        {
                                          z_107 = ATgetArgument(y_107, 0);
                                          a_108 = ATgetArgument(y_107, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_108)), not_null(z_107));
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
ATerm topdown_1 (ATerm t, ATerm n_86 (ATerm))
{
  t = n_86(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = topdown_1(t, n_86);
      return(t);
    }
    t = _all(t, n_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
  t_109 = t;
  q_109 :
  if(match_cons(t_109, sym__2))
    {
      u_109 = ATgetArgument(t_109, 0);
      x_109 = ATgetArgument(t_109, 1);
      r_109 :
      if(match_cons(u_109, sym__2))
        {
          v_109 = ATgetArgument(u_109, 0);
          w_109 = ATgetArgument(u_109, 1);
          s_109 :
          if(match_cons(x_109, sym__2))
            {
              y_109 = ATgetArgument(x_109, 0);
              z_109 = ATgetArgument(x_109, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_109)), not_null(v_109)), (ATerm) ATinsert(CheckATermList(not_null(z_109)), not_null(w_109)));
            }
          else
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
  ATerm e_111 = NULL,f_111 = NULL,h_111 = NULL;
  e_111 = t;
  d_111 :
  if(((ATgetType(e_111) == AT_LIST) && !(ATisEmpty(e_111))))
    {
      f_111 = ATgetFirst((ATermList) e_111);
      h_111 = (ATerm) ATgetNext((ATermList) e_111);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_111), not_null(h_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_111 = NULL;
  n_111 = t;
  m_111 :
  if(((ATgetType(n_111) == AT_LIST) && ATisEmpty(n_111)))
    {
      t = term_v_33;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_95);
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
  ATerm t_111 = NULL,u_111 = NULL;
  t_111 = t;
  s_111 :
  if(match_cons(t_111, sym_Var_1))
    {
      u_111 = ATgetArgument(t_111, 0);
      {
        ATerm x_111 = NULL,y_111 = NULL;
        t = not_null(t_111);
        {
          ATerm o_5 (ATerm t)
          {
            t = term_k_34;
            return(t);
          }
          t = rewrite_1(t, o_5);
          {
            x_111 = t;
            q_111 :
            if(match_cons(x_111, sym_Defined_1))
              {
                y_111 = ATgetArgument(x_111, 0);
                r_111 :
                if(!(match_string(y_111, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_111));
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
    ATerm b_112 = NULL;
    ATerm c_112 = NULL;
    c_112 = t;
    if(((b_112 != NULL) && (b_112 != c_112)))
      _fail(c_112);
    else
      b_112 = c_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, not_null(b_112));
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
    ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL;
    z_112 = t;
    y_112 :
    if(match_cons(z_112, sym_Var_1))
      {
        a_113 = ATgetArgument(z_112, 0);
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
        if(match_cons(z_112, sym_Wld_0))
          {
            t = term_p_34;
          }
        else
          {
            if(match_cons(z_112, sym_RootApp_1))
              {
                a_113 = ATgetArgument(z_112, 0);
                {
                  ATerm f_113 = NULL;
                  ATerm i_113 = NULL;
                  t = not_null(a_113);
                  {
                    t = tvars_0(t);
                    {
                      ATerm q_5 (ATerm t)
                      {
                        ATerm g_113 = NULL;
                        ATerm h_113 = NULL;
                        h_113 = t;
                        if(((g_113 != NULL) && (g_113 != h_113)))
                          _fail(h_113);
                        else
                          g_113 = h_113;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_113));
                        return(t);
                      }
                      t = map_1(t, q_5);
                      {
                        i_113 = t;
                        if(((f_113 != NULL) && (f_113 != i_113)))
                          _fail(i_113);
                        else
                          f_113 = i_113;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_34, not_null(f_113));
                }
              }
            else
              {
                if(match_cons(z_112, sym_App_2))
                  {
                    a_113 = ATgetArgument(z_112, 0);
                    b_113 = ATgetArgument(z_112, 1);
                    {
                      ATerm l_113 = NULL;
                      ATerm o_113 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_113), not_null(b_113));
                      {
                        t = tvars_0(t);
                        {
                          ATerm r_5 (ATerm t)
                          {
                            ATerm m_113 = NULL;
                            ATerm n_113 = NULL;
                            n_113 = t;
                            if(((m_113 != NULL) && (m_113 != n_113)))
                              _fail(n_113);
                            else
                              m_113 = n_113;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_113));
                            return(t);
                          }
                          t = map_1(t, r_5);
                          {
                            o_113 = t;
                            if(((l_113 != NULL) && (l_113 != o_113)))
                              _fail(o_113);
                            else
                              l_113 = o_113;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_q_34, not_null(l_113));
                    }
                  }
                else
                  {
                    if(match_cons(z_112, sym_Con_3))
                      {
                        a_113 = ATgetArgument(z_112, 0);
                        b_113 = ATgetArgument(z_112, 1);
                        c_113 = ATgetArgument(z_112, 2);
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
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  ATerm l_117 (ATerm t)
  {
    ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,i_117 = NULL;
    ATerm s_34;
    s_34 = t;
    {
      ATerm w_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_115), term_w_34);
      {
        ATerm x_34 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_34;
          }
        {
          ATerm x_116 = NULL;
          t = new_0(t);
          {
            w_116 = t;
            {
              if(((p_116 != NULL) && (p_116 != w_116)))
                _fail(w_116);
              else
                p_116 = w_116;
              {
                t = not_null(u_115);
                {
                  ATerm z_116 = NULL;
                  t = dummify_0(t);
                  {
                    x_116 = t;
                    {
                      if(((r_116 != NULL) && (r_116 != x_116)))
                        _fail(x_116);
                      else
                        r_116 = x_116;
                      {
                        ATerm c_117 = NULL;
                        ATerm y_34 = t;
                        int z_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_116 = NULL;
                            y_116 = t;
                            {
                              if(((u_115 != NULL) && (u_115 != y_116)))
                                _fail(y_116);
                              else
                                u_115 = y_116;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_116));
                            }
                            LocalPopChoice(z_34);
                          }
                        else
                          {
                            t = y_34;
                            {
                            }
                          }
                        {
                          z_116 = t;
                          {
                            if(((q_116 != NULL) && (q_116 != z_116)))
                              _fail(z_116);
                            else
                              q_116 = z_116;
                            {
                              t = not_null(r_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm f_117 = NULL;
                                  ATerm s_5 (ATerm t)
                                  {
                                    ATerm a_117 = NULL;
                                    ATerm b_117 = NULL;
                                    b_117 = t;
                                    if(((a_117 != NULL) && (a_117 != b_117)))
                                      _fail(b_117);
                                    else
                                      a_117 = b_117;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_117));
                                    return(t);
                                  }
                                  t = map_1(t, s_5);
                                  {
                                    c_117 = t;
                                    {
                                      if(((t_116 != NULL) && (t_116 != c_117)))
                                        _fail(c_117);
                                      else
                                        t_116 = c_117;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_115), not_null(w_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm g_117 = NULL;
                                            ATerm t_5 (ATerm t)
                                            {
                                              ATerm d_117 = NULL;
                                              ATerm e_117 = NULL;
                                              e_117 = t;
                                              if(((d_117 != NULL) && (d_117 != e_117)))
                                                _fail(e_117);
                                              else
                                                d_117 = e_117;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_117));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, t_5);
                                            {
                                              f_117 = t;
                                              {
                                                if(((s_116 != NULL) && (s_116 != f_117)))
                                                  _fail(f_117);
                                                else
                                                  s_116 = f_117;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_116), not_null(t_116));
                                                  {
                                                    ATerm h_117 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      g_117 = t;
                                                      {
                                                        if(((u_116 != NULL) && (u_116 != g_117)))
                                                          _fail(g_117);
                                                        else
                                                          u_116 = g_117;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            h_117 = t;
                                                            if(((v_116 != NULL) && (v_116 != h_117)))
                                                              _fail(h_117);
                                                            else
                                                              v_116 = h_117;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
      ATerm j_117 = NULL;
      t = not_null(r_115);
      {
        t = q_0(t);
        {
          j_117 = t;
          if(((i_117 != NULL) && (i_117 != j_117)))
            _fail(j_117);
          else
            i_117 = j_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_117), (ATerm) ATmakeAppl(sym_Op_2, term_a_35, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(CheckATermList(not_null(u_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_116))))), not_null(r_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_115), not_null(s_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_116)), not_null(u_115)), not_null(v_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_115))))), not_null(q_116)), (ATerm) ATmakeAppl(sym_Op_2, term_b_35, (ATerm) ATinsert(CheckATermList(not_null(u_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_116))))), not_null(w_115)))));
    }
    return(t);
  }
  q_115 = t;
  i_115 :
  if(match_cons(q_115, sym_RDef_3))
    {
      r_115 = ATgetArgument(q_115, 0);
      s_115 = ATgetArgument(q_115, 1);
      t_115 = ATgetArgument(q_115, 2);
      j_115 :
      if(match_cons(t_115, sym_Rule_3))
        {
          u_115 = ATgetArgument(t_115, 0);
          v_115 = ATgetArgument(t_115, 1);
          w_115 = ATgetArgument(t_115, 2);
          k_115 :
          if(match_cons(v_115, sym_Op_2))
            {
              o_115 = ATgetArgument(v_115, 0);
              p_115 = ATgetArgument(v_115, 1);
              l_115 :
              if(((ATgetType(p_115) == AT_LIST) && ATisEmpty(p_115)))
                {
                  m_115 :
                  if(match_string(o_115, "Undefined"))
                    {
                      ATerm p_35 = t;
                      int e_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_116 = NULL,c_116 = NULL,d_116 = NULL,i_116 = NULL;
                          ATerm f_36;
                          f_36 = t;
                          {
                            ATerm e_116 = NULL;
                            ATerm f_116 = NULL;
                            t = new_0(t);
                            {
                              e_116 = t;
                              {
                                if(((c_116 != NULL) && (c_116 != e_116)))
                                  _fail(e_116);
                                else
                                  c_116 = e_116;
                                {
                                  t = not_null(u_115);
                                  {
                                    ATerm h_116 = NULL;
                                    t = dummify_0(t);
                                    {
                                      f_116 = t;
                                      {
                                        if(((b_116 != NULL) && (b_116 != f_116)))
                                          _fail(f_116);
                                        else
                                          b_116 = f_116;
                                        {
                                          ATerm g_36 = t;
                                          int h_36 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm g_116 = NULL;
                                              g_116 = t;
                                              {
                                                if(((u_115 != NULL) && (u_115 != g_116)))
                                                  _fail(g_116);
                                                else
                                                  u_115 = g_116;
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_116));
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
                                            h_116 = t;
                                            if(((d_116 != NULL) && (d_116 != h_116)))
                                              _fail(h_116);
                                            else
                                              d_116 = h_116;
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
                            ATerm j_116 = NULL;
                            t = not_null(r_115);
                            {
                              t = q_0(t);
                              {
                                j_116 = t;
                                if(((i_116 != NULL) && (i_116 != j_116)))
                                  _fail(j_116);
                                else
                                  i_116 = j_116;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_116), (ATerm) ATmakeAppl(sym_Op_2, term_a_35, (ATerm) ATinsert(ATinsert(ATempty, term_w_34), not_null(b_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_115), not_null(s_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_116)), not_null(u_115)), term_w_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_115))))), not_null(d_116)), term_w_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_115), term_r_33)))));
                          }
                          LocalPopChoice(e_36);
                        }
                      else
                        {
                          t = p_35;
                          t = l_117(t);
                        }
                    }
                  else
                    {
                      t = l_117(t);
                    }
                }
              else
                {
                  n_115 :
                  t = l_117(t);
                }
            }
          else
            {
              t = l_117(t);
            }
        }
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
  ATerm h_118 = NULL,i_118 = NULL;
  h_118 = t;
  g_118 :
  if(match_cons(h_118, sym_OverrideDynamicRules_1))
    {
      i_118 = ATgetArgument(h_118, 0);
      {
        t = not_null(i_118);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm v_5 (ATerm t)
            {
              ATerm k_118 = NULL;
              ATerm l_118 = NULL;
              l_118 = t;
              if(((k_118 != NULL) && (k_118 != l_118)))
                _fail(l_118);
              else
                k_118 = l_118;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_118)))));
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
      if(match_cons(h_118, sym_DynamicRules_1))
        {
          i_118 = ATgetArgument(h_118, 0);
          {
            t = not_null(i_118);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm n_118 = NULL;
                  ATerm o_118 = NULL;
                  o_118 = t;
                  if(((n_118 != NULL) && (n_118 != o_118)))
                    _fail(o_118);
                  else
                    n_118 = o_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_118)))));
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
ATerm split_under_scope_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
  w_118 = t;
  v_118 :
  if(match_cons(w_118, sym_Scope_2))
    {
      x_118 = ATgetArgument(w_118, 0);
      y_118 = ATgetArgument(w_118, 1);
      {
        ATerm b_119 = NULL;
        ATerm y_5 (ATerm t)
        {
          t = term_k_34;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          ATerm c_119 = NULL;
          t = not_null(x_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(y_118);
              {
                t = r_112(t);
                {
                  c_119 = t;
                  if(((b_119 != NULL) && (b_119 != c_119)))
                    _fail(c_119);
                  else
                    b_119 = c_119;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, y_5, z_5);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_118), not_null(b_119));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm f_119 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_88(t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = _one(t, f_119);
      }
    return(t);
  }
  t = f_119(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm p_112 (ATerm))
{
  ATerm g_119 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm u_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_112(t);
          LocalPopChoice(v_36);
        }
      else
        {
          t = u_36;
          t = split_under_scope_1(t, g_119);
        }
      return(t);
    }
    t = oncetd_1(t, a_6);
    return(t);
  }
  t = g_119(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm i_119 = NULL;
    i_119 = t;
    {
      ATerm w_36;
      w_36 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_119)), term_y_36);
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
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL;
  q_119 = t;
  p_119 :
  if(((ATgetType(q_119) == AT_LIST) && !(ATisEmpty(q_119))))
    {
      r_119 = ATgetFirst((ATermList) q_119);
      s_119 = (ATerm) ATgetNext((ATermList) q_119);
      {
        ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = term_k_34;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          ATerm b_120 = NULL;
          t = not_null(r_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(r_119);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      y_119 = t;
                      n_119 :
                      if(match_cons(y_119, sym__2))
                        {
                          z_119 = ATgetArgument(y_119, 0);
                          a_120 = ATgetArgument(y_119, 1);
                          {
                            if(((w_119 != NULL) && (w_119 != z_119)))
                              _fail(z_119);
                            else
                              w_119 = z_119;
                            {
                              if(((v_119 != NULL) && (v_119 != a_120)))
                                _fail(a_120);
                              else
                                v_119 = a_120;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_119));
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
                    b_120 = t;
                    if(((x_119 != NULL) && (x_119 != b_120)))
                      _fail(b_120);
                    else
                      x_119 = b_120;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, d_6, e_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_119)), not_null(x_119)), not_null(s_119));
          {
            ATerm z_36 = t;
            int a_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(a_37);
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
ATerm repeat_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm f_120 (ATerm t)
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        t = f_120(t);
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = o_85(t);
      }
    return(t);
  }
  t = f_120(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_85 (ATerm))
{
  t = repeat_2(t, q_85, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm g_120 (ATerm t)
  {
    t = x_93(t);
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          t = Cons_2(t, _id, g_120);
        }
    }
    return(t);
  }
  t = g_120(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = repeat_2(t, lift_dynamic_rule_0, _id);
    return(t);
  }
  t = listtd_1(t, g_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  n_120 = t;
  j_120 :
  if(match_cons(n_120, sym_DynRuleScope_2))
    {
      o_120 = ATgetArgument(n_120, 0);
      p_120 = ATgetArgument(n_120, 1);
      k_120 :
      if(((ATgetType(o_120) == AT_LIST) && !(ATisEmpty(o_120))))
        {
          l_120 = ATgetFirst((ATermList) o_120);
          m_120 = (ATerm) ATgetNext((ATermList) o_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_i_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(m_120), not_null(p_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_120)))));
        }
      else
        {
          if(((ATgetType(o_120) == AT_LIST) && ATisEmpty(o_120)))
            {
              t = not_null(p_120);
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
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DefDynamicRuleScope_0(t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
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
  ATerm z_120 = NULL,a_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_cons(z_120, sym_ScopeDefault_1))
    {
      a_121 = ATgetArgument(z_120, 0);
      {
        ATerm c_121 = NULL;
        ATerm d_121 = NULL;
        t = not_null(a_121);
        {
          t = tvars_0(t);
          {
            d_121 = t;
            if(((c_121 != NULL) && (c_121 != d_121)))
              _fail(d_121);
            else
              c_121 = d_121;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_121), not_null(a_121));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm l_121 = NULL,m_121 = NULL;
  l_121 = t;
  k_121 :
  if(match_cons(l_121, sym_DynamicRules_1))
    {
      m_121 = ATgetArgument(l_121, 0);
      {
        ATerm p_121 = NULL,r_121 = NULL;
        ATerm q_121 = NULL;
        t = SSLgetAnnotations(not_null(l_121));
        {
          q_121 = t;
          if(((p_121 != NULL) && (p_121 != q_121)))
            _fail(q_121);
          else
            p_121 = q_121;
        }
        {
          t = not_null(m_121);
          {
            ATerm t_121 = NULL;
            t = w_77(t);
            {
              r_121 = t;
              {
                ATerm u_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(r_121)), not_null(p_121));
                {
                  u_121 = t;
                  if(((t_121 != NULL) && (t_121 != u_121)))
                    _fail(u_121);
                  else
                    t_121 = u_121;
                }
                t = not_null(t_121);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  f_122 = t;
  e_122 :
  if(match_cons(f_122, sym_Scope_2))
    {
      g_122 = ATgetArgument(f_122, 0);
      h_122 = ATgetArgument(f_122, 1);
      {
        ATerm l_122 = NULL,n_122 = NULL;
        ATerm m_122 = NULL;
        t = SSLgetAnnotations(not_null(f_122));
        {
          m_122 = t;
          if(((l_122 != NULL) && (l_122 != m_122)))
            _fail(m_122);
          else
            l_122 = m_122;
        }
        {
          t = not_null(g_122);
          {
            ATerm p_122 = NULL;
            t = q_74(t);
            {
              n_122 = t;
              {
                t = not_null(h_122);
                {
                  ATerm r_122 = NULL;
                  t = r_74(t);
                  {
                    p_122 = t;
                    {
                      ATerm s_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_122), not_null(p_122)), not_null(l_122));
                      {
                        s_122 = t;
                        if(((r_122 != NULL) && (r_122 != s_122)))
                          _fail(s_122);
                        else
                          r_122 = s_122;
                      }
                      t = not_null(r_122);
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
ATerm tboundin_3 (ATerm t, ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm))
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, t_113, r_113);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      t = DynamicRules_1(t, r_113);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm a_123 = NULL,b_123 = NULL;
  a_123 = t;
  z_122 :
  if(match_cons(a_123, sym_DynamicRules_1))
    {
      b_123 = ATgetArgument(a_123, 0);
      {
        t = not_null(b_123);
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
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL;
  l_123 = t;
  g_123 :
  if(match_cons(l_123, sym_LRule_1))
    {
      m_123 = ATgetArgument(l_123, 0);
      h_123 :
      if(match_cons(m_123, sym_Rule_3))
        {
          i_123 = ATgetArgument(m_123, 0);
          j_123 = ATgetArgument(m_123, 1);
          k_123 = ATgetArgument(m_123, 2);
          {
            t = not_null(i_123);
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
      if(match_cons(l_123, sym_Scope_2))
        {
          m_123 = ATgetArgument(l_123, 0);
          n_123 = ATgetArgument(l_123, 1);
          t = not_null(m_123);
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
  ATerm x_123 = NULL,y_123 = NULL;
  x_123 = t;
  w_123 :
  if(match_cons(x_123, sym_Var_1))
    {
      y_123 = ATgetArgument(x_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(y_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_98 (ATerm))
{
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL;
  d_124 = t;
  c_124 :
  if(match_cons(d_124, sym__2))
    {
      e_124 = ATgetArgument(d_124, 0);
      f_124 = ATgetArgument(d_124, 1);
      {
        t = not_null(e_124);
        {
          ATerm j_124 (ATerm t)
          {
            ATerm q_37 = t;
            int r_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_124);
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
                        t = not_null(f_124);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_98, n_6);
                      t = j_124(t);
                      LocalPopChoice(t_37);
                    }
                  else
                    {
                      t = s_37;
                      t = Cons_2(t, _id, j_124);
                    }
                }
              }
            return(t);
          }
          t = j_124(t);
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
ATerm crush_3 (ATerm t, ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm))
{
  ATerm o_124 = NULL;
  ATerm q_124 = NULL;
  o_124 = t;
  {
    ATerm r_124 = NULL;
    ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL;
    t = not_null(o_124);
    {
      r_124 = t;
      {
        t = SSL_explode_term(not_null(r_124));
        {
          t_124 = t;
          n_124 :
          if(match_cons(t_124, sym__2))
            {
              u_124 = ATgetArgument(t_124, 0);
              v_124 = ATgetArgument(t_124, 1);
              if(((q_124 != NULL) && (q_124 != v_124)))
                _fail(v_124);
              else
                q_124 = v_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_124);
      t = foldr_3(t, e_98, f_98, g_98);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL;
  b_125 = t;
  a_125 :
  if(match_cons(b_125, sym__2))
    {
      c_125 = ATgetArgument(b_125, 0);
      d_125 = ATgetArgument(b_125, 1);
      if(((c_125 != NULL) && (c_125 != d_125)))
        _fail(d_125);
      else
        c_125 = d_125;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm))
{
  ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL;
  j_125 = t;
  i_125 :
  if(((ATgetType(j_125) == AT_LIST) && !(ATisEmpty(j_125))))
    {
      k_125 = ATgetFirst((ATermList) j_125);
      l_125 = (ATerm) ATgetNext((ATermList) j_125);
      {
        t = s_98(t);
        {
          ATerm o_6 (ATerm t)
          {
            ATerm o_125 = NULL;
            o_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_125), not_null(o_125));
              t = r_98(t);
            }
            return(t);
          }
          t = fetch_1(t, o_6);
        }
        t = not_null(l_125);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL;
  u_125 = t;
  t_125 :
  if(match_cons(u_125, sym__2))
    {
      v_125 = ATgetArgument(u_125, 0);
      w_125 = ATgetArgument(u_125, 1);
      {
        t = not_null(v_125);
        {
          ATerm a_126 (ATerm t)
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
                  ATerm w_37 = t;
                  int x_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_6 (ATerm t)
                      {
                        t = not_null(w_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_98, p_6);
                      t = a_126(t);
                      LocalPopChoice(x_37);
                    }
                  else
                    {
                      t = w_37;
                      t = Cons_2(t, _id, a_126);
                    }
                }
              }
            return(t);
          }
          t = a_126(t);
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
  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL;
  e_126 = t;
  c_126 :
  if(match_cons(e_126, sym__2))
    {
      f_126 = ATgetArgument(e_126, 0);
      g_126 = ATgetArgument(e_126, 1);
      d_126 :
      if(((ATgetType(g_126) == AT_LIST) && !(ATisEmpty(g_126))))
        {
          h_126 = ATgetFirst((ATermList) g_126);
          i_126 = (ATerm) ATgetNext((ATermList) g_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_126)), not_null(h_126)), not_null(i_126));
        }
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
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym__2))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_126)), not_null(q_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL;
  z_126 = t;
  w_126 :
  if(match_cons(z_126, sym__2))
    {
      a_127 = ATgetArgument(z_126, 0);
      d_127 = ATgetArgument(z_126, 1);
      x_126 :
      if(((ATgetType(a_127) == AT_LIST) && !(ATisEmpty(a_127))))
        {
          b_127 = ATgetFirst((ATermList) a_127);
          c_127 = (ATerm) ATgetNext((ATermList) a_127);
          y_126 :
          if(((ATgetType(d_127) == AT_LIST) && !(ATisEmpty(d_127))))
            {
              e_127 = ATgetFirst((ATermList) d_127);
              f_127 = (ATerm) ATgetNext((ATermList) d_127);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_127), not_null(e_127)), (ATerm) ATmakeAppl(sym__2, not_null(c_127), not_null(f_127)));
            }
          else
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
  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL;
  p_127 = t;
  m_127 :
  if(match_cons(p_127, sym__2))
    {
      q_127 = ATgetArgument(p_127, 0);
      r_127 = ATgetArgument(p_127, 1);
      n_127 :
      if(((ATgetType(q_127) == AT_LIST) && ATisEmpty(q_127)))
        {
          o_127 :
          if(((ATgetType(r_127) == AT_LIST) && ATisEmpty(r_127)))
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
ATerm genzip_4 (ATerm t, ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm t_127 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_94(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          t = s_94(t);
          {
            t = _2(t, u_94, t_127);
            t = t_94(t);
          }
        }
      }
    return(t);
  }
  t = t_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_94 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_94);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL;
  e_128 = t;
  c_128 :
  if(((ATgetType(e_128) == AT_LIST) && !(ATisEmpty(e_128))))
    {
      f_128 = ATgetFirst((ATermList) e_128);
      i_128 = (ATerm) ATgetNext((ATermList) e_128);
      d_128 :
      if(match_cons(f_128, sym__2))
        {
          g_128 = ATgetArgument(f_128, 0);
          h_128 = ATgetArgument(f_128, 1);
          {
            ATerm m_128 = NULL,n_128 = NULL,t_128 = NULL,z_128 = NULL;
            ATerm b_38;
            b_38 = t;
            {
              ATerm o_128 = NULL;
              ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL;
              t = not_null(h_128);
              {
                o_128 = t;
                {
                  t = SSL_explode_term(not_null(o_128));
                  {
                    q_128 = t;
                    x_127 :
                    if(match_cons(q_128, sym__2))
                      {
                        r_128 = ATgetArgument(q_128, 0);
                        s_128 = ATgetArgument(q_128, 1);
                        {
                          if(((m_128 != NULL) && (m_128 != r_128)))
                            _fail(r_128);
                          else
                            m_128 = r_128;
                          if(((n_128 != NULL) && (n_128 != s_128)))
                            _fail(s_128);
                          else
                            n_128 = s_128;
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
            t = b_38;
            {
              ATerm c_38;
              c_38 = t;
              {
                ATerm u_128 = NULL;
                ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
                t = not_null(g_128);
                {
                  u_128 = t;
                  {
                    t = SSL_explode_term(not_null(u_128));
                    {
                      w_128 = t;
                      a_128 :
                      if(match_cons(w_128, sym__2))
                        {
                          x_128 = ATgetArgument(w_128, 0);
                          y_128 = ATgetArgument(w_128, 1);
                          {
                            if(((m_128 != NULL) && (m_128 != x_128)))
                              _fail(x_128);
                            else
                              m_128 = x_128;
                            if(((t_128 != NULL) && (t_128 != y_128)))
                              _fail(y_128);
                            else
                              t_128 = y_128;
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
              t = c_38;
              {
                ATerm a_129 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_128), not_null(n_128));
                {
                  t = zip_1(t, _id);
                  {
                    a_129 = t;
                    if(((z_128 != NULL) && (z_128 != a_129)))
                      _fail(a_129);
                    else
                      z_128 = a_129;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_128), not_null(i_128));
                  {
                    ATerm d_38 = t;
                    int e_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(e_38);
                      }
                    else
                      {
                        t = d_38;
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
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL;
  k_129 = t;
  i_129 :
  if(((ATgetType(k_129) == AT_LIST) && !(ATisEmpty(k_129))))
    {
      l_129 = ATgetFirst((ATermList) k_129);
      o_129 = (ATerm) ATgetNext((ATermList) k_129);
      j_129 :
      if(match_cons(l_129, sym__2))
        {
          m_129 = ATgetArgument(l_129, 0);
          n_129 = ATgetArgument(l_129, 1);
          {
            ATerm q_129 = NULL;
            if(((m_129 != NULL) && (m_129 != n_129)))
              _fail(n_129);
            else
              m_129 = n_129;
            {
              if(((q_129 != NULL) && (q_129 != o_129)))
                _fail(o_129);
              else
                q_129 = o_129;
              t = not_null(q_129);
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
ATerm while_not_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm s_129 (ATerm t)
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_86(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        {
          t = f_86(t);
          t = s_129(t);
        }
      }
    return(t);
  }
  t = s_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  t = h_86(t);
  t = while_not_2(t, i_86, j_86);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm h_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm u_129 = NULL;
        u_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_129));
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
      LocalPopChoice(k_38);
    }
  else
    {
      t = h_38;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_130 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_112(t);
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
              ATerm y_129 = NULL;
              ATerm x_38;
              x_38 = t;
              {
                ATerm z_129 = NULL;
                t = h_112(t);
                {
                  z_129 = t;
                  if(((y_129 != NULL) && (y_129 != z_129)))
                    _fail(z_129);
                  else
                    y_129 = z_129;
                }
              }
              t = x_38;
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm w_6 (ATerm t)
                  {
                    t = not_null(y_129);
                    return(t);
                  }
                  t = split_2(t, a_130, w_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_112(t, u_6, a_130, v_6);
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
                t = crush_3(t, z_6, a_7, a_130);
              }
            }
        }
      }
    return(t);
  }
  t = a_130(t);
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
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL;
  g_130 = t;
  e_130 :
  if(match_cons(g_130, sym_LRule_1))
    {
      h_130 = ATgetArgument(g_130, 0);
      f_130 :
      if(match_cons(h_130, sym_Rule_3))
        {
          i_130 = ATgetArgument(h_130, 0);
          j_130 = ATgetArgument(h_130, 1);
          k_130 = ATgetArgument(h_130, 2);
          {
            ATerm o_130 = NULL;
            ATerm p_130 = NULL;
            t = not_null(i_130);
            {
              t = tvars_0(t);
              {
                p_130 = t;
                if(((o_130 != NULL) && (o_130 != p_130)))
                  _fail(p_130);
                else
                  o_130 = p_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_130), not_null(j_130), not_null(k_130))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = bottomup_1(t, o_86);
    return(t);
  }
  t = _all(t, c_7);
  t = o_86(t);
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
  ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL;
  u_130 = t;
  t_130 :
  if(((ATgetType(u_130) == AT_LIST) && !(ATisEmpty(u_130))))
    {
      v_130 = ATgetFirst((ATermList) u_130);
      w_130 = (ATerm) ATgetNext((ATermList) u_130);
      t = not_null(v_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_131 = NULL,c_131 = NULL,d_131 = NULL;
  b_131 = t;
  a_131 :
  if(match_cons(b_131, sym__2))
    {
      c_131 = ATgetArgument(b_131, 0);
      d_131 = ATgetArgument(b_131, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_131), not_null(d_131));
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
ATerm rewrite_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm j_131 = NULL;
  ATerm l_131 = NULL;
  j_131 = t;
  {
    ATerm m_131 = NULL;
    t = term_l_39;
    {
      t = j_103(t);
      {
        m_131 = t;
        if(((l_131 != NULL) && (l_131 != m_131)))
          _fail(m_131);
        else
          l_131 = m_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_131), not_null(j_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm w_131 = NULL,y_131 = NULL;
  w_131 = t;
  v_131 :
  if(match_cons(w_131, sym_Var_1))
    {
      y_131 = ATgetArgument(w_131, 0);
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_132 = NULL,c_132 = NULL;
            t = not_null(w_131);
            {
              ATerm e_7 (ATerm t)
              {
                t = term_o_39;
                return(t);
              }
              t = rewrite_1(t, e_7);
              {
                b_132 = t;
                r_131 :
                if(match_cons(b_132, sym_Defined_1))
                  {
                    c_132 = ATgetArgument(b_132, 0);
                    s_131 :
                    if(!(match_string(c_132, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_131), (ATerm) ATempty);
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            {
              ATerm g_132 = NULL,h_132 = NULL;
              t = not_null(w_131);
              {
                ATerm f_7 (ATerm t)
                {
                  t = term_o_39;
                  return(t);
                }
                t = rewrite_1(t, f_7);
                {
                  g_132 = t;
                  t_131 :
                  if(match_cons(g_132, sym_Defined_1))
                    {
                      h_132 = ATgetArgument(g_132, 0);
                      u_131 :
                      if(!(match_string(h_132, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_131), (ATerm) ATempty);
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm r_88 (ATerm))
{
  ATerm k_132 (ATerm t)
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_88(t);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = _all(t, k_132);
      }
    return(t);
  }
  t = k_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_103 (ATerm))
{
  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL;
  q_132 = t;
  p_132 :
  if(match_cons(q_132, sym__2))
    {
      r_132 = ATgetArgument(q_132, 0);
      s_132 = ATgetArgument(q_132, 1);
      {
        ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL;
        ATerm r_39;
        r_39 = t;
        {
          ATerm y_132 = NULL;
          ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
          t = h_103(t);
          {
            y_132 = t;
            {
              if(((v_132 != NULL) && (v_132 != y_132)))
                _fail(y_132);
              else
                v_132 = y_132;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_132), not_null(r_132), not_null(s_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_39 = t;
                    int v_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_132), term_w_39);
                        t = table_get_0(t);
                        LocalPopChoice(v_39);
                      }
                    else
                      {
                        t = s_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_132 = t;
                      o_132 :
                      if(((ATgetType(z_132) == AT_LIST) && !(ATisEmpty(z_132))))
                        {
                          a_133 = ATgetFirst((ATermList) z_132);
                          b_133 = (ATerm) ATgetNext((ATermList) z_132);
                          {
                            if(((w_132 != NULL) && (w_132 != a_133)))
                              _fail(a_133);
                            else
                              w_132 = a_133;
                            {
                              if(((x_132 != NULL) && (x_132 != b_133)))
                                _fail(b_133);
                              else
                                x_132 = b_133;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_132), term_w_39, (ATerm) ATinsert(CheckATermList(not_null(x_132)), (ATerm) ATinsert(CheckATermList(not_null(w_132)), not_null(r_132))));
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
  ATerm n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL;
  o_133 = t;
  i_133 :
  if(match_cons(o_133, sym_Overlay_3))
    {
      p_133 = ATgetArgument(o_133, 0);
      q_133 = ATgetArgument(o_133, 1);
      n_133 = ATgetArgument(o_133, 2);
      j_133 :
      if(((ATgetType(q_133) == AT_LIST) && ATisEmpty(q_133)))
        {
          {
            ATerm b_40;
            b_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_133)), term_k_40);
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
      if(match_cons(o_133, sym_OpDecl_2))
        {
          p_133 = ATgetArgument(o_133, 0);
          q_133 = ATgetArgument(o_133, 1);
          m_133 :
          if(match_cons(q_133, sym_ConstType_1))
            {
              r_133 = ATgetArgument(q_133, 0);
              {
                ATerm l_40;
                l_40 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_133)), term_k_41);
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
ATerm Overlays_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm d_134 = NULL,e_134 = NULL;
  d_134 = t;
  c_134 :
  if(match_cons(d_134, sym_Overlays_1))
    {
      e_134 = ATgetArgument(d_134, 0);
      {
        ATerm h_134 = NULL,j_134 = NULL;
        ATerm i_134 = NULL;
        t = SSLgetAnnotations(not_null(d_134));
        {
          i_134 = t;
          if(((h_134 != NULL) && (h_134 != i_134)))
            _fail(i_134);
          else
            h_134 = i_134;
        }
        {
          t = not_null(e_134);
          {
            ATerm l_134 = NULL;
            t = y_76(t);
            {
              j_134 = t;
              {
                ATerm o_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(j_134)), not_null(h_134));
                {
                  o_134 = t;
                  if(((l_134 != NULL) && (l_134 != o_134)))
                    _fail(o_134);
                  else
                    l_134 = o_134;
                }
                t = not_null(l_134);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Constructors_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm y_134 = NULL,z_134 = NULL;
  y_134 = t;
  x_134 :
  if(match_cons(y_134, sym_Constructors_1))
    {
      z_134 = ATgetArgument(y_134, 0);
      {
        ATerm c_135 = NULL,e_135 = NULL;
        ATerm d_135 = NULL;
        t = SSLgetAnnotations(not_null(y_134));
        {
          d_135 = t;
          if(((c_135 != NULL) && (c_135 != d_135)))
            _fail(d_135);
          else
            c_135 = d_135;
        }
        {
          t = not_null(z_134);
          {
            ATerm g_135 = NULL;
            t = t_76(t);
            {
              e_135 = t;
              {
                ATerm h_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(e_135)), not_null(c_135));
                {
                  h_135 = t;
                  if(((g_135 != NULL) && (g_135 != h_135)))
                    _fail(h_135);
                  else
                    g_135 = h_135;
                }
                t = not_null(g_135);
              }
            }
          }
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
  ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL;
  p_135 = t;
  o_135 :
  if(((ATgetType(p_135) == AT_LIST) && !(ATisEmpty(p_135))))
    {
      q_135 = ATgetFirst((ATermList) p_135);
      r_135 = (ATerm) ATgetNext((ATermList) p_135);
      t = not_null(r_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL;
  z_135 = t;
  y_135 :
  if(match_cons(z_135, sym__2))
    {
      a_136 = ATgetArgument(z_135, 0);
      b_136 = ATgetArgument(z_135, 1);
      {
        ATerm l_41;
        l_41 = t;
        {
          ATerm e_136 = NULL;
          ATerm f_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_136), not_null(b_136));
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
              f_136 = t;
              if(((e_136 != NULL) && (e_136 != f_136)))
                _fail(f_136);
              else
                e_136 = f_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_136), not_null(b_136), not_null(e_136));
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
ATerm end_scope_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  ATerm o_41;
  o_41 = t;
  {
    ATerm p_136 = NULL;
    ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL;
    t = e_103(t);
    {
      p_136 = t;
      {
        if(((o_136 != NULL) && (o_136 != p_136)))
          _fail(p_136);
        else
          o_136 = p_136;
        {
          ATerm p_41 = t;
          int q_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_136), term_w_39);
              t = table_get_0(t);
              LocalPopChoice(q_41);
            }
          else
            {
              t = p_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_136 = t;
            l_136 :
            if(((ATgetType(q_136) == AT_LIST) && !(ATisEmpty(q_136))))
              {
                r_136 = ATgetFirst((ATermList) q_136);
                s_136 = (ATerm) ATgetNext((ATermList) q_136);
                {
                  if(((n_136 != NULL) && (n_136 != r_136)))
                    _fail(r_136);
                  else
                    n_136 = r_136;
                  {
                    if(((m_136 != NULL) && (m_136 != s_136)))
                      _fail(s_136);
                    else
                      m_136 = s_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_136), term_w_39, not_null(m_136));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_136);
                          {
                            ATerm i_7 (ATerm t)
                            {
                              ATerm t_136 = NULL;
                              t_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_136), not_null(t_136));
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
ATerm restore_always_2 (ATerm t, ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm r_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_85(t);
      t = k_85(t);
      LocalPopChoice(t_41);
    }
  else
    {
      t = r_41;
      {
        t = k_85(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_103 (ATerm))
{
  ATerm a_137 = NULL;
  ATerm y_41;
  y_41 = t;
  {
    ATerm b_137 = NULL;
    ATerm c_137 = NULL;
    t = d_103(t);
    {
      b_137 = t;
      {
        if(((a_137 != NULL) && (a_137 != b_137)))
          _fail(b_137);
        else
          a_137 = b_137;
        {
          ATerm d_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_137), term_w_39);
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
              d_137 = t;
              if(((c_137 != NULL) && (c_137 != d_137)))
                _fail(d_137);
              else
                c_137 = d_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_137), term_w_39, (ATerm) ATinsert(CheckATermList(not_null(c_137)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_41;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm f_103 (ATerm), ATerm g_103 (ATerm))
{
  t = begin_scope_1(t, f_103);
  {
    ATerm j_7 (ATerm t)
    {
      t = end_scope_1(t, f_103);
      return(t);
    }
    t = restore_always_2(t, g_103, j_7);
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
  ATerm i_137 = NULL,j_137 = NULL;
  i_137 = t;
  h_137 :
  if(match_cons(i_137, sym_Rules_1))
    {
      j_137 = ATgetArgument(i_137, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_100 (ATerm))
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
              t = filter_1(t, h_100);
              return(t);
            }
            t = Cons_2(t, h_100, s_7);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            {
              ATerm o_137 = NULL,p_137 = NULL,q_137 = NULL;
              o_137 = t;
              n_137 :
              if(((ATgetType(o_137) == AT_LIST) && !(ATisEmpty(o_137))))
                {
                  p_137 = ATgetFirst((ATermList) o_137);
                  q_137 = (ATerm) ATgetNext((ATermList) o_137);
                  {
                    t = not_null(q_137);
                    t = filter_1(t, h_100);
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
  ATerm y_137 = NULL,z_137 = NULL;
  y_137 = t;
  x_137 :
  if(match_cons(y_137, sym_Signature_1))
    {
      z_137 = ATgetArgument(y_137, 0);
      {
        ATerm b_138 = NULL;
        ATerm f_138 = NULL;
        t = not_null(z_137);
        {
          ATerm t_7 (ATerm t)
          {
            ATerm c_138 = NULL,d_138 = NULL;
            c_138 = t;
            v_137 :
            if(match_cons(c_138, sym_Constructors_1))
              {
                d_138 = ATgetArgument(c_138, 0);
                t = not_null(d_138);
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
              f_138 = t;
              if(((b_138 != NULL) && (b_138 != f_138)))
                _fail(f_138);
              else
                b_138 = f_138;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(b_138));
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
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL;
  z_138 = t;
  y_138 :
  if(match_cons(z_138, sym__2))
    {
      a_139 = ATgetArgument(z_138, 0);
      b_139 = ATgetArgument(z_138, 1);
      {
        ATerm e_139 = NULL,f_139 = NULL;
        ATerm g_139 = NULL;
        ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL;
        t = not_null(a_139);
        {
          g_139 = t;
          {
            t = SSL_explode_term(not_null(g_139));
            {
              i_139 = t;
              m_138 :
              if(match_cons(i_139, sym__2))
                {
                  j_139 = ATgetArgument(i_139, 0);
                  k_139 = ATgetArgument(i_139, 1);
                  n_138 :
                  if(((ATgetType(k_139) == AT_LIST) && !(ATisEmpty(k_139))))
                    {
                      l_139 = ATgetFirst((ATermList) k_139);
                      m_139 = (ATerm) ATgetNext((ATermList) k_139);
                      o_138 :
                      if(((ATgetType(m_139) == AT_LIST) && ATisEmpty(m_139)))
                        {
                          {
                            if(((e_139 != NULL) && (e_139 != j_139)))
                              _fail(j_139);
                            else
                              e_139 = j_139;
                            if(((f_139 != NULL) && (f_139 != l_139)))
                              _fail(l_139);
                            else
                              f_139 = l_139;
                          }
                        }
                      else
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
          t = not_null(b_139);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm n_139 = NULL;
              ATerm p_139 = NULL,y_139 = NULL,a_140 = NULL,c_140 = NULL;
              n_139 = t;
              {
                ATerm u_42;
                u_42 = t;
                {
                  ATerm q_139 = NULL;
                  ATerm s_139 = NULL,u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL;
                  t = not_null(n_139);
                  {
                    q_139 = t;
                    {
                      t = SSL_explode_term(not_null(q_139));
                      {
                        s_139 = t;
                        s_138 :
                        if(match_cons(s_139, sym__2))
                          {
                            u_139 = ATgetArgument(s_139, 0);
                            v_139 = ATgetArgument(s_139, 1);
                            t_138 :
                            if(((ATgetType(v_139) == AT_LIST) && !(ATisEmpty(v_139))))
                              {
                                w_139 = ATgetFirst((ATermList) v_139);
                                x_139 = (ATerm) ATgetNext((ATermList) v_139);
                                u_138 :
                                if(((ATgetType(x_139) == AT_LIST) && ATisEmpty(x_139)))
                                  {
                                    {
                                      if(((e_139 != NULL) && (e_139 != u_139)))
                                        _fail(u_139);
                                      else
                                        e_139 = u_139;
                                      if(((p_139 != NULL) && (p_139 != w_139)))
                                        _fail(w_139);
                                      else
                                        p_139 = w_139;
                                    }
                                  }
                                else
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
                    ATerm z_139 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_139), not_null(f_139));
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
                        z_139 = t;
                        if(((y_139 != NULL) && (y_139 != z_139)))
                          _fail(z_139);
                        else
                          y_139 = z_139;
                      }
                    }
                  }
                  t = v_42;
                  {
                    ATerm d_43;
                    d_43 = t;
                    {
                      ATerm b_140 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(y_139));
                      {
                        b_140 = t;
                        if(((a_140 != NULL) && (a_140 != b_140)))
                          _fail(b_140);
                        else
                          a_140 = b_140;
                      }
                    }
                    t = d_43;
                    {
                      t = SSL_mkterm(not_null(e_139), not_null(a_140));
                      {
                        c_140 = t;
                        t = not_null(c_140);
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
ATerm foldr_3 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm))
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_99(t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL;
        s_140 = t;
        r_140 :
        if(((ATgetType(s_140) == AT_LIST) && !(ATisEmpty(s_140))))
          {
            t_140 = ATgetFirst((ATermList) s_140);
            u_140 = (ATerm) ATgetNext((ATermList) s_140);
            {
              ATerm x_140 = NULL,z_140 = NULL;
              ATerm i_43;
              i_43 = t;
              {
                ATerm y_140 = NULL;
                t = not_null(t_140);
                {
                  t = i_99(t);
                  {
                    y_140 = t;
                    if(((x_140 != NULL) && (x_140 != y_140)))
                      _fail(y_140);
                    else
                      x_140 = y_140;
                  }
                }
              }
              t = i_43;
              {
                ATerm a_141 = NULL;
                t = not_null(u_140);
                {
                  t = foldr_3(t, g_99, h_99, i_99);
                  {
                    a_141 = t;
                    if(((z_140 != NULL) && (z_140 != a_141)))
                      _fail(a_141);
                    else
                      z_140 = a_141;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_140), not_null(z_140));
                  t = h_99(t);
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
                  ATerm g_141 = NULL,h_141 = NULL;
                  g_141 = t;
                  f_141 :
                  if(match_cons(g_141, sym_Constructors_1))
                    {
                      h_141 = ATgetArgument(g_141, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(h_141))));
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
        ATerm j_44;
        j_44 = t;
        t = spec_use_def_0(t);
        t = j_44;
        {
          ATerm e_8 (ATerm t)
          {
            t = term_k_44;
            return(t);
          }
          t = timing_1(t, e_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm f_8 (ATerm t)
              {
                t = term_l_44;
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
ATerm _2 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm q_141 = NULL,r_141 = NULL,s_141 = NULL;
  q_141 = t;
  p_141 :
  if(match_cons(q_141, sym__2))
    {
      r_141 = ATgetArgument(q_141, 0);
      s_141 = ATgetArgument(q_141, 1);
      {
        ATerm w_141 = NULL,y_141 = NULL;
        ATerm x_141 = NULL;
        t = SSLgetAnnotations(not_null(q_141));
        {
          x_141 = t;
          if(((w_141 != NULL) && (w_141 != x_141)))
            _fail(x_141);
          else
            w_141 = x_141;
        }
        {
          t = not_null(r_141);
          {
            ATerm a_142 = NULL;
            t = x_72(t);
            {
              y_141 = t;
              {
                t = not_null(s_141);
                {
                  ATerm c_142 = NULL;
                  t = y_72(t);
                  {
                    a_142 = t;
                    {
                      ATerm d_142 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_141), not_null(a_142)), not_null(w_141));
                      {
                        d_142 = t;
                        if(((c_142 != NULL) && (c_142 != d_142)))
                          _fail(d_142);
                        else
                          c_142 = d_142;
                      }
                      t = not_null(c_142);
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
  ATerm l_142 = NULL;
  ATerm x_44;
  x_44 = t;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm m_142 = NULL,n_142 = NULL;
      m_142 = t;
      k_142 :
      if(match_cons(m_142, sym_Program_1))
        {
          n_142 = ATgetArgument(m_142, 0);
          if(((l_142 != NULL) && (l_142 != n_142)))
            _fail(n_142);
          else
            l_142 = n_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_44), not_null(l_142)), term_y_44));
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
  ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL;
  r_142 = t;
  q_142 :
  if(match_cons(r_142, sym__2))
    {
      s_142 = ATgetArgument(r_142, 0);
      t_142 = ATgetArgument(r_142, 1);
      {
        ATerm a_45;
        a_45 = t;
        t = SSL_printnl(not_null(s_142), not_null(t_142));
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
  ATerm y_142 = NULL;
  y_142 = t;
  t = SSL_implode_string(not_null(y_142));
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
        ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL;
        d_143 = t;
        c_143 :
        if(((ATgetType(d_143) == AT_LIST) && !(ATisEmpty(d_143))))
          {
            e_143 = ATgetFirst((ATermList) d_143);
            f_143 = (ATerm) ATgetNext((ATermList) d_143);
            {
              t = not_null(e_143);
              {
                ATerm o_8 (ATerm t)
                {
                  t = not_null(f_143);
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
  ATerm p_143 = NULL;
  ATerm r_143 = NULL;
  p_143 = t;
  {
    ATerm s_143 = NULL;
    ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL;
    t = not_null(p_143);
    {
      s_143 = t;
      {
        t = SSL_explode_term(not_null(s_143));
        {
          u_143 = t;
          n_143 :
          if(match_cons(u_143, sym__2))
            {
              v_143 = ATgetArgument(u_143, 0);
              w_143 = ATgetArgument(u_143, 1);
              o_143 :
              if(match_string(v_143, ""))
                {
                  if(((r_143 != NULL) && (r_143 != w_143)))
                    _fail(w_143);
                  else
                    r_143 = w_143;
                }
              else
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
      t = not_null(r_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm a_144 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_144);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          t = Nil_0(t);
          t = f_93(t);
        }
      }
    return(t);
  }
  t = a_144(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL;
  d_144 = t;
  c_144 :
  if(match_cons(d_144, sym__2))
    {
      e_144 = ATgetArgument(d_144, 0);
      f_144 = ATgetArgument(d_144, 1);
      {
        t = not_null(e_144);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(f_144);
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
  ATerm k_144 = NULL;
  k_144 = t;
  t = SSL_explode_string(not_null(k_144));
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
  ATerm o_144 = NULL;
  o_144 = t;
  t = SSL_is_string(not_null(o_144));
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
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm e_46 = t;
              int f_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_46);
                }
              else
                {
                  t = e_46;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_8);
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            {
              ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL;
              x_144 = t;
              w_144 :
              if(match_cons(x_144, sym_Path_1))
                {
                  y_144 = ATgetArgument(x_144, 0);
                  t = not_null(y_144);
                }
              else
                {
                  if(match_cons(x_144, sym_Var_1))
                    {
                      y_144 = ATgetArgument(x_144, 0);
                      {
                        t = not_null(y_144);
                        {
                          ATerm h_46 = t;
                          int i_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_46);
                            }
                          else
                            {
                              t = h_46;
                              {
                                ATerm r_8 (ATerm t)
                                {
                                  t = term_n_46;
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
                      if(match_cons(x_144, sym_Prefix_2))
                        {
                          y_144 = ATgetArgument(x_144, 0);
                          z_144 = ATgetArgument(x_144, 1);
                          {
                            ATerm e_145 = NULL,g_145 = NULL;
                            ATerm o_46;
                            o_46 = t;
                            {
                              ATerm f_145 = NULL;
                              t = not_null(y_144);
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
                            }
                            t = o_46;
                            {
                              ATerm h_145 = NULL;
                              t = not_null(z_144);
                              {
                                t = eval_config_0(t);
                                {
                                  h_145 = t;
                                  if(((g_145 != NULL) && (g_145 != h_145)))
                                    _fail(h_145);
                                  else
                                    g_145 = h_145;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_145), not_null(g_145));
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
  ATerm p_145 = NULL;
  p_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_46, not_null(p_145));
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
                ATerm r_145 = NULL;
                ATerm s_145 = NULL;
                s_145 = t;
                if(((r_145 != NULL) && (r_145 != s_145)))
                  _fail(s_145);
                else
                  r_145 = s_145;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_46, not_null(p_145), not_null(r_145));
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
ATerm if_verbose2_1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_46;
      z_46 = t;
      {
        ATerm w_145 = NULL;
        ATerm x_145 = NULL;
        t = term_e_17;
        {
          t = get_config_0(t);
          {
            x_145 = t;
            if(((w_145 != NULL) && (w_145 != x_145)))
              _fail(x_145);
            else
              w_145 = x_145;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_145), term_e_47);
          t = geq_0(t);
        }
      }
      t = z_46;
      t = l_106(t);
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
  ATerm b_146 = NULL,c_146 = NULL,d_146 = NULL;
  b_146 = t;
  a_146 :
  if(match_cons(b_146, sym__2))
    {
      c_146 = ATgetArgument(b_146, 0);
      d_146 = ATgetArgument(b_146, 1);
      t = SSL_WriteToTextFile(not_null(c_146), not_null(d_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL;
  j_146 = t;
  i_146 :
  if(match_cons(j_146, sym__2))
    {
      k_146 = ATgetArgument(j_146, 0);
      l_146 = ATgetArgument(j_146, 1);
      t = SSL_WriteToBinaryFile(not_null(k_146), not_null(l_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_146 = NULL;
  ATerm f_47;
  f_47 = t;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm g_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            ATerm u_146 = NULL,v_146 = NULL;
            u_146 = t;
            q_146 :
            if(match_cons(u_146, sym_Output_1))
              {
                v_146 = ATgetArgument(u_146, 0);
                if(((t_146 != NULL) && (t_146 != v_146)))
                  _fail(v_146);
                else
                  t_146 = v_146;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_8);
          LocalPopChoice(h_47);
        }
      else
        {
          t = g_47;
          {
            ATerm w_146 = NULL;
            t = term_i_47;
            {
              w_146 = t;
              if(((t_146 != NULL) && (t_146 != w_146)))
                _fail(w_146);
              else
                t_146 = w_146;
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
        t = not_null(t_146);
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
              ATerm x_146 = NULL;
              x_146 = t;
              s_146 :
              if(!(match_cons(x_146, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm s_104 (ATerm))
{
  ATerm d_147 = NULL,f_147 = NULL,g_147 = NULL,h_147 = NULL;
  ATerm m_47;
  m_47 = t;
  t = dtime_0(t);
  t = m_47;
  {
    t = s_104(t);
    {
      ATerm n_47;
      n_47 = t;
      {
        ATerm e_147 = NULL;
        t = dtime_0(t);
        {
          e_147 = t;
          if(((d_147 != NULL) && (d_147 != e_147)))
            _fail(e_147);
          else
            d_147 = e_147;
        }
      }
      t = n_47;
      {
        f_147 = t;
        c_147 :
        if(match_cons(f_147, sym__2))
          {
            g_147 = ATgetArgument(f_147, 0);
            h_147 = ATgetArgument(f_147, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_147)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_147))), not_null(h_147));
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
ATerm debug_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm o_47;
  o_47 = t;
  {
    ATerm o_147 = NULL,q_147 = NULL;
    ATerm p_47;
    p_47 = t;
    {
      ATerm p_147 = NULL;
      t = o_103(t);
      {
        p_147 = t;
        if(((o_147 != NULL) && (o_147 != p_147)))
          _fail(p_147);
        else
          o_147 = p_147;
      }
    }
    t = p_47;
    {
      ATerm r_147 = NULL;
      r_147 = t;
      if(((q_147 != NULL) && (q_147 != r_147)))
        _fail(r_147);
      else
        q_147 = r_147;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_147)), not_null(o_147)));
        t = printnl_0(t);
      }
    }
  }
  t = o_47;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm v_147 = NULL;
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_147 = NULL;
      w_147 = t;
      {
        if(((v_147 != NULL) && (v_147 != w_147)))
          _fail(w_147);
        else
          v_147 = w_147;
        t = SSL_ReadFromFile(not_null(v_147));
      }
      LocalPopChoice(r_47);
    }
  else
    {
      t = q_47;
      {
        ATerm y_8 (ATerm t)
        {
          t = term_s_47;
          return(t);
        }
        t = debug_1(t, y_8);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm a_148 = NULL,c_148 = NULL;
  ATerm t_47;
  t_47 = t;
  {
    ATerm b_148 = NULL;
    t = t_100(t);
    {
      b_148 = t;
      if(((a_148 != NULL) && (a_148 != b_148)))
        _fail(b_148);
      else
        a_148 = b_148;
    }
  }
  t = t_47;
  {
    ATerm d_148 = NULL;
    t = u_100(t);
    {
      d_148 = t;
      if(((c_148 != NULL) && (c_148 != d_148)))
        _fail(d_148);
      else
        c_148 = d_148;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_148), not_null(c_148));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_148 = NULL;
  ATerm u_47;
  u_47 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 (ATerm t)
        {
          ATerm k_148 = NULL,l_148 = NULL;
          k_148 = t;
          h_148 :
          if(match_cons(k_148, sym_Input_1))
            {
              l_148 = ATgetArgument(k_148, 0);
              if(((j_148 != NULL) && (j_148 != l_148)))
                _fail(l_148);
              else
                j_148 = l_148;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_8);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        {
          ATerm m_148 = NULL;
          t = term_x_47;
          {
            m_148 = t;
            if(((j_148 != NULL) && (j_148 != m_148)))
              _fail(m_148);
            else
              j_148 = m_148;
          }
        }
      }
  }
  t = u_47;
  {
    ATerm a_9 (ATerm t)
    {
      t = not_null(j_148);
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
    ATerm q_148 = NULL;
    q_148 = t;
    p_148 :
    if(!(match_string(q_148, "-v")))
      {
        if(!(match_string(q_148, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_z_47;
    t = set_config_0(t);
    t = term_a_48;
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    t = term_b_48;
    return(t);
  }
  t = Option_3(t, b_9, c_9, d_9);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm t_148 = NULL;
    t_148 = t;
    r_148 :
    if(!(match_string(t_148, "-k")))
      {
        if(!(match_string(t_148, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_9 (ATerm t)
  {
    ATerm c_48;
    c_48 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_d_48, not_null(u_148));
        t = set_config_0(t);
      }
    }
    t = c_48;
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_k_48;
    return(t);
  }
  t = ArgOption_3(t, f_9, g_9, h_9);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_148 = NULL;
  y_148 = t;
  t = SSL_string_to_int(not_null(y_148));
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
        ATerm g_149 = NULL;
        g_149 = t;
        b_149 :
        if(!(match_string(g_149, "-S")))
          {
            if(!(match_string(g_149, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_9 (ATerm t)
      {
        t = term_t_48;
        t = set_config_0(t);
        t = term_u_48;
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
              ATerm h_149 = NULL;
              h_149 = t;
              c_149 :
              if(!(match_string(h_149, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_9 (ATerm t)
            {
              ATerm k_149 = NULL;
              ATerm a_49;
              a_49 = t;
              {
                ATerm i_149 = NULL;
                ATerm j_149 = NULL;
                t = string_to_int_0(t);
                {
                  j_149 = t;
                  if(((i_149 != NULL) && (i_149 != j_149)))
                    _fail(j_149);
                  else
                    i_149 = j_149;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(i_149));
                  t = set_config_0(t);
                }
              }
              t = a_49;
              {
                ATerm l_149 = NULL;
                l_149 = t;
                if(((k_149 != NULL) && (k_149 != l_149)))
                  _fail(l_149);
                else
                  k_149 = l_149;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_149));
              }
              return(t);
            }
            ATerm o_9 (ATerm t)
            {
              t = term_b_49;
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
                ATerm m_149 = NULL;
                m_149 = t;
                f_149 :
                if(!(match_string(m_149, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_9 (ATerm t)
              {
                t = term_d_49;
                t = set_config_0(t);
                t = term_e_49;
                return(t);
              }
              ATerm y_9 (ATerm t)
              {
                t = term_f_49;
                return(t);
              }
              t = Option_3(t, t_9, u_9, y_9);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_49);
    }
  else
    {
      t = g_49;
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
  ATerm a_10 (ATerm t)
  {
    ATerm s_149 = NULL;
    s_149 = t;
    p_149 :
    if(!(match_string(s_149, "-o")))
      {
        if(!(match_string(s_149, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    ATerm v_149 = NULL;
    ATerm o_49;
    o_49 = t;
    {
      ATerm t_149 = NULL;
      ATerm u_149 = NULL;
      u_149 = t;
      if(((t_149 != NULL) && (t_149 != u_149)))
        _fail(u_149);
      else
        t_149 = u_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_49, not_null(t_149));
        t = set_config_0(t);
      }
    }
    t = o_49;
    {
      ATerm w_149 = NULL;
      w_149 = t;
      if(((v_149 != NULL) && (v_149 != w_149)))
        _fail(w_149);
      else
        v_149 = w_149;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_149));
    }
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = term_t_49;
    return(t);
  }
  t = ArgOption_3(t, a_10, f_10, g_10);
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
        ATerm l_10 (ATerm t)
        {
          ATerm a_150 = NULL;
          a_150 = t;
          z_149 :
          if(!(match_string(a_150, "-b")))
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
        t = Option_3(t, l_10, r_10, d_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL;
  g_150 = t;
  e_150 :
  if(match_string(g_150, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(g_150) == AT_LIST) && !(ATisEmpty(g_150))))
        {
          h_150 = ATgetFirst((ATermList) g_150);
          i_150 = (ATerm) ATgetNext((ATermList) g_150);
          f_150 :
          if(((ATgetType(i_150) == AT_LIST) && !(ATisEmpty(i_150))))
            {
              j_150 = ATgetFirst((ATermList) i_150);
              k_150 = (ATerm) ATgetNext((ATermList) i_150);
              {
                ATerm o_150 = NULL;
                ATerm m_50;
                m_50 = t;
                {
                  t = not_null(h_150);
                  t = m_0(t);
                }
                t = m_50;
                {
                  ATerm p_150 = NULL;
                  t = not_null(j_150);
                  {
                    t = n_0(t);
                    {
                      p_150 = t;
                      if(((o_150 != NULL) && (o_150 != p_150)))
                        _fail(p_150);
                      else
                        o_150 = p_150;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_150)), not_null(o_150));
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
    ATerm w_150 = NULL;
    w_150 = t;
    t_150 :
    if(!(match_string(w_150, "-i")))
      {
        if(!(match_string(w_150, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    ATerm z_150 = NULL;
    ATerm n_50;
    n_50 = t;
    {
      ATerm x_150 = NULL;
      ATerm y_150 = NULL;
      y_150 = t;
      if(((x_150 != NULL) && (x_150 != y_150)))
        _fail(y_150);
      else
        x_150 = y_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_50, not_null(x_150));
        t = set_config_0(t);
      }
    }
    t = n_50;
    {
      ATerm a_151 = NULL;
      a_151 = t;
      if(((z_150 != NULL) && (z_150 != a_151)))
        _fail(a_151);
      else
        z_150 = a_151;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_150));
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
  ATerm e_151 = NULL;
  e_151 = t;
  t = SSL_TicksToSeconds(not_null(e_151));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL;
  j_151 = t;
  i_151 :
  if(match_cons(j_151, sym__2))
    {
      k_151 = ATgetArgument(j_151, 0);
      l_151 = ATgetArgument(j_151, 1);
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_151), not_null(l_151));
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            t = SSL_addr(not_null(k_151), not_null(l_151));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_99 (ATerm), ATerm f_99 (ATerm))
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_99(t);
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL;
        s_151 = t;
        r_151 :
        if(((ATgetType(s_151) == AT_LIST) && !(ATisEmpty(s_151))))
          {
            t_151 = ATgetFirst((ATermList) s_151);
            u_151 = (ATerm) ATgetNext((ATermList) s_151);
            {
              ATerm x_151 = NULL;
              ATerm y_151 = NULL;
              t = not_null(u_151);
              {
                t = foldr_2(t, e_99, f_99);
                {
                  y_151 = t;
                  if(((x_151 != NULL) && (x_151 != y_151)))
                    _fail(y_151);
                  else
                    x_151 = y_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_151), not_null(x_151));
                t = f_99(t);
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
ATerm crush_2 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm))
{
  ATerm f_152 = NULL;
  ATerm h_152 = NULL;
  f_152 = t;
  {
    ATerm i_152 = NULL;
    ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL;
    t = not_null(f_152);
    {
      i_152 = t;
      {
        t = SSL_explode_term(not_null(i_152));
        {
          k_152 = t;
          e_152 :
          if(match_cons(k_152, sym__2))
            {
              l_152 = ATgetArgument(k_152, 0);
              m_152 = ATgetArgument(k_152, 1);
              if(((h_152 != NULL) && (h_152 != m_152)))
                _fail(m_152);
              else
                h_152 = m_152;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_152);
      t = foldr_2(t, c_98, d_98);
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
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL;
  s_152 = t;
  r_152 :
  if(match_cons(s_152, sym__2))
    {
      t_152 = ATgetArgument(s_152, 0);
      u_152 = ATgetArgument(s_152, 1);
      {
        ATerm g_51;
        g_51 = t;
        {
          ATerm t_51 = t;
          int u_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_152), not_null(u_152));
              LocalPopChoice(u_51);
            }
          else
            {
              t = t_51;
              t = SSL_gtr(not_null(t_152), not_null(u_152));
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
  ATerm a_153 = NULL;
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL;
      b_153 = t;
      z_152 :
      if(match_cons(b_153, sym__2))
        {
          c_153 = ATgetArgument(b_153, 0);
          d_153 = ATgetArgument(b_153, 1);
          {
            if(((a_153 != NULL) && (a_153 != c_153)))
              _fail(c_153);
            else
              a_153 = c_153;
            if(((a_153 != NULL) && (a_153 != d_153)))
              _fail(d_153);
            else
              a_153 = d_153;
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
ATerm if_verbose1_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_51;
      z_51 = t;
      {
        ATerm g_153 = NULL;
        ATerm h_153 = NULL;
        t = term_e_17;
        {
          t = get_config_0(t);
          {
            h_153 = t;
            if(((g_153 != NULL) && (g_153 != h_153)))
              _fail(h_153);
            else
              g_153 = h_153;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_153), term_l_23);
          t = geq_0(t);
        }
      }
      t = z_51;
      t = k_106(t);
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
    ATerm l_153 = NULL,n_153 = NULL;
    ATerm a_52;
    a_52 = t;
    {
      ATerm m_153 = NULL;
      t = run_time_0(t);
      {
        m_153 = t;
        if(((l_153 != NULL) && (l_153 != m_153)))
          _fail(m_153);
        else
          l_153 = m_153;
      }
    }
    t = a_52;
    {
      ATerm o_153 = NULL;
      t = term_b_52;
      {
        t = get_config_0(t);
        {
          o_153 = t;
          if(((n_153 != NULL) && (n_153 != o_153)))
            _fail(o_153);
          else
            n_153 = o_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_52), not_null(l_153)), term_c_52), not_null(n_153)));
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
  ATerm v_153 = NULL;
  v_153 = t;
  u_153 :
  if(match_cons(v_153, sym_Version_0))
    {
      ATerm x_153 = NULL,z_153 = NULL;
      ATerm g_52;
      g_52 = t;
      {
        ATerm y_153 = NULL;
        t = SSLgetAnnotations(not_null(v_153));
        {
          y_153 = t;
          if(((x_153 != NULL) && (x_153 != y_153)))
            _fail(y_153);
          else
            x_153 = y_153;
        }
      }
      t = g_52;
      {
        ATerm a_154 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_153));
        {
          a_154 = t;
          if(((z_153 != NULL) && (z_153 != a_154)))
            _fail(a_154);
          else
            z_153 = a_154;
        }
        t = not_null(z_153);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_104 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_11);
  t = q_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_154 = NULL;
  f_154 = t;
  t = SSL_table_create(not_null(f_154));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_154 = NULL;
  j_154 = t;
  {
    ATerm l_52;
    l_52 = t;
    {
      t = term_m_52;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_52, term_q_52, not_null(j_154));
          t = table_put_0(t);
        }
      }
    }
    t = l_52;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_154 = NULL;
  n_154 = t;
  t = SSL_table_destroy(not_null(n_154));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_154 = NULL;
  r_154 = t;
  t = SSL_exit(not_null(r_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_154 = NULL,w_154 = NULL,x_154 = NULL;
  v_154 = t;
  u_154 :
  if(((ATgetType(v_154) == AT_LIST) && ATisEmpty(v_154)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_154) == AT_LIST) && !(ATisEmpty(v_154))))
        {
          w_154 = ATgetFirst((ATermList) v_154);
          x_154 = (ATerm) ATgetNext((ATermList) v_154);
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
  ATerm r_52;
  r_52 = t;
  {
    ATerm a_155 = NULL;
    ATerm d_155 = NULL;
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
          ATerm b_155 = NULL;
          ATerm c_155 = NULL;
          c_155 = t;
          if(((b_155 != NULL) && (b_155 != c_155)))
            _fail(c_155);
          else
            b_155 = c_155;
          t = (ATerm) ATinsert(ATempty, not_null(b_155));
        }
      }
    {
      d_155 = t;
      if(((a_155 != NULL) && (a_155 != d_155)))
        _fail(d_155);
      else
        a_155 = d_155;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_47, not_null(a_155));
      t = printnl_0(t);
    }
  }
  t = r_52;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm g_155 (ATerm t)
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
        t = Cons_2(t, q_92, g_155);
      }
    return(t);
  }
  t = g_155(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm n_155 = NULL,o_155 = NULL,p_155 = NULL;
  p_155 = t;
  m_155 :
  if(((ATgetType(p_155) == AT_LIST) && !(ATisEmpty(p_155))))
    {
      n_155 = ATgetFirst((ATermList) p_155);
      o_155 = (ATerm) ATgetNext((ATermList) p_155);
      {
        ATerm s_155 = NULL;
        t = not_null(o_155);
        {
          ATerm a_53;
          a_53 = t;
          {
            ATerm t_155 = NULL,v_155 = NULL,x_155 = NULL;
            ATerm b_53;
            b_53 = t;
            {
              ATerm u_155 = NULL;
              t = k_0(t);
              {
                u_155 = t;
                if(((t_155 != NULL) && (t_155 != u_155)))
                  _fail(u_155);
                else
                  t_155 = u_155;
              }
            }
            t = b_53;
            {
              ATerm w_155 = NULL;
              t = not_null(n_155);
              {
                t = i_0(t);
                {
                  w_155 = t;
                  if(((v_155 != NULL) && (v_155 != w_155)))
                    _fail(w_155);
                  else
                    v_155 = w_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_155)), not_null(v_155));
                {
                  x_155 = t;
                  if(((s_155 != NULL) && (s_155 != x_155)))
                    _fail(x_155);
                  else
                    s_155 = x_155;
                }
              }
            }
          }
          t = a_53;
          {
            ATerm k_11 (ATerm t)
            {
              t = not_null(s_155);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_11);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_155) == AT_LIST) && ATisEmpty(p_155)))
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
ATerm short_description_1 (ATerm t, ATerm n_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm i_156 = NULL,j_156 = NULL;
  i_156 = t;
  h_156 :
  if(match_cons(i_156, sym_Program_1))
    {
      j_156 = ATgetArgument(i_156, 0);
      {
        ATerm m_156 = NULL,o_156 = NULL;
        ATerm n_156 = NULL;
        t = SSLgetAnnotations(not_null(i_156));
        {
          n_156 = t;
          if(((m_156 != NULL) && (m_156 != n_156)))
            _fail(n_156);
          else
            m_156 = n_156;
        }
        {
          t = not_null(j_156);
          {
            ATerm q_156 = NULL;
            t = m_84(t);
            {
              o_156 = t;
              {
                ATerm r_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_156)), not_null(m_156));
                {
                  r_156 = t;
                  if(((q_156 != NULL) && (q_156 != r_156)))
                    _fail(r_156);
                  else
                    q_156 = r_156;
                }
                t = not_null(q_156);
              }
            }
          }
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
  ATerm z_156 = NULL;
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_157 = NULL;
      t = term_b_52;
      {
        t = get_config_0(t);
        {
          a_157 = t;
          if(((z_156 != NULL) && (z_156 != a_157)))
            _fail(a_157);
          else
            z_156 = a_157;
        }
      }
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      {
        ATerm m_11 (ATerm t)
        {
          ATerm n_11 (ATerm t)
          {
            ATerm b_157 = NULL;
            b_157 = t;
            if(((z_156 != NULL) && (z_156 != b_157)))
              _fail(b_157);
            else
              z_156 = b_157;
            return(t);
          }
          t = Program_1(t, n_11);
          return(t);
        }
        t = fetch_1(t, m_11);
      }
    }
  {
    t = term_e_53;
    {
      t = echo_0(t);
      {
        t = term_h_53;
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
                ATerm c_157 = NULL;
                ATerm d_157 = NULL;
                d_157 = t;
                if(((c_157 != NULL) && (c_157 != d_157)))
                  _fail(d_157);
                else
                  c_157 = d_157;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_157)), term_i_53);
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
  ATerm j_53;
  j_53 = t;
  {
    ATerm k_157 = NULL;
    ATerm l_157 = NULL;
    l_157 = t;
    if(((k_157 != NULL) && (k_157 != l_157)))
      _fail(l_157);
    else
      k_157 = l_157;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, not_null(k_157)));
      t = printnl_0(t);
    }
  }
  t = j_53;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm m_53;
  m_53 = t;
  {
    t = p_103(t);
    t = debug_0(t);
  }
  t = m_53;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm s_157 = NULL,t_157 = NULL;
  s_157 = t;
  r_157 :
  if(match_cons(s_157, sym_Undefined_1))
    {
      t_157 = ATgetArgument(s_157, 0);
      {
        ATerm w_157 = NULL,y_157 = NULL;
        ATerm x_157 = NULL;
        t = SSLgetAnnotations(not_null(s_157));
        {
          x_157 = t;
          if(((w_157 != NULL) && (w_157 != x_157)))
            _fail(x_157);
          else
            w_157 = x_157;
        }
        {
          t = not_null(t_157);
          {
            ATerm a_158 = NULL;
            t = n_84(t);
            {
              y_157 = t;
              {
                ATerm b_158 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_157)), not_null(w_157));
                {
                  b_158 = t;
                  if(((a_158 != NULL) && (a_158 != b_158)))
                    _fail(b_158);
                  else
                    a_158 = b_158;
                }
                t = not_null(a_158);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_92 (ATerm))
{
  ATerm g_158 (ATerm t)
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_92, _id);
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        t = Cons_2(t, _id, g_158);
      }
    return(t);
  }
  t = g_158(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_107 (ATerm))
{
  t = fetch_1(t, n_107);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_158 = NULL;
  l_158 = t;
  k_158 :
  if(match_cons(l_158, sym_Help_0))
    {
      ATerm n_158 = NULL,p_158 = NULL;
      ATerm q_53;
      q_53 = t;
      {
        ATerm o_158 = NULL;
        t = SSLgetAnnotations(not_null(l_158));
        {
          o_158 = t;
          if(((n_158 != NULL) && (n_158 != o_158)))
            _fail(o_158);
          else
            n_158 = o_158;
        }
      }
      t = q_53;
      {
        ATerm q_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_158));
        {
          q_158 = t;
          if(((p_158 != NULL) && (p_158 != q_158)))
            _fail(q_158);
          else
            p_158 = q_158;
        }
        t = not_null(p_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_84(t);
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL,y_158 = NULL;
  w_158 = t;
  v_158 :
  if(match_cons(w_158, sym__2))
    {
      x_158 = ATgetArgument(w_158, 0);
      y_158 = ATgetArgument(w_158, 1);
      t = SSL_table_get(not_null(x_158), not_null(y_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL;
  f_159 = t;
  e_159 :
  if(match_cons(f_159, sym__3))
    {
      g_159 = ATgetArgument(f_159, 0);
      h_159 = ATgetArgument(f_159, 1);
      i_159 = ATgetArgument(f_159, 2);
      {
        ATerm t_53;
        t_53 = t;
        {
          ATerm m_159 = NULL;
          ATerm n_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_159), not_null(h_159));
          {
            ATerm u_53 = t;
            int x_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_53);
              }
            else
              {
                t = u_53;
                t = (ATerm) ATempty;
              }
            {
              n_159 = t;
              if(((m_159 != NULL) && (m_159 != n_159)))
                _fail(n_159);
              else
                m_159 = n_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_159), not_null(h_159), (ATerm) ATinsert(CheckATermList(not_null(m_159)), not_null(i_159)));
            t = table_put_0(t);
          }
        }
        t = t_53;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm r_159 = NULL;
  ATerm s_159 = NULL;
  t = term_l_39;
  {
    t = s_108(t);
    {
      s_159 = t;
      if(((r_159 != NULL) && (r_159 != s_159)))
        _fail(s_159);
      else
        r_159 = s_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_53, term_g_53, not_null(r_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_159 = NULL,z_159 = NULL,a_160 = NULL;
  y_159 = t;
  x_159 :
  if(match_string(y_159, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_159) == AT_LIST) && !(ATisEmpty(y_159))))
        {
          z_159 = ATgetFirst((ATermList) y_159);
          a_160 = (ATerm) ATgetNext((ATermList) y_159);
          {
            ATerm d_160 = NULL;
            ATerm y_53;
            y_53 = t;
            {
              t = not_null(z_159);
              t = a_0(t);
            }
            t = y_53;
            {
              ATerm e_160 = NULL;
              t = term_l_39;
              {
                t = d_0(t);
                {
                  e_160 = t;
                  if(((d_160 != NULL) && (d_160 != e_160)))
                    _fail(e_160);
                  else
                    d_160 = e_160;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_160)), not_null(d_160));
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
    ATerm j_160 = NULL;
    j_160 = t;
    i_160 :
    if(!(match_string(j_160, "--help")))
      {
        if(!(match_string(j_160, "-h")))
          {
            if(!(match_string(j_160, "-?")))
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
  ATerm m_160 = NULL,n_160 = NULL,o_160 = NULL;
  m_160 = t;
  l_160 :
  if(((ATgetType(m_160) == AT_LIST) && !(ATisEmpty(m_160))))
    {
      n_160 = ATgetFirst((ATermList) m_160);
      o_160 = (ATerm) ATgetNext((ATermList) m_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm y_160 = NULL,z_160 = NULL,a_161 = NULL;
  y_160 = t;
  x_160 :
  if(((ATgetType(y_160) == AT_LIST) && !(ATisEmpty(y_160))))
    {
      z_160 = ATgetFirst((ATermList) y_160);
      a_161 = (ATerm) ATgetNext((ATermList) y_160);
      {
        ATerm e_161 = NULL,g_161 = NULL;
        ATerm f_161 = NULL;
        t = SSLgetAnnotations(not_null(y_160));
        {
          f_161 = t;
          if(((e_161 != NULL) && (e_161 != f_161)))
            _fail(f_161);
          else
            e_161 = f_161;
        }
        {
          t = not_null(z_160);
          {
            ATerm i_161 = NULL;
            t = g_74(t);
            {
              g_161 = t;
              {
                t = not_null(a_161);
                {
                  ATerm k_161 = NULL;
                  t = h_74(t);
                  {
                    i_161 = t;
                    {
                      ATerm l_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_161)), not_null(g_161)), not_null(e_161));
                      {
                        l_161 = t;
                        if(((k_161 != NULL) && (k_161 != l_161)))
                          _fail(l_161);
                        else
                          k_161 = l_161;
                      }
                      t = not_null(k_161);
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
  ATerm v_161 = NULL;
  v_161 = t;
  u_161 :
  if(((ATgetType(v_161) == AT_LIST) && ATisEmpty(v_161)))
    {
      {
        ATerm x_161 = NULL,z_161 = NULL;
        ATerm i_54;
        i_54 = t;
        {
          ATerm y_161 = NULL;
          t = SSLgetAnnotations(not_null(v_161));
          {
            y_161 = t;
            if(((x_161 != NULL) && (x_161 != y_161)))
              _fail(y_161);
            else
              x_161 = y_161;
          }
        }
        t = i_54;
        {
          ATerm a_162 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_161));
          {
            a_162 = t;
            if(((z_161 != NULL) && (z_161 != a_162)))
              _fail(a_162);
            else
              z_161 = a_162;
          }
          t = not_null(z_161);
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
  ATerm g_162 = NULL,h_162 = NULL,i_162 = NULL;
  g_162 = t;
  f_162 :
  if(match_cons(g_162, sym__2))
    {
      h_162 = ATgetArgument(g_162, 0);
      i_162 = ATgetArgument(g_162, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_46, not_null(h_162), not_null(i_162));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_108 (ATerm))
{
  ATerm j_54;
  j_54 = t;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_54;
        t = q_108(t);
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
      ATerm q_162 = NULL;
      ATerm s_54;
      s_54 = t;
      {
        ATerm o_162 = NULL;
        ATerm p_162 = NULL;
        p_162 = t;
        if(((o_162 != NULL) && (o_162 != p_162)))
          _fail(p_162);
        else
          o_162 = p_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_52, not_null(o_162));
          t = set_config_0(t);
        }
      }
      t = s_54;
      {
        ATerm r_162 = NULL;
        r_162 = t;
        if(((q_162 != NULL) && (q_162 != r_162)))
          _fail(r_162);
        else
          q_162 = r_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_162));
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
                t = q_108(t);
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
  ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL;
  ATerm x_54;
  x_54 = t;
  {
    ATerm a_163 = NULL,b_163 = NULL,c_163 = NULL,d_163 = NULL;
    a_163 = t;
    w_162 :
    if(match_cons(a_163, sym__3))
      {
        b_163 = ATgetArgument(a_163, 0);
        c_163 = ATgetArgument(a_163, 1);
        d_163 = ATgetArgument(a_163, 2);
        {
          if(((x_162 != NULL) && (x_162 != b_163)))
            _fail(b_163);
          else
            x_162 = b_163;
          {
            if(((y_162 != NULL) && (y_162 != c_163)))
              _fail(c_163);
            else
              y_162 = c_163;
            {
              if(((z_162 != NULL) && (z_162 != d_163)))
                _fail(d_163);
              else
                z_162 = d_163;
              t = SSL_table_put(not_null(x_162), not_null(y_162), not_null(z_162));
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
ATerm parse_options_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm g_163 = NULL;
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
          t = p_108(t);
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
            ATerm o_55 = t;
            int p_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 (ATerm t)
                {
                  ATerm y_11 (ATerm t)
                  {
                    ATerm h_163 = NULL;
                    h_163 = t;
                    if(((g_163 != NULL) && (g_163 != h_163)))
                      _fail(h_163);
                    else
                      g_163 = h_163;
                    return(t);
                  }
                  t = Undefined_1(t, y_11);
                  return(t);
                }
                t = fetch_1(t, x_11);
                {
                  ATerm z_11 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_163)), term_q_55);
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
                LocalPopChoice(p_55);
              }
            else
              {
                t = o_55;
                {
                }
              }
          }
        }
      {
        ATerm r_55;
        r_55 = t;
        {
          t = term_f_53;
          t = table_destroy_0(t);
        }
        t = r_55;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm))
{
  t = parse_options_1(t, w_104);
  {
    t = store_options_0(t);
    {
      t = y_104(t);
      {
        ATerm s_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_104);
            LocalPopChoice(v_55);
          }
        else
          {
            t = s_55;
            {
              ATerm w_55 = t;
              int x_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_104(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_55);
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
ATerm iowrap_4 (ATerm t, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm))
{
  ATerm b_12 (ATerm t)
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_12 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_12, p_105, q_105, c_12);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  ATerm d_12 (ATerm t)
  {
    ATerm f_12 (ATerm t)
    {
      ATerm a_56;
      a_56 = t;
      {
        ATerm k_163 = NULL;
        ATerm l_163 = NULL;
        t = term_b_52;
        {
          t = get_config_0(t);
          {
            l_163 = t;
            if(((k_163 != NULL) && (k_163 != l_163)))
              _fail(l_163);
            else
              k_163 = l_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATinsert(ATempty, not_null(k_163)));
          t = printnl_0(t);
        }
      }
      t = a_56;
      return(t);
    }
    t = if_verbose2_1(t, f_12);
    return(t);
  }
  t = iowrap_4(t, h_105, i_105, j_105, d_12);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_105 (ATerm), ATerm g_105 (ATerm))
{
  t = iowrap_3(t, f_105, g_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_105 (ATerm))
{
  ATerm j_12 (ATerm t)
  {
    t = _2(t, _id, c_105);
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
