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
ATerm term_a_15;
ATerm term_g_14;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_h_4;
void init_constant_terms (void)
{
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_x_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_x_8);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_x_8);
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
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_x_8);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm Op_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm h_58 (ATerm));
ATerm Str_1 (ATerm, ATerm f_56 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm e_56 (ATerm));
ATerm Int_1 (ATerm, ATerm d_56 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm c_54 (ATerm), ATerm d_54 (ATerm));
ATerm Where_1 (ATerm, ATerm m_54 (ATerm));
ATerm Scope_2 (ATerm, ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm Build_1 (ATerm, ATerm h_54 (ATerm));
ATerm Match_1 (ATerm, ATerm g_54 (ATerm));
ATerm Thread_1 (ATerm, ATerm u_54 (ATerm));
ATerm All_1 (ATerm, ATerm t_54 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm r_54 (ATerm));
ATerm Cong_2 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm Rec_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm));
ATerm SVar_1 (ATerm, ATerm l_55 (ATerm));
ATerm Call_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm GChoice_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm LChoice_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm Choice_2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm Seq_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm Test_1 (ATerm, ATerm v_54 (ATerm));
ATerm Not_1 (ATerm, ATerm w_54 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm t_55 (ATerm), ATerm u_55 (ATerm));
ATerm Mod_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm m_72 (ATerm));
ATerm Strategies_1 (ATerm, ATerm u_56 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_56 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_84 (ATerm));
ATerm debug_1 (ATerm, ATerm i_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm crush_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_88 (ATerm));
ATerm map_1 (ATerm, ATerm k_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_88 (ATerm));
ATerm Program_1 (ATerm, ATerm g_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_88 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_84 (ATerm), ATerm a_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_84 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm i_8 = NULL,a_10 = NULL,c_10 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Let_2))
    {
      a_10 = ATgetArgument(i_8, 0);
      c_10 = ATgetArgument(i_8, 1);
      {
        ATerm d_11 = NULL,j_11 = NULL;
        ATerm f_11 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          f_11 = t;
          if(((d_11 != NULL) && (d_11 != f_11)))
            _fail(f_11);
          else
            d_11 = f_11;
        }
        {
          t = not_null(a_10);
          {
            ATerm l_11 = NULL;
            t = o_55(t);
            {
              j_11 = t;
              {
                t = not_null(c_10);
                {
                  ATerm n_11 = NULL;
                  t = p_55(t);
                  {
                    l_11 = t;
                    {
                      ATerm o_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_11), not_null(l_11)), not_null(d_11));
                      {
                        o_11 = t;
                        if(((n_11 != NULL) && (n_11 != o_11)))
                          _fail(o_11);
                        else
                          n_11 = o_11;
                      }
                      t = not_null(n_11);
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
ATerm Op_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_Op_2))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      {
        ATerm g_12 = NULL,i_12 = NULL;
        ATerm h_12 = NULL;
        t = SSLgetAnnotations(not_null(a_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        {
          t = not_null(b_12);
          {
            ATerm k_12 = NULL;
            t = g_56(t);
            {
              i_12 = t;
              {
                t = not_null(c_12);
                {
                  ATerm m_12 = NULL;
                  t = h_56(t);
                  {
                    k_12 = t;
                    {
                      ATerm n_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_12), not_null(k_12)), not_null(g_12));
                      {
                        n_12 = t;
                        if(((m_12 != NULL) && (m_12 != n_12)))
                          _fail(n_12);
                        else
                          m_12 = n_12;
                      }
                      t = not_null(m_12);
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
  ATerm c_13 = NULL,d_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_Var_1))
    {
      d_13 = ATgetArgument(c_13, 0);
      {
        ATerm o_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = NULL,i_13 = NULL;
            ATerm h_13 = NULL;
            t = SSLgetAnnotations(not_null(c_13));
            {
              h_13 = t;
              if(((g_13 != NULL) && (g_13 != h_13)))
                _fail(h_13);
              else
                g_13 = h_13;
            }
            {
              t = not_null(d_13);
              {
                ATerm k_13 = NULL;
                t = n_0(t);
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
            LocalPopChoice(p_3);
          }
        else
          {
            t = o_3;
            {
              ATerm o_13 = NULL,q_13 = NULL;
              ATerm p_13 = NULL;
              t = SSLgetAnnotations(not_null(c_13));
              {
                p_13 = t;
                if(((o_13 != NULL) && (o_13 != p_13)))
                  _fail(p_13);
                else
                  o_13 = p_13;
              }
              {
                t = not_null(d_13);
                {
                  ATerm s_13 = NULL;
                  t = n_0(t);
                  {
                    q_13 = t;
                    {
                      ATerm t_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_13)), not_null(o_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_As_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(j_14);
          {
            ATerm s_14 = NULL;
            t = f_58(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = g_58(t);
                  {
                    s_14 = t;
                    {
                      ATerm v_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(q_14), not_null(s_14)), not_null(o_14));
                      {
                        v_14 = t;
                        if(((u_14 != NULL) && (u_14 != v_14)))
                          _fail(v_14);
                        else
                          u_14 = v_14;
                      }
                      t = not_null(u_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_BuildDefault_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = h_58(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Str_1))
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
            t = f_56(t);
            {
              f_16 = t;
              {
                ATerm i_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_16)), not_null(d_16));
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
ATerm is_real_0 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  t = SSL_is_real(not_null(o_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_Real_1))
    {
      x_16 = ATgetArgument(w_16, 0);
      {
        ATerm a_17 = NULL,c_17 = NULL;
        ATerm b_17 = NULL;
        t = SSLgetAnnotations(not_null(w_16));
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
        {
          t = not_null(x_16);
          {
            ATerm e_17 = NULL;
            t = e_56(t);
            {
              c_17 = t;
              {
                ATerm f_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(c_17)), not_null(a_17));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Int_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      {
        ATerm t_17 = NULL,v_17 = NULL;
        ATerm u_17 = NULL;
        t = SSLgetAnnotations(not_null(p_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
        {
          t = not_null(q_17);
          {
            ATerm x_17 = NULL;
            t = d_56(t);
            {
              v_17 = t;
              {
                ATerm y_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(v_17)), not_null(t_17));
                {
                  y_17 = t;
                  if(((x_17 != NULL) && (x_17 != y_17)))
                    _fail(y_17);
                  else
                    x_17 = y_17;
                }
                t = not_null(x_17);
              }
            }
          }
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
  ATerm h_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_Wld_0))
    {
      ATerm j_18 = NULL,l_18 = NULL;
      ATerm q_3;
      q_3 = t;
      {
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(h_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
      }
      t = q_3;
      {
        ATerm m_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(j_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        t = not_null(l_18);
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
  ATerm r_3 = t;
  int s_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(s_3);
    }
  else
    {
      t = r_3;
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm v_3 = t;
              int w_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = v_3;
                  {
                    ATerm x_3 = t;
                    int y_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(y_3);
                      }
                    else
                      {
                        t = x_3;
                        {
                          ATerm z_3 = t;
                          int a_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
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
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(g_4);
                                              }
                                            else
                                              {
                                                t = f_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_h_4;
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
ATerm Prim_2 (ATerm t, ATerm c_54 (ATerm), ATerm d_54 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Prim_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = c_54(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = d_54(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Where_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym_Where_1))
    {
      w_19 = ATgetArgument(v_19, 0);
      {
        ATerm z_19 = NULL,b_20 = NULL;
        ATerm a_20 = NULL;
        t = SSLgetAnnotations(not_null(v_19));
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
        {
          t = not_null(w_19);
          {
            ATerm d_20 = NULL;
            t = m_54(t);
            {
              b_20 = t;
              {
                ATerm e_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(b_20)), not_null(z_19));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_54 (ATerm), ATerm l_54 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_Scope_2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(q_20);
          {
            ATerm z_20 = NULL;
            t = k_54(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = l_54(t);
                  {
                    z_20 = t;
                    {
                      ATerm c_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_20), not_null(z_20)), not_null(v_20));
                      {
                        c_21 = t;
                        if(((b_21 != NULL) && (b_21 != c_21)))
                          _fail(c_21);
                        else
                          b_21 = c_21;
                      }
                      t = not_null(b_21);
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
ATerm Build_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_Build_1))
    {
      o_21 = ATgetArgument(n_21, 0);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(n_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(o_21);
          {
            ATerm v_21 = NULL;
            t = h_54(t);
            {
              t_21 = t;
              {
                ATerm w_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_21)), not_null(r_21));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym_Match_1))
    {
      h_22 = ATgetArgument(g_22, 0);
      {
        ATerm k_22 = NULL,m_22 = NULL;
        ATerm l_22 = NULL;
        t = SSLgetAnnotations(not_null(g_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        {
          t = not_null(h_22);
          {
            ATerm o_22 = NULL;
            t = g_54(t);
            {
              m_22 = t;
              {
                ATerm p_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(m_22)), not_null(k_22));
                {
                  p_22 = t;
                  if(((o_22 != NULL) && (o_22 != p_22)))
                    _fail(p_22);
                  else
                    o_22 = p_22;
                }
                t = not_null(o_22);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_Thread_1))
    {
      a_23 = ATgetArgument(z_22, 0);
      {
        ATerm d_23 = NULL,f_23 = NULL;
        ATerm e_23 = NULL;
        t = SSLgetAnnotations(not_null(z_22));
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
        {
          t = not_null(a_23);
          {
            ATerm h_23 = NULL;
            t = u_54(t);
            {
              f_23 = t;
              {
                ATerm i_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(f_23)), not_null(d_23));
                {
                  i_23 = t;
                  if(((h_23 != NULL) && (h_23 != i_23)))
                    _fail(i_23);
                  else
                    h_23 = i_23;
                }
                t = not_null(h_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_All_1))
    {
      t_23 = ATgetArgument(s_23, 0);
      {
        ATerm w_23 = NULL,y_23 = NULL;
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(s_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        {
          t = not_null(t_23);
          {
            ATerm a_24 = NULL;
            t = t_54(t);
            {
              y_23 = t;
              {
                ATerm b_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(y_23)), not_null(w_23));
                {
                  b_24 = t;
                  if(((a_24 != NULL) && (a_24 != b_24)))
                    _fail(b_24);
                  else
                    a_24 = b_24;
                }
                t = not_null(a_24);
              }
            }
          }
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
  ATerm u_24 = NULL,y_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Some_1))
    {
      y_24 = ATgetArgument(u_24, 0);
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL,d_25 = NULL;
            ATerm c_25 = NULL;
            t = SSLgetAnnotations(not_null(u_24));
            {
              c_25 = t;
              if(((b_25 != NULL) && (b_25 != c_25)))
                _fail(c_25);
              else
                b_25 = c_25;
            }
            {
              t = not_null(y_24);
              {
                ATerm f_25 = NULL;
                t = m_0(t);
                {
                  d_25 = t;
                  {
                    ATerm g_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(d_25)), not_null(b_25));
                    {
                      g_25 = t;
                      if(((f_25 != NULL) && (f_25 != g_25)))
                        _fail(g_25);
                      else
                        f_25 = g_25;
                    }
                    t = not_null(f_25);
                  }
                }
              }
            }
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
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
                t = not_null(y_24);
                {
                  ATerm n_25 = NULL;
                  t = m_0(t);
                  {
                    l_25 = t;
                    {
                      ATerm o_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(l_25)), not_null(j_25));
                      {
                        o_25 = t;
                        if(((n_25 != NULL) && (n_25 != o_25)))
                          _fail(o_25);
                        else
                          n_25 = o_25;
                      }
                      t = not_null(n_25);
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
ATerm One_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_One_1))
    {
      d_26 = ATgetArgument(c_26, 0);
      {
        ATerm g_26 = NULL,i_26 = NULL;
        ATerm h_26 = NULL;
        t = SSLgetAnnotations(not_null(c_26));
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
        {
          t = not_null(d_26);
          {
            ATerm k_26 = NULL;
            t = r_54(t);
            {
              i_26 = t;
              {
                ATerm l_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(i_26)), not_null(g_26));
                {
                  l_26 = t;
                  if(((k_26 != NULL) && (k_26 != l_26)))
                    _fail(l_26);
                  else
                    k_26 = l_26;
                }
                t = not_null(k_26);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_Cong_2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      {
        ATerm c_27 = NULL,e_27 = NULL;
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(w_26));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
        {
          t = not_null(x_26);
          {
            ATerm g_27 = NULL;
            t = p_54(t);
            {
              e_27 = t;
              {
                t = not_null(y_26);
                {
                  ATerm i_27 = NULL;
                  t = q_54(t);
                  {
                    g_27 = t;
                    {
                      ATerm j_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(e_27), not_null(g_27)), not_null(c_27));
                      {
                        j_27 = t;
                        if(((i_27 != NULL) && (i_27 != j_27)))
                          _fail(j_27);
                        else
                          i_27 = j_27;
                      }
                      t = not_null(i_27);
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
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_is_int(not_null(q_27));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Path_2))
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
            t = n_54(t);
            {
              h_28 = t;
              {
                t = not_null(b_28);
                {
                  ATerm l_28 = NULL;
                  t = o_54(t);
                  {
                    j_28 = t;
                    {
                      ATerm m_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(h_28), not_null(j_28)), not_null(f_28));
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
ATerm Rec_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm))
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym_Rec_2))
    {
      z_28 = ATgetArgument(y_28, 0);
      a_29 = ATgetArgument(y_28, 1);
      {
        ATerm e_29 = NULL,g_29 = NULL;
        ATerm f_29 = NULL;
        t = SSLgetAnnotations(not_null(y_28));
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
        {
          t = not_null(z_28);
          {
            ATerm i_29 = NULL;
            t = m_55(t);
            {
              g_29 = t;
              {
                t = not_null(a_29);
                {
                  ATerm k_29 = NULL;
                  t = n_55(t);
                  {
                    i_29 = t;
                    {
                      ATerm m_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(g_29), not_null(i_29)), not_null(e_29));
                      {
                        m_29 = t;
                        if(((k_29 != NULL) && (k_29 != m_29)))
                          _fail(m_29);
                        else
                          k_29 = m_29;
                      }
                      t = not_null(k_29);
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
ATerm SVar_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym_SVar_1))
    {
      y_29 = ATgetArgument(x_29, 0);
      {
        ATerm b_30 = NULL,d_30 = NULL;
        ATerm c_30 = NULL;
        t = SSLgetAnnotations(not_null(x_29));
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
        {
          t = not_null(y_29);
          {
            ATerm f_30 = NULL;
            t = l_55(t);
            {
              d_30 = t;
              {
                ATerm g_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(d_30)), not_null(b_30));
                {
                  g_30 = t;
                  if(((f_30 != NULL) && (f_30 != g_30)))
                    _fail(g_30);
                  else
                    f_30 = g_30;
                }
                t = not_null(f_30);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_Call_2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        ATerm z_30 = NULL,b_31 = NULL;
        ATerm a_31 = NULL;
        t = SSLgetAnnotations(not_null(t_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
        {
          t = not_null(u_30);
          {
            ATerm d_31 = NULL;
            t = a_56(t);
            {
              b_31 = t;
              {
                t = not_null(v_30);
                {
                  ATerm f_31 = NULL;
                  t = b_56(t);
                  {
                    d_31 = t;
                    {
                      ATerm g_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(b_31), not_null(d_31)), not_null(z_30));
                      {
                        g_31 = t;
                        if(((f_31 != NULL) && (f_31 != g_31)))
                          _fail(g_31);
                        else
                          f_31 = g_31;
                      }
                      t = not_null(f_31);
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
ATerm LGChoice_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_LGChoice_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm y_31 = NULL,a_32 = NULL;
        ATerm z_31 = NULL;
        t = SSLgetAnnotations(not_null(s_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
        {
          t = not_null(t_31);
          {
            ATerm c_32 = NULL;
            t = i_55(t);
            {
              a_32 = t;
              {
                t = not_null(u_31);
                {
                  ATerm e_32 = NULL;
                  t = j_55(t);
                  {
                    c_32 = t;
                    {
                      ATerm f_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(a_32), not_null(c_32)), not_null(y_31));
                      {
                        f_32 = t;
                        if(((e_32 != NULL) && (e_32 != f_32)))
                          _fail(f_32);
                        else
                          e_32 = f_32;
                      }
                      t = not_null(e_32);
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
ATerm GChoice_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_GChoice_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        ATerm x_32 = NULL,z_32 = NULL;
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(r_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
        {
          t = not_null(s_32);
          {
            ATerm b_33 = NULL;
            t = g_55(t);
            {
              z_32 = t;
              {
                t = not_null(t_32);
                {
                  ATerm d_33 = NULL;
                  t = h_55(t);
                  {
                    b_33 = t;
                    {
                      ATerm e_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(z_32), not_null(b_33)), not_null(x_32));
                      {
                        e_33 = t;
                        if(((d_33 != NULL) && (d_33 != e_33)))
                          _fail(e_33);
                        else
                          d_33 = e_33;
                      }
                      t = not_null(d_33);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_GuardedLChoice_3))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      u_33 = ATgetArgument(r_33, 2);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(s_33);
          {
            ATerm d_34 = NULL;
            t = d_55(t);
            {
              b_34 = t;
              {
                t = not_null(t_33);
                {
                  ATerm f_34 = NULL;
                  t = e_55(t);
                  {
                    d_34 = t;
                    {
                      t = not_null(u_33);
                      {
                        ATerm h_34 = NULL;
                        t = f_55(t);
                        {
                          f_34 = t;
                          {
                            ATerm i_34 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_34), not_null(d_34), not_null(f_34)), not_null(z_33));
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
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_LChoice_2))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      {
        ATerm b_35 = NULL,d_35 = NULL;
        ATerm c_35 = NULL;
        t = SSLgetAnnotations(not_null(v_34));
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
        {
          t = not_null(w_34);
          {
            ATerm f_35 = NULL;
            t = b_55(t);
            {
              d_35 = t;
              {
                t = not_null(x_34);
                {
                  ATerm h_35 = NULL;
                  t = c_55(t);
                  {
                    f_35 = t;
                    {
                      ATerm i_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(d_35), not_null(f_35)), not_null(b_35));
                      {
                        i_35 = t;
                        if(((h_35 != NULL) && (h_35 != i_35)))
                          _fail(i_35);
                        else
                          h_35 = i_35;
                      }
                      t = not_null(h_35);
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
ATerm Choice_2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_Choice_2))
    {
      v_35 = ATgetArgument(u_35, 0);
      w_35 = ATgetArgument(u_35, 1);
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        {
          t = not_null(v_35);
          {
            ATerm e_36 = NULL;
            t = z_54(t);
            {
              c_36 = t;
              {
                t = not_null(w_35);
                {
                  ATerm g_36 = NULL;
                  t = a_55(t);
                  {
                    e_36 = t;
                    {
                      ATerm h_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(c_36), not_null(e_36)), not_null(a_36));
                      {
                        h_36 = t;
                        if(((g_36 != NULL) && (g_36 != h_36)))
                          _fail(h_36);
                        else
                          g_36 = h_36;
                      }
                      t = not_null(g_36);
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
ATerm Seq_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Seq_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm c_37 = NULL,e_37 = NULL;
        ATerm d_37 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          d_37 = t;
          if(((c_37 != NULL) && (c_37 != d_37)))
            _fail(d_37);
          else
            c_37 = d_37;
        }
        {
          t = not_null(u_36);
          {
            ATerm g_37 = NULL;
            t = x_54(t);
            {
              e_37 = t;
              {
                t = not_null(v_36);
                {
                  ATerm i_37 = NULL;
                  t = y_54(t);
                  {
                    g_37 = t;
                    {
                      ATerm j_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(e_37), not_null(g_37)), not_null(c_37));
                      {
                        j_37 = t;
                        if(((i_37 != NULL) && (i_37 != j_37)))
                          _fail(j_37);
                        else
                          i_37 = j_37;
                      }
                      t = not_null(i_37);
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
ATerm Test_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym_Test_1))
    {
      v_37 = ATgetArgument(u_37, 0);
      {
        ATerm y_37 = NULL,a_38 = NULL;
        ATerm z_37 = NULL;
        t = SSLgetAnnotations(not_null(u_37));
        {
          z_37 = t;
          if(((y_37 != NULL) && (y_37 != z_37)))
            _fail(z_37);
          else
            y_37 = z_37;
        }
        {
          t = not_null(v_37);
          {
            ATerm c_38 = NULL;
            t = v_54(t);
            {
              a_38 = t;
              {
                ATerm d_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(a_38)), not_null(y_37));
                {
                  d_38 = t;
                  if(((c_38 != NULL) && (c_38 != d_38)))
                    _fail(d_38);
                  else
                    c_38 = d_38;
                }
                t = not_null(c_38);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Not_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        ATerm s_38 = NULL,x_38 = NULL;
        ATerm w_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          w_38 = t;
          if(((s_38 != NULL) && (s_38 != w_38)))
            _fail(w_38);
          else
            s_38 = w_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm z_38 = NULL;
            t = w_54(t);
            {
              x_38 = t;
              {
                ATerm a_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(x_38)), not_null(s_38));
                {
                  a_39 = t;
                  if(((z_38 != NULL) && (z_38 != a_39)))
                    _fail(a_39);
                  else
                    z_38 = a_39;
                }
                t = not_null(z_38);
              }
            }
          }
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
  ATerm j_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym_Fail_0))
    {
      ATerm l_39 = NULL,n_39 = NULL;
      ATerm k_4;
      k_4 = t;
      {
        ATerm m_39 = NULL;
        t = SSLgetAnnotations(not_null(j_39));
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
      }
      t = k_4;
      {
        ATerm o_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(l_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        t = not_null(n_39);
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
  ATerm y_39 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Id_0))
    {
      ATerm b_40 = NULL,d_40 = NULL;
      ATerm l_4;
      l_4 = t;
      {
        ATerm c_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          c_40 = t;
          if(((b_40 != NULL) && (b_40 != c_40)))
            _fail(c_40);
          else
            b_40 = c_40;
        }
      }
      t = l_4;
      {
        ATerm e_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(b_40));
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
        t = not_null(d_40);
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
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm f_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm i_5 = t;
                                                                      int j_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(j_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_5;
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
                                                                  LocalPopChoice(h_5);
                                                                }
                                                              else
                                                                {
                                                                  t = g_5;
                                                                  {
                                                                    ATerm k_5 = t;
                                                                    int l_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
                                                                                    LocalPopChoice(p_5);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_5;
                                                                                    {
                                                                                      ATerm q_5 = t;
                                                                                      int r_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(r_5);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_5;
                                                                                          {
                                                                                            ATerm s_5 = t;
                                                                                            int t_5 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
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
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
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
                                                                                                                                    t = Where_1(t, strategy_expression_0);
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
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
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
                                                                                                                                                LocalPopChoice(j_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = i_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_k_6;
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
ATerm VarDec_2 (ATerm t, ATerm t_55 (ATerm), ATerm u_55 (ATerm))
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  o_40 :
  if(match_cons(q_40, sym_VarDec_2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      {
        ATerm w_40 = NULL,y_40 = NULL;
        ATerm x_40 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        {
          x_40 = t;
          if(((w_40 != NULL) && (w_40 != x_40)))
            _fail(x_40);
          else
            w_40 = x_40;
        }
        {
          t = not_null(r_40);
          {
            ATerm a_41 = NULL;
            t = t_55(t);
            {
              y_40 = t;
              {
                t = not_null(s_40);
                {
                  ATerm c_41 = NULL;
                  t = u_55(t);
                  {
                    a_41 = t;
                    {
                      ATerm d_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_40), not_null(a_41)), not_null(w_40));
                      {
                        d_41 = t;
                        if(((c_41 != NULL) && (c_41 != d_41)))
                          _fail(d_41);
                        else
                          c_41 = d_41;
                      }
                      t = not_null(c_41);
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
ATerm Mod_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_Mod_2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm d_42 = NULL,f_42 = NULL;
        ATerm e_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          e_42 = t;
          if(((d_42 != NULL) && (d_42 != e_42)))
            _fail(e_42);
          else
            d_42 = e_42;
        }
        {
          t = not_null(y_41);
          {
            ATerm h_42 = NULL;
            t = a_57(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm j_42 = NULL;
                  t = b_57(t);
                  {
                    h_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(f_42), not_null(h_42)), not_null(d_42));
                      {
                        k_42 = t;
                        if(((j_42 != NULL) && (j_42 != k_42)))
                          _fail(k_42);
                        else
                          j_42 = k_42;
                      }
                      t = not_null(j_42);
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
ATerm SDef_3 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm s_55 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_SDef_3))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      a_43 = ATgetArgument(x_42, 2);
      {
        ATerm f_43 = NULL,h_43 = NULL;
        ATerm g_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
        {
          t = not_null(y_42);
          {
            ATerm j_43 = NULL;
            t = q_55(t);
            {
              h_43 = t;
              {
                t = not_null(z_42);
                {
                  ATerm l_43 = NULL;
                  t = r_55(t);
                  {
                    j_43 = t;
                    {
                      t = not_null(a_43);
                      {
                        ATerm n_43 = NULL;
                        t = s_55(t);
                        {
                          l_43 = t;
                          {
                            ATerm o_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_43), not_null(j_43), not_null(l_43)), not_null(f_43));
                            {
                              o_43 = t;
                              if(((n_43 != NULL) && (n_43 != o_43)))
                                _fail(o_43);
                              else
                                n_43 = o_43;
                            }
                            t = not_null(n_43);
                          }
                        }
                      }
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
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
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
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_p_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm v_43 (ATerm t)
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        t = Cons_2(t, m_72, v_43);
      }
    return(t);
  }
  t = v_43(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_56 (ATerm))
{
  ATerm b_44 = NULL,c_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_Strategies_1))
    {
      c_44 = ATgetArgument(b_44, 0);
      {
        ATerm f_44 = NULL,h_44 = NULL;
        ATerm g_44 = NULL;
        t = SSLgetAnnotations(not_null(b_44));
        {
          g_44 = t;
          if(((f_44 != NULL) && (f_44 != g_44)))
            _fail(g_44);
          else
            f_44 = g_44;
        }
        {
          t = not_null(c_44);
          {
            ATerm j_44 = NULL;
            t = u_56(t);
            {
              h_44 = t;
              {
                ATerm k_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_44)), not_null(f_44));
                {
                  k_44 = t;
                  if(((j_44 != NULL) && (j_44 != k_44)))
                    _fail(k_44);
                  else
                    j_44 = k_44;
                }
                t = not_null(j_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Specification_1))
    {
      c_45 = ATgetArgument(b_45, 0);
      {
        ATerm h_45 = NULL,j_45 = NULL;
        ATerm i_45 = NULL;
        t = SSLgetAnnotations(not_null(b_45));
        {
          i_45 = t;
          if(((h_45 != NULL) && (h_45 != i_45)))
            _fail(i_45);
          else
            h_45 = i_45;
        }
        {
          t = not_null(c_45);
          {
            ATerm l_45 = NULL;
            t = w_56(t);
            {
              j_45 = t;
              {
                ATerm w_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_45)), not_null(h_45));
                {
                  w_45 = t;
                  if(((l_45 != NULL) && (l_45 != w_45)))
                    _fail(w_45);
                  else
                    l_45 = w_45;
                }
                t = not_null(l_45);
              }
            }
          }
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
  ATerm s_6 = t;
  int t_6 = stack_ptr;
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
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_u_6;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym__2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      {
        ATerm r_46 = NULL,t_46 = NULL;
        ATerm s_46 = NULL;
        t = SSLgetAnnotations(not_null(l_46));
        {
          s_46 = t;
          if(((r_46 != NULL) && (r_46 != s_46)))
            _fail(s_46);
          else
            r_46 = s_46;
        }
        {
          t = not_null(m_46);
          {
            ATerm v_46 = NULL;
            t = r_52(t);
            {
              t_46 = t;
              {
                t = not_null(n_46);
                {
                  ATerm x_46 = NULL;
                  t = s_52(t);
                  {
                    v_46 = t;
                    {
                      ATerm y_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_46), not_null(v_46)), not_null(r_46));
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
  ATerm h_47 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm i_47 = NULL,j_47 = NULL;
      i_47 = t;
      g_47 :
      if(match_cons(i_47, sym_Program_1))
        {
          j_47 = ATgetArgument(i_47, 0);
          if(((h_47 != NULL) && (h_47 != j_47)))
            _fail(j_47);
          else
            h_47 = j_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(h_47)), term_x_6));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  m_47 :
  if(match_cons(n_47, sym__2))
    {
      o_47 = ATgetArgument(n_47, 0);
      p_47 = ATgetArgument(n_47, 1);
      {
        ATerm a_7;
        a_7 = t;
        t = SSL_printnl(not_null(o_47), not_null(p_47));
        t = a_7;
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
  ATerm u_47 = NULL;
  u_47 = t;
  t = SSL_implode_string(not_null(u_47));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm z_47 = NULL,a_48 = NULL,e_48 = NULL;
        z_47 = t;
        y_47 :
        if(((ATgetType(z_47) == AT_LIST) && !(ATisEmpty(z_47))))
          {
            a_48 = ATgetFirst((ATermList) z_47);
            e_48 = (ATerm) ATgetNext((ATermList) z_47);
            {
              t = not_null(a_48);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(e_48);
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
  ATerm o_48 = NULL;
  ATerm q_48 = NULL;
  o_48 = t;
  {
    ATerm r_48 = NULL;
    ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
    t = not_null(o_48);
    {
      r_48 = t;
      {
        t = SSL_explode_term(not_null(r_48));
        {
          t_48 = t;
          m_48 :
          if(match_cons(t_48, sym__2))
            {
              u_48 = ATgetArgument(t_48, 0);
              v_48 = ATgetArgument(t_48, 1);
              n_48 :
              if(match_string(u_48, ""))
                {
                  if(((q_48 != NULL) && (q_48 != v_48)))
                    _fail(v_48);
                  else
                    q_48 = v_48;
                }
              else
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
      t = not_null(q_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm z_48 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_48);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          t = Nil_0(t);
          t = z_72(t);
        }
      }
    return(t);
  }
  t = z_48(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym__2))
    {
      d_49 = ATgetArgument(c_49, 0);
      e_49 = ATgetArgument(c_49, 1);
      {
        t = not_null(d_49);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(e_49);
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
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  t = SSL_explode_string(not_null(j_49));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t = SSL_is_string(not_null(u_49));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm n_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_7);
                }
              else
                {
                  t = n_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, i_1);
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
              d_50 = t;
              c_50 :
              if(match_cons(d_50, sym_Path_1))
                {
                  e_50 = ATgetArgument(d_50, 0);
                  t = not_null(e_50);
                }
              else
                {
                  if(match_cons(d_50, sym_Var_1))
                    {
                      e_50 = ATgetArgument(d_50, 0);
                      {
                        t = not_null(e_50);
                        {
                          ATerm p_7 = t;
                          int q_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_7);
                            }
                          else
                            {
                              t = p_7;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = term_r_7;
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
                      if(match_cons(d_50, sym_Prefix_2))
                        {
                          e_50 = ATgetArgument(d_50, 0);
                          f_50 = ATgetArgument(d_50, 1);
                          {
                            ATerm k_50 = NULL,m_50 = NULL;
                            ATerm s_7;
                            s_7 = t;
                            {
                              ATerm l_50 = NULL;
                              t = not_null(e_50);
                              {
                                t = eval_config_0(t);
                                {
                                  l_50 = t;
                                  if(((k_50 != NULL) && (k_50 != l_50)))
                                    _fail(l_50);
                                  else
                                    k_50 = l_50;
                                }
                              }
                            }
                            t = s_7;
                            {
                              ATerm n_50 = NULL;
                              t = not_null(f_50);
                              {
                                t = eval_config_0(t);
                                {
                                  n_50 = t;
                                  if(((m_50 != NULL) && (m_50 != n_50)))
                                    _fail(n_50);
                                  else
                                    m_50 = n_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(m_50));
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
  ATerm v_50 = NULL;
  v_50 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(v_50));
    {
      t = table_get_0(t);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_7;
              w_7 = t;
              {
                ATerm x_50 = NULL;
                ATerm y_50 = NULL;
                y_50 = t;
                if(((x_50 != NULL) && (x_50 != y_50)))
                  _fail(y_50);
                else
                  x_50 = y_50;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(v_50), not_null(x_50));
                  t = table_put_0(t);
                }
              }
              t = w_7;
            }
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7;
      z_7 = t;
      {
        ATerm c_51 = NULL;
        ATerm d_51 = NULL;
        t = term_a_8;
        {
          t = get_config_0(t);
          {
            d_51 = t;
            if(((c_51 != NULL) && (c_51 != d_51)))
              _fail(d_51);
            else
              c_51 = d_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_51), term_b_8);
          t = geq_0(t);
        }
      }
      t = z_7;
      t = f_86(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      t = SSL_WriteToTextFile(not_null(i_51), not_null(j_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym__2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      t = SSL_WriteToBinaryFile(not_null(q_51), not_null(r_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_51 = NULL;
  ATerm c_8;
  c_8 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm a_52 = NULL,b_52 = NULL;
            a_52 = t;
            w_51 :
            if(match_cons(a_52, sym_Output_1))
              {
                b_52 = ATgetArgument(a_52, 0);
                if(((z_51 != NULL) && (z_51 != b_52)))
                  _fail(b_52);
                else
                  z_51 = b_52;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, l_1);
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm c_52 = NULL;
            t = term_f_8;
            {
              c_52 = t;
              if(((z_51 != NULL) && (z_51 != c_52)))
                _fail(c_52);
              else
                z_51 = c_52;
            }
          }
        }
      return(t);
    }
    t = _2(t, k_1, _id);
  }
  t = c_8;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        t = not_null(z_51);
        return(t);
      }
      t = split_2(t, n_1, _id);
      return(t);
    }
    t = _2(t, _id, m_1);
    {
      ATerm g_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              ATerm d_52 = NULL;
              d_52 = t;
              y_51 :
              if(!(match_cons(d_52, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, p_1);
            return(t);
          }
          t = _2(t, o_1, WriteToBinaryFile_0);
          LocalPopChoice(j_8);
        }
      else
        {
          t = g_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm j_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  ATerm k_8;
  k_8 = t;
  t = dtime_0(t);
  t = k_8;
  {
    t = m_84(t);
    {
      ATerm l_8;
      l_8 = t;
      {
        ATerm k_52 = NULL;
        t = dtime_0(t);
        {
          k_52 = t;
          if(((j_52 != NULL) && (j_52 != k_52)))
            _fail(k_52);
          else
            j_52 = k_52;
        }
      }
      t = l_8;
      {
        l_52 = t;
        i_52 :
        if(match_cons(l_52, sym__2))
          {
            m_52 = ATgetArgument(l_52, 0);
            n_52 = ATgetArgument(l_52, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_52))), not_null(n_52));
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
ATerm debug_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm m_8;
  m_8 = t;
  {
    ATerm w_52 = NULL,y_52 = NULL;
    ATerm n_8;
    n_8 = t;
    {
      ATerm x_52 = NULL;
      t = i_83(t);
      {
        x_52 = t;
        if(((w_52 != NULL) && (w_52 != x_52)))
          _fail(x_52);
        else
          w_52 = x_52;
      }
    }
    t = n_8;
    {
      ATerm z_52 = NULL;
      z_52 = t;
      if(((y_52 != NULL) && (y_52 != z_52)))
        _fail(z_52);
      else
        y_52 = z_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), not_null(w_52)));
        t = printnl_0(t);
      }
    }
  }
  t = m_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_53 = NULL;
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_53 = NULL;
      e_53 = t;
      {
        if(((d_53 != NULL) && (d_53 != e_53)))
          _fail(e_53);
        else
          d_53 = e_53;
        t = SSL_ReadFromFile(not_null(d_53));
      }
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_q_8;
          return(t);
        }
        t = debug_1(t, q_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm i_53 = NULL,k_53 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm j_53 = NULL;
    t = n_80(t);
    {
      j_53 = t;
      if(((i_53 != NULL) && (i_53 != j_53)))
        _fail(j_53);
      else
        i_53 = j_53;
    }
  }
  t = r_8;
  {
    ATerm l_53 = NULL;
    t = o_80(t);
    {
      l_53 = t;
      if(((k_53 != NULL) && (k_53 != l_53)))
        _fail(l_53);
      else
        k_53 = l_53;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_53), not_null(k_53));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_53 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          ATerm s_53 = NULL,t_53 = NULL;
          s_53 = t;
          p_53 :
          if(match_cons(s_53, sym_Input_1))
            {
              t_53 = ATgetArgument(s_53, 0);
              if(((r_53 != NULL) && (r_53 != t_53)))
                _fail(t_53);
              else
                r_53 = t_53;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, r_1);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm u_53 = NULL;
          t = term_v_8;
          {
            u_53 = t;
            if(((r_53 != NULL) && (r_53 != u_53)))
              _fail(u_53);
            else
              r_53 = u_53;
          }
        }
      }
  }
  t = s_8;
  {
    ATerm s_1 (ATerm t)
    {
      t = not_null(r_53);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm y_53 = NULL;
    y_53 = t;
    x_53 :
    if(!(match_string(y_53, "-v")))
      {
        if(!(match_string(y_53, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_y_8;
    t = set_config_0(t);
    t = term_z_8;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  t = Option_3(t, t_1, u_1, v_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm f_54 = NULL;
    f_54 = t;
    z_53 :
    if(!(match_string(f_54, "-k")))
      {
        if(!(match_string(f_54, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm i_54 = NULL;
      ATerm j_54 = NULL;
      t = string_to_int_0(t);
      {
        j_54 = t;
        if(((i_54 != NULL) && (i_54 != j_54)))
          _fail(j_54);
        else
          i_54 = j_54;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(i_54));
        t = set_config_0(t);
      }
    }
    t = b_9;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_d_9;
    return(t);
  }
  t = ArgOption_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  t = SSL_string_to_int(not_null(v_55));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm k_56 = NULL;
        k_56 = t;
        y_55 :
        if(!(match_string(k_56, "-S")))
          {
            if(!(match_string(k_56, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_h_9;
        t = set_config_0(t);
        t = term_i_9;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_j_9;
        return(t);
      }
      t = Option_3(t, z_1, a_2, b_2);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm l_56 = NULL;
              l_56 = t;
              z_55 :
              if(!(match_string(l_56, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm o_56 = NULL;
              ATerm m_9;
              m_9 = t;
              {
                ATerm m_56 = NULL;
                ATerm n_56 = NULL;
                t = string_to_int_0(t);
                {
                  n_56 = t;
                  if(((m_56 != NULL) && (m_56 != n_56)))
                    _fail(n_56);
                  else
                    m_56 = n_56;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(m_56));
                  t = set_config_0(t);
                }
              }
              t = m_9;
              {
                ATerm p_56 = NULL;
                p_56 = t;
                if(((o_56 != NULL) && (o_56 != p_56)))
                  _fail(p_56);
                else
                  o_56 = p_56;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_56));
              }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_n_9;
              return(t);
            }
            t = ArgOption_3(t, c_2, d_2, e_2);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm f_2 (ATerm t)
              {
                ATerm q_56 = NULL;
                q_56 = t;
                j_56 :
                if(!(match_string(q_56, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                t = term_p_9;
                t = set_config_0(t);
                t = term_q_9;
                return(t);
              }
              ATerm h_2 (ATerm t)
              {
                t = term_r_9;
                return(t);
              }
              t = Option_3(t, f_2, g_2, h_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm y_56 = NULL;
    y_56 = t;
    t_56 :
    if(!(match_string(y_56, "-o")))
      {
        if(!(match_string(y_56, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm d_57 = NULL;
    ATerm w_9;
    w_9 = t;
    {
      ATerm z_56 = NULL;
      ATerm c_57 = NULL;
      c_57 = t;
      if(((z_56 != NULL) && (z_56 != c_57)))
        _fail(c_57);
      else
        z_56 = c_57;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(z_56));
        t = set_config_0(t);
      }
    }
    t = w_9;
    {
      ATerm e_57 = NULL;
      e_57 = t;
      if(((d_57 != NULL) && (d_57 != e_57)))
        _fail(e_57);
      else
        d_57 = e_57;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_57));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_y_9;
    return(t);
  }
  t = ArgOption_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_9 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_10);
    }
  else
    {
      t = z_9;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm i_57 = NULL;
          i_57 = t;
          h_57 :
          if(!(match_string(i_57, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_e_10;
          t = set_config_0(t);
          t = term_f_10;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = Option_3(t, l_2, m_2, n_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  o_57 = t;
  m_57 :
  if(match_string(o_57, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_57) == AT_LIST) && !(ATisEmpty(o_57))))
        {
          p_57 = ATgetFirst((ATermList) o_57);
          q_57 = (ATerm) ATgetNext((ATermList) o_57);
          n_57 :
          if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
            {
              r_57 = ATgetFirst((ATermList) q_57);
              s_57 = (ATerm) ATgetNext((ATermList) q_57);
              {
                ATerm w_57 = NULL;
                ATerm h_10;
                h_10 = t;
                {
                  t = not_null(p_57);
                  t = j_0(t);
                }
                t = h_10;
                {
                  ATerm x_57 = NULL;
                  t = not_null(r_57);
                  {
                    t = k_0(t);
                    {
                      x_57 = t;
                      if(((w_57 != NULL) && (w_57 != x_57)))
                        _fail(x_57);
                      else
                        w_57 = x_57;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_57)), not_null(w_57));
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
  ATerm o_2 (ATerm t)
  {
    ATerm e_58 = NULL;
    e_58 = t;
    b_58 :
    if(!(match_string(e_58, "-i")))
      {
        if(!(match_string(e_58, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm k_58 = NULL;
    ATerm i_10;
    i_10 = t;
    {
      ATerm i_58 = NULL;
      ATerm j_58 = NULL;
      j_58 = t;
      if(((i_58 != NULL) && (i_58 != j_58)))
        _fail(j_58);
      else
        i_58 = j_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(i_58));
        t = set_config_0(t);
      }
    }
    t = i_10;
    {
      ATerm l_58 = NULL;
      l_58 = t;
      if(((k_58 != NULL) && (k_58 != l_58)))
        _fail(l_58);
      else
        k_58 = l_58;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_58));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_p_10));
  {
    t = printnl_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  t = SSL_TicksToSeconds(not_null(p_58));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_58), not_null(w_58));
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = SSL_addr(not_null(v_58), not_null(w_58));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_78(t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
        d_59 = t;
        c_59 :
        if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
          {
            e_59 = ATgetFirst((ATermList) d_59);
            f_59 = (ATerm) ATgetNext((ATermList) d_59);
            {
              ATerm i_59 = NULL;
              ATerm j_59 = NULL;
              t = not_null(f_59);
              {
                t = foldr_2(t, y_78, z_78);
                {
                  j_59 = t;
                  if(((i_59 != NULL) && (i_59 != j_59)))
                    _fail(j_59);
                  else
                    i_59 = j_59;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_59), not_null(i_59));
                t = z_78(t);
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
ATerm crush_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm q_59 = NULL;
  ATerm s_59 = NULL;
  q_59 = t;
  {
    ATerm t_59 = NULL;
    ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
    t = not_null(q_59);
    {
      t_59 = t;
      {
        t = SSL_explode_term(not_null(t_59));
        {
          v_59 = t;
          p_59 :
          if(match_cons(v_59, sym__2))
            {
              w_59 = ATgetArgument(v_59, 0);
              x_59 = ATgetArgument(v_59, 1);
              if(((s_59 != NULL) && (s_59 != x_59)))
                _fail(x_59);
              else
                s_59 = x_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_59);
      t = foldr_2(t, w_77, x_77);
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
    ATerm r_2 (ATerm t)
    {
      t = term_g_9;
      return(t);
    }
    t = crush_2(t, r_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym__2))
    {
      e_60 = ATgetArgument(d_60, 0);
      f_60 = ATgetArgument(d_60, 1);
      {
        ATerm u_10;
        u_10 = t;
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_60), not_null(f_60));
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              t = SSL_gtr(not_null(e_60), not_null(f_60));
            }
        }
        t = u_10;
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
  ATerm l_60 = NULL;
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
      m_60 = t;
      k_60 :
      if(match_cons(m_60, sym__2))
        {
          n_60 = ATgetArgument(m_60, 0);
          o_60 = ATgetArgument(m_60, 1);
          {
            if(((l_60 != NULL) && (l_60 != n_60)))
              _fail(n_60);
            else
              l_60 = n_60;
            if(((l_60 != NULL) && (l_60 != o_60)))
              _fail(o_60);
            else
              l_60 = o_60;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11;
      b_11 = t;
      {
        ATerm r_60 = NULL;
        ATerm s_60 = NULL;
        t = term_a_8;
        {
          t = get_config_0(t);
          {
            s_60 = t;
            if(((r_60 != NULL) && (r_60 != s_60)))
              _fail(s_60);
            else
              r_60 = s_60;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_60), term_z_6);
          t = geq_0(t);
        }
      }
      t = b_11;
      t = e_86(t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm w_60 = NULL,y_60 = NULL;
    ATerm c_11;
    c_11 = t;
    {
      ATerm x_60 = NULL;
      t = run_time_0(t);
      {
        x_60 = t;
        if(((w_60 != NULL) && (w_60 != x_60)))
          _fail(x_60);
        else
          w_60 = x_60;
      }
    }
    t = c_11;
    {
      ATerm z_60 = NULL;
      t = term_e_11;
      {
        t = get_config_0(t);
        {
          z_60 = t;
          if(((y_60 != NULL) && (y_60 != z_60)))
            _fail(z_60);
          else
            y_60 = z_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), not_null(w_60)), term_g_11), not_null(y_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_2);
  {
    t = term_g_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  f_61 :
  if(match_cons(g_61, sym_Version_0))
    {
      ATerm i_61 = NULL,k_61 = NULL;
      ATerm i_11;
      i_11 = t;
      {
        ATerm j_61 = NULL;
        t = SSLgetAnnotations(not_null(g_61));
        {
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
        }
      }
      t = i_11;
      {
        ATerm l_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_61));
        {
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
        }
        t = not_null(k_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = k_11;
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, t_2);
  t = k_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  t = SSL_table_create(not_null(q_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_61 = NULL;
  u_61 = t;
  {
    ATerm r_11;
    r_11 = t;
    {
      t = term_s_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_11, term_t_11, not_null(u_61));
          t = table_put_0(t);
        }
      }
    }
    t = r_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  t = SSL_table_destroy(not_null(y_61));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_62 = NULL;
  c_62 = t;
  t = SSL_exit(not_null(c_62));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  f_62 :
  if(((ATgetType(g_62) == AT_LIST) && ATisEmpty(g_62)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_62) == AT_LIST) && !(ATisEmpty(g_62))))
        {
          h_62 = ATgetFirst((ATermList) g_62);
          i_62 = (ATerm) ATgetNext((ATermList) g_62);
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
  ATerm u_11;
  u_11 = t;
  {
    ATerm l_62 = NULL;
    ATerm o_62 = NULL;
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          ATerm m_62 = NULL;
          ATerm n_62 = NULL;
          n_62 = t;
          if(((m_62 != NULL) && (m_62 != n_62)))
            _fail(n_62);
          else
            m_62 = n_62;
          t = (ATerm) ATinsert(ATempty, not_null(m_62));
        }
      }
    {
      o_62 = t;
      if(((l_62 != NULL) && (l_62 != o_62)))
        _fail(o_62);
      else
        l_62 = o_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(l_62));
      t = printnl_0(t);
    }
  }
  t = u_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm r_62 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = Cons_2(t, k_72, r_62);
      }
    return(t);
  }
  t = r_62(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  a_63 = t;
  x_62 :
  if(((ATgetType(a_63) == AT_LIST) && !(ATisEmpty(a_63))))
    {
      y_62 = ATgetFirst((ATermList) a_63);
      z_62 = (ATerm) ATgetNext((ATermList) a_63);
      {
        ATerm d_63 = NULL;
        t = not_null(z_62);
        {
          ATerm d_12;
          d_12 = t;
          {
            ATerm e_63 = NULL,g_63 = NULL,i_63 = NULL;
            ATerm e_12;
            e_12 = t;
            {
              ATerm f_63 = NULL;
              t = i_0(t);
              {
                f_63 = t;
                if(((e_63 != NULL) && (e_63 != f_63)))
                  _fail(f_63);
                else
                  e_63 = f_63;
              }
            }
            t = e_12;
            {
              ATerm h_63 = NULL;
              t = not_null(y_62);
              {
                t = h_0(t);
                {
                  h_63 = t;
                  if(((g_63 != NULL) && (g_63 != h_63)))
                    _fail(h_63);
                  else
                    g_63 = h_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_63)), not_null(g_63));
                {
                  i_63 = t;
                  if(((d_63 != NULL) && (d_63 != i_63)))
                    _fail(i_63);
                  else
                    d_63 = i_63;
                }
              }
            }
          }
          t = d_12;
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(d_63);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_63) == AT_LIST) && ATisEmpty(a_63)))
        {
          {
            t = term_x_8;
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
  ATerm v_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm t_63 = NULL,u_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym_Program_1))
    {
      u_63 = ATgetArgument(t_63, 0);
      {
        ATerm x_63 = NULL,z_63 = NULL;
        ATerm y_63 = NULL;
        t = SSLgetAnnotations(not_null(t_63));
        {
          y_63 = t;
          if(((x_63 != NULL) && (x_63 != y_63)))
            _fail(y_63);
          else
            x_63 = y_63;
        }
        {
          t = not_null(u_63);
          {
            ATerm b_64 = NULL;
            t = g_64(t);
            {
              z_63 = t;
              {
                ATerm c_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_63)), not_null(x_63));
                {
                  c_64 = t;
                  if(((b_64 != NULL) && (b_64 != c_64)))
                    _fail(c_64);
                  else
                    b_64 = c_64;
                }
                t = not_null(b_64);
              }
            }
          }
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
  ATerm m_64 = NULL;
  ATerm f_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_64 = NULL;
      t = term_e_11;
      {
        t = get_config_0(t);
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
      }
      LocalPopChoice(j_12);
    }
  else
    {
      t = f_12;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm o_64 = NULL;
            o_64 = t;
            if(((m_64 != NULL) && (m_64 != o_64)))
              _fail(o_64);
            else
              m_64 = o_64;
            return(t);
          }
          t = Program_1(t, x_2);
          return(t);
        }
        t = fetch_1(t, w_2);
      }
    }
  {
    t = term_l_12;
    {
      t = echo_0(t);
      {
        t = term_q_12;
        {
          t = table_get_0(t);
          {
            ATerm y_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, y_2);
            {
              ATerm z_2 (ATerm t)
              {
                ATerm p_64 = NULL;
                ATerm q_64 = NULL;
                q_64 = t;
                if(((p_64 != NULL) && (p_64 != q_64)))
                  _fail(q_64);
                else
                  p_64 = q_64;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_64)), term_r_12);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, z_2);
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
  ATerm s_12;
  s_12 = t;
  {
    ATerm y_64 = NULL;
    ATerm z_64 = NULL;
    z_64 = t;
    if(((y_64 != NULL) && (y_64 != z_64)))
      _fail(z_64);
    else
      y_64 = z_64;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(y_64)));
      t = printnl_0(t);
    }
  }
  t = s_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_83 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    t = j_83(t);
    t = debug_0(t);
  }
  t = t_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_64 (ATerm))
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
            t = h_64(t);
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
ATerm fetch_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm u_65 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_72, _id);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = Cons_2(t, _id, u_65);
      }
    return(t);
  }
  t = u_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_87 (ATerm))
{
  t = fetch_1(t, h_87);
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
      ATerm w_12;
      w_12 = t;
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
      t = w_12;
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
ATerm try_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_64(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
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
        ATerm z_12;
        z_12 = t;
        {
          ATerm a_67 = NULL;
          ATerm b_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_66), not_null(v_66));
          {
            ATerm a_13 = t;
            int e_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_13);
              }
            else
              {
                t = a_13;
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
        t = z_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm f_67 = NULL;
  ATerm g_67 = NULL;
  t = term_x_8;
  {
    t = m_88(t);
    {
      g_67 = t;
      if(((f_67 != NULL) && (f_67 != g_67)))
        _fail(g_67);
      else
        f_67 = g_67;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, not_null(f_67));
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
            ATerm f_13;
            f_13 = t;
            {
              t = not_null(n_67);
              t = a_0(t);
            }
            t = f_13;
            {
              ATerm s_67 = NULL;
              t = term_x_8;
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
  ATerm a_3 (ATerm t)
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
  ATerm b_3 (ATerm t)
  {
    t = term_m_13;
    {
      t = set_config_0(t);
      t = term_n_13;
    }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = Option_3(t, a_3, b_3, c_3);
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
ATerm Cons_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
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
            t = a_54(t);
            {
              u_68 = t;
              {
                t = not_null(o_68);
                {
                  ATerm y_68 = NULL;
                  t = b_54(t);
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
        ATerm u_13;
        u_13 = t;
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
        t = u_13;
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
        t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(v_69), not_null(w_69));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm v_13;
  v_13 = t;
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_13;
        t = k_88(t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        {
        }
      }
  }
  t = v_13;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_70 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm c_70 = NULL;
        ATerm d_70 = NULL;
        d_70 = t;
        if(((c_70 != NULL) && (c_70 != d_70)))
          _fail(d_70);
        else
          c_70 = d_70;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(c_70));
          t = set_config_0(t);
        }
      }
      t = z_13;
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
    ATerm e_3 (ATerm t)
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                t = k_88(t);
                t = Cons_2(t, _id, e_3);
              }
            }
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_3, e_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  ATerm e_14;
  e_14 = t;
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
  t = e_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm u_70 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    t = term_g_14;
    t = table_put_0(t);
  }
  t = f_14;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_88(t);
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_3);
    {
      ATerm n_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14;
          t_14 = t;
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_13;
                t = get_config_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_14;
          {
            t = system_usage_0(t);
            {
              t = term_g_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(r_14);
        }
      else
        {
          t = n_14;
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm v_70 = NULL;
                    v_70 = t;
                    if(((u_70 != NULL) && (u_70 != v_70)))
                      _fail(v_70);
                    else
                      u_70 = v_70;
                    return(t);
                  }
                  t = Undefined_1(t, h_3);
                  return(t);
                }
                t = fetch_1(t, g_3);
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_70)), term_a_15);
                    return(t);
                  }
                  t = say_1(t, i_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                {
                }
              }
          }
        }
      {
        ATerm b_15;
        b_15 = t;
        {
          t = term_o_12;
          t = table_destroy_0(t);
        }
        t = b_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  t = parse_options_1(t, q_84);
  {
    t = store_options_0(t);
    {
      t = s_84(t);
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_84);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm e_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_84(t);
                  t = report_success_0(t);
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = e_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm j_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_85(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = j_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_85);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_3, j_85, k_85, k_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      ATerm q_15;
      q_15 = t;
      {
        ATerm y_70 = NULL;
        ATerm z_70 = NULL;
        t = term_e_11;
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
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(y_70)));
          t = printnl_0(t);
        }
      }
      t = q_15;
      return(t);
    }
    t = if_verbose2_1(t, m_3);
    return(t);
  }
  t = iowrap_4(t, b_85, c_85, d_85, l_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_84 (ATerm), ATerm a_85 (ATerm))
{
  t = iowrap_3(t, z_84, a_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    t = _2(t, _id, w_84);
    return(t);
  }
  t = iowrap_2(t, n_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
