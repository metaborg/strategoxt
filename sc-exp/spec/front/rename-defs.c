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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_p_18;
ATerm term_b_18;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_q_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_s_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_q_5;
void init_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_b_6);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_w_6);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_6);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_b_6);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_b_6);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_b_6);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__3, term_u_15, term_z_15, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_69 (ATerm));
ATerm assert_1 (ATerm, ATerm i_96 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm k_96 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm s_85 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm x_59 (ATerm));
ATerm Cons_2 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm z_59 (ATerm));
ATerm _2 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_90 (ATerm));
ATerm debug_1 (ATerm, ATerm i_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm crush_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_94 (ATerm));
ATerm map_1 (ATerm, ATerm w_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_94 (ATerm));
ATerm Program_1 (ATerm, ATerm m_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_94 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_90 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATgetType(q_1) == AT_LIST) && ATisEmpty(q_1)))
    {
      {
        ATerm f_2 = NULL,h_2 = NULL;
        ATerm n_5;
        n_5 = t;
        {
          ATerm g_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            g_2 = t;
            if(((f_2 != NULL) && (f_2 != g_2)))
              _fail(g_2);
            else
              f_2 = g_2;
          }
        }
        t = n_5;
        {
          ATerm l_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_2));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
          t = not_null(h_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      {
        ATerm a_3 = NULL;
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        t = not_null(u_2);
        {
          ATerm e_0 (ATerm t)
          {
            t = term_q_5;
            return(t);
          }
          t = rewrite_1(t, e_0);
          {
            b_3 = t;
            r_2 :
            if(match_cons(b_3, sym_Defined_2))
              {
                c_3 = ATgetArgument(b_3, 0);
                d_3 = ATgetArgument(b_3, 1);
                s_2 :
                if(match_string(c_3, "b_0"))
                  {
                    if(((a_3 != NULL) && (a_3 != d_3)))
                      _fail(d_3);
                    else
                      a_3 = d_3;
                  }
                else
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
        t = not_null(a_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym_Call_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(match_cons(n_3, sym_SVar_1))
        {
          o_3 = ATgetArgument(n_3, 0);
          {
            ATerm s_3 = NULL,t_3 = NULL;
            ATerm u_3 = NULL;
            t = not_null(p_3);
            {
              t = length_0(t);
              {
                u_3 = t;
                {
                  if(((s_3 != NULL) && (s_3 != u_3)))
                    _fail(u_3);
                  else
                    s_3 = u_3;
                  {
                    ATerm r_5 = t;
                    int s_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(s_3));
                        {
                          t = RenameVar_0(t);
                          {
                            v_3 = t;
                            if(((t_3 != NULL) && (t_3 != v_3)))
                              _fail(v_3);
                            else
                              t_3 = v_3;
                          }
                        }
                        ;
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = r_5;
                        {
                          ATerm w_3 = NULL;
                          t = not_null(o_3);
                          {
                            t = HoArg_0(t);
                            {
                              w_3 = t;
                              if(((t_3 != NULL) && (t_3 != w_3)))
                                _fail(w_3);
                              else
                                t_3 = w_3;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_3)), not_null(p_3));
          }
        }
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
ATerm topdown_1 (ATerm t, ATerm v_69 (ATerm))
{
  t = v_69(t);
  {
    ATerm h_0 (ATerm t)
    {
      t = topdown_1(t, v_69);
      return(t);
    }
    t = _all(t, h_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_96 (ATerm))
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
        ATerm t_5;
        t_5 = t;
        {
          ATerm o_4 = NULL;
          ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
          t = i_96(t);
          {
            o_4 = t;
            {
              if(((l_4 != NULL) && (l_4 != o_4)))
                _fail(o_4);
              else
                l_4 = o_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), not_null(h_4), not_null(i_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_5 = t;
                    int w_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_a_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(w_5);
                      }
                    else
                      {
                        t = u_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_4 = t;
                      e_4 :
                      if(((ATgetType(p_4) == AT_LIST) && !(ATisEmpty(p_4))))
                        {
                          q_4 = ATgetFirst((ATermList) p_4);
                          r_4 = (ATerm) ATgetNext((ATermList) p_4);
                          {
                            if(((m_4 != NULL) && (m_4 != q_4)))
                              _fail(q_4);
                            else
                              m_4 = q_4;
                            {
                              if(((n_4 != NULL) && (n_4 != r_4)))
                                _fail(r_4);
                              else
                                n_4 = r_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), term_a_6, (ATerm) ATinsert(CheckATermList(not_null(n_4)), (ATerm) ATinsert(CheckATermList(not_null(m_4)), not_null(h_4))));
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
        t = t_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
    {
      y_4 = ATgetFirst((ATermList) x_4);
      z_4 = (ATerm) ATgetNext((ATermList) x_4);
      t = not_null(y_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(g_5));
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
ATerm rewrite_1 (ATerm t, ATerm k_96 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_b_6;
    {
      t = k_96(t);
      {
        p_5 = t;
        if(((o_5 != NULL) && (o_5 != p_5)))
          _fail(p_5);
        else
          o_5 = p_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(m_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = not_null(z_5);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_j_6;
            return(t);
          }
          t = rewrite_1(t, i_0);
          {
            c_6 = t;
            v_5 :
            if(match_cons(c_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_k_6;
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm f_6 = NULL;
          ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
          t = not_null(z_5);
          {
            ATerm k_0 (ATerm t)
            {
              t = term_j_6;
              return(t);
            }
            t = rewrite_1(t, k_0);
            {
              g_6 = t;
              x_5 :
              if(match_cons(g_6, sym_Defined_2))
                {
                  h_6 = ATgetArgument(g_6, 0);
                  i_6 = ATgetArgument(g_6, 1);
                  y_5 :
                  if(match_string(h_6, "g_0"))
                    {
                      if(((f_6 != NULL) && (f_6 != i_6)))
                        _fail(i_6);
                      else
                        f_6 = i_6;
                    }
                  else
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
          t = not_null(f_6);
        }
      }
  }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  t = SSL_int_to_string(not_null(o_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  x_6 :
  if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
    {
      a_7 = ATgetFirst((ATermList) z_6);
      b_7 = (ATerm) ATgetNext((ATermList) z_6);
      y_6 :
      if(match_int(a_7, 95))
        {
          ATerm d_7 = NULL;
          ATerm e_7 = NULL;
          t = not_null(b_7);
          {
            t = o_0(t);
            {
              e_7 = t;
              if(((d_7 != NULL) && (d_7 != e_7)))
                _fail(e_7);
              else
                d_7 = e_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_7)), term_l_6), term_l_6);
        }
      else
        {
          if(match_int(a_7, 45))
            {
              ATerm g_7 = NULL;
              ATerm h_7 = NULL;
              t = not_null(b_7);
              {
                t = o_0(t);
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_l_6);
            }
          else
            {
              if(match_int(a_7, 39))
                {
                  ATerm j_7 = NULL;
                  ATerm k_7 = NULL;
                  t = not_null(b_7);
                  {
                    t = o_0(t);
                    {
                      k_7 = t;
                      if(((j_7 != NULL) && (j_7 != k_7)))
                        _fail(k_7);
                      else
                        j_7 = k_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_7)), term_l_6), term_m_6), term_l_6);
                }
              else
                {
                  _fail(t);
                }
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm escape_1 (ATerm t, ATerm s_85 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm n_6 = t;
      int p_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_85(t, r_7);
          ;
          LocalPopChoice(p_6);
        }
      else
        {
          t = n_6;
          {
            ATerm q_6 = t;
            int r_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, r_7);
                ;
                LocalPopChoice(r_6);
              }
            else
              {
                t = q_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = r_7(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_Mod_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_7)), term_s_6), not_null(v_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_80(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
        e_8 = t;
        d_8 :
        if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
          {
            f_8 = ATgetFirst((ATermList) e_8);
            g_8 = (ATerm) ATgetNext((ATermList) e_8);
            {
              ATerm j_8 = NULL,l_8 = NULL;
              ATerm v_6;
              v_6 = t;
              {
                ATerm k_8 = NULL;
                t = not_null(f_8);
                {
                  t = t_80(t);
                  {
                    k_8 = t;
                    if(((j_8 != NULL) && (j_8 != k_8)))
                      _fail(k_8);
                    else
                      j_8 = k_8;
                  }
                }
              }
              t = v_6;
              {
                ATerm m_8 = NULL;
                t = not_null(g_8);
                {
                  t = foldr_3(t, r_80, s_80, t_80);
                  {
                    m_8 = t;
                    if(((l_8 != NULL) && (l_8 != m_8)))
                      _fail(m_8);
                    else
                      l_8 = m_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(l_8));
                  t = s_80(t);
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
ATerm length_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_w_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_SDef_3))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      z_8 = ATgetArgument(w_8, 2);
      {
        ATerm d_9 = NULL,e_9 = NULL;
        ATerm f_9 = NULL;
        t = not_null(y_8);
        {
          ATerm g_9 = NULL,i_9 = NULL,k_9 = NULL;
          t = length_0(t);
          {
            f_9 = t;
            {
              if(((d_9 != NULL) && (d_9 != f_9)))
                _fail(f_9);
              else
                d_9 = f_9;
              {
                ATerm f_7;
                f_7 = t;
                {
                  ATerm h_9 = NULL;
                  t = not_null(x_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        h_9 = t;
                        if(((g_9 != NULL) && (g_9 != h_9)))
                          _fail(h_9);
                        else
                          g_9 = h_9;
                      }
                    }
                  }
                }
                t = f_7;
                {
                  ATerm j_9 = NULL;
                  t = not_null(d_9);
                  {
                    t = int_to_string_0(t);
                    {
                      j_9 = t;
                      if(((i_9 != NULL) && (i_9 != j_9)))
                        _fail(j_9);
                      else
                        i_9 = j_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_9)), term_i_7), not_null(g_9));
                    {
                      t = concat_strings_0(t);
                      {
                        k_9 = t;
                        {
                          if(((e_9 != NULL) && (e_9 != k_9)))
                            _fail(k_9);
                          else
                            e_9 = k_9;
                          {
                            ATerm l_7;
                            l_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_8), not_null(d_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_7, not_null(e_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_q_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = l_7;
                            {
                              ATerm n_7 = t;
                              int o_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(x_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm p_7;
                                      p_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_k_6);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_j_6;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = p_7;
                                    }
                                  }
                                  ;
                                  LocalPopChoice(o_7);
                                }
                              else
                                {
                                  t = n_7;
                                  {
                                    ATerm q_7;
                                    q_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), (ATerm) ATmakeAppl(sym_Defined_2, term_s_7, not_null(e_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_j_6;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = q_7;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_9), not_null(y_8), not_null(z_8));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_Strategies_1))
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
            t = x_59(t);
            {
              b_10 = t;
              {
                ATerm e_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_10)), not_null(z_9));
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
ATerm Cons_2 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
    {
      q_10 = ATgetFirst((ATermList) p_10);
      r_10 = (ATerm) ATgetNext((ATermList) p_10);
      {
        ATerm v_10 = NULL,x_10 = NULL;
        ATerm w_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm z_10 = NULL;
            t = m_57(t);
            {
              x_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm b_11 = NULL;
                  t = n_57(t);
                  {
                    z_10 = t;
                    {
                      ATerm c_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_10)), not_null(x_10)), not_null(v_10));
                      {
                        c_11 = t;
                        if(((b_11 != NULL) && (b_11 != c_11)))
                          _fail(c_11);
                        else
                          b_11 = c_11;
                      }
                      t = not_null(b_11);
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
ATerm Specification_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Specification_1))
    {
      o_11 = ATgetArgument(n_11, 0);
      {
        ATerm r_11 = NULL,t_11 = NULL;
        ATerm s_11 = NULL;
        t = SSLgetAnnotations(not_null(n_11));
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
        {
          t = not_null(o_11);
          {
            ATerm v_11 = NULL;
            t = z_59(t);
            {
              t_11 = t;
              {
                ATerm w_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_11)), not_null(r_11));
                {
                  w_11 = t;
                  if(((v_11 != NULL) && (v_11 != w_11)))
                    _fail(w_11);
                  else
                    v_11 = w_11;
                }
                t = not_null(v_11);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym__2))
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
            t = d_56(t);
            {
              p_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm t_12 = NULL;
                  t = e_56(t);
                  {
                    r_12 = t;
                    {
                      ATerm u_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_12), not_null(r_12)), not_null(n_12));
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
ATerm default_usage_0 (ATerm t)
{
  ATerm c_13 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm d_13 = NULL,e_13 = NULL;
      d_13 = t;
      b_13 :
      if(match_cons(d_13, sym_Program_1))
        {
          e_13 = ATgetArgument(d_13, 0);
          if(((c_13 != NULL) && (c_13 != e_13)))
            _fail(e_13);
          else
            c_13 = e_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), not_null(c_13)), term_z_7));
      {
        t = printnl_0(t);
        {
          t = term_c_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      {
        ATerm b_8;
        b_8 = t;
        t = SSL_printnl(not_null(j_13), not_null(k_13));
        t = b_8;
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
  ATerm p_13 = NULL;
  p_13 = t;
  t = SSL_implode_string(not_null(p_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = c_8;
      {
        ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
        u_13 = t;
        t_13 :
        if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
          {
            v_13 = ATgetFirst((ATermList) u_13);
            w_13 = (ATerm) ATgetNext((ATermList) u_13);
            {
              t = not_null(v_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(w_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_0);
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
  ATerm g_14 = NULL;
  ATerm i_14 = NULL;
  g_14 = t;
  {
    ATerm j_14 = NULL;
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    t = not_null(g_14);
    {
      j_14 = t;
      {
        t = SSL_explode_term(not_null(j_14));
        {
          l_14 = t;
          e_14 :
          if(match_cons(l_14, sym__2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
              f_14 :
              if(match_string(m_14, ""))
                {
                  if(((i_14 != NULL) && (i_14 != n_14)))
                    _fail(n_14);
                  else
                    i_14 = n_14;
                }
              else
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
      t = not_null(i_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm r_14 (ATerm t)
  {
    ATerm i_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_14);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = i_8;
        {
          t = Nil_0(t);
          t = l_76(t);
        }
      }
    return(t);
  }
  t = r_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(w_14);
            return(t);
          }
          t = at_end_1(t, y_0);
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
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  t = SSL_explode_string(not_null(b_15));
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
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_is_string(not_null(f_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            {
              ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
              o_15 = t;
              n_15 :
              if(match_cons(o_15, sym_Path_1))
                {
                  p_15 = ATgetArgument(o_15, 0);
                  t = not_null(p_15);
                }
              else
                {
                  if(match_cons(o_15, sym_Var_1))
                    {
                      p_15 = ATgetArgument(o_15, 0);
                      {
                        t = not_null(p_15);
                        {
                          ATerm u_8 = t;
                          int a_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_9);
                            }
                          else
                            {
                              t = u_8;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_b_9;
                                  return(t);
                                }
                                t = debug_1(t, a_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_15, sym_Prefix_2))
                        {
                          p_15 = ATgetArgument(o_15, 0);
                          q_15 = ATgetArgument(o_15, 1);
                          {
                            ATerm v_15 = NULL,x_15 = NULL;
                            ATerm c_9;
                            c_9 = t;
                            {
                              ATerm w_15 = NULL;
                              t = not_null(p_15);
                              {
                                t = eval_config_0(t);
                                {
                                  w_15 = t;
                                  if(((v_15 != NULL) && (v_15 != w_15)))
                                    _fail(w_15);
                                  else
                                    v_15 = w_15;
                                }
                              }
                            }
                            t = c_9;
                            {
                              ATerm y_15 = NULL;
                              t = not_null(q_15);
                              {
                                t = eval_config_0(t);
                                {
                                  y_15 = t;
                                  if(((x_15 != NULL) && (x_15 != y_15)))
                                    _fail(y_15);
                                  else
                                    x_15 = y_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(x_15));
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
  ATerm g_16 = NULL;
  g_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(g_16));
    {
      t = table_get_0(t);
      {
        ATerm b_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_9;
            m_9 = t;
            {
              ATerm i_16 = NULL;
              ATerm j_16 = NULL;
              j_16 = t;
              if(((i_16 != NULL) && (i_16 != j_16)))
                _fail(j_16);
              else
                i_16 = j_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_9, not_null(g_16), not_null(i_16));
                t = table_put_0(t);
              }
            }
            t = m_9;
          }
          return(t);
        }
        t = try_1(t, b_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm n_9;
    n_9 = t;
    {
      ATerm n_16 = NULL;
      ATerm o_16 = NULL;
      t = term_o_9;
      {
        t = get_config_0(t);
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_p_9);
        t = geq_0(t);
      }
    }
    t = n_9;
    t = g_92(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym__2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      t = SSL_WriteToTextFile(not_null(t_16), not_null(u_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      t = SSL_WriteToBinaryFile(not_null(b_17), not_null(c_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_17 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm l_17 = NULL,m_17 = NULL;
            l_17 = t;
            h_17 :
            if(match_cons(l_17, sym_Output_1))
              {
                m_17 = ATgetArgument(l_17, 0);
                if(((k_17 != NULL) && (k_17 != m_17)))
                  _fail(m_17);
                else
                  k_17 = m_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          ;
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm n_17 = NULL;
            t = term_t_9;
            {
              n_17 = t;
              if(((k_17 != NULL) && (k_17 != n_17)))
                _fail(n_17);
              else
                k_17 = n_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = q_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(k_17);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm o_17 = NULL;
              o_17 = t;
              j_17 :
              if(!(match_cons(o_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(y_9);
        }
      else
        {
          t = x_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  ATerm c_10;
  c_10 = t;
  t = dtime_0(t);
  t = c_10;
  {
    t = n_90(t);
    {
      ATerm f_10;
      f_10 = t;
      {
        ATerm v_17 = NULL;
        t = dtime_0(t);
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
      }
      t = f_10;
      {
        w_17 = t;
        t_17 :
        if(match_cons(w_17, sym__2))
          {
            x_17 = ATgetArgument(w_17, 0);
            y_17 = ATgetArgument(w_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_17))), not_null(y_17));
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
ATerm debug_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm g_10;
  g_10 = t;
  {
    ATerm f_18 = NULL,h_18 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm g_18 = NULL;
      t = i_89(t);
      {
        g_18 = t;
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
      }
    }
    t = h_10;
    {
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_18)), not_null(f_18)));
        t = printnl_0(t);
      }
    }
  }
  t = g_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm m_18 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL;
      n_18 = t;
      {
        if(((m_18 != NULL) && (m_18 != n_18)))
          _fail(n_18);
        else
          m_18 = n_18;
        t = SSL_ReadFromFile(not_null(m_18));
      }
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_k_10;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm))
{
  ATerm r_18 = NULL,t_18 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm s_18 = NULL;
    t = h_73(t);
    {
      s_18 = t;
      if(((r_18 != NULL) && (r_18 != s_18)))
        _fail(s_18);
      else
        r_18 = s_18;
    }
  }
  t = l_10;
  {
    ATerm u_18 = NULL;
    t = i_73(t);
    {
      u_18 = t;
      if(((t_18 != NULL) && (t_18 != u_18)))
        _fail(u_18);
      else
        t_18 = u_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(t_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_19 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm n_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm b_19 = NULL,c_19 = NULL;
          b_19 = t;
          y_18 :
          if(match_cons(b_19, sym_Input_1))
            {
              c_19 = ATgetArgument(b_19, 0);
              if(((a_19 != NULL) && (a_19 != c_19)))
                _fail(c_19);
              else
                a_19 = c_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_1);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = n_10;
        {
          ATerm d_19 = NULL;
          t = term_t_10;
          {
            d_19 = t;
            if(((a_19 != NULL) && (a_19 != d_19)))
              _fail(d_19);
            else
              a_19 = d_19;
          }
        }
      }
  }
  t = m_10;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(a_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm h_19 = NULL;
    h_19 = t;
    g_19 :
    if(!(match_string(h_19, "-v")))
      {
        if(!(match_string(h_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_y_10;
    t = set_config_0(t);
    t = term_a_11;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_d_11;
    return(t);
  }
  t = Option_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm k_19 = NULL;
    k_19 = t;
    i_19 :
    if(!(match_string(k_19, "-k")))
      {
        if(!(match_string(k_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm e_11;
    e_11 = t;
    {
      ATerm l_19 = NULL;
      ATerm m_19 = NULL;
      t = string_to_int_0(t);
      {
        m_19 = t;
        if(((l_19 != NULL) && (l_19 != m_19)))
          _fail(m_19);
        else
          l_19 = m_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(l_19));
        t = set_config_0(t);
      }
    }
    t = e_11;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_string_to_int(not_null(p_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm x_19 = NULL;
        x_19 = t;
        s_19 :
        if(!(match_string(x_19, "-S")))
          {
            if(!(match_string(x_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_j_11;
        t = set_config_0(t);
        t = term_k_11;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_l_11;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_19 = NULL;
              y_19 = t;
              t_19 :
              if(!(match_string(y_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm b_20 = NULL;
              ATerm u_11;
              u_11 = t;
              {
                ATerm z_19 = NULL;
                ATerm a_20 = NULL;
                t = string_to_int_0(t);
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(z_19));
                  t = set_config_0(t);
                }
              }
              t = u_11;
              {
                ATerm c_20 = NULL;
                c_20 = t;
                if(((b_20 != NULL) && (b_20 != c_20)))
                  _fail(c_20);
                else
                  b_20 = c_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_20));
              }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_x_11;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm a_2 (ATerm t)
              {
                ATerm d_20 = NULL;
                d_20 = t;
                w_19 :
                if(!(match_string(d_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_z_11;
                t = set_config_0(t);
                t = term_a_12;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_b_12;
                return(t);
              }
              t = Option_3(t, a_2, b_2, c_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm j_20 = NULL;
    j_20 = t;
    g_20 :
    if(!(match_string(j_20, "-o")))
      {
        if(!(match_string(j_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm m_20 = NULL;
    ATerm k_12;
    k_12 = t;
    {
      ATerm k_20 = NULL;
      ATerm l_20 = NULL;
      l_20 = t;
      if(((k_20 != NULL) && (k_20 != l_20)))
        _fail(l_20);
      else
        k_20 = l_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(k_20));
        t = set_config_0(t);
      }
    }
    t = k_12;
    {
      ATerm n_20 = NULL;
      n_20 = t;
      if(((m_20 != NULL) && (m_20 != n_20)))
        _fail(n_20);
      else
        m_20 = n_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_20));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, i_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = q_12;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm r_20 = NULL;
          r_20 = t;
          q_20 :
          if(!(match_string(r_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_w_12;
          t = set_config_0(t);
          t = term_x_12;
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_y_12;
          return(t);
        }
        t = Option_3(t, j_2, k_2, m_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  x_20 = t;
  v_20 :
  if(match_string(x_20, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
        {
          y_20 = ATgetFirst((ATermList) x_20);
          z_20 = (ATerm) ATgetNext((ATermList) x_20);
          w_20 :
          if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
            {
              a_21 = ATgetFirst((ATermList) z_20);
              b_21 = (ATerm) ATgetNext((ATermList) z_20);
              {
                ATerm f_21 = NULL;
                ATerm z_12;
                z_12 = t;
                {
                  t = not_null(y_20);
                  t = l_0(t);
                }
                t = z_12;
                {
                  ATerm g_21 = NULL;
                  t = not_null(a_21);
                  {
                    t = m_0(t);
                    {
                      g_21 = t;
                      if(((f_21 != NULL) && (f_21 != g_21)))
                        _fail(g_21);
                      else
                        f_21 = g_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_21)), not_null(f_21));
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
  ATerm n_2 (ATerm t)
  {
    ATerm n_21 = NULL;
    n_21 = t;
    k_21 :
    if(!(match_string(n_21, "-i")))
      {
        if(!(match_string(n_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm q_21 = NULL;
    ATerm a_13;
    a_13 = t;
    {
      ATerm o_21 = NULL;
      ATerm p_21 = NULL;
      p_21 = t;
      if(((o_21 != NULL) && (o_21 != p_21)))
        _fail(p_21);
      else
        o_21 = p_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(o_21));
        t = set_config_0(t);
      }
    }
    t = a_13;
    {
      ATerm r_21 = NULL;
      r_21 = t;
      if(((q_21 != NULL) && (q_21 != r_21)))
        _fail(r_21);
      else
        q_21 = r_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_21));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, term_q_13));
  {
    t = printnl_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_TicksToSeconds(not_null(v_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym__2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_22), not_null(c_22));
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            t = SSL_addr(not_null(b_22), not_null(c_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_80(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
        j_22 = t;
        i_22 :
        if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
          {
            k_22 = ATgetFirst((ATermList) j_22);
            l_22 = (ATerm) ATgetNext((ATermList) j_22);
            {
              ATerm o_22 = NULL;
              ATerm p_22 = NULL;
              t = not_null(l_22);
              {
                t = foldr_2(t, p_80, q_80);
                {
                  p_22 = t;
                  if(((o_22 != NULL) && (o_22 != p_22)))
                    _fail(p_22);
                  else
                    o_22 = p_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(o_22));
                t = q_80(t);
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
ATerm crush_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm w_22 = NULL;
  ATerm y_22 = NULL;
  w_22 = t;
  {
    ATerm z_22 = NULL;
    ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
    t = not_null(w_22);
    {
      z_22 = t;
      {
        t = SSL_explode_term(not_null(z_22));
        {
          b_23 = t;
          v_22 :
          if(match_cons(b_23, sym__2))
            {
              c_23 = ATgetArgument(b_23, 0);
              d_23 = ATgetArgument(b_23, 1);
              if(((y_22 != NULL) && (y_22 != d_23)))
                _fail(d_23);
              else
                y_22 = d_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_22);
      t = foldr_2(t, n_79, o_79);
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
    ATerm q_2 (ATerm t)
    {
      t = term_w_6;
      return(t);
    }
    t = crush_2(t, q_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      {
        ATerm z_13;
        z_13 = t;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_23), not_null(l_23));
              ;
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = SSL_gtr(not_null(k_23), not_null(l_23));
            }
        }
        t = z_13;
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
  ATerm r_23 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
      s_23 = t;
      q_23 :
      if(match_cons(s_23, sym__2))
        {
          t_23 = ATgetArgument(s_23, 0);
          u_23 = ATgetArgument(s_23, 1);
          {
            if(((r_23 != NULL) && (r_23 != t_23)))
              _fail(t_23);
            else
              r_23 = t_23;
            if(((r_23 != NULL) && (r_23 != u_23)))
              _fail(u_23);
            else
              r_23 = u_23;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_92 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm x_23 = NULL;
      ATerm y_23 = NULL;
      t = term_o_9;
      {
        t = get_config_0(t);
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), term_c_7);
        t = geq_0(t);
      }
    }
    t = h_14;
    t = f_92(t);
    return(t);
  }
  t = try_1(t, x_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm w_24 = NULL,y_24 = NULL;
    ATerm k_14;
    k_14 = t;
    {
      ATerm x_24 = NULL;
      t = run_time_0(t);
      {
        x_24 = t;
        if(((w_24 != NULL) && (w_24 != x_24)))
          _fail(x_24);
        else
          w_24 = x_24;
      }
    }
    t = k_14;
    {
      ATerm z_24 = NULL;
      t = term_o_14;
      {
        t = get_config_0(t);
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_14), not_null(w_24)), term_p_14), not_null(y_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_2);
  {
    t = term_w_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_Version_0))
    {
      ATerm i_25 = NULL,k_25 = NULL;
      ATerm s_14;
      s_14 = t;
      {
        ATerm j_25 = NULL;
        t = SSLgetAnnotations(not_null(g_25));
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
      }
      t = s_14;
      {
        ATerm l_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_25));
        {
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
        }
        t = not_null(k_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = l_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = SSL_table_create(not_null(q_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  {
    ATerm c_15;
    c_15 = t;
    {
      t = term_d_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_15, term_e_15, not_null(u_25));
          t = table_put_0(t);
        }
      }
    }
    t = c_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  t = SSL_table_destroy(not_null(y_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_exit(not_null(c_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(((ATgetType(g_26) == AT_LIST) && ATisEmpty(g_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
        {
          h_26 = ATgetFirst((ATermList) g_26);
          i_26 = (ATerm) ATgetNext((ATermList) g_26);
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
  ATerm g_15;
  g_15 = t;
  {
    ATerm l_26 = NULL;
    ATerm o_26 = NULL;
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm m_26 = NULL;
          ATerm n_26 = NULL;
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
          t = (ATerm) ATinsert(ATempty, not_null(m_26));
        }
      }
    {
      o_26 = t;
      if(((l_26 != NULL) && (l_26 != o_26)))
        _fail(o_26);
      else
        l_26 = o_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(l_26));
      t = printnl_0(t);
    }
  }
  t = g_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm r_26 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = Cons_2(t, w_75, r_26);
      }
    return(t);
  }
  t = r_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  a_27 = t;
  x_26 :
  if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
    {
      y_26 = ATgetFirst((ATermList) a_27);
      z_26 = (ATerm) ATgetNext((ATermList) a_27);
      {
        ATerm d_27 = NULL;
        t = not_null(z_26);
        {
          ATerm l_15;
          l_15 = t;
          {
            ATerm e_27 = NULL,g_27 = NULL,i_27 = NULL;
            ATerm m_15;
            m_15 = t;
            {
              ATerm f_27 = NULL;
              t = j_0(t);
              {
                f_27 = t;
                if(((e_27 != NULL) && (e_27 != f_27)))
                  _fail(f_27);
                else
                  e_27 = f_27;
              }
            }
            t = m_15;
            {
              ATerm h_27 = NULL;
              t = not_null(y_26);
              {
                t = f_0(t);
                {
                  h_27 = t;
                  if(((g_27 != NULL) && (g_27 != h_27)))
                    _fail(h_27);
                  else
                    g_27 = h_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(g_27));
                {
                  i_27 = t;
                  if(((d_27 != NULL) && (d_27 != i_27)))
                    _fail(i_27);
                  else
                    d_27 = i_27;
                }
              }
            }
          }
          t = l_15;
          {
            ATerm e_3 (ATerm t)
            {
              t = not_null(d_27);
              return(t);
            }
            t = reverse_acc_2(t, f_0, e_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_27) == AT_LIST) && ATisEmpty(a_27)))
        {
          {
            t = term_b_6;
            t = j_0(t);
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
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Program_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      {
        ATerm x_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        {
          t = not_null(u_27);
          {
            ATerm b_28 = NULL;
            t = m_63(t);
            {
              z_27 = t;
              {
                ATerm c_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_27)), not_null(x_27));
                {
                  c_28 = t;
                  if(((b_28 != NULL) && (b_28 != c_28)))
                    _fail(c_28);
                  else
                    b_28 = c_28;
                }
                t = not_null(b_28);
              }
            }
          }
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
  ATerm l_28 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = NULL;
      t = term_o_14;
      {
        t = get_config_0(t);
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
      }
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm n_28 = NULL;
            n_28 = t;
            if(((l_28 != NULL) && (l_28 != n_28)))
              _fail(n_28);
            else
              l_28 = n_28;
            return(t);
          }
          t = Program_1(t, h_3);
          return(t);
        }
        t = option_defined_1(t, g_3);
      }
    }
  {
    ATerm i_3 (ATerm t)
    {
      ATerm j_3 (ATerm t)
      {
        t = not_null(l_28);
        return(t);
      }
      t = short_description_1(t, j_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_3);
    {
      t = term_t_15;
      {
        t = echo_0(t);
        {
          t = term_a_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_3 (ATerm t)
                {
                  ATerm o_28 = NULL;
                  ATerm p_28 = NULL;
                  p_28 = t;
                  if(((o_28 != NULL) && (o_28 != p_28)))
                    _fail(p_28);
                  else
                    o_28 = p_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_28)), term_b_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_3);
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm q_28 = NULL;
                    ATerm r_28 = NULL;
                    ATerm x_3 (ATerm t)
                    {
                      t = not_null(l_28);
                      return(t);
                    }
                    t = long_description_1(t, x_3);
                    {
                      r_28 = t;
                      if(((q_28 != NULL) && (q_28 != r_28)))
                        _fail(r_28);
                      else
                        q_28 = r_28;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_28)), term_c_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, r_3);
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
  ATerm d_16;
  d_16 = t;
  {
    ATerm x_28 = NULL;
    ATerm y_28 = NULL;
    y_28 = t;
    if(((x_28 != NULL) && (x_28 != y_28)))
      _fail(y_28);
    else
      x_28 = y_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, not_null(x_28)));
      t = printnl_0(t);
    }
  }
  t = d_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm e_16;
  e_16 = t;
  {
    t = j_89(t);
    t = debug_0(t);
  }
  t = e_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_Undefined_1))
    {
      g_29 = ATgetArgument(f_29, 0);
      {
        ATerm j_29 = NULL,l_29 = NULL;
        ATerm k_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm n_29 = NULL;
            t = n_63(t);
            {
              l_29 = t;
              {
                ATerm o_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_29)), not_null(j_29));
                {
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                }
                t = not_null(n_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm t_29 (ATerm t)
  {
    ATerm f_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_76, _id);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = f_16;
        t = Cons_2(t, _id, t_29);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_93 (ATerm))
{
  t = fetch_1(t, i_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_Help_0))
    {
      ATerm a_30 = NULL,c_30 = NULL;
      ATerm k_16;
      k_16 = t;
      {
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(y_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      t = k_16;
      {
        ATerm d_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_30));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        t = not_null(c_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_72(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      t = SSL_table_get(not_null(k_30), not_null(l_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__3))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      {
        ATerm p_16;
        p_16 = t;
        {
          ATerm z_30 = NULL;
          ATerm a_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(u_30));
          {
            ATerm q_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = q_16;
                t = (ATerm) ATempty;
              }
            {
              a_31 = t;
              if(((z_30 != NULL) && (z_30 != a_31)))
                _fail(a_31);
              else
                z_30 = a_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_30), not_null(u_30), (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(v_30)));
            t = table_put_0(t);
          }
        }
        t = p_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_94 (ATerm))
{
  ATerm j_31 = NULL;
  ATerm k_31 = NULL;
  t = term_b_6;
  {
    t = n_94(t);
    {
      k_31 = t;
      if(((j_31 != NULL) && (j_31 != k_31)))
        _fail(k_31);
      else
        j_31 = k_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_15, term_z_15, not_null(j_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_string(q_31, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          r_31 = ATgetFirst((ATermList) q_31);
          s_31 = (ATerm) ATgetNext((ATermList) q_31);
          {
            ATerm z_31 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              t = not_null(r_31);
              t = a_0(t);
            }
            t = w_16;
            {
              ATerm a_32 = NULL;
              t = term_b_6;
              {
                t = c_0(t);
                {
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_31)), not_null(z_31));
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
  ATerm y_3 (ATerm t)
  {
    ATerm f_32 = NULL;
    f_32 = t;
    e_32 :
    if(!(match_string(f_32, "--help")))
      {
        if(!(match_string(f_32, "-h")))
          {
            if(!(match_string(f_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_y_16;
    {
      t = set_config_0(t);
      t = term_d_17;
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  t = Option_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
    {
      j_32 = ATgetFirst((ATermList) i_32);
      k_32 = (ATerm) ATgetNext((ATermList) i_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_9, not_null(r_32), not_null(s_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm f_17;
  f_17 = t;
  {
    ATerm b_4 (ATerm t)
    {
      t = term_g_17;
      t = l_94(t);
      return(t);
    }
    t = try_1(t, b_4);
  }
  t = f_17;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm a_33 = NULL;
      ATerm i_17;
      i_17 = t;
      {
        ATerm y_32 = NULL;
        ATerm z_32 = NULL;
        z_32 = t;
        if(((y_32 != NULL) && (y_32 != z_32)))
          _fail(z_32);
        else
          y_32 = z_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(y_32));
          t = set_config_0(t);
        }
      }
      t = i_17;
      {
        ATerm b_33 = NULL;
        b_33 = t;
        if(((a_33 != NULL) && (a_33 != b_33)))
          _fail(b_33);
        else
          a_33 = b_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_33));
      }
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              {
                t = l_94(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          ;
          LocalPopChoice(q_17);
        }
      else
        {
          t = p_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
    l_33 = t;
    g_33 :
    if(match_cons(l_33, sym__3))
      {
        m_33 = ATgetArgument(l_33, 0);
        n_33 = ATgetArgument(l_33, 1);
        o_33 = ATgetArgument(l_33, 2);
        {
          if(((i_33 != NULL) && (i_33 != m_33)))
            _fail(m_33);
          else
            i_33 = m_33;
          {
            if(((j_33 != NULL) && (j_33 != n_33)))
              _fail(n_33);
            else
              j_33 = n_33;
            {
              if(((k_33 != NULL) && (k_33 != o_33)))
                _fail(o_33);
              else
                k_33 = o_33;
              t = SSL_table_put(not_null(i_33), not_null(j_33), not_null(k_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_94 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm a_18;
  a_18 = t;
  {
    t = term_b_18;
    t = table_put_0(t);
  }
  t = a_18;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_94(t);
          ;
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_4);
    {
      ATerm k_4 (ATerm t)
      {
        ATerm e_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18;
            k_18 = t;
            {
              ATerm l_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = l_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_18;
            {
              t = system_usage_0(t);
              {
                t = term_w_6;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = e_18;
            {
              ATerm s_4 (ATerm t)
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm s_33 = NULL;
                  s_33 = t;
                  if(((r_33 != NULL) && (r_33 != s_33)))
                    _fail(s_33);
                  else
                    r_33 = s_33;
                  return(t);
                }
                t = Undefined_1(t, t_4);
                return(t);
              }
              t = option_defined_1(t, s_4);
              {
                ATerm u_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_33)), term_p_18);
                  return(t);
                }
                t = say_1(t, u_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_4);
      {
        ATerm q_18;
        q_18 = t;
        {
          t = term_u_15;
          t = table_destroy_0(t);
        }
        t = q_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm))
{
  t = parse_options_1(t, r_90);
  {
    t = store_options_0(t);
    {
      t = t_90(t);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_90);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm x_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_90(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = x_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_91(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_4, k_91, l_91, a_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm j_19;
      j_19 = t;
      {
        ATerm v_33 = NULL;
        ATerm w_33 = NULL;
        t = term_o_14;
        {
          t = get_config_0(t);
          {
            w_33 = t;
            if(((v_33 != NULL) && (v_33 != w_33)))
              _fail(w_33);
            else
              v_33 = w_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, not_null(v_33)));
          t = printnl_0(t);
        }
      }
      t = j_19;
      return(t);
    }
    t = if_verbose2_1(t, c_5);
    return(t);
  }
  t = iowrap_4(t, c_91, d_91, e_91, b_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  t = iowrap_3(t, a_91, b_91, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_90 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    t = _2(t, _id, x_90);
    return(t);
  }
  t = iowrap_2(t, h_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, l_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, k_5);
      return(t);
    }
    t = Specification_1(t, j_5);
    return(t);
  }
  t = iowrap_1(t, i_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
