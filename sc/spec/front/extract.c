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
ATerm term_j_33;
ATerm term_z_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_q_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_q_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_x_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_o_19;
ATerm term_s_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_c_10;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_7;
ATerm term_s_6;
ATerm term_k_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
void init_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Op_2, term_i_11, (ATerm) ATempty);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_c_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_a_15);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_c_20);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_20);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_a_15);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_a_15);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_g_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_a_15);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__3, term_d_31, term_g_31, (ATerm) ATempty);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm o_76 (ATerm), ATerm p_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm Let_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_101 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm alltd_1 (ATerm, ATerm v_89 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm substitute_1 (ATerm, ATerm c_87 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
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
ATerm As_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm Explode_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm Op_2 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm));
ATerm pat_td_1 (ATerm, ATerm p_115 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm t_92 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_103 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm Con_3 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm oncetd_1 (ATerm, ATerm h_89 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_87 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm z_91 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm a_99 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm r_92 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm q_97 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm zip_1 (ATerm, ATerm o_92 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_104 (ATerm), ATerm j_104 (ATerm));
ATerm for_3 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_115 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm union_1 (ATerm, ATerm u_97 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_115 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_77 (ATerm));
ATerm Cons_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_77 (ATerm));
ATerm _2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_94 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_110 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_108 (ATerm));
ATerm debug_1 (ATerm, ATerm o_107 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm crush_2 (ATerm, ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_110 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_108 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_112 (ATerm));
ATerm map_1 (ATerm, ATerm x_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_112 (ATerm));
ATerm Program_1 (ATerm, ATerm c_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_107 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_94 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_111 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_90 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_112 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_112 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_112 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_109 (ATerm), ATerm g_109 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_109 (ATerm));
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
        ATerm z_5;
        z_5 = t;
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
        t = z_5;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_6), not_null(p_6)), term_b_6), not_null(o_6)), term_a_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_6), not_null(b_7)), term_b_6), not_null(a_7)), term_d_6), not_null(z_6)), term_a_6);
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
                ATerm e_6 = t;
                int f_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(f_6);
                  }
                else
                  {
                    t = e_6;
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
  ATerm g_6;
  g_6 = t;
  {
    t = error_0(t);
    {
      t = term_h_6;
      t = exit_0(t);
    }
  }
  t = g_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_6;
  j_6 = t;
  {
    ATerm b_8 = NULL;
    ATerm c_8 = NULL;
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(b_8));
      t = printnl_0(t);
    }
  }
  t = j_6;
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
          ATerm l_6 = t;
          int q_6 = stack_ptr;
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
                            ATerm r_6 = t;
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
                                t = r_6;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), term_s_6);
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
              LocalPopChoice(q_6);
            }
          else
            {
              t = l_6;
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
ATerm Rec_2 (ATerm t, ATerm o_76 (ATerm), ATerm p_76 (ATerm))
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
            t = o_76(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = p_76(t);
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
ATerm SDef_3 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm))
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
            t = s_76(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = t_76(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = u_76(t);
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
ATerm Let_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
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
            t = q_76(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = r_76(t);
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
ATerm sboundin_3 (ATerm t, ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, w_86, w_86);
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, y_86, y_86, w_86);
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = Rec_2(t, y_86, w_86);
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
ATerm crush_3 (ATerm t, ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm))
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
      t = foldr_3(t, l_97, m_97, n_97);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_101 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      ATerm e_7 = t;
      int f_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_101(t);
          LocalPopChoice(f_7);
        }
      else
        {
          t = e_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm g_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL;
          ATerm p_7;
          p_7 = t;
          {
            ATerm t_14 = NULL;
            t = w_101(t);
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          t = p_7;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, t_0);
              t = diff_1(t, y_101);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = x_101(t, r_0, u_14, s_0);
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
          LocalPopChoice(o_7);
        }
      else
        {
          t = g_7;
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
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          ATerm s_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(y_7);
            }
          else
            {
              t = s_7;
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
    t = term_z_7;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm a_8;
    a_8 = t;
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
    t = a_8;
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
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = p_87(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = q_87(t);
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
ATerm alltd_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
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
ATerm substitute_2 (ATerm t, ATerm a_87 (ATerm), ATerm b_87 (ATerm))
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
              t = SubsVar_2(t, a_87, e_1);
              t = b_87(t);
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
ATerm substitute_1 (ATerm t, ATerm c_87 (ATerm))
{
  t = substitute_2(t, c_87, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
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
            t = v_76(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = w_76(t);
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
            ATerm k_8;
            k_8 = t;
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
            t = k_8;
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
  ATerm s_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = s_8;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)), not_null(z_24)), not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_f_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25)))))));
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
        ATerm h_9 = t;
        int i_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_27))))));
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm k_9 = t;
              int l_9 = stack_ptr;
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
                  LocalPopChoice(l_9);
                }
              else
                {
                  t = k_9;
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
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  a_29 = t;
  y_28 :
  if(match_cons(a_29, sym_Match_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      z_28 :
      if(match_cons(b_29, sym_RootApp_1))
        {
          c_29 = ATgetArgument(b_29, 0);
          t = not_null(c_29);
        }
      else
        {
          if(match_cons(b_29, sym_App_2))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(c_29), not_null(d_29));
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
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_Match_1))
    {
      q_29 = ATgetArgument(p_29, 0);
      {
        ATerm s_29 = NULL,t_29 = NULL;
        ATerm x_29 = NULL;
        t = not_null(q_29);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
            u_29 = t;
            l_29 :
            if(match_cons(u_29, sym_RootApp_1))
              {
                v_29 = ATgetArgument(u_29, 0);
                m_29 :
                if(match_cons(v_29, sym_Match_1))
                  {
                    w_29 = ATgetArgument(v_29, 0);
                    {
                      if(((s_29 != NULL) && (s_29 != w_29)))
                        _fail(w_29);
                      else
                        s_29 = w_29;
                      t = not_null(s_29);
                    }
                  }
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
            x_29 = t;
            if(((t_29 != NULL) && (t_29 != x_29)))
              _fail(x_29);
            else
              t_29 = x_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_29));
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
  ATerm m_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = m_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym_Build_1))
    {
      s_30 = ATgetArgument(r_30, 0);
      {
        ATerm x_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
            ATerm y_30 = NULL;
            ATerm f_31 = NULL;
            t = new_0(t);
            {
              y_30 = t;
              {
                if(((w_30 != NULL) && (w_30 != y_30)))
                  _fail(y_30);
                else
                  w_30 = y_30;
                {
                  t = not_null(s_30);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm z_30 = NULL,a_31 = NULL,e_31 = NULL;
                      z_30 = t;
                      g_30 :
                      if(match_cons(z_30, sym_Anno_2))
                        {
                          a_31 = ATgetArgument(z_30, 0);
                          e_31 = ATgetArgument(z_30, 1);
                          {
                            if(((u_30 != NULL) && (u_30 != a_31)))
                              _fail(a_31);
                            else
                              u_30 = a_31;
                            {
                              if(((v_30 != NULL) && (v_30 != e_31)))
                                _fail(e_31);
                              else
                                v_30 = e_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30));
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
                      f_31 = t;
                      if(((x_30 != NULL) && (x_30 != f_31)))
                        _fail(f_31);
                      else
                        x_30 = f_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_30)), not_null(u_30))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_30))));
            LocalPopChoice(z_9);
          }
        else
          {
            t = x_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
                  ATerm k_31 = NULL;
                  ATerm n_31 = NULL;
                  t = new_0(t);
                  {
                    k_31 = t;
                    {
                      if(((i_31 != NULL) && (i_31 != k_31)))
                        _fail(k_31);
                      else
                        i_31 = k_31;
                      {
                        t = not_null(s_30);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm l_31 = NULL,m_31 = NULL;
                            l_31 = t;
                            k_30 :
                            if(match_cons(l_31, sym_RootApp_1))
                              {
                                m_31 = ATgetArgument(l_31, 0);
                                {
                                  if(((h_31 != NULL) && (h_31 != m_31)))
                                    _fail(m_31);
                                  else
                                    h_31 = m_31;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31));
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
                            n_31 = t;
                            if(((j_31 != NULL) && (j_31 != n_31)))
                              _fail(n_31);
                            else
                              j_31 = n_31;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_31))));
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
                    ATerm f_32 = NULL;
                    ATerm l_32 = NULL;
                    t = new_0(t);
                    {
                      f_32 = t;
                      {
                        if(((c_32 != NULL) && (c_32 != f_32)))
                          _fail(f_32);
                        else
                          c_32 = f_32;
                        {
                          t = not_null(s_30);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm g_32 = NULL,h_32 = NULL,k_32 = NULL;
                              g_32 = t;
                              o_30 :
                              if(match_cons(g_32, sym_App_2))
                                {
                                  h_32 = ATgetArgument(g_32, 0);
                                  k_32 = ATgetArgument(g_32, 1);
                                  {
                                    if(((a_32 != NULL) && (a_32 != h_32)))
                                      _fail(h_32);
                                    else
                                      a_32 = h_32;
                                    {
                                      if(((b_32 != NULL) && (b_32 != k_32)))
                                        _fail(k_32);
                                      else
                                        b_32 = k_32;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_32));
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
                              l_32 = t;
                              if(((d_32 != NULL) && (d_32 != l_32)))
                                _fail(l_32);
                              else
                                d_32 = l_32;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_32), not_null(b_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_32)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_32))));
                  }
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
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  q_33 = t;
  o_33 :
  if(match_cons(q_33, sym_Build_1))
    {
      r_33 = ATgetArgument(q_33, 0);
      p_33 :
      if(match_cons(r_33, sym_RootApp_1))
        {
          s_33 = ATgetArgument(r_33, 0);
          t = not_null(s_33);
        }
      else
        {
          if(match_cons(r_33, sym_App_2))
            {
              s_33 = ATgetArgument(r_33, 0);
              t_33 = ATgetArgument(r_33, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_33)), not_null(s_33));
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
ATerm As_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_As_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      {
        ATerm n_34 = NULL,p_34 = NULL;
        ATerm o_34 = NULL;
        t = SSLgetAnnotations(not_null(h_34));
        {
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
        }
        {
          t = not_null(i_34);
          {
            ATerm r_34 = NULL;
            t = y_78(t);
            {
              p_34 = t;
              {
                t = not_null(j_34);
                {
                  ATerm t_34 = NULL;
                  t = z_78(t);
                  {
                    r_34 = t;
                    {
                      ATerm u_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(p_34), not_null(r_34)), not_null(n_34));
                      {
                        u_34 = t;
                        if(((t_34 != NULL) && (t_34 != u_34)))
                          _fail(u_34);
                        else
                          t_34 = u_34;
                      }
                      t = not_null(t_34);
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
ATerm Prim_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Prim_2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        ATerm m_35 = NULL,o_35 = NULL;
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(g_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
        {
          t = not_null(h_35);
          {
            ATerm u_35 = NULL;
            t = e_75(t);
            {
              o_35 = t;
              {
                t = not_null(i_35);
                {
                  ATerm w_35 = NULL;
                  t = f_75(t);
                  {
                    u_35 = t;
                    {
                      ATerm x_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(o_35), not_null(u_35)), not_null(m_35));
                      {
                        x_35 = t;
                        if(((w_35 != NULL) && (w_35 != x_35)))
                          _fail(x_35);
                        else
                          w_35 = x_35;
                      }
                      t = not_null(w_35);
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
ATerm Explode_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym_Explode_2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      {
        ATerm x_36 = NULL,z_36 = NULL;
        ATerm y_36 = NULL;
        t = SSLgetAnnotations(not_null(r_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        {
          t = not_null(s_36);
          {
            ATerm b_37 = NULL;
            t = u_78(t);
            {
              z_36 = t;
              {
                t = not_null(t_36);
                {
                  ATerm d_37 = NULL;
                  t = v_78(t);
                  {
                    b_37 = t;
                    {
                      ATerm e_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(z_36), not_null(b_37)), not_null(x_36));
                      {
                        e_37 = t;
                        if(((d_37 != NULL) && (d_37 != e_37)))
                          _fail(e_37);
                        else
                          d_37 = e_37;
                      }
                      t = not_null(d_37);
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
ATerm Op_2 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm))
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_Op_2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      {
        ATerm h_38 = NULL,j_38 = NULL;
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(v_37));
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
        {
          t = not_null(w_37);
          {
            ATerm l_38 = NULL;
            t = i_77(t);
            {
              j_38 = t;
              {
                t = not_null(x_37);
                {
                  ATerm n_38 = NULL;
                  t = j_77(t);
                  {
                    l_38 = t;
                    {
                      ATerm o_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_38), not_null(l_38)), not_null(h_38));
                      {
                        o_38 = t;
                        if(((n_38 != NULL) && (n_38 != o_38)))
                          _fail(o_38);
                        else
                          n_38 = o_38;
                      }
                      t = not_null(n_38);
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
ATerm pat_td_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_115(t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, p_115);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, p_115);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, p_115);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        {
                          ATerm s_10 = t;
                          int t_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, p_115);
                                  return(t);
                                }
                                t = fetch_1(t, x_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, w_1);
                              LocalPopChoice(t_10);
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = pat_td_1(t, p_115);
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
  ATerm o_39 = NULL,t_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym_Build_1))
    {
      t_39 = ATgetArgument(o_39, 0);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_39 = NULL,a_40 = NULL;
            ATerm e_40 = NULL;
            t = not_null(t_39);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
                b_40 = t;
                g_39 :
                if(match_cons(b_40, sym_RootApp_1))
                  {
                    c_40 = ATgetArgument(b_40, 0);
                    h_39 :
                    if(match_cons(c_40, sym_Build_1))
                      {
                        d_40 = ATgetArgument(c_40, 0);
                        {
                          if(((z_39 != NULL) && (z_39 != d_40)))
                            _fail(d_40);
                          else
                            z_39 = d_40;
                          t = not_null(z_39);
                        }
                      }
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
                e_40 = t;
                if(((a_40 != NULL) && (a_40 != e_40)))
                  _fail(e_40);
                else
                  a_40 = e_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_40));
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
              ATerm u_40 = NULL;
              t = not_null(t_39);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
                  q_40 = t;
                  k_39 :
                  if(match_cons(q_40, sym_App_2))
                    {
                      r_40 = ATgetArgument(q_40, 0);
                      t_40 = ATgetArgument(q_40, 1);
                      l_39 :
                      if(match_cons(r_40, sym_Build_1))
                        {
                          s_40 = ATgetArgument(r_40, 0);
                          {
                            if(((h_40 != NULL) && (h_40 != s_40)))
                              _fail(s_40);
                            else
                              h_40 = s_40;
                            {
                              if(((g_40 != NULL) && (g_40 != t_40)))
                                _fail(t_40);
                              else
                                g_40 = t_40;
                              t = not_null(h_40);
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
                  u_40 = t;
                  if(((i_40 != NULL) && (i_40 != u_40)))
                    _fail(u_40);
                  else
                    i_40 = u_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_40));
            }
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
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      {
        ATerm d_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = d_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  o_41 :
  if(match_cons(v_41, sym_Lets_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_41), not_null(x_41));
    }
  else
    {
      if(match_cons(v_41, sym_LChoices_1))
        {
          w_41 = ATgetArgument(v_41, 0);
          p_41 :
          if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
            {
              s_41 = ATgetFirst((ATermList) w_41);
              t_41 = (ATerm) ATgetNext((ATermList) w_41);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_41)));
            }
          else
            {
              if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
                {
                  t = term_z_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(v_41, sym_Choices_1))
            {
              w_41 = ATgetArgument(v_41, 0);
              q_41 :
              if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
                {
                  s_41 = ATgetFirst((ATermList) w_41);
                  t_41 = (ATerm) ATgetNext((ATermList) w_41);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_41)));
                }
              else
                {
                  if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
                    {
                      t = term_z_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(v_41, sym_Seqs_1))
                {
                  w_41 = ATgetArgument(v_41, 0);
                  r_41 :
                  if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
                    {
                      s_41 = ATgetFirst((ATermList) w_41);
                      t_41 = (ATerm) ATgetNext((ATermList) w_41);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_41)));
                    }
                  else
                    {
                      if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
                        {
                          t = term_h_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(v_41, sym_DefaultVarDec_1))
                    {
                      w_41 = ATgetArgument(v_41, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_11), term_k_11));
                    }
                  else
                    {
                      if(match_cons(v_41, sym_InfixApp_3))
                        {
                          w_41 = ATgetArgument(v_41, 0);
                          x_41 = ATgetArgument(v_41, 1);
                          u_41 = ATgetArgument(v_41, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_41), (ATerm) ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_41)), not_null(w_41))));
                        }
                      else
                        {
                          if(match_cons(v_41, sym_BAM_3))
                            {
                              w_41 = ATgetArgument(v_41, 0);
                              x_41 = ATgetArgument(v_41, 1);
                              u_41 = ATgetArgument(v_41, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(u_41))), not_null(w_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_41))));
                            }
                          else
                            {
                              if(match_cons(v_41, sym_AM_2))
                                {
                                  w_41 = ATgetArgument(v_41, 0);
                                  x_41 = ATgetArgument(v_41, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_41)));
                                }
                              else
                                {
                                  if(match_cons(v_41, sym_MA_2))
                                    {
                                      w_41 = ATgetArgument(v_41, 0);
                                      x_41 = ATgetArgument(v_41, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_41)), not_null(x_41));
                                    }
                                  else
                                    {
                                      if(match_cons(v_41, sym_BA_2))
                                        {
                                          w_41 = ATgetArgument(v_41, 0);
                                          x_41 = ATgetArgument(v_41, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_41)), not_null(w_41));
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  l_43 = t;
  i_43 :
  if(match_cons(l_43, sym__2))
    {
      m_43 = ATgetArgument(l_43, 0);
      p_43 = ATgetArgument(l_43, 1);
      j_43 :
      if(match_cons(m_43, sym__2))
        {
          n_43 = ATgetArgument(m_43, 0);
          o_43 = ATgetArgument(m_43, 1);
          k_43 :
          if(match_cons(p_43, sym__2))
            {
              q_43 = ATgetArgument(p_43, 0);
              r_43 = ATgetArgument(p_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_43)), not_null(n_43)), (ATerm) ATinsert(CheckATermList(not_null(r_43)), not_null(o_43)));
            }
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
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
    {
      a_44 = ATgetFirst((ATermList) z_43);
      b_44 = (ATerm) ATgetNext((ATermList) z_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), not_null(b_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  g_44 :
  if(((ATgetType(h_44) == AT_LIST) && ATisEmpty(h_44)))
    {
      t = term_l_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm t_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, t_92);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  ATerm t_44 (ATerm t)
  {
    ATerm q_44 = NULL;
    ATerm r_44 = NULL;
    t = not_null(n_44);
    {
      ATerm m_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_11;
        }
      {
        t = new_0(t);
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))));
    return(t);
  }
  ATerm u_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))));
    return(t);
  }
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Var_1))
    {
      o_44 = ATgetArgument(n_44, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_44(t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = u_44(t);
          }
      }
    }
  else
    {
      t = t_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Var_1))
    {
      g_45 = ATgetArgument(f_45, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_45 = NULL,l_45 = NULL;
            ATerm k_45 = NULL;
            t = SSLgetAnnotations(not_null(f_45));
            {
              k_45 = t;
              if(((j_45 != NULL) && (j_45 != k_45)))
                _fail(k_45);
              else
                j_45 = k_45;
            }
            {
              t = not_null(g_45);
              {
                ATerm n_45 = NULL;
                t = q_0(t);
                {
                  l_45 = t;
                  {
                    ATerm o_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_45)), not_null(j_45));
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
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm r_45 = NULL,t_45 = NULL;
              ATerm s_45 = NULL;
              t = SSLgetAnnotations(not_null(f_45));
              {
                s_45 = t;
                if(((r_45 != NULL) && (r_45 != s_45)))
                  _fail(s_45);
                else
                  r_45 = s_45;
              }
              {
                t = not_null(g_45);
                {
                  ATerm v_45 = NULL;
                  t = q_0(t);
                  {
                    t_45 = t;
                    {
                      ATerm w_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_45)), not_null(r_45));
                      {
                        w_45 = t;
                        if(((v_45 != NULL) && (v_45 != w_45)))
                          _fail(w_45);
                        else
                          v_45 = w_45;
                      }
                      t = not_null(v_45);
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
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_Prim_2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
        ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
        t = not_null(m_46);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm v_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_11;
              }
            return(t);
          }
          t = fetch_1(t, b_2);
          {
            t = not_null(m_46);
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
                  s_46 = t;
                  h_46 :
                  if(match_cons(s_46, sym__2))
                    {
                      t_46 = ATgetArgument(s_46, 0);
                      u_46 = ATgetArgument(s_46, 1);
                      i_46 :
                      if(match_cons(u_46, sym__2))
                        {
                          v_46 = ATgetArgument(u_46, 0);
                          w_46 = ATgetArgument(u_46, 1);
                          {
                            if(((p_46 != NULL) && (p_46 != t_46)))
                              _fail(t_46);
                            else
                              p_46 = t_46;
                            {
                              if(((q_46 != NULL) && (q_46 != v_46)))
                                _fail(v_46);
                              else
                                q_46 = v_46;
                              if(((r_46 != NULL) && (r_46 != w_46)))
                                _fail(w_46);
                              else
                                r_46 = w_46;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_46)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_46), not_null(r_46))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm))
{
  ATerm z_46 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_103(t);
        t = z_46(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = s_103(t);
      }
    return(t);
  }
  t = z_46(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_103 (ATerm))
{
  t = repeat_2(t, u_103, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_Wld_0))
    {
      ATerm g_47 = NULL,i_47 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm h_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
      }
      t = b_12;
      {
        ATerm j_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(g_47));
        {
          j_47 = t;
          if(((i_47 != NULL) && (i_47 != j_47)))
            _fail(j_47);
          else
            i_47 = j_47;
        }
        t = not_null(i_47);
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
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
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
      t = d_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym_App_2))
    {
      x_47 = ATgetArgument(w_47, 0);
      y_47 = ATgetArgument(w_47, 1);
      {
        ATerm c_48 = NULL,d_50 = NULL;
        ATerm d_48 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          d_48 = t;
          if(((c_48 != NULL) && (c_48 != d_48)))
            _fail(d_48);
          else
            c_48 = d_48;
        }
        {
          t = not_null(x_47);
          {
            ATerm j_51 = NULL;
            t = o_78(t);
            {
              d_50 = t;
              {
                t = not_null(y_47);
                {
                  ATerm l_51 = NULL;
                  t = p_78(t);
                  {
                    j_51 = t;
                    {
                      ATerm m_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(d_50), not_null(j_51)), not_null(c_48));
                      {
                        m_51 = t;
                        if(((l_51 != NULL) && (l_51 != m_51)))
                          _fail(m_51);
                        else
                          l_51 = m_51;
                      }
                      t = not_null(l_51);
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
ATerm Con_3 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm))
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  z_51 = t;
  y_51 :
  if(match_cons(z_51, sym_Con_3))
    {
      a_52 = ATgetArgument(z_51, 0);
      b_52 = ATgetArgument(z_51, 1);
      c_52 = ATgetArgument(z_51, 2);
      {
        ATerm h_52 = NULL,j_52 = NULL;
        ATerm i_52 = NULL;
        t = SSLgetAnnotations(not_null(z_51));
        {
          i_52 = t;
          if(((h_52 != NULL) && (h_52 != i_52)))
            _fail(i_52);
          else
            h_52 = i_52;
        }
        {
          t = not_null(a_52);
          {
            ATerm l_52 = NULL;
            t = l_78(t);
            {
              j_52 = t;
              {
                t = not_null(b_52);
                {
                  ATerm n_52 = NULL;
                  t = m_78(t);
                  {
                    l_52 = t;
                    {
                      t = not_null(c_52);
                      {
                        ATerm p_52 = NULL;
                        t = n_78(t);
                        {
                          n_52 = t;
                          {
                            ATerm q_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_52), not_null(l_52), not_null(n_52)), not_null(h_52));
                            {
                              q_52 = t;
                              if(((p_52 != NULL) && (p_52 != q_52)))
                                _fail(q_52);
                              else
                                p_52 = q_52;
                            }
                            t = not_null(p_52);
                          }
                        }
                      }
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
  ATerm i_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
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
      t = i_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  e_53 = t;
  c_53 :
  if(match_cons(e_53, sym_SRule_1))
    {
      f_53 = ATgetArgument(e_53, 0);
      d_53 :
      if(match_cons(f_53, sym_StratRule_3))
        {
          i_53 = ATgetArgument(f_53, 0);
          j_53 = ATgetArgument(f_53, 1);
          k_53 = ATgetArgument(f_53, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_53))), not_null(i_53)));
        }
      else
        {
          if(match_cons(f_53, sym_Rule_3))
            {
              i_53 = ATgetArgument(f_53, 0);
              j_53 = ATgetArgument(f_53, 1);
              k_53 = ATgetArgument(f_53, 2);
              {
                t = not_null(i_53);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_53))));
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
ATerm Scope_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm z_53 = NULL,c_54 = NULL,d_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Scope_2))
    {
      c_54 = ATgetArgument(z_53, 0);
      d_54 = ATgetArgument(z_53, 1);
      {
        ATerm i_54 = NULL,k_54 = NULL;
        ATerm j_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          j_54 = t;
          if(((i_54 != NULL) && (i_54 != j_54)))
            _fail(j_54);
          else
            i_54 = j_54;
        }
        {
          t = not_null(c_54);
          {
            ATerm m_54 = NULL;
            t = m_75(t);
            {
              k_54 = t;
              {
                t = not_null(d_54);
                {
                  ATerm o_54 = NULL;
                  t = n_75(t);
                  {
                    m_54 = t;
                    {
                      ATerm p_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(k_54), not_null(m_54)), not_null(i_54));
                      {
                        p_54 = t;
                        if(((o_54 != NULL) && (o_54 != p_54)))
                          _fail(p_54);
                        else
                          o_54 = p_54;
                      }
                      t = not_null(o_54);
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
ATerm oncetd_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm v_54 (ATerm t)
  {
    ATerm l_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_89(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = l_12;
        t = _one(t, v_54);
      }
    return(t);
  }
  t = v_54(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  s_55 = t;
  q_55 :
  if(match_cons(s_55, sym_SRule_1))
    {
      t_55 = ATgetArgument(s_55, 0);
      r_55 :
      if(match_cons(t_55, sym_Rule_3))
        {
          u_55 = ATgetArgument(t_55, 0);
          v_55 = ATgetArgument(t_55, 1);
          w_55 = ATgetArgument(t_55, 2);
          {
            ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
            ATerm i_56 = NULL;
            ATerm o_56 = NULL;
            t = new_0(t);
            {
              i_56 = t;
              {
                if(((f_56 != NULL) && (f_56 != i_56)))
                  _fail(i_56);
                else
                  f_56 = i_56;
                {
                  t = not_null(u_55);
                  {
                    ATerm w_56 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
                      j_56 = t;
                      b_55 :
                      if(match_cons(j_56, sym_Con_3))
                        {
                          k_56 = ATgetArgument(j_56, 0);
                          m_56 = ATgetArgument(j_56, 1);
                          n_56 = ATgetArgument(j_56, 2);
                          c_55 :
                          if(match_cons(k_56, sym_Var_1))
                            {
                              l_56 = ATgetArgument(k_56, 0);
                              {
                                if(((e_56 != NULL) && (e_56 != l_56)))
                                  _fail(l_56);
                                else
                                  e_56 = l_56;
                                {
                                  if(((c_56 != NULL) && (c_56 != m_56)))
                                    _fail(m_56);
                                  else
                                    c_56 = m_56;
                                  {
                                    if(((a_56 != NULL) && (a_56 != n_56)))
                                      _fail(n_56);
                                    else
                                      a_56 = n_56;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_56));
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
                      o_56 = t;
                      {
                        if(((g_56 != NULL) && (g_56 != o_56)))
                          _fail(o_56);
                        else
                          g_56 = o_56;
                        {
                          t = not_null(v_55);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
                              p_56 = t;
                              l_55 :
                              if(match_cons(p_56, sym_Con_3))
                                {
                                  q_56 = ATgetArgument(p_56, 0);
                                  s_56 = ATgetArgument(p_56, 1);
                                  t_56 = ATgetArgument(p_56, 2);
                                  m_55 :
                                  if(match_cons(q_56, sym_Var_1))
                                    {
                                      r_56 = ATgetArgument(q_56, 0);
                                      n_55 :
                                      if(match_cons(t_56, sym_Call_2))
                                        {
                                          u_56 = ATgetArgument(t_56, 0);
                                          v_56 = ATgetArgument(t_56, 1);
                                          o_55 :
                                          if(((ATgetType(v_56) == AT_LIST) && ATisEmpty(v_56)))
                                            {
                                              {
                                                if(((e_56 != NULL) && (e_56 != r_56)))
                                                  _fail(r_56);
                                                else
                                                  e_56 = r_56;
                                                {
                                                  if(((d_56 != NULL) && (d_56 != s_56)))
                                                    _fail(s_56);
                                                  else
                                                    d_56 = s_56;
                                                  {
                                                    if(((b_56 != NULL) && (b_56 != u_56)))
                                                      _fail(u_56);
                                                    else
                                                      b_56 = u_56;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_56));
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
                              w_56 = t;
                              if(((h_56 != NULL) && (h_56 != w_56)))
                                _fail(w_56);
                              else
                                h_56 = w_56;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_56)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_56), not_null(h_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_55), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(b_56), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_56), not_null(d_56), term_h_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_56)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_56)))))));
          }
        }
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
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_87 (ATerm))
{
  t = r_87(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, r_87);
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
    ATerm d_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = d_13;
        {
        }
      }
    {
      ATerm j_2 (ATerm t)
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm k_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm r_13 = t;
                    int s_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(s_13);
                      }
                    else
                      {
                        t = r_13;
                        {
                          ATerm x_13 = t;
                          int y_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(y_13);
                            }
                          else
                            {
                              t = x_13;
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
      t = repeat_2(t, j_2, _id);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  h_57 :
  if(match_cons(i_57, sym__0))
    {
      ATerm k_57 = NULL,m_57 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm l_57 = NULL;
        t = SSLgetAnnotations(not_null(i_57));
        {
          l_57 = t;
          if(((k_57 != NULL) && (k_57 != l_57)))
            _fail(l_57);
          else
            k_57 = l_57;
        }
      }
      t = z_13;
      {
        ATerm n_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(k_57));
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
        t = not_null(m_57);
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
  ATerm z_57 = NULL;
  ATerm b_58 = NULL,c_58 = NULL,r_58 = NULL,t_58 = NULL;
  z_57 = t;
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm d_58 = NULL;
      ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
      t = not_null(z_57);
      {
        d_58 = t;
        {
          t = SSL_explode_term(not_null(d_58));
          {
            f_58 = t;
            u_57 :
            if(match_cons(f_58, sym__2))
              {
                g_58 = ATgetArgument(f_58, 0);
                h_58 = ATgetArgument(f_58, 1);
                v_57 :
                if(match_string(g_58, ""))
                  {
                    w_57 :
                    if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
                      {
                        i_58 = ATgetFirst((ATermList) h_58);
                        j_58 = (ATerm) ATgetNext((ATermList) h_58);
                        {
                          if(((b_58 != NULL) && (b_58 != i_58)))
                            _fail(i_58);
                          else
                            b_58 = i_58;
                          if(((c_58 != NULL) && (c_58 != j_58)))
                            _fail(j_58);
                          else
                            c_58 = j_58;
                        }
                      }
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
    t = a_14;
    {
      ATerm b_14;
      b_14 = t;
      {
        ATerm s_58 = NULL;
        t = term_g_9;
        {
          s_58 = t;
          if(((r_58 != NULL) && (r_58 != s_58)))
            _fail(s_58);
          else
            r_58 = s_58;
        }
      }
      t = b_14;
      {
        t = SSL_mkterm(not_null(r_58), not_null(c_58));
        {
          t_58 = t;
          t = not_null(t_58);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm s_59 = NULL;
  ATerm u_59 = NULL,v_59 = NULL;
  s_59 = t;
  {
    ATerm a_60 = NULL;
    ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
    t = not_null(s_59);
    {
      a_60 = t;
      {
        t = SSL_explode_term(not_null(a_60));
        {
          c_60 = t;
          p_59 :
          if(match_cons(c_60, sym__2))
            {
              d_60 = ATgetArgument(c_60, 0);
              e_60 = ATgetArgument(c_60, 1);
              q_59 :
              if(match_string(d_60, ""))
                {
                  r_59 :
                  if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
                    {
                      f_60 = ATgetFirst((ATermList) e_60);
                      g_60 = (ATerm) ATgetNext((ATermList) e_60);
                      {
                        if(((v_59 != NULL) && (v_59 != f_60)))
                          _fail(f_60);
                        else
                          v_59 = f_60;
                        if(((u_59 != NULL) && (u_59 != g_60)))
                          _fail(g_60);
                        else
                          u_59 = g_60;
                      }
                    }
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
    t = not_null(v_59);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm z_91 (ATerm))
{
  ATerm u_60 = NULL,w_60 = NULL,y_60 = NULL;
  ATerm a_61 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL,r_60 = NULL;
        ATerm e_14;
        e_14 = t;
        {
          ATerm q_60 = NULL;
          t = map_1(t, Fst_0);
          {
            t = z_91(t);
            {
              q_60 = t;
              if(((p_60 != NULL) && (p_60 != q_60)))
                _fail(q_60);
              else
                p_60 = q_60;
            }
          }
        }
        t = e_14;
        {
          ATerm s_60 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = a_61(t);
            {
              s_60 = t;
              if(((r_60 != NULL) && (r_60 != s_60)))
                _fail(s_60);
              else
                r_60 = s_60;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(r_60)), not_null(p_60));
        }
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = a_61(t);
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm v_60 = NULL;
      v_60 = t;
      if(((u_60 != NULL) && (u_60 != v_60)))
        _fail(v_60);
      else
        u_60 = v_60;
    }
    t = h_14;
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm x_60 = NULL;
        t = term_g_9;
        {
          x_60 = t;
          if(((w_60 != NULL) && (w_60 != x_60)))
            _fail(x_60);
          else
            w_60 = x_60;
        }
      }
      t = k_14;
      {
        t = SSL_mkterm(not_null(w_60), not_null(u_60));
        {
          y_60 = t;
          t = not_null(y_60);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm k_61 = NULL;
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
  k_61 = t;
  {
    ATerm p_61 = NULL;
    ATerm q_61 = NULL;
    t = new_0(t);
    {
      p_61 = t;
      {
        if(((m_61 != NULL) && (m_61 != p_61)))
          _fail(p_61);
        else
          m_61 = p_61;
        {
          ATerm r_61 = NULL;
          t = new_0(t);
          {
            q_61 = t;
            {
              if(((n_61 != NULL) && (n_61 != q_61)))
                _fail(q_61);
              else
                n_61 = q_61;
              {
                t = new_0(t);
                {
                  r_61 = t;
                  if(((o_61 != NULL) && (o_61 != r_61)))
                    _fail(r_61);
                  else
                    o_61 = r_61;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_61)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_61)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_61))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_61), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_11), term_k_11)), not_null(n_61), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_61)), not_null(o_61), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_61)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm b_62 = NULL,e_62 = NULL,f_62 = NULL;
  b_62 = t;
  a_62 :
  if(match_cons(b_62, sym__2))
    {
      e_62 = ATgetArgument(b_62, 0);
      f_62 = ATgetArgument(b_62, 1);
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(e_62), not_null(f_62));
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = SSL_subtr(not_null(e_62), not_null(f_62));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL;
    s_62 = t;
    k_62 :
    if(match_cons(s_62, sym__2))
      {
        t_62 = ATgetArgument(s_62, 0);
        u_62 = ATgetArgument(s_62, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_62), not_null(u_62), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
    x_62 = t;
    m_62 :
    if(match_cons(x_62, sym__3))
      {
        y_62 = ATgetArgument(x_62, 0);
        z_62 = ATgetArgument(x_62, 1);
        a_63 = ATgetArgument(x_62, 2);
        n_62 :
        if(match_int(y_62, 0))
          {
            t = not_null(a_63);
          }
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
    ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
    k_63 = t;
    r_62 :
    if(match_cons(k_63, sym__3))
      {
        l_63 = ATgetArgument(k_63, 0);
        m_63 = ATgetArgument(k_63, 1);
        n_63 = ATgetArgument(k_63, 2);
        {
          ATerm r_63 = NULL,t_63 = NULL;
          ATerm q_14;
          q_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), term_h_6);
            t = geq_0(t);
          }
          t = q_14;
          {
            ATerm r_14;
            r_14 = t;
            {
              ATerm s_63 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_63), term_h_6);
              {
                t = subt_0(t);
                {
                  s_63 = t;
                  if(((r_63 != NULL) && (r_63 != s_63)))
                    _fail(s_63);
                  else
                    r_63 = s_63;
                }
              }
            }
            t = r_14;
            {
              ATerm u_63 = NULL;
              t = not_null(m_63);
              {
                t = a_99(t);
                {
                  u_63 = t;
                  if(((t_63 != NULL) && (t_63 != u_63)))
                    _fail(u_63);
                  else
                    t_63 = u_63;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(r_63), not_null(m_63), (ATerm) ATinsert(CheckATermList(not_null(n_63)), not_null(t_63)));
            }
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
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  f_64 = t;
  e_64 :
  if(match_cons(f_64, sym__2))
    {
      g_64 = ATgetArgument(f_64, 0);
      h_64 = ATgetArgument(f_64, 1);
      {
        ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
        ATerm x_64 = NULL;
        ATerm y_64 = NULL;
        t = new_0(t);
        {
          x_64 = t;
          {
            if(((u_64 != NULL) && (u_64 != x_64)))
              _fail(x_64);
            else
              u_64 = x_64;
            {
              ATerm z_64 = NULL;
              t = new_0(t);
              {
                y_64 = t;
                {
                  if(((v_64 != NULL) && (v_64 != y_64)))
                    _fail(y_64);
                  else
                    v_64 = y_64;
                  {
                    t = new_0(t);
                    {
                      z_64 = t;
                      if(((w_64 != NULL) && (w_64 != z_64)))
                        _fail(z_64);
                      else
                        w_64 = z_64;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_64)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_64))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_64)))), (ATerm) ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_64))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_64))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_64), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_11), term_k_11)), not_null(v_64), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_64)), not_null(w_64), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_64)));
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
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  i_65 :
  if(match_cons(k_65, sym__2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      j_65 :
      if(((ATgetType(m_65) == AT_LIST) && ATisEmpty(m_65)))
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
ATerm zipr_1 (ATerm t, ATerm r_92 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, r_92);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,r_66 = NULL;
  k_66 = t;
  j_66 :
  if(((ATgetType(k_66) == AT_LIST) && !(ATisEmpty(k_66))))
    {
      l_66 = ATgetFirst((ATermList) k_66);
      r_66 = (ATerm) ATgetNext((ATermList) k_66);
      t = not_null(r_66);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  h_67 :
  if(((ATgetType(j_67) == AT_LIST) && !(ATisEmpty(j_67))))
    {
      k_67 = ATgetFirst((ATermList) j_67);
      l_67 = (ATerm) ATgetNext((ATermList) j_67);
      i_67 :
      if(((ATgetType(l_67) == AT_LIST) && ATisEmpty(l_67)))
        {
          t = not_null(k_67);
        }
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
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  ATerm b_74 (ATerm t)
  {
    ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,b_73 = NULL;
    ATerm x_14;
    x_14 = t;
    {
      ATerm o_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
      ATerm p_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), term_h_6);
      {
        t = add_0(t);
        {
          p_72 = t;
          if(((o_72 != NULL) && (o_72 != p_72)))
            _fail(p_72);
          else
            o_72 = p_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_72), term_a_15);
        {
          t = copy_1(t, new_0);
          {
            q_72 = t;
            u_68 :
            if(((ATgetType(q_72) == AT_LIST) && !(ATisEmpty(q_72))))
              {
                r_72 = ATgetFirst((ATermList) q_72);
                s_72 = (ATerm) ATgetNext((ATermList) q_72);
                {
                  ATerm t_72 = NULL;
                  if(((g_72 != NULL) && (g_72 != r_72)))
                    _fail(r_72);
                  else
                    g_72 = r_72;
                  {
                    if(((h_72 != NULL) && (h_72 != s_72)))
                      _fail(s_72);
                    else
                      h_72 = s_72;
                    {
                      t = not_null(h_72);
                      {
                        ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
                        t = last_0(t);
                        {
                          t_72 = t;
                          {
                            if(((f_72 != NULL) && (f_72 != t_72)))
                              _fail(t_72);
                            else
                              f_72 = t_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_72)), not_null(g_72)), not_null(h_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    u_72 = t;
                                    w_67 :
                                    if(match_cons(u_72, sym__6))
                                      {
                                        v_72 = ATgetArgument(u_72, 0);
                                        w_72 = ATgetArgument(u_72, 1);
                                        x_72 = ATgetArgument(u_72, 2);
                                        y_72 = ATgetArgument(u_72, 3);
                                        z_72 = ATgetArgument(u_72, 4);
                                        a_73 = ATgetArgument(u_72, 5);
                                        {
                                          if(((i_72 != NULL) && (i_72 != v_72)))
                                            _fail(v_72);
                                          else
                                            i_72 = v_72;
                                          {
                                            if(((j_72 != NULL) && (j_72 != w_72)))
                                              _fail(w_72);
                                            else
                                              j_72 = w_72;
                                            {
                                              if(((k_72 != NULL) && (k_72 != x_72)))
                                                _fail(x_72);
                                              else
                                                k_72 = x_72;
                                              {
                                                if(((l_72 != NULL) && (l_72 != y_72)))
                                                  _fail(y_72);
                                                else
                                                  l_72 = y_72;
                                                {
                                                  if(((m_72 != NULL) && (m_72 != z_72)))
                                                    _fail(z_72);
                                                  else
                                                    m_72 = z_72;
                                                  if(((n_72 != NULL) && (n_72 != a_73)))
                                                    _fail(a_73);
                                                  else
                                                    n_72 = a_73;
                                                }
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
    t = x_14;
    {
      ATerm c_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_72)), not_null(k_72)), not_null(h_72));
      {
        t = concat_0(t);
        {
          c_73 = t;
          if(((b_73 != NULL) && (b_73 != c_73)))
            _fail(c_73);
          else
            b_73 = c_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_h_15), not_null(j_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(b_73)), not_null(g_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(l_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(n_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_72))))));
    }
    return(t);
  }
  ATerm c_74 (ATerm t)
  {
    ATerm e_73 = NULL;
    ATerm f_73 = NULL;
    t = new_0(t);
    {
      f_73 = t;
      if(((e_73 != NULL) && (e_73 != f_73)))
        _fail(f_73);
      else
        e_73 = f_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_h_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), (ATerm) ATempty))), term_h_11))));
    return(t);
  }
  ATerm d_74 (ATerm t)
  {
    ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,z_73 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm p_73 = NULL;
      ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
      t = new_0(t);
      {
        p_73 = t;
        {
          if(((i_73 != NULL) && (i_73 != p_73)))
            _fail(p_73);
          else
            i_73 = p_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  q_73 = t;
                  z_68 :
                  if(match_cons(q_73, sym__6))
                    {
                      r_73 = ATgetArgument(q_73, 0);
                      s_73 = ATgetArgument(q_73, 1);
                      v_73 = ATgetArgument(q_73, 2);
                      w_73 = ATgetArgument(q_73, 3);
                      x_73 = ATgetArgument(q_73, 4);
                      y_73 = ATgetArgument(q_73, 5);
                      {
                        if(((j_73 != NULL) && (j_73 != r_73)))
                          _fail(r_73);
                        else
                          j_73 = r_73;
                        {
                          if(((k_73 != NULL) && (k_73 != s_73)))
                            _fail(s_73);
                          else
                            k_73 = s_73;
                          {
                            if(((l_73 != NULL) && (l_73 != v_73)))
                              _fail(v_73);
                            else
                              l_73 = v_73;
                            {
                              if(((m_73 != NULL) && (m_73 != w_73)))
                                _fail(w_73);
                              else
                                m_73 = w_73;
                              {
                                if(((n_73 != NULL) && (n_73 != x_73)))
                                  _fail(x_73);
                                else
                                  n_73 = x_73;
                                if(((o_73 != NULL) && (o_73 != y_73)))
                                  _fail(y_73);
                                else
                                  o_73 = y_73;
                              }
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
    t = i_15;
    {
      ATerm a_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_73), not_null(n_73));
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            t = conc_more_lists_0(t);
          }
        {
          a_74 = t;
          if(((z_73 != NULL) && (z_73 != a_74)))
            _fail(a_74);
          else
            z_73 = a_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_s_15), not_null(k_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_73)), not_null(i_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(m_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(a_72), not_null(o_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_73))))));
    }
    return(t);
  }
  z_71 = t;
  b_69 :
  if(match_cons(z_71, sym__3))
    {
      a_72 = ATgetArgument(z_71, 0);
      b_72 = ATgetArgument(z_71, 1);
      c_72 = ATgetArgument(z_71, 2);
      c_69 :
      if(match_string(b_72, "T"))
        {
          d_69 :
          if(match_int(c_72, 0))
            {
              ATerm t_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_74(t);
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = t_15;
                  t = c_74(t);
                }
            }
          else
            {
              t = b_74(t);
            }
        }
      else
        {
          if(match_string(b_72, "D"))
            {
              t = d_74(t);
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
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  s_74 = t;
  p_74 :
  if(match_cons(s_74, sym__2))
    {
      t_74 = ATgetArgument(s_74, 0);
      y_74 = ATgetArgument(s_74, 1);
      q_74 :
      if(match_cons(t_74, sym__2))
        {
          u_74 = ATgetArgument(t_74, 0);
          x_74 = ATgetArgument(t_74, 1);
          r_74 :
          if(match_cons(u_74, sym_Mod_2))
            {
              v_74 = ATgetArgument(u_74, 0);
              w_74 = ATgetArgument(u_74, 1);
              {
                ATerm h_75 = NULL;
                ATerm i_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_74), not_null(w_74), not_null(x_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      i_75 = t;
                      if(((h_75 != NULL) && (h_75 != i_75)))
                        _fail(i_75);
                      else
                        h_75 = i_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_75), not_null(y_74));
              }
            }
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
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      {
        t = OverloadedDef_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm c_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = JoinDefs1_0(t);
                LocalPopChoice(h_16);
              }
            else
              {
                t = c_16;
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
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  q_75 = t;
  o_75 :
  if(match_cons(q_75, sym__5))
    {
      r_75 = ATgetArgument(q_75, 0);
      u_75 = ATgetArgument(q_75, 1);
      v_75 = ATgetArgument(q_75, 2);
      w_75 = ATgetArgument(q_75, 3);
      x_75 = ATgetArgument(q_75, 4);
      p_75 :
      if(((ATgetType(r_75) == AT_LIST) && !(ATisEmpty(r_75))))
        {
          s_75 = ATgetFirst((ATermList) r_75);
          t_75 = (ATerm) ATgetNext((ATermList) r_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(t_75), not_null(u_75), not_null(v_75), not_null(w_75), (ATerm) ATinsert(CheckATermList(not_null(x_75)), not_null(s_75)));
        }
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
ATerm diff_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
  h_76 = t;
  g_76 :
  if(match_cons(h_76, sym__2))
    {
      i_76 = ATgetArgument(h_76, 0);
      j_76 = ATgetArgument(h_76, 1);
      {
        t = not_null(i_76);
        {
          ATerm n_76 (ATerm t)
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(j_76);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_97, o_2);
                      t = n_76(t);
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
                      t = Cons_2(t, _id, n_76);
                    }
                }
              }
            return(t);
          }
          t = n_76(t);
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
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  a_77 = t;
  y_76 :
  if(match_cons(a_77, sym__2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      z_76 :
      if(((ATgetType(c_77) == AT_LIST) && !(ATisEmpty(c_77))))
        {
          d_77 = ATgetFirst((ATermList) c_77);
          e_77 = (ATerm) ATgetNext((ATermList) c_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_77)), not_null(d_77)), not_null(e_77));
        }
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
  ATerm o_77 = NULL,q_77 = NULL,r_77 = NULL;
  o_77 = t;
  m_77 :
  if(match_cons(o_77, sym__2))
    {
      q_77 = ATgetArgument(o_77, 0);
      r_77 = ATgetArgument(o_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_77)), not_null(q_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  z_77 = t;
  w_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      d_78 = ATgetArgument(z_77, 1);
      x_77 :
      if(((ATgetType(a_78) == AT_LIST) && !(ATisEmpty(a_78))))
        {
          b_78 = ATgetFirst((ATermList) a_78);
          c_78 = (ATerm) ATgetNext((ATermList) a_78);
          y_77 :
          if(((ATgetType(d_78) == AT_LIST) && !(ATisEmpty(d_78))))
            {
              e_78 = ATgetFirst((ATermList) d_78);
              f_78 = (ATerm) ATgetNext((ATermList) d_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_78), not_null(e_78)), (ATerm) ATmakeAppl(sym__2, not_null(c_78), not_null(f_78)));
            }
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
  ATerm w_78 = NULL,x_78 = NULL,a_79 = NULL;
  w_78 = t;
  r_78 :
  if(match_cons(w_78, sym__2))
    {
      x_78 = ATgetArgument(w_78, 0);
      a_79 = ATgetArgument(w_78, 1);
      s_78 :
      if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
        {
          t_78 :
          if(((ATgetType(a_79) == AT_LIST) && ATisEmpty(a_79)))
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
ATerm genzip_4 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  ATerm c_79 (ATerm t)
  {
    ATerm t_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_92(t);
        LocalPopChoice(y_16);
      }
    else
      {
        t = t_16;
        {
          t = k_92(t);
          {
            t = _2(t, m_92, c_79);
            t = l_92(t);
          }
        }
      }
    return(t);
  }
  t = c_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_92 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_92);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL;
  n_79 = t;
  l_79 :
  if(((ATgetType(n_79) == AT_LIST) && !(ATisEmpty(n_79))))
    {
      o_79 = ATgetFirst((ATermList) n_79);
      r_79 = (ATerm) ATgetNext((ATermList) n_79);
      m_79 :
      if(match_cons(o_79, sym__2))
        {
          p_79 = ATgetArgument(o_79, 0);
          q_79 = ATgetArgument(o_79, 1);
          {
            ATerm v_79 = NULL,w_79 = NULL,c_80 = NULL,i_80 = NULL;
            ATerm z_16;
            z_16 = t;
            {
              ATerm x_79 = NULL;
              ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
              t = not_null(q_79);
              {
                x_79 = t;
                {
                  t = SSL_explode_term(not_null(x_79));
                  {
                    z_79 = t;
                    g_79 :
                    if(match_cons(z_79, sym__2))
                      {
                        a_80 = ATgetArgument(z_79, 0);
                        b_80 = ATgetArgument(z_79, 1);
                        {
                          if(((v_79 != NULL) && (v_79 != a_80)))
                            _fail(a_80);
                          else
                            v_79 = a_80;
                          if(((w_79 != NULL) && (w_79 != b_80)))
                            _fail(b_80);
                          else
                            w_79 = b_80;
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
            t = z_16;
            {
              ATerm a_17;
              a_17 = t;
              {
                ATerm d_80 = NULL;
                ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
                t = not_null(p_79);
                {
                  d_80 = t;
                  {
                    t = SSL_explode_term(not_null(d_80));
                    {
                      f_80 = t;
                      j_79 :
                      if(match_cons(f_80, sym__2))
                        {
                          g_80 = ATgetArgument(f_80, 0);
                          h_80 = ATgetArgument(f_80, 1);
                          {
                            if(((v_79 != NULL) && (v_79 != g_80)))
                              _fail(g_80);
                            else
                              v_79 = g_80;
                            if(((c_80 != NULL) && (c_80 != h_80)))
                              _fail(h_80);
                            else
                              c_80 = h_80;
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
              t = a_17;
              {
                ATerm j_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(w_79));
                {
                  t = zip_1(t, _id);
                  {
                    j_80 = t;
                    if(((i_80 != NULL) && (i_80 != j_80)))
                      _fail(j_80);
                    else
                      i_80 = j_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_80), not_null(r_79));
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
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
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  t_80 = t;
  r_80 :
  if(((ATgetType(t_80) == AT_LIST) && !(ATisEmpty(t_80))))
    {
      u_80 = ATgetFirst((ATermList) t_80);
      x_80 = (ATerm) ATgetNext((ATermList) t_80);
      s_80 :
      if(match_cons(u_80, sym__2))
        {
          v_80 = ATgetArgument(u_80, 0);
          w_80 = ATgetArgument(u_80, 1);
          {
            ATerm z_80 = NULL;
            if(((v_80 != NULL) && (v_80 != w_80)))
              _fail(w_80);
            else
              v_80 = w_80;
            {
              if(((z_80 != NULL) && (z_80 != x_80)))
                _fail(x_80);
              else
                z_80 = x_80;
              t = not_null(z_80);
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
  ATerm k_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm e_81 = NULL;
        e_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_81));
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm v_17 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(g_18);
                }
              else
                {
                  t = v_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, s_2);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(s_17);
    }
  else
    {
      t = k_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm))
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL;
  r_81 = t;
  p_81 :
  if(match_cons(r_81, sym__5))
    {
      s_81 = ATgetArgument(r_81, 0);
      v_81 = ATgetArgument(r_81, 1);
      w_81 = ATgetArgument(r_81, 2);
      x_81 = ATgetArgument(r_81, 3);
      y_81 = ATgetArgument(r_81, 4);
      q_81 :
      if(((ATgetType(s_81) == AT_LIST) && !(ATisEmpty(s_81))))
        {
          t_81 = ATgetFirst((ATermList) s_81);
          u_81 = (ATerm) ATgetNext((ATermList) s_81);
          {
            ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,o_82 = NULL,q_82 = NULL,s_82 = NULL;
            ATerm i_18;
            i_18 = t;
            {
              ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(w_81));
              {
                t = c_115(t);
                {
                  j_82 = t;
                  l_81 :
                  if(match_cons(j_82, sym__2))
                    {
                      k_82 = ATgetArgument(j_82, 0);
                      l_82 = ATgetArgument(j_82, 1);
                      {
                        ATerm m_82 = NULL;
                        if(((g_82 != NULL) && (g_82 != k_82)))
                          _fail(k_82);
                        else
                          g_82 = k_82;
                        {
                          if(((f_82 != NULL) && (f_82 != l_82)))
                            _fail(l_82);
                          else
                            f_82 = l_82;
                          {
                            t = not_null(g_82);
                            {
                              ATerm n_82 = NULL;
                              t = d_115(t);
                              {
                                m_82 = t;
                                {
                                  if(((h_82 != NULL) && (h_82 != m_82)))
                                    _fail(m_82);
                                  else
                                    h_82 = m_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_82), not_null(v_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        n_82 = t;
                                        if(((i_82 != NULL) && (i_82 != n_82)))
                                          _fail(n_82);
                                        else
                                          i_82 = n_82;
                                      }
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
            t = i_18;
            {
              ATerm j_18;
              j_18 = t;
              {
                ATerm p_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_82), not_null(u_81));
                {
                  ATerm k_18 = t;
                  int l_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(l_18);
                    }
                  else
                    {
                      t = k_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    p_82 = t;
                    if(((o_82 != NULL) && (o_82 != p_82)))
                      _fail(p_82);
                    else
                      o_82 = p_82;
                  }
                }
              }
              t = j_18;
              {
                ATerm m_18;
                m_18 = t;
                {
                  ATerm r_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_82), not_null(v_81));
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
                  ATerm t_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_81), not_null(g_82), not_null(x_81));
                  {
                    t = e_115(t);
                    {
                      t_82 = t;
                      if(((s_82 != NULL) && (s_82 != t_82)))
                        _fail(t_82);
                      else
                        s_82 = t_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(o_82), not_null(q_82), not_null(f_82), not_null(s_82), not_null(y_81));
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
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  e_83 = t;
  c_83 :
  if(match_cons(e_83, sym__5))
    {
      f_83 = ATgetArgument(e_83, 0);
      g_83 = ATgetArgument(e_83, 1);
      h_83 = ATgetArgument(e_83, 2);
      i_83 = ATgetArgument(e_83, 3);
      j_83 = ATgetArgument(e_83, 4);
      d_83 :
      if(((ATgetType(f_83) == AT_LIST) && ATisEmpty(f_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_83), not_null(j_83));
        }
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
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  r_83 = t;
  q_83 :
  if(match_cons(r_83, sym__3))
    {
      s_83 = ATgetArgument(r_83, 0);
      t_83 = ATgetArgument(r_83, 1);
      u_83 = ATgetArgument(r_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_83), not_null(s_83), not_null(t_83), not_null(u_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm i_104 (ATerm), ATerm j_104 (ATerm))
{
  ATerm z_83 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_104(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          t = j_104(t);
          t = z_83(t);
        }
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm))
{
  t = l_104(t);
  t = while_not_2(t, m_104, n_104);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, n_114, o_114, p_114);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
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
        ATerm z_18 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefinitionExists_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = z_18;
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
    ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL;
    c_84 = t;
    b_84 :
    if(match_cons(c_84, sym__3))
      {
        d_84 = ATgetArgument(c_84, 0);
        e_84 = ATgetArgument(c_84, 1);
        f_84 = ATgetArgument(c_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(f_84)), not_null(e_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_h_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_115 (ATerm))
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym__2))
    {
      p_84 = ATgetArgument(o_84, 0);
      q_84 = ATgetArgument(o_84, 1);
      {
        ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
        ATerm j_19;
        j_19 = t;
        {
          ATerm w_84 = NULL;
          ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
          t = l_115(t);
          {
            w_84 = t;
            {
              if(((t_84 != NULL) && (t_84 != w_84)))
                _fail(w_84);
              else
                t_84 = w_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_84), not_null(p_84), not_null(q_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm k_19 = t;
                    int l_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_84), term_o_19);
                        t = table_get_0(t);
                        LocalPopChoice(l_19);
                      }
                    else
                      {
                        t = k_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_84 = t;
                      m_84 :
                      if(((ATgetType(x_84) == AT_LIST) && !(ATisEmpty(x_84))))
                        {
                          y_84 = ATgetFirst((ATermList) x_84);
                          z_84 = (ATerm) ATgetNext((ATermList) x_84);
                          {
                            if(((u_84 != NULL) && (u_84 != y_84)))
                              _fail(y_84);
                            else
                              u_84 = y_84;
                            {
                              if(((v_84 != NULL) && (v_84 != z_84)))
                                _fail(z_84);
                              else
                                v_84 = z_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_84), term_o_19, (ATerm) ATinsert(CheckATermList(not_null(v_84)), (ATerm) ATinsert(CheckATermList(not_null(u_84)), not_null(p_84))));
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
        t = j_19;
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
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  f_85 = t;
  e_85 :
  if(match_cons(f_85, sym__2))
    {
      g_85 = ATgetArgument(f_85, 0);
      h_85 = ATgetArgument(f_85, 1);
      if(((g_85 != NULL) && (g_85 != h_85)))
        _fail(h_85);
      else
        g_85 = h_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  n_85 = t;
  m_85 :
  if(((ATgetType(n_85) == AT_LIST) && !(ATisEmpty(n_85))))
    {
      o_85 = ATgetFirst((ATermList) n_85);
      p_85 = (ATerm) ATgetNext((ATermList) n_85);
      {
        t = z_97(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm s_85 = NULL;
            s_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_85), not_null(s_85));
              t = y_97(t);
            }
            return(t);
          }
          t = fetch_1(t, x_2);
        }
        t = not_null(p_85);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
  y_85 = t;
  x_85 :
  if(match_cons(y_85, sym__2))
    {
      z_85 = ATgetArgument(y_85, 0);
      a_86 = ATgetArgument(y_85, 1);
      {
        t = not_null(z_85);
        {
          ATerm e_86 (ATerm t)
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_86);
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                {
                  ATerm r_19 = t;
                  int w_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(a_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_97, y_2);
                      t = e_86(t);
                      LocalPopChoice(w_19);
                    }
                  else
                    {
                      t = r_19;
                      t = Cons_2(t, _id, e_86);
                    }
                }
              }
            return(t);
          }
          t = e_86(t);
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
  ATerm j_86 = NULL;
  ATerm m_86 = NULL;
  j_86 = t;
  {
    ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
    t = not_null(j_86);
    {
      ATerm z_2 (ATerm t)
      {
        t = term_x_19;
        return(t);
      }
      t = rewrite_1(t, z_2);
      {
        n_86 = t;
        h_86 :
        if(match_cons(n_86, sym_Defined_2))
          {
            o_86 = ATgetArgument(n_86, 0);
            p_86 = ATgetArgument(n_86, 1);
            i_86 :
            if(match_string(o_86, "e_0"))
              {
                if(((m_86 != NULL) && (m_86 != p_86)))
                  _fail(p_86);
                else
                  m_86 = p_86;
              }
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
    t = not_null(m_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,z_86 = NULL;
  u_86 = t;
  t_86 :
  if(((ATgetType(u_86) == AT_LIST) && !(ATisEmpty(u_86))))
    {
      v_86 = ATgetFirst((ATermList) u_86);
      z_86 = (ATerm) ATgetNext((ATermList) u_86);
      t = not_null(v_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  g_87 :
  if(match_cons(h_87, sym__2))
    {
      i_87 = ATgetArgument(h_87, 0);
      j_87 = ATgetArgument(h_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_87), not_null(j_87));
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
ATerm rewrite_1 (ATerm t, ATerm n_115 (ATerm))
{
  ATerm s_87 = NULL;
  ATerm u_87 = NULL;
  s_87 = t;
  {
    ATerm v_87 = NULL;
    t = term_a_15;
    {
      t = n_115(t);
      {
        v_87 = t;
        if(((u_87 != NULL) && (u_87 != v_87)))
          _fail(v_87);
        else
          u_87 = v_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_87), not_null(s_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  c_88 :
  if(match_cons(d_88, sym__2))
    {
      e_88 = ATgetArgument(d_88, 0);
      f_88 = ATgetArgument(d_88, 1);
      {
        ATerm j_88 = NULL,k_88 = NULL;
        ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
        t = not_null(d_88);
        {
          ATerm a_3 (ATerm t)
          {
            t = term_y_19;
            return(t);
          }
          t = rewrite_1(t, a_3);
          {
            l_88 = t;
            a_88 :
            if(match_cons(l_88, sym_Defined_3))
              {
                m_88 = ATgetArgument(l_88, 0);
                n_88 = ATgetArgument(l_88, 1);
                o_88 = ATgetArgument(l_88, 2);
                b_88 :
                if(match_string(m_88, "c_0"))
                  {
                    if(((j_88 != NULL) && (j_88 != n_88)))
                      _fail(n_88);
                    else
                      j_88 = n_88;
                    if(((k_88 != NULL) && (k_88 != o_88)))
                      _fail(o_88);
                    else
                      k_88 = o_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(k_88)), not_null(j_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_98(t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
        v_88 = t;
        u_88 :
        if(((ATgetType(v_88) == AT_LIST) && !(ATisEmpty(v_88))))
          {
            w_88 = ATgetFirst((ATermList) v_88);
            x_88 = (ATerm) ATgetNext((ATermList) v_88);
            {
              ATerm a_89 = NULL,c_89 = NULL;
              ATerm b_20;
              b_20 = t;
              {
                ATerm b_89 = NULL;
                t = not_null(w_88);
                {
                  t = p_98(t);
                  {
                    b_89 = t;
                    if(((a_89 != NULL) && (a_89 != b_89)))
                      _fail(b_89);
                    else
                      a_89 = b_89;
                  }
                }
              }
              t = b_20;
              {
                ATerm d_89 = NULL;
                t = not_null(x_88);
                {
                  t = foldr_3(t, n_98, o_98, p_98);
                  {
                    d_89 = t;
                    if(((c_89 != NULL) && (c_89 != d_89)))
                      _fail(d_89);
                    else
                      c_89 = d_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_89), not_null(c_89));
                  t = o_98(t);
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
  ATerm b_3 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_h_6;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL;
    p_89 = t;
    o_89 :
    if(match_cons(p_89, sym_SDef_3))
      {
        q_89 = ATgetArgument(p_89, 0);
        r_89 = ATgetArgument(p_89, 1);
        s_89 = ATgetArgument(p_89, 2);
        {
          ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
          ATerm d_20;
          d_20 = t;
          {
            ATerm c_90 = NULL;
            t = not_null(r_89);
            {
              ATerm d_90 = NULL;
              t = length_0(t);
              {
                c_90 = t;
                {
                  if(((a_90 != NULL) && (a_90 != c_90)))
                    _fail(c_90);
                  else
                    a_90 = c_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), not_null(a_90));
                    {
                      ATerm e_90 = NULL,g_90 = NULL;
                      ATerm i_20 = t;
                      int j_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(j_20);
                        }
                      else
                        {
                          t = i_20;
                          t = (ATerm) ATempty;
                        }
                      {
                        d_90 = t;
                        {
                          if(((z_89 != NULL) && (z_89 != d_90)))
                            _fail(d_90);
                          else
                            z_89 = d_90;
                          {
                            ATerm f_90 = NULL;
                            t = not_null(q_89);
                            {
                              ATerm k_20 = t;
                              int o_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(o_20);
                                }
                              else
                                {
                                  t = k_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                f_90 = t;
                                if(((e_90 != NULL) && (e_90 != f_90)))
                                  _fail(f_90);
                                else
                                  e_90 = f_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(a_90)), not_null(e_90));
                              {
                                t = union_1(t, eq_0);
                                {
                                  g_90 = t;
                                  {
                                    if(((b_90 != NULL) && (b_90 != g_90)))
                                      _fail(g_90);
                                    else
                                      b_90 = g_90;
                                    {
                                      ATerm q_20;
                                      q_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_89), not_null(a_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_t_20, not_null(p_89), not_null(z_89)));
                                        {
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_y_19;
                                            return(t);
                                          }
                                          t = assert_1(t, e_3);
                                        }
                                      }
                                      t = q_20;
                                      {
                                        ATerm u_20;
                                        u_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), (ATerm) ATmakeAppl(sym_Defined_2, term_v_20, not_null(b_90)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_x_19;
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = u_20;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = d_20;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, d_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm n_90 = NULL;
  ATerm o_90 = NULL;
  t = sort_defs_0(t);
  {
    o_90 = t;
    if(((n_90 != NULL) && (n_90 != o_90)))
      _fail(o_90);
    else
      n_90 = o_90;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_20), not_null(n_90), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm w_90 = NULL,x_90 = NULL;
  w_90 = t;
  u_90 :
  if(match_cons(w_90, sym_Strategies_1))
    {
      x_90 = ATgetArgument(w_90, 0);
      {
        ATerm a_91 = NULL,c_91 = NULL;
        ATerm b_91 = NULL;
        t = SSLgetAnnotations(not_null(w_90));
        {
          b_91 = t;
          if(((a_91 != NULL) && (a_91 != b_91)))
            _fail(b_91);
          else
            a_91 = b_91;
        }
        {
          t = not_null(x_90);
          {
            ATerm e_91 = NULL;
            t = n_77(t);
            {
              c_91 = t;
              {
                ATerm f_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_91)), not_null(a_91));
                {
                  f_91 = t;
                  if(((e_91 != NULL) && (e_91 != f_91)))
                    _fail(f_91);
                  else
                    e_91 = f_91;
                }
                t = not_null(e_91);
              }
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
ATerm Cons_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
  s_91 = t;
  r_91 :
  if(((ATgetType(s_91) == AT_LIST) && !(ATisEmpty(s_91))))
    {
      t_91 = ATgetFirst((ATermList) s_91);
      u_91 = (ATerm) ATgetNext((ATermList) s_91);
      {
        ATerm y_91 = NULL,c_92 = NULL;
        ATerm b_92 = NULL;
        t = SSLgetAnnotations(not_null(s_91));
        {
          b_92 = t;
          if(((y_91 != NULL) && (y_91 != b_92)))
            _fail(b_92);
          else
            y_91 = b_92;
        }
        {
          t = not_null(t_91);
          {
            ATerm e_92 = NULL;
            t = c_75(t);
            {
              c_92 = t;
              {
                t = not_null(u_91);
                {
                  ATerm g_92 = NULL;
                  t = d_75(t);
                  {
                    e_92 = t;
                    {
                      ATerm h_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_92)), not_null(c_92)), not_null(y_91));
                      {
                        h_92 = t;
                        if(((g_92 != NULL) && (g_92 != h_92)))
                          _fail(h_92);
                        else
                          g_92 = h_92;
                      }
                      t = not_null(g_92);
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
ATerm Specification_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm a_93 = NULL,b_93 = NULL;
  a_93 = t;
  z_92 :
  if(match_cons(a_93, sym_Specification_1))
    {
      b_93 = ATgetArgument(a_93, 0);
      {
        ATerm e_93 = NULL,g_93 = NULL;
        ATerm f_93 = NULL;
        t = SSLgetAnnotations(not_null(a_93));
        {
          f_93 = t;
          if(((e_93 != NULL) && (e_93 != f_93)))
            _fail(f_93);
          else
            e_93 = f_93;
        }
        {
          t = not_null(b_93);
          {
            ATerm i_93 = NULL;
            t = p_77(t);
            {
              g_93 = t;
              {
                ATerm j_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_93)), not_null(e_93));
                {
                  j_93 = t;
                  if(((i_93 != NULL) && (i_93 != j_93)))
                    _fail(j_93);
                  else
                    i_93 = j_93;
                }
                t = not_null(i_93);
              }
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
ATerm _2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm u_93 = NULL,w_93 = NULL,z_93 = NULL;
  u_93 = t;
  t_93 :
  if(match_cons(u_93, sym__2))
    {
      w_93 = ATgetArgument(u_93, 0);
      z_93 = ATgetArgument(u_93, 1);
      {
        ATerm d_94 = NULL,f_94 = NULL;
        ATerm e_94 = NULL;
        t = SSLgetAnnotations(not_null(u_93));
        {
          e_94 = t;
          if(((d_94 != NULL) && (d_94 != e_94)))
            _fail(e_94);
          else
            d_94 = e_94;
        }
        {
          t = not_null(w_93);
          {
            ATerm j_94 = NULL;
            t = t_73(t);
            {
              f_94 = t;
              {
                t = not_null(z_93);
                {
                  ATerm l_94 = NULL;
                  t = u_73(t);
                  {
                    j_94 = t;
                    {
                      ATerm o_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_94), not_null(j_94)), not_null(d_94));
                      {
                        o_94 = t;
                        if(((l_94 != NULL) && (l_94 != o_94)))
                          _fail(o_94);
                        else
                          l_94 = o_94;
                      }
                      t = not_null(l_94);
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
  ATerm w_94 = NULL;
  ATerm y_20;
  y_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm x_94 = NULL,y_94 = NULL;
      x_94 = t;
      v_94 :
      if(match_cons(x_94, sym_Program_1))
        {
          y_94 = ATgetArgument(x_94, 0);
          if(((w_94 != NULL) && (w_94 != y_94)))
            _fail(y_94);
          else
            w_94 = y_94;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_21), not_null(w_94)), term_z_20));
      {
        t = printnl_0(t);
        {
          t = term_h_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
  c_95 = t;
  b_95 :
  if(match_cons(c_95, sym__2))
    {
      d_95 = ATgetArgument(c_95, 0);
      e_95 = ATgetArgument(c_95, 1);
      {
        ATerm c_21;
        c_21 = t;
        t = SSL_printnl(not_null(d_95), not_null(e_95));
        t = c_21;
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
  ATerm j_95 = NULL;
  j_95 = t;
  t = SSL_implode_string(not_null(j_95));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL;
        o_95 = t;
        n_95 :
        if(((ATgetType(o_95) == AT_LIST) && !(ATisEmpty(o_95))))
          {
            p_95 = ATgetFirst((ATermList) o_95);
            q_95 = (ATerm) ATgetNext((ATermList) o_95);
            {
              t = not_null(p_95);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(q_95);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm a_96 = NULL;
  ATerm c_96 = NULL;
  a_96 = t;
  {
    ATerm d_96 = NULL;
    ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
    t = not_null(a_96);
    {
      d_96 = t;
      {
        t = SSL_explode_term(not_null(d_96));
        {
          f_96 = t;
          y_95 :
          if(match_cons(f_96, sym__2))
            {
              g_96 = ATgetArgument(f_96, 0);
              h_96 = ATgetArgument(f_96, 1);
              z_95 :
              if(match_string(g_96, ""))
                {
                  if(((c_96 != NULL) && (c_96 != h_96)))
                    _fail(h_96);
                  else
                    c_96 = h_96;
                }
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
      t = not_null(c_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm l_96 (ATerm t)
  {
    ATerm g_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_96);
        LocalPopChoice(i_21);
      }
    else
      {
        t = g_21;
        {
          t = Nil_0(t);
          t = m_94(t);
        }
      }
    return(t);
  }
  t = l_96(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym__2))
    {
      p_96 = ATgetArgument(o_96, 0);
      q_96 = ATgetArgument(o_96, 1);
      {
        t = not_null(p_96);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(q_96);
            return(t);
          }
          t = at_end_1(t, k_3);
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
  ATerm j_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = j_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_96 = NULL;
  v_96 = t;
  t = SSL_explode_string(not_null(v_96));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_is_string(not_null(z_96));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_21 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = v_21;
      {
        ATerm e_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm l_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_22);
                }
              else
                {
                  t = l_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(k_22);
          }
        else
          {
            t = e_22;
            {
              ATerm i_97 = NULL,o_97 = NULL,p_97 = NULL;
              i_97 = t;
              h_97 :
              if(match_cons(i_97, sym_Path_1))
                {
                  o_97 = ATgetArgument(i_97, 0);
                  t = not_null(o_97);
                }
              else
                {
                  if(match_cons(i_97, sym_Var_1))
                    {
                      o_97 = ATgetArgument(i_97, 0);
                      {
                        t = not_null(o_97);
                        {
                          ATerm v_22 = t;
                          int w_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_22);
                            }
                          else
                            {
                              t = v_22;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_x_22;
                                  return(t);
                                }
                                t = debug_1(t, m_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_97, sym_Prefix_2))
                        {
                          o_97 = ATgetArgument(i_97, 0);
                          p_97 = ATgetArgument(i_97, 1);
                          {
                            ATerm b_98 = NULL,d_98 = NULL;
                            ATerm y_22;
                            y_22 = t;
                            {
                              ATerm c_98 = NULL;
                              t = not_null(o_97);
                              {
                                t = eval_config_0(t);
                                {
                                  c_98 = t;
                                  if(((b_98 != NULL) && (b_98 != c_98)))
                                    _fail(c_98);
                                  else
                                    b_98 = c_98;
                                }
                              }
                            }
                            t = y_22;
                            {
                              ATerm e_98 = NULL;
                              t = not_null(p_97);
                              {
                                t = eval_config_0(t);
                                {
                                  e_98 = t;
                                  if(((d_98 != NULL) && (d_98 != e_98)))
                                    _fail(e_98);
                                  else
                                    d_98 = e_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_98), not_null(d_98));
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
  ATerm r_98 = NULL;
  r_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(r_98));
    {
      t = table_get_0(t);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm c_23;
              c_23 = t;
              {
                ATerm t_98 = NULL;
                ATerm u_98 = NULL;
                u_98 = t;
                if(((t_98 != NULL) && (t_98 != u_98)))
                  _fail(u_98);
                else
                  t_98 = u_98;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_22, not_null(r_98), not_null(t_98));
                  t = table_put_0(t);
                }
              }
              t = c_23;
            }
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_110 (ATerm))
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_23;
      k_23 = t;
      {
        ATerm y_98 = NULL;
        ATerm b_99 = NULL;
        t = term_l_23;
        {
          t = get_config_0(t);
          {
            b_99 = t;
            if(((y_98 != NULL) && (y_98 != b_99)))
              _fail(b_99);
            else
              y_98 = b_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_98), term_m_23);
          t = geq_0(t);
        }
      }
      t = k_23;
      t = l_110(t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym__2))
    {
      g_99 = ATgetArgument(f_99, 0);
      h_99 = ATgetArgument(f_99, 1);
      t = SSL_WriteToTextFile(not_null(g_99), not_null(h_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL;
  n_99 = t;
  m_99 :
  if(match_cons(n_99, sym__2))
    {
      o_99 = ATgetArgument(n_99, 0);
      p_99 = ATgetArgument(n_99, 1);
      t = SSL_WriteToBinaryFile(not_null(o_99), not_null(p_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_99 = NULL;
  ATerm n_23;
  n_23 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm y_99 = NULL,z_99 = NULL;
            y_99 = t;
            u_99 :
            if(match_cons(y_99, sym_Output_1))
              {
                z_99 = ATgetArgument(y_99, 0);
                if(((x_99 != NULL) && (x_99 != z_99)))
                  _fail(z_99);
                else
                  x_99 = z_99;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          {
            ATerm a_100 = NULL;
            t = term_x_23;
            {
              a_100 = t;
              if(((x_99 != NULL) && (x_99 != a_100)))
                _fail(a_100);
              else
                x_99 = a_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = n_23;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(x_99);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm b_100 = NULL;
              b_100 = t;
              w_99 :
              if(!(match_cons(b_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm h_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL;
  ATerm c_24;
  c_24 = t;
  t = dtime_0(t);
  t = c_24;
  {
    t = s_108(t);
    {
      ATerm d_24;
      d_24 = t;
      {
        ATerm i_100 = NULL;
        t = dtime_0(t);
        {
          i_100 = t;
          if(((h_100 != NULL) && (h_100 != i_100)))
            _fail(i_100);
          else
            h_100 = i_100;
        }
      }
      t = d_24;
      {
        j_100 = t;
        g_100 :
        if(match_cons(j_100, sym__2))
          {
            k_100 = ATgetArgument(j_100, 0);
            l_100 = ATgetArgument(j_100, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_100)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_100))), not_null(l_100));
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
ATerm debug_1 (ATerm t, ATerm o_107 (ATerm))
{
  ATerm e_24;
  e_24 = t;
  {
    ATerm s_100 = NULL,u_100 = NULL;
    ATerm f_24;
    f_24 = t;
    {
      ATerm t_100 = NULL;
      t = o_107(t);
      {
        t_100 = t;
        if(((s_100 != NULL) && (s_100 != t_100)))
          _fail(t_100);
        else
          s_100 = t_100;
      }
    }
    t = f_24;
    {
      ATerm v_100 = NULL;
      v_100 = t;
      if(((u_100 != NULL) && (u_100 != v_100)))
        _fail(v_100);
      else
        u_100 = v_100;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_100)), not_null(s_100)));
        t = printnl_0(t);
      }
    }
  }
  t = e_24;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_100 = NULL;
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_101 = NULL;
      a_101 = t;
      {
        if(((z_100 != NULL) && (z_100 != a_101)))
          _fail(a_101);
        else
          z_100 = a_101;
        t = SSL_ReadFromFile(not_null(z_100));
      }
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm t_3 (ATerm t)
        {
          t = term_i_24;
          return(t);
        }
        t = debug_1(t, t_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm))
{
  ATerm e_101 = NULL,g_101 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm f_101 = NULL;
    t = j_91(t);
    {
      f_101 = t;
      if(((e_101 != NULL) && (e_101 != f_101)))
        _fail(f_101);
      else
        e_101 = f_101;
    }
  }
  t = j_24;
  {
    ATerm h_101 = NULL;
    t = k_91(t);
    {
      h_101 = t;
      if(((g_101 != NULL) && (g_101 != h_101)))
        _fail(h_101);
      else
        g_101 = h_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_101), not_null(g_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_101 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 (ATerm t)
        {
          ATerm o_101 = NULL,p_101 = NULL;
          o_101 = t;
          l_101 :
          if(match_cons(o_101, sym_Input_1))
            {
              p_101 = ATgetArgument(o_101, 0);
              if(((n_101 != NULL) && (n_101 != p_101)))
                _fail(p_101);
              else
                n_101 = p_101;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, u_3);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm q_101 = NULL;
          t = term_o_24;
          {
            q_101 = t;
            if(((n_101 != NULL) && (n_101 != q_101)))
              _fail(q_101);
            else
              n_101 = q_101;
          }
        }
      }
  }
  t = k_24;
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(n_101);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm u_101 = NULL;
    u_101 = t;
    t_101 :
    if(!(match_string(u_101, "-v")))
      {
        if(!(match_string(u_101, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_r_24;
    t = set_config_0(t);
    t = term_w_24;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm c_102 = NULL;
    c_102 = t;
    a_102 :
    if(!(match_string(c_102, "-k")))
      {
        if(!(match_string(c_102, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm g_25;
    g_25 = t;
    {
      ATerm d_102 = NULL;
      ATerm e_102 = NULL;
      t = string_to_int_0(t);
      {
        e_102 = t;
        if(((d_102 != NULL) && (d_102 != e_102)))
          _fail(e_102);
        else
          d_102 = e_102;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_25, not_null(d_102));
        t = set_config_0(t);
      }
    }
    t = g_25;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_c_26;
    return(t);
  }
  t = ArgOption_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_102 = NULL;
  h_102 = t;
  t = SSL_string_to_int(not_null(h_102));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        ATerm p_102 = NULL;
        p_102 = t;
        k_102 :
        if(!(match_string(p_102, "-S")))
          {
            if(!(match_string(p_102, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_f_26;
        t = set_config_0(t);
        t = term_g_26;
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_h_26;
        return(t);
      }
      t = Option_3(t, c_4, d_4, e_4);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm q_102 = NULL;
              q_102 = t;
              l_102 :
              if(!(match_string(q_102, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              ATerm t_102 = NULL;
              ATerm k_26;
              k_26 = t;
              {
                ATerm r_102 = NULL;
                ATerm s_102 = NULL;
                t = string_to_int_0(t);
                {
                  s_102 = t;
                  if(((r_102 != NULL) && (r_102 != s_102)))
                    _fail(s_102);
                  else
                    r_102 = s_102;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_23, not_null(r_102));
                  t = set_config_0(t);
                }
              }
              t = k_26;
              {
                ATerm u_102 = NULL;
                u_102 = t;
                if(((t_102 != NULL) && (t_102 != u_102)))
                  _fail(u_102);
                else
                  t_102 = u_102;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_102));
              }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = term_l_26;
              return(t);
            }
            t = ArgOption_3(t, f_4, g_4, h_4);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm i_4 (ATerm t)
              {
                ATerm v_102 = NULL;
                v_102 = t;
                o_102 :
                if(!(match_string(v_102, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_n_26;
                t = set_config_0(t);
                t = term_o_26;
                return(t);
              }
              ATerm n_4 (ATerm t)
              {
                t = term_p_26;
                return(t);
              }
              t = Option_3(t, i_4, j_4, n_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm b_103 = NULL;
    b_103 = t;
    y_102 :
    if(!(match_string(b_103, "-o")))
      {
        if(!(match_string(b_103, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm e_103 = NULL;
    ATerm u_26;
    u_26 = t;
    {
      ATerm c_103 = NULL;
      ATerm d_103 = NULL;
      d_103 = t;
      if(((c_103 != NULL) && (c_103 != d_103)))
        _fail(d_103);
      else
        c_103 = d_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_26, not_null(c_103));
        t = set_config_0(t);
      }
    }
    t = u_26;
    {
      ATerm f_103 = NULL;
      f_103 = t;
      if(((e_103 != NULL) && (e_103 != f_103)))
        _fail(f_103);
      else
        e_103 = f_103;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_103));
    }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  t = ArgOption_3(t, o_4, p_4, q_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = y_26;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm j_103 = NULL;
          j_103 = t;
          i_103 :
          if(!(match_string(j_103, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_c_27;
          t = set_config_0(t);
          t = term_e_27;
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_i_27;
          return(t);
        }
        t = Option_3(t, r_4, s_4, t_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm p_103 = NULL,q_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL;
  p_103 = t;
  n_103 :
  if(match_string(p_103, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(p_103) == AT_LIST) && !(ATisEmpty(p_103))))
        {
          q_103 = ATgetFirst((ATermList) p_103);
          v_103 = (ATerm) ATgetNext((ATermList) p_103);
          o_103 :
          if(((ATgetType(v_103) == AT_LIST) && !(ATisEmpty(v_103))))
            {
              w_103 = ATgetFirst((ATermList) v_103);
              x_103 = (ATerm) ATgetNext((ATermList) v_103);
              {
                ATerm b_104 = NULL;
                ATerm s_27;
                s_27 = t;
                {
                  t = not_null(q_103);
                  t = m_0(t);
                }
                t = s_27;
                {
                  ATerm c_104 = NULL;
                  t = not_null(w_103);
                  {
                    t = n_0(t);
                    {
                      c_104 = t;
                      if(((b_104 != NULL) && (b_104 != c_104)))
                        _fail(c_104);
                      else
                        b_104 = c_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_103)), not_null(b_104));
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
  ATerm u_4 (ATerm t)
  {
    ATerm p_104 = NULL;
    p_104 = t;
    g_104 :
    if(!(match_string(p_104, "-i")))
      {
        if(!(match_string(p_104, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm s_104 = NULL;
    ATerm a_28;
    a_28 = t;
    {
      ATerm q_104 = NULL;
      ATerm r_104 = NULL;
      r_104 = t;
      if(((q_104 != NULL) && (q_104 != r_104)))
        _fail(r_104);
      else
        q_104 = r_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_28, not_null(q_104));
        t = set_config_0(t);
      }
    }
    t = a_28;
    {
      ATerm t_104 = NULL;
      t_104 = t;
      if(((s_104 != NULL) && (s_104 != t_104)))
        _fail(t_104);
      else
        s_104 = t_104;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_104));
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_l_28;
    return(t);
  }
  t = ArgOption_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, term_q_28));
  {
    t = printnl_0(t);
    {
      t = term_h_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_104 = NULL;
  x_104 = t;
  t = SSL_TicksToSeconds(not_null(x_104));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
  c_105 = t;
  b_105 :
  if(match_cons(c_105, sym__2))
    {
      d_105 = ATgetArgument(c_105, 0);
      e_105 = ATgetArgument(c_105, 1);
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_105), not_null(e_105));
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            t = SSL_addr(not_null(d_105), not_null(e_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_98(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
        l_105 = t;
        k_105 :
        if(((ATgetType(l_105) == AT_LIST) && !(ATisEmpty(l_105))))
          {
            m_105 = ATgetFirst((ATermList) l_105);
            n_105 = (ATerm) ATgetNext((ATermList) l_105);
            {
              ATerm q_105 = NULL;
              ATerm r_105 = NULL;
              t = not_null(n_105);
              {
                t = foldr_2(t, l_98, m_98);
                {
                  r_105 = t;
                  if(((q_105 != NULL) && (q_105 != r_105)))
                    _fail(r_105);
                  else
                    q_105 = r_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_105), not_null(q_105));
                t = m_98(t);
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
ATerm crush_2 (ATerm t, ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  ATerm y_105 = NULL;
  ATerm a_106 = NULL;
  y_105 = t;
  {
    ATerm b_106 = NULL;
    ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL;
    t = not_null(y_105);
    {
      b_106 = t;
      {
        t = SSL_explode_term(not_null(b_106));
        {
          d_106 = t;
          x_105 :
          if(match_cons(d_106, sym__2))
            {
              e_106 = ATgetArgument(d_106, 0);
              f_106 = ATgetArgument(d_106, 1);
              if(((a_106 != NULL) && (a_106 != f_106)))
                _fail(f_106);
              else
                a_106 = f_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_106);
      t = foldr_2(t, j_97, k_97);
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
    ATerm x_4 (ATerm t)
    {
      t = term_c_20;
      return(t);
    }
    t = crush_2(t, x_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  k_106 :
  if(match_cons(l_106, sym__2))
    {
      m_106 = ATgetArgument(l_106, 0);
      n_106 = ATgetArgument(l_106, 1);
      {
        ATerm v_28;
        v_28 = t;
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_106), not_null(n_106));
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
              t = SSL_gtr(not_null(m_106), not_null(n_106));
            }
        }
        t = v_28;
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
  ATerm t_106 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
      u_106 = t;
      s_106 :
      if(match_cons(u_106, sym__2))
        {
          v_106 = ATgetArgument(u_106, 0);
          w_106 = ATgetArgument(u_106, 1);
          {
            if(((t_106 != NULL) && (t_106 != v_106)))
              _fail(v_106);
            else
              t_106 = v_106;
            if(((t_106 != NULL) && (t_106 != w_106)))
              _fail(w_106);
            else
              t_106 = w_106;
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
      t = e_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_110 (ATerm))
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29;
      i_29 = t;
      {
        ATerm z_106 = NULL;
        ATerm a_107 = NULL;
        t = term_l_23;
        {
          t = get_config_0(t);
          {
            a_107 = t;
            if(((z_106 != NULL) && (z_106 != a_107)))
              _fail(a_107);
            else
              z_106 = a_107;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_106), term_h_6);
          t = geq_0(t);
        }
      }
      t = i_29;
      t = k_110(t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm e_107 = NULL,g_107 = NULL;
    ATerm j_29;
    j_29 = t;
    {
      ATerm f_107 = NULL;
      t = run_time_0(t);
      {
        f_107 = t;
        if(((e_107 != NULL) && (e_107 != f_107)))
          _fail(f_107);
        else
          e_107 = f_107;
      }
    }
    t = j_29;
    {
      ATerm h_107 = NULL;
      t = term_k_29;
      {
        t = get_config_0(t);
        {
          h_107 = t;
          if(((g_107 != NULL) && (g_107 != h_107)))
            _fail(h_107);
          else
            g_107 = h_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_29), not_null(e_107)), term_n_29), not_null(g_107)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  {
    t = term_c_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_107 = NULL;
  q_107 = t;
  n_107 :
  if(match_cons(q_107, sym_Version_0))
    {
      ATerm s_107 = NULL,u_107 = NULL;
      ATerm y_29;
      y_29 = t;
      {
        ATerm t_107 = NULL;
        t = SSLgetAnnotations(not_null(q_107));
        {
          t_107 = t;
          if(((s_107 != NULL) && (s_107 != t_107)))
            _fail(t_107);
          else
            s_107 = t_107;
        }
      }
      t = y_29;
      {
        ATerm v_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_107));
        {
          v_107 = t;
          if(((u_107 != NULL) && (u_107 != v_107)))
            _fail(v_107);
          else
            u_107 = v_107;
        }
        t = not_null(u_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_108 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, z_4);
  t = q_108(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  t = SSL_table_create(not_null(a_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_108 = NULL;
  e_108 = t;
  {
    ATerm d_30;
    d_30 = t;
    {
      t = term_e_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, not_null(e_108));
          t = table_put_0(t);
        }
      }
    }
    t = d_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_108 = NULL;
  i_108 = t;
  t = SSL_table_destroy(not_null(i_108));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_108 = NULL;
  m_108 = t;
  t = SSL_exit(not_null(m_108));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_108 = NULL,t_108 = NULL,u_108 = NULL;
  r_108 = t;
  p_108 :
  if(((ATgetType(r_108) == AT_LIST) && ATisEmpty(r_108)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_108) == AT_LIST) && !(ATisEmpty(r_108))))
        {
          t_108 = ATgetFirst((ATermList) r_108);
          u_108 = (ATerm) ATgetNext((ATermList) r_108);
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
  ATerm h_30;
  h_30 = t;
  {
    ATerm b_109 = NULL;
    ATerm k_109 = NULL;
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          ATerm d_109 = NULL;
          ATerm e_109 = NULL;
          e_109 = t;
          if(((d_109 != NULL) && (d_109 != e_109)))
            _fail(e_109);
          else
            d_109 = e_109;
          t = (ATerm) ATinsert(ATempty, not_null(d_109));
        }
      }
    {
      k_109 = t;
      if(((b_109 != NULL) && (b_109 != k_109)))
        _fail(k_109);
      else
        b_109 = k_109;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(b_109));
      t = printnl_0(t);
    }
  }
  t = h_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm r_109 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = Cons_2(t, x_93, r_109);
      }
    return(t);
  }
  t = r_109(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL;
  a_110 = t;
  x_109 :
  if(((ATgetType(a_110) == AT_LIST) && !(ATisEmpty(a_110))))
    {
      y_109 = ATgetFirst((ATermList) a_110);
      z_109 = (ATerm) ATgetNext((ATermList) a_110);
      {
        ATerm d_110 = NULL;
        t = not_null(z_109);
        {
          ATerm n_30;
          n_30 = t;
          {
            ATerm e_110 = NULL,g_110 = NULL,i_110 = NULL;
            ATerm p_30;
            p_30 = t;
            {
              ATerm f_110 = NULL;
              t = k_0(t);
              {
                f_110 = t;
                if(((e_110 != NULL) && (e_110 != f_110)))
                  _fail(f_110);
                else
                  e_110 = f_110;
              }
            }
            t = p_30;
            {
              ATerm h_110 = NULL;
              t = not_null(y_109);
              {
                t = i_0(t);
                {
                  h_110 = t;
                  if(((g_110 != NULL) && (g_110 != h_110)))
                    _fail(h_110);
                  else
                    g_110 = h_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_110)), not_null(g_110));
                {
                  i_110 = t;
                  if(((d_110 != NULL) && (d_110 != i_110)))
                    _fail(i_110);
                  else
                    d_110 = i_110;
                }
              }
            }
          }
          t = n_30;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(d_110);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_110) == AT_LIST) && ATisEmpty(a_110)))
        {
          {
            t = term_a_15;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm v_110 = NULL,w_110 = NULL;
  v_110 = t;
  u_110 :
  if(match_cons(v_110, sym_Program_1))
    {
      w_110 = ATgetArgument(v_110, 0);
      {
        ATerm z_110 = NULL,b_111 = NULL;
        ATerm a_111 = NULL;
        t = SSLgetAnnotations(not_null(v_110));
        {
          a_111 = t;
          if(((z_110 != NULL) && (z_110 != a_111)))
            _fail(a_111);
          else
            z_110 = a_111;
        }
        {
          t = not_null(w_110);
          {
            ATerm d_111 = NULL;
            t = c_81(t);
            {
              b_111 = t;
              {
                ATerm e_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_111)), not_null(z_110));
                {
                  e_111 = t;
                  if(((d_111 != NULL) && (d_111 != e_111)))
                    _fail(e_111);
                  else
                    d_111 = e_111;
                }
                t = not_null(d_111);
              }
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
  ATerm m_111 = NULL;
  ATerm t_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_111 = NULL;
      t = term_k_29;
      {
        t = get_config_0(t);
        {
          o_111 = t;
          if(((m_111 != NULL) && (m_111 != o_111)))
            _fail(o_111);
          else
            m_111 = o_111;
        }
      }
      LocalPopChoice(b_31);
    }
  else
    {
      t = t_30;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm p_111 = NULL;
            p_111 = t;
            if(((m_111 != NULL) && (m_111 != p_111)))
              _fail(p_111);
            else
              m_111 = p_111;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = fetch_1(t, c_5);
      }
    }
  {
    t = term_c_31;
    {
      t = echo_0(t);
      {
        t = term_o_31;
        {
          t = table_get_0(t);
          {
            ATerm e_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, e_5);
            {
              ATerm f_5 (ATerm t)
              {
                ATerm q_111 = NULL;
                ATerm r_111 = NULL;
                r_111 = t;
                if(((q_111 != NULL) && (q_111 != r_111)))
                  _fail(r_111);
                else
                  q_111 = r_111;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_111)), term_p_31);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, f_5);
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
  ATerm q_31;
  q_31 = t;
  {
    ATerm w_111 = NULL;
    ATerm x_111 = NULL;
    x_111 = t;
    if(((w_111 != NULL) && (w_111 != x_111)))
      _fail(x_111);
    else
      w_111 = x_111;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, not_null(w_111)));
      t = printnl_0(t);
    }
  }
  t = q_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_107 (ATerm))
{
  ATerm r_31;
  r_31 = t;
  {
    t = p_107(t);
    t = debug_0(t);
  }
  t = r_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm e_112 = NULL,f_112 = NULL;
  e_112 = t;
  d_112 :
  if(match_cons(e_112, sym_Undefined_1))
    {
      f_112 = ATgetArgument(e_112, 0);
      {
        ATerm i_112 = NULL,k_112 = NULL;
        ATerm j_112 = NULL;
        t = SSLgetAnnotations(not_null(e_112));
        {
          j_112 = t;
          if(((i_112 != NULL) && (i_112 != j_112)))
            _fail(j_112);
          else
            i_112 = j_112;
        }
        {
          t = not_null(f_112);
          {
            ATerm m_112 = NULL;
            t = d_81(t);
            {
              k_112 = t;
              {
                ATerm t_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_112)), not_null(i_112));
                {
                  t_112 = t;
                  if(((m_112 != NULL) && (m_112 != t_112)))
                    _fail(t_112);
                  else
                    m_112 = t_112;
                }
                t = not_null(m_112);
              }
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
ATerm fetch_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm y_112 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_94, _id);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = Cons_2(t, _id, y_112);
      }
    return(t);
  }
  t = y_112(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_111 (ATerm))
{
  t = fetch_1(t, n_111);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_113 = NULL;
  d_113 = t;
  c_113 :
  if(match_cons(d_113, sym_Help_0))
    {
      ATerm f_113 = NULL,h_113 = NULL;
      ATerm u_31;
      u_31 = t;
      {
        ATerm g_113 = NULL;
        t = SSLgetAnnotations(not_null(d_113));
        {
          g_113 = t;
          if(((f_113 != NULL) && (f_113 != g_113)))
            _fail(g_113);
          else
            f_113 = g_113;
        }
      }
      t = u_31;
      {
        ATerm i_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_113));
        {
          i_113 = t;
          if(((h_113 != NULL) && (h_113 != i_113)))
            _fail(i_113);
          else
            h_113 = i_113;
        }
        t = not_null(h_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_90 (ATerm))
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_90(t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL;
  o_113 = t;
  n_113 :
  if(match_cons(o_113, sym__2))
    {
      p_113 = ATgetArgument(o_113, 0);
      q_113 = ATgetArgument(o_113, 1);
      t = SSL_table_get(not_null(p_113), not_null(q_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL;
  x_113 = t;
  w_113 :
  if(match_cons(x_113, sym__3))
    {
      y_113 = ATgetArgument(x_113, 0);
      z_113 = ATgetArgument(x_113, 1);
      a_114 = ATgetArgument(x_113, 2);
      {
        ATerm x_31;
        x_31 = t;
        {
          ATerm e_114 = NULL;
          ATerm f_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_113), not_null(z_113));
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                t = (ATerm) ATempty;
              }
            {
              f_114 = t;
              if(((e_114 != NULL) && (e_114 != f_114)))
                _fail(f_114);
              else
                e_114 = f_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_113), not_null(z_113), (ATerm) ATinsert(CheckATermList(not_null(e_114)), not_null(a_114)));
            t = table_put_0(t);
          }
        }
        t = x_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm j_114 = NULL;
  ATerm k_114 = NULL;
  t = term_a_15;
  {
    t = s_112(t);
    {
      k_114 = t;
      if(((j_114 != NULL) && (j_114 != k_114)))
        _fail(k_114);
      else
        j_114 = k_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_31, term_g_31, not_null(j_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
  t_114 = t;
  s_114 :
  if(match_string(t_114, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_114) == AT_LIST) && !(ATisEmpty(t_114))))
        {
          u_114 = ATgetFirst((ATermList) t_114);
          v_114 = (ATerm) ATgetNext((ATermList) t_114);
          {
            ATerm y_114 = NULL;
            ATerm e_32;
            e_32 = t;
            {
              t = not_null(u_114);
              t = a_0(t);
            }
            t = e_32;
            {
              ATerm z_114 = NULL;
              t = term_a_15;
              {
                t = d_0(t);
                {
                  z_114 = t;
                  if(((y_114 != NULL) && (y_114 != z_114)))
                    _fail(z_114);
                  else
                    y_114 = z_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_114)), not_null(y_114));
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
  ATerm g_5 (ATerm t)
  {
    ATerm h_115 = NULL;
    h_115 = t;
    g_115 :
    if(!(match_string(h_115, "--help")))
      {
        if(!(match_string(h_115, "-h")))
          {
            if(!(match_string(h_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_j_32;
    {
      t = set_config_0(t);
      t = term_m_32;
    }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  t = Option_3(t, g_5, h_5, i_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_115 = NULL,m_115 = NULL,q_115 = NULL;
  k_115 = t;
  j_115 :
  if(((ATgetType(k_115) == AT_LIST) && !(ATisEmpty(k_115))))
    {
      m_115 = ATgetFirst((ATermList) k_115);
      q_115 = (ATerm) ATgetNext((ATermList) k_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL;
  w_115 = t;
  v_115 :
  if(match_cons(w_115, sym__2))
    {
      x_115 = ATgetArgument(w_115, 0);
      y_115 = ATgetArgument(w_115, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_22, not_null(x_115), not_null(y_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm o_32;
  o_32 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_32;
        t = q_112(t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        {
        }
      }
  }
  t = o_32;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm g_116 = NULL;
      ATerm s_32;
      s_32 = t;
      {
        ATerm e_116 = NULL;
        ATerm f_116 = NULL;
        f_116 = t;
        if(((e_116 != NULL) && (e_116 != f_116)))
          _fail(f_116);
        else
          e_116 = f_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(e_116));
          t = set_config_0(t);
        }
      }
      t = s_32;
      {
        ATerm h_116 = NULL;
        h_116 = t;
        if(((g_116 != NULL) && (g_116 != h_116)))
          _fail(h_116);
        else
          g_116 = h_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_116));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              {
                t = q_112(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
  ATerm x_32;
  x_32 = t;
  {
    ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL;
    q_116 = t;
    m_116 :
    if(match_cons(q_116, sym__3))
      {
        r_116 = ATgetArgument(q_116, 0);
        s_116 = ATgetArgument(q_116, 1);
        t_116 = ATgetArgument(q_116, 2);
        {
          if(((n_116 != NULL) && (n_116 != r_116)))
            _fail(r_116);
          else
            n_116 = r_116;
          {
            if(((o_116 != NULL) && (o_116 != s_116)))
              _fail(s_116);
            else
              o_116 = s_116;
            {
              if(((p_116 != NULL) && (p_116 != t_116)))
                _fail(t_116);
              else
                p_116 = t_116;
              t = SSL_table_put(not_null(n_116), not_null(o_116), not_null(p_116));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_112 (ATerm))
{
  ATerm w_116 = NULL;
  ATerm y_32;
  y_32 = t;
  {
    t = term_z_32;
    t = table_put_0(t);
  }
  t = y_32;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_112(t);
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_5);
    {
      ATerm c_33 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_33;
          e_33 = t;
          {
            ATerm f_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_32;
                t = get_config_0(t);
                LocalPopChoice(g_33);
              }
            else
              {
                t = f_33;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_33;
          {
            t = system_usage_0(t);
            {
              t = term_c_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_33);
        }
      else
        {
          t = c_33;
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm x_116 = NULL;
                    x_116 = t;
                    if(((w_116 != NULL) && (w_116 != x_116)))
                      _fail(x_116);
                    else
                      w_116 = x_116;
                    return(t);
                  }
                  t = Undefined_1(t, n_5);
                  return(t);
                }
                t = fetch_1(t, m_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_116)), term_j_33);
                    return(t);
                  }
                  t = say_1(t, o_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                {
                }
              }
          }
        }
      {
        ATerm k_33;
        k_33 = t;
        {
          t = term_d_31;
          t = table_destroy_0(t);
        }
        t = k_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm))
{
  t = parse_options_1(t, w_108);
  {
    t = store_options_0(t);
    {
      t = y_108(t);
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_108);
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm n_33 = t;
              int u_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_108(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_33);
                }
              else
                {
                  t = n_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_109(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_109);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_5, p_109, q_109, r_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      ATerm x_33;
      x_33 = t;
      {
        ATerm a_117 = NULL;
        ATerm b_117 = NULL;
        t = term_k_29;
        {
          t = get_config_0(t);
          {
            b_117 = t;
            if(((a_117 != NULL) && (a_117 != b_117)))
              _fail(b_117);
            else
              a_117 = b_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, not_null(a_117)));
          t = printnl_0(t);
        }
      }
      t = x_33;
      return(t);
    }
    t = if_verbose2_1(t, t_5);
    return(t);
  }
  t = iowrap_4(t, h_109, i_109, j_109, s_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_109 (ATerm), ATerm g_109 (ATerm))
{
  t = iowrap_3(t, f_109, g_109, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_109 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    t = _2(t, _id, c_109);
    return(t);
  }
  t = iowrap_2(t, u_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, y_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, x_5);
      return(t);
    }
    t = Specification_1(t, w_5);
    return(t);
  }
  t = iowrap_1(t, v_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
