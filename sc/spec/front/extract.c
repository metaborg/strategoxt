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
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
ATerm term_l_32;
ATerm term_b_32;
ATerm term_t_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_t_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_g_23;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_a_22;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_c_9;
ATerm term_n_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Op_2, term_t_11, (ATerm) ATempty);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_n_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_o_15);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_n_19);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_19);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_o_15);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_o_15);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_w_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_o_15);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__3, term_v_29, term_w_29, (ATerm) ATempty);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm));
ATerm Let_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_102 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_90 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_87 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm Prim_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm Explode_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm Op_2 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm));
ATerm pat_td_1 (ATerm, ATerm d_116 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm g_93 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_104 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm v_78 (ATerm), ATerm w_78 (ATerm));
ATerm Con_3 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm t_75 (ATerm), ATerm u_75 (ATerm));
ATerm oncetd_1 (ATerm, ATerm o_89 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_87 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm m_92 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm o_99 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm e_93 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm e_98 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm));
ATerm zip_1 (ATerm, ATerm b_93 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm s_115 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_104 (ATerm), ATerm y_104 (ATerm));
ATerm for_3 (ATerm, ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_115 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_98 (ATerm), ATerm n_98 (ATerm));
ATerm union_1 (ATerm, ATerm i_98 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_116 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm u_77 (ATerm));
ATerm Cons_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_77 (ATerm));
ATerm _2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_95 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_110 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_109 (ATerm));
ATerm debug_1 (ATerm, ATerm c_108 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_98 (ATerm), ATerm a_99 (ATerm));
ATerm crush_2 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_110 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_109 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_113 (ATerm));
ATerm map_1 (ATerm, ATerm l_94 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_113 (ATerm));
ATerm Program_1 (ATerm, ATerm j_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_108 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_94 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_112 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_91 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_113 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_113 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_113 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_109 (ATerm), ATerm u_109 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_109 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATgetType(i_3) == AT_LIST) && ATisEmpty(i_3)))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm h_6;
        h_6 = t;
        {
          ATerm l_4 = NULL;
          t = SSLgetAnnotations(not_null(i_3));
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = h_6;
        {
          ATerm o_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            o_5 = t;
            if(((m_4 != NULL) && (m_4 != o_5)))
              _fail(o_5);
            else
              m_4 = o_5;
          }
          t = not_null(m_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  g_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(m_6)), term_j_6), not_null(l_6)), term_i_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      x_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(match_cons(u_6, sym_Mod_2))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(x_6)), term_j_6), not_null(w_6)), term_o_6), not_null(v_6)), term_i_6);
            t = error_0(t);
          }
        }
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm b_0 (ATerm t)
              {
                ATerm p_6 = t;
                int q_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(q_6);
                  }
                else
                  {
                    t = p_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, b_0);
            }
            t = not_null(g_7);
          }
        }
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      q_7 :
      if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
        {
          t = not_null(s_7);
        }
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm y_6;
  y_6 = t;
  {
    t = error_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  t = y_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_7;
  b_7 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = b_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      k_8 :
      if(match_int(n_8, 0))
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm m_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  ATerm u_8 = NULL;
                                  u_8 = t;
                                  d_8 :
                                  if(!(match_int(u_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, f_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = m_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_n_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
                          {
                            {
                              if(((w_8 != NULL) && (w_8 != y_8)))
                                _fail(y_8);
                              else
                                w_8 = y_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
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
ATerm Rec_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Rec_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = v_76(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = w_76(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
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
ATerm SDef_3 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_SDef_3))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      n_10 = ATgetArgument(k_10, 2);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm w_10 = NULL;
            t = z_76(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = a_77(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = b_77(t);
                        {
                          y_10 = t;
                          {
                            ATerm b_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_10), not_null(w_10), not_null(y_10)), not_null(s_10));
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
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = x_76(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = y_76(t);
                  {
                    y_11 = t;
                    {
                      ATerm b_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_11), not_null(y_11)), not_null(u_11));
                      {
                        b_12 = t;
                        if(((a_12 != NULL) && (a_12 != b_12)))
                          _fail(b_12);
                        else
                          a_12 = b_12;
                      }
                      t = not_null(a_12);
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
ATerm sboundin_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm o_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_87, d_87);
      LocalPopChoice(u_7);
    }
  else
    {
      t = o_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_87, f_87, d_87);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = Rec_2(t, f_87, d_87);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Rec_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_SDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        t = not_null(v_12);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
            a_13 = t;
            r_12 :
            if(match_cons(a_13, sym_VarDec_2))
              {
                b_13 = ATgetArgument(a_13, 0);
                c_13 = ATgetArgument(a_13, 1);
                t = not_null(b_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_0);
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
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
            p_13 = t;
            i_13 :
            if(match_cons(p_13, sym_SDef_3))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                s_13 = ATgetArgument(p_13, 2);
                t = not_null(q_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm))
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm f_14 = NULL;
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(c_14);
    {
      f_14 = t;
      {
        t = SSL_explode_term(not_null(f_14));
        {
          h_14 = t;
          b_14 :
          if(match_cons(h_14, sym__2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              if(((e_14 != NULL) && (e_14 != j_14)))
                _fail(j_14);
              else
                e_14 = j_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_14);
      t = foldr_3(t, z_97, a_98, b_98);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_102 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_102(t);
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm g_8;
          g_8 = t;
          {
            ATerm p_14 = NULL;
            t = k_102(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = g_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, m_102);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = l_102(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, q_14);
          }
        }
      return(t);
    }
    t = split_2(t, l_0, o_0);
    t = union_0(t);
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    z_14 = t;
    u_14 :
    if(match_cons(z_14, sym_Call_2))
      {
        a_15 = ATgetArgument(z_14, 0);
        c_15 = ATgetArgument(z_14, 1);
        v_14 :
        if(match_cons(a_15, sym_SVar_1))
          {
            b_15 = ATgetArgument(a_15, 0);
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              t = not_null(c_15);
              {
                t = length_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(f_15)));
            }
          }
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
  ATerm x_0 (ATerm t)
  {
    ATerm o_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = o_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    h_15 = t;
    x_14 :
    if(match_cons(h_15, sym__2))
      {
        i_15 = ATgetArgument(h_15, 0);
        l_15 = ATgetArgument(h_15, 1);
        y_14 :
        if(match_cons(i_15, sym__2))
          {
            j_15 = ATgetArgument(i_15, 0);
            k_15 = ATgetArgument(i_15, 1);
            if(((j_15 != NULL) && (j_15 != l_15)))
              _fail(l_15);
            else
              j_15 = l_15;
          }
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
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(x_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          t_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              u_15 :
              if(match_string(f_16, ""))
                {
                  v_15 :
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
                        {
                          j_16 = ATgetFirst((ATermList) i_16);
                          k_16 = (ATerm) ATgetNext((ATermList) i_16);
                          {
                            if(((z_15 != NULL) && (z_15 != h_16)))
                              _fail(h_16);
                            else
                              z_15 = h_16;
                            {
                              if(((b_16 != NULL) && (b_16 != j_16)))
                                _fail(j_16);
                              else
                                b_16 = j_16;
                              if(((a_16 != NULL) && (a_16 != k_16)))
                                _fail(k_16);
                              else
                                a_16 = k_16;
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
      }
    }
    t = not_null(b_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm r_16 = NULL;
      t = Fst_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = d_9;
    {
      ATerm t_16 = NULL;
      t = Snd_0(t);
      {
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_16), not_null(s_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  x_16 :
  if(match_cons(a_17, sym_Call_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      d_17 = ATgetArgument(a_17, 1);
      y_16 :
      if(match_cons(b_17, sym_SVar_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          z_16 :
          if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
            {
              t = not_null(c_17);
            }
          else
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
ATerm Look2_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
        }
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = w_87(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = x_87(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_90(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, h_87, c_1);
              t = i_87(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm j_87 (ATerm))
{
  t = substitute_2(t, j_87, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_VarDec_2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = c_77(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = d_77(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  i_21 = t;
  g_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      n_21 = (ATerm) ATgetNext((ATermList) i_21);
      h_21 :
      if(match_cons(j_21, sym_SDef_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,p_22 = NULL;
            ATerm i_9;
            i_9 = t;
            {
              ATerm v_21 = NULL;
              t = not_null(l_21);
              {
                ATerm b_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  v_21 = t;
                  {
                    if(((s_21 != NULL) && (s_21 != v_21)))
                      _fail(v_21);
                    else
                      s_21 = v_21;
                    {
                      t = not_null(s_21);
                      {
                        ATerm o_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                          w_21 = t;
                          x_20 :
                          if(match_cons(w_21, sym_VarDec_2))
                            {
                              x_21 = ATgetArgument(w_21, 0);
                              y_21 = ATgetArgument(w_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          b_22 = t;
                          {
                            if(((t_21 != NULL) && (t_21 != b_22)))
                              _fail(b_22);
                            else
                              t_21 = b_22;
                            {
                              t = not_null(i_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  c_22 = t;
                                  d_21 :
                                  if(match_cons(c_22, sym_SDef_3))
                                    {
                                      d_22 = ATgetArgument(c_22, 0);
                                      e_22 = ATgetArgument(c_22, 1);
                                      f_22 = ATgetArgument(c_22, 2);
                                      {
                                        ATerm i_22 = NULL;
                                        ATerm n_22 = NULL;
                                        t = not_null(e_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                                            j_22 = t;
                                            b_21 :
                                            if(match_cons(j_22, sym_VarDec_2))
                                              {
                                                k_22 = ATgetArgument(j_22, 0);
                                                l_22 = ATgetArgument(j_22, 1);
                                                t = not_null(k_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            n_22 = t;
                                            if(((i_22 != NULL) && (i_22 != n_22)))
                                              _fail(n_22);
                                            else
                                              i_22 = n_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), not_null(t_21), not_null(f_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  o_22 = t;
                                  if(((u_21 != NULL) && (u_21 != o_22)))
                                    _fail(o_22);
                                  else
                                    u_21 = o_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = i_9;
            {
              ATerm q_22 = NULL;
              t = not_null(u_21);
              {
                t = choices_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_21), not_null(s_21), not_null(p_22));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  b_23 :
  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ATisEmpty(f_23)))
        {
          t = not_null(e_23);
        }
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
ATerm joindefs_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      q_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = Definitions_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(q_23));
          }
        }
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
ATerm Expl_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_ExplodeCong_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = new_0(t);
        {
          y_24 = t;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              ATerm a_25 = NULL;
              t = new_0(t);
              {
                z_24 = t;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    ATerm b_25 = NULL;
                    t = new_0(t);
                    {
                      a_25 = t;
                      {
                        if(((w_24 != NULL) && (w_24 != a_25)))
                          _fail(a_25);
                        else
                          w_24 = a_25;
                        {
                          t = new_0(t);
                          {
                            b_25 = t;
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
      }
    }
  else
    {
      if(match_cons(q_24, sym_Build_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL;
            ATerm l_25 = NULL;
            t = new_0(t);
            {
              h_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != h_25)))
                  _fail(h_25);
                else
                  f_25 = h_25;
                {
                  t = not_null(r_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
                      i_25 = t;
                      h_24 :
                      if(match_cons(i_25, sym_Explode_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          {
                            if(((d_25 != NULL) && (d_25 != j_25)))
                              _fail(j_25);
                            else
                              d_25 = j_25;
                            {
                              if(((e_25 != NULL) && (e_25 != k_25)))
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      l_25 = t;
                      if(((g_25 != NULL) && (g_25 != l_25)))
                        _fail(l_25);
                      else
                        g_25 = l_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_Match_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                ATerm s_25 = NULL;
                ATerm t_25 = NULL;
                t = new_0(t);
                {
                  s_25 = t;
                  {
                    if(((p_25 != NULL) && (p_25 != s_25)))
                      _fail(s_25);
                    else
                      p_25 = s_25;
                    {
                      ATerm x_25 = NULL;
                      t = new_0(t);
                      {
                        t_25 = t;
                        {
                          if(((q_25 != NULL) && (q_25 != t_25)))
                            _fail(t_25);
                          else
                            q_25 = t_25;
                          {
                            t = not_null(r_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
                                u_25 = t;
                                m_24 :
                                if(match_cons(u_25, sym_Explode_2))
                                  {
                                    v_25 = ATgetArgument(u_25, 0);
                                    w_25 = ATgetArgument(u_25, 1);
                                    {
                                      if(((n_25 != NULL) && (n_25 != v_25)))
                                        _fail(v_25);
                                      else
                                        n_25 = v_25;
                                      {
                                        if(((o_25 != NULL) && (o_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          o_25 = w_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                x_25 = t;
                                if(((r_25 != NULL) && (r_25 != x_25)))
                                  _fail(x_25);
                                else
                                  r_25 = x_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Match_1))
    {
      d_27 = ATgetArgument(c_27, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
            ATerm j_27 = NULL;
            ATerm n_27 = NULL;
            t = new_0(t);
            {
              j_27 = t;
              {
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
                {
                  t = not_null(d_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                      k_27 = t;
                      r_26 :
                      if(match_cons(k_27, sym_Anno_2))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          m_27 = ATgetArgument(k_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != l_27)))
                              _fail(l_27);
                            else
                              f_27 = l_27;
                            {
                              if(((g_27 != NULL) && (g_27 != m_27)))
                                _fail(m_27);
                              else
                                g_27 = m_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_27)), not_null(f_27));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      n_27 = t;
                      if(((i_27 != NULL) && (i_27 != n_27)))
                        _fail(n_27);
                      else
                        i_27 = n_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                  ATerm s_27 = NULL;
                  ATerm v_27 = NULL;
                  t = new_0(t);
                  {
                    s_27 = t;
                    {
                      if(((q_27 != NULL) && (q_27 != s_27)))
                        _fail(s_27);
                      else
                        q_27 = s_27;
                      {
                        t = not_null(d_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm t_27 = NULL,u_27 = NULL;
                            t_27 = t;
                            v_26 :
                            if(match_cons(t_27, sym_RootApp_1))
                              {
                                u_27 = ATgetArgument(t_27, 0);
                                {
                                  if(((p_27 != NULL) && (p_27 != u_27)))
                                    _fail(u_27);
                                  else
                                    p_27 = u_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27));
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
                            v_27 = t;
                            if(((r_27 != NULL) && (r_27 != v_27)))
                              _fail(v_27);
                            else
                              r_27 = v_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(p_27))));
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                    ATerm b_28 = NULL;
                    ATerm f_28 = NULL;
                    t = new_0(t);
                    {
                      b_28 = t;
                      {
                        if(((z_27 != NULL) && (z_27 != b_28)))
                          _fail(b_28);
                        else
                          z_27 = b_28;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              c_28 = t;
                              z_26 :
                              if(match_cons(c_28, sym_App_2))
                                {
                                  d_28 = ATgetArgument(c_28, 0);
                                  e_28 = ATgetArgument(c_28, 1);
                                  {
                                    if(((y_27 != NULL) && (y_27 != d_28)))
                                      _fail(d_28);
                                    else
                                      y_27 = d_28;
                                    {
                                      if(((x_27 != NULL) && (x_27 != e_28)))
                                        _fail(e_28);
                                      else
                                        x_27 = e_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27));
                                    }
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
                              f_28 = t;
                              if(((a_28 != NULL) && (a_28 != f_28)))
                                _fail(f_28);
                              else
                                a_28 = f_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(y_27)))));
                  }
                }
            }
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  w_28 = t;
  u_28 :
  if(match_cons(w_28, sym_Match_1))
    {
      x_28 = ATgetArgument(w_28, 0);
      v_28 :
      if(match_cons(x_28, sym_RootApp_1))
        {
          y_28 = ATgetArgument(x_28, 0);
          t = not_null(y_28);
        }
      else
        {
          if(match_cons(x_28, sym_App_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_28), not_null(z_28));
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
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Match_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm o_29 = NULL,p_29 = NULL;
        ATerm t_29 = NULL;
        t = not_null(m_29);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
            q_29 = t;
            h_29 :
            if(match_cons(q_29, sym_RootApp_1))
              {
                r_29 = ATgetArgument(q_29, 0);
                i_29 :
                if(match_cons(r_29, sym_Match_1))
                  {
                    s_29 = ATgetArgument(r_29, 0);
                    {
                      if(((o_29 != NULL) && (o_29 != s_29)))
                        _fail(s_29);
                      else
                        o_29 = s_29;
                      t = not_null(o_29);
                    }
                  }
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
            t_29 = t;
            if(((p_29 != NULL) && (p_29 != t_29)))
              _fail(t_29);
            else
              p_29 = t_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_29));
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Build_1))
    {
      o_30 = ATgetArgument(n_30, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
            ATerm u_30 = NULL;
            ATerm y_30 = NULL;
            t = new_0(t);
            {
              u_30 = t;
              {
                if(((s_30 != NULL) && (s_30 != u_30)))
                  _fail(u_30);
                else
                  s_30 = u_30;
                {
                  t = not_null(o_30);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
                      v_30 = t;
                      c_30 :
                      if(match_cons(v_30, sym_Anno_2))
                        {
                          w_30 = ATgetArgument(v_30, 0);
                          x_30 = ATgetArgument(v_30, 1);
                          {
                            if(((q_30 != NULL) && (q_30 != w_30)))
                              _fail(w_30);
                            else
                              q_30 = w_30;
                            {
                              if(((r_30 != NULL) && (r_30 != x_30)))
                                _fail(x_30);
                              else
                                r_30 = x_30;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_1);
                    {
                      y_30 = t;
                      if(((t_30 != NULL) && (t_30 != y_30)))
                        _fail(y_30);
                      else
                        t_30 = y_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), not_null(q_30))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_30))));
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm p_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
                  ATerm d_31 = NULL;
                  ATerm j_31 = NULL;
                  t = new_0(t);
                  {
                    d_31 = t;
                    {
                      if(((b_31 != NULL) && (b_31 != d_31)))
                        _fail(d_31);
                      else
                        b_31 = d_31;
                      {
                        t = not_null(o_30);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm h_31 = NULL,i_31 = NULL;
                            h_31 = t;
                            g_30 :
                            if(match_cons(h_31, sym_RootApp_1))
                              {
                                i_31 = ATgetArgument(h_31, 0);
                                {
                                  if(((a_31 != NULL) && (a_31 != i_31)))
                                    _fail(i_31);
                                  else
                                    a_31 = i_31;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            j_31 = t;
                            if(((c_31 != NULL) && (c_31 != j_31)))
                              _fail(j_31);
                            else
                              c_31 = j_31;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_31))));
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
                    ATerm p_31 = NULL;
                    ATerm e_32 = NULL;
                    t = new_0(t);
                    {
                      p_31 = t;
                      {
                        if(((n_31 != NULL) && (n_31 != p_31)))
                          _fail(p_31);
                        else
                          n_31 = p_31;
                        {
                          t = not_null(o_30);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_31 = NULL,r_31 = NULL,d_32 = NULL;
                              q_31 = t;
                              k_30 :
                              if(match_cons(q_31, sym_App_2))
                                {
                                  r_31 = ATgetArgument(q_31, 0);
                                  d_32 = ATgetArgument(q_31, 1);
                                  {
                                    if(((l_31 != NULL) && (l_31 != r_31)))
                                      _fail(r_31);
                                    else
                                      l_31 = r_31;
                                    {
                                      if(((m_31 != NULL) && (m_31 != d_32)))
                                        _fail(d_32);
                                      else
                                        m_31 = d_32;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_1);
                            {
                              e_32 = t;
                              if(((o_31 != NULL) && (o_31 != e_32)))
                                _fail(e_32);
                              else
                                o_31 = e_32;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_31), not_null(m_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_31))));
                  }
                }
            }
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  h_33 = t;
  f_33 :
  if(match_cons(h_33, sym_Build_1))
    {
      i_33 = ATgetArgument(h_33, 0);
      g_33 :
      if(match_cons(i_33, sym_RootApp_1))
        {
          j_33 = ATgetArgument(i_33, 0);
          t = not_null(j_33);
        }
      else
        {
          if(match_cons(i_33, sym_App_2))
            {
              j_33 = ATgetArgument(i_33, 0);
              k_33 = ATgetArgument(i_33, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_33)), not_null(j_33));
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
ATerm As_2 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  c_34 :
  if(match_cons(d_34, sym_As_2))
    {
      e_34 = ATgetArgument(d_34, 0);
      f_34 = ATgetArgument(d_34, 1);
      {
        ATerm j_34 = NULL,l_34 = NULL;
        ATerm k_34 = NULL;
        t = SSLgetAnnotations(not_null(d_34));
        {
          k_34 = t;
          if(((j_34 != NULL) && (j_34 != k_34)))
            _fail(k_34);
          else
            j_34 = k_34;
        }
        {
          t = not_null(e_34);
          {
            ATerm n_34 = NULL;
            t = f_79(t);
            {
              l_34 = t;
              {
                t = not_null(f_34);
                {
                  ATerm p_34 = NULL;
                  t = g_79(t);
                  {
                    n_34 = t;
                    {
                      ATerm q_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(l_34), not_null(n_34)), not_null(j_34));
                      {
                        q_34 = t;
                        if(((p_34 != NULL) && (p_34 != q_34)))
                          _fail(q_34);
                        else
                          p_34 = q_34;
                      }
                      t = not_null(p_34);
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
ATerm Prim_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_Prim_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      {
        ATerm i_35 = NULL,k_35 = NULL;
        ATerm j_35 = NULL;
        t = SSLgetAnnotations(not_null(c_35));
        {
          j_35 = t;
          if(((i_35 != NULL) && (i_35 != j_35)))
            _fail(j_35);
          else
            i_35 = j_35;
        }
        {
          t = not_null(d_35);
          {
            ATerm m_35 = NULL;
            t = l_75(t);
            {
              k_35 = t;
              {
                t = not_null(e_35);
                {
                  ATerm o_35 = NULL;
                  t = m_75(t);
                  {
                    m_35 = t;
                    {
                      ATerm p_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(k_35), not_null(m_35)), not_null(i_35));
                      {
                        p_35 = t;
                        if(((o_35 != NULL) && (o_35 != p_35)))
                          _fail(p_35);
                        else
                          o_35 = p_35;
                      }
                      t = not_null(o_35);
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
ATerm Explode_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_Explode_2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      {
        ATerm t_36 = NULL,v_36 = NULL;
        ATerm u_36 = NULL;
        t = SSLgetAnnotations(not_null(n_36));
        {
          u_36 = t;
          if(((t_36 != NULL) && (t_36 != u_36)))
            _fail(u_36);
          else
            t_36 = u_36;
        }
        {
          t = not_null(o_36);
          {
            ATerm x_36 = NULL;
            t = b_79(t);
            {
              v_36 = t;
              {
                t = not_null(p_36);
                {
                  ATerm z_36 = NULL;
                  t = c_79(t);
                  {
                    x_36 = t;
                    {
                      ATerm a_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_36), not_null(x_36)), not_null(t_36));
                      {
                        a_37 = t;
                        if(((z_36 != NULL) && (z_36 != a_37)))
                          _fail(a_37);
                        else
                          z_36 = a_37;
                      }
                      t = not_null(z_36);
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
ATerm Op_2 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  l_37 :
  if(match_cons(r_37, sym_Op_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      {
        ATerm x_37 = NULL,z_37 = NULL;
        ATerm y_37 = NULL;
        t = SSLgetAnnotations(not_null(r_37));
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
        {
          t = not_null(s_37);
          {
            ATerm b_38 = NULL;
            t = p_77(t);
            {
              z_37 = t;
              {
                t = not_null(t_37);
                {
                  ATerm d_38 = NULL;
                  t = q_77(t);
                  {
                    b_38 = t;
                    {
                      ATerm e_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_37), not_null(b_38)), not_null(x_37));
                      {
                        e_38 = t;
                        if(((d_38 != NULL) && (d_38 != e_38)))
                          _fail(e_38);
                        else
                          d_38 = e_38;
                      }
                      t = not_null(d_38);
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
ATerm pat_td_1 (ATerm t, ATerm d_116 (ATerm))
{
  ATerm r_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_116(t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = r_10;
      {
        ATerm x_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, d_116);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(z_10);
          }
        else
          {
            t = x_10;
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, d_116);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  {
                    ATerm e_11 = t;
                    int f_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, d_116);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm g_11 = t;
                          int h_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, d_116);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(h_11);
                            }
                          else
                            {
                              t = g_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, d_116);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
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
  ATerm d_39 = NULL,i_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_Build_1))
    {
      i_39 = ATgetArgument(d_39, 0);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_39 = NULL,o_39 = NULL;
            ATerm s_39 = NULL;
            t = not_null(i_39);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
                p_39 = t;
                t_38 :
                if(match_cons(p_39, sym_RootApp_1))
                  {
                    q_39 = ATgetArgument(p_39, 0);
                    u_38 :
                    if(match_cons(q_39, sym_Build_1))
                      {
                        r_39 = ATgetArgument(q_39, 0);
                        {
                          if(((n_39 != NULL) && (n_39 != r_39)))
                            _fail(r_39);
                          else
                            n_39 = r_39;
                          t = not_null(n_39);
                        }
                      }
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
              t = pat_td_1(t, x_1);
              {
                s_39 = t;
                if(((o_39 != NULL) && (o_39 != s_39)))
                  _fail(s_39);
                else
                  o_39 = s_39;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_39));
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm u_39 = NULL,v_39 = NULL,a_40 = NULL;
              ATerm j_40 = NULL;
              t = not_null(i_39);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm b_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
                  b_40 = t;
                  x_38 :
                  if(match_cons(b_40, sym_App_2))
                    {
                      g_40 = ATgetArgument(b_40, 0);
                      i_40 = ATgetArgument(b_40, 1);
                      y_38 :
                      if(match_cons(g_40, sym_Build_1))
                        {
                          h_40 = ATgetArgument(g_40, 0);
                          {
                            if(((v_39 != NULL) && (v_39 != h_40)))
                              _fail(h_40);
                            else
                              v_39 = h_40;
                            {
                              if(((u_39 != NULL) && (u_39 != i_40)))
                                _fail(i_40);
                              else
                                u_39 = i_40;
                              t = not_null(v_39);
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
                t = pat_td_1(t, y_1);
                {
                  j_40 = t;
                  if(((a_40 != NULL) && (a_40 != j_40)))
                    _fail(j_40);
                  else
                    a_40 = j_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_40));
            }
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
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm m_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = m_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  k_41 :
  if(match_cons(r_41, sym_Lets_2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_41), not_null(t_41));
    }
  else
    {
      if(match_cons(r_41, sym_LChoices_1))
        {
          s_41 = ATgetArgument(r_41, 0);
          l_41 :
          if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
            {
              o_41 = ATgetFirst((ATermList) s_41);
              p_41 = (ATerm) ATgetNext((ATermList) s_41);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_41)));
            }
          else
            {
              if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
                {
                  t = term_c_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(r_41, sym_Choices_1))
            {
              s_41 = ATgetArgument(r_41, 0);
              m_41 :
              if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
                {
                  o_41 = ATgetFirst((ATermList) s_41);
                  p_41 = (ATerm) ATgetNext((ATermList) s_41);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_41)));
                }
              else
                {
                  if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
                    {
                      t = term_c_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(r_41, sym_Seqs_1))
                {
                  s_41 = ATgetArgument(r_41, 0);
                  n_41 :
                  if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
                    {
                      o_41 = ATgetFirst((ATermList) s_41);
                      p_41 = (ATerm) ATgetNext((ATermList) s_41);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_41)));
                    }
                  else
                    {
                      if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
                        {
                          t = term_s_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(r_41, sym_DefaultVarDec_1))
                    {
                      s_41 = ATgetArgument(r_41, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11));
                    }
                  else
                    {
                      if(match_cons(r_41, sym_InfixApp_3))
                        {
                          s_41 = ATgetArgument(r_41, 0);
                          t_41 = ATgetArgument(r_41, 1);
                          q_41 = ATgetArgument(r_41, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_41), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_41)), not_null(s_41))));
                        }
                      else
                        {
                          if(match_cons(r_41, sym_BAM_3))
                            {
                              s_41 = ATgetArgument(r_41, 0);
                              t_41 = ATgetArgument(r_41, 1);
                              q_41 = ATgetArgument(r_41, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_41))), not_null(s_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_41))));
                            }
                          else
                            {
                              if(match_cons(r_41, sym_AM_2))
                                {
                                  s_41 = ATgetArgument(r_41, 0);
                                  t_41 = ATgetArgument(r_41, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_41)));
                                }
                              else
                                {
                                  if(match_cons(r_41, sym_MA_2))
                                    {
                                      s_41 = ATgetArgument(r_41, 0);
                                      t_41 = ATgetArgument(r_41, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_41)), not_null(t_41));
                                    }
                                  else
                                    {
                                      if(match_cons(r_41, sym_BA_2))
                                        {
                                          s_41 = ATgetArgument(r_41, 0);
                                          t_41 = ATgetArgument(r_41, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_41)), not_null(s_41));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  h_43 = t;
  e_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      l_43 = ATgetArgument(h_43, 1);
      f_43 :
      if(match_cons(i_43, sym__2))
        {
          j_43 = ATgetArgument(i_43, 0);
          k_43 = ATgetArgument(i_43, 1);
          g_43 :
          if(match_cons(l_43, sym__2))
            {
              m_43 = ATgetArgument(l_43, 0);
              n_43 = ATgetArgument(l_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_43)), not_null(j_43)), (ATerm) ATinsert(CheckATermList(not_null(n_43)), not_null(k_43)));
            }
          else
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
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
    {
      w_43 = ATgetFirst((ATermList) v_43);
      x_43 = (ATerm) ATgetNext((ATermList) v_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_43), not_null(x_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  c_44 :
  if(((ATgetType(d_44) == AT_LIST) && ATisEmpty(d_44)))
    {
      t = term_c_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm g_93 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, g_93);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  ATerm p_44 (ATerm t)
  {
    ATerm m_44 = NULL;
    ATerm n_44 = NULL;
    t = not_null(j_44);
    {
      ATerm d_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_12;
        }
      {
        t = new_0(t);
        {
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_44))));
    return(t);
  }
  ATerm q_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_44))));
    return(t);
  }
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_Var_1))
    {
      k_44 = ATgetArgument(j_44, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_44(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = q_44(t);
          }
      }
    }
  else
    {
      t = p_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Var_1))
    {
      c_45 = ATgetArgument(b_45, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_45 = NULL,h_45 = NULL;
            ATerm g_45 = NULL;
            t = SSLgetAnnotations(not_null(b_45));
            {
              g_45 = t;
              if(((f_45 != NULL) && (f_45 != g_45)))
                _fail(g_45);
              else
                f_45 = g_45;
            }
            {
              t = not_null(c_45);
              {
                ATerm j_45 = NULL;
                t = q_0(t);
                {
                  h_45 = t;
                  {
                    ATerm k_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_45)), not_null(f_45));
                    {
                      k_45 = t;
                      if(((j_45 != NULL) && (j_45 != k_45)))
                        _fail(k_45);
                      else
                        j_45 = k_45;
                    }
                    t = not_null(j_45);
                  }
                }
              }
            }
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm n_45 = NULL,p_45 = NULL;
              ATerm o_45 = NULL;
              t = SSLgetAnnotations(not_null(b_45));
              {
                o_45 = t;
                if(((n_45 != NULL) && (n_45 != o_45)))
                  _fail(o_45);
                else
                  n_45 = o_45;
              }
              {
                t = not_null(c_45);
                {
                  ATerm r_45 = NULL;
                  t = q_0(t);
                  {
                    p_45 = t;
                    {
                      ATerm s_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_45)), not_null(n_45));
                      {
                        s_45 = t;
                        if(((r_45 != NULL) && (r_45 != s_45)))
                          _fail(s_45);
                        else
                          r_45 = s_45;
                      }
                      t = not_null(r_45);
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_Prim_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      {
        ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
        ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
        t = not_null(i_46);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm m_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(i_46);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  o_46 = t;
                  d_46 :
                  if(match_cons(o_46, sym__2))
                    {
                      p_46 = ATgetArgument(o_46, 0);
                      q_46 = ATgetArgument(o_46, 1);
                      e_46 :
                      if(match_cons(q_46, sym__2))
                        {
                          r_46 = ATgetArgument(q_46, 0);
                          s_46 = ATgetArgument(q_46, 1);
                          {
                            if(((l_46 != NULL) && (l_46 != p_46)))
                              _fail(p_46);
                            else
                              l_46 = p_46;
                            {
                              if(((m_46 != NULL) && (m_46 != r_46)))
                                _fail(r_46);
                              else
                                m_46 = r_46;
                              if(((n_46 != NULL) && (n_46 != s_46)))
                                _fail(s_46);
                              else
                                n_46 = s_46;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_46)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_46), not_null(n_46))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm v_46 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = i_104(t);
      t = v_46(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = v_46(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym_Wld_0))
    {
      ATerm c_47 = NULL,e_47 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(a_47));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
      }
      t = n_12;
      {
        ATerm f_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(c_47));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
        t = not_null(e_47);
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
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm v_78 (ATerm), ATerm w_78 (ATerm))
{
  ATerm p_47 = NULL,q_47 = NULL,u_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_App_2))
    {
      q_47 = ATgetArgument(p_47, 0);
      u_47 = ATgetArgument(p_47, 1);
      {
        ATerm y_47 = NULL,a_48 = NULL;
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
        {
          t = not_null(q_47);
          {
            ATerm c_48 = NULL;
            t = v_78(t);
            {
              a_48 = t;
              {
                t = not_null(u_47);
                {
                  ATerm e_48 = NULL;
                  t = w_78(t);
                  {
                    c_48 = t;
                    {
                      ATerm f_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(a_48), not_null(c_48)), not_null(y_47));
                      {
                        f_48 = t;
                        if(((e_48 != NULL) && (e_48 != f_48)))
                          _fail(f_48);
                        else
                          e_48 = f_48;
                      }
                      t = not_null(e_48);
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
ATerm Con_3 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym_Con_3))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      y_51 = ATgetArgument(v_51, 2);
      {
        ATerm d_52 = NULL,f_52 = NULL;
        ATerm e_52 = NULL;
        t = SSLgetAnnotations(not_null(v_51));
        {
          e_52 = t;
          if(((d_52 != NULL) && (d_52 != e_52)))
            _fail(e_52);
          else
            d_52 = e_52;
        }
        {
          t = not_null(w_51);
          {
            ATerm h_52 = NULL;
            t = s_78(t);
            {
              f_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm j_52 = NULL;
                  t = t_78(t);
                  {
                    h_52 = t;
                    {
                      t = not_null(y_51);
                      {
                        ATerm l_52 = NULL;
                        t = u_78(t);
                        {
                          j_52 = t;
                          {
                            ATerm m_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(f_52), not_null(h_52), not_null(j_52)), not_null(d_52));
                            {
                              m_52 = t;
                              if(((l_52 != NULL) && (l_52 != m_52)))
                                _fail(m_52);
                              else
                                l_52 = m_52;
                            }
                            t = not_null(l_52);
                          }
                        }
                      }
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
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  x_52 = t;
  v_52 :
  if(match_cons(x_52, sym_SRule_1))
    {
      y_52 = ATgetArgument(x_52, 0);
      w_52 :
      if(match_cons(y_52, sym_StratRule_3))
        {
          z_52 = ATgetArgument(y_52, 0);
          a_53 = ATgetArgument(y_52, 1);
          b_53 = ATgetArgument(y_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(b_53))), not_null(z_52)));
        }
      else
        {
          if(match_cons(y_52, sym_Rule_3))
            {
              z_52 = ATgetArgument(y_52, 0);
              a_53 = ATgetArgument(y_52, 1);
              b_53 = ATgetArgument(y_52, 2);
              {
                t = not_null(z_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(a_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(a_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(b_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_52))));
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
ATerm Scope_2 (ATerm t, ATerm t_75 (ATerm), ATerm u_75 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_Scope_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      {
        ATerm b_54 = NULL,d_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(w_53);
          {
            ATerm f_54 = NULL;
            t = t_75(t);
            {
              d_54 = t;
              {
                t = not_null(x_53);
                {
                  ATerm j_54 = NULL;
                  t = u_75(t);
                  {
                    f_54 = t;
                    {
                      ATerm k_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(d_54), not_null(f_54)), not_null(b_54));
                      {
                        k_54 = t;
                        if(((j_54 != NULL) && (j_54 != k_54)))
                          _fail(k_54);
                        else
                          j_54 = k_54;
                      }
                      t = not_null(j_54);
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
ATerm oncetd_1 (ATerm t, ATerm o_89 (ATerm))
{
  ATerm r_54 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_89(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = _one(t, r_54);
      }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,q_55 = NULL,s_55 = NULL;
  i_55 = t;
  e_55 :
  if(match_cons(i_55, sym_SRule_1))
    {
      j_55 = ATgetArgument(i_55, 0);
      h_55 :
      if(match_cons(j_55, sym_Rule_3))
        {
          k_55 = ATgetArgument(j_55, 0);
          q_55 = ATgetArgument(j_55, 1);
          s_55 = ATgetArgument(j_55, 2);
          {
            ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
            ATerm e_56 = NULL;
            ATerm k_56 = NULL;
            t = new_0(t);
            {
              e_56 = t;
              {
                if(((b_56 != NULL) && (b_56 != e_56)))
                  _fail(e_56);
                else
                  b_56 = e_56;
                {
                  t = not_null(k_55);
                  {
                    ATerm s_56 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
                      f_56 = t;
                      v_54 :
                      if(match_cons(f_56, sym_Con_3))
                        {
                          g_56 = ATgetArgument(f_56, 0);
                          i_56 = ATgetArgument(f_56, 1);
                          j_56 = ATgetArgument(f_56, 2);
                          w_54 :
                          if(match_cons(g_56, sym_Var_1))
                            {
                              h_56 = ATgetArgument(g_56, 0);
                              {
                                if(((a_56 != NULL) && (a_56 != h_56)))
                                  _fail(h_56);
                                else
                                  a_56 = h_56;
                                {
                                  if(((y_55 != NULL) && (y_55 != i_56)))
                                    _fail(i_56);
                                  else
                                    y_55 = i_56;
                                  {
                                    if(((w_55 != NULL) && (w_55 != j_56)))
                                      _fail(j_56);
                                    else
                                      w_55 = j_56;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_56));
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
                    t = oncetd_1(t, e_2);
                    {
                      k_56 = t;
                      {
                        if(((c_56 != NULL) && (c_56 != k_56)))
                          _fail(k_56);
                        else
                          c_56 = k_56;
                        {
                          t = not_null(q_55);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
                              l_56 = t;
                              z_54 :
                              if(match_cons(l_56, sym_Con_3))
                                {
                                  m_56 = ATgetArgument(l_56, 0);
                                  o_56 = ATgetArgument(l_56, 1);
                                  p_56 = ATgetArgument(l_56, 2);
                                  a_55 :
                                  if(match_cons(m_56, sym_Var_1))
                                    {
                                      n_56 = ATgetArgument(m_56, 0);
                                      b_55 :
                                      if(match_cons(p_56, sym_Call_2))
                                        {
                                          q_56 = ATgetArgument(p_56, 0);
                                          r_56 = ATgetArgument(p_56, 1);
                                          c_55 :
                                          if(((ATgetType(r_56) == AT_LIST) && ATisEmpty(r_56)))
                                            {
                                              {
                                                if(((a_56 != NULL) && (a_56 != n_56)))
                                                  _fail(n_56);
                                                else
                                                  a_56 = n_56;
                                                {
                                                  if(((z_55 != NULL) && (z_55 != o_56)))
                                                    _fail(o_56);
                                                  else
                                                    z_55 = o_56;
                                                  {
                                                    if(((x_55 != NULL) && (x_55 != q_56)))
                                                      _fail(q_56);
                                                    else
                                                      x_55 = q_56;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_56));
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
                            t = oncetd_1(t, f_2);
                            {
                              s_56 = t;
                              if(((d_56 != NULL) && (d_56 != s_56)))
                                _fail(s_56);
                              else
                                d_56 = s_56;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_56)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_56), not_null(d_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_55), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(x_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_55), not_null(z_55), term_s_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_56)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_56)))))));
          }
        }
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
  ATerm g_2 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm h_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(n_13);
            }
          else
            {
              t = h_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_87 (ATerm))
{
  t = y_87(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, y_87);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm o_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(t_13);
          }
        else
          {
            t = o_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm w_13 = t;
                    int x_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(x_13);
                      }
                    else
                      {
                        t = w_13;
                        {
                          ATerm y_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = y_13;
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
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  d_57 :
  if(match_cons(e_57, sym__0))
    {
      ATerm g_57 = NULL,i_57 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm h_57 = NULL;
        t = SSLgetAnnotations(not_null(e_57));
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
      }
      t = a_14;
      {
        ATerm j_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(g_57));
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
        t = not_null(i_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm v_57 = NULL;
  ATerm x_57 = NULL,y_57 = NULL,g_58 = NULL,i_58 = NULL;
  v_57 = t;
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm z_57 = NULL;
      ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
      t = not_null(v_57);
      {
        z_57 = t;
        {
          t = SSL_explode_term(not_null(z_57));
          {
            b_58 = t;
            q_57 :
            if(match_cons(b_58, sym__2))
              {
                c_58 = ATgetArgument(b_58, 0);
                d_58 = ATgetArgument(b_58, 1);
                r_57 :
                if(match_string(c_58, ""))
                  {
                    s_57 :
                    if(((ATgetType(d_58) == AT_LIST) && !(ATisEmpty(d_58))))
                      {
                        e_58 = ATgetFirst((ATermList) d_58);
                        f_58 = (ATerm) ATgetNext((ATermList) d_58);
                        {
                          if(((x_57 != NULL) && (x_57 != e_58)))
                            _fail(e_58);
                          else
                            x_57 = e_58;
                          if(((y_57 != NULL) && (y_57 != f_58)))
                            _fail(f_58);
                          else
                            y_57 = f_58;
                        }
                      }
                    else
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
    t = d_14;
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm h_58 = NULL;
        t = term_v_9;
        {
          h_58 = t;
          if(((g_58 != NULL) && (g_58 != h_58)))
            _fail(h_58);
          else
            g_58 = h_58;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(g_58), not_null(y_57));
        {
          i_58 = t;
          t = not_null(i_58);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_59 = NULL;
  ATerm g_59 = NULL,h_59 = NULL;
  e_59 = t;
  {
    ATerm i_59 = NULL;
    ATerm k_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
    t = not_null(e_59);
    {
      i_59 = t;
      {
        t = SSL_explode_term(not_null(i_59));
        {
          k_59 = t;
          z_58 :
          if(match_cons(k_59, sym__2))
            {
              v_59 = ATgetArgument(k_59, 0);
              w_59 = ATgetArgument(k_59, 1);
              a_59 :
              if(match_string(v_59, ""))
                {
                  b_59 :
                  if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
                    {
                      x_59 = ATgetFirst((ATermList) w_59);
                      y_59 = (ATerm) ATgetNext((ATermList) w_59);
                      {
                        if(((h_59 != NULL) && (h_59 != x_59)))
                          _fail(x_59);
                        else
                          h_59 = x_59;
                        if(((g_59 != NULL) && (g_59 != y_59)))
                          _fail(y_59);
                        else
                          g_59 = y_59;
                      }
                    }
                  else
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
    t = not_null(h_59);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm p_60 = NULL,r_60 = NULL,t_60 = NULL;
  ATerm v_60 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_60 = NULL,n_60 = NULL;
        ATerm m_14;
        m_14 = t;
        {
          ATerm m_60 = NULL;
          t = map_1(t, Thd_0);
          {
            t = m_92(t);
            {
              m_60 = t;
              if(((l_60 != NULL) && (l_60 != m_60)))
                _fail(m_60);
              else
                l_60 = m_60;
            }
          }
        }
        t = m_14;
        {
          ATerm o_60 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = v_60(t);
            {
              o_60 = t;
              if(((n_60 != NULL) && (n_60 != o_60)))
                _fail(o_60);
              else
                n_60 = o_60;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(n_60)), not_null(l_60));
        }
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = v_60(t);
  {
    ATerm n_14;
    n_14 = t;
    {
      ATerm q_60 = NULL;
      q_60 = t;
      if(((p_60 != NULL) && (p_60 != q_60)))
        _fail(q_60);
      else
        p_60 = q_60;
    }
    t = n_14;
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm s_60 = NULL;
        t = term_v_9;
        {
          s_60 = t;
          if(((r_60 != NULL) && (r_60 != s_60)))
            _fail(s_60);
          else
            r_60 = s_60;
        }
      }
      t = r_14;
      {
        t = SSL_mkterm(not_null(r_60), not_null(p_60));
        {
          t_60 = t;
          t = not_null(t_60);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm g_61 = NULL;
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  g_61 = t;
  {
    ATerm l_61 = NULL;
    ATerm m_61 = NULL;
    t = new_0(t);
    {
      l_61 = t;
      {
        if(((i_61 != NULL) && (i_61 != l_61)))
          _fail(l_61);
        else
          i_61 = l_61;
        {
          ATerm n_61 = NULL;
          t = new_0(t);
          {
            m_61 = t;
            {
              if(((j_61 != NULL) && (j_61 != m_61)))
                _fail(m_61);
              else
                j_61 = m_61;
              {
                t = new_0(t);
                {
                  n_61 = t;
                  if(((k_61 != NULL) && (k_61 != n_61)))
                    _fail(n_61);
                  else
                    k_61 = n_61;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_61)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_61))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_61), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11)), not_null(j_61), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_61)), not_null(k_61), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_61)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t_61 :
  if(match_cons(u_61, sym__2))
    {
      v_61 = ATgetArgument(u_61, 0);
      w_61 = ATgetArgument(u_61, 1);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_61), not_null(w_61));
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = SSL_subtr(not_null(v_61), not_null(w_61));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm o_99 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
    o_62 = t;
    e_62 :
    if(match_cons(o_62, sym__2))
      {
        p_62 = ATgetArgument(o_62, 0);
        q_62 = ATgetArgument(o_62, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_62), not_null(q_62), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
    t_62 = t;
    g_62 :
    if(match_cons(t_62, sym__3))
      {
        u_62 = ATgetArgument(t_62, 0);
        v_62 = ATgetArgument(t_62, 1);
        w_62 = ATgetArgument(t_62, 2);
        h_62 :
        if(match_int(u_62, 0))
          {
            t = not_null(w_62);
          }
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
  ATerm m_2 (ATerm t)
  {
    ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
    z_62 = t;
    n_62 :
    if(match_cons(z_62, sym__3))
      {
        a_63 = ATgetArgument(z_62, 0);
        b_63 = ATgetArgument(z_62, 1);
        c_63 = ATgetArgument(z_62, 2);
        {
          ATerm g_63 = NULL,i_63 = NULL;
          ATerm w_14;
          w_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_63), term_z_6);
            t = geq_0(t);
          }
          t = w_14;
          {
            ATerm d_15;
            d_15 = t;
            {
              ATerm h_63 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_63), term_z_6);
              {
                t = subt_0(t);
                {
                  h_63 = t;
                  if(((g_63 != NULL) && (g_63 != h_63)))
                    _fail(h_63);
                  else
                    g_63 = h_63;
                }
              }
            }
            t = d_15;
            {
              ATerm j_63 = NULL;
              t = not_null(b_63);
              {
                t = o_99(t);
                {
                  j_63 = t;
                  if(((i_63 != NULL) && (i_63 != j_63)))
                    _fail(j_63);
                  else
                    i_63 = j_63;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(g_63), not_null(b_63), (ATerm) ATinsert(CheckATermList(not_null(c_63)), not_null(i_63)));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  a_64 :
  if(match_cons(b_64, sym__2))
    {
      c_64 = ATgetArgument(b_64, 0);
      d_64 = ATgetArgument(b_64, 1);
      {
        ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
        ATerm j_64 = NULL;
        ATerm k_64 = NULL;
        t = new_0(t);
        {
          j_64 = t;
          {
            if(((g_64 != NULL) && (g_64 != j_64)))
              _fail(j_64);
            else
              g_64 = j_64;
            {
              ATerm l_64 = NULL;
              t = new_0(t);
              {
                k_64 = t;
                {
                  if(((h_64 != NULL) && (h_64 != k_64)))
                    _fail(k_64);
                  else
                    h_64 = k_64;
                  {
                    t = new_0(t);
                    {
                      l_64 = t;
                      if(((i_64 != NULL) && (i_64 != l_64)))
                        _fail(l_64);
                      else
                        i_64 = l_64;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_64)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_64))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_64)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_64))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_64))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_64), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11)), not_null(h_64), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_64)), not_null(i_64), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_64)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  b_65 :
  if(match_cons(d_65, sym__2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      c_65 :
      if(((ATgetType(f_65) == AT_LIST) && ATisEmpty(f_65)))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm e_93 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, e_93);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  l_65 :
  if(((ATgetType(m_65) == AT_LIST) && !(ATisEmpty(m_65))))
    {
      n_65 = ATgetFirst((ATermList) m_65);
      o_65 = (ATerm) ATgetNext((ATermList) m_65);
      t = not_null(o_65);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  o_66 = t;
  s_65 :
  if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
    {
      p_66 = ATgetFirst((ATermList) o_66);
      q_66 = (ATerm) ATgetNext((ATermList) o_66);
      t_65 :
      if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
        {
          t = not_null(p_66);
        }
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
ATerm last_0 (ATerm t)
{
  ATerm e_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = e_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm d_68 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
  ATerm v_73 (ATerm t)
  {
    ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,x_72 = NULL;
    ATerm n_15;
    n_15 = t;
    {
      ATerm k_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
      ATerm l_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), term_z_6);
      {
        t = add_0(t);
        {
          l_72 = t;
          if(((k_72 != NULL) && (k_72 != l_72)))
            _fail(l_72);
          else
            k_72 = l_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_72), term_o_15);
        {
          t = copy_1(t, new_0);
          {
            m_72 = t;
            t_67 :
            if(((ATgetType(m_72) == AT_LIST) && !(ATisEmpty(m_72))))
              {
                n_72 = ATgetFirst((ATermList) m_72);
                o_72 = (ATerm) ATgetNext((ATermList) m_72);
                {
                  ATerm p_72 = NULL;
                  if(((h_69 != NULL) && (h_69 != n_72)))
                    _fail(n_72);
                  else
                    h_69 = n_72;
                  {
                    if(((i_69 != NULL) && (i_69 != o_72)))
                      _fail(o_72);
                    else
                      i_69 = o_72;
                    {
                      t = not_null(i_69);
                      {
                        ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
                        t = last_0(t);
                        {
                          p_72 = t;
                          {
                            if(((g_69 != NULL) && (g_69 != p_72)))
                              _fail(p_72);
                            else
                              g_69 = p_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_69)), not_null(h_69)), not_null(i_69));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    q_72 = t;
                                    s_67 :
                                    if(match_cons(q_72, sym__6))
                                      {
                                        r_72 = ATgetArgument(q_72, 0);
                                        s_72 = ATgetArgument(q_72, 1);
                                        t_72 = ATgetArgument(q_72, 2);
                                        u_72 = ATgetArgument(q_72, 3);
                                        v_72 = ATgetArgument(q_72, 4);
                                        w_72 = ATgetArgument(q_72, 5);
                                        {
                                          if(((j_69 != NULL) && (j_69 != r_72)))
                                            _fail(r_72);
                                          else
                                            j_69 = r_72;
                                          {
                                            if(((k_69 != NULL) && (k_69 != s_72)))
                                              _fail(s_72);
                                            else
                                              k_69 = s_72;
                                            {
                                              if(((g_72 != NULL) && (g_72 != t_72)))
                                                _fail(t_72);
                                              else
                                                g_72 = t_72;
                                              {
                                                if(((h_72 != NULL) && (h_72 != u_72)))
                                                  _fail(u_72);
                                                else
                                                  h_72 = u_72;
                                                {
                                                  if(((i_72 != NULL) && (i_72 != v_72)))
                                                    _fail(v_72);
                                                  else
                                                    i_72 = v_72;
                                                  if(((j_72 != NULL) && (j_72 != w_72)))
                                                    _fail(w_72);
                                                  else
                                                    j_72 = w_72;
                                                }
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
    t = n_15;
    {
      ATerm y_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_72)), not_null(g_72)), not_null(i_69));
      {
        t = concat_0(t);
        {
          y_72 = t;
          if(((x_72 != NULL) && (x_72 != y_72)))
            _fail(y_72);
          else
            x_72 = y_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_69), term_p_15), not_null(k_69), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(x_72)), not_null(h_69)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_69))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_69), not_null(h_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_69))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_69), not_null(j_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_69))))));
    }
    return(t);
  }
  ATerm w_73 (ATerm t)
  {
    ATerm a_73 = NULL;
    ATerm b_73 = NULL;
    t = new_0(t);
    {
      b_73 = t;
      if(((a_73 != NULL) && (a_73 != b_73)))
        _fail(b_73);
      else
        a_73 = b_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_69), term_p_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_69), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_69), (ATerm) ATempty))), term_s_11))));
    return(t);
  }
  ATerm x_73 (ATerm t)
  {
    ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,t_73 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm l_73 = NULL;
      ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
      t = new_0(t);
      {
        l_73 = t;
        {
          if(((e_73 != NULL) && (e_73 != l_73)))
            _fail(l_73);
          else
            e_73 = l_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  m_73 = t;
                  y_67 :
                  if(match_cons(m_73, sym__6))
                    {
                      n_73 = ATgetArgument(m_73, 0);
                      o_73 = ATgetArgument(m_73, 1);
                      p_73 = ATgetArgument(m_73, 2);
                      q_73 = ATgetArgument(m_73, 3);
                      r_73 = ATgetArgument(m_73, 4);
                      s_73 = ATgetArgument(m_73, 5);
                      {
                        if(((f_73 != NULL) && (f_73 != n_73)))
                          _fail(n_73);
                        else
                          f_73 = n_73;
                        {
                          if(((g_73 != NULL) && (g_73 != o_73)))
                            _fail(o_73);
                          else
                            g_73 = o_73;
                          {
                            if(((h_73 != NULL) && (h_73 != p_73)))
                              _fail(p_73);
                            else
                              h_73 = p_73;
                            {
                              if(((i_73 != NULL) && (i_73 != q_73)))
                                _fail(q_73);
                              else
                                i_73 = q_73;
                              {
                                if(((j_73 != NULL) && (j_73 != r_73)))
                                  _fail(r_73);
                                else
                                  j_73 = r_73;
                                if(((k_73 != NULL) && (k_73 != s_73)))
                                  _fail(s_73);
                                else
                                  k_73 = s_73;
                              }
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
    t = q_15;
    {
      ATerm u_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_73), not_null(j_73));
      {
        t = conc_0(t);
        {
          u_73 = t;
          if(((t_73 != NULL) && (t_73 != u_73)))
            _fail(u_73);
          else
            t_73 = u_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_69), term_r_15), not_null(g_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(t_73)), not_null(e_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_69), not_null(i_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(b_69), not_null(k_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_73))))));
    }
    return(t);
  }
  d_68 = t;
  a_68 :
  if(match_cons(d_68, sym__3))
    {
      b_69 = ATgetArgument(d_68, 0);
      c_69 = ATgetArgument(d_68, 1);
      d_69 = ATgetArgument(d_68, 2);
      b_68 :
      if(match_string(c_69, "T"))
        {
          c_68 :
          if(match_int(d_69, 0))
            {
              ATerm s_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_73(t);
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = s_15;
                  t = w_73(t);
                }
            }
          else
            {
              t = v_73(t);
            }
        }
      else
        {
          if(match_string(c_69, "D"))
            {
              t = x_73(t);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  o_74 = t;
  l_74 :
  if(match_cons(o_74, sym__2))
    {
      p_74 = ATgetArgument(o_74, 0);
      u_74 = ATgetArgument(o_74, 1);
      m_74 :
      if(match_cons(p_74, sym__2))
        {
          q_74 = ATgetArgument(p_74, 0);
          t_74 = ATgetArgument(p_74, 1);
          n_74 :
          if(match_cons(q_74, sym_Mod_2))
            {
              r_74 = ATgetArgument(q_74, 0);
              s_74 = ATgetArgument(q_74, 1);
              {
                ATerm z_74 = NULL;
                ATerm a_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_74), not_null(s_74), not_null(t_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      a_75 = t;
                      if(((z_74 != NULL) && (z_74 != a_75)))
                        _fail(a_75);
                      else
                        z_74 = a_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), not_null(u_74));
              }
            }
          else
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
ATerm get_definition_0 (ATerm t)
{
  ATerm d_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = d_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL;
  g_75 = t;
  e_75 :
  if(match_cons(g_75, sym__5))
    {
      h_75 = ATgetArgument(g_75, 0);
      o_75 = ATgetArgument(g_75, 1);
      p_75 = ATgetArgument(g_75, 2);
      q_75 = ATgetArgument(g_75, 3);
      r_75 = ATgetArgument(g_75, 4);
      f_75 :
      if(((ATgetType(h_75) == AT_LIST) && !(ATisEmpty(h_75))))
        {
          i_75 = ATgetFirst((ATermList) h_75);
          n_75 = (ATerm) ATgetNext((ATermList) h_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(n_75), not_null(o_75), not_null(p_75), not_null(q_75), (ATerm) ATinsert(CheckATermList(not_null(r_75)), not_null(i_75)));
        }
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
ATerm diff_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym__2))
    {
      e_76 = ATgetArgument(d_76, 0);
      f_76 = ATgetArgument(d_76, 1);
      {
        t = not_null(e_76);
        {
          ATerm j_76 (ATerm t)
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                {
                  ATerm o_16 = t;
                  int p_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(f_76);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_98, n_2);
                      t = j_76(t);
                      LocalPopChoice(p_16);
                    }
                  else
                    {
                      t = o_16;
                      t = Cons_2(t, _id, j_76);
                    }
                }
              }
            return(t);
          }
          t = j_76(t);
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
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  n_76 = t;
  l_76 :
  if(match_cons(n_76, sym__2))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      m_76 :
      if(((ATgetType(p_76) == AT_LIST) && !(ATisEmpty(p_76))))
        {
          q_76 = ATgetFirst((ATermList) p_76);
          r_76 = (ATerm) ATgetNext((ATermList) p_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_76)), not_null(q_76)), not_null(r_76));
        }
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
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  g_77 :
  if(match_cons(h_77, sym__2))
    {
      i_77 = ATgetArgument(h_77, 0);
      j_77 = ATgetArgument(h_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_77)), not_null(i_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL;
  t_77 = t;
  o_77 :
  if(match_cons(t_77, sym__2))
    {
      v_77 = ATgetArgument(t_77, 0);
      z_77 = ATgetArgument(t_77, 1);
      r_77 :
      if(((ATgetType(v_77) == AT_LIST) && !(ATisEmpty(v_77))))
        {
          x_77 = ATgetFirst((ATermList) v_77);
          y_77 = (ATerm) ATgetNext((ATermList) v_77);
          s_77 :
          if(((ATgetType(z_77) == AT_LIST) && !(ATisEmpty(z_77))))
            {
              a_78 = ATgetFirst((ATermList) z_77);
              b_78 = (ATerm) ATgetNext((ATermList) z_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_77), not_null(a_78)), (ATerm) ATmakeAppl(sym__2, not_null(y_77), not_null(b_78)));
            }
          else
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
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  i_78 :
  if(match_cons(l_78, sym__2))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      j_78 :
      if(((ATgetType(m_78) == AT_LIST) && ATisEmpty(m_78)))
        {
          k_78 :
          if(((ATgetType(n_78) == AT_LIST) && ATisEmpty(n_78)))
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
ATerm genzip_4 (ATerm t, ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm))
{
  ATerm p_78 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_92(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          t = x_92(t);
          {
            t = _2(t, z_92, p_78);
            t = y_92(t);
          }
        }
      }
    return(t);
  }
  t = p_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_93 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_93);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
  j_79 = t;
  h_79 :
  if(((ATgetType(j_79) == AT_LIST) && !(ATisEmpty(j_79))))
    {
      k_79 = ATgetFirst((ATermList) j_79);
      n_79 = (ATerm) ATgetNext((ATermList) j_79);
      i_79 :
      if(match_cons(k_79, sym__2))
        {
          l_79 = ATgetArgument(k_79, 0);
          m_79 = ATgetArgument(k_79, 1);
          {
            ATerm r_79 = NULL,s_79 = NULL,y_79 = NULL,e_80 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              ATerm t_79 = NULL;
              ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
              t = not_null(m_79);
              {
                t_79 = t;
                {
                  t = SSL_explode_term(not_null(t_79));
                  {
                    v_79 = t;
                    y_78 :
                    if(match_cons(v_79, sym__2))
                      {
                        w_79 = ATgetArgument(v_79, 0);
                        x_79 = ATgetArgument(v_79, 1);
                        {
                          if(((r_79 != NULL) && (r_79 != w_79)))
                            _fail(w_79);
                          else
                            r_79 = w_79;
                          if(((s_79 != NULL) && (s_79 != x_79)))
                            _fail(x_79);
                          else
                            s_79 = x_79;
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
            t = w_16;
            {
              ATerm e_17;
              e_17 = t;
              {
                ATerm z_79 = NULL;
                ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
                t = not_null(l_79);
                {
                  z_79 = t;
                  {
                    t = SSL_explode_term(not_null(z_79));
                    {
                      b_80 = t;
                      d_79 :
                      if(match_cons(b_80, sym__2))
                        {
                          c_80 = ATgetArgument(b_80, 0);
                          d_80 = ATgetArgument(b_80, 1);
                          {
                            if(((r_79 != NULL) && (r_79 != c_80)))
                              _fail(c_80);
                            else
                              r_79 = c_80;
                            if(((y_79 != NULL) && (y_79 != d_80)))
                              _fail(d_80);
                            else
                              y_79 = d_80;
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
              t = e_17;
              {
                ATerm f_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_79), not_null(s_79));
                {
                  t = zip_1(t, _id);
                  {
                    f_80 = t;
                    if(((e_80 != NULL) && (e_80 != f_80)))
                      _fail(f_80);
                    else
                      e_80 = f_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_80), not_null(n_79));
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
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
  p_80 = t;
  n_80 :
  if(((ATgetType(p_80) == AT_LIST) && !(ATisEmpty(p_80))))
    {
      q_80 = ATgetFirst((ATermList) p_80);
      t_80 = (ATerm) ATgetNext((ATermList) p_80);
      o_80 :
      if(match_cons(q_80, sym__2))
        {
          r_80 = ATgetArgument(q_80, 0);
          s_80 = ATgetArgument(q_80, 1);
          {
            ATerm v_80 = NULL;
            if(((r_80 != NULL) && (r_80 != s_80)))
              _fail(s_80);
            else
              r_80 = s_80;
            {
              if(((v_80 != NULL) && (v_80 != t_80)))
                _fail(t_80);
              else
                v_80 = t_80;
              t = not_null(v_80);
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
ATerm diff_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm y_80 = NULL;
        y_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(y_80));
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, r_2);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_2, p_2, q_2);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm s_115 (ATerm))
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  n_81 = t;
  l_81 :
  if(match_cons(n_81, sym__5))
    {
      o_81 = ATgetArgument(n_81, 0);
      r_81 = ATgetArgument(n_81, 1);
      s_81 = ATgetArgument(n_81, 2);
      t_81 = ATgetArgument(n_81, 3);
      u_81 = ATgetArgument(n_81, 4);
      m_81 :
      if(((ATgetType(o_81) == AT_LIST) && !(ATisEmpty(o_81))))
        {
          p_81 = ATgetFirst((ATermList) o_81);
          q_81 = (ATerm) ATgetNext((ATermList) o_81);
          {
            ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,k_82 = NULL,m_82 = NULL,o_82 = NULL;
            ATerm c_18;
            c_18 = t;
            {
              ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_81), not_null(s_81));
              {
                t = q_115(t);
                {
                  f_82 = t;
                  f_81 :
                  if(match_cons(f_82, sym__2))
                    {
                      g_82 = ATgetArgument(f_82, 0);
                      h_82 = ATgetArgument(f_82, 1);
                      {
                        ATerm i_82 = NULL;
                        if(((c_82 != NULL) && (c_82 != g_82)))
                          _fail(g_82);
                        else
                          c_82 = g_82;
                        {
                          if(((b_82 != NULL) && (b_82 != h_82)))
                            _fail(h_82);
                          else
                            b_82 = h_82;
                          {
                            t = not_null(c_82);
                            {
                              ATerm j_82 = NULL;
                              t = r_115(t);
                              {
                                i_82 = t;
                                {
                                  if(((d_82 != NULL) && (d_82 != i_82)))
                                    _fail(i_82);
                                  else
                                    d_82 = i_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_82), not_null(r_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        j_82 = t;
                                        if(((e_82 != NULL) && (e_82 != j_82)))
                                          _fail(j_82);
                                        else
                                          e_82 = j_82;
                                      }
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
            t = c_18;
            {
              ATerm e_18;
              e_18 = t;
              {
                ATerm l_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_82), not_null(q_81));
                {
                  t = conc_0(t);
                  {
                    l_82 = t;
                    if(((k_82 != NULL) && (k_82 != l_82)))
                      _fail(l_82);
                    else
                      k_82 = l_82;
                  }
                }
              }
              t = e_18;
              {
                ATerm f_18;
                f_18 = t;
                {
                  ATerm n_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_82), not_null(r_81));
                  {
                    t = conc_0(t);
                    {
                      n_82 = t;
                      if(((m_82 != NULL) && (m_82 != n_82)))
                        _fail(n_82);
                      else
                        m_82 = n_82;
                    }
                  }
                }
                t = f_18;
                {
                  ATerm p_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_81), not_null(c_82), not_null(t_81));
                  {
                    t = s_115(t);
                    {
                      p_82 = t;
                      if(((o_82 != NULL) && (o_82 != p_82)))
                        _fail(p_82);
                      else
                        o_82 = p_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(k_82), not_null(m_82), not_null(b_82), not_null(o_82), not_null(u_81));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  a_83 = t;
  y_82 :
  if(match_cons(a_83, sym__5))
    {
      b_83 = ATgetArgument(a_83, 0);
      c_83 = ATgetArgument(a_83, 1);
      d_83 = ATgetArgument(a_83, 2);
      e_83 = ATgetArgument(a_83, 3);
      f_83 = ATgetArgument(a_83, 4);
      z_82 :
      if(((ATgetType(b_83) == AT_LIST) && ATisEmpty(b_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_83), not_null(f_83));
        }
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  n_83 = t;
  m_83 :
  if(match_cons(n_83, sym__3))
    {
      o_83 = ATgetArgument(n_83, 0);
      p_83 = ATgetArgument(n_83, 1);
      q_83 = ATgetArgument(n_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(o_83), not_null(o_83), not_null(p_83), not_null(q_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_104 (ATerm), ATerm y_104 (ATerm))
{
  ATerm v_83 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          t = y_104(t);
          t = v_83(t);
        }
      }
    return(t);
  }
  t = v_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm))
{
  t = a_105(t);
  t = while_not_2(t, b_105, c_105);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, b_115, c_115, d_115);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
    y_83 = t;
    x_83 :
    if(match_cons(y_83, sym__3))
      {
        z_83 = ATgetArgument(y_83, 0);
        a_84 = ATgetArgument(y_83, 1);
        b_84 = ATgetArgument(y_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(b_84)), not_null(a_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_z_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_115 (ATerm))
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym__2))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      {
        ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
        ATerm r_18;
        r_18 = t;
        {
          ATerm s_84 = NULL;
          ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
          t = z_115(t);
          {
            s_84 = t;
            {
              if(((p_84 != NULL) && (p_84 != s_84)))
                _fail(s_84);
              else
                p_84 = s_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_84), not_null(l_84), not_null(m_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_84), term_v_18);
                        t = table_get_0(t);
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = t_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_84 = t;
                      i_84 :
                      if(((ATgetType(t_84) == AT_LIST) && !(ATisEmpty(t_84))))
                        {
                          u_84 = ATgetFirst((ATermList) t_84);
                          v_84 = (ATerm) ATgetNext((ATermList) t_84);
                          {
                            if(((q_84 != NULL) && (q_84 != u_84)))
                              _fail(u_84);
                            else
                              q_84 = u_84;
                            {
                              if(((r_84 != NULL) && (r_84 != v_84)))
                                _fail(v_84);
                              else
                                r_84 = v_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_84), term_v_18, (ATerm) ATinsert(CheckATermList(not_null(r_84)), (ATerm) ATinsert(CheckATermList(not_null(q_84)), not_null(l_84))));
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
        t = r_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
  b_85 = t;
  a_85 :
  if(match_cons(b_85, sym__2))
    {
      c_85 = ATgetArgument(b_85, 0);
      d_85 = ATgetArgument(b_85, 1);
      if(((c_85 != NULL) && (c_85 != d_85)))
        _fail(d_85);
      else
        c_85 = d_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_98 (ATerm), ATerm n_98 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(((ATgetType(j_85) == AT_LIST) && !(ATisEmpty(j_85))))
    {
      k_85 = ATgetFirst((ATermList) j_85);
      l_85 = (ATerm) ATgetNext((ATermList) j_85);
      {
        t = n_98(t);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm o_85 = NULL;
            o_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_85), not_null(o_85));
              t = m_98(t);
            }
            return(t);
          }
          t = fetch_1(t, w_2);
        }
        t = not_null(l_85);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL;
  u_85 = t;
  t_85 :
  if(match_cons(u_85, sym__2))
    {
      v_85 = ATgetArgument(u_85, 0);
      w_85 = ATgetArgument(u_85, 1);
      {
        t = not_null(v_85);
        {
          ATerm a_86 (ATerm t)
          {
            ATerm b_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_85);
                LocalPopChoice(d_19);
              }
            else
              {
                t = b_19;
                {
                  ATerm e_19 = t;
                  int f_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(w_85);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_98, x_2);
                      t = a_86(t);
                      LocalPopChoice(f_19);
                    }
                  else
                    {
                      t = e_19;
                      t = Cons_2(t, _id, a_86);
                    }
                }
              }
            return(t);
          }
          t = a_86(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm f_86 = NULL;
  ATerm i_86 = NULL;
  f_86 = t;
  {
    ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
    t = not_null(f_86);
    {
      ATerm y_2 (ATerm t)
      {
        t = term_g_19;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        j_86 = t;
        d_86 :
        if(match_cons(j_86, sym_Defined_2))
          {
            k_86 = ATgetArgument(j_86, 0);
            l_86 = ATgetArgument(j_86, 1);
            e_86 :
            if(match_string(k_86, "e_0"))
              {
                if(((i_86 != NULL) && (i_86 != l_86)))
                  _fail(l_86);
                else
                  i_86 = l_86;
              }
            else
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
    t = not_null(i_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
  q_86 = t;
  p_86 :
  if(((ATgetType(q_86) == AT_LIST) && !(ATisEmpty(q_86))))
    {
      r_86 = ATgetFirst((ATermList) q_86);
      s_86 = (ATerm) ATgetNext((ATermList) q_86);
      t = not_null(r_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym__2))
    {
      y_86 = ATgetArgument(x_86, 0);
      z_86 = ATgetArgument(x_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_86), not_null(z_86));
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
ATerm rewrite_1 (ATerm t, ATerm b_116 (ATerm))
{
  ATerm l_87 = NULL;
  ATerm n_87 = NULL;
  l_87 = t;
  {
    ATerm o_87 = NULL;
    t = term_o_15;
    {
      t = b_116(t);
      {
        o_87 = t;
        if(((n_87 != NULL) && (n_87 != o_87)))
          _fail(o_87);
        else
          n_87 = o_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_87), not_null(l_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  v_87 :
  if(match_cons(z_87, sym__2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      {
        ATerm f_88 = NULL,g_88 = NULL;
        ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
        t = not_null(z_87);
        {
          ATerm z_2 (ATerm t)
          {
            t = term_h_19;
            return(t);
          }
          t = rewrite_1(t, z_2);
          {
            h_88 = t;
            t_87 :
            if(match_cons(h_88, sym_Defined_3))
              {
                i_88 = ATgetArgument(h_88, 0);
                j_88 = ATgetArgument(h_88, 1);
                k_88 = ATgetArgument(h_88, 2);
                u_87 :
                if(match_string(i_88, "c_0"))
                  {
                    if(((f_88 != NULL) && (f_88 != j_88)))
                      _fail(j_88);
                    else
                      f_88 = j_88;
                    if(((g_88 != NULL) && (g_88 != k_88)))
                      _fail(k_88);
                    else
                      g_88 = k_88;
                  }
                else
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
        t = (ATerm) ATinsert(CheckATermList(not_null(g_88)), not_null(f_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_99(t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
        r_88 = t;
        q_88 :
        if(((ATgetType(r_88) == AT_LIST) && !(ATisEmpty(r_88))))
          {
            s_88 = ATgetFirst((ATermList) r_88);
            t_88 = (ATerm) ATgetNext((ATermList) r_88);
            {
              ATerm w_88 = NULL,y_88 = NULL;
              ATerm m_19;
              m_19 = t;
              {
                ATerm x_88 = NULL;
                t = not_null(s_88);
                {
                  t = d_99(t);
                  {
                    x_88 = t;
                    if(((w_88 != NULL) && (w_88 != x_88)))
                      _fail(x_88);
                    else
                      w_88 = x_88;
                  }
                }
              }
              t = m_19;
              {
                ATerm z_88 = NULL;
                t = not_null(t_88);
                {
                  t = foldr_3(t, b_99, c_99, d_99);
                  {
                    z_88 = t;
                    if(((y_88 != NULL) && (y_88 != z_88)))
                      _fail(z_88);
                    else
                      y_88 = z_88;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_88), not_null(y_88));
                  t = c_99(t);
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
  ATerm a_3 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_z_6;
    return(t);
  }
  t = foldr_3(t, a_3, add_0, b_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
    j_89 = t;
    i_89 :
    if(match_cons(j_89, sym_SDef_3))
      {
        k_89 = ATgetArgument(j_89, 0);
        l_89 = ATgetArgument(j_89, 1);
        m_89 = ATgetArgument(j_89, 2);
        {
          ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
          ATerm s_19;
          s_19 = t;
          {
            ATerm w_89 = NULL;
            t = not_null(l_89);
            {
              ATerm x_89 = NULL;
              t = length_0(t);
              {
                w_89 = t;
                {
                  if(((u_89 != NULL) && (u_89 != w_89)))
                    _fail(w_89);
                  else
                    u_89 = w_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), not_null(u_89));
                    {
                      ATerm y_89 = NULL,a_90 = NULL;
                      ATerm t_19 = t;
                      int u_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(u_19);
                        }
                      else
                        {
                          t = t_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        x_89 = t;
                        {
                          if(((t_89 != NULL) && (t_89 != x_89)))
                            _fail(x_89);
                          else
                            t_89 = x_89;
                          {
                            ATerm z_89 = NULL;
                            t = not_null(k_89);
                            {
                              ATerm v_19 = t;
                              int w_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(w_19);
                                }
                              else
                                {
                                  t = v_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                z_89 = t;
                                if(((y_89 != NULL) && (y_89 != z_89)))
                                  _fail(z_89);
                                else
                                  y_89 = z_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(u_89)), not_null(y_89));
                              {
                                t = union_0(t);
                                {
                                  a_90 = t;
                                  {
                                    if(((v_89 != NULL) && (v_89 != a_90)))
                                      _fail(a_90);
                                    else
                                      v_89 = a_90;
                                    {
                                      ATerm x_19;
                                      x_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_89), not_null(u_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_y_19, not_null(j_89), not_null(t_89)));
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = term_h_19;
                                            return(t);
                                          }
                                          t = assert_1(t, d_3);
                                        }
                                      }
                                      t = x_19;
                                      {
                                        ATerm z_19;
                                        z_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), (ATerm) ATmakeAppl(sym_Defined_2, term_e_20, not_null(v_89)));
                                          {
                                            ATerm e_3 (ATerm t)
                                            {
                                              t = term_g_19;
                                              return(t);
                                            }
                                            t = assert_1(t, e_3);
                                          }
                                        }
                                        t = z_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = s_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, c_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm j_90 = NULL;
  ATerm k_90 = NULL;
  t = sort_defs_0(t);
  {
    k_90 = t;
    if(((j_90 != NULL) && (j_90 != k_90)))
      _fail(k_90);
    else
      j_90 = k_90;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_20), not_null(j_90), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm r_90 = NULL,s_90 = NULL;
  r_90 = t;
  q_90 :
  if(match_cons(r_90, sym_Strategies_1))
    {
      s_90 = ATgetArgument(r_90, 0);
      {
        ATerm v_90 = NULL,x_90 = NULL;
        ATerm w_90 = NULL;
        t = SSLgetAnnotations(not_null(r_90));
        {
          w_90 = t;
          if(((v_90 != NULL) && (v_90 != w_90)))
            _fail(w_90);
          else
            v_90 = w_90;
        }
        {
          t = not_null(s_90);
          {
            ATerm z_90 = NULL;
            t = u_77(t);
            {
              x_90 = t;
              {
                ATerm a_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(x_90)), not_null(v_90));
                {
                  a_91 = t;
                  if(((z_90 != NULL) && (z_90 != a_91)))
                    _fail(a_91);
                  else
                    z_90 = a_91;
                }
                t = not_null(z_90);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
  m_91 = t;
  l_91 :
  if(((ATgetType(m_91) == AT_LIST) && !(ATisEmpty(m_91))))
    {
      n_91 = ATgetFirst((ATermList) m_91);
      o_91 = (ATerm) ATgetNext((ATermList) m_91);
      {
        ATerm s_91 = NULL,u_91 = NULL;
        ATerm t_91 = NULL;
        t = SSLgetAnnotations(not_null(m_91));
        {
          t_91 = t;
          if(((s_91 != NULL) && (s_91 != t_91)))
            _fail(t_91);
          else
            s_91 = t_91;
        }
        {
          t = not_null(n_91);
          {
            ATerm y_91 = NULL;
            t = j_75(t);
            {
              u_91 = t;
              {
                t = not_null(o_91);
                {
                  ATerm a_92 = NULL;
                  t = k_75(t);
                  {
                    y_91 = t;
                    {
                      ATerm b_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_91)), not_null(u_91)), not_null(s_91));
                      {
                        b_92 = t;
                        if(((a_92 != NULL) && (a_92 != b_92)))
                          _fail(b_92);
                        else
                          a_92 = b_92;
                      }
                      t = not_null(a_92);
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
ATerm Specification_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm o_92 = NULL,p_92 = NULL;
  o_92 = t;
  l_92 :
  if(match_cons(o_92, sym_Specification_1))
    {
      p_92 = ATgetArgument(o_92, 0);
      {
        ATerm s_92 = NULL,u_92 = NULL;
        ATerm t_92 = NULL;
        t = SSLgetAnnotations(not_null(o_92));
        {
          t_92 = t;
          if(((s_92 != NULL) && (s_92 != t_92)))
            _fail(t_92);
          else
            s_92 = t_92;
        }
        {
          t = not_null(p_92);
          {
            ATerm c_93 = NULL;
            t = w_77(t);
            {
              u_92 = t;
              {
                ATerm d_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(u_92)), not_null(s_92));
                {
                  d_93 = t;
                  if(((c_93 != NULL) && (c_93 != d_93)))
                    _fail(d_93);
                  else
                    c_93 = d_93;
                }
                t = not_null(c_93);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  q_93 = t;
  p_93 :
  if(match_cons(q_93, sym__2))
    {
      r_93 = ATgetArgument(q_93, 0);
      s_93 = ATgetArgument(q_93, 1);
      {
        ATerm w_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(q_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        {
          t = not_null(r_93);
          {
            ATerm a_94 = NULL;
            t = a_74(t);
            {
              y_93 = t;
              {
                t = not_null(s_93);
                {
                  ATerm c_94 = NULL;
                  t = b_74(t);
                  {
                    a_94 = t;
                    {
                      ATerm d_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_93), not_null(a_94)), not_null(w_93));
                      {
                        d_94 = t;
                        if(((c_94 != NULL) && (c_94 != d_94)))
                          _fail(d_94);
                        else
                          c_94 = d_94;
                      }
                      t = not_null(c_94);
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
  ATerm o_94 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm p_94 = NULL,q_94 = NULL;
      p_94 = t;
      n_94 :
      if(match_cons(p_94, sym_Program_1))
        {
          q_94 = ATgetArgument(p_94, 0);
          if(((o_94 != NULL) && (o_94 != q_94)))
            _fail(q_94);
          else
            o_94 = q_94;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_20), not_null(o_94)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
  w_94 = t;
  t_94 :
  if(match_cons(w_94, sym__2))
    {
      x_94 = ATgetArgument(w_94, 0);
      y_94 = ATgetArgument(w_94, 1);
      {
        ATerm q_20;
        q_20 = t;
        t = SSL_printnl(not_null(x_94), not_null(y_94));
        t = q_20;
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
  ATerm f_95 = NULL;
  f_95 = t;
  t = SSL_implode_string(not_null(f_95));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
        k_95 = t;
        j_95 :
        if(((ATgetType(k_95) == AT_LIST) && !(ATisEmpty(k_95))))
          {
            l_95 = ATgetFirst((ATermList) k_95);
            m_95 = (ATerm) ATgetNext((ATermList) k_95);
            {
              t = not_null(l_95);
              {
                ATerm g_3 (ATerm t)
                {
                  t = not_null(m_95);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_3);
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
  ATerm w_95 = NULL;
  ATerm y_95 = NULL;
  w_95 = t;
  {
    ATerm z_95 = NULL;
    ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL;
    t = not_null(w_95);
    {
      z_95 = t;
      {
        t = SSL_explode_term(not_null(z_95));
        {
          b_96 = t;
          u_95 :
          if(match_cons(b_96, sym__2))
            {
              c_96 = ATgetArgument(b_96, 0);
              d_96 = ATgetArgument(b_96, 1);
              v_95 :
              if(match_string(c_96, ""))
                {
                  if(((y_95 != NULL) && (y_95 != d_96)))
                    _fail(d_96);
                  else
                    y_95 = d_96;
                }
              else
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
      t = not_null(y_95);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_95 (ATerm))
{
  ATerm h_96 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_96);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          t = Nil_0(t);
          t = a_95(t);
        }
      }
    return(t);
  }
  t = h_96(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
  k_96 = t;
  j_96 :
  if(match_cons(k_96, sym__2))
    {
      l_96 = ATgetArgument(k_96, 0);
      m_96 = ATgetArgument(k_96, 1);
      {
        t = not_null(l_96);
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(m_96);
            return(t);
          }
          t = at_end_1(t, j_3);
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
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_96 = NULL;
  r_96 = t;
  t = SSL_explode_string(not_null(r_96));
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
  ATerm v_96 = NULL;
  v_96 = t;
  t = SSL_is_string(not_null(v_96));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm a_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_3);
            LocalPopChoice(c_21);
          }
        else
          {
            t = a_21;
            {
              ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL;
              e_97 = t;
              d_97 :
              if(match_cons(e_97, sym_Path_1))
                {
                  f_97 = ATgetArgument(e_97, 0);
                  t = not_null(f_97);
                }
              else
                {
                  if(match_cons(e_97, sym_Var_1))
                    {
                      f_97 = ATgetArgument(e_97, 0);
                      {
                        t = not_null(f_97);
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = term_o_21;
                                  return(t);
                                }
                                t = debug_1(t, l_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_97, sym_Prefix_2))
                        {
                          f_97 = ATgetArgument(e_97, 0);
                          g_97 = ATgetArgument(e_97, 1);
                          {
                            ATerm l_97 = NULL,n_97 = NULL;
                            ATerm p_21;
                            p_21 = t;
                            {
                              ATerm m_97 = NULL;
                              t = not_null(f_97);
                              {
                                t = eval_config_0(t);
                                {
                                  m_97 = t;
                                  if(((l_97 != NULL) && (l_97 != m_97)))
                                    _fail(m_97);
                                  else
                                    l_97 = m_97;
                                }
                              }
                            }
                            t = p_21;
                            {
                              ATerm o_97 = NULL;
                              t = not_null(g_97);
                              {
                                t = eval_config_0(t);
                                {
                                  o_97 = t;
                                  if(((n_97 != NULL) && (n_97 != o_97)))
                                    _fail(o_97);
                                  else
                                    n_97 = o_97;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_97), not_null(n_97));
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
  ATerm w_97 = NULL;
  w_97 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_21, not_null(w_97));
    {
      t = table_get_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_21;
            r_21 = t;
            {
              ATerm d_98 = NULL;
              ATerm g_98 = NULL;
              g_98 = t;
              if(((d_98 != NULL) && (d_98 != g_98)))
                _fail(g_98);
              else
                d_98 = g_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_21, not_null(w_97), not_null(d_98));
                t = table_put_0(t);
              }
            }
            t = r_21;
          }
          return(t);
        }
        t = try_1(t, m_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_110 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm z_21;
    z_21 = t;
    {
      ATerm p_98 = NULL;
      ATerm q_98 = NULL;
      t = term_a_22;
      {
        t = get_config_0(t);
        {
          q_98 = t;
          if(((p_98 != NULL) && (p_98 != q_98)))
            _fail(q_98);
          else
            p_98 = q_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_98), term_g_22);
        t = geq_0(t);
      }
    }
    t = z_21;
    t = z_110(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL;
  u_98 = t;
  t_98 :
  if(match_cons(u_98, sym__2))
    {
      v_98 = ATgetArgument(u_98, 0);
      w_98 = ATgetArgument(u_98, 1);
      t = SSL_WriteToTextFile(not_null(v_98), not_null(w_98));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym__2))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      t = SSL_WriteToBinaryFile(not_null(i_99), not_null(j_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_99 = NULL;
  ATerm h_22;
  h_22 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm m_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm u_99 = NULL,v_99 = NULL;
            u_99 = t;
            q_99 :
            if(match_cons(u_99, sym_Output_1))
              {
                v_99 = ATgetArgument(u_99, 0);
                if(((t_99 != NULL) && (t_99 != v_99)))
                  _fail(v_99);
                else
                  t_99 = v_99;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          LocalPopChoice(r_22);
        }
      else
        {
          t = m_22;
          {
            ATerm w_99 = NULL;
            t = term_s_22;
            {
              w_99 = t;
              if(((t_99 != NULL) && (t_99 != w_99)))
                _fail(w_99);
              else
                t_99 = w_99;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = h_22;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(t_99);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm x_99 = NULL;
              x_99 = t;
              s_99 :
              if(!(match_cons(x_99, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm d_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  ATerm v_22;
  v_22 = t;
  t = dtime_0(t);
  t = v_22;
  {
    t = g_109(t);
    {
      ATerm w_22;
      w_22 = t;
      {
        ATerm e_100 = NULL;
        t = dtime_0(t);
        {
          e_100 = t;
          if(((d_100 != NULL) && (d_100 != e_100)))
            _fail(e_100);
          else
            d_100 = e_100;
        }
      }
      t = w_22;
      {
        f_100 = t;
        c_100 :
        if(match_cons(f_100, sym__2))
          {
            g_100 = ATgetArgument(f_100, 0);
            h_100 = ATgetArgument(f_100, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_100)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_100))), not_null(h_100));
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
ATerm debug_1 (ATerm t, ATerm c_108 (ATerm))
{
  ATerm x_22;
  x_22 = t;
  {
    ATerm o_100 = NULL,q_100 = NULL;
    ATerm y_22;
    y_22 = t;
    {
      ATerm p_100 = NULL;
      t = c_108(t);
      {
        p_100 = t;
        if(((o_100 != NULL) && (o_100 != p_100)))
          _fail(p_100);
        else
          o_100 = p_100;
      }
    }
    t = y_22;
    {
      ATerm r_100 = NULL;
      r_100 = t;
      if(((q_100 != NULL) && (q_100 != r_100)))
        _fail(r_100);
      else
        q_100 = r_100;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_100)), not_null(o_100)));
        t = printnl_0(t);
      }
    }
  }
  t = x_22;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm v_100 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_100 = NULL;
      w_100 = t;
      {
        if(((v_100 != NULL) && (v_100 != w_100)))
          _fail(w_100);
        else
          v_100 = w_100;
        t = SSL_ReadFromFile(not_null(v_100));
      }
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm u_3 (ATerm t)
        {
          t = term_g_23;
          return(t);
        }
        t = debug_1(t, u_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm))
{
  ATerm a_101 = NULL,c_101 = NULL;
  ATerm h_23;
  h_23 = t;
  {
    ATerm b_101 = NULL;
    t = w_91(t);
    {
      b_101 = t;
      if(((a_101 != NULL) && (a_101 != b_101)))
        _fail(b_101);
      else
        a_101 = b_101;
    }
  }
  t = h_23;
  {
    ATerm d_101 = NULL;
    t = x_91(t);
    {
      d_101 = t;
      if(((c_101 != NULL) && (c_101 != d_101)))
        _fail(d_101);
      else
        c_101 = d_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_101), not_null(c_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_101 = NULL;
  ATerm i_23;
  i_23 = t;
  {
    ATerm j_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          ATerm k_101 = NULL,l_101 = NULL;
          k_101 = t;
          h_101 :
          if(match_cons(k_101, sym_Input_1))
            {
              l_101 = ATgetArgument(k_101, 0);
              if(((j_101 != NULL) && (j_101 != l_101)))
                _fail(l_101);
              else
                j_101 = l_101;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
        LocalPopChoice(r_23);
      }
    else
      {
        t = j_23;
        {
          ATerm m_101 = NULL;
          t = term_s_23;
          {
            m_101 = t;
            if(((j_101 != NULL) && (j_101 != m_101)))
              _fail(m_101);
            else
              j_101 = m_101;
          }
        }
      }
  }
  t = i_23;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(j_101);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm q_101 = NULL;
    q_101 = t;
    p_101 :
    if(!(match_string(q_101, "-v")))
      {
        if(!(match_string(q_101, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_w_23;
    t = set_config_0(t);
    t = term_x_23;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm t_101 = NULL;
    t_101 = t;
    r_101 :
    if(!(match_string(t_101, "-k")))
      {
        if(!(match_string(t_101, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm z_23;
    z_23 = t;
    {
      ATerm u_101 = NULL;
      ATerm v_101 = NULL;
      t = string_to_int_0(t);
      {
        v_101 = t;
        if(((u_101 != NULL) && (u_101 != v_101)))
          _fail(v_101);
        else
          u_101 = v_101;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_24, not_null(u_101));
        t = set_config_0(t);
      }
    }
    t = z_23;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_b_24;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_101 = NULL;
  y_101 = t;
  t = SSL_string_to_int(not_null(y_101));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm g_102 = NULL;
        g_102 = t;
        b_102 :
        if(!(match_string(g_102, "-S")))
          {
            if(!(match_string(g_102, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_e_24;
        t = set_config_0(t);
        t = term_f_24;
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_g_24;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm h_102 = NULL;
              h_102 = t;
              c_102 :
              if(!(match_string(h_102, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm p_102 = NULL;
              ATerm k_24;
              k_24 = t;
              {
                ATerm i_102 = NULL;
                ATerm o_102 = NULL;
                t = string_to_int_0(t);
                {
                  o_102 = t;
                  if(((i_102 != NULL) && (i_102 != o_102)))
                    _fail(o_102);
                  else
                    i_102 = o_102;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_22, not_null(i_102));
                  t = set_config_0(t);
                }
              }
              t = k_24;
              {
                ATerm q_102 = NULL;
                q_102 = t;
                if(((p_102 != NULL) && (p_102 != q_102)))
                  _fail(q_102);
                else
                  p_102 = q_102;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_102));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_l_24;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm r_102 = NULL;
                r_102 = t;
                f_102 :
                if(!(match_string(r_102, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_4 (ATerm t)
              {
                t = term_s_24;
                t = set_config_0(t);
                t = term_t_24;
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_c_25;
                return(t);
              }
              t = Option_3(t, j_4, n_4, o_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = m_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm x_102 = NULL;
    x_102 = t;
    u_102 :
    if(!(match_string(x_102, "-o")))
      {
        if(!(match_string(x_102, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm a_103 = NULL;
    ATerm b_26;
    b_26 = t;
    {
      ATerm y_102 = NULL;
      ATerm z_102 = NULL;
      z_102 = t;
      if(((y_102 != NULL) && (y_102 != z_102)))
        _fail(z_102);
      else
        y_102 = z_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_26, not_null(y_102));
        t = set_config_0(t);
      }
    }
    t = b_26;
    {
      ATerm b_103 = NULL;
      b_103 = t;
      if(((a_103 != NULL) && (a_103 != b_103)))
        _fail(b_103);
      else
        a_103 = b_103;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_103));
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_d_26;
    return(t);
  }
  t = ArgOption_3(t, p_4, q_4, r_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm f_103 = NULL;
          f_103 = t;
          e_103 :
          if(!(match_string(f_103, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_h_26;
          t = set_config_0(t);
          t = term_i_26;
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_j_26;
          return(t);
        }
        t = Option_3(t, s_4, t_4, u_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
  l_103 = t;
  j_103 :
  if(match_string(l_103, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(l_103) == AT_LIST) && !(ATisEmpty(l_103))))
        {
          m_103 = ATgetFirst((ATermList) l_103);
          n_103 = (ATerm) ATgetNext((ATermList) l_103);
          k_103 :
          if(((ATgetType(n_103) == AT_LIST) && !(ATisEmpty(n_103))))
            {
              o_103 = ATgetFirst((ATermList) n_103);
              p_103 = (ATerm) ATgetNext((ATermList) n_103);
              {
                ATerm t_103 = NULL;
                ATerm k_26;
                k_26 = t;
                {
                  t = not_null(m_103);
                  t = m_0(t);
                }
                t = k_26;
                {
                  ATerm u_103 = NULL;
                  t = not_null(o_103);
                  {
                    t = n_0(t);
                    {
                      u_103 = t;
                      if(((t_103 != NULL) && (t_103 != u_103)))
                        _fail(u_103);
                      else
                        t_103 = u_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_103)), not_null(t_103));
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
  ATerm v_4 (ATerm t)
  {
    ATerm b_104 = NULL;
    b_104 = t;
    y_103 :
    if(!(match_string(b_104, "-i")))
      {
        if(!(match_string(b_104, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm e_104 = NULL;
    ATerm l_26;
    l_26 = t;
    {
      ATerm c_104 = NULL;
      ATerm d_104 = NULL;
      d_104 = t;
      if(((c_104 != NULL) && (c_104 != d_104)))
        _fail(d_104);
      else
        c_104 = d_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(c_104));
        t = set_config_0(t);
      }
    }
    t = l_26;
    {
      ATerm f_104 = NULL;
      f_104 = t;
      if(((e_104 != NULL) && (e_104 != f_104)))
        _fail(f_104);
      else
        e_104 = f_104;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_104));
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  t = ArgOption_3(t, v_4, w_4, x_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm q_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = q_26;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_t_26));
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
  ATerm l_104 = NULL;
  l_104 = t;
  t = SSL_TicksToSeconds(not_null(l_104));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
  q_104 = t;
  p_104 :
  if(match_cons(q_104, sym__2))
    {
      r_104 = ATgetArgument(q_104, 0);
      s_104 = ATgetArgument(q_104, 1);
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_104), not_null(s_104));
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            t = SSL_addr(not_null(r_104), not_null(s_104));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_98 (ATerm), ATerm a_99 (ATerm))
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_98(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
        f_105 = t;
        e_105 :
        if(((ATgetType(f_105) == AT_LIST) && !(ATisEmpty(f_105))))
          {
            g_105 = ATgetFirst((ATermList) f_105);
            h_105 = (ATerm) ATgetNext((ATermList) f_105);
            {
              ATerm k_105 = NULL;
              ATerm l_105 = NULL;
              t = not_null(h_105);
              {
                t = foldr_2(t, z_98, a_99);
                {
                  l_105 = t;
                  if(((k_105 != NULL) && (k_105 != l_105)))
                    _fail(l_105);
                  else
                    k_105 = l_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), not_null(k_105));
                t = a_99(t);
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
ATerm crush_2 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm))
{
  ATerm s_105 = NULL;
  ATerm u_105 = NULL;
  s_105 = t;
  {
    ATerm v_105 = NULL;
    ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
    t = not_null(s_105);
    {
      v_105 = t;
      {
        t = SSL_explode_term(not_null(v_105));
        {
          x_105 = t;
          r_105 :
          if(match_cons(x_105, sym__2))
            {
              y_105 = ATgetArgument(x_105, 0);
              z_105 = ATgetArgument(x_105, 1);
              if(((u_105 != NULL) && (u_105 != z_105)))
                _fail(z_105);
              else
                u_105 = z_105;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_105);
      t = foldr_2(t, x_97, y_97);
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
    ATerm y_4 (ATerm t)
    {
      t = term_n_19;
      return(t);
    }
    t = crush_2(t, y_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  f_106 = t;
  e_106 :
  if(match_cons(f_106, sym__2))
    {
      g_106 = ATgetArgument(f_106, 0);
      h_106 = ATgetArgument(f_106, 1);
      {
        ATerm a_27;
        a_27 = t;
        {
          ATerm e_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_106), not_null(h_106));
              LocalPopChoice(o_27);
            }
          else
            {
              t = e_27;
              t = SSL_gtr(not_null(g_106), not_null(h_106));
            }
        }
        t = a_27;
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
  ATerm n_106 = NULL;
  ATerm w_27 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL;
      o_106 = t;
      m_106 :
      if(match_cons(o_106, sym__2))
        {
          p_106 = ATgetArgument(o_106, 0);
          q_106 = ATgetArgument(o_106, 1);
          {
            if(((n_106 != NULL) && (n_106 != p_106)))
              _fail(p_106);
            else
              n_106 = p_106;
            if(((n_106 != NULL) && (n_106 != q_106)))
              _fail(q_106);
            else
              n_106 = q_106;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_28);
    }
  else
    {
      t = w_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_110 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm h_28;
    h_28 = t;
    {
      ATerm t_106 = NULL;
      ATerm u_106 = NULL;
      t = term_a_22;
      {
        t = get_config_0(t);
        {
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_106), term_z_6);
        t = geq_0(t);
      }
    }
    t = h_28;
    t = y_110(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm y_106 = NULL,a_107 = NULL;
    ATerm i_28;
    i_28 = t;
    {
      ATerm z_106 = NULL;
      t = run_time_0(t);
      {
        z_106 = t;
        if(((y_106 != NULL) && (y_106 != z_106)))
          _fail(z_106);
        else
          y_106 = z_106;
      }
    }
    t = i_28;
    {
      ATerm b_107 = NULL;
      t = term_j_28;
      {
        t = get_config_0(t);
        {
          b_107 = t;
          if(((a_107 != NULL) && (a_107 != b_107)))
            _fail(b_107);
          else
            a_107 = b_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_28), not_null(y_106)), term_k_28), not_null(a_107)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_5);
  {
    t = term_n_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_107 = NULL;
  i_107 = t;
  h_107 :
  if(match_cons(i_107, sym_Version_0))
    {
      ATerm k_107 = NULL,m_107 = NULL;
      ATerm m_28;
      m_28 = t;
      {
        ATerm l_107 = NULL;
        t = SSLgetAnnotations(not_null(i_107));
        {
          l_107 = t;
          if(((k_107 != NULL) && (k_107 != l_107)))
            _fail(l_107);
          else
            k_107 = l_107;
        }
      }
      t = m_28;
      {
        ATerm n_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_107));
        {
          n_107 = t;
          if(((m_107 != NULL) && (m_107 != n_107)))
            _fail(n_107);
          else
            m_107 = n_107;
        }
        t = not_null(m_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_109 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_5);
  t = e_109(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_107 = NULL;
  s_107 = t;
  t = SSL_table_create(not_null(s_107));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  {
    ATerm r_28;
    r_28 = t;
    {
      t = term_s_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_28, term_t_28, not_null(w_107));
          t = table_put_0(t);
        }
      }
    }
    t = r_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  t = SSL_table_destroy(not_null(a_108));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_108 = NULL;
  g_108 = t;
  t = SSL_exit(not_null(g_108));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
  k_108 = t;
  j_108 :
  if(((ATgetType(k_108) == AT_LIST) && ATisEmpty(k_108)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_108) == AT_LIST) && !(ATisEmpty(k_108))))
        {
          l_108 = ATgetFirst((ATermList) k_108);
          m_108 = (ATerm) ATgetNext((ATermList) k_108);
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
  ATerm a_29;
  a_29 = t;
  {
    ATerm p_108 = NULL;
    ATerm s_108 = NULL;
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm q_108 = NULL;
          ATerm r_108 = NULL;
          r_108 = t;
          if(((q_108 != NULL) && (q_108 != r_108)))
            _fail(r_108);
          else
            q_108 = r_108;
          t = (ATerm) ATinsert(ATempty, not_null(q_108));
        }
      }
    {
      s_108 = t;
      if(((p_108 != NULL) && (p_108 != s_108)))
        _fail(s_108);
      else
        p_108 = s_108;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_22, not_null(p_108));
      t = printnl_0(t);
    }
  }
  t = a_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_113 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm v_108 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = Cons_2(t, l_94, v_108);
      }
    return(t);
  }
  t = v_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm c_109 = NULL,d_109 = NULL,f_109 = NULL;
  f_109 = t;
  b_109 :
  if(((ATgetType(f_109) == AT_LIST) && !(ATisEmpty(f_109))))
    {
      c_109 = ATgetFirst((ATermList) f_109);
      d_109 = (ATerm) ATgetNext((ATermList) f_109);
      {
        ATerm j_109 = NULL;
        t = not_null(d_109);
        {
          ATerm f_29;
          f_29 = t;
          {
            ATerm o_109 = NULL,r_109 = NULL,y_109 = NULL;
            ATerm g_29;
            g_29 = t;
            {
              ATerm p_109 = NULL;
              t = k_0(t);
              {
                p_109 = t;
                if(((o_109 != NULL) && (o_109 != p_109)))
                  _fail(p_109);
                else
                  o_109 = p_109;
              }
            }
            t = g_29;
            {
              ATerm s_109 = NULL;
              t = not_null(c_109);
              {
                t = i_0(t);
                {
                  s_109 = t;
                  if(((r_109 != NULL) && (r_109 != s_109)))
                    _fail(s_109);
                  else
                    r_109 = s_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_109)), not_null(r_109));
                {
                  y_109 = t;
                  if(((j_109 != NULL) && (j_109 != y_109)))
                    _fail(y_109);
                  else
                    j_109 = y_109;
                }
              }
            }
          }
          t = f_29;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(j_109);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_109) == AT_LIST) && ATisEmpty(f_109)))
        {
          {
            t = term_o_15;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_113 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_81 (ATerm))
{
  ATerm n_110 = NULL,o_110 = NULL;
  n_110 = t;
  m_110 :
  if(match_cons(n_110, sym_Program_1))
    {
      o_110 = ATgetArgument(n_110, 0);
      {
        ATerm r_110 = NULL,t_110 = NULL;
        ATerm s_110 = NULL;
        t = SSLgetAnnotations(not_null(n_110));
        {
          s_110 = t;
          if(((r_110 != NULL) && (r_110 != s_110)))
            _fail(s_110);
          else
            r_110 = s_110;
        }
        {
          t = not_null(o_110);
          {
            ATerm v_110 = NULL;
            t = j_81(t);
            {
              t_110 = t;
              {
                ATerm w_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_110)), not_null(r_110));
                {
                  w_110 = t;
                  if(((v_110 != NULL) && (v_110 != w_110)))
                    _fail(w_110);
                  else
                    v_110 = w_110;
                }
                t = not_null(v_110);
              }
            }
          }
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
  ATerm h_111 = NULL;
  ATerm j_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_111 = NULL;
      t = term_j_28;
      {
        t = get_config_0(t);
        {
          i_111 = t;
          if(((h_111 != NULL) && (h_111 != i_111)))
            _fail(i_111);
          else
            h_111 = i_111;
        }
      }
      LocalPopChoice(n_29);
    }
  else
    {
      t = j_29;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm j_111 = NULL;
            j_111 = t;
            if(((h_111 != NULL) && (h_111 != j_111)))
              _fail(j_111);
            else
              h_111 = j_111;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        t = not_null(h_111);
        return(t);
      }
      t = short_description_1(t, h_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_u_29;
      {
        t = echo_0(t);
        {
          t = term_x_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm k_111 = NULL;
                  ATerm l_111 = NULL;
                  l_111 = t;
                  if(((k_111 != NULL) && (k_111 != l_111)))
                    _fail(l_111);
                  else
                    k_111 = l_111;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_111)), term_y_29);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm m_111 = NULL;
                    ATerm n_111 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(h_111);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      n_111 = t;
                      if(((m_111 != NULL) && (m_111 != n_111)))
                        _fail(n_111);
                      else
                        m_111 = n_111;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_111)), term_z_29);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
  ATerm a_30;
  a_30 = t;
  {
    ATerm t_111 = NULL;
    ATerm u_111 = NULL;
    u_111 = t;
    if(((t_111 != NULL) && (t_111 != u_111)))
      _fail(u_111);
    else
      t_111 = u_111;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(t_111)));
      t = printnl_0(t);
    }
  }
  t = a_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_108 (ATerm))
{
  ATerm b_30;
  b_30 = t;
  {
    t = d_108(t);
    t = debug_0(t);
  }
  t = b_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm c_112 = NULL,d_112 = NULL;
  c_112 = t;
  a_112 :
  if(match_cons(c_112, sym_Undefined_1))
    {
      d_112 = ATgetArgument(c_112, 0);
      {
        ATerm g_112 = NULL,i_112 = NULL;
        ATerm h_112 = NULL;
        t = SSLgetAnnotations(not_null(c_112));
        {
          h_112 = t;
          if(((g_112 != NULL) && (g_112 != h_112)))
            _fail(h_112);
          else
            g_112 = h_112;
        }
        {
          t = not_null(d_112);
          {
            ATerm k_112 = NULL;
            t = k_81(t);
            {
              i_112 = t;
              {
                ATerm l_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_112)), not_null(g_112));
                {
                  l_112 = t;
                  if(((k_112 != NULL) && (k_112 != l_112)))
                    _fail(l_112);
                  else
                    k_112 = l_112;
                }
                t = not_null(k_112);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm q_112 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_94, _id);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = Cons_2(t, _id, q_112);
      }
    return(t);
  }
  t = q_112(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_112 (ATerm))
{
  t = fetch_1(t, b_112);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_112 = NULL;
  v_112 = t;
  u_112 :
  if(match_cons(v_112, sym_Help_0))
    {
      ATerm x_112 = NULL,z_112 = NULL;
      ATerm f_30;
      f_30 = t;
      {
        ATerm y_112 = NULL;
        t = SSLgetAnnotations(not_null(v_112));
        {
          y_112 = t;
          if(((x_112 != NULL) && (x_112 != y_112)))
            _fail(y_112);
          else
            x_112 = y_112;
        }
      }
      t = f_30;
      {
        ATerm a_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_112));
        {
          a_113 = t;
          if(((z_112 != NULL) && (z_112 != a_113)))
            _fail(a_113);
          else
            z_112 = a_113;
        }
        t = not_null(z_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_91(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL;
  m_113 = t;
  l_113 :
  if(match_cons(m_113, sym__2))
    {
      n_113 = ATgetArgument(m_113, 0);
      o_113 = ATgetArgument(m_113, 1);
      t = SSL_table_get(not_null(n_113), not_null(o_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
  v_113 = t;
  u_113 :
  if(match_cons(v_113, sym__3))
    {
      w_113 = ATgetArgument(v_113, 0);
      x_113 = ATgetArgument(v_113, 1);
      y_113 = ATgetArgument(v_113, 2);
      {
        ATerm j_30;
        j_30 = t;
        {
          ATerm c_114 = NULL;
          ATerm d_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_113), not_null(x_113));
          {
            ATerm l_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_30);
              }
            else
              {
                t = l_30;
                t = (ATerm) ATempty;
              }
            {
              d_114 = t;
              if(((c_114 != NULL) && (c_114 != d_114)))
                _fail(d_114);
              else
                c_114 = d_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_113), not_null(x_113), (ATerm) ATinsert(CheckATermList(not_null(c_114)), not_null(y_113)));
            t = table_put_0(t);
          }
        }
        t = j_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_113 (ATerm))
{
  ATerm h_114 = NULL;
  ATerm i_114 = NULL;
  t = term_o_15;
  {
    t = g_113(t);
    {
      i_114 = t;
      if(((h_114 != NULL) && (h_114 != i_114)))
        _fail(i_114);
      else
        h_114 = i_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_29, term_w_29, not_null(h_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
  o_114 = t;
  n_114 :
  if(match_string(o_114, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_114) == AT_LIST) && !(ATisEmpty(o_114))))
        {
          p_114 = ATgetFirst((ATermList) o_114);
          q_114 = (ATerm) ATgetNext((ATermList) o_114);
          {
            ATerm t_114 = NULL;
            ATerm z_30;
            z_30 = t;
            {
              t = not_null(p_114);
              t = a_0(t);
            }
            t = z_30;
            {
              ATerm u_114 = NULL;
              t = term_o_15;
              {
                t = d_0(t);
                {
                  u_114 = t;
                  if(((t_114 != NULL) && (t_114 != u_114)))
                    _fail(u_114);
                  else
                    t_114 = u_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_114)), not_null(t_114));
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
  ATerm l_5 (ATerm t)
  {
    ATerm z_114 = NULL;
    z_114 = t;
    y_114 :
    if(!(match_string(z_114, "--help")))
      {
        if(!(match_string(z_114, "-h")))
          {
            if(!(match_string(z_114, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_f_31;
    {
      t = set_config_0(t);
      t = term_g_31;
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_k_31;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL;
  f_115 = t;
  e_115 :
  if(((ATgetType(f_115) == AT_LIST) && !(ATisEmpty(f_115))))
    {
      g_115 = ATgetFirst((ATermList) f_115);
      h_115 = (ATerm) ATgetNext((ATermList) f_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL;
  n_115 = t;
  m_115 :
  if(match_cons(n_115, sym__2))
    {
      o_115 = ATgetArgument(n_115, 0);
      p_115 = ATgetArgument(n_115, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_21, not_null(o_115), not_null(p_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_113 (ATerm))
{
  ATerm s_31;
  s_31 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_t_31;
      t = e_113(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = s_31;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm e_116 = NULL;
      ATerm u_31;
      u_31 = t;
      {
        ATerm y_115 = NULL;
        ATerm a_116 = NULL;
        a_116 = t;
        if(((y_115 != NULL) && (y_115 != a_116)))
          _fail(a_116);
        else
          y_115 = a_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(y_115));
          t = set_config_0(t);
        }
      }
      t = u_31;
      {
        ATerm f_116 = NULL;
        f_116 = t;
        if(((e_116 != NULL) && (e_116 != f_116)))
          _fail(f_116);
        else
          e_116 = f_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_116));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm v_31 = t;
      int w_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
              {
                t = e_113(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(w_31);
        }
      else
        {
          t = v_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
  ATerm z_31;
  z_31 = t;
  {
    ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL;
    o_116 = t;
    k_116 :
    if(match_cons(o_116, sym__3))
      {
        p_116 = ATgetArgument(o_116, 0);
        q_116 = ATgetArgument(o_116, 1);
        r_116 = ATgetArgument(o_116, 2);
        {
          if(((l_116 != NULL) && (l_116 != p_116)))
            _fail(p_116);
          else
            l_116 = p_116;
          {
            if(((m_116 != NULL) && (m_116 != q_116)))
              _fail(q_116);
            else
              m_116 = q_116;
            {
              if(((n_116 != NULL) && (n_116 != r_116)))
                _fail(r_116);
              else
                n_116 = r_116;
              t = SSL_table_put(not_null(l_116), not_null(m_116), not_null(n_116));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_113 (ATerm))
{
  ATerm u_116 = NULL;
  ATerm a_32;
  a_32 = t;
  {
    t = term_b_32;
    t = table_put_0(t);
  }
  t = a_32;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm c_32 = t;
      int f_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          LocalPopChoice(f_32);
        }
      else
        {
          t = c_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_32;
            i_32 = t;
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_31;
                  t = get_config_0(t);
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_32;
            {
              t = system_usage_0(t);
              {
                t = term_n_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm v_116 = NULL;
                  v_116 = t;
                  if(((u_116 != NULL) && (u_116 != v_116)))
                    _fail(v_116);
                  else
                    u_116 = v_116;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_116)), term_l_32);
                  return(t);
                }
                t = say_1(t, w_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_5);
      {
        ATerm m_32;
        m_32 = t;
        {
          t = term_v_29;
          t = table_destroy_0(t);
        }
        t = m_32;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm))
{
  t = parse_options_1(t, k_109);
  {
    t = store_options_0(t);
    {
      t = m_109(t);
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_109);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm p_32 = t;
              int q_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_109(t);
                  t = report_success_0(t);
                  LocalPopChoice(q_32);
                }
              else
                {
                  t = p_32;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_110);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_5, d_110, e_110, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm t_32;
      t_32 = t;
      {
        ATerm y_116 = NULL;
        ATerm z_116 = NULL;
        t = term_j_28;
        {
          t = get_config_0(t);
          {
            z_116 = t;
            if(((y_116 != NULL) && (y_116 != z_116)))
              _fail(z_116);
            else
              y_116 = z_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(y_116)));
          t = printnl_0(t);
        }
      }
      t = t_32;
      return(t);
    }
    t = if_verbose2_1(t, a_6);
    return(t);
  }
  t = iowrap_4(t, v_109, w_109, x_109, z_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_109 (ATerm), ATerm u_109 (ATerm))
{
  t = iowrap_3(t, t_109, u_109, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_109 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = _2(t, _id, q_109);
    return(t);
  }
  t = iowrap_2(t, b_6, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, f_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, e_6);
      return(t);
    }
    t = Specification_1(t, d_6);
    return(t);
  }
  t = iowrap_1(t, c_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
