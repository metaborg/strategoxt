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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_y_19;
ATerm term_q_19;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_o_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_g_11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_g_11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_o_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_g_11);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__3, term_m_17, term_o_17, (ATerm) ATempty);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm t_67 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm Let_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm r_57 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm p_67 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm n_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm i_79 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm crush_3 (ATerm, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm diff_1 (ATerm, ATerm e_79 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm for_3 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm zip_1 (ATerm, ATerm s_73 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm t_81 (ATerm), ATerm u_81 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm e_82 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_82 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm h_82 (ATerm));
ATerm rename_4 (ATerm, ATerm o_81 (ATerm, ATerm (ATerm)), ATerm p_81 (ATerm), ATerm q_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_81 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_86 (ATerm));
ATerm debug_1 (ATerm, ATerm o_87 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm crush_2 (ATerm, ATerm x_78 (ATerm), ATerm y_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_90 (ATerm));
ATerm map_1 (ATerm, ATerm c_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_90 (ATerm));
ATerm Program_1 (ATerm, ATerm z_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_86 (ATerm), ATerm u_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_86 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,r_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && !(ATisEmpty(f_3))))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      r_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = not_null(g_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, t_67);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
            d_4 = t;
            y_3 :
            if(match_cons(d_4, sym__2))
              {
                e_4 = ATgetArgument(d_4, 0);
                i_4 = ATgetArgument(d_4, 1);
                z_3 :
                if(match_cons(e_4, sym_SDef_3))
                  {
                    f_4 = ATgetArgument(e_4, 0);
                    g_4 = ATgetArgument(e_4, 1);
                    h_4 = ATgetArgument(e_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_4), not_null(g_4), not_null(h_4));
                  }
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
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      ;
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
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, t_67);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
                  m_4 = t;
                  b_4 :
                  if(match_cons(m_4, sym__2))
                    {
                      n_4 = ATgetArgument(m_4, 0);
                      q_4 = ATgetArgument(m_4, 1);
                      c_4 :
                      if(match_cons(n_4, sym_VarDec_2))
                        {
                          o_4 = ATgetArgument(n_4, 0);
                          p_4 = ATgetArgument(n_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_4), not_null(p_4));
                        }
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
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            ;
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = t_67(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_Rec_2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm i_5 = NULL,k_5 = NULL;
        ATerm j_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          j_5 = t;
          if(((i_5 != NULL) && (i_5 != j_5)))
            _fail(j_5);
          else
            i_5 = j_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm m_5 = NULL;
            t = s_57(t);
            {
              k_5 = t;
              {
                t = not_null(e_5);
                {
                  ATerm o_5 = NULL;
                  t = t_57(t);
                  {
                    m_5 = t;
                    {
                      ATerm p_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(k_5), not_null(m_5)), not_null(i_5));
                      {
                        p_5 = t;
                        if(((o_5 != NULL) && (o_5 != p_5)))
                          _fail(p_5);
                        else
                          o_5 = p_5;
                      }
                      t = not_null(o_5);
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
ATerm SDef_3 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym_SDef_3))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      f_6 = ATgetArgument(c_6, 2);
      {
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = SSLgetAnnotations(not_null(c_6));
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
        {
          t = not_null(d_6);
          {
            ATerm o_6 = NULL;
            t = w_57(t);
            {
              m_6 = t;
              {
                t = not_null(e_6);
                {
                  ATerm q_6 = NULL;
                  t = x_57(t);
                  {
                    o_6 = t;
                    {
                      t = not_null(f_6);
                      {
                        ATerm s_6 = NULL;
                        t = y_57(t);
                        {
                          q_6 = t;
                          {
                            ATerm t_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(m_6), not_null(o_6), not_null(q_6)), not_null(k_6));
                            {
                              t_6 = t;
                              if(((s_6 != NULL) && (s_6 != t_6)))
                                _fail(t_6);
                              else
                                s_6 = t_6;
                            }
                            t = not_null(s_6);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym_Let_2))
    {
      h_7 = ATgetArgument(g_7, 0);
      i_7 = ATgetArgument(g_7, 1);
      {
        ATerm m_7 = NULL,o_7 = NULL;
        ATerm n_7 = NULL;
        t = SSLgetAnnotations(not_null(g_7));
        {
          n_7 = t;
          if(((m_7 != NULL) && (m_7 != n_7)))
            _fail(n_7);
          else
            m_7 = n_7;
        }
        {
          t = not_null(h_7);
          {
            ATerm q_7 = NULL;
            t = u_57(t);
            {
              o_7 = t;
              {
                t = not_null(i_7);
                {
                  ATerm s_7 = NULL;
                  t = v_57(t);
                  {
                    q_7 = t;
                    {
                      ATerm t_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_7), not_null(q_7)), not_null(m_7));
                      {
                        t_7 = t;
                        if(((s_7 != NULL) && (s_7 != t_7)))
                          _fail(t_7);
                        else
                          s_7 = t_7;
                      }
                      t = not_null(s_7);
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
ATerm sboundin_3 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm z_4 = t;
  int a_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, u_67, u_67);
      ;
      LocalPopChoice(a_5);
    }
  else
    {
      t = z_4;
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, w_67, w_67, u_67);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            t = Rec_2(t, w_67, u_67);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_Rec_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(c_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_SDef_3))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      o_8 = ATgetArgument(l_8, 2);
      {
        t = not_null(n_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
            s_8 = t;
            j_8 :
            if(match_cons(s_8, sym_VarDec_2))
              {
                t_8 = ATgetArgument(s_8, 0);
                u_8 = ATgetArgument(s_8, 1);
                t = not_null(t_8);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_0);
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Let_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        t = not_null(d_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
            h_9 = t;
            a_9 :
            if(match_cons(h_9, sym_SDef_3))
              {
                i_9 = ATgetArgument(h_9, 0);
                j_9 = ATgetArgument(h_9, 1);
                k_9 = ATgetArgument(h_9, 2);
                t = not_null(i_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_SVar_1))
    {
      w_9 = ATgetArgument(v_9, 0);
      {
        ATerm z_9 = NULL,b_10 = NULL;
        ATerm a_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          a_10 = t;
          if(((z_9 != NULL) && (z_9 != a_10)))
            _fail(a_10);
          else
            z_9 = a_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm d_10 = NULL;
            t = r_57(t);
            {
              b_10 = t;
              {
                ATerm e_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_10)), not_null(z_9));
                {
                  e_10 = t;
                  if(((d_10 != NULL) && (d_10 != e_10)))
                    _fail(e_10);
                  else
                    d_10 = e_10;
                }
                t = not_null(d_10);
              }
            }
          }
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
  ATerm q_0 (ATerm t)
  {
    ATerm h_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(l_5);
      }
    else
      {
        t = h_5;
        {
          ATerm n_5 = t;
          int q_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(q_5);
            }
          else
            {
              t = n_5;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm p_67 (ATerm))
{
  t = Scope_2(t, p_67, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_DynamicRules_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm w_10 = NULL;
            t = n_59(t);
            {
              u_10 = t;
              {
                ATerm x_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_10)), not_null(s_10));
                {
                  x_10 = t;
                  if(((w_10 != NULL) && (w_10 != x_10)))
                    _fail(x_10);
                  else
                    w_10 = x_10;
                }
                t = not_null(w_10);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Scope_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm o_11 = NULL,q_11 = NULL;
        ATerm p_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm s_11 = NULL;
            t = q_56(t);
            {
              q_11 = t;
              {
                t = not_null(k_11);
                {
                  ATerm u_11 = NULL;
                  t = r_56(t);
                  {
                    s_11 = t;
                    {
                      ATerm v_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_11), not_null(s_11)), not_null(o_11));
                      {
                        v_11 = t;
                        if(((u_11 != NULL) && (u_11 != v_11)))
                          _fail(v_11);
                        else
                          u_11 = v_11;
                      }
                      t = not_null(u_11);
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
ATerm tboundin_3 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm))
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, s_67, q_67);
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      t = DynamicRules_1(t, q_67);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_DynamicRules_1))
    {
      e_12 = ATgetArgument(d_12, 0);
      {
        t = not_null(e_12);
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
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Var_1))
    {
      k_12 = ATgetArgument(j_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        t = not_null(q_12);
        {
          ATerm v_12 (ATerm t)
          {
            ATerm t_5 = t;
            int u_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_12);
                ;
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
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(r_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_79, r_0);
                      t = v_12(t);
                      ;
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = Cons_2(t, _id, v_12);
                    }
                }
              }
            return(t);
          }
          t = v_12(t);
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
ATerm foldr_3 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_80(t);
      ;
      LocalPopChoice(y_5);
    }
  else
    {
      t = x_5;
      {
        ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
        a_13 = t;
        z_12 :
        if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
          {
            b_13 = ATgetFirst((ATermList) a_13);
            c_13 = (ATerm) ATgetNext((ATermList) a_13);
            {
              ATerm f_13 = NULL,h_13 = NULL;
              ATerm z_5;
              z_5 = t;
              {
                ATerm g_13 = NULL;
                t = not_null(b_13);
                {
                  t = d_80(t);
                  {
                    g_13 = t;
                    if(((f_13 != NULL) && (f_13 != g_13)))
                      _fail(g_13);
                    else
                      f_13 = g_13;
                  }
                }
              }
              t = z_5;
              {
                ATerm i_13 = NULL;
                t = not_null(c_13);
                {
                  t = foldr_3(t, b_80, c_80, d_80);
                  {
                    i_13 = t;
                    if(((h_13 != NULL) && (h_13 != i_13)))
                      _fail(i_13);
                    else
                      h_13 = i_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(h_13));
                  t = c_80(t);
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
ATerm crush_3 (ATerm t, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  ATerm q_13 = NULL;
  ATerm s_13 = NULL;
  q_13 = t;
  {
    ATerm t_13 = NULL;
    ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
    t = not_null(q_13);
    {
      t_13 = t;
      {
        t = SSL_explode_term(not_null(t_13));
        {
          v_13 = t;
          p_13 :
          if(match_cons(v_13, sym__2))
            {
              w_13 = ATgetArgument(v_13, 0);
              x_13 = ATgetArgument(v_13, 1);
              if(((s_13 != NULL) && (s_13 != x_13)))
                _fail(x_13);
              else
                s_13 = x_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_13);
      t = foldr_3(t, z_78, a_79, b_79);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym__2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
    {
      m_14 = ATgetFirst((ATermList) l_14);
      n_14 = (ATerm) ATgetNext((ATermList) l_14);
      {
        t = n_79(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm q_14 = NULL;
            q_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(q_14));
              t = m_79(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(n_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        t = not_null(x_14);
        {
          ATerm c_15 (ATerm t)
          {
            ATerm a_6 = t;
            int g_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(g_6);
              }
            else
              {
                t = a_6;
                {
                  ATerm h_6 = t;
                  int i_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(y_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_79, t_0);
                      t = c_15(t);
                      ;
                      LocalPopChoice(i_6);
                    }
                  else
                    {
                      t = h_6;
                      t = Cons_2(t, _id, c_15);
                    }
                }
              }
            return(t);
          }
          t = c_15(t);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  g_15 = t;
  e_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      f_15 :
      if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
        {
          j_15 = ATgetFirst((ATermList) i_15);
          k_15 = (ATerm) ATgetNext((ATermList) i_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_15)), not_null(j_15)), not_null(k_15));
        }
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  x_15 :
  if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
    {
      a_16 = ATgetFirst((ATermList) z_15);
      d_16 = (ATerm) ATgetNext((ATermList) z_15);
      y_15 :
      if(match_cons(a_16, sym__2))
        {
          b_16 = ATgetArgument(a_16, 0);
          c_16 = ATgetArgument(a_16, 1);
          {
            ATerm h_16 = NULL,i_16 = NULL,o_16 = NULL,u_16 = NULL;
            ATerm j_6;
            j_6 = t;
            {
              ATerm j_16 = NULL;
              ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
              t = not_null(c_16);
              {
                j_16 = t;
                {
                  t = SSL_explode_term(not_null(j_16));
                  {
                    l_16 = t;
                    s_15 :
                    if(match_cons(l_16, sym__2))
                      {
                        m_16 = ATgetArgument(l_16, 0);
                        n_16 = ATgetArgument(l_16, 1);
                        {
                          if(((h_16 != NULL) && (h_16 != m_16)))
                            _fail(m_16);
                          else
                            h_16 = m_16;
                          if(((i_16 != NULL) && (i_16 != n_16)))
                            _fail(n_16);
                          else
                            i_16 = n_16;
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
            t = j_6;
            {
              ATerm n_6;
              n_6 = t;
              {
                ATerm p_16 = NULL;
                ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
                t = not_null(b_16);
                {
                  p_16 = t;
                  {
                    t = SSL_explode_term(not_null(p_16));
                    {
                      r_16 = t;
                      v_15 :
                      if(match_cons(r_16, sym__2))
                        {
                          s_16 = ATgetArgument(r_16, 0);
                          t_16 = ATgetArgument(r_16, 1);
                          {
                            if(((h_16 != NULL) && (h_16 != s_16)))
                              _fail(s_16);
                            else
                              h_16 = s_16;
                            if(((o_16 != NULL) && (o_16 != t_16)))
                              _fail(t_16);
                            else
                              o_16 = t_16;
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
              t = n_6;
              {
                ATerm v_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), not_null(i_16));
                {
                  t = zip_1(t, _id);
                  {
                    v_16 = t;
                    if(((u_16 != NULL) && (u_16 != v_16)))
                      _fail(v_16);
                    else
                      u_16 = v_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(d_16));
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
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  f_17 = t;
  d_17 :
  if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
    {
      g_17 = ATgetFirst((ATermList) f_17);
      j_17 = (ATerm) ATgetNext((ATermList) f_17);
      e_17 :
      if(match_cons(g_17, sym__2))
        {
          h_17 = ATgetArgument(g_17, 0);
          i_17 = ATgetArgument(g_17, 1);
          {
            ATerm l_17 = NULL;
            if(((h_17 != NULL) && (h_17 != i_17)))
              _fail(i_17);
            else
              h_17 = i_17;
            {
              if(((l_17 != NULL) && (l_17 != j_17)))
                _fail(j_17);
              else
                l_17 = j_17;
              t = not_null(l_17);
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
ATerm while_not_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm n_17 (ATerm t)
  {
    ATerm p_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_85(t);
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = p_6;
        {
          t = y_85(t);
          t = n_17(t);
        }
      }
    return(t);
  }
  t = n_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  t = a_86(t);
  t = while_not_2(t, b_86, c_86);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm p_17 = NULL;
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_17));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm y_6 = t;
              int z_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(z_6);
                }
              else
                {
                  t = y_6;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, x_0);
            ;
            LocalPopChoice(x_6);
          }
        else
          {
            t = w_6;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm v_17 (ATerm t)
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_83(t);
        ;
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        {
          ATerm c_7 = t;
          int d_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_17 = NULL;
              ATerm e_7;
              e_7 = t;
              {
                ATerm u_17 = NULL;
                t = s_83(t);
                {
                  u_17 = t;
                  if(((t_17 != NULL) && (t_17 != u_17)))
                    _fail(u_17);
                  else
                    t_17 = u_17;
                }
              }
              t = e_7;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(t_17);
                    return(t);
                  }
                  t = split_2(t, v_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_83(t, y_0, v_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(d_7);
            }
          else
            {
              t = c_7;
              {
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_1, union_0, v_17);
              }
            }
        }
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  z_17 :
  if(match_cons(e_18, sym_LRule_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      a_18 :
      if(match_cons(f_18, sym_Rule_3))
        {
          b_18 = ATgetArgument(f_18, 0);
          c_18 = ATgetArgument(f_18, 1);
          d_18 = ATgetArgument(f_18, 2);
          {
            t = not_null(b_18);
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
      if(match_cons(e_18, sym_Scope_2))
        {
          f_18 = ATgetArgument(e_18, 0);
          g_18 = ATgetArgument(e_18, 1);
          t = not_null(f_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Var_1))
    {
      y_18 = ATgetArgument(x_18, 0);
      {
        ATerm l_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19 = NULL,d_19 = NULL;
            ATerm c_19 = NULL;
            t = SSLgetAnnotations(not_null(x_18));
            {
              c_19 = t;
              if(((b_19 != NULL) && (b_19 != c_19)))
                _fail(c_19);
              else
                b_19 = c_19;
            }
            {
              t = not_null(y_18);
              {
                ATerm f_19 = NULL;
                t = m_0(t);
                {
                  d_19 = t;
                  {
                    ATerm g_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_19)), not_null(b_19));
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
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = l_7;
            {
              ATerm j_19 = NULL,l_19 = NULL;
              ATerm k_19 = NULL;
              t = SSLgetAnnotations(not_null(x_18));
              {
                k_19 = t;
                if(((j_19 != NULL) && (j_19 != k_19)))
                  _fail(k_19);
                else
                  j_19 = k_19;
              }
              {
                t = not_null(y_18);
                {
                  ATerm n_19 = NULL;
                  t = m_0(t);
                  {
                    l_19 = t;
                    {
                      ATerm o_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_19)), not_null(j_19));
                      {
                        o_19 = t;
                        if(((n_19 != NULL) && (n_19 != o_19)))
                          _fail(o_19);
                        else
                          n_19 = o_19;
                      }
                      t = not_null(n_19);
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
ATerm DistBinding_2 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym__3))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      e_20 = ATgetArgument(b_20, 2);
      {
        t = not_null(c_20);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm i_20 = NULL;
            i_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(e_20));
              t = z_81(t);
            }
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            ATerm k_20 = NULL;
            k_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(d_20));
              t = z_81(t);
            }
            return(t);
          }
          t = a_82(t, e_1, f_1, _id);
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
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym__2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_20)), not_null(s_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  b_21 = t;
  y_20 :
  if(match_cons(b_21, sym__2))
    {
      c_21 = ATgetArgument(b_21, 0);
      f_21 = ATgetArgument(b_21, 1);
      z_20 :
      if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
        {
          d_21 = ATgetFirst((ATermList) c_21);
          e_21 = (ATerm) ATgetNext((ATermList) c_21);
          a_21 :
          if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
            {
              g_21 = ATgetFirst((ATermList) f_21);
              h_21 = (ATerm) ATgetNext((ATermList) f_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_21), not_null(g_21)), (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(h_21)));
            }
          else
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
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  o_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      p_21 :
      if(((ATgetType(s_21) == AT_LIST) && ATisEmpty(s_21)))
        {
          q_21 :
          if(((ATgetType(t_21) == AT_LIST) && ATisEmpty(t_21)))
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
ATerm genzip_4 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm r_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_73(t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = r_7;
        {
          t = o_73(t);
          {
            t = _2(t, q_73, v_21);
            t = p_73(t);
          }
        }
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_73);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm t_81 (ATerm), ATerm u_81 (ATerm, ATerm (ATerm)))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,q_22 = NULL;
        ATerm v_7;
        v_7 = t;
        {
          ATerm l_22 = NULL;
          t = not_null(e_22);
          {
            ATerm m_22 = NULL;
            t = t_81(t);
            {
              l_22 = t;
              {
                if(((i_22 != NULL) && (i_22 != l_22)))
                  _fail(l_22);
                else
                  i_22 = l_22;
                {
                  ATerm n_22 = NULL,p_22 = NULL;
                  t = map_1(t, new_0);
                  {
                    m_22 = t;
                    {
                      if(((j_22 != NULL) && (j_22 != m_22)))
                        _fail(m_22);
                      else
                        j_22 = m_22;
                      {
                        ATerm o_22 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(j_22));
                        {
                          t = zip_1(t, _id);
                          {
                            o_22 = t;
                            if(((n_22 != NULL) && (n_22 != o_22)))
                              _fail(o_22);
                            else
                              n_22 = o_22;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), not_null(f_22));
                          {
                            t = conc_0(t);
                            {
                              p_22 = t;
                              if(((k_22 != NULL) && (k_22 != p_22)))
                                _fail(p_22);
                              else
                                k_22 = p_22;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = v_7;
        {
          ATerm r_22 = NULL;
          t = not_null(e_22);
          {
            ATerm g_1 (ATerm t)
            {
              t = not_null(j_22);
              return(t);
            }
            t = u_81(t, g_1);
            {
              r_22 = t;
              if(((q_22 != NULL) && (q_22 != r_22)))
                _fail(r_22);
              else
                q_22 = r_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), not_null(f_22), not_null(k_22));
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
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  b_23 = t;
  z_22 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      a_23 :
      if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
        {
          e_23 = ATgetFirst((ATermList) d_23);
          f_23 = (ATerm) ATgetNext((ATermList) d_23);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), not_null(f_23));
        }
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
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,r_24 = NULL;
  n_23 = t;
  k_23 :
  if(match_cons(n_23, sym__2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      l_23 :
      if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
        {
          q_23 = ATgetFirst((ATermList) p_23);
          r_24 = (ATerm) ATgetNext((ATermList) p_23);
          m_23 :
          if(match_cons(q_23, sym__2))
            {
              r_23 = ATgetArgument(q_23, 0);
              s_23 = ATgetArgument(q_23, 1);
              {
                ATerm t_24 = NULL;
                if(((o_23 != NULL) && (o_23 != r_23)))
                  _fail(r_23);
                else
                  o_23 = r_23;
                {
                  if(((t_24 != NULL) && (t_24 != s_23)))
                    _fail(s_23);
                  else
                    t_24 = s_23;
                  t = not_null(t_24);
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
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm e_82 (ATerm, ATerm (ATerm)))
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym__2))
    {
      z_24 = ATgetArgument(y_24, 0);
      a_25 = ATgetArgument(y_24, 1);
      {
        t = not_null(z_24);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(a_25);
              return(t);
            }
            t = split_2(t, _id, i_1);
            t = lookup_0(t);
            return(t);
          }
          t = e_82(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm x_82 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym__2))
    {
      i_25 = ATgetArgument(h_25, 0);
      j_25 = ATgetArgument(h_25, 1);
      {
        t = not_null(i_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm n_25 = NULL;
            n_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_25), not_null(j_25));
              t = x_82(t);
            }
            return(t);
          }
          t = _all(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm r_25 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_82(t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = all_dist_1(t, r_25);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm o_81 (ATerm, ATerm (ATerm)), ATerm p_81 (ATerm), ATerm q_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_81 (ATerm, ATerm (ATerm)))
{
  ATerm t_25 = NULL;
  t_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), (ATerm) ATempty);
    {
      ATerm w_25 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm e_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, o_81);
              ;
              LocalPopChoice(f_8);
            }
          else
            {
              t = e_8;
              {
                t = RnBinding_2(t, p_81, r_81);
                t = DistBinding_2(t, w_25, q_81);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_1);
        return(t);
      }
      t = w_25(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm x_25 (ATerm t, ATerm y_25 (ATerm))
  {
    t = Scope_2(t, y_25, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, x_25);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm l_26 = NULL,n_26 = NULL;
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(f_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
        {
          t = not_null(g_26);
          {
            ATerm p_26 = NULL;
            t = x_54(t);
            {
              n_26 = t;
              {
                t = not_null(h_26);
                {
                  ATerm r_26 = NULL;
                  t = y_54(t);
                  {
                    p_26 = t;
                    {
                      ATerm s_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_26), not_null(p_26)), not_null(l_26));
                      {
                        s_26 = t;
                        if(((r_26 != NULL) && (r_26 != s_26)))
                          _fail(s_26);
                        else
                          r_26 = s_26;
                      }
                      t = not_null(r_26);
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
  ATerm a_27 = NULL;
  ATerm g_8;
  g_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm b_27 = NULL,c_27 = NULL;
      b_27 = t;
      z_26 :
      if(match_cons(b_27, sym_Program_1))
        {
          c_27 = ATgetArgument(b_27, 0);
          if(((a_27 != NULL) && (a_27 != c_27)))
            _fail(c_27);
          else
            a_27 = c_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), not_null(a_27)), term_i_8));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym__2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm r_8;
        r_8 = t;
        t = SSL_printnl(not_null(h_27), not_null(i_27));
        t = r_8;
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
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_implode_string(not_null(n_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        s_27 = t;
        r_27 :
        if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
          {
            t_27 = ATgetFirst((ATermList) s_27);
            u_27 = (ATerm) ATgetNext((ATermList) s_27);
            {
              t = not_null(t_27);
              {
                ATerm m_1 (ATerm t)
                {
                  t = not_null(u_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_1);
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
  ATerm e_28 = NULL;
  ATerm k_28 = NULL;
  e_28 = t;
  {
    ATerm l_28 = NULL;
    ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
    t = not_null(e_28);
    {
      l_28 = t;
      {
        t = SSL_explode_term(not_null(l_28));
        {
          n_28 = t;
          c_28 :
          if(match_cons(n_28, sym__2))
            {
              o_28 = ATgetArgument(n_28, 0);
              p_28 = ATgetArgument(n_28, 1);
              d_28 :
              if(match_string(o_28, ""))
                {
                  if(((k_28 != NULL) && (k_28 != p_28)))
                    _fail(p_28);
                  else
                    k_28 = p_28;
                }
              else
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
      t = not_null(k_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm v_28 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_28);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          t = Nil_0(t);
          t = r_75(t);
        }
      }
    return(t);
  }
  t = v_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym__2))
    {
      z_28 = ATgetArgument(y_28, 0);
      a_29 = ATgetArgument(y_28, 1);
      {
        t = not_null(z_28);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(a_29);
            return(t);
          }
          t = at_end_1(t, n_1);
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
  ATerm z_8 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = z_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_explode_string(not_null(f_29));
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
  ATerm j_29 = NULL;
  j_29 = t;
  t = SSL_is_string(not_null(j_29));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = g_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_1);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
              s_29 = t;
              r_29 :
              if(match_cons(s_29, sym_Path_1))
                {
                  t_29 = ATgetArgument(s_29, 0);
                  t = not_null(t_29);
                }
              else
                {
                  if(match_cons(s_29, sym_Var_1))
                    {
                      t_29 = ATgetArgument(s_29, 0);
                      {
                        t = not_null(t_29);
                        {
                          ATerm o_9 = t;
                          int p_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(p_9);
                            }
                          else
                            {
                              t = o_9;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = term_q_9;
                                  return(t);
                                }
                                t = debug_1(t, p_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_29, sym_Prefix_2))
                        {
                          t_29 = ATgetArgument(s_29, 0);
                          u_29 = ATgetArgument(s_29, 1);
                          {
                            ATerm e_30 = NULL,g_30 = NULL;
                            ATerm r_9;
                            r_9 = t;
                            {
                              ATerm f_30 = NULL;
                              t = not_null(t_29);
                              {
                                t = eval_config_0(t);
                                {
                                  f_30 = t;
                                  if(((e_30 != NULL) && (e_30 != f_30)))
                                    _fail(f_30);
                                  else
                                    e_30 = f_30;
                                }
                              }
                            }
                            t = r_9;
                            {
                              ATerm h_30 = NULL;
                              t = not_null(u_29);
                              {
                                t = eval_config_0(t);
                                {
                                  h_30 = t;
                                  if(((g_30 != NULL) && (g_30 != h_30)))
                                    _fail(h_30);
                                  else
                                    g_30 = h_30;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(g_30));
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
  ATerm p_30 = NULL;
  p_30 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(p_30));
    {
      t = table_get_0(t);
      {
        ATerm q_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_9;
            t_9 = t;
            {
              ATerm v_30 = NULL;
              ATerm w_30 = NULL;
              w_30 = t;
              if(((v_30 != NULL) && (v_30 != w_30)))
                _fail(w_30);
              else
                v_30 = w_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_9, not_null(p_30), not_null(v_30));
                t = table_put_0(t);
              }
            }
            t = t_9;
          }
          return(t);
        }
        t = try_1(t, q_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm x_9;
    x_9 = t;
    {
      ATerm a_31 = NULL;
      ATerm b_31 = NULL;
      t = term_y_9;
      {
        t = get_config_0(t);
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_31), term_c_10);
        t = geq_0(t);
      }
    }
    t = x_9;
    t = u_94(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym__2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      t = SSL_WriteToTextFile(not_null(g_31), not_null(h_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym__2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      t = SSL_WriteToBinaryFile(not_null(o_31), not_null(p_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm f_10;
  f_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm y_31 = NULL,z_31 = NULL;
            y_31 = t;
            u_31 :
            if(match_cons(y_31, sym_Output_1))
              {
                z_31 = ATgetArgument(y_31, 0);
                if(((x_31 != NULL) && (x_31 != z_31)))
                  _fail(z_31);
                else
                  x_31 = z_31;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_1);
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
          {
            ATerm a_32 = NULL;
            t = term_i_10;
            {
              a_32 = t;
              if(((x_31 != NULL) && (x_31 != a_32)))
                _fail(a_32);
              else
                x_31 = a_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = f_10;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(x_31);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm b_32 = NULL;
              b_32 = t;
              w_31 :
              if(!(match_cons(b_32, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  ATerm l_10;
  l_10 = t;
  t = dtime_0(t);
  t = l_10;
  {
    t = g_86(t);
    {
      ATerm m_10;
      m_10 = t;
      {
        ATerm r_32 = NULL;
        t = dtime_0(t);
        {
          r_32 = t;
          if(((q_32 != NULL) && (q_32 != r_32)))
            _fail(r_32);
          else
            q_32 = r_32;
        }
      }
      t = m_10;
      {
        s_32 = t;
        m_32 :
        if(match_cons(s_32, sym__2))
          {
            t_32 = ATgetArgument(s_32, 0);
            u_32 = ATgetArgument(s_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_32))), not_null(u_32));
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
ATerm debug_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm q_10;
  q_10 = t;
  {
    ATerm j_33 = NULL,l_33 = NULL;
    ATerm r_10;
    r_10 = t;
    {
      ATerm k_33 = NULL;
      t = o_87(t);
      {
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
      }
    }
    t = r_10;
    {
      ATerm m_33 = NULL;
      m_33 = t;
      if(((l_33 != NULL) && (l_33 != m_33)))
        _fail(m_33);
      else
        l_33 = m_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_33)), not_null(j_33)));
        t = printnl_0(t);
      }
    }
  }
  t = q_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_33 = NULL;
  ATerm v_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = NULL;
      r_33 = t;
      {
        if(((q_33 != NULL) && (q_33 != r_33)))
          _fail(r_33);
        else
          q_33 = r_33;
        t = SSL_ReadFromFile(not_null(q_33));
      }
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = v_10;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_z_10;
          return(t);
        }
        t = debug_1(t, y_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  ATerm v_33 = NULL,x_33 = NULL;
  ATerm a_11;
  a_11 = t;
  {
    ATerm w_33 = NULL;
    t = n_72(t);
    {
      w_33 = t;
      if(((v_33 != NULL) && (v_33 != w_33)))
        _fail(w_33);
      else
        v_33 = w_33;
    }
  }
  t = a_11;
  {
    ATerm y_33 = NULL;
    t = o_72(t);
    {
      y_33 = t;
      if(((x_33 != NULL) && (x_33 != y_33)))
        _fail(y_33);
      else
        x_33 = y_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(x_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_34 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 (ATerm t)
        {
          ATerm f_34 = NULL,g_34 = NULL;
          f_34 = t;
          c_34 :
          if(match_cons(f_34, sym_Input_1))
            {
              g_34 = ATgetArgument(f_34, 0);
              if(((e_34 != NULL) && (e_34 != g_34)))
                _fail(g_34);
              else
                e_34 = g_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_1);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm h_34 = NULL;
          t = term_e_11;
          {
            h_34 = t;
            if(((e_34 != NULL) && (e_34 != h_34)))
              _fail(h_34);
            else
              e_34 = h_34;
          }
        }
      }
  }
  t = b_11;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(e_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm l_34 = NULL;
    l_34 = t;
    k_34 :
    if(!(match_string(l_34, "-v")))
      {
        if(!(match_string(l_34, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_l_11;
    t = set_config_0(t);
    t = term_m_11;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = Option_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm o_34 = NULL;
    o_34 = t;
    m_34 :
    if(!(match_string(o_34, "-k")))
      {
        if(!(match_string(o_34, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm r_11;
    r_11 = t;
    {
      ATerm p_34 = NULL;
      ATerm q_34 = NULL;
      t = string_to_int_0(t);
      {
        q_34 = t;
        if(((p_34 != NULL) && (p_34 != q_34)))
          _fail(q_34);
        else
          p_34 = q_34;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(p_34));
        t = set_config_0(t);
      }
    }
    t = r_11;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_w_11;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  t = SSL_string_to_int(not_null(e_35));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm o_35 = NULL;
        o_35 = t;
        j_35 :
        if(!(match_string(o_35, "-S")))
          {
            if(!(match_string(o_35, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_a_12;
        t = set_config_0(t);
        t = term_b_12;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_f_12;
        return(t);
      }
      t = Option_3(t, h_2, i_2, j_2);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm p_35 = NULL;
              p_35 = t;
              k_35 :
              if(!(match_string(p_35, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm v_35 = NULL;
              ATerm l_12;
              l_12 = t;
              {
                ATerm t_35 = NULL;
                ATerm u_35 = NULL;
                t = string_to_int_0(t);
                {
                  u_35 = t;
                  if(((t_35 != NULL) && (t_35 != u_35)))
                    _fail(u_35);
                  else
                    t_35 = u_35;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(t_35));
                  t = set_config_0(t);
                }
              }
              t = l_12;
              {
                ATerm w_35 = NULL;
                w_35 = t;
                if(((v_35 != NULL) && (v_35 != w_35)))
                  _fail(w_35);
                else
                  v_35 = w_35;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_35));
              }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_m_12;
              return(t);
            }
            t = ArgOption_3(t, k_2, l_2, m_2);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm n_2 (ATerm t)
              {
                ATerm x_35 = NULL;
                x_35 = t;
                n_35 :
                if(!(match_string(x_35, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = term_s_12;
                t = set_config_0(t);
                t = term_t_12;
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_u_12;
                return(t);
              }
              t = Option_3(t, n_2, o_2, p_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm y_12 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = y_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm d_36 = NULL;
    d_36 = t;
    a_36 :
    if(!(match_string(d_36, "-o")))
      {
        if(!(match_string(d_36, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm h_36 = NULL;
    ATerm e_13;
    e_13 = t;
    {
      ATerm e_36 = NULL;
      ATerm f_36 = NULL;
      f_36 = t;
      if(((e_36 != NULL) && (e_36 != f_36)))
        _fail(f_36);
      else
        e_36 = f_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(e_36));
        t = set_config_0(t);
      }
    }
    t = e_13;
    {
      ATerm i_36 = NULL;
      i_36 = t;
      if(((h_36 != NULL) && (h_36 != i_36)))
        _fail(i_36);
      else
        h_36 = i_36;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_36));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm m_36 = NULL;
          m_36 = t;
          l_36 :
          if(!(match_string(m_36, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_o_13;
          t = set_config_0(t);
          t = term_r_13;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_u_13;
          return(t);
        }
        t = Option_3(t, t_2, u_2, v_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  s_36 = t;
  q_36 :
  if(match_string(s_36, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
        {
          t_36 = ATgetFirst((ATermList) s_36);
          u_36 = (ATerm) ATgetNext((ATermList) s_36);
          r_36 :
          if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
            {
              v_36 = ATgetFirst((ATermList) u_36);
              w_36 = (ATerm) ATgetNext((ATermList) u_36);
              {
                ATerm a_37 = NULL;
                ATerm y_13;
                y_13 = t;
                {
                  t = not_null(t_36);
                  t = j_0(t);
                }
                t = y_13;
                {
                  ATerm b_37 = NULL;
                  t = not_null(v_36);
                  {
                    t = k_0(t);
                    {
                      b_37 = t;
                      if(((a_37 != NULL) && (a_37 != b_37)))
                        _fail(b_37);
                      else
                        a_37 = b_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_36)), not_null(a_37));
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
  ATerm w_2 (ATerm t)
  {
    ATerm i_37 = NULL;
    i_37 = t;
    f_37 :
    if(!(match_string(i_37, "-i")))
      {
        if(!(match_string(i_37, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm l_37 = NULL;
    ATerm z_13;
    z_13 = t;
    {
      ATerm j_37 = NULL;
      ATerm k_37 = NULL;
      k_37 = t;
      if(((j_37 != NULL) && (j_37 != k_37)))
        _fail(k_37);
      else
        j_37 = k_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(j_37));
        t = set_config_0(t);
      }
    }
    t = z_13;
    {
      ATerm m_37 = NULL;
      m_37 = t;
      if(((l_37 != NULL) && (l_37 != m_37)))
        _fail(m_37);
      else
        l_37 = m_37;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_37));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_b_14;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, term_o_14));
  {
    t = printnl_0(t);
    {
      t = term_q_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = SSL_TicksToSeconds(not_null(q_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym__2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      {
        ATerm p_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_37), not_null(x_37));
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = p_14;
            t = SSL_addr(not_null(w_37), not_null(x_37));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm))
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_79(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
        e_38 = t;
        d_38 :
        if(((ATgetType(e_38) == AT_LIST) && !(ATisEmpty(e_38))))
          {
            f_38 = ATgetFirst((ATermList) e_38);
            g_38 = (ATerm) ATgetNext((ATermList) e_38);
            {
              ATerm j_38 = NULL;
              ATerm k_38 = NULL;
              t = not_null(g_38);
              {
                t = foldr_2(t, z_79, a_80);
                {
                  k_38 = t;
                  if(((j_38 != NULL) && (j_38 != k_38)))
                    _fail(k_38);
                  else
                    j_38 = k_38;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), not_null(j_38));
                t = a_80(t);
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
ATerm crush_2 (ATerm t, ATerm x_78 (ATerm), ATerm y_78 (ATerm))
{
  ATerm r_38 = NULL;
  ATerm t_38 = NULL;
  r_38 = t;
  {
    ATerm u_38 = NULL;
    ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
    t = not_null(r_38);
    {
      u_38 = t;
      {
        t = SSL_explode_term(not_null(u_38));
        {
          w_38 = t;
          q_38 :
          if(match_cons(w_38, sym__2))
            {
              x_38 = ATgetArgument(w_38, 0);
              y_38 = ATgetArgument(w_38, 1);
              if(((t_38 != NULL) && (t_38 != y_38)))
                _fail(y_38);
              else
                t_38 = y_38;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_38);
      t = foldr_2(t, x_78, y_78);
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
    ATerm z_2 (ATerm t)
    {
      t = term_z_11;
      return(t);
    }
    t = crush_2(t, z_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm u_14;
        u_14 = t;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_39), not_null(g_39));
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(not_null(f_39), not_null(g_39));
            }
        }
        t = u_14;
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
  ATerm m_39 = NULL;
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
      n_39 = t;
      l_39 :
      if(match_cons(n_39, sym__2))
        {
          o_39 = ATgetArgument(n_39, 0);
          p_39 = ATgetArgument(n_39, 1);
          {
            if(((m_39 != NULL) && (m_39 != o_39)))
              _fail(o_39);
            else
              m_39 = o_39;
            if(((m_39 != NULL) && (m_39 != p_39)))
              _fail(p_39);
            else
              m_39 = p_39;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_94 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm l_15;
    l_15 = t;
    {
      ATerm s_39 = NULL;
      ATerm t_39 = NULL;
      t = term_y_9;
      {
        t = get_config_0(t);
        {
          t_39 = t;
          if(((s_39 != NULL) && (s_39 != t_39)))
            _fail(t_39);
          else
            s_39 = t_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_39), term_q_8);
        t = geq_0(t);
      }
    }
    t = l_15;
    t = t_94(t);
    return(t);
  }
  t = try_1(t, a_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm x_39 = NULL,z_39 = NULL;
    ATerm m_15;
    m_15 = t;
    {
      ATerm y_39 = NULL;
      t = run_time_0(t);
      {
        y_39 = t;
        if(((x_39 != NULL) && (x_39 != y_39)))
          _fail(y_39);
        else
          x_39 = y_39;
      }
    }
    t = m_15;
    {
      ATerm a_40 = NULL;
      t = term_n_15;
      {
        t = get_config_0(t);
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_15), not_null(x_39)), term_o_15), not_null(z_39)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_3);
  {
    t = term_z_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Version_0))
    {
      ATerm j_40 = NULL,l_40 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm k_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
        }
      }
      t = q_15;
      {
        ATerm m_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        t = not_null(l_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
        {
          ATerm u_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_15);
            }
          else
            {
              t = u_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_3);
  t = e_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_40 = NULL;
  r_40 = t;
  t = SSL_table_create(not_null(r_40));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  {
    ATerm e_16;
    e_16 = t;
    {
      t = term_f_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, not_null(f_41));
          t = table_put_0(t);
        }
      }
    }
    t = e_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  t = SSL_table_destroy(not_null(j_41));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  t = SSL_exit(not_null(n_41));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_41 = NULL,z_41 = NULL,a_42 = NULL;
  t_41 = t;
  s_41 :
  if(((ATgetType(t_41) == AT_LIST) && ATisEmpty(t_41)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
        {
          z_41 = ATgetFirst((ATermList) t_41);
          a_42 = (ATerm) ATgetNext((ATermList) t_41);
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
  ATerm k_16;
  k_16 = t;
  {
    ATerm d_42 = NULL;
    ATerm g_42 = NULL;
    ATerm q_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = q_16;
        {
          ATerm e_42 = NULL;
          ATerm f_42 = NULL;
          f_42 = t;
          if(((e_42 != NULL) && (e_42 != f_42)))
            _fail(f_42);
          else
            e_42 = f_42;
          t = (ATerm) ATinsert(ATempty, not_null(e_42));
        }
      }
    {
      g_42 = t;
      if(((d_42 != NULL) && (d_42 != g_42)))
        _fail(g_42);
      else
        d_42 = g_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(d_42));
      t = printnl_0(t);
    }
  }
  t = k_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm j_42 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = Cons_2(t, c_75, j_42);
      }
    return(t);
  }
  t = j_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_42 = NULL,r_42 = NULL,t_42 = NULL;
  t_42 = t;
  p_42 :
  if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
    {
      q_42 = ATgetFirst((ATermList) t_42);
      r_42 = (ATerm) ATgetNext((ATermList) t_42);
      {
        ATerm w_42 = NULL;
        t = not_null(r_42);
        {
          ATerm z_16;
          z_16 = t;
          {
            ATerm z_42 = NULL,b_43 = NULL,d_43 = NULL;
            ATerm a_17;
            a_17 = t;
            {
              ATerm a_43 = NULL;
              t = i_0(t);
              {
                a_43 = t;
                if(((z_42 != NULL) && (z_42 != a_43)))
                  _fail(a_43);
                else
                  z_42 = a_43;
              }
            }
            t = a_17;
            {
              ATerm c_43 = NULL;
              t = not_null(q_42);
              {
                t = h_0(t);
                {
                  c_43 = t;
                  if(((b_43 != NULL) && (b_43 != c_43)))
                    _fail(c_43);
                  else
                    b_43 = c_43;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_42)), not_null(b_43));
                {
                  d_43 = t;
                  if(((w_42 != NULL) && (w_42 != d_43)))
                    _fail(d_43);
                  else
                    w_42 = d_43;
                }
              }
            }
          }
          t = z_16;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(w_42);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_42) == AT_LIST) && ATisEmpty(t_42)))
        {
          {
            t = term_g_11;
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
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm o_43 = NULL,p_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Program_1))
    {
      p_43 = ATgetArgument(o_43, 0);
      {
        ATerm s_43 = NULL,u_43 = NULL;
        ATerm t_43 = NULL;
        t = SSLgetAnnotations(not_null(o_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        {
          t = not_null(p_43);
          {
            ATerm w_43 = NULL;
            t = z_65(t);
            {
              u_43 = t;
              {
                ATerm z_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_43)), not_null(s_43));
                {
                  z_43 = t;
                  if(((w_43 != NULL) && (w_43 != z_43)))
                    _fail(z_43);
                  else
                    w_43 = z_43;
                }
                t = not_null(w_43);
              }
            }
          }
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
  ATerm j_44 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_44 = NULL;
      t = term_n_15;
      {
        t = get_config_0(t);
        {
          k_44 = t;
          if(((j_44 != NULL) && (j_44 != k_44)))
            _fail(k_44);
          else
            j_44 = k_44;
        }
      }
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_44 = NULL;
            l_44 = t;
            if(((j_44 != NULL) && (j_44 != l_44)))
              _fail(l_44);
            else
              j_44 = l_44;
            return(t);
          }
          t = Program_1(t, j_3);
          return(t);
        }
        t = option_defined_1(t, i_3);
      }
    }
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        t = not_null(j_44);
        return(t);
      }
      t = short_description_1(t, l_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, k_3);
    {
      t = term_k_17;
      {
        t = echo_0(t);
        {
          t = term_q_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm m_44 = NULL;
                  ATerm n_44 = NULL;
                  n_44 = t;
                  if(((m_44 != NULL) && (m_44 != n_44)))
                    _fail(n_44);
                  else
                    m_44 = n_44;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_44)), term_r_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_3);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm o_44 = NULL;
                    ATerm p_44 = NULL;
                    ATerm o_3 (ATerm t)
                    {
                      t = not_null(j_44);
                      return(t);
                    }
                    t = long_description_1(t, o_3);
                    {
                      p_44 = t;
                      if(((o_44 != NULL) && (o_44 != p_44)))
                        _fail(p_44);
                      else
                        o_44 = p_44;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_44)), term_s_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_3);
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
  ATerm w_17;
  w_17 = t;
  {
    ATerm y_44 = NULL;
    ATerm z_44 = NULL;
    z_44 = t;
    if(((y_44 != NULL) && (y_44 != z_44)))
      _fail(z_44);
    else
      y_44 = z_44;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, not_null(y_44)));
      t = printnl_0(t);
    }
  }
  t = w_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm x_17;
  x_17 = t;
  {
    t = p_87(t);
    t = debug_0(t);
  }
  t = x_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm g_45 = NULL,h_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym_Undefined_1))
    {
      h_45 = ATgetArgument(g_45, 0);
      {
        ATerm k_45 = NULL,m_45 = NULL;
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(g_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
        {
          t = not_null(h_45);
          {
            ATerm o_45 = NULL;
            t = a_66(t);
            {
              m_45 = t;
              {
                ATerm p_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_45)), not_null(k_45));
                {
                  p_45 = t;
                  if(((o_45 != NULL) && (o_45 != p_45)))
                    _fail(p_45);
                  else
                    o_45 = p_45;
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
ATerm fetch_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm u_45 (ATerm t)
  {
    ATerm y_17 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_75, _id);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = y_17;
        t = Cons_2(t, _id, u_45);
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_89 (ATerm))
{
  t = fetch_1(t, w_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  y_45 :
  if(match_cons(z_45, sym_Help_0))
    {
      ATerm b_46 = NULL,k_46 = NULL;
      ATerm i_18;
      i_18 = t;
      {
        ATerm j_46 = NULL;
        t = SSLgetAnnotations(not_null(z_45));
        {
          j_46 = t;
          if(((b_46 != NULL) && (b_46 != j_46)))
            _fail(j_46);
          else
            b_46 = j_46;
        }
      }
      t = i_18;
      {
        ATerm l_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_46));
        {
          l_46 = t;
          if(((k_46 != NULL) && (k_46 != l_46)))
            _fail(l_46);
          else
            k_46 = l_46;
        }
        t = not_null(k_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_71(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym__2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      t = SSL_table_get(not_null(s_46), not_null(t_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym__3))
    {
      b_47 = ATgetArgument(a_47, 0);
      c_47 = ATgetArgument(a_47, 1);
      d_47 = ATgetArgument(a_47, 2);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm i_47 = NULL;
          ATerm j_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_47), not_null(c_47));
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = (ATerm) ATempty;
              }
            {
              j_47 = t;
              if(((i_47 != NULL) && (i_47 != j_47)))
                _fail(j_47);
              else
                i_47 = j_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_47), not_null(c_47), (ATerm) ATinsert(CheckATermList(not_null(i_47)), not_null(d_47)));
            t = table_put_0(t);
          }
        }
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm n_47 = NULL;
  ATerm o_47 = NULL;
  t = term_g_11;
  {
    t = b_91(t);
    {
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_17, term_o_17, not_null(n_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  t_47 :
  if(match_string(u_47, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_47) == AT_LIST) && !(ATisEmpty(u_47))))
        {
          v_47 = ATgetFirst((ATermList) u_47);
          w_47 = (ATerm) ATgetNext((ATermList) u_47);
          {
            ATerm z_47 = NULL;
            ATerm o_18;
            o_18 = t;
            {
              t = not_null(v_47);
              t = a_0(t);
            }
            t = o_18;
            {
              ATerm a_48 = NULL;
              t = term_g_11;
              {
                t = d_0(t);
                {
                  a_48 = t;
                  if(((z_47 != NULL) && (z_47 != a_48)))
                    _fail(a_48);
                  else
                    z_47 = a_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_47)), not_null(z_47));
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
  ATerm p_3 (ATerm t)
  {
    ATerm f_48 = NULL;
    f_48 = t;
    e_48 :
    if(!(match_string(f_48, "--help")))
      {
        if(!(match_string(f_48, "-h")))
          {
            if(!(match_string(f_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_q_18;
    {
      t = set_config_0(t);
      t = term_r_18;
    }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = Option_3(t, p_3, q_3, s_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  h_48 :
  if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
    {
      j_48 = ATgetFirst((ATermList) i_48);
      k_48 = (ATerm) ATgetNext((ATermList) i_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm u_48 = NULL,v_48 = NULL,b_49 = NULL;
  u_48 = t;
  t_48 :
  if(((ATgetType(u_48) == AT_LIST) && !(ATisEmpty(u_48))))
    {
      v_48 = ATgetFirst((ATermList) u_48);
      b_49 = (ATerm) ATgetNext((ATermList) u_48);
      {
        ATerm f_49 = NULL,h_49 = NULL;
        ATerm g_49 = NULL;
        t = SSLgetAnnotations(not_null(u_48));
        {
          g_49 = t;
          if(((f_49 != NULL) && (f_49 != g_49)))
            _fail(g_49);
          else
            f_49 = g_49;
        }
        {
          t = not_null(v_48);
          {
            ATerm n_49 = NULL;
            t = g_56(t);
            {
              h_49 = t;
              {
                t = not_null(b_49);
                {
                  ATerm p_49 = NULL;
                  t = h_56(t);
                  {
                    n_49 = t;
                    {
                      ATerm q_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_49)), not_null(h_49)), not_null(f_49));
                      {
                        q_49 = t;
                        if(((p_49 != NULL) && (p_49 != q_49)))
                          _fail(q_49);
                        else
                          p_49 = q_49;
                      }
                      t = not_null(p_49);
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
  ATerm a_50 = NULL;
  a_50 = t;
  z_49 :
  if(((ATgetType(a_50) == AT_LIST) && ATisEmpty(a_50)))
    {
      {
        ATerm c_50 = NULL,e_50 = NULL;
        ATerm t_18;
        t_18 = t;
        {
          ATerm d_50 = NULL;
          t = SSLgetAnnotations(not_null(a_50));
          {
            d_50 = t;
            if(((c_50 != NULL) && (c_50 != d_50)))
              _fail(d_50);
            else
              c_50 = d_50;
          }
        }
        t = t_18;
        {
          ATerm f_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_50));
          {
            f_50 = t;
            if(((e_50 != NULL) && (e_50 != f_50)))
              _fail(f_50);
            else
              e_50 = f_50;
          }
          t = not_null(e_50);
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_9, not_null(m_50), not_null(n_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_90 (ATerm))
{
  ATerm u_18;
  u_18 = t;
  {
    ATerm t_3 (ATerm t)
    {
      t = term_v_18;
      t = z_90(t);
      return(t);
    }
    t = try_1(t, t_3);
  }
  t = u_18;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_50 = NULL;
      ATerm z_18;
      z_18 = t;
      {
        ATerm t_50 = NULL;
        ATerm u_50 = NULL;
        u_50 = t;
        if(((t_50 != NULL) && (t_50 != u_50)))
          _fail(u_50);
        else
          t_50 = u_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_15, not_null(t_50));
          t = set_config_0(t);
        }
      }
      t = z_18;
      {
        ATerm w_50 = NULL;
        w_50 = t;
        if(((v_50 != NULL) && (v_50 != w_50)))
          _fail(w_50);
        else
          v_50 = w_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_50));
      }
      return(t);
    }
    ATerm v_3 (ATerm t)
    {
      ATerm a_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                t = z_90(t);
                t = Cons_2(t, _id, v_3);
              }
            }
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = a_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_3, v_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
    f_51 = t;
    b_51 :
    if(match_cons(f_51, sym__3))
      {
        g_51 = ATgetArgument(f_51, 0);
        h_51 = ATgetArgument(f_51, 1);
        i_51 = ATgetArgument(f_51, 2);
        {
          if(((c_51 != NULL) && (c_51 != g_51)))
            _fail(g_51);
          else
            c_51 = g_51;
          {
            if(((d_51 != NULL) && (d_51 != h_51)))
              _fail(h_51);
            else
              d_51 = h_51;
            {
              if(((e_51 != NULL) && (e_51 != i_51)))
                _fail(i_51);
              else
                e_51 = i_51;
              t = SSL_table_put(not_null(c_51), not_null(d_51), not_null(e_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_90 (ATerm))
{
  ATerm l_51 = NULL;
  ATerm p_19;
  p_19 = t;
  {
    t = term_q_19;
    t = table_put_0(t);
  }
  t = p_19;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_90(t);
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_3);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19;
            v_19 = t;
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_18;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_19;
            {
              t = system_usage_0(t);
              {
                t = term_z_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm m_51 = NULL;
                  m_51 = t;
                  if(((l_51 != NULL) && (l_51 != m_51)))
                    _fail(m_51);
                  else
                    l_51 = m_51;
                  return(t);
                }
                t = Undefined_1(t, j_4);
                return(t);
              }
              t = option_defined_1(t, a_4);
              {
                ATerm k_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_51)), term_y_19);
                  return(t);
                }
                t = say_1(t, k_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_3);
      {
        ATerm z_19;
        z_19 = t;
        {
          t = term_m_17;
          t = table_destroy_0(t);
        }
        t = z_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm))
{
  t = parse_options_1(t, k_86);
  {
    t = store_options_0(t);
    {
      t = m_86(t);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_86);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm h_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_86(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = h_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_4, d_87, e_87, r_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm n_20;
      n_20 = t;
      {
        ATerm p_51 = NULL;
        ATerm a_52 = NULL;
        t = term_n_15;
        {
          t = get_config_0(t);
          {
            a_52 = t;
            if(((p_51 != NULL) && (p_51 != a_52)))
              _fail(a_52);
            else
              p_51 = a_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, (ATerm) ATinsert(ATempty, not_null(p_51)));
          t = printnl_0(t);
        }
      }
      t = n_20;
      return(t);
    }
    t = if_verbose2_1(t, t_4);
    return(t);
  }
  t = iowrap_4(t, v_86, w_86, x_86, s_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_86 (ATerm), ATerm u_86 (ATerm))
{
  t = iowrap_3(t, t_86, u_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = _2(t, _id, q_86);
    return(t);
  }
  t = iowrap_2(t, u_4, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}
