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
ATerm term_p_31;
ATerm term_f_31;
ATerm term_x_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_a_28;
ATerm term_s_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_q_25;
ATerm term_g_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_n_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_10;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_8;
ATerm term_c_7;
ATerm term_r_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Op_2, term_l_11, (ATerm) ATempty);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_q_15);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_o_20);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_20);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_q_15);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_q_15);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_c_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_q_15);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__3, term_b_30, term_c_30, (ATerm) ATempty);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm Let_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_96 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_87 (ATerm), ATerm t_87 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_89 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm substitute_1 (ATerm, ATerm f_87 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
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
ATerm As_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm Explode_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm Op_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_83 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm w_92 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm h_98 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm f_76 (ATerm), ATerm g_76 (ATerm));
ATerm Con_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm oncetd_1 (ATerm, ATerm k_89 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm u_87 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm c_92 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm h_102 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm u_92 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm d_101 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm));
ATerm zip_1 (ATerm, ATerm r_92 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_98 (ATerm), ATerm x_98 (ATerm));
ATerm for_3 (ATerm, ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm i_113 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm k_113 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm));
ATerm union_1 (ATerm, ATerm h_101 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_75 (ATerm));
ATerm _2 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_84 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_108 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_106 (ATerm));
ATerm debug_1 (ATerm, ATerm l_105 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_91 (ATerm), ATerm n_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_101 (ATerm), ATerm t_101 (ATerm));
ATerm crush_2 (ATerm, ATerm w_100 (ATerm), ATerm x_100 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_108 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_106 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_110 (ATerm));
ATerm map_1 (ATerm, ATerm d_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_110 (ATerm));
ATerm Program_1 (ATerm, ATerm t_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_105 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_109 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_90 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_110 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_110 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_110 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_107 (ATerm), ATerm d_107 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_106 (ATerm));
ATerm extract_all_0 (ATerm);
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
        ATerm c_6;
        c_6 = t;
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
        t = c_6;
        {
          ATerm p_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            p_5 = t;
            if(((m_4 != NULL) && (m_4 != p_5)))
              _fail(p_5);
            else
              m_4 = p_5;
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_6), not_null(p_6)), term_e_6), not_null(o_6)), term_d_6);
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
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  x_6 = t;
  v_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      b_7 = ATgetArgument(x_6, 1);
      w_6 :
      if(match_cons(y_6, sym_Mod_2))
        {
          z_6 = ATgetArgument(y_6, 0);
          a_7 = ATgetArgument(y_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_6), not_null(b_7)), term_e_6), not_null(a_7)), term_g_6), not_null(z_6)), term_d_6);
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
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  j_7 = t;
  h_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      i_7 :
      if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
        {
          m_7 = ATgetFirst((ATermList) l_7);
          n_7 = (ATerm) ATgetNext((ATermList) l_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(n_7)), not_null(m_7));
            {
              ATerm b_0 (ATerm t)
              {
                ATerm h_6 = t;
                int i_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(i_6);
                  }
                else
                  {
                    t = h_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, b_0);
            }
            t = not_null(k_7);
          }
        }
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
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  t_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      u_7 :
      if(((ATgetType(x_7) == AT_LIST) && ATisEmpty(x_7)))
        {
          t = not_null(w_7);
        }
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
  ATerm j_6;
  j_6 = t;
  {
    t = error_0(t);
    {
      t = term_k_6;
      t = exit_0(t);
    }
  }
  t = j_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_6;
  q_6 = t;
  {
    ATerm b_8 = NULL;
    ATerm c_8 = NULL;
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_6, not_null(b_8));
      t = printnl_0(t);
    }
  }
  t = q_6;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  n_8 :
  if(match_cons(p_8, sym__2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      o_8 :
      if(match_int(r_8, 0))
        {
          ATerm s_6 = t;
          int t_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
              t = not_null(q_8);
              {
                t = Arities_0(t);
                {
                  t_8 = t;
                  i_8 :
                  if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
                    {
                      u_8 = ATgetFirst((ATermList) t_8);
                      v_8 = (ATerm) ATgetNext((ATermList) t_8);
                      j_8 :
                      if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
                        {
                          w_8 = ATgetFirst((ATermList) v_8);
                          x_8 = (ATerm) ATgetNext((ATermList) v_8);
                          {
                            ATerm u_6 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  ATerm y_8 = NULL;
                                  y_8 = t;
                                  h_8 :
                                  if(!(match_int(y_8, 0)))
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
                                t = u_6;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), term_c_7);
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
              LocalPopChoice(t_6);
            }
          else
            {
              t = s_6;
              {
                ATerm a_9 = NULL;
                ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                t = not_null(q_8);
                {
                  t = Arities_0(t);
                  {
                    b_9 = t;
                    l_8 :
                    if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
                      {
                        c_9 = ATgetFirst((ATermList) b_9);
                        d_9 = (ATerm) ATgetNext((ATermList) b_9);
                        m_8 :
                        if(((ATgetType(d_9) == AT_LIST) && ATisEmpty(d_9)))
                          {
                            {
                              if(((a_9 != NULL) && (a_9 != c_9)))
                                _fail(c_9);
                              else
                                a_9 = c_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
ATerm Rec_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Rec_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm y_9 = NULL;
            t = f_74(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = g_74(t);
                  {
                    y_9 = t;
                    {
                      ATerm b_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                      {
                        b_10 = t;
                        if(((a_10 != NULL) && (a_10 != b_10)))
                          _fail(b_10);
                        else
                          a_10 = b_10;
                      }
                      t = not_null(a_10);
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
ATerm SDef_3 (ATerm t, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_SDef_3))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm a_11 = NULL;
            t = j_74(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = k_74(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = l_74(t);
                        {
                          c_11 = t;
                          {
                            ATerm f_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_10), not_null(a_11), not_null(c_11)), not_null(w_10));
                            {
                              f_11 = t;
                              if(((e_11 != NULL) && (e_11 != f_11)))
                                _fail(f_11);
                              else
                                e_11 = f_11;
                            }
                            t = not_null(e_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Let_2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm y_11 = NULL,a_12 = NULL;
        ATerm z_11 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        {
          t = not_null(t_11);
          {
            ATerm c_12 = NULL;
            t = h_74(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = i_74(t);
                  {
                    c_12 = t;
                    {
                      ATerm f_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_12), not_null(c_12)), not_null(y_11));
                      {
                        f_12 = t;
                        if(((e_12 != NULL) && (e_12 != f_12)))
                          _fail(f_12);
                        else
                          e_12 = f_12;
                      }
                      t = not_null(e_12);
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
ATerm sboundin_3 (ATerm t, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_86, z_86);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, b_87, b_87, z_86);
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = Rec_2(t, b_87, z_86);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Rec_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_SDef_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      a_13 = ATgetArgument(x_12, 2);
      {
        t = not_null(z_12);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
            e_13 = t;
            v_12 :
            if(match_cons(e_13, sym_VarDec_2))
              {
                f_13 = ATgetArgument(e_13, 0);
                g_13 = ATgetArgument(e_13, 1);
                t = not_null(f_13);
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
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Let_2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        t = not_null(p_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
            t_13 = t;
            m_13 :
            if(match_cons(t_13, sym_SDef_3))
              {
                u_13 = ATgetArgument(t_13, 0);
                v_13 = ATgetArgument(t_13, 1);
                w_13 = ATgetArgument(t_13, 2);
                t = not_null(u_13);
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
ATerm crush_3 (ATerm t, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm))
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
          f_14 :
          if(match_cons(l_14, sym__2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
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
      }
    }
    {
      t = not_null(i_14);
      t = foldr_3(t, y_100, z_100, a_101);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_96 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      ATerm o_7 = t;
      int p_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_96(t);
          LocalPopChoice(p_7);
        }
      else
        {
          t = o_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm q_7 = t;
      int r_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL;
          ATerm s_7;
          s_7 = t;
          {
            ATerm t_14 = NULL;
            t = j_96(t);
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          t = s_7;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, t_0);
              t = diff_1(t, l_96);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = k_96(t, r_0, u_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm v_0 (ATerm t)
              {
                t = union_1(t, eq_0);
                return(t);
              }
              t = crush_3(t, u_0, v_0, _id);
            }
          }
          LocalPopChoice(r_7);
        }
      else
        {
          t = q_7;
          {
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, w_0, x_0, u_14);
          }
        }
      return(t);
    }
    t = split_2(t, l_0, o_0);
    t = union_1(t, eq_0);
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
    d_15 = t;
    y_14 :
    if(match_cons(d_15, sym_Call_2))
      {
        e_15 = ATgetArgument(d_15, 0);
        g_15 = ATgetArgument(d_15, 1);
        z_14 :
        if(match_cons(e_15, sym_SVar_1))
          {
            f_15 = ATgetArgument(e_15, 0);
            {
              ATerm j_15 = NULL;
              ATerm k_15 = NULL;
              t = not_null(g_15);
              {
                t = length_0(t);
                {
                  k_15 = t;
                  if(((j_15 != NULL) && (j_15 != k_15)))
                    _fail(k_15);
                  else
                    j_15 = k_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(j_15)));
            }
          }
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
  ATerm z_0 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm a_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(d_8);
            }
          else
            {
              t = a_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
    l_15 = t;
    b_15 :
    if(match_cons(l_15, sym__2))
      {
        m_15 = ATgetArgument(l_15, 0);
        p_15 = ATgetArgument(l_15, 1);
        c_15 :
        if(match_cons(m_15, sym__2))
          {
            n_15 = ATgetArgument(m_15, 0);
            o_15 = ATgetArgument(m_15, 1);
            if(((n_15 != NULL) && (n_15 != p_15)))
              _fail(p_15);
            else
              n_15 = p_15;
          }
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
  t = free_vars2_4(t, y_0, z_0, sboundin_3, a_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
    t = not_null(b_16);
    {
      g_16 = t;
      {
        t = SSL_explode_term(not_null(g_16));
        {
          i_16 = t;
          x_15 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              k_16 = ATgetArgument(i_16, 1);
              y_15 :
              if(match_string(j_16, ""))
                {
                  z_15 :
                  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
                    {
                      l_16 = ATgetFirst((ATermList) k_16);
                      m_16 = (ATerm) ATgetNext((ATermList) k_16);
                      a_16 :
                      if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
                        {
                          n_16 = ATgetFirst((ATermList) m_16);
                          o_16 = (ATerm) ATgetNext((ATermList) m_16);
                          {
                            if(((d_16 != NULL) && (d_16 != l_16)))
                              _fail(l_16);
                            else
                              d_16 = l_16;
                            {
                              if(((f_16 != NULL) && (f_16 != n_16)))
                                _fail(n_16);
                              else
                                f_16 = n_16;
                              if(((e_16 != NULL) && (e_16 != o_16)))
                                _fail(o_16);
                              else
                                e_16 = o_16;
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
    t = not_null(f_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm v_16 = NULL;
      t = Fst_0(t);
      {
        v_16 = t;
        if(((u_16 != NULL) && (u_16 != v_16)))
          _fail(v_16);
        else
          u_16 = v_16;
      }
    }
    t = f_8;
    {
      ATerm x_16 = NULL;
      t = Snd_0(t);
      {
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_16), not_null(w_16));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  b_17 :
  if(match_cons(e_17, sym_Call_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      h_17 = ATgetArgument(e_17, 1);
      c_17 :
      if(match_cons(f_17, sym_SVar_1))
        {
          g_17 = ATgetArgument(f_17, 0);
          d_17 :
          if(((ATgetType(h_17) == AT_LIST) && ATisEmpty(h_17)))
            {
              t = not_null(g_17);
            }
          else
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  n_17 = t;
  l_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      m_17 :
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          r_17 = (ATerm) ATgetNext((ATermList) p_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(r_17));
        }
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  w_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      x_17 :
      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
        {
          c_18 = ATgetFirst((ATermList) b_18);
          f_18 = (ATerm) ATgetNext((ATermList) b_18);
          y_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              {
                ATerm h_18 = NULL;
                if(((a_18 != NULL) && (a_18 != d_18)))
                  _fail(d_18);
                else
                  a_18 = d_18;
                {
                  if(((h_18 != NULL) && (h_18 != e_18)))
                    _fail(e_18);
                  else
                    h_18 = e_18;
                  t = not_null(h_18);
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
  ATerm g_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = g_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_87 (ATerm), ATerm t_87 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = s_87(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = t_87(t);
            {
              s_18 = t;
              if(((q_18 != NULL) && (q_18 != s_18)))
                _fail(s_18);
              else
                q_18 = s_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm s_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = s_8;
        t = _all(t, w_18);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm g_19 = NULL;
        if(((g_19 != NULL) && (g_19 != d_19)))
          _fail(d_19);
        else
          g_19 = d_19;
      }
    }
  else
    {
      if(match_cons(b_19, sym__3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          {
            ATerm m_19 = NULL;
            ATerm n_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(d_19));
            {
              t = zip_1(t, _id);
              {
                n_19 = t;
                if(((m_19 != NULL) && (m_19 != n_19)))
                  _fail(n_19);
                else
                  m_19 = n_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(e_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t = subs_args_0(t);
  {
    t_19 = t;
    s_19 :
    if(match_cons(t_19, sym__2))
      {
        u_19 = ATgetArgument(t_19, 0);
        v_19 = ATgetArgument(t_19, 1);
        {
          t = not_null(v_19);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(u_19);
                return(t);
              }
              t = SubsVar_2(t, d_87, e_1);
              t = e_87(t);
              return(t);
            }
            t = alltd_1(t, d_1);
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
ATerm substitute_1 (ATerm t, ATerm f_87 (ATerm))
{
  t = substitute_2(t, f_87, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_VarDec_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL;
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm p_20 = NULL;
            t = m_74(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = n_74(t);
                  {
                    p_20 = t;
                    {
                      ATerm s_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_20), not_null(p_20)), not_null(l_20));
                      {
                        s_20 = t;
                        if(((r_20 != NULL) && (r_20 != s_20)))
                          _fail(s_20);
                        else
                          r_20 = s_20;
                      }
                      t = not_null(r_20);
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  m_21 = t;
  k_21 :
  if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
    {
      n_21 = ATgetFirst((ATermList) m_21);
      r_21 = (ATerm) ATgetNext((ATermList) m_21);
      l_21 :
      if(match_cons(n_21, sym_SDef_3))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          q_21 = ATgetArgument(n_21, 2);
          {
            ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,t_22 = NULL;
            ATerm e_9;
            e_9 = t;
            {
              ATerm z_21 = NULL;
              t = not_null(p_21);
              {
                ATerm f_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  z_21 = t;
                  {
                    if(((w_21 != NULL) && (w_21 != z_21)))
                      _fail(z_21);
                    else
                      w_21 = z_21;
                    {
                      t = not_null(w_21);
                      {
                        ATerm s_22 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
                          a_22 = t;
                          b_21 :
                          if(match_cons(a_22, sym_VarDec_2))
                            {
                              b_22 = ATgetArgument(a_22, 0);
                              c_22 = ATgetArgument(a_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          f_22 = t;
                          {
                            if(((x_21 != NULL) && (x_21 != f_22)))
                              _fail(f_22);
                            else
                              x_21 = f_22;
                            {
                              t = not_null(m_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
                                  g_22 = t;
                                  h_21 :
                                  if(match_cons(g_22, sym_SDef_3))
                                    {
                                      h_22 = ATgetArgument(g_22, 0);
                                      i_22 = ATgetArgument(g_22, 1);
                                      j_22 = ATgetArgument(g_22, 2);
                                      {
                                        ATerm m_22 = NULL;
                                        ATerm r_22 = NULL;
                                        t = not_null(i_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                            n_22 = t;
                                            f_21 :
                                            if(match_cons(n_22, sym_VarDec_2))
                                              {
                                                o_22 = ATgetArgument(n_22, 0);
                                                p_22 = ATgetArgument(n_22, 1);
                                                t = not_null(o_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            r_22 = t;
                                            if(((m_22 != NULL) && (m_22 != r_22)))
                                              _fail(r_22);
                                            else
                                              m_22 = r_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(m_22), not_null(x_21), not_null(j_22));
                                          t = substitute_2(t, IsSVar_0, _id);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, h_1);
                                {
                                  s_22 = t;
                                  if(((y_21 != NULL) && (y_21 != s_22)))
                                    _fail(s_22);
                                  else
                                    y_21 = s_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = e_9;
            {
              ATerm u_22 = NULL;
              t = not_null(y_21);
              {
                t = choices_0(t);
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_21), not_null(w_21), not_null(t_22));
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
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  f_23 :
  if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
    {
      i_23 = ATgetFirst((ATermList) h_23);
      j_23 = (ATerm) ATgetNext((ATermList) h_23);
      g_23 :
      if(((ATgetType(j_23) == AT_LIST) && ATisEmpty(j_23)))
        {
          t = not_null(i_23);
        }
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
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  q_23 = t;
  o_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      u_23 = ATgetArgument(q_23, 1);
      p_23 :
      if(match_cons(r_23, sym__2))
        {
          s_23 = ATgetArgument(r_23, 0);
          t_23 = ATgetArgument(r_23, 1);
          {
            ATerm y_23 = NULL;
            ATerm z_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(t_23));
            {
              t = Definitions_0(t);
              {
                z_23 = t;
                if(((y_23 != NULL) && (y_23 != z_23)))
                  _fail(z_23);
                else
                  y_23 = z_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), not_null(u_23));
          }
        }
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  u_24 = t;
  s_24 :
  if(match_cons(u_24, sym_ExplodeCong_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      t_24 = ATgetArgument(u_24, 1);
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        t = new_0(t);
        {
          c_25 = t;
          {
            if(((y_24 != NULL) && (y_24 != c_25)))
              _fail(c_25);
            else
              y_24 = c_25;
            {
              ATerm e_25 = NULL;
              t = new_0(t);
              {
                d_25 = t;
                {
                  if(((z_24 != NULL) && (z_24 != d_25)))
                    _fail(d_25);
                  else
                    z_24 = d_25;
                  {
                    ATerm f_25 = NULL;
                    t = new_0(t);
                    {
                      e_25 = t;
                      {
                        if(((a_25 != NULL) && (a_25 != e_25)))
                          _fail(e_25);
                        else
                          a_25 = e_25;
                        {
                          t = new_0(t);
                          {
                            f_25 = t;
                            if(((b_25 != NULL) && (b_25 != f_25)))
                              _fail(f_25);
                            else
                              b_25 = f_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)), not_null(z_24)), not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_h_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24)))))));
      }
    }
  else
    {
      if(match_cons(u_24, sym_Build_1))
        {
          v_24 = ATgetArgument(u_24, 0);
          {
            ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
            ATerm l_25 = NULL;
            ATerm p_25 = NULL;
            t = new_0(t);
            {
              l_25 = t;
              {
                if(((j_25 != NULL) && (j_25 != l_25)))
                  _fail(l_25);
                else
                  j_25 = l_25;
                {
                  t = not_null(v_24);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
                      m_25 = t;
                      l_24 :
                      if(match_cons(m_25, sym_Explode_2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          o_25 = ATgetArgument(m_25, 1);
                          {
                            if(((h_25 != NULL) && (h_25 != n_25)))
                              _fail(n_25);
                            else
                              h_25 = n_25;
                            {
                              if(((i_25 != NULL) && (i_25 != o_25)))
                                _fail(o_25);
                              else
                                i_25 = o_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, j_1);
                    {
                      p_25 = t;
                      if(((k_25 != NULL) && (k_25 != p_25)))
                        _fail(p_25);
                      else
                        k_25 = p_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25)))));
          }
        }
      else
        {
          if(match_cons(u_24, sym_Match_1))
            {
              v_24 = ATgetArgument(u_24, 0);
              {
                ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
                ATerm w_25 = NULL;
                ATerm x_25 = NULL;
                t = new_0(t);
                {
                  w_25 = t;
                  {
                    if(((t_25 != NULL) && (t_25 != w_25)))
                      _fail(w_25);
                    else
                      t_25 = w_25;
                    {
                      ATerm b_26 = NULL;
                      t = new_0(t);
                      {
                        x_25 = t;
                        {
                          if(((u_25 != NULL) && (u_25 != x_25)))
                            _fail(x_25);
                          else
                            u_25 = x_25;
                          {
                            t = not_null(v_24);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                                y_25 = t;
                                q_24 :
                                if(match_cons(y_25, sym_Explode_2))
                                  {
                                    z_25 = ATgetArgument(y_25, 0);
                                    a_26 = ATgetArgument(y_25, 1);
                                    {
                                      if(((r_25 != NULL) && (r_25 != z_25)))
                                        _fail(z_25);
                                      else
                                        r_25 = z_25;
                                      {
                                        if(((s_25 != NULL) && (s_25 != a_26)))
                                          _fail(a_26);
                                        else
                                          s_25 = a_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, k_1);
                              {
                                b_26 = t;
                                if(((v_25 != NULL) && (v_25 != b_26)))
                                  _fail(b_26);
                                else
                                  v_25 = b_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25)))))));
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
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Match_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
            ATerm n_27 = NULL;
            ATerm r_27 = NULL;
            t = new_0(t);
            {
              n_27 = t;
              {
                if(((l_27 != NULL) && (l_27 != n_27)))
                  _fail(n_27);
                else
                  l_27 = n_27;
                {
                  t = not_null(h_27);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
                      o_27 = t;
                      v_26 :
                      if(match_cons(o_27, sym_Anno_2))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          q_27 = ATgetArgument(o_27, 1);
                          {
                            if(((j_27 != NULL) && (j_27 != p_27)))
                              _fail(p_27);
                            else
                              j_27 = p_27;
                            {
                              if(((k_27 != NULL) && (k_27 != q_27)))
                                _fail(q_27);
                              else
                                k_27 = q_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), not_null(j_27));
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
                      r_27 = t;
                      if(((m_27 != NULL) && (m_27 != r_27)))
                        _fail(r_27);
                      else
                        m_27 = r_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_27))))));
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
                  ATerm w_27 = NULL;
                  ATerm z_27 = NULL;
                  t = new_0(t);
                  {
                    w_27 = t;
                    {
                      if(((u_27 != NULL) && (u_27 != w_27)))
                        _fail(w_27);
                      else
                        u_27 = w_27;
                      {
                        t = not_null(h_27);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm x_27 = NULL,y_27 = NULL;
                            x_27 = t;
                            z_26 :
                            if(match_cons(x_27, sym_RootApp_1))
                              {
                                y_27 = ATgetArgument(x_27, 0);
                                {
                                  if(((t_27 != NULL) && (t_27 != y_27)))
                                    _fail(y_27);
                                  else
                                    t_27 = y_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27));
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
                            z_27 = t;
                            if(((v_27 != NULL) && (v_27 != z_27)))
                              _fail(z_27);
                            else
                              v_27 = z_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(t_27))));
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  {
                    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
                    ATerm f_28 = NULL;
                    ATerm j_28 = NULL;
                    t = new_0(t);
                    {
                      f_28 = t;
                      {
                        if(((d_28 != NULL) && (d_28 != f_28)))
                          _fail(f_28);
                        else
                          d_28 = f_28;
                        {
                          t = not_null(h_27);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                              g_28 = t;
                              d_27 :
                              if(match_cons(g_28, sym_App_2))
                                {
                                  h_28 = ATgetArgument(g_28, 0);
                                  i_28 = ATgetArgument(g_28, 1);
                                  {
                                    if(((c_28 != NULL) && (c_28 != h_28)))
                                      _fail(h_28);
                                    else
                                      c_28 = h_28;
                                    {
                                      if(((b_28 != NULL) && (b_28 != i_28)))
                                        _fail(i_28);
                                      else
                                        b_28 = i_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28));
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
                              j_28 = t;
                              if(((e_28 != NULL) && (e_28 != j_28)))
                                _fail(j_28);
                              else
                                e_28 = j_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_28)), not_null(c_28)))));
                  }
                }
            }
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
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  q_32 = t;
  o_32 :
  if(match_cons(q_32, sym_Match_1))
    {
      r_32 = ATgetArgument(q_32, 0);
      p_32 :
      if(match_cons(r_32, sym_RootApp_1))
        {
          s_32 = ATgetArgument(r_32, 0);
          t = not_null(s_32);
        }
      else
        {
          if(match_cons(r_32, sym_App_2))
            {
              s_32 = ATgetArgument(r_32, 0);
              t_32 = ATgetArgument(r_32, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(s_32), not_null(t_32));
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
  ATerm c_34 = NULL,y_36 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym_Match_1))
    {
      y_36 = ATgetArgument(c_34, 0);
      {
        ATerm a_37 = NULL,b_37 = NULL;
        ATerm f_37 = NULL;
        t = not_null(y_36);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
            c_37 = t;
            y_33 :
            if(match_cons(c_37, sym_RootApp_1))
              {
                d_37 = ATgetArgument(c_37, 0);
                z_33 :
                if(match_cons(d_37, sym_Match_1))
                  {
                    e_37 = ATgetArgument(d_37, 0);
                    {
                      if(((a_37 != NULL) && (a_37 != e_37)))
                        _fail(e_37);
                      else
                        a_37 = e_37;
                      t = not_null(a_37);
                    }
                  }
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
          t = pat_td_1(t, o_1);
          {
            f_37 = t;
            if(((b_37 != NULL) && (b_37 != f_37)))
              _fail(f_37);
            else
              b_37 = f_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(b_37));
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
  ATerm t_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = t_9;
      {
        ATerm z_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(c_10);
          }
        else
          {
            t = z_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_Build_1))
    {
      f_38 = ATgetArgument(e_38, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
            ATerm l_38 = NULL;
            ATerm p_38 = NULL;
            t = new_0(t);
            {
              l_38 = t;
              {
                if(((j_38 != NULL) && (j_38 != l_38)))
                  _fail(l_38);
                else
                  j_38 = l_38;
                {
                  t = not_null(f_38);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
                      m_38 = t;
                      o_37 :
                      if(match_cons(m_38, sym_Anno_2))
                        {
                          n_38 = ATgetArgument(m_38, 0);
                          o_38 = ATgetArgument(m_38, 1);
                          {
                            if(((h_38 != NULL) && (h_38 != n_38)))
                              _fail(n_38);
                            else
                              h_38 = n_38;
                            {
                              if(((i_38 != NULL) && (i_38 != o_38)))
                                _fail(o_38);
                              else
                                i_38 = o_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38));
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
                      p_38 = t;
                      if(((k_38 != NULL) && (k_38 != p_38)))
                        _fail(p_38);
                      else
                        k_38 = p_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_38)), not_null(h_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_38))));
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
                  ATerm a_39 = NULL;
                  ATerm d_39 = NULL;
                  t = new_0(t);
                  {
                    a_39 = t;
                    {
                      if(((y_38 != NULL) && (y_38 != a_39)))
                        _fail(a_39);
                      else
                        y_38 = a_39;
                      {
                        t = not_null(f_38);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm b_39 = NULL,c_39 = NULL;
                            b_39 = t;
                            s_37 :
                            if(match_cons(b_39, sym_RootApp_1))
                              {
                                c_39 = ATgetArgument(b_39, 0);
                                {
                                  if(((x_38 != NULL) && (x_38 != c_39)))
                                    _fail(c_39);
                                  else
                                    x_38 = c_39;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_38));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, q_1);
                          {
                            d_39 = t;
                            if(((z_38 != NULL) && (z_38 != d_39)))
                              _fail(d_39);
                            else
                              z_38 = d_39;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_38))));
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
                    ATerm j_39 = NULL;
                    ATerm n_39 = NULL;
                    t = new_0(t);
                    {
                      j_39 = t;
                      {
                        if(((h_39 != NULL) && (h_39 != j_39)))
                          _fail(j_39);
                        else
                          h_39 = j_39;
                        {
                          t = not_null(f_38);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
                              k_39 = t;
                              w_37 :
                              if(match_cons(k_39, sym_App_2))
                                {
                                  l_39 = ATgetArgument(k_39, 0);
                                  m_39 = ATgetArgument(k_39, 1);
                                  {
                                    if(((f_39 != NULL) && (f_39 != l_39)))
                                      _fail(l_39);
                                    else
                                      f_39 = l_39;
                                    {
                                      if(((g_39 != NULL) && (g_39 != m_39)))
                                        _fail(m_39);
                                      else
                                        g_39 = m_39;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_39));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, r_1);
                            {
                              n_39 = t;
                              if(((i_39 != NULL) && (i_39 != n_39)))
                                _fail(n_39);
                              else
                                i_39 = n_39;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_39), not_null(g_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_39)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_39))));
                  }
                }
            }
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  c_40 :
  if(match_cons(e_40, sym_Build_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      d_40 :
      if(match_cons(f_40, sym_RootApp_1))
        {
          g_40 = ATgetArgument(f_40, 0);
          t = not_null(g_40);
        }
      else
        {
          if(match_cons(f_40, sym_App_2))
            {
              g_40 = ATgetArgument(f_40, 0);
              h_40 = ATgetArgument(f_40, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_40)), not_null(g_40));
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
ATerm As_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym_As_2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm c_41 = NULL,e_41 = NULL;
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(w_40));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
        {
          t = not_null(x_40);
          {
            ATerm r_41 = NULL;
            t = p_76(t);
            {
              e_41 = t;
              {
                t = not_null(y_40);
                {
                  ATerm t_41 = NULL;
                  t = q_76(t);
                  {
                    r_41 = t;
                    {
                      ATerm u_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(e_41), not_null(r_41)), not_null(c_41));
                      {
                        u_41 = t;
                        if(((t_41 != NULL) && (t_41 != u_41)))
                          _fail(u_41);
                        else
                          t_41 = u_41;
                      }
                      t = not_null(t_41);
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
ATerm Prim_2 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_Prim_2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      {
        ATerm y_42 = NULL,f_43 = NULL;
        ATerm z_42 = NULL;
        t = SSLgetAnnotations(not_null(s_42));
        {
          z_42 = t;
          if(((y_42 != NULL) && (y_42 != z_42)))
            _fail(z_42);
          else
            y_42 = z_42;
        }
        {
          t = not_null(t_42);
          {
            ATerm h_43 = NULL;
            t = v_72(t);
            {
              f_43 = t;
              {
                t = not_null(u_42);
                {
                  ATerm j_43 = NULL;
                  t = w_72(t);
                  {
                    h_43 = t;
                    {
                      ATerm k_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_43), not_null(h_43)), not_null(y_42));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Explode_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      {
        ATerm e_44 = NULL,g_44 = NULL;
        ATerm f_44 = NULL;
        t = SSLgetAnnotations(not_null(y_43));
        {
          f_44 = t;
          if(((e_44 != NULL) && (e_44 != f_44)))
            _fail(f_44);
          else
            e_44 = f_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm i_44 = NULL;
            t = l_76(t);
            {
              g_44 = t;
              {
                t = not_null(a_44);
                {
                  ATerm k_44 = NULL;
                  t = m_76(t);
                  {
                    i_44 = t;
                    {
                      ATerm l_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(g_44), not_null(i_44)), not_null(e_44));
                      {
                        l_44 = t;
                        if(((k_44 != NULL) && (k_44 != l_44)))
                          _fail(l_44);
                        else
                          k_44 = l_44;
                      }
                      t = not_null(k_44);
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
ATerm Op_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_Op_2))
    {
      y_44 = ATgetArgument(x_44, 0);
      z_44 = ATgetArgument(x_44, 1);
      {
        ATerm d_45 = NULL,f_45 = NULL;
        ATerm e_45 = NULL;
        t = SSLgetAnnotations(not_null(x_44));
        {
          e_45 = t;
          if(((d_45 != NULL) && (d_45 != e_45)))
            _fail(e_45);
          else
            d_45 = e_45;
        }
        {
          t = not_null(y_44);
          {
            ATerm l_45 = NULL;
            t = z_74(t);
            {
              f_45 = t;
              {
                t = not_null(z_44);
                {
                  ATerm n_45 = NULL;
                  t = a_75(t);
                  {
                    l_45 = t;
                    {
                      ATerm o_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(f_45), not_null(l_45)), not_null(d_45));
                      {
                        o_45 = t;
                        if(((n_45 != NULL) && (n_45 != o_45)))
                          _fail(o_45);
                        else
                          n_45 = o_45;
                      }
                      t = not_null(n_45);
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
ATerm pat_td_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_83(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, n_83);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, n_83);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm t_10 = t;
                    int u_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, n_83);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(u_10);
                      }
                    else
                      {
                        t = t_10;
                        {
                          ATerm v_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_83);
                                  return(t);
                                }
                                t = fetch_1(t, x_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, w_1);
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = v_10;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_83);
                                  return(t);
                                }
                                t = As_2(t, _id, y_1);
                              }
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
  ATerm n_46 = NULL,o_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym_Build_1))
    {
      o_46 = ATgetArgument(n_46, 0);
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46 = NULL,r_46 = NULL;
            ATerm z_46 = NULL;
            t = not_null(o_46);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
                s_46 = t;
                f_46 :
                if(match_cons(s_46, sym_RootApp_1))
                  {
                    t_46 = ATgetArgument(s_46, 0);
                    g_46 :
                    if(match_cons(t_46, sym_Build_1))
                      {
                        u_46 = ATgetArgument(t_46, 0);
                        {
                          if(((q_46 != NULL) && (q_46 != u_46)))
                            _fail(u_46);
                          else
                            q_46 = u_46;
                          t = not_null(q_46);
                        }
                      }
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
              t = pat_td_1(t, z_1);
              {
                z_46 = t;
                if(((r_46 != NULL) && (r_46 != z_46)))
                  _fail(z_46);
                else
                  r_46 = z_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_46));
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            {
              ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
              ATerm i_47 = NULL;
              t = not_null(o_46);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
                  e_47 = t;
                  j_46 :
                  if(match_cons(e_47, sym_App_2))
                    {
                      f_47 = ATgetArgument(e_47, 0);
                      h_47 = ATgetArgument(e_47, 1);
                      k_46 :
                      if(match_cons(f_47, sym_Build_1))
                        {
                          g_47 = ATgetArgument(f_47, 0);
                          {
                            if(((c_47 != NULL) && (c_47 != g_47)))
                              _fail(g_47);
                            else
                              c_47 = g_47;
                            {
                              if(((b_47 != NULL) && (b_47 != h_47)))
                                _fail(h_47);
                              else
                                b_47 = h_47;
                              t = not_null(c_47);
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
                t = pat_td_1(t, a_2);
                {
                  i_47 = t;
                  if(((d_47 != NULL) && (d_47 != i_47)))
                    _fail(i_47);
                  else
                    d_47 = i_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_47));
            }
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
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  c_48 :
  if(match_cons(j_48, sym_Lets_2))
    {
      k_48 = ATgetArgument(j_48, 0);
      l_48 = ATgetArgument(j_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_48), not_null(l_48));
    }
  else
    {
      if(match_cons(j_48, sym_LChoices_1))
        {
          k_48 = ATgetArgument(j_48, 0);
          d_48 :
          if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
            {
              g_48 = ATgetFirst((ATermList) k_48);
              h_48 = (ATerm) ATgetNext((ATermList) k_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_48)));
            }
          else
            {
              if(((ATgetType(k_48) == AT_LIST) && ATisEmpty(k_48)))
                {
                  t = term_e_8;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(j_48, sym_Choices_1))
            {
              k_48 = ATgetArgument(j_48, 0);
              e_48 :
              if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
                {
                  g_48 = ATgetFirst((ATermList) k_48);
                  h_48 = (ATerm) ATgetNext((ATermList) k_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_48)));
                }
              else
                {
                  if(((ATgetType(k_48) == AT_LIST) && ATisEmpty(k_48)))
                    {
                      t = term_e_8;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(j_48, sym_Seqs_1))
                {
                  k_48 = ATgetArgument(j_48, 0);
                  f_48 :
                  if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
                    {
                      g_48 = ATgetFirst((ATermList) k_48);
                      h_48 = (ATerm) ATgetNext((ATermList) k_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_48)));
                    }
                  else
                    {
                      if(((ATgetType(k_48) == AT_LIST) && ATisEmpty(k_48)))
                        {
                          t = term_k_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(j_48, sym_DefaultVarDec_1))
                    {
                      k_48 = ATgetArgument(j_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_11), term_n_11));
                    }
                  else
                    {
                      if(match_cons(j_48, sym_InfixApp_3))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          l_48 = ATgetArgument(j_48, 1);
                          i_48 = ATgetArgument(j_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_48)), not_null(k_48))));
                        }
                      else
                        {
                          if(match_cons(j_48, sym_BAM_3))
                            {
                              k_48 = ATgetArgument(j_48, 0);
                              l_48 = ATgetArgument(j_48, 1);
                              i_48 = ATgetArgument(j_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(i_48))), not_null(k_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_48))));
                            }
                          else
                            {
                              if(match_cons(j_48, sym_AM_2))
                                {
                                  k_48 = ATgetArgument(j_48, 0);
                                  l_48 = ATgetArgument(j_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_48)));
                                }
                              else
                                {
                                  if(match_cons(j_48, sym_MA_2))
                                    {
                                      k_48 = ATgetArgument(j_48, 0);
                                      l_48 = ATgetArgument(j_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_48)), not_null(l_48));
                                    }
                                  else
                                    {
                                      if(match_cons(j_48, sym_BA_2))
                                        {
                                          k_48 = ATgetArgument(j_48, 0);
                                          l_48 = ATgetArgument(j_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_48)), not_null(k_48));
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
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  z_49 = t;
  w_49 :
  if(match_cons(z_49, sym__2))
    {
      a_50 = ATgetArgument(z_49, 0);
      d_50 = ATgetArgument(z_49, 1);
      x_49 :
      if(match_cons(a_50, sym__2))
        {
          b_50 = ATgetArgument(a_50, 0);
          c_50 = ATgetArgument(a_50, 1);
          y_49 :
          if(match_cons(d_50, sym__2))
            {
              e_50 = ATgetArgument(d_50, 0);
              f_50 = ATgetArgument(d_50, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_50)), not_null(b_50)), (ATerm) ATinsert(CheckATermList(not_null(f_50)), not_null(c_50)));
            }
          else
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
    {
      o_50 = ATgetFirst((ATermList) n_50);
      p_50 = (ATerm) ATgetNext((ATermList) n_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_50), not_null(p_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  u_50 :
  if(((ATgetType(v_50) == AT_LIST) && ATisEmpty(v_50)))
    {
      t = term_o_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm w_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, w_92);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  ATerm h_51 (ATerm t)
  {
    ATerm e_51 = NULL;
    ATerm f_51 = NULL;
    t = not_null(b_51);
    {
      ATerm p_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_11;
        }
      {
        t = new_0(t);
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(e_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))));
    return(t);
  }
  ATerm i_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_51))));
    return(t);
  }
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Var_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      {
        ATerm q_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_51(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = q_11;
            t = i_51(t);
          }
      }
    }
  else
    {
      t = h_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm t_51 = NULL,u_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym_Var_1))
    {
      u_51 = ATgetArgument(t_51, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_51 = NULL,z_51 = NULL;
            ATerm y_51 = NULL;
            t = SSLgetAnnotations(not_null(t_51));
            {
              y_51 = t;
              if(((x_51 != NULL) && (x_51 != y_51)))
                _fail(y_51);
              else
                x_51 = y_51;
            }
            {
              t = not_null(u_51);
              {
                ATerm b_52 = NULL;
                t = q_0(t);
                {
                  z_51 = t;
                  {
                    ATerm c_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_51)), not_null(x_51));
                    {
                      c_52 = t;
                      if(((b_52 != NULL) && (b_52 != c_52)))
                        _fail(c_52);
                      else
                        b_52 = c_52;
                    }
                    t = not_null(b_52);
                  }
                }
              }
            }
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm f_52 = NULL,h_52 = NULL;
              ATerm g_52 = NULL;
              t = SSLgetAnnotations(not_null(t_51));
              {
                g_52 = t;
                if(((f_52 != NULL) && (f_52 != g_52)))
                  _fail(g_52);
                else
                  f_52 = g_52;
              }
              {
                t = not_null(u_51);
                {
                  ATerm j_52 = NULL;
                  t = q_0(t);
                  {
                    h_52 = t;
                    {
                      ATerm k_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_52)), not_null(f_52));
                      {
                        k_52 = t;
                        if(((j_52 != NULL) && (j_52 != k_52)))
                          _fail(k_52);
                        else
                          j_52 = k_52;
                      }
                      t = not_null(j_52);
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
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Prim_2))
    {
      z_52 = ATgetArgument(y_52, 0);
      a_53 = ATgetArgument(y_52, 1);
      {
        ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
        ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,m_53 = NULL,n_53 = NULL;
        t = not_null(a_53);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm b_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_12;
              }
            return(t);
          }
          t = fetch_1(t, b_2);
          {
            t = not_null(a_53);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm c_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, c_2);
                {
                  g_53 = t;
                  v_52 :
                  if(match_cons(g_53, sym__2))
                    {
                      h_53 = ATgetArgument(g_53, 0);
                      i_53 = ATgetArgument(g_53, 1);
                      w_52 :
                      if(match_cons(i_53, sym__2))
                        {
                          m_53 = ATgetArgument(i_53, 0);
                          n_53 = ATgetArgument(i_53, 1);
                          {
                            if(((d_53 != NULL) && (d_53 != h_53)))
                              _fail(h_53);
                            else
                              d_53 = h_53;
                            {
                              if(((e_53 != NULL) && (e_53 != m_53)))
                                _fail(m_53);
                              else
                                e_53 = m_53;
                              if(((f_53 != NULL) && (f_53 != n_53)))
                                _fail(n_53);
                              else
                                f_53 = n_53;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(z_52), not_null(f_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_98 (ATerm))
{
  ATerm q_53 (ATerm t)
  {
    ATerm d_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_98(t);
        t = q_53(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = d_12;
        {
        }
      }
    return(t);
  }
  t = q_53(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_Wld_0))
    {
      ATerm z_53 = NULL,f_54 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm a_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          a_54 = t;
          if(((z_53 != NULL) && (z_53 != a_54)))
            _fail(a_54);
          else
            z_53 = a_54;
        }
      }
      t = h_12;
      {
        ATerm g_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(z_53));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
        t = not_null(f_54);
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
  ATerm i_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_76 (ATerm), ATerm g_76 (ATerm))
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  w_54 :
  if(match_cons(x_54, sym_App_2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      {
        ATerm d_55 = NULL,m_55 = NULL;
        ATerm l_55 = NULL;
        t = SSLgetAnnotations(not_null(x_54));
        {
          l_55 = t;
          if(((d_55 != NULL) && (d_55 != l_55)))
            _fail(l_55);
          else
            d_55 = l_55;
        }
        {
          t = not_null(y_54);
          {
            ATerm o_55 = NULL;
            t = f_76(t);
            {
              m_55 = t;
              {
                t = not_null(z_54);
                {
                  ATerm q_55 = NULL;
                  t = g_76(t);
                  {
                    o_55 = t;
                    {
                      ATerm r_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_55), not_null(o_55)), not_null(d_55));
                      {
                        r_55 = t;
                        if(((q_55 != NULL) && (q_55 != r_55)))
                          _fail(r_55);
                        else
                          q_55 = r_55;
                      }
                      t = not_null(q_55);
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
ATerm Con_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym_Con_3))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      h_56 = ATgetArgument(e_56, 2);
      {
        ATerm m_56 = NULL,o_56 = NULL;
        ATerm n_56 = NULL;
        t = SSLgetAnnotations(not_null(e_56));
        {
          n_56 = t;
          if(((m_56 != NULL) && (m_56 != n_56)))
            _fail(n_56);
          else
            m_56 = n_56;
        }
        {
          t = not_null(f_56);
          {
            ATerm q_56 = NULL;
            t = c_76(t);
            {
              o_56 = t;
              {
                t = not_null(g_56);
                {
                  ATerm s_56 = NULL;
                  t = d_76(t);
                  {
                    q_56 = t;
                    {
                      t = not_null(h_56);
                      {
                        ATerm u_56 = NULL;
                        t = e_76(t);
                        {
                          s_56 = t;
                          {
                            ATerm v_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(o_56), not_null(q_56), not_null(s_56)), not_null(m_56));
                            {
                              v_56 = t;
                              if(((u_56 != NULL) && (u_56 != v_56)))
                                _fail(v_56);
                              else
                                u_56 = v_56;
                            }
                            t = not_null(u_56);
                          }
                        }
                      }
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
  ATerm l_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, e_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL;
  g_57 = t;
  e_57 :
  if(match_cons(g_57, sym_SRule_1))
    {
      h_57 = ATgetArgument(g_57, 0);
      f_57 :
      if(match_cons(h_57, sym_StratRule_3))
        {
          i_57 = ATgetArgument(h_57, 0);
          k_57 = ATgetArgument(h_57, 1);
          l_57 = ATgetArgument(h_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_57))), not_null(i_57)));
        }
      else
        {
          if(match_cons(h_57, sym_Rule_3))
            {
              i_57 = ATgetArgument(h_57, 0);
              k_57 = ATgetArgument(h_57, 1);
              l_57 = ATgetArgument(h_57, 2);
              {
                t = not_null(i_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(k_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(k_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_57))));
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
ATerm Scope_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  d_58 :
  if(match_cons(e_58, sym_Scope_2))
    {
      f_58 = ATgetArgument(e_58, 0);
      g_58 = ATgetArgument(e_58, 1);
      {
        ATerm k_58 = NULL,m_58 = NULL;
        ATerm l_58 = NULL;
        t = SSLgetAnnotations(not_null(e_58));
        {
          l_58 = t;
          if(((k_58 != NULL) && (k_58 != l_58)))
            _fail(l_58);
          else
            k_58 = l_58;
        }
        {
          t = not_null(f_58);
          {
            ATerm q_58 = NULL;
            t = d_73(t);
            {
              m_58 = t;
              {
                t = not_null(g_58);
                {
                  ATerm s_58 = NULL;
                  t = e_73(t);
                  {
                    q_58 = t;
                    {
                      ATerm t_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(m_58), not_null(q_58)), not_null(k_58));
                      {
                        t_58 = t;
                        if(((s_58 != NULL) && (s_58 != t_58)))
                          _fail(t_58);
                        else
                          s_58 = t_58;
                      }
                      t = not_null(s_58);
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
ATerm oncetd_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm a_59 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_89(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = _one(t, a_59);
      }
    return(t);
  }
  t = a_59(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm r_59 = NULL,x_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  r_59 = t;
  p_59 :
  if(match_cons(r_59, sym_SRule_1))
    {
      x_59 = ATgetArgument(r_59, 0);
      q_59 :
      if(match_cons(x_59, sym_Rule_3))
        {
          z_59 = ATgetArgument(x_59, 0);
          a_60 = ATgetArgument(x_59, 1);
          b_60 = ATgetArgument(x_59, 2);
          {
            ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
            ATerm n_60 = NULL;
            ATerm t_60 = NULL;
            t = new_0(t);
            {
              n_60 = t;
              {
                if(((k_60 != NULL) && (k_60 != n_60)))
                  _fail(n_60);
                else
                  k_60 = n_60;
                {
                  t = not_null(z_59);
                  {
                    ATerm b_61 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
                      o_60 = t;
                      e_59 :
                      if(match_cons(o_60, sym_Con_3))
                        {
                          p_60 = ATgetArgument(o_60, 0);
                          r_60 = ATgetArgument(o_60, 1);
                          s_60 = ATgetArgument(o_60, 2);
                          f_59 :
                          if(match_cons(p_60, sym_Var_1))
                            {
                              q_60 = ATgetArgument(p_60, 0);
                              {
                                if(((j_60 != NULL) && (j_60 != q_60)))
                                  _fail(q_60);
                                else
                                  j_60 = q_60;
                                {
                                  if(((h_60 != NULL) && (h_60 != r_60)))
                                    _fail(r_60);
                                  else
                                    h_60 = r_60;
                                  {
                                    if(((f_60 != NULL) && (f_60 != s_60)))
                                      _fail(s_60);
                                    else
                                      f_60 = s_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_60));
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
                    t = oncetd_1(t, f_2);
                    {
                      t_60 = t;
                      {
                        if(((l_60 != NULL) && (l_60 != t_60)))
                          _fail(t_60);
                        else
                          l_60 = t_60;
                        {
                          t = not_null(a_60);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
                              u_60 = t;
                              i_59 :
                              if(match_cons(u_60, sym_Con_3))
                                {
                                  v_60 = ATgetArgument(u_60, 0);
                                  x_60 = ATgetArgument(u_60, 1);
                                  y_60 = ATgetArgument(u_60, 2);
                                  j_59 :
                                  if(match_cons(v_60, sym_Var_1))
                                    {
                                      w_60 = ATgetArgument(v_60, 0);
                                      k_59 :
                                      if(match_cons(y_60, sym_Call_2))
                                        {
                                          z_60 = ATgetArgument(y_60, 0);
                                          a_61 = ATgetArgument(y_60, 1);
                                          l_59 :
                                          if(((ATgetType(a_61) == AT_LIST) && ATisEmpty(a_61)))
                                            {
                                              {
                                                if(((j_60 != NULL) && (j_60 != w_60)))
                                                  _fail(w_60);
                                                else
                                                  j_60 = w_60;
                                                {
                                                  if(((i_60 != NULL) && (i_60 != x_60)))
                                                    _fail(x_60);
                                                  else
                                                    i_60 = x_60;
                                                  {
                                                    if(((g_60 != NULL) && (g_60 != z_60)))
                                                      _fail(z_60);
                                                    else
                                                      g_60 = z_60;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_60));
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
                            t = oncetd_1(t, g_2);
                            {
                              b_61 = t;
                              if(((m_60 != NULL) && (m_60 != b_61)))
                                _fail(b_61);
                              else
                                m_60 = b_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_60), not_null(m_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_60), not_null(i_60), term_k_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_60)))))));
          }
        }
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
  ATerm u_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(d_13);
        }
      else
        {
          t = c_13;
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(b_13);
    }
  else
    {
      t = u_12;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_87 (ATerm))
{
  t = u_87(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, u_87);
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
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
        }
      }
    {
      ATerm j_2 (ATerm t)
      {
        ATerm l_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(r_13);
          }
        else
          {
            t = l_13;
            {
              ATerm s_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = s_13;
                  {
                    ATerm y_13 = t;
                    int z_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(z_13);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(b_14);
                            }
                          else
                            {
                              t = a_14;
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
  ATerm n_61 = NULL;
  n_61 = t;
  m_61 :
  if(match_cons(n_61, sym__0))
    {
      ATerm p_61 = NULL,r_61 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm q_61 = NULL;
        t = SSLgetAnnotations(not_null(n_61));
        {
          q_61 = t;
          if(((p_61 != NULL) && (p_61 != q_61)))
            _fail(q_61);
          else
            p_61 = q_61;
        }
      }
      t = c_14;
      {
        ATerm s_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(p_61));
        {
          s_61 = t;
          if(((r_61 != NULL) && (r_61 != s_61)))
            _fail(s_61);
          else
            r_61 = s_61;
        }
        t = not_null(r_61);
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
  ATerm e_62 = NULL;
  ATerm g_62 = NULL,h_62 = NULL,p_62 = NULL,r_62 = NULL;
  e_62 = t;
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm i_62 = NULL;
      ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
      t = not_null(e_62);
      {
        i_62 = t;
        {
          t = SSL_explode_term(not_null(i_62));
          {
            k_62 = t;
            z_61 :
            if(match_cons(k_62, sym__2))
              {
                l_62 = ATgetArgument(k_62, 0);
                m_62 = ATgetArgument(k_62, 1);
                a_62 :
                if(match_string(l_62, ""))
                  {
                    b_62 :
                    if(((ATgetType(m_62) == AT_LIST) && !(ATisEmpty(m_62))))
                      {
                        n_62 = ATgetFirst((ATermList) m_62);
                        o_62 = (ATerm) ATgetNext((ATermList) m_62);
                        {
                          if(((g_62 != NULL) && (g_62 != n_62)))
                            _fail(n_62);
                          else
                            g_62 = n_62;
                          if(((h_62 != NULL) && (h_62 != o_62)))
                            _fail(o_62);
                          else
                            h_62 = o_62;
                        }
                      }
                    else
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
      ATerm e_14;
      e_14 = t;
      {
        ATerm q_62 = NULL;
        t = term_j_9;
        {
          q_62 = t;
          if(((p_62 != NULL) && (p_62 != q_62)))
            _fail(q_62);
          else
            p_62 = q_62;
        }
      }
      t = e_14;
      {
        t = SSL_mkterm(not_null(p_62), not_null(h_62));
        {
          r_62 = t;
          t = not_null(r_62);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_63 = NULL;
  ATerm p_63 = NULL,q_63 = NULL;
  n_63 = t;
  {
    ATerm r_63 = NULL;
    ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL;
    t = not_null(n_63);
    {
      r_63 = t;
      {
        t = SSL_explode_term(not_null(r_63));
        {
          d_64 = t;
          i_63 :
          if(match_cons(d_64, sym__2))
            {
              e_64 = ATgetArgument(d_64, 0);
              f_64 = ATgetArgument(d_64, 1);
              l_63 :
              if(match_string(e_64, ""))
                {
                  m_63 :
                  if(((ATgetType(f_64) == AT_LIST) && !(ATisEmpty(f_64))))
                    {
                      g_64 = ATgetFirst((ATermList) f_64);
                      h_64 = (ATerm) ATgetNext((ATermList) f_64);
                      {
                        if(((q_63 != NULL) && (q_63 != g_64)))
                          _fail(g_64);
                        else
                          q_63 = g_64;
                        if(((p_63 != NULL) && (p_63 != h_64)))
                          _fail(h_64);
                        else
                          p_63 = h_64;
                      }
                    }
                  else
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
    t = not_null(q_63);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm c_92 (ATerm))
{
  ATerm y_64 = NULL,a_65 = NULL,c_65 = NULL;
  ATerm e_65 (ATerm t)
  {
    ATerm h_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_64 = NULL,w_64 = NULL;
        ATerm o_14;
        o_14 = t;
        {
          ATerm v_64 = NULL;
          t = map_1(t, Fst_0);
          {
            t = c_92(t);
            {
              v_64 = t;
              if(((u_64 != NULL) && (u_64 != v_64)))
                _fail(v_64);
              else
                u_64 = v_64;
            }
          }
        }
        t = o_14;
        {
          ATerm x_64 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = e_65(t);
            {
              x_64 = t;
              if(((w_64 != NULL) && (w_64 != x_64)))
                _fail(x_64);
              else
                w_64 = x_64;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(w_64)), not_null(u_64));
        }
        LocalPopChoice(k_14);
      }
    else
      {
        t = h_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = e_65(t);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm z_64 = NULL;
      z_64 = t;
      if(((y_64 != NULL) && (y_64 != z_64)))
        _fail(z_64);
      else
        y_64 = z_64;
    }
    t = p_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm b_65 = NULL;
        t = term_j_9;
        {
          b_65 = t;
          if(((a_65 != NULL) && (a_65 != b_65)))
            _fail(b_65);
          else
            a_65 = b_65;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(a_65), not_null(y_64));
        {
          c_65 = t;
          t = not_null(c_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm p_65 = NULL;
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  p_65 = t;
  {
    ATerm u_65 = NULL;
    ATerm v_65 = NULL;
    t = new_0(t);
    {
      u_65 = t;
      {
        if(((r_65 != NULL) && (r_65 != u_65)))
          _fail(u_65);
        else
          r_65 = u_65;
        {
          ATerm w_65 = NULL;
          t = new_0(t);
          {
            v_65 = t;
            {
              if(((s_65 != NULL) && (s_65 != v_65)))
                _fail(v_65);
              else
                s_65 = v_65;
              {
                t = new_0(t);
                {
                  w_65 = t;
                  if(((t_65 != NULL) && (t_65 != w_65)))
                    _fail(w_65);
                  else
                    t_65 = w_65;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_65)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_65)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_65)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_65))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(r_65), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_11), term_n_11)), not_null(s_65), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_65)), not_null(t_65), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_65)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
  d_66 = t;
  c_66 :
  if(match_cons(d_66, sym__2))
    {
      e_66 = ATgetArgument(d_66, 0);
      f_66 = ATgetArgument(d_66, 1);
      {
        ATerm r_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(e_66), not_null(f_66));
            LocalPopChoice(v_14);
          }
        else
          {
            t = r_14;
            t = SSL_subtr(not_null(e_66), not_null(f_66));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
    x_66 = t;
    n_66 :
    if(match_cons(x_66, sym__2))
      {
        y_66 = ATgetArgument(x_66, 0);
        z_66 = ATgetArgument(x_66, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(y_66), not_null(z_66), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
    c_67 = t;
    p_66 :
    if(match_cons(c_67, sym__3))
      {
        d_67 = ATgetArgument(c_67, 0);
        e_67 = ATgetArgument(c_67, 1);
        f_67 = ATgetArgument(c_67, 2);
        s_66 :
        if(match_int(d_67, 0))
          {
            t = not_null(f_67);
          }
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
    ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
    i_67 = t;
    w_66 :
    if(match_cons(i_67, sym__3))
      {
        j_67 = ATgetArgument(i_67, 0);
        k_67 = ATgetArgument(i_67, 1);
        l_67 = ATgetArgument(i_67, 2);
        {
          ATerm p_67 = NULL,y_67 = NULL;
          ATerm w_14;
          w_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_67), term_k_6);
            t = geq_0(t);
          }
          t = w_14;
          {
            ATerm x_14;
            x_14 = t;
            {
              ATerm q_67 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_67), term_k_6);
              {
                t = subt_0(t);
                {
                  q_67 = t;
                  if(((p_67 != NULL) && (p_67 != q_67)))
                    _fail(q_67);
                  else
                    p_67 = q_67;
                }
              }
            }
            t = x_14;
            {
              ATerm z_67 = NULL;
              t = not_null(k_67);
              {
                t = h_102(t);
                {
                  z_67 = t;
                  if(((y_67 != NULL) && (y_67 != z_67)))
                    _fail(z_67);
                  else
                    y_67 = z_67;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(p_67), not_null(k_67), (ATerm) ATinsert(CheckATermList(not_null(l_67)), not_null(y_67)));
            }
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
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
  k_68 = t;
  j_68 :
  if(match_cons(k_68, sym__2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      {
        ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
        ATerm s_68 = NULL;
        ATerm t_68 = NULL;
        t = new_0(t);
        {
          s_68 = t;
          {
            if(((p_68 != NULL) && (p_68 != s_68)))
              _fail(s_68);
            else
              p_68 = s_68;
            {
              ATerm u_68 = NULL;
              t = new_0(t);
              {
                t_68 = t;
                {
                  if(((q_68 != NULL) && (q_68 != t_68)))
                    _fail(t_68);
                  else
                    q_68 = t_68;
                  {
                    t = new_0(t);
                    {
                      u_68 = t;
                      if(((r_68 != NULL) && (r_68 != u_68)))
                        _fail(u_68);
                      else
                        r_68 = u_68;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_68)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_68)))), (ATerm) ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_68))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_68), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_11), term_n_11)), not_null(q_68), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_68)), not_null(r_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_68)));
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  k_69 :
  if(match_cons(m_69, sym__2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      l_69 :
      if(((ATgetType(o_69) == AT_LIST) && ATisEmpty(o_69)))
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
ATerm zipr_1 (ATerm t, ATerm u_92 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, u_92);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  u_69 :
  if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
    {
      w_69 = ATgetFirst((ATermList) v_69);
      x_69 = (ATerm) ATgetNext((ATermList) v_69);
      t = not_null(x_69);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  v_70 :
  if(((ATgetType(x_70) == AT_LIST) && !(ATisEmpty(x_70))))
    {
      y_70 = ATgetFirst((ATermList) x_70);
      z_70 = (ATerm) ATgetNext((ATermList) x_70);
      w_70 :
      if(((ATgetType(z_70) == AT_LIST) && ATisEmpty(z_70)))
        {
          t = not_null(y_70);
        }
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
  ATerm a_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = a_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
  ATerm s_74 (ATerm t)
  {
    ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,l_73 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm s_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
      ATerm x_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_72), term_k_6);
      {
        t = add_0(t);
        {
          x_72 = t;
          if(((s_72 != NULL) && (s_72 != x_72)))
            _fail(x_72);
          else
            s_72 = x_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_72), term_q_15);
        {
          t = copy_1(t, new_0);
          {
            y_72 = t;
            t_71 :
            if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
              {
                z_72 = ATgetFirst((ATermList) y_72);
                a_73 = (ATerm) ATgetNext((ATermList) y_72);
                {
                  ATerm b_73 = NULL;
                  if(((k_72 != NULL) && (k_72 != z_72)))
                    _fail(z_72);
                  else
                    k_72 = z_72;
                  {
                    if(((l_72 != NULL) && (l_72 != a_73)))
                      _fail(a_73);
                    else
                      l_72 = a_73;
                    {
                      t = not_null(l_72);
                      {
                        ATerm c_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
                        t = last_0(t);
                        {
                          b_73 = t;
                          {
                            if(((j_72 != NULL) && (j_72 != b_73)))
                              _fail(b_73);
                            else
                              j_72 = b_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_72)), not_null(k_72)), not_null(l_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    c_73 = t;
                                    s_71 :
                                    if(match_cons(c_73, sym__6))
                                      {
                                        f_73 = ATgetArgument(c_73, 0);
                                        g_73 = ATgetArgument(c_73, 1);
                                        h_73 = ATgetArgument(c_73, 2);
                                        i_73 = ATgetArgument(c_73, 3);
                                        j_73 = ATgetArgument(c_73, 4);
                                        k_73 = ATgetArgument(c_73, 5);
                                        {
                                          if(((m_72 != NULL) && (m_72 != f_73)))
                                            _fail(f_73);
                                          else
                                            m_72 = f_73;
                                          {
                                            if(((n_72 != NULL) && (n_72 != g_73)))
                                              _fail(g_73);
                                            else
                                              n_72 = g_73;
                                            {
                                              if(((o_72 != NULL) && (o_72 != h_73)))
                                                _fail(h_73);
                                              else
                                                o_72 = h_73;
                                              {
                                                if(((p_72 != NULL) && (p_72 != i_73)))
                                                  _fail(i_73);
                                                else
                                                  p_72 = i_73;
                                                {
                                                  if(((q_72 != NULL) && (q_72 != j_73)))
                                                    _fail(j_73);
                                                  else
                                                    q_72 = j_73;
                                                  if(((r_72 != NULL) && (r_72 != k_73)))
                                                    _fail(k_73);
                                                  else
                                                    r_72 = k_73;
                                                }
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
    t = i_15;
    {
      ATerm m_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_72)), not_null(o_72)), not_null(l_72));
      {
        t = concat_0(t);
        {
          m_73 = t;
          if(((l_73 != NULL) && (l_73 != m_73)))
            _fail(m_73);
          else
            l_73 = m_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(e_72), term_r_15), not_null(n_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(l_73)), not_null(k_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_72), not_null(p_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_72), not_null(r_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_72))))));
    }
    return(t);
  }
  ATerm t_74 (ATerm t)
  {
    ATerm o_73 = NULL;
    ATerm p_73 = NULL;
    t = new_0(t);
    {
      p_73 = t;
      if(((o_73 != NULL) && (o_73 != p_73)))
        _fail(p_73);
      else
        o_73 = p_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(e_72), term_r_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_72), (ATerm) ATempty))), term_k_11))));
    return(t);
  }
  ATerm u_74 (ATerm t)
  {
    ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,q_74 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm z_73 = NULL;
      ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,o_74 = NULL,p_74 = NULL;
      t = new_0(t);
      {
        z_73 = t;
        {
          if(((s_73 != NULL) && (s_73 != z_73)))
            _fail(z_73);
          else
            s_73 = z_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  a_74 = t;
                  y_71 :
                  if(match_cons(a_74, sym__6))
                    {
                      b_74 = ATgetArgument(a_74, 0);
                      c_74 = ATgetArgument(a_74, 1);
                      d_74 = ATgetArgument(a_74, 2);
                      e_74 = ATgetArgument(a_74, 3);
                      o_74 = ATgetArgument(a_74, 4);
                      p_74 = ATgetArgument(a_74, 5);
                      {
                        if(((t_73 != NULL) && (t_73 != b_74)))
                          _fail(b_74);
                        else
                          t_73 = b_74;
                        {
                          if(((u_73 != NULL) && (u_73 != c_74)))
                            _fail(c_74);
                          else
                            u_73 = c_74;
                          {
                            if(((v_73 != NULL) && (v_73 != d_74)))
                              _fail(d_74);
                            else
                              v_73 = d_74;
                            {
                              if(((w_73 != NULL) && (w_73 != e_74)))
                                _fail(e_74);
                              else
                                w_73 = e_74;
                              {
                                if(((x_73 != NULL) && (x_73 != o_74)))
                                  _fail(o_74);
                                else
                                  x_73 = o_74;
                                if(((y_73 != NULL) && (y_73 != p_74)))
                                  _fail(p_74);
                                else
                                  y_73 = p_74;
                              }
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
    t = s_15;
    {
      ATerm r_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_73), not_null(x_73));
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = conc_more_lists_0(t);
          }
        {
          r_74 = t;
          if(((q_74 != NULL) && (q_74 != r_74)))
            _fail(r_74);
          else
            q_74 = r_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(e_72), term_v_15), not_null(u_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_74)), not_null(s_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_72), not_null(w_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(e_72), not_null(y_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_73))))));
    }
    return(t);
  }
  d_72 = t;
  a_72 :
  if(match_cons(d_72, sym__3))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      g_72 = ATgetArgument(d_72, 2);
      b_72 :
      if(match_string(f_72, "T"))
        {
          c_72 :
          if(match_int(g_72, 0))
            {
              ATerm w_15 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_74(t);
                  LocalPopChoice(c_16);
                }
              else
                {
                  t = w_15;
                  t = t_74(t);
                }
            }
          else
            {
              t = s_74(t);
            }
        }
      else
        {
          if(match_string(f_72, "D"))
            {
              t = u_74(t);
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
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  n_75 = t;
  k_75 :
  if(match_cons(n_75, sym__2))
    {
      o_75 = ATgetArgument(n_75, 0);
      t_75 = ATgetArgument(n_75, 1);
      l_75 :
      if(match_cons(o_75, sym__2))
        {
          p_75 = ATgetArgument(o_75, 0);
          s_75 = ATgetArgument(o_75, 1);
          m_75 :
          if(match_cons(p_75, sym_Mod_2))
            {
              q_75 = ATgetArgument(p_75, 0);
              r_75 = ATgetArgument(p_75, 1);
              {
                ATerm y_75 = NULL;
                ATerm z_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_75), not_null(r_75), not_null(s_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      z_75 = t;
                      if(((y_75 != NULL) && (y_75 != z_75)))
                        _fail(z_75);
                      else
                        y_75 = z_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_75), not_null(t_75));
              }
            }
          else
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
  ATerm h_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = h_16;
      {
        t = OverloadedDef_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = JoinDefs1_0(t);
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                t = JoinDefs2_0(t);
              }
            return(t);
          }
          t = _2(t, n_2, _id);
        }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm k_76 = NULL,n_76 = NULL,o_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  k_76 = t;
  i_76 :
  if(match_cons(k_76, sym__5))
    {
      n_76 = ATgetArgument(k_76, 0);
      s_76 = ATgetArgument(k_76, 1);
      t_76 = ATgetArgument(k_76, 2);
      u_76 = ATgetArgument(k_76, 3);
      v_76 = ATgetArgument(k_76, 4);
      j_76 :
      if(((ATgetType(n_76) == AT_LIST) && !(ATisEmpty(n_76))))
        {
          o_76 = ATgetFirst((ATermList) n_76);
          r_76 = (ATerm) ATgetNext((ATermList) n_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(r_76), not_null(s_76), not_null(t_76), not_null(u_76), (ATerm) ATinsert(CheckATermList(not_null(v_76)), not_null(o_76)));
        }
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
ATerm diff_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  e_77 :
  if(match_cons(f_77, sym__2))
    {
      g_77 = ATgetArgument(f_77, 0);
      h_77 = ATgetArgument(f_77, 1);
      {
        t = not_null(g_77);
        {
          ATerm l_77 (ATerm t)
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                  ATerm y_16 = t;
                  int z_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(h_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_101, o_2);
                      t = l_77(t);
                      LocalPopChoice(z_16);
                    }
                  else
                    {
                      t = y_16;
                      t = Cons_2(t, _id, l_77);
                    }
                }
              }
            return(t);
          }
          t = l_77(t);
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
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  p_77 = t;
  n_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      o_77 :
      if(((ATgetType(r_77) == AT_LIST) && !(ATisEmpty(r_77))))
        {
          s_77 = ATgetFirst((ATermList) r_77);
          t_77 = (ATerm) ATgetNext((ATermList) r_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_77)), not_null(s_77)), not_null(t_77));
        }
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
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  a_78 = t;
  z_77 :
  if(match_cons(a_78, sym__2))
    {
      b_78 = ATgetArgument(a_78, 0);
      c_78 = ATgetArgument(a_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_78)), not_null(b_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
  k_78 = t;
  h_78 :
  if(match_cons(k_78, sym__2))
    {
      l_78 = ATgetArgument(k_78, 0);
      o_78 = ATgetArgument(k_78, 1);
      i_78 :
      if(((ATgetType(l_78) == AT_LIST) && !(ATisEmpty(l_78))))
        {
          m_78 = ATgetFirst((ATermList) l_78);
          n_78 = (ATerm) ATgetNext((ATermList) l_78);
          j_78 :
          if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
            {
              p_78 = ATgetFirst((ATermList) o_78);
              q_78 = (ATerm) ATgetNext((ATermList) o_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_78), not_null(p_78)), (ATerm) ATmakeAppl(sym__2, not_null(n_78), not_null(q_78)));
            }
          else
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  z_78 :
  if(match_cons(c_79, sym__2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      a_79 :
      if(((ATgetType(d_79) == AT_LIST) && ATisEmpty(d_79)))
        {
          b_79 :
          if(((ATgetType(e_79) == AT_LIST) && ATisEmpty(e_79)))
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
ATerm genzip_4 (ATerm t, ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm))
{
  ATerm g_79 (ATerm t)
  {
    ATerm a_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_92(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = a_17;
        {
          t = n_92(t);
          {
            t = _2(t, p_92, g_79);
            t = o_92(t);
          }
        }
      }
    return(t);
  }
  t = g_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_92 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_92);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  r_79 = t;
  p_79 :
  if(((ATgetType(r_79) == AT_LIST) && !(ATisEmpty(r_79))))
    {
      s_79 = ATgetFirst((ATermList) r_79);
      v_79 = (ATerm) ATgetNext((ATermList) r_79);
      q_79 :
      if(match_cons(s_79, sym__2))
        {
          t_79 = ATgetArgument(s_79, 0);
          u_79 = ATgetArgument(s_79, 1);
          {
            ATerm z_79 = NULL,a_80 = NULL,g_80 = NULL,m_80 = NULL;
            ATerm j_17;
            j_17 = t;
            {
              ATerm b_80 = NULL;
              ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
              t = not_null(u_79);
              {
                b_80 = t;
                {
                  t = SSL_explode_term(not_null(b_80));
                  {
                    d_80 = t;
                    k_79 :
                    if(match_cons(d_80, sym__2))
                      {
                        e_80 = ATgetArgument(d_80, 0);
                        f_80 = ATgetArgument(d_80, 1);
                        {
                          if(((z_79 != NULL) && (z_79 != e_80)))
                            _fail(e_80);
                          else
                            z_79 = e_80;
                          if(((a_80 != NULL) && (a_80 != f_80)))
                            _fail(f_80);
                          else
                            a_80 = f_80;
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
            t = j_17;
            {
              ATerm k_17;
              k_17 = t;
              {
                ATerm h_80 = NULL;
                ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
                t = not_null(t_79);
                {
                  h_80 = t;
                  {
                    t = SSL_explode_term(not_null(h_80));
                    {
                      j_80 = t;
                      n_79 :
                      if(match_cons(j_80, sym__2))
                        {
                          k_80 = ATgetArgument(j_80, 0);
                          l_80 = ATgetArgument(j_80, 1);
                          {
                            if(((z_79 != NULL) && (z_79 != k_80)))
                              _fail(k_80);
                            else
                              z_79 = k_80;
                            if(((g_80 != NULL) && (g_80 != l_80)))
                              _fail(l_80);
                            else
                              g_80 = l_80;
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
              t = k_17;
              {
                ATerm n_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_80), not_null(a_80));
                {
                  t = zip_1(t, _id);
                  {
                    n_80 = t;
                    if(((m_80 != NULL) && (m_80 != n_80)))
                      _fail(n_80);
                    else
                      m_80 = n_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_80), not_null(v_79));
                  {
                    ATerm s_17 = t;
                    int t_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(t_17);
                      }
                    else
                      {
                        t = s_17;
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
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  x_80 = t;
  v_80 :
  if(((ATgetType(x_80) == AT_LIST) && !(ATisEmpty(x_80))))
    {
      y_80 = ATgetFirst((ATermList) x_80);
      b_81 = (ATerm) ATgetNext((ATermList) x_80);
      w_80 :
      if(match_cons(y_80, sym__2))
        {
          z_80 = ATgetArgument(y_80, 0);
          a_81 = ATgetArgument(y_80, 1);
          {
            ATerm d_81 = NULL;
            if(((z_80 != NULL) && (z_80 != a_81)))
              _fail(a_81);
            else
              z_80 = a_81;
            {
              if(((d_81 != NULL) && (d_81 != b_81)))
                _fail(b_81);
              else
                d_81 = b_81;
              t = not_null(d_81);
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
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm g_81 = NULL;
        g_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_81));
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm g_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm j_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = j_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, s_2);
            LocalPopChoice(i_18);
          }
        else
          {
            t = g_18;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm))
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL;
  t_81 = t;
  r_81 :
  if(match_cons(t_81, sym__5))
    {
      u_81 = ATgetArgument(t_81, 0);
      x_81 = ATgetArgument(t_81, 1);
      y_81 = ATgetArgument(t_81, 2);
      z_81 = ATgetArgument(t_81, 3);
      a_82 = ATgetArgument(t_81, 4);
      s_81 :
      if(((ATgetType(u_81) == AT_LIST) && !(ATisEmpty(u_81))))
        {
          v_81 = ATgetFirst((ATermList) u_81);
          w_81 = (ATerm) ATgetNext((ATermList) u_81);
          {
            ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,q_82 = NULL,s_82 = NULL,u_82 = NULL;
            ATerm l_18;
            l_18 = t;
            {
              ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_81), not_null(y_81));
              {
                t = z_112(t);
                {
                  l_82 = t;
                  n_81 :
                  if(match_cons(l_82, sym__2))
                    {
                      m_82 = ATgetArgument(l_82, 0);
                      n_82 = ATgetArgument(l_82, 1);
                      {
                        ATerm o_82 = NULL;
                        if(((i_82 != NULL) && (i_82 != m_82)))
                          _fail(m_82);
                        else
                          i_82 = m_82;
                        {
                          if(((h_82 != NULL) && (h_82 != n_82)))
                            _fail(n_82);
                          else
                            h_82 = n_82;
                          {
                            t = not_null(i_82);
                            {
                              ATerm p_82 = NULL;
                              t = a_113(t);
                              {
                                o_82 = t;
                                {
                                  if(((j_82 != NULL) && (j_82 != o_82)))
                                    _fail(o_82);
                                  else
                                    j_82 = o_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), not_null(x_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        p_82 = t;
                                        if(((k_82 != NULL) && (k_82 != p_82)))
                                          _fail(p_82);
                                        else
                                          k_82 = p_82;
                                      }
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
            t = l_18;
            {
              ATerm m_18;
              m_18 = t;
              {
                ATerm r_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(w_81));
                {
                  ATerm o_18 = t;
                  int t_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(t_18);
                    }
                  else
                    {
                      t = o_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    r_82 = t;
                    if(((q_82 != NULL) && (q_82 != r_82)))
                      _fail(r_82);
                    else
                      q_82 = r_82;
                  }
                }
              }
              t = m_18;
              {
                ATerm u_18;
                u_18 = t;
                {
                  ATerm t_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(x_81));
                  {
                    ATerm v_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = v_18;
                        t = conc_more_lists_0(t);
                      }
                    {
                      t_82 = t;
                      if(((s_82 != NULL) && (s_82 != t_82)))
                        _fail(t_82);
                      else
                        s_82 = t_82;
                    }
                  }
                }
                t = u_18;
                {
                  ATerm v_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_81), not_null(i_82), not_null(z_81));
                  {
                    t = b_113(t);
                    {
                      v_82 = t;
                      if(((u_82 != NULL) && (u_82 != v_82)))
                        _fail(v_82);
                      else
                        u_82 = v_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(q_82), not_null(s_82), not_null(h_82), not_null(u_82), not_null(a_82));
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
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL;
  g_83 = t;
  e_83 :
  if(match_cons(g_83, sym__5))
    {
      h_83 = ATgetArgument(g_83, 0);
      i_83 = ATgetArgument(g_83, 1);
      j_83 = ATgetArgument(g_83, 2);
      k_83 = ATgetArgument(g_83, 3);
      l_83 = ATgetArgument(g_83, 4);
      f_83 :
      if(((ATgetType(h_83) == AT_LIST) && ATisEmpty(h_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_83), not_null(l_83));
        }
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
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  v_83 = t;
  u_83 :
  if(match_cons(v_83, sym__3))
    {
      w_83 = ATgetArgument(v_83, 0);
      x_83 = ATgetArgument(v_83, 1);
      y_83 = ATgetArgument(v_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(w_83), not_null(w_83), not_null(x_83), not_null(y_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  ATerm g_84 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_98(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          t = x_98(t);
          t = g_84(t);
        }
      }
    return(t);
  }
  t = g_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  t = z_98(t);
  t = while_not_2(t, a_99, b_99);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm f_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, k_112, l_112, m_112);
        LocalPopChoice(h_19);
      }
    else
      {
        t = f_19;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, t_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefinitionExists_0(t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
            }
          }
        return(t);
      }
      t = map_1(t, w_2);
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,o_84 = NULL;
    j_84 = t;
    i_84 :
    if(match_cons(j_84, sym__3))
      {
        k_84 = ATgetArgument(j_84, 0);
        l_84 = ATgetArgument(j_84, 1);
        o_84 = ATgetArgument(j_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_84)), not_null(l_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_k_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_113 (ATerm))
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym__2))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      {
        ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
        ATerm o_19;
        o_19 = t;
        {
          ATerm h_85 = NULL;
          ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
          t = i_113(t);
          {
            h_85 = t;
            {
              if(((e_85 != NULL) && (e_85 != h_85)))
                _fail(h_85);
              else
                e_85 = h_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_85), not_null(a_85), not_null(b_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_85), term_r_19);
                        t = table_get_0(t);
                        LocalPopChoice(q_19);
                      }
                    else
                      {
                        t = p_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_85 = t;
                      x_84 :
                      if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
                        {
                          j_85 = ATgetFirst((ATermList) i_85);
                          k_85 = (ATerm) ATgetNext((ATermList) i_85);
                          {
                            if(((f_85 != NULL) && (f_85 != j_85)))
                              _fail(j_85);
                            else
                              f_85 = j_85;
                            {
                              if(((g_85 != NULL) && (g_85 != k_85)))
                                _fail(k_85);
                              else
                                g_85 = k_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_85), term_r_19, (ATerm) ATinsert(CheckATermList(not_null(g_85)), (ATerm) ATinsert(CheckATermList(not_null(f_85)), not_null(a_85))));
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
        t = o_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm s_85 = NULL;
  ATerm v_85 = NULL;
  s_85 = t;
  {
    ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
    t = not_null(s_85);
    {
      ATerm x_2 (ATerm t)
      {
        t = term_w_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        w_85 = t;
        q_85 :
        if(match_cons(w_85, sym_Defined_2))
          {
            x_85 = ATgetArgument(w_85, 0);
            y_85 = ATgetArgument(w_85, 1);
            r_85 :
            if(match_string(x_85, "e_0"))
              {
                if(((v_85 != NULL) && (v_85 != y_85)))
                  _fail(y_85);
                else
                  v_85 = y_85;
              }
            else
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
    t = not_null(v_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
  d_86 = t;
  c_86 :
  if(((ATgetType(d_86) == AT_LIST) && !(ATisEmpty(d_86))))
    {
      e_86 = ATgetFirst((ATermList) d_86);
      f_86 = (ATerm) ATgetNext((ATermList) d_86);
      t = not_null(e_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  j_86 :
  if(match_cons(k_86, sym__2))
    {
      l_86 = ATgetArgument(k_86, 0);
      m_86 = ATgetArgument(k_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_86), not_null(m_86));
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
ATerm rewrite_1 (ATerm t, ATerm k_113 (ATerm))
{
  ATerm s_86 = NULL;
  ATerm u_86 = NULL;
  s_86 = t;
  {
    ATerm v_86 = NULL;
    t = term_q_15;
    {
      t = k_113(t);
      {
        v_86 = t;
        if(((u_86 != NULL) && (u_86 != v_86)))
          _fail(v_86);
        else
          u_86 = v_86;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_86), not_null(s_86));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL;
  j_87 = t;
  i_87 :
  if(match_cons(j_87, sym__2))
    {
      k_87 = ATgetArgument(j_87, 0);
      l_87 = ATgetArgument(j_87, 1);
      {
        ATerm p_87 = NULL,q_87 = NULL;
        ATerm r_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
        t = not_null(j_87);
        {
          ATerm y_2 (ATerm t)
          {
            t = term_x_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            r_87 = t;
            g_87 :
            if(match_cons(r_87, sym_Defined_3))
              {
                v_87 = ATgetArgument(r_87, 0);
                w_87 = ATgetArgument(r_87, 1);
                x_87 = ATgetArgument(r_87, 2);
                h_87 :
                if(match_string(v_87, "c_0"))
                  {
                    if(((p_87 != NULL) && (p_87 != w_87)))
                      _fail(w_87);
                    else
                      p_87 = w_87;
                    if(((q_87 != NULL) && (q_87 != x_87)))
                      _fail(x_87);
                    else
                      q_87 = x_87;
                  }
                else
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
        t = (ATerm) ATinsert(CheckATermList(not_null(q_87)), not_null(p_87));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
    g_88 = t;
    f_88 :
    if(match_cons(g_88, sym_SDef_3))
      {
        h_88 = ATgetArgument(g_88, 0);
        i_88 = ATgetArgument(g_88, 1);
        j_88 = ATgetArgument(g_88, 2);
        {
          ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
          ATerm y_19;
          y_19 = t;
          {
            ATerm r_88 = NULL;
            t = not_null(i_88);
            {
              ATerm s_88 = NULL;
              t = length_0(t);
              {
                r_88 = t;
                {
                  if(((p_88 != NULL) && (p_88 != r_88)))
                    _fail(r_88);
                  else
                    p_88 = r_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_88), not_null(p_88));
                    {
                      ATerm t_88 = NULL,v_88 = NULL;
                      ATerm z_19 = t;
                      int a_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(a_20);
                        }
                      else
                        {
                          t = z_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        s_88 = t;
                        {
                          if(((o_88 != NULL) && (o_88 != s_88)))
                            _fail(s_88);
                          else
                            o_88 = s_88;
                          {
                            ATerm u_88 = NULL;
                            t = not_null(h_88);
                            {
                              ATerm b_20 = t;
                              int c_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(c_20);
                                }
                              else
                                {
                                  t = b_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                u_88 = t;
                                if(((t_88 != NULL) && (t_88 != u_88)))
                                  _fail(u_88);
                                else
                                  t_88 = u_88;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_88)), not_null(t_88));
                              {
                                t = union_1(t, eq_0);
                                {
                                  v_88 = t;
                                  {
                                    if(((q_88 != NULL) && (q_88 != v_88)))
                                      _fail(v_88);
                                    else
                                      q_88 = v_88;
                                    {
                                      ATerm d_20;
                                      d_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_88), not_null(p_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_i_20, not_null(g_88), not_null(o_88)));
                                        {
                                          ATerm a_3 (ATerm t)
                                          {
                                            t = term_x_19;
                                            return(t);
                                          }
                                          t = assert_1(t, a_3);
                                        }
                                      }
                                      t = d_20;
                                      {
                                        ATerm j_20;
                                        j_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_88), (ATerm) ATmakeAppl(sym_Defined_2, term_k_20, not_null(q_88)));
                                          {
                                            ATerm b_3 (ATerm t)
                                            {
                                              t = term_w_19;
                                              return(t);
                                            }
                                            t = assert_1(t, b_3);
                                          }
                                        }
                                        t = j_20;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = y_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, z_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = term_o_20;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_k_6;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  c_89 :
  if(match_cons(d_89, sym__2))
    {
      e_89 = ATgetArgument(d_89, 0);
      f_89 = ATgetArgument(d_89, 1);
      if(((e_89 != NULL) && (e_89 != f_89)))
        _fail(f_89);
      else
        e_89 = f_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm))
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  n_89 = t;
  m_89 :
  if(((ATgetType(n_89) == AT_LIST) && !(ATisEmpty(n_89))))
    {
      o_89 = ATgetFirst((ATermList) n_89);
      p_89 = (ATerm) ATgetNext((ATermList) n_89);
      {
        t = m_101(t);
        {
          ATerm e_3 (ATerm t)
          {
            ATerm s_89 = NULL;
            s_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_89), not_null(s_89));
              t = l_101(t);
            }
            return(t);
          }
          t = fetch_1(t, e_3);
        }
        t = not_null(p_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm h_101 (ATerm))
{
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
  a_90 = t;
  x_89 :
  if(match_cons(a_90, sym__2))
    {
      b_90 = ATgetArgument(a_90, 0);
      c_90 = ATgetArgument(a_90, 1);
      {
        t = not_null(b_90);
        {
          ATerm g_90 (ATerm t)
          {
            ATerm q_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_90);
                LocalPopChoice(t_20);
              }
            else
              {
                t = q_20;
                {
                  ATerm u_20 = t;
                  int v_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_3 (ATerm t)
                      {
                        t = not_null(c_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_101, f_3);
                      t = g_90(t);
                      LocalPopChoice(v_20);
                    }
                  else
                    {
                      t = u_20;
                      t = Cons_2(t, _id, g_90);
                    }
                }
              }
            return(t);
          }
          t = g_90(t);
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
ATerm foldr_3 (ATerm t, ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm))
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_101(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
        l_90 = t;
        k_90 :
        if(((ATgetType(l_90) == AT_LIST) && !(ATisEmpty(l_90))))
          {
            m_90 = ATgetFirst((ATermList) l_90);
            n_90 = (ATerm) ATgetNext((ATermList) l_90);
            {
              ATerm q_90 = NULL,s_90 = NULL;
              ATerm y_20;
              y_20 = t;
              {
                ATerm r_90 = NULL;
                t = not_null(m_90);
                {
                  t = w_101(t);
                  {
                    r_90 = t;
                    if(((q_90 != NULL) && (q_90 != r_90)))
                      _fail(r_90);
                    else
                      q_90 = r_90;
                  }
                }
              }
              t = y_20;
              {
                ATerm t_90 = NULL;
                t = not_null(n_90);
                {
                  t = foldr_3(t, u_101, v_101, w_101);
                  {
                    t_90 = t;
                    if(((s_90 != NULL) && (s_90 != t_90)))
                      _fail(t_90);
                    else
                      s_90 = t_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_90), not_null(s_90));
                  t = v_101(t);
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
ATerm definition_names_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = union_1(t, eq_0);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
    b_91 = t;
    a_91 :
    if(match_cons(b_91, sym_SDef_3))
      {
        c_91 = ATgetArgument(b_91, 0);
        d_91 = ATgetArgument(b_91, 1);
        e_91 = ATgetArgument(b_91, 2);
        {
          ATerm h_91 = NULL;
          ATerm i_91 = NULL;
          t = not_null(d_91);
          {
            t = length_0(t);
            {
              i_91 = t;
              if(((h_91 != NULL) && (h_91 != i_91)))
                _fail(i_91);
              else
                h_91 = i_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(c_91), not_null(h_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, g_3, j_3, k_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm p_91 = NULL,r_91 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm q_91 = NULL;
    t = definition_names_0(t);
    {
      q_91 = t;
      if(((p_91 != NULL) && (p_91 != q_91)))
        _fail(q_91);
      else
        p_91 = q_91;
    }
  }
  t = z_20;
  {
    ATerm s_91 = NULL;
    t = sort_defs_0(t);
    {
      s_91 = t;
      if(((r_91 != NULL) && (r_91 != s_91)))
        _fail(s_91);
      else
        r_91 = s_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(p_91), not_null(r_91), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm a_92 = NULL,b_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym_Strategies_1))
    {
      b_92 = ATgetArgument(a_92, 0);
      {
        ATerm g_92 = NULL,i_92 = NULL;
        ATerm h_92 = NULL;
        t = SSLgetAnnotations(not_null(a_92));
        {
          h_92 = t;
          if(((g_92 != NULL) && (g_92 != h_92)))
            _fail(h_92);
          else
            g_92 = h_92;
        }
        {
          t = not_null(b_92);
          {
            ATerm k_92 = NULL;
            t = e_75(t);
            {
              i_92 = t;
              {
                ATerm l_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_92)), not_null(g_92));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  e_93 = t;
  d_93 :
  if(((ATgetType(e_93) == AT_LIST) && !(ATisEmpty(e_93))))
    {
      f_93 = ATgetFirst((ATermList) e_93);
      g_93 = (ATerm) ATgetNext((ATermList) e_93);
      {
        ATerm k_93 = NULL,m_93 = NULL;
        ATerm l_93 = NULL;
        t = SSLgetAnnotations(not_null(e_93));
        {
          l_93 = t;
          if(((k_93 != NULL) && (k_93 != l_93)))
            _fail(l_93);
          else
            k_93 = l_93;
        }
        {
          t = not_null(f_93);
          {
            ATerm o_93 = NULL;
            t = t_72(t);
            {
              m_93 = t;
              {
                t = not_null(g_93);
                {
                  ATerm q_93 = NULL;
                  t = u_72(t);
                  {
                    o_93 = t;
                    {
                      ATerm r_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_93)), not_null(m_93)), not_null(k_93));
                      {
                        r_93 = t;
                        if(((q_93 != NULL) && (q_93 != r_93)))
                          _fail(r_93);
                        else
                          q_93 = r_93;
                      }
                      t = not_null(q_93);
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
ATerm Specification_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL;
  d_94 = t;
  c_94 :
  if(match_cons(d_94, sym_Specification_1))
    {
      e_94 = ATgetArgument(d_94, 0);
      {
        ATerm h_94 = NULL,j_94 = NULL;
        ATerm i_94 = NULL;
        t = SSLgetAnnotations(not_null(d_94));
        {
          i_94 = t;
          if(((h_94 != NULL) && (h_94 != i_94)))
            _fail(i_94);
          else
            h_94 = i_94;
        }
        {
          t = not_null(e_94);
          {
            ATerm l_94 = NULL;
            t = g_75(t);
            {
              j_94 = t;
              {
                ATerm m_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_94)), not_null(h_94));
                {
                  m_94 = t;
                  if(((l_94 != NULL) && (l_94 != m_94)))
                    _fail(m_94);
                  else
                    l_94 = m_94;
                }
                t = not_null(l_94);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
  x_94 = t;
  w_94 :
  if(match_cons(x_94, sym__2))
    {
      y_94 = ATgetArgument(x_94, 0);
      z_94 = ATgetArgument(x_94, 1);
      {
        ATerm d_95 = NULL,f_95 = NULL;
        ATerm e_95 = NULL;
        t = SSLgetAnnotations(not_null(x_94));
        {
          e_95 = t;
          if(((d_95 != NULL) && (d_95 != e_95)))
            _fail(e_95);
          else
            d_95 = e_95;
        }
        {
          t = not_null(y_94);
          {
            ATerm h_95 = NULL;
            t = k_71(t);
            {
              f_95 = t;
              {
                t = not_null(z_94);
                {
                  ATerm j_95 = NULL;
                  t = l_71(t);
                  {
                    h_95 = t;
                    {
                      ATerm k_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_95), not_null(h_95)), not_null(d_95));
                      {
                        k_95 = t;
                        if(((j_95 != NULL) && (j_95 != k_95)))
                          _fail(k_95);
                        else
                          j_95 = k_95;
                      }
                      t = not_null(j_95);
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
  ATerm s_95 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm t_95 = NULL,u_95 = NULL;
      t_95 = t;
      r_95 :
      if(match_cons(t_95, sym_Program_1))
        {
          u_95 = ATgetArgument(t_95, 0);
          if(((s_95 != NULL) && (s_95 != u_95)))
            _fail(u_95);
          else
            s_95 = u_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, l_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_21), not_null(s_95)), term_c_21));
      {
        t = printnl_0(t);
        {
          t = term_k_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL;
  y_95 = t;
  x_95 :
  if(match_cons(y_95, sym__2))
    {
      z_95 = ATgetArgument(y_95, 0);
      a_96 = ATgetArgument(y_95, 1);
      {
        ATerm e_21;
        e_21 = t;
        t = SSL_printnl(not_null(z_95), not_null(a_96));
        t = e_21;
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
  ATerm f_96 = NULL;
  f_96 = t;
  t = SSL_implode_string(not_null(f_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = g_21;
      {
        ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
        p_96 = t;
        o_96 :
        if(((ATgetType(p_96) == AT_LIST) && !(ATisEmpty(p_96))))
          {
            q_96 = ATgetFirst((ATermList) p_96);
            r_96 = (ATerm) ATgetNext((ATermList) p_96);
            {
              t = not_null(q_96);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(r_96);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_3);
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
  ATerm b_97 = NULL;
  ATerm d_97 = NULL;
  b_97 = t;
  {
    ATerm e_97 = NULL;
    ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL;
    t = not_null(b_97);
    {
      e_97 = t;
      {
        t = SSL_explode_term(not_null(e_97));
        {
          g_97 = t;
          z_96 :
          if(match_cons(g_97, sym__2))
            {
              h_97 = ATgetArgument(g_97, 0);
              i_97 = ATgetArgument(g_97, 1);
              a_97 :
              if(match_string(h_97, ""))
                {
                  if(((d_97 != NULL) && (d_97 != i_97)))
                    _fail(i_97);
                  else
                    d_97 = i_97;
                }
              else
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
      t = not_null(d_97);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm m_97 (ATerm t)
  {
    ATerm j_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_97);
        LocalPopChoice(s_21);
      }
    else
      {
        t = j_21;
        {
          t = Nil_0(t);
          t = s_84(t);
        }
      }
    return(t);
  }
  t = m_97(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL;
  p_97 = t;
  o_97 :
  if(match_cons(p_97, sym__2))
    {
      q_97 = ATgetArgument(p_97, 0);
      r_97 = ATgetArgument(p_97, 1);
      {
        t = not_null(q_97);
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(r_97);
            return(t);
          }
          t = at_end_1(t, n_3);
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
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = SSL_explode_string(not_null(w_97));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm v_21 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = v_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  t = SSL_is_string(not_null(a_98));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = e_22;
      {
        ATerm l_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, o_3);
            LocalPopChoice(q_22);
          }
        else
          {
            t = l_22;
            {
              ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL;
              l_98 = t;
              k_98 :
              if(match_cons(l_98, sym_Path_1))
                {
                  m_98 = ATgetArgument(l_98, 0);
                  t = not_null(m_98);
                }
              else
                {
                  if(match_cons(l_98, sym_Var_1))
                    {
                      m_98 = ATgetArgument(l_98, 0);
                      {
                        t = not_null(m_98);
                        {
                          ATerm x_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = x_22;
                              {
                                ATerm p_3 (ATerm t)
                                {
                                  t = term_z_22;
                                  return(t);
                                }
                                t = debug_1(t, p_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_98, sym_Prefix_2))
                        {
                          m_98 = ATgetArgument(l_98, 0);
                          n_98 = ATgetArgument(l_98, 1);
                          {
                            ATerm s_98 = NULL,u_98 = NULL;
                            ATerm a_23;
                            a_23 = t;
                            {
                              ATerm t_98 = NULL;
                              t = not_null(m_98);
                              {
                                t = eval_config_0(t);
                                {
                                  t_98 = t;
                                  if(((s_98 != NULL) && (s_98 != t_98)))
                                    _fail(t_98);
                                  else
                                    s_98 = t_98;
                                }
                              }
                            }
                            t = a_23;
                            {
                              ATerm v_98 = NULL;
                              t = not_null(n_98);
                              {
                                t = eval_config_0(t);
                                {
                                  v_98 = t;
                                  if(((u_98 != NULL) && (u_98 != v_98)))
                                    _fail(v_98);
                                  else
                                    u_98 = v_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_98), not_null(u_98));
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
  ATerm j_99 = NULL;
  j_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(j_99));
    {
      t = table_get_0(t);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_23;
              e_23 = t;
              {
                ATerm l_99 = NULL;
                ATerm m_99 = NULL;
                m_99 = t;
                if(((l_99 != NULL) && (l_99 != m_99)))
                  _fail(m_99);
                else
                  l_99 = m_99;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_23, not_null(j_99), not_null(l_99));
                  t = table_put_0(t);
                }
              }
              t = e_23;
            }
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_108 (ATerm))
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23;
      m_23 = t;
      {
        ATerm q_99 = NULL;
        ATerm r_99 = NULL;
        t = term_n_23;
        {
          t = get_config_0(t);
          {
            r_99 = t;
            if(((q_99 != NULL) && (q_99 != r_99)))
              _fail(r_99);
            else
              q_99 = r_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_99), term_v_23);
          t = geq_0(t);
        }
      }
      t = m_23;
      t = i_108(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
  v_99 = t;
  u_99 :
  if(match_cons(v_99, sym__2))
    {
      w_99 = ATgetArgument(v_99, 0);
      x_99 = ATgetArgument(v_99, 1);
      t = SSL_WriteToTextFile(not_null(w_99), not_null(x_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL;
  d_100 = t;
  c_100 :
  if(match_cons(d_100, sym__2))
    {
      e_100 = ATgetArgument(d_100, 0);
      f_100 = ATgetArgument(d_100, 1);
      t = SSL_WriteToBinaryFile(not_null(e_100), not_null(f_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_100 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm x_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm o_100 = NULL,p_100 = NULL;
            o_100 = t;
            k_100 :
            if(match_cons(o_100, sym_Output_1))
              {
                p_100 = ATgetArgument(o_100, 0);
                if(((n_100 != NULL) && (n_100 != p_100)))
                  _fail(p_100);
                else
                  n_100 = p_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, r_3);
          LocalPopChoice(a_24);
        }
      else
        {
          t = x_23;
          {
            ATerm q_100 = NULL;
            t = term_b_24;
            {
              q_100 = t;
              if(((n_100 != NULL) && (n_100 != q_100)))
                _fail(q_100);
              else
                n_100 = q_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = w_23;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(n_100);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm r_100 = NULL;
              r_100 = t;
              m_100 :
              if(!(match_cons(r_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm c_101 = NULL,g_101 = NULL,j_101 = NULL,k_101 = NULL;
  ATerm e_24;
  e_24 = t;
  t = dtime_0(t);
  t = e_24;
  {
    t = p_106(t);
    {
      ATerm f_24;
      f_24 = t;
      {
        ATerm f_101 = NULL;
        t = dtime_0(t);
        {
          f_101 = t;
          if(((c_101 != NULL) && (c_101 != f_101)))
            _fail(f_101);
          else
            c_101 = f_101;
        }
      }
      t = f_24;
      {
        g_101 = t;
        b_101 :
        if(match_cons(g_101, sym__2))
          {
            j_101 = ATgetArgument(g_101, 0);
            k_101 = ATgetArgument(g_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_101))), not_null(k_101));
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
ATerm debug_1 (ATerm t, ATerm l_105 (ATerm))
{
  ATerm g_24;
  g_24 = t;
  {
    ATerm y_101 = NULL,a_102 = NULL;
    ATerm h_24;
    h_24 = t;
    {
      ATerm z_101 = NULL;
      t = l_105(t);
      {
        z_101 = t;
        if(((y_101 != NULL) && (y_101 != z_101)))
          _fail(z_101);
        else
          y_101 = z_101;
      }
    }
    t = h_24;
    {
      ATerm b_102 = NULL;
      b_102 = t;
      if(((a_102 != NULL) && (a_102 != b_102)))
        _fail(b_102);
      else
        a_102 = b_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_102)), not_null(y_101)));
        t = printnl_0(t);
      }
    }
  }
  t = g_24;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_102 = NULL;
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_102 = NULL;
      i_102 = t;
      {
        if(((f_102 != NULL) && (f_102 != i_102)))
          _fail(i_102);
        else
          f_102 = i_102;
        t = SSL_ReadFromFile(not_null(f_102));
      }
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm w_3 (ATerm t)
        {
          t = term_k_24;
          return(t);
        }
        t = debug_1(t, w_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  ATerm m_102 = NULL,o_102 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    ATerm n_102 = NULL;
    t = m_91(t);
    {
      n_102 = t;
      if(((m_102 != NULL) && (m_102 != n_102)))
        _fail(n_102);
      else
        m_102 = n_102;
    }
  }
  t = m_24;
  {
    ATerm p_102 = NULL;
    t = n_91(t);
    {
      p_102 = t;
      if(((o_102 != NULL) && (o_102 != p_102)))
        _fail(p_102);
      else
        o_102 = p_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_102), not_null(o_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_102 = NULL;
  ATerm n_24;
  n_24 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 (ATerm t)
        {
          ATerm w_102 = NULL,x_102 = NULL;
          w_102 = t;
          t_102 :
          if(match_cons(w_102, sym_Input_1))
            {
              x_102 = ATgetArgument(w_102, 0);
              if(((v_102 != NULL) && (v_102 != x_102)))
                _fail(x_102);
              else
                v_102 = x_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, x_3);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm y_102 = NULL;
          t = term_r_24;
          {
            y_102 = t;
            if(((v_102 != NULL) && (v_102 != y_102)))
              _fail(y_102);
            else
              v_102 = y_102;
          }
        }
      }
  }
  t = n_24;
  {
    ATerm y_3 (ATerm t)
    {
      t = not_null(v_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm c_103 = NULL;
    c_103 = t;
    b_103 :
    if(!(match_string(c_103, "-v")))
      {
        if(!(match_string(c_103, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_x_24;
    t = set_config_0(t);
    t = term_g_25;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_q_25;
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm f_103 = NULL;
    f_103 = t;
    d_103 :
    if(!(match_string(f_103, "-k")))
      {
        if(!(match_string(f_103, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm c_26;
    c_26 = t;
    {
      ATerm g_103 = NULL;
      ATerm h_103 = NULL;
      t = string_to_int_0(t);
      {
        h_103 = t;
        if(((g_103 != NULL) && (g_103 != h_103)))
          _fail(h_103);
        else
          g_103 = h_103;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(g_103));
        t = set_config_0(t);
      }
    }
    t = c_26;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = ArgOption_3(t, c_4, d_4, e_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_103 = NULL;
  k_103 = t;
  t = SSL_string_to_int(not_null(k_103));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        ATerm s_103 = NULL;
        s_103 = t;
        n_103 :
        if(!(match_string(s_103, "-S")))
          {
            if(!(match_string(s_103, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_h_26;
        t = set_config_0(t);
        t = term_i_26;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_j_26;
        return(t);
      }
      t = Option_3(t, f_4, g_4, h_4);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm t_103 = NULL;
              t_103 = t;
              o_103 :
              if(!(match_string(t_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm w_103 = NULL;
              ATerm m_26;
              m_26 = t;
              {
                ATerm u_103 = NULL;
                ATerm v_103 = NULL;
                t = string_to_int_0(t);
                {
                  v_103 = t;
                  if(((u_103 != NULL) && (u_103 != v_103)))
                    _fail(v_103);
                  else
                    u_103 = v_103;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(u_103));
                  t = set_config_0(t);
                }
              }
              t = m_26;
              {
                ATerm x_103 = NULL;
                x_103 = t;
                if(((w_103 != NULL) && (w_103 != x_103)))
                  _fail(x_103);
                else
                  w_103 = x_103;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_103));
              }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_n_26;
              return(t);
            }
            t = ArgOption_3(t, i_4, j_4, n_4);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm y_103 = NULL;
                y_103 = t;
                r_103 :
                if(!(match_string(y_103, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_p_26;
                t = set_config_0(t);
                t = term_q_26;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_r_26;
                return(t);
              }
              t = Option_3(t, o_4, p_4, q_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm e_104 = NULL;
    e_104 = t;
    b_104 :
    if(!(match_string(e_104, "-o")))
      {
        if(!(match_string(e_104, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm h_104 = NULL;
    ATerm x_26;
    x_26 = t;
    {
      ATerm f_104 = NULL;
      ATerm g_104 = NULL;
      g_104 = t;
      if(((f_104 != NULL) && (f_104 != g_104)))
        _fail(g_104);
      else
        f_104 = g_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(f_104));
        t = set_config_0(t);
      }
    }
    t = x_26;
    {
      ATerm i_104 = NULL;
      i_104 = t;
      if(((h_104 != NULL) && (h_104 != i_104)))
        _fail(i_104);
      else
        h_104 = i_104;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_104));
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  t = ArgOption_3(t, r_4, s_4, t_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm m_104 = NULL;
          m_104 = t;
          l_104 :
          if(!(match_string(m_104, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_i_27;
          t = set_config_0(t);
          t = term_s_27;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_a_28;
          return(t);
        }
        t = Option_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL;
  s_104 = t;
  q_104 :
  if(match_string(s_104, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(s_104) == AT_LIST) && !(ATisEmpty(s_104))))
        {
          t_104 = ATgetFirst((ATermList) s_104);
          u_104 = (ATerm) ATgetNext((ATermList) s_104);
          r_104 :
          if(((ATgetType(u_104) == AT_LIST) && !(ATisEmpty(u_104))))
            {
              v_104 = ATgetFirst((ATermList) u_104);
              w_104 = (ATerm) ATgetNext((ATermList) u_104);
              {
                ATerm a_105 = NULL;
                ATerm k_28;
                k_28 = t;
                {
                  t = not_null(t_104);
                  t = m_0(t);
                }
                t = k_28;
                {
                  ATerm b_105 = NULL;
                  t = not_null(v_104);
                  {
                    t = n_0(t);
                    {
                      b_105 = t;
                      if(((a_105 != NULL) && (a_105 != b_105)))
                        _fail(b_105);
                      else
                        a_105 = b_105;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_104)), not_null(a_105));
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
  ATerm x_4 (ATerm t)
  {
    ATerm i_105 = NULL;
    i_105 = t;
    f_105 :
    if(!(match_string(i_105, "-i")))
      {
        if(!(match_string(i_105, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm n_105 = NULL;
    ATerm l_28;
    l_28 = t;
    {
      ATerm j_105 = NULL;
      ATerm k_105 = NULL;
      k_105 = t;
      if(((j_105 != NULL) && (j_105 != k_105)))
        _fail(k_105);
      else
        j_105 = k_105;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(j_105));
        t = set_config_0(t);
      }
    }
    t = l_28;
    {
      ATerm o_105 = NULL;
      o_105 = t;
      if(((n_105 != NULL) && (n_105 != o_105)))
        _fail(o_105);
      else
        n_105 = o_105;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_105));
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  t = ArgOption_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, term_s_28));
  {
    t = printnl_0(t);
    {
      t = term_k_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_105 = NULL;
  s_105 = t;
  t = SSL_TicksToSeconds(not_null(s_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  w_105 :
  if(match_cons(x_105, sym__2))
    {
      y_105 = ATgetArgument(x_105, 0);
      z_105 = ATgetArgument(x_105, 1);
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_105), not_null(z_105));
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = SSL_addr(not_null(y_105), not_null(z_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_101 (ATerm), ATerm t_101 (ATerm))
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_101(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
        g_106 = t;
        f_106 :
        if(((ATgetType(g_106) == AT_LIST) && !(ATisEmpty(g_106))))
          {
            h_106 = ATgetFirst((ATermList) g_106);
            i_106 = (ATerm) ATgetNext((ATermList) g_106);
            {
              ATerm l_106 = NULL;
              ATerm m_106 = NULL;
              t = not_null(i_106);
              {
                t = foldr_2(t, s_101, t_101);
                {
                  m_106 = t;
                  if(((l_106 != NULL) && (l_106 != m_106)))
                    _fail(m_106);
                  else
                    l_106 = m_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_106), not_null(l_106));
                t = t_101(t);
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
ATerm crush_2 (ATerm t, ATerm w_100 (ATerm), ATerm x_100 (ATerm))
{
  ATerm a_107 = NULL;
  ATerm h_107 = NULL;
  a_107 = t;
  {
    ATerm i_107 = NULL;
    ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL;
    t = not_null(a_107);
    {
      i_107 = t;
      {
        t = SSL_explode_term(not_null(i_107));
        {
          o_107 = t;
          y_106 :
          if(match_cons(o_107, sym__2))
            {
              p_107 = ATgetArgument(o_107, 0);
              q_107 = ATgetArgument(o_107, 1);
              if(((h_107 != NULL) && (h_107 != q_107)))
                _fail(q_107);
              else
                h_107 = q_107;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_107);
      t = foldr_2(t, w_100, x_100);
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
    ATerm a_5 (ATerm t)
    {
      t = term_o_20;
      return(t);
    }
    t = crush_2(t, a_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL;
  w_107 = t;
  v_107 :
  if(match_cons(w_107, sym__2))
    {
      x_107 = ATgetArgument(w_107, 0);
      y_107 = ATgetArgument(w_107, 1);
      {
        ATerm x_28;
        x_28 = t;
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_107), not_null(y_107));
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              t = SSL_gtr(not_null(x_107), not_null(y_107));
            }
        }
        t = x_28;
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
  ATerm e_108 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_108 = NULL,g_108 = NULL,j_108 = NULL;
      f_108 = t;
      d_108 :
      if(match_cons(f_108, sym__2))
        {
          g_108 = ATgetArgument(f_108, 0);
          j_108 = ATgetArgument(f_108, 1);
          {
            if(((e_108 != NULL) && (e_108 != g_108)))
              _fail(g_108);
            else
              e_108 = g_108;
            if(((e_108 != NULL) && (e_108 != j_108)))
              _fail(j_108);
            else
              e_108 = j_108;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_29;
      e_29 = t;
      {
        ATerm m_108 = NULL;
        ATerm n_108 = NULL;
        t = term_n_23;
        {
          t = get_config_0(t);
          {
            n_108 = t;
            if(((m_108 != NULL) && (m_108 != n_108)))
              _fail(n_108);
            else
              m_108 = n_108;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_108), term_k_6);
          t = geq_0(t);
        }
      }
      t = e_29;
      t = h_108(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm r_108 = NULL,t_108 = NULL;
    ATerm f_29;
    f_29 = t;
    {
      ATerm s_108 = NULL;
      t = run_time_0(t);
      {
        s_108 = t;
        if(((r_108 != NULL) && (r_108 != s_108)))
          _fail(s_108);
        else
          r_108 = s_108;
      }
    }
    t = f_29;
    {
      ATerm u_108 = NULL;
      t = term_g_29;
      {
        t = get_config_0(t);
        {
          u_108 = t;
          if(((t_108 != NULL) && (t_108 != u_108)))
            _fail(u_108);
          else
            t_108 = u_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), not_null(r_108)), term_h_29), not_null(t_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_5);
  {
    t = term_o_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_109 = NULL;
  b_109 = t;
  a_109 :
  if(match_cons(b_109, sym_Version_0))
    {
      ATerm d_109 = NULL,f_109 = NULL;
      ATerm j_29;
      j_29 = t;
      {
        ATerm e_109 = NULL;
        t = SSLgetAnnotations(not_null(b_109));
        {
          e_109 = t;
          if(((d_109 != NULL) && (d_109 != e_109)))
            _fail(e_109);
          else
            d_109 = e_109;
        }
      }
      t = j_29;
      {
        ATerm g_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_109));
        {
          g_109 = t;
          if(((f_109 != NULL) && (f_109 != g_109)))
            _fail(g_109);
          else
            f_109 = g_109;
        }
        t = not_null(f_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_5);
  t = n_106(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_109 = NULL;
  m_109 = t;
  t = SSL_table_create(not_null(m_109));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_109 = NULL;
  q_109 = t;
  {
    ATerm o_29;
    o_29 = t;
    {
      t = term_p_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, not_null(q_109));
          t = table_put_0(t);
        }
      }
    }
    t = o_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_109 = NULL;
  u_109 = t;
  t = SSL_table_destroy(not_null(u_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_109 = NULL;
  y_109 = t;
  t = SSL_exit(not_null(y_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  b_110 :
  if(((ATgetType(c_110) == AT_LIST) && ATisEmpty(c_110)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_110) == AT_LIST) && !(ATisEmpty(c_110))))
        {
          d_110 = ATgetFirst((ATermList) c_110);
          e_110 = (ATerm) ATgetNext((ATermList) c_110);
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
  ATerm r_29;
  r_29 = t;
  {
    ATerm h_110 = NULL;
    ATerm q_110 = NULL;
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm i_110 = NULL;
          ATerm j_110 = NULL;
          j_110 = t;
          if(((i_110 != NULL) && (i_110 != j_110)))
            _fail(j_110);
          else
            i_110 = j_110;
          t = (ATerm) ATinsert(ATempty, not_null(i_110));
        }
      }
    {
      q_110 = t;
      if(((h_110 != NULL) && (h_110 != q_110)))
        _fail(q_110);
      else
        h_110 = q_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(h_110));
      t = printnl_0(t);
    }
  }
  t = r_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_110 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm t_110 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = Cons_2(t, d_84, t_110);
      }
    return(t);
  }
  t = t_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL;
  c_111 = t;
  z_110 :
  if(((ATgetType(c_111) == AT_LIST) && !(ATisEmpty(c_111))))
    {
      a_111 = ATgetFirst((ATermList) c_111);
      b_111 = (ATerm) ATgetNext((ATermList) c_111);
      {
        ATerm f_111 = NULL;
        t = not_null(b_111);
        {
          ATerm w_29;
          w_29 = t;
          {
            ATerm g_111 = NULL,i_111 = NULL,k_111 = NULL;
            ATerm x_29;
            x_29 = t;
            {
              ATerm h_111 = NULL;
              t = k_0(t);
              {
                h_111 = t;
                if(((g_111 != NULL) && (g_111 != h_111)))
                  _fail(h_111);
                else
                  g_111 = h_111;
              }
            }
            t = x_29;
            {
              ATerm j_111 = NULL;
              t = not_null(a_111);
              {
                t = i_0(t);
                {
                  j_111 = t;
                  if(((i_111 != NULL) && (i_111 != j_111)))
                    _fail(j_111);
                  else
                    i_111 = j_111;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_111)), not_null(i_111));
                {
                  k_111 = t;
                  if(((f_111 != NULL) && (f_111 != k_111)))
                    _fail(k_111);
                  else
                    f_111 = k_111;
                }
              }
            }
          }
          t = w_29;
          {
            ATerm d_5 (ATerm t)
            {
              t = not_null(f_111);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_111) == AT_LIST) && ATisEmpty(c_111)))
        {
          {
            t = term_q_15;
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
  ATerm e_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_110 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm v_111 = NULL,w_111 = NULL;
  v_111 = t;
  u_111 :
  if(match_cons(v_111, sym_Program_1))
    {
      w_111 = ATgetArgument(v_111, 0);
      {
        ATerm z_111 = NULL,b_112 = NULL;
        ATerm a_112 = NULL;
        t = SSLgetAnnotations(not_null(v_111));
        {
          a_112 = t;
          if(((z_111 != NULL) && (z_111 != a_112)))
            _fail(a_112);
          else
            z_111 = a_112;
        }
        {
          t = not_null(w_111);
          {
            ATerm d_112 = NULL;
            t = t_78(t);
            {
              b_112 = t;
              {
                ATerm e_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_112)), not_null(z_111));
                {
                  e_112 = t;
                  if(((d_112 != NULL) && (d_112 != e_112)))
                    _fail(e_112);
                  else
                    d_112 = e_112;
                }
                t = not_null(d_112);
              }
            }
          }
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
  ATerm p_112 = NULL;
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_112 = NULL;
      t = term_g_29;
      {
        t = get_config_0(t);
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
      }
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm f_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm r_112 = NULL;
            r_112 = t;
            if(((p_112 != NULL) && (p_112 != r_112)))
              _fail(r_112);
            else
              p_112 = r_112;
            return(t);
          }
          t = Program_1(t, g_5);
          return(t);
        }
        t = fetch_1(t, f_5);
      }
    }
  {
    t = term_a_30;
    {
      t = echo_0(t);
      {
        t = term_d_30;
        {
          t = table_get_0(t);
          {
            ATerm h_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_5);
            {
              ATerm i_5 (ATerm t)
              {
                ATerm s_112 = NULL;
                ATerm t_112 = NULL;
                t_112 = t;
                if(((s_112 != NULL) && (s_112 != t_112)))
                  _fail(t_112);
                else
                  s_112 = t_112;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_112)), term_e_30);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_5);
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
  ATerm f_30;
  f_30 = t;
  {
    ATerm y_112 = NULL;
    ATerm c_113 = NULL;
    c_113 = t;
    if(((y_112 != NULL) && (y_112 != c_113)))
      _fail(c_113);
    else
      y_112 = c_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, not_null(y_112)));
      t = printnl_0(t);
    }
  }
  t = f_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_105 (ATerm))
{
  ATerm g_30;
  g_30 = t;
  {
    t = m_105(t);
    t = debug_0(t);
  }
  t = g_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm l_113 = NULL,m_113 = NULL;
  l_113 = t;
  j_113 :
  if(match_cons(l_113, sym_Undefined_1))
    {
      m_113 = ATgetArgument(l_113, 0);
      {
        ATerm p_113 = NULL,r_113 = NULL;
        ATerm q_113 = NULL;
        t = SSLgetAnnotations(not_null(l_113));
        {
          q_113 = t;
          if(((p_113 != NULL) && (p_113 != q_113)))
            _fail(q_113);
          else
            p_113 = q_113;
        }
        {
          t = not_null(m_113);
          {
            ATerm t_113 = NULL;
            t = u_78(t);
            {
              r_113 = t;
              {
                ATerm u_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_113)), not_null(p_113));
                {
                  u_113 = t;
                  if(((t_113 != NULL) && (t_113 != u_113)))
                    _fail(u_113);
                  else
                    t_113 = u_113;
                }
                t = not_null(t_113);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm z_113 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_84, _id);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = Cons_2(t, _id, z_113);
      }
    return(t);
  }
  t = z_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_109 (ATerm))
{
  t = fetch_1(t, k_109);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_114 = NULL;
  e_114 = t;
  d_114 :
  if(match_cons(e_114, sym_Help_0))
    {
      ATerm g_114 = NULL,i_114 = NULL;
      ATerm j_30;
      j_30 = t;
      {
        ATerm h_114 = NULL;
        t = SSLgetAnnotations(not_null(e_114));
        {
          h_114 = t;
          if(((g_114 != NULL) && (g_114 != h_114)))
            _fail(h_114);
          else
            g_114 = h_114;
        }
      }
      t = j_30;
      {
        ATerm j_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_114));
        {
          j_114 = t;
          if(((i_114 != NULL) && (i_114 != j_114)))
            _fail(j_114);
          else
            i_114 = j_114;
        }
        t = not_null(i_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_90 (ATerm))
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_90(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  p_114 = t;
  o_114 :
  if(match_cons(p_114, sym__2))
    {
      q_114 = ATgetArgument(p_114, 0);
      r_114 = ATgetArgument(p_114, 1);
      t = SSL_table_get(not_null(q_114), not_null(r_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym__3))
    {
      z_114 = ATgetArgument(y_114, 0);
      a_115 = ATgetArgument(y_114, 1);
      b_115 = ATgetArgument(y_114, 2);
      {
        ATerm m_30;
        m_30 = t;
        {
          ATerm f_115 = NULL;
          ATerm g_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_114), not_null(a_115));
          {
            ATerm n_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = (ATerm) ATempty;
              }
            {
              g_115 = t;
              if(((f_115 != NULL) && (f_115 != g_115)))
                _fail(g_115);
              else
                f_115 = g_115;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_114), not_null(a_115), (ATerm) ATinsert(CheckATermList(not_null(f_115)), not_null(b_115)));
            t = table_put_0(t);
          }
        }
        t = m_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_110 (ATerm))
{
  ATerm k_115 = NULL;
  ATerm l_115 = NULL;
  t = term_q_15;
  {
    t = p_110(t);
    {
      l_115 = t;
      if(((k_115 != NULL) && (k_115 != l_115)))
        _fail(l_115);
      else
        k_115 = l_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_c_30, not_null(k_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL;
  r_115 = t;
  q_115 :
  if(match_string(r_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_115) == AT_LIST) && !(ATisEmpty(r_115))))
        {
          s_115 = ATgetFirst((ATermList) r_115);
          t_115 = (ATerm) ATgetNext((ATermList) r_115);
          {
            ATerm w_115 = NULL;
            ATerm p_30;
            p_30 = t;
            {
              t = not_null(s_115);
              t = a_0(t);
            }
            t = p_30;
            {
              ATerm x_115 = NULL;
              t = term_q_15;
              {
                t = d_0(t);
                {
                  x_115 = t;
                  if(((w_115 != NULL) && (w_115 != x_115)))
                    _fail(x_115);
                  else
                    w_115 = x_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_115)), not_null(w_115));
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
  ATerm j_5 (ATerm t)
  {
    ATerm c_116 = NULL;
    c_116 = t;
    b_116 :
    if(!(match_string(c_116, "--help")))
      {
        if(!(match_string(c_116, "-h")))
          {
            if(!(match_string(c_116, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_r_30;
    {
      t = set_config_0(t);
      t = term_s_30;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_t_30;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
  f_116 = t;
  e_116 :
  if(((ATgetType(f_116) == AT_LIST) && !(ATisEmpty(f_116))))
    {
      g_116 = ATgetFirst((ATermList) f_116);
      h_116 = (ATerm) ATgetNext((ATermList) f_116);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_116)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_116)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL;
  o_116 = t;
  n_116 :
  if(match_cons(o_116, sym__2))
    {
      p_116 = ATgetArgument(o_116, 0);
      q_116 = ATgetArgument(o_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_23, not_null(p_116), not_null(q_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm u_30;
  u_30 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = n_110(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        {
        }
      }
  }
  t = u_30;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm y_116 = NULL;
      ATerm y_30;
      y_30 = t;
      {
        ATerm w_116 = NULL;
        ATerm x_116 = NULL;
        x_116 = t;
        if(((w_116 != NULL) && (w_116 != x_116)))
          _fail(x_116);
        else
          w_116 = x_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_29, not_null(w_116));
          t = set_config_0(t);
        }
      }
      t = y_30;
      {
        ATerm z_116 = NULL;
        z_116 = t;
        if(((y_116 != NULL) && (y_116 != z_116)))
          _fail(z_116);
        else
          y_116 = z_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_116));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm z_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              {
                t = n_110(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(a_31);
        }
      else
        {
          t = z_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL;
  ATerm d_31;
  d_31 = t;
  {
    ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
    i_117 = t;
    e_117 :
    if(match_cons(i_117, sym__3))
      {
        j_117 = ATgetArgument(i_117, 0);
        k_117 = ATgetArgument(i_117, 1);
        l_117 = ATgetArgument(i_117, 2);
        {
          if(((f_117 != NULL) && (f_117 != j_117)))
            _fail(j_117);
          else
            f_117 = j_117;
          {
            if(((g_117 != NULL) && (g_117 != k_117)))
              _fail(k_117);
            else
              g_117 = k_117;
            {
              if(((h_117 != NULL) && (h_117 != l_117)))
                _fail(l_117);
              else
                h_117 = l_117;
              t = SSL_table_put(not_null(f_117), not_null(g_117), not_null(h_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_110 (ATerm))
{
  ATerm o_117 = NULL;
  ATerm e_31;
  e_31 = t;
  {
    t = term_f_31;
    t = table_put_0(t);
  }
  t = e_31;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_110(t);
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_31;
          k_31 = t;
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_30;
                t = get_config_0(t);
                LocalPopChoice(m_31);
              }
            else
              {
                t = l_31;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_31;
          {
            t = system_usage_0(t);
            {
              t = term_o_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    ATerm p_117 = NULL;
                    p_117 = t;
                    if(((o_117 != NULL) && (o_117 != p_117)))
                      _fail(p_117);
                    else
                      o_117 = p_117;
                    return(t);
                  }
                  t = Undefined_1(t, r_5);
                  return(t);
                }
                t = fetch_1(t, q_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_117)), term_p_31);
                    return(t);
                  }
                  t = say_1(t, s_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                {
                }
              }
          }
        }
      {
        ATerm q_31;
        q_31 = t;
        {
          t = term_b_30;
          t = table_destroy_0(t);
        }
        t = q_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm))
{
  t = parse_options_1(t, t_106);
  {
    t = store_options_0(t);
    {
      t = v_106(t);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_106);
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_106(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = t_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_107(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, k_107);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_5, m_107, n_107, u_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_31;
      x_31 = t;
      {
        ATerm s_117 = NULL;
        ATerm t_117 = NULL;
        t = term_g_29;
        {
          t = get_config_0(t);
          {
            t_117 = t;
            if(((s_117 != NULL) && (s_117 != t_117)))
              _fail(t_117);
            else
              s_117 = t_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, not_null(s_117)));
          t = printnl_0(t);
        }
      }
      t = x_31;
      return(t);
    }
    t = if_verbose2_1(t, w_5);
    return(t);
  }
  t = iowrap_4(t, e_107, f_107, g_107, v_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_107 (ATerm), ATerm d_107 (ATerm))
{
  t = iowrap_3(t, c_107, d_107, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_106 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, z_106);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm b_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, b_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_6);
      return(t);
    }
    t = Specification_1(t, z_5);
    return(t);
  }
  t = iowrap_1(t, y_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}