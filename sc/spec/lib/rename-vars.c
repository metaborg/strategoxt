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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_q_20;
ATerm term_z_19;
ATerm term_m_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_v_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
void init_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_q_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_f_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_q_11);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_q_11);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_q_11);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__3, term_w_17, term_a_18, (ATerm) ATempty);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm m_67 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm Let_2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_57 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm i_67 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm g_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm u_78 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm crush_3 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm diff_1 (ATerm, ATerm q_78 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm for_3 (ATerm, ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm l_81 (ATerm), ATerm m_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm zip_1 (ATerm, ATerm f_73 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm f_81 (ATerm), ATerm g_81 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm q_81 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm j_82 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_81 (ATerm));
ATerm rename_4 (ATerm, ATerm a_81 (ATerm, ATerm (ATerm)), ATerm b_81 (ATerm), ATerm c_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_81 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_85 (ATerm));
ATerm debug_1 (ATerm, ATerm z_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm));
ATerm crush_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_90 (ATerm));
ATerm map_1 (ATerm, ATerm o_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_90 (ATerm));
ATerm Program_1 (ATerm, ATerm r_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_86 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,r_3 = NULL,t_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && !(ATisEmpty(f_3))))
    {
      r_3 = ATgetFirst((ATermList) f_3);
      t_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = not_null(r_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm a_4 = t;
  int d_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, m_67);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
            h_4 = t;
            b_4 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                m_4 = ATgetArgument(h_4, 1);
                c_4 :
                if(match_cons(i_4, sym_SDef_3))
                  {
                    j_4 = ATgetArgument(i_4, 0);
                    k_4 = ATgetArgument(i_4, 1);
                    l_4 = ATgetArgument(i_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_4), not_null(k_4), not_null(l_4));
                  }
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
      LocalPopChoice(d_4);
    }
  else
    {
      t = a_4;
      {
        ATerm g_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, m_67);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
                  q_4 = t;
                  e_4 :
                  if(match_cons(q_4, sym__2))
                    {
                      r_4 = ATgetArgument(q_4, 0);
                      u_4 = ATgetArgument(q_4, 1);
                      f_4 :
                      if(match_cons(r_4, sym_VarDec_2))
                        {
                          s_4 = ATgetArgument(r_4, 0);
                          t_4 = ATgetArgument(r_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_4), not_null(t_4));
                        }
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
            LocalPopChoice(n_4);
          }
        else
          {
            t = g_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = m_67(t);
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
ATerm Rec_2 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym_Rec_2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm m_5 = NULL,o_5 = NULL;
        ATerm n_5 = NULL;
        t = SSLgetAnnotations(not_null(g_5));
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm q_5 = NULL;
            t = l_57(t);
            {
              o_5 = t;
              {
                t = not_null(i_5);
                {
                  ATerm s_5 = NULL;
                  t = m_57(t);
                  {
                    q_5 = t;
                    {
                      ATerm t_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_5), not_null(q_5)), not_null(m_5));
                      {
                        t_5 = t;
                        if(((s_5 != NULL) && (s_5 != t_5)))
                          _fail(t_5);
                        else
                          s_5 = t_5;
                      }
                      t = not_null(s_5);
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
ATerm SDef_3 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_SDef_3))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      j_6 = ATgetArgument(g_6, 2);
      {
        ATerm o_6 = NULL,q_6 = NULL;
        ATerm p_6 = NULL;
        t = SSLgetAnnotations(not_null(g_6));
        {
          p_6 = t;
          if(((o_6 != NULL) && (o_6 != p_6)))
            _fail(p_6);
          else
            o_6 = p_6;
        }
        {
          t = not_null(h_6);
          {
            ATerm s_6 = NULL;
            t = p_57(t);
            {
              q_6 = t;
              {
                t = not_null(i_6);
                {
                  ATerm u_6 = NULL;
                  t = q_57(t);
                  {
                    s_6 = t;
                    {
                      t = not_null(j_6);
                      {
                        ATerm w_6 = NULL;
                        t = r_57(t);
                        {
                          u_6 = t;
                          {
                            ATerm x_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_6), not_null(s_6), not_null(u_6)), not_null(o_6));
                            {
                              x_6 = t;
                              if(((w_6 != NULL) && (w_6 != x_6)))
                                _fail(x_6);
                              else
                                w_6 = x_6;
                            }
                            t = not_null(w_6);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Let_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        ATerm r_7 = NULL;
        t = SSLgetAnnotations(not_null(k_7));
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
        {
          t = not_null(l_7);
          {
            ATerm u_7 = NULL;
            t = n_57(t);
            {
              s_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm w_7 = NULL;
                  t = o_57(t);
                  {
                    u_7 = t;
                    {
                      ATerm x_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_7), not_null(u_7)), not_null(q_7));
                      {
                        x_7 = t;
                        if(((w_7 != NULL) && (w_7 != x_7)))
                          _fail(x_7);
                        else
                          w_7 = x_7;
                      }
                      t = not_null(w_7);
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
ATerm sboundin_3 (ATerm t, ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, n_67, n_67);
      LocalPopChoice(p_4);
    }
  else
    {
      t = o_4;
      {
        ATerm v_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, p_67, p_67, n_67);
            LocalPopChoice(w_4);
          }
        else
          {
            t = v_4;
            t = Rec_2(t, p_67, n_67);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_Rec_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_SDef_3))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      s_8 = ATgetArgument(p_8, 2);
      {
        t = not_null(r_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
            w_8 = t;
            n_8 :
            if(match_cons(w_8, sym_VarDec_2))
              {
                x_8 = ATgetArgument(w_8, 0);
                y_8 = ATgetArgument(w_8, 1);
                t = not_null(x_8);
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
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Let_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      {
        t = not_null(h_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
            l_9 = t;
            e_9 :
            if(match_cons(l_9, sym_SDef_3))
              {
                m_9 = ATgetArgument(l_9, 0);
                n_9 = ATgetArgument(l_9, 1);
                o_9 = ATgetArgument(l_9, 2);
                t = not_null(m_9);
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
ATerm SVar_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_SVar_1))
    {
      a_10 = ATgetArgument(z_9, 0);
      {
        ATerm d_10 = NULL,f_10 = NULL;
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        {
          t = not_null(a_10);
          {
            ATerm h_10 = NULL;
            t = k_57(t);
            {
              f_10 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(f_10)), not_null(d_10));
                {
                  i_10 = t;
                  if(((h_10 != NULL) && (h_10 != i_10)))
                    _fail(i_10);
                  else
                    h_10 = i_10;
                }
                t = not_null(h_10);
              }
            }
          }
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
    ATerm x_4 = t;
    int y_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(y_4);
      }
    else
      {
        t = x_4;
        {
          ATerm z_4 = t;
          int a_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(a_5);
            }
          else
            {
              t = z_4;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm i_67 (ATerm))
{
  t = Scope_2(t, i_67, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_DynamicRules_1))
    {
      t_10 = ATgetArgument(s_10, 0);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(t_10);
          {
            ATerm a_11 = NULL;
            t = g_59(t);
            {
              y_10 = t;
              {
                ATerm b_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(y_10)), not_null(w_10));
                {
                  b_11 = t;
                  if(((a_11 != NULL) && (a_11 != b_11)))
                    _fail(b_11);
                  else
                    a_11 = b_11;
                }
                t = not_null(a_11);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_Scope_2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm s_11 = NULL,u_11 = NULL;
        ATerm t_11 = NULL;
        t = SSLgetAnnotations(not_null(m_11));
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
        {
          t = not_null(n_11);
          {
            ATerm w_11 = NULL;
            t = j_56(t);
            {
              u_11 = t;
              {
                t = not_null(o_11);
                {
                  ATerm y_11 = NULL;
                  t = k_56(t);
                  {
                    w_11 = t;
                    {
                      ATerm z_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_11), not_null(w_11)), not_null(s_11));
                      {
                        z_11 = t;
                        if(((y_11 != NULL) && (y_11 != z_11)))
                          _fail(z_11);
                        else
                          y_11 = z_11;
                      }
                      t = not_null(y_11);
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
ATerm tboundin_3 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm))
{
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, l_67, j_67);
      LocalPopChoice(c_5);
    }
  else
    {
      t = b_5;
      t = DynamicRules_1(t, j_67);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_DynamicRules_1))
    {
      i_12 = ATgetArgument(h_12, 0);
      {
        t = not_null(i_12);
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
  ATerm n_12 = NULL,o_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Var_1))
    {
      o_12 = ATgetArgument(n_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        t = not_null(u_12);
        {
          ATerm z_12 (ATerm t)
          {
            ATerm d_5 = t;
            int e_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_12);
                LocalPopChoice(e_5);
              }
            else
              {
                t = d_5;
                {
                  ATerm j_5 = t;
                  int k_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(v_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_78, r_0);
                      t = z_12(t);
                      LocalPopChoice(k_5);
                    }
                  else
                    {
                      t = j_5;
                      t = Cons_2(t, _id, z_12);
                    }
                }
              }
            return(t);
          }
          t = z_12(t);
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
ATerm foldr_3 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm l_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_79(t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = l_5;
      {
        ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
        e_13 = t;
        d_13 :
        if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
          {
            f_13 = ATgetFirst((ATermList) e_13);
            g_13 = (ATerm) ATgetNext((ATermList) e_13);
            {
              ATerm j_13 = NULL,l_13 = NULL;
              ATerm r_5;
              r_5 = t;
              {
                ATerm k_13 = NULL;
                t = not_null(f_13);
                {
                  t = p_79(t);
                  {
                    k_13 = t;
                    if(((j_13 != NULL) && (j_13 != k_13)))
                      _fail(k_13);
                    else
                      j_13 = k_13;
                  }
                }
              }
              t = r_5;
              {
                ATerm m_13 = NULL;
                t = not_null(g_13);
                {
                  t = foldr_3(t, n_79, o_79, p_79);
                  {
                    m_13 = t;
                    if(((l_13 != NULL) && (l_13 != m_13)))
                      _fail(m_13);
                    else
                      l_13 = m_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(l_13));
                  t = o_79(t);
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
ATerm crush_3 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm))
{
  ATerm u_13 = NULL;
  ATerm w_13 = NULL;
  u_13 = t;
  {
    ATerm x_13 = NULL;
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
    t = not_null(u_13);
    {
      x_13 = t;
      {
        t = SSL_explode_term(not_null(x_13));
        {
          z_13 = t;
          t_13 :
          if(match_cons(z_13, sym__2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              if(((w_13 != NULL) && (w_13 != b_14)))
                _fail(b_14);
              else
                w_13 = b_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_13);
      t = foldr_3(t, l_78, m_78, n_78);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      if(((i_14 != NULL) && (i_14 != j_14)))
        _fail(j_14);
      else
        i_14 = j_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
    {
      q_14 = ATgetFirst((ATermList) p_14);
      r_14 = (ATerm) ATgetNext((ATermList) p_14);
      {
        t = z_78(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm u_14 = NULL;
            u_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(u_14));
              t = y_78(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(r_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym__2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        t = not_null(b_15);
        {
          ATerm g_15 (ATerm t)
          {
            ATerm u_5 = t;
            int v_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(c_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_78, t_0);
                      t = g_15(t);
                      LocalPopChoice(x_5);
                    }
                  else
                    {
                      t = w_5;
                      t = Cons_2(t, _id, g_15);
                    }
                }
              }
            return(t);
          }
          t = g_15(t);
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
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  i_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      j_15 :
      if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
        {
          n_15 = ATgetFirst((ATermList) m_15);
          o_15 = (ATerm) ATgetNext((ATermList) m_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_15)), not_null(n_15)), not_null(o_15));
        }
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
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  d_16 = t;
  b_16 :
  if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
    {
      e_16 = ATgetFirst((ATermList) d_16);
      h_16 = (ATerm) ATgetNext((ATermList) d_16);
      c_16 :
      if(match_cons(e_16, sym__2))
        {
          f_16 = ATgetArgument(e_16, 0);
          g_16 = ATgetArgument(e_16, 1);
          {
            ATerm l_16 = NULL,m_16 = NULL,s_16 = NULL,y_16 = NULL;
            ATerm y_5;
            y_5 = t;
            {
              ATerm n_16 = NULL;
              ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
              t = not_null(g_16);
              {
                n_16 = t;
                {
                  t = SSL_explode_term(not_null(n_16));
                  {
                    p_16 = t;
                    w_15 :
                    if(match_cons(p_16, sym__2))
                      {
                        q_16 = ATgetArgument(p_16, 0);
                        r_16 = ATgetArgument(p_16, 1);
                        {
                          if(((l_16 != NULL) && (l_16 != q_16)))
                            _fail(q_16);
                          else
                            l_16 = q_16;
                          if(((m_16 != NULL) && (m_16 != r_16)))
                            _fail(r_16);
                          else
                            m_16 = r_16;
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
            t = y_5;
            {
              ATerm z_5;
              z_5 = t;
              {
                ATerm t_16 = NULL;
                ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
                t = not_null(f_16);
                {
                  t_16 = t;
                  {
                    t = SSL_explode_term(not_null(t_16));
                    {
                      v_16 = t;
                      z_15 :
                      if(match_cons(v_16, sym__2))
                        {
                          w_16 = ATgetArgument(v_16, 0);
                          x_16 = ATgetArgument(v_16, 1);
                          {
                            if(((l_16 != NULL) && (l_16 != w_16)))
                              _fail(w_16);
                            else
                              l_16 = w_16;
                            if(((s_16 != NULL) && (s_16 != x_16)))
                              _fail(x_16);
                            else
                              s_16 = x_16;
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
              t = z_5;
              {
                ATerm z_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(m_16));
                {
                  t = zip_1(t, _id);
                  {
                    z_16 = t;
                    if(((y_16 != NULL) && (y_16 != z_16)))
                      _fail(z_16);
                    else
                      y_16 = z_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(h_16));
                  {
                    ATerm a_6 = t;
                    int b_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(b_6);
                      }
                    else
                      {
                        t = a_6;
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
    {
      k_17 = ATgetFirst((ATermList) j_17);
      n_17 = (ATerm) ATgetNext((ATermList) j_17);
      i_17 :
      if(match_cons(k_17, sym__2))
        {
          l_17 = ATgetArgument(k_17, 0);
          m_17 = ATgetArgument(k_17, 1);
          {
            ATerm p_17 = NULL;
            if(((l_17 != NULL) && (l_17 != m_17)))
              _fail(m_17);
            else
              l_17 = m_17;
            {
              if(((p_17 != NULL) && (p_17 != n_17)))
                _fail(n_17);
              else
                p_17 = n_17;
              t = not_null(p_17);
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
ATerm while_not_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm r_17 (ATerm t)
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_85(t);
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        {
          t = j_85(t);
          t = r_17(t);
        }
      }
    return(t);
  }
  t = r_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  t = l_85(t);
  t = while_not_2(t, m_85, n_85);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm e_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm t_17 = NULL;
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_17));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm n_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = n_6;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, x_0);
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      LocalPopChoice(k_6);
    }
  else
    {
      t = e_6;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_17 (ATerm t)
  {
    ATerm t_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_83(t);
        LocalPopChoice(v_6);
      }
    else
      {
        t = t_6;
        {
          ATerm y_6 = t;
          int z_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_17 = NULL;
              ATerm a_7;
              a_7 = t;
              {
                ATerm y_17 = NULL;
                t = e_83(t);
                {
                  y_17 = t;
                  if(((x_17 != NULL) && (x_17 != y_17)))
                    _fail(y_17);
                  else
                    x_17 = y_17;
                }
              }
              t = a_7;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(x_17);
                    return(t);
                  }
                  t = split_2(t, z_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = f_83(t, y_0, z_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm c_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, b_1, c_1, _id);
                }
              }
              LocalPopChoice(z_6);
            }
          else
            {
              t = y_6;
              {
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, d_1, e_1, z_17);
              }
            }
        }
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  d_18 :
  if(match_cons(i_18, sym_LRule_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      e_18 :
      if(match_cons(j_18, sym_Rule_3))
        {
          f_18 = ATgetArgument(j_18, 0);
          g_18 = ATgetArgument(j_18, 1);
          h_18 = ATgetArgument(j_18, 2);
          {
            t = not_null(f_18);
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
      if(match_cons(i_18, sym_Scope_2))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          t = not_null(j_18);
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
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_Var_1))
    {
      c_19 = ATgetArgument(b_19, 0);
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL,h_19 = NULL;
            ATerm g_19 = NULL;
            t = SSLgetAnnotations(not_null(b_19));
            {
              g_19 = t;
              if(((f_19 != NULL) && (f_19 != g_19)))
                _fail(g_19);
              else
                f_19 = g_19;
            }
            {
              t = not_null(c_19);
              {
                ATerm j_19 = NULL;
                t = m_0(t);
                {
                  h_19 = t;
                  {
                    ATerm k_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_19)), not_null(f_19));
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
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            {
              ATerm n_19 = NULL,p_19 = NULL;
              ATerm o_19 = NULL;
              t = SSLgetAnnotations(not_null(b_19));
              {
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
              }
              {
                t = not_null(c_19);
                {
                  ATerm r_19 = NULL;
                  t = m_0(t);
                  {
                    p_19 = t;
                    {
                      ATerm s_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_19)), not_null(n_19));
                      {
                        s_19 = t;
                        if(((r_19 != NULL) && (r_19 != s_19)))
                          _fail(s_19);
                        else
                          r_19 = s_19;
                      }
                      t = not_null(r_19);
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
ATerm DistBinding_2 (ATerm t, ATerm l_81 (ATerm), ATerm m_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__3))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      {
        t = not_null(g_20);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm m_20 = NULL;
            m_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(i_20));
              t = l_81(t);
            }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm o_20 = NULL;
            o_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(h_20));
              t = l_81(t);
            }
            return(t);
          }
          t = m_81(t, g_1, h_1, _id);
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_20)), not_null(w_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  f_21 = t;
  c_21 :
  if(match_cons(f_21, sym__2))
    {
      g_21 = ATgetArgument(f_21, 0);
      j_21 = ATgetArgument(f_21, 1);
      d_21 :
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          h_21 = ATgetFirst((ATermList) g_21);
          i_21 = (ATerm) ATgetNext((ATermList) g_21);
          e_21 :
          if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
            {
              k_21 = ATgetFirst((ATermList) j_21);
              l_21 = (ATerm) ATgetNext((ATermList) j_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_21), not_null(k_21)), (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(l_21)));
            }
          else
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  s_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      t_21 :
      if(((ATgetType(w_21) == AT_LIST) && ATisEmpty(w_21)))
        {
          u_21 :
          if(((ATgetType(x_21) == AT_LIST) && ATisEmpty(x_21)))
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
ATerm genzip_4 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm z_21 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          t = b_73(t);
          {
            t = _2(t, d_73, z_21);
            t = c_73(t);
          }
        }
      }
    return(t);
  }
  t = z_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_73);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_81 (ATerm), ATerm g_81 (ATerm, ATerm (ATerm)))
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym__2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,u_22 = NULL;
        ATerm h_7;
        h_7 = t;
        {
          ATerm p_22 = NULL;
          t = not_null(i_22);
          {
            ATerm q_22 = NULL;
            t = f_81(t);
            {
              p_22 = t;
              {
                if(((m_22 != NULL) && (m_22 != p_22)))
                  _fail(p_22);
                else
                  m_22 = p_22;
                {
                  ATerm r_22 = NULL,t_22 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_22 = t;
                    {
                      if(((n_22 != NULL) && (n_22 != q_22)))
                        _fail(q_22);
                      else
                        n_22 = q_22;
                      {
                        ATerm s_22 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(n_22));
                        {
                          t = zip_1(t, _id);
                          {
                            s_22 = t;
                            if(((r_22 != NULL) && (r_22 != s_22)))
                              _fail(s_22);
                            else
                              r_22 = s_22;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(j_22));
                          {
                            ATerm i_7 = t;
                            int n_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(n_7);
                              }
                            else
                              {
                                t = i_7;
                                t = conc_more_lists_0(t);
                              }
                            {
                              t_22 = t;
                              if(((o_22 != NULL) && (o_22 != t_22)))
                                _fail(t_22);
                              else
                                o_22 = t_22;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = h_7;
        {
          ATerm v_22 = NULL;
          t = not_null(i_22);
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(n_22);
              return(t);
            }
            t = g_81(t, i_1);
            {
              v_22 = t;
              if(((u_22 != NULL) && (u_22 != v_22)))
                _fail(v_22);
              else
                u_22 = v_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_22), not_null(j_22), not_null(o_22));
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
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  d_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      e_23 :
      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
        {
          i_23 = ATgetFirst((ATermList) h_23);
          j_23 = (ATerm) ATgetNext((ATermList) h_23);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(j_23));
        }
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
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  p_24 = t;
  o_23 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      p_23 :
      if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
        {
          s_24 = ATgetFirst((ATermList) r_24);
          v_24 = (ATerm) ATgetNext((ATermList) r_24);
          o_24 :
          if(match_cons(s_24, sym__2))
            {
              t_24 = ATgetArgument(s_24, 0);
              u_24 = ATgetArgument(s_24, 1);
              {
                ATerm x_24 = NULL;
                if(((q_24 != NULL) && (q_24 != t_24)))
                  _fail(t_24);
                else
                  q_24 = t_24;
                {
                  if(((x_24 != NULL) && (x_24 != u_24)))
                    _fail(u_24);
                  else
                    x_24 = u_24;
                  t = not_null(x_24);
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
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm q_81 (ATerm, ATerm (ATerm)))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        t = not_null(d_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(e_25);
              return(t);
            }
            t = split_2(t, _id, k_1);
            t = lookup_0(t);
            return(t);
          }
          t = q_81(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        t = not_null(n_25);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm r_25 = NULL;
            r_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_25), not_null(o_25));
              t = j_82(t);
            }
            return(t);
          }
          t = _all(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm v_25 (ATerm t)
  {
    ATerm t_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_81(t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = t_7;
        t = all_dist_1(t, v_25);
      }
    return(t);
  }
  t = v_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_81 (ATerm, ATerm (ATerm)), ATerm b_81 (ATerm), ATerm c_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_81 (ATerm, ATerm (ATerm)))
{
  ATerm x_25 = NULL;
  x_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), (ATerm) ATempty);
    {
      ATerm a_26 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm y_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, a_81);
              LocalPopChoice(z_7);
            }
          else
            {
              t = y_7;
              {
                t = RnBinding_2(t, b_81, d_81);
                t = DistBinding_2(t, a_26, c_81);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_1);
        return(t);
      }
      t = a_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm b_26 (ATerm t, ATerm c_26 (ATerm))
  {
    t = Scope_2(t, c_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, b_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(k_26);
          {
            ATerm t_26 = NULL;
            t = q_54(t);
            {
              r_26 = t;
              {
                t = not_null(l_26);
                {
                  ATerm v_26 = NULL;
                  t = r_54(t);
                  {
                    t_26 = t;
                    {
                      ATerm w_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_26), not_null(t_26)), not_null(p_26));
                      {
                        w_26 = t;
                        if(((v_26 != NULL) && (v_26 != w_26)))
                          _fail(w_26);
                        else
                          v_26 = w_26;
                      }
                      t = not_null(v_26);
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
  ATerm e_27 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm f_27 = NULL,g_27 = NULL;
      f_27 = t;
      d_27 :
      if(match_cons(f_27, sym_Program_1))
        {
          g_27 = ATgetArgument(f_27, 0);
          if(((e_27 != NULL) && (e_27 != g_27)))
            _fail(g_27);
          else
            e_27 = g_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(e_27)), term_c_8));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm j_8;
        j_8 = t;
        t = SSL_printnl(not_null(l_27), not_null(m_27));
        t = j_8;
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
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_implode_string(not_null(r_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
        w_27 = t;
        v_27 :
        if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
          {
            x_27 = ATgetFirst((ATermList) w_27);
            y_27 = (ATerm) ATgetNext((ATermList) w_27);
            {
              t = not_null(x_27);
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(y_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_1);
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
  ATerm o_28 = NULL;
  ATerm q_28 = NULL;
  o_28 = t;
  {
    ATerm r_28 = NULL;
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
    t = not_null(o_28);
    {
      r_28 = t;
      {
        t = SSL_explode_term(not_null(r_28));
        {
          t_28 = t;
          k_28 :
          if(match_cons(t_28, sym__2))
            {
              u_28 = ATgetArgument(t_28, 0);
              v_28 = ATgetArgument(t_28, 1);
              l_28 :
              if(match_string(u_28, ""))
                {
                  if(((q_28 != NULL) && (q_28 != v_28)))
                    _fail(v_28);
                  else
                    q_28 = v_28;
                }
              else
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
      t = not_null(q_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm z_28 (ATerm t)
  {
    ATerm m_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_28);
        LocalPopChoice(t_8);
      }
    else
      {
        t = m_8;
        {
          t = Nil_0(t);
          t = d_75(t);
        }
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      {
        t = not_null(d_29);
        {
          ATerm p_1 (ATerm t)
          {
            t = not_null(e_29);
            return(t);
          }
          t = at_end_1(t, p_1);
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  t = SSL_explode_string(not_null(j_29));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  t = SSL_is_string(not_null(n_29));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm d_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm k_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = k_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_1);
            LocalPopChoice(j_9);
          }
        else
          {
            t = d_9;
            {
              ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
              b_30 = t;
              a_30 :
              if(match_cons(b_30, sym_Path_1))
                {
                  c_30 = ATgetArgument(b_30, 0);
                  t = not_null(c_30);
                }
              else
                {
                  if(match_cons(b_30, sym_Var_1))
                    {
                      c_30 = ATgetArgument(b_30, 0);
                      {
                        t = not_null(c_30);
                        {
                          ATerm q_9 = t;
                          int r_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_9);
                            }
                          else
                            {
                              t = q_9;
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = term_s_9;
                                  return(t);
                                }
                                t = debug_1(t, r_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_30, sym_Prefix_2))
                        {
                          c_30 = ATgetArgument(b_30, 0);
                          d_30 = ATgetArgument(b_30, 1);
                          {
                            ATerm i_30 = NULL,o_30 = NULL;
                            ATerm t_9;
                            t_9 = t;
                            {
                              ATerm j_30 = NULL;
                              t = not_null(c_30);
                              {
                                t = eval_config_0(t);
                                {
                                  j_30 = t;
                                  if(((i_30 != NULL) && (i_30 != j_30)))
                                    _fail(j_30);
                                  else
                                    i_30 = j_30;
                                }
                              }
                            }
                            t = t_9;
                            {
                              ATerm p_30 = NULL;
                              t = not_null(d_30);
                              {
                                t = eval_config_0(t);
                                {
                                  p_30 = t;
                                  if(((o_30 != NULL) && (o_30 != p_30)))
                                    _fail(p_30);
                                  else
                                    o_30 = p_30;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(o_30));
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
  ATerm x_30 = NULL;
  x_30 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(x_30));
    {
      t = table_get_0(t);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm x_9;
              x_9 = t;
              {
                ATerm z_30 = NULL;
                ATerm a_31 = NULL;
                a_31 = t;
                if(((z_30 != NULL) && (z_30 != a_31)))
                  _fail(a_31);
                else
                  z_30 = a_31;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_9, not_null(x_30), not_null(z_30));
                  t = table_put_0(t);
                }
              }
              t = x_9;
            }
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_10;
      g_10 = t;
      {
        ATerm e_31 = NULL;
        ATerm f_31 = NULL;
        t = term_j_10;
        {
          t = get_config_0(t);
          {
            f_31 = t;
            if(((e_31 != NULL) && (e_31 != f_31)))
              _fail(f_31);
            else
              e_31 = f_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), term_k_10);
          t = geq_0(t);
        }
      }
      t = g_10;
      t = g_94(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym__2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      t = SSL_WriteToTextFile(not_null(k_31), not_null(l_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      t = SSL_WriteToBinaryFile(not_null(s_31), not_null(t_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm l_32 = NULL,m_32 = NULL;
            l_32 = t;
            e_32 :
            if(match_cons(l_32, sym_Output_1))
              {
                m_32 = ATgetArgument(l_32, 0);
                if(((k_32 != NULL) && (k_32 != m_32)))
                  _fail(m_32);
                else
                  k_32 = m_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_1);
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm n_32 = NULL;
            t = term_o_10;
            {
              n_32 = t;
              if(((k_32 != NULL) && (k_32 != n_32)))
                _fail(n_32);
              else
                k_32 = n_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = l_10;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(k_32);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm o_32 = NULL;
              o_32 = t;
              j_32 :
              if(!(match_cons(o_32, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm c_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  ATerm u_10;
  u_10 = t;
  t = dtime_0(t);
  t = u_10;
  {
    t = r_85(t);
    {
      ATerm v_10;
      v_10 = t;
      {
        ATerm d_33 = NULL;
        t = dtime_0(t);
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
      }
      t = v_10;
      {
        e_33 = t;
        x_32 :
        if(match_cons(e_33, sym__2))
          {
            f_33 = ATgetArgument(e_33, 0);
            g_33 = ATgetArgument(e_33, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_33)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_33))), not_null(g_33));
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
ATerm debug_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm z_10;
  z_10 = t;
  {
    ATerm n_33 = NULL,p_33 = NULL;
    ATerm c_11;
    c_11 = t;
    {
      ATerm o_33 = NULL;
      t = z_86(t);
      {
        o_33 = t;
        if(((n_33 != NULL) && (n_33 != o_33)))
          _fail(o_33);
        else
          n_33 = o_33;
      }
    }
    t = c_11;
    {
      ATerm q_33 = NULL;
      q_33 = t;
      if(((p_33 != NULL) && (p_33 != q_33)))
        _fail(q_33);
      else
        p_33 = q_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_33)), not_null(n_33)));
        t = printnl_0(t);
      }
    }
  }
  t = z_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm u_33 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_33 = NULL;
      v_33 = t;
      {
        if(((u_33 != NULL) && (u_33 != v_33)))
          _fail(v_33);
        else
          u_33 = v_33;
        t = SSL_ReadFromFile(not_null(u_33));
      }
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_f_11;
          return(t);
        }
        t = debug_1(t, y_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm z_33 = NULL,b_34 = NULL;
  ATerm g_11;
  g_11 = t;
  {
    ATerm a_34 = NULL;
    t = a_72(t);
    {
      a_34 = t;
      if(((z_33 != NULL) && (z_33 != a_34)))
        _fail(a_34);
      else
        z_33 = a_34;
    }
  }
  t = g_11;
  {
    ATerm c_34 = NULL;
    t = b_72(t);
    {
      c_34 = t;
      if(((b_34 != NULL) && (b_34 != c_34)))
        _fail(c_34);
      else
        b_34 = c_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), not_null(b_34));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm h_11;
  h_11 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 (ATerm t)
        {
          ATerm j_34 = NULL,k_34 = NULL;
          j_34 = t;
          g_34 :
          if(match_cons(j_34, sym_Input_1))
            {
              k_34 = ATgetArgument(j_34, 0);
              if(((i_34 != NULL) && (i_34 != k_34)))
                _fail(k_34);
              else
                i_34 = k_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_1);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        {
          ATerm r_34 = NULL;
          t = term_k_11;
          {
            r_34 = t;
            if(((i_34 != NULL) && (i_34 != r_34)))
              _fail(r_34);
            else
              i_34 = r_34;
          }
        }
      }
  }
  t = h_11;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(i_34);
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
    ATerm c_35 = NULL;
    c_35 = t;
    b_35 :
    if(!(match_string(c_35, "-v")))
      {
        if(!(match_string(c_35, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_r_11;
    t = set_config_0(t);
    t = term_v_11;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = Option_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_35 = NULL;
    f_35 = t;
    d_35 :
    if(!(match_string(f_35, "-k")))
      {
        if(!(match_string(f_35, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm a_12;
    a_12 = t;
    {
      ATerm g_35 = NULL;
      ATerm h_35 = NULL;
      t = string_to_int_0(t);
      {
        h_35 = t;
        if(((g_35 != NULL) && (g_35 != h_35)))
          _fail(h_35);
        else
          g_35 = h_35;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(g_35));
        t = set_config_0(t);
      }
    }
    t = a_12;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  t = SSL_string_to_int(not_null(n_35));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm v_35 = NULL;
        v_35 = t;
        q_35 :
        if(!(match_string(v_35, "-S")))
          {
            if(!(match_string(v_35, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_j_12;
        t = set_config_0(t);
        t = term_k_12;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_l_12;
        return(t);
      }
      t = Option_3(t, h_2, i_2, j_2);
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm w_35 = NULL;
              w_35 = t;
              r_35 :
              if(!(match_string(w_35, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm a_36 = NULL;
              ATerm r_12;
              r_12 = t;
              {
                ATerm x_35 = NULL;
                ATerm y_35 = NULL;
                t = string_to_int_0(t);
                {
                  y_35 = t;
                  if(((x_35 != NULL) && (x_35 != y_35)))
                    _fail(y_35);
                  else
                    x_35 = y_35;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(x_35));
                  t = set_config_0(t);
                }
              }
              t = r_12;
              {
                ATerm b_36 = NULL;
                b_36 = t;
                if(((a_36 != NULL) && (a_36 != b_36)))
                  _fail(b_36);
                else
                  a_36 = b_36;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_36));
              }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_w_12;
              return(t);
            }
            t = ArgOption_3(t, k_2, l_2, m_2);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm n_2 (ATerm t)
              {
                ATerm c_36 = NULL;
                c_36 = t;
                u_35 :
                if(!(match_string(c_36, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = term_y_12;
                t = set_config_0(t);
                t = term_a_13;
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_b_13;
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
  ATerm c_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = c_13;
      {
        ATerm i_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = i_13;
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
    ATerm i_36 = NULL;
    i_36 = t;
    f_36 :
    if(!(match_string(i_36, "-o")))
      {
        if(!(match_string(i_36, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm l_36 = NULL;
    ATerm o_13;
    o_13 = t;
    {
      ATerm j_36 = NULL;
      ATerm k_36 = NULL;
      k_36 = t;
      if(((j_36 != NULL) && (j_36 != k_36)))
        _fail(k_36);
      else
        j_36 = k_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(j_36));
        t = set_config_0(t);
      }
    }
    t = o_13;
    {
      ATerm m_36 = NULL;
      m_36 = t;
      if(((l_36 != NULL) && (l_36 != m_36)))
        _fail(m_36);
      else
        l_36 = m_36;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_36));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm q_36 = NULL;
          q_36 = t;
          p_36 :
          if(!(match_string(q_36, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_y_13;
          t = set_config_0(t);
          t = term_c_14;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_d_14;
          return(t);
        }
        t = Option_3(t, t_2, u_2, v_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  u_36 :
  if(match_string(w_36, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          x_36 = ATgetFirst((ATermList) w_36);
          y_36 = (ATerm) ATgetNext((ATermList) w_36);
          v_36 :
          if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
            {
              z_36 = ATgetFirst((ATermList) y_36);
              a_37 = (ATerm) ATgetNext((ATermList) y_36);
              {
                ATerm e_37 = NULL;
                ATerm e_14;
                e_14 = t;
                {
                  t = not_null(x_36);
                  t = j_0(t);
                }
                t = e_14;
                {
                  ATerm f_37 = NULL;
                  t = not_null(z_36);
                  {
                    t = k_0(t);
                    {
                      f_37 = t;
                      if(((e_37 != NULL) && (e_37 != f_37)))
                        _fail(f_37);
                      else
                        e_37 = f_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(e_37));
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
    ATerm m_37 = NULL;
    m_37 = t;
    j_37 :
    if(!(match_string(m_37, "-i")))
      {
        if(!(match_string(m_37, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm p_37 = NULL;
    ATerm f_14;
    f_14 = t;
    {
      ATerm n_37 = NULL;
      ATerm o_37 = NULL;
      o_37 = t;
      if(((n_37 != NULL) && (n_37 != o_37)))
        _fail(o_37);
      else
        n_37 = o_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(n_37));
        t = set_config_0(t);
      }
    }
    t = f_14;
    {
      ATerm q_37 = NULL;
      q_37 = t;
      if(((p_37 != NULL) && (p_37 != q_37)))
        _fail(q_37);
      else
        p_37 = q_37;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_37));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_l_14;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, term_v_14));
  {
    t = printnl_0(t);
    {
      t = term_i_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_TicksToSeconds(not_null(u_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_38), not_null(b_38));
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = SSL_addr(not_null(a_38), not_null(b_38));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  ATerm y_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_79(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = y_14;
      {
        ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
        i_38 = t;
        h_38 :
        if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
          {
            j_38 = ATgetFirst((ATermList) i_38);
            k_38 = (ATerm) ATgetNext((ATermList) i_38);
            {
              ATerm n_38 = NULL;
              ATerm o_38 = NULL;
              t = not_null(k_38);
              {
                t = foldr_2(t, l_79, m_79);
                {
                  o_38 = t;
                  if(((n_38 != NULL) && (n_38 != o_38)))
                    _fail(o_38);
                  else
                    n_38 = o_38;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(n_38));
                t = m_79(t);
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
ATerm crush_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm v_38 = NULL;
  ATerm x_38 = NULL;
  v_38 = t;
  {
    ATerm y_38 = NULL;
    ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
    t = not_null(v_38);
    {
      y_38 = t;
      {
        t = SSL_explode_term(not_null(y_38));
        {
          a_39 = t;
          u_38 :
          if(match_cons(a_39, sym__2))
            {
              b_39 = ATgetArgument(a_39, 0);
              c_39 = ATgetArgument(a_39, 1);
              if(((x_38 != NULL) && (x_38 != c_39)))
                _fail(c_39);
              else
                x_38 = c_39;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_38);
      t = foldr_2(t, j_78, k_78);
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
      t = term_f_12;
      return(t);
    }
    t = crush_2(t, z_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym__2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm e_15;
        e_15 = t;
        {
          ATerm f_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_39), not_null(k_39));
              LocalPopChoice(h_15);
            }
          else
            {
              t = f_15;
              t = SSL_gtr(not_null(j_39), not_null(k_39));
            }
        }
        t = e_15;
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
  ATerm q_39 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
      r_39 = t;
      p_39 :
      if(match_cons(r_39, sym__2))
        {
          s_39 = ATgetArgument(r_39, 0);
          t_39 = ATgetArgument(r_39, 1);
          {
            if(((q_39 != NULL) && (q_39 != s_39)))
              _fail(s_39);
            else
              q_39 = s_39;
            if(((q_39 != NULL) && (q_39 != t_39)))
              _fail(t_39);
            else
              q_39 = t_39;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_15;
      t_15 = t;
      {
        ATerm w_39 = NULL;
        ATerm x_39 = NULL;
        t = term_j_10;
        {
          t = get_config_0(t);
          {
            x_39 = t;
            if(((w_39 != NULL) && (w_39 != x_39)))
              _fail(x_39);
            else
              w_39 = x_39;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_39), term_i_8);
          t = geq_0(t);
        }
      }
      t = t_15;
      t = f_94(t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_40 = NULL,d_40 = NULL;
    ATerm u_15;
    u_15 = t;
    {
      ATerm c_40 = NULL;
      t = run_time_0(t);
      {
        c_40 = t;
        if(((b_40 != NULL) && (b_40 != c_40)))
          _fail(c_40);
        else
          b_40 = c_40;
      }
    }
    t = u_15;
    {
      ATerm e_40 = NULL;
      t = term_v_15;
      {
        t = get_config_0(t);
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), not_null(b_40)), term_x_15), not_null(d_40)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  {
    t = term_f_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_Version_0))
    {
      ATerm x_40 = NULL,z_40 = NULL;
      ATerm a_16;
      a_16 = t;
      {
        ATerm y_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
      }
      t = a_16;
      {
        ATerm a_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        t = not_null(z_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm k_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_16);
            }
          else
            {
              t = k_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_3);
  t = p_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  t = SSL_table_create(not_null(f_41));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  {
    ATerm u_16;
    u_16 = t;
    {
      t = term_a_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_17, term_b_17, not_null(l_41));
          t = table_put_0(t);
        }
      }
    }
    t = u_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  t = SSL_table_destroy(not_null(u_41));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  t = SSL_exit(not_null(y_41));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  b_42 :
  if(((ATgetType(c_42) == AT_LIST) && ATisEmpty(c_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
        {
          d_42 = ATgetFirst((ATermList) c_42);
          e_42 = (ATerm) ATgetNext((ATermList) c_42);
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
  ATerm c_17;
  c_17 = t;
  {
    ATerm h_42 = NULL;
    ATerm k_42 = NULL;
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm i_42 = NULL;
          ATerm j_42 = NULL;
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
          t = (ATerm) ATinsert(ATempty, not_null(i_42));
        }
      }
    {
      k_42 = t;
      if(((h_42 != NULL) && (h_42 != k_42)))
        _fail(k_42);
      else
        h_42 = k_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(h_42));
      t = printnl_0(t);
    }
  }
  t = c_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm o_42 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = Cons_2(t, o_74, o_42);
      }
    return(t);
  }
  t = o_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  w_42 :
  if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
    {
      x_42 = ATgetFirst((ATermList) z_42);
      y_42 = (ATerm) ATgetNext((ATermList) z_42);
      {
        ATerm c_43 = NULL;
        t = not_null(y_42);
        {
          ATerm o_17;
          o_17 = t;
          {
            ATerm d_43 = NULL,f_43 = NULL,h_43 = NULL;
            ATerm q_17;
            q_17 = t;
            {
              ATerm e_43 = NULL;
              t = i_0(t);
              {
                e_43 = t;
                if(((d_43 != NULL) && (d_43 != e_43)))
                  _fail(e_43);
                else
                  d_43 = e_43;
              }
            }
            t = q_17;
            {
              ATerm g_43 = NULL;
              t = not_null(x_42);
              {
                t = h_0(t);
                {
                  g_43 = t;
                  if(((f_43 != NULL) && (f_43 != g_43)))
                    _fail(g_43);
                  else
                    f_43 = g_43;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_43)), not_null(f_43));
                {
                  h_43 = t;
                  if(((c_43 != NULL) && (c_43 != h_43)))
                    _fail(h_43);
                  else
                    c_43 = h_43;
                }
              }
            }
          }
          t = o_17;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(c_43);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_42) == AT_LIST) && ATisEmpty(z_42)))
        {
          {
            t = term_q_11;
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Program_1))
    {
      v_43 = ATgetArgument(u_43, 0);
      {
        ATerm z_43 = NULL,b_44 = NULL;
        ATerm a_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          a_44 = t;
          if(((z_43 != NULL) && (z_43 != a_44)))
            _fail(a_44);
          else
            z_43 = a_44;
        }
        {
          t = not_null(v_43);
          {
            ATerm d_44 = NULL;
            t = r_65(t);
            {
              b_44 = t;
              {
                ATerm e_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_44)), not_null(z_43));
                {
                  e_44 = t;
                  if(((d_44 != NULL) && (d_44 != e_44)))
                    _fail(e_44);
                  else
                    d_44 = e_44;
                }
                t = not_null(d_44);
              }
            }
          }
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
  ATerm p_44 = NULL;
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_44 = NULL;
      t = term_v_15;
      {
        t = get_config_0(t);
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
      }
      LocalPopChoice(u_17);
    }
  else
    {
      t = s_17;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm r_44 = NULL;
            r_44 = t;
            if(((p_44 != NULL) && (p_44 != r_44)))
              _fail(r_44);
            else
              p_44 = r_44;
            return(t);
          }
          t = Program_1(t, h_3);
          return(t);
        }
        t = fetch_1(t, g_3);
      }
    }
  {
    t = term_v_17;
    {
      t = echo_0(t);
      {
        t = term_b_18;
        {
          t = table_get_0(t);
          {
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_3);
            {
              ATerm j_3 (ATerm t)
              {
                ATerm s_44 = NULL;
                ATerm t_44 = NULL;
                t_44 = t;
                if(((s_44 != NULL) && (s_44 != t_44)))
                  _fail(t_44);
                else
                  s_44 = t_44;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_44)), term_c_18);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, j_3);
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
  ATerm l_18;
  l_18 = t;
  {
    ATerm y_44 = NULL;
    ATerm z_44 = NULL;
    z_44 = t;
    if(((y_44 != NULL) && (y_44 != z_44)))
      _fail(z_44);
    else
      y_44 = z_44;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(y_44)));
      t = printnl_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm m_18;
  m_18 = t;
  {
    t = a_87(t);
    t = debug_0(t);
  }
  t = m_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_65 (ATerm))
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
            t = s_65(t);
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
ATerm fetch_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm u_45 (ATerm t)
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_74, _id);
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        t = Cons_2(t, _id, u_45);
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_89 (ATerm))
{
  t = fetch_1(t, h_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_Help_0))
    {
      ATerm i_46 = NULL,k_46 = NULL;
      ATerm p_18;
      p_18 = t;
      {
        ATerm j_46 = NULL;
        t = SSLgetAnnotations(not_null(g_46));
        {
          j_46 = t;
          if(((i_46 != NULL) && (i_46 != j_46)))
            _fail(j_46);
          else
            i_46 = j_46;
        }
      }
      t = p_18;
      {
        ATerm l_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_46));
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
ATerm try_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_71(t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
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
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  b_47 = t;
  z_46 :
  if(match_cons(b_47, sym__3))
    {
      c_47 = ATgetArgument(b_47, 0);
      d_47 = ATgetArgument(b_47, 1);
      e_47 = ATgetArgument(b_47, 2);
      {
        ATerm s_18;
        s_18 = t;
        {
          ATerm i_47 = NULL;
          ATerm j_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_47), not_null(d_47));
          {
            ATerm t_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_18);
              }
            else
              {
                t = t_18;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_47), not_null(d_47), (ATerm) ATinsert(CheckATermList(not_null(i_47)), not_null(e_47)));
            t = table_put_0(t);
          }
        }
        t = s_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm n_47 = NULL;
  ATerm o_47 = NULL;
  t = term_q_11;
  {
    t = m_90(t);
    {
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_a_18, not_null(n_47));
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
            ATerm v_18;
            v_18 = t;
            {
              t = not_null(v_47);
              t = a_0(t);
            }
            t = v_18;
            {
              ATerm a_48 = NULL;
              t = term_q_11;
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
  ATerm k_3 (ATerm t)
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
  ATerm l_3 (ATerm t)
  {
    t = term_x_18;
    {
      t = set_config_0(t);
      t = term_y_18;
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = Option_3(t, k_3, l_3, m_3);
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
ATerm Cons_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(((ATgetType(z_48) == AT_LIST) && !(ATisEmpty(z_48))))
    {
      a_49 = ATgetFirst((ATermList) z_48);
      b_49 = (ATerm) ATgetNext((ATermList) z_48);
      {
        ATerm j_49 = NULL,l_49 = NULL;
        ATerm k_49 = NULL;
        t = SSLgetAnnotations(not_null(z_48));
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
        {
          t = not_null(a_49);
          {
            ATerm n_49 = NULL;
            t = z_55(t);
            {
              l_49 = t;
              {
                t = not_null(b_49);
                {
                  ATerm p_49 = NULL;
                  t = a_56(t);
                  {
                    n_49 = t;
                    {
                      ATerm q_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_49)), not_null(l_49)), not_null(j_49));
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
        ATerm d_19;
        d_19 = t;
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
        t = d_19;
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
        t = (ATerm) ATmakeAppl(sym__3, term_u_9, not_null(m_50), not_null(n_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm e_19;
  e_19 = t;
  {
    ATerm i_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_19;
        t = k_90(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = i_19;
        {
        }
      }
  }
  t = e_19;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm v_50 = NULL;
      ATerm q_19;
      q_19 = t;
      {
        ATerm t_50 = NULL;
        ATerm u_50 = NULL;
        u_50 = t;
        if(((t_50 != NULL) && (t_50 != u_50)))
          _fail(u_50);
        else
          t_50 = u_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(t_50));
          t = set_config_0(t);
        }
      }
      t = q_19;
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
    ATerm o_3 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                t = k_90(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  ATerm x_19;
  x_19 = t;
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
  t = x_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm x_51 = NULL;
  ATerm y_19;
  y_19 = t;
  {
    t = term_z_19;
    t = table_put_0(t);
  }
  t = y_19;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_90(t);
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_20;
          j_20 = t;
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_18;
                t = get_config_0(t);
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                t = fetch_1(t, Help_0);
              }
          }
          t = j_20;
          {
            t = system_usage_0(t);
            {
              t = term_f_12;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          {
            ATerm n_20 = t;
            int p_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_3 (ATerm t)
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm y_51 = NULL;
                    y_51 = t;
                    if(((x_51 != NULL) && (x_51 != y_51)))
                      _fail(y_51);
                    else
                      x_51 = y_51;
                    return(t);
                  }
                  t = Undefined_1(t, s_3);
                  return(t);
                }
                t = fetch_1(t, q_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_51)), term_q_20);
                    return(t);
                  }
                  t = say_1(t, u_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_i_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(p_20);
              }
            else
              {
                t = n_20;
                {
                }
              }
          }
        }
      {
        ATerm r_20;
        r_20 = t;
        {
          t = term_w_17;
          t = table_destroy_0(t);
        }
        t = r_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  t = parse_options_1(t, v_85);
  {
    t = store_options_0(t);
    {
      t = x_85(t);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_85);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_86(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_86);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_3, o_86, p_86, w_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      ATerm m_21;
      m_21 = t;
      {
        ATerm b_52 = NULL;
        ATerm c_52 = NULL;
        t = term_v_15;
        {
          t = get_config_0(t);
          {
            c_52 = t;
            if(((b_52 != NULL) && (b_52 != c_52)))
              _fail(c_52);
            else
              b_52 = c_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(b_52)));
          t = printnl_0(t);
        }
      }
      t = m_21;
      return(t);
    }
    t = if_verbose2_1(t, y_3);
    return(t);
  }
  t = iowrap_4(t, g_86, h_86, i_86, x_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  t = iowrap_3(t, e_86, f_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    t = _2(t, _id, b_86);
    return(t);
  }
  t = iowrap_2(t, z_3, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
