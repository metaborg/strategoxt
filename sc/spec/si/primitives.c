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
  init_constant_terms();
}
ATerm term_i_19;
ATerm term_p_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_u_9;
ATerm term_c_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_k_5;
void init_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Op_2, term_k_5, (ATerm) ATempty);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Var_1, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_g_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_g_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_g_10);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_g_10);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, (ATerm) ATempty);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm EvalPrimitive_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm union_1 (ATerm, ATerm b_79 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm crush_3 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm collect_om_1 (ATerm, ATerm r_77 (ATerm));
ATerm collect_1 (ATerm, ATerm t_77 (ATerm));
ATerm get_primitives_0 (ATerm);
ATerm _2 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_85 (ATerm));
ATerm debug_1 (ATerm, ATerm c_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_81 (ATerm), ATerm i_81 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm crush_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_89 (ATerm));
ATerm map_1 (ATerm, ATerm e_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_89 (ATerm));
ATerm Program_1 (ATerm, ATerm v_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_85 (ATerm));
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(t_1);
    {
      b_2 = t;
      {
        t = SSL_explode_term(not_null(b_2));
        {
          d_2 = t;
          f_1 :
          if(match_cons(d_2, sym__2))
            {
              e_2 = ATgetArgument(d_2, 0);
              f_2 = ATgetArgument(d_2, 1);
              g_1 :
              if(match_string(e_2, ""))
                {
                  h_1 :
                  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      h_2 = (ATerm) ATgetNext((ATermList) f_2);
                      s_1 :
                      if(((ATgetType(h_2) == AT_LIST) && !(ATisEmpty(h_2))))
                        {
                          i_2 = ATgetFirst((ATermList) h_2);
                          j_2 = (ATerm) ATgetNext((ATermList) h_2);
                          {
                            if(((y_1 != NULL) && (y_1 != g_2)))
                              _fail(g_2);
                            else
                              y_1 = g_2;
                            {
                              if(((a_2 != NULL) && (a_2 != i_2)))
                                _fail(i_2);
                              else
                                a_2 = i_2;
                              if(((z_1 != NULL) && (z_1 != j_2)))
                                _fail(j_2);
                              else
                                z_1 = j_2;
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
    t = not_null(a_2);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL,w_2 = NULL;
  t_2 = t;
  {
    ATerm x_2 = NULL;
    ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
    t = not_null(t_2);
    {
      x_2 = t;
      {
        t = SSL_explode_term(not_null(x_2));
        {
          z_2 = t;
          q_2 :
          if(match_cons(z_2, sym__2))
            {
              a_3 = ATgetArgument(z_2, 0);
              b_3 = ATgetArgument(z_2, 1);
              r_2 :
              if(match_string(a_3, ""))
                {
                  s_2 :
                  if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
                    {
                      c_3 = ATgetFirst((ATermList) b_3);
                      d_3 = (ATerm) ATgetNext((ATermList) b_3);
                      {
                        if(((w_2 != NULL) && (w_2 != c_3)))
                          _fail(c_3);
                        else
                          w_2 = c_3;
                        if(((v_2 != NULL) && (v_2 != d_3)))
                          _fail(d_3);
                        else
                          v_2 = d_3;
                      }
                    }
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
    t = not_null(w_2);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm EvalPrimitive_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym_Prim_2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      {
        ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
        ATerm a_4 = NULL;
        t = not_null(s_3);
        {
          ATerm f_4 = NULL;
          ATerm b_0 (ATerm t)
          {
            ATerm y_3 = NULL;
            ATerm z_3 = NULL;
            t = new_0(t);
            {
              z_3 = t;
              if(((y_3 != NULL) && (y_3 != z_3)))
                _fail(z_3);
              else
                y_3 = z_3;
            }
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_3));
            return(t);
          }
          t = map_1(t, b_0);
          {
            a_4 = t;
            {
              if(((w_3 != NULL) && (w_3 != a_4)))
                _fail(a_4);
              else
                w_3 = a_4;
              {
                t = not_null(w_3);
                {
                  ATerm i_4 = NULL;
                  ATerm c_0 (ATerm t)
                  {
                    t = term_p_5;
                    return(t);
                  }
                  ATerm e_0 (ATerm t)
                  {
                    ATerm b_4 = NULL,d_4 = NULL;
                    ATerm q_5;
                    q_5 = t;
                    {
                      ATerm c_4 = NULL;
                      t = Fst_0(t);
                      {
                        c_4 = t;
                        if(((b_4 != NULL) && (b_4 != c_4)))
                          _fail(c_4);
                        else
                          b_4 = c_4;
                      }
                    }
                    t = q_5;
                    {
                      ATerm e_4 = NULL;
                      t = Snd_0(t);
                      {
                        e_4 = t;
                        if(((d_4 != NULL) && (d_4 != e_4)))
                          _fail(e_4);
                        else
                          d_4 = e_4;
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_4)), not_null(b_4)));
                    }
                    return(t);
                  }
                  t = foldr_2(t, c_0, e_0);
                  {
                    f_4 = t;
                    {
                      if(((v_3 != NULL) && (v_3 != f_4)))
                        _fail(f_4);
                      else
                        v_3 = f_4;
                      {
                        t = not_null(w_3);
                        {
                          ATerm f_0 (ATerm t)
                          {
                            ATerm g_4 = NULL;
                            ATerm h_4 = NULL;
                            h_4 = t;
                            if(((g_4 != NULL) && (g_4 != h_4)))
                              _fail(h_4);
                            else
                              g_4 = h_4;
                            t = (ATerm) ATmakeAppl(sym_App_2, term_v_5, not_null(g_4));
                            return(t);
                          }
                          t = map_1(t, f_0);
                          {
                            i_4 = t;
                            if(((x_3 != NULL) && (x_3 != i_4)))
                              _fail(i_4);
                            else
                              x_3 = i_4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_a_6, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, term_i_6), (ATerm) ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_3)), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_3)))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, not_null(r_3), not_null(x_3)), term_i_6), term_j_6));
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
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  s_4 :
  if(match_cons(t_4, sym__2))
    {
      u_4 = ATgetArgument(t_4, 0);
      v_4 = ATgetArgument(t_4, 1);
      if(((u_4 != NULL) && (u_4 != v_4)))
        _fail(v_4);
      else
        u_4 = v_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
    {
      c_5 = ATgetFirst((ATermList) b_5);
      d_5 = (ATerm) ATgetNext((ATermList) b_5);
      {
        t = g_79(t);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm g_5 = NULL;
            g_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), not_null(g_5));
              t = f_79(t);
            }
            return(t);
          }
          t = fetch_1(t, m_0);
        }
        t = not_null(d_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        t = not_null(n_5);
        {
          ATerm s_5 (ATerm t)
          {
            ATerm k_6 = t;
            int l_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_5);
                ;
                LocalPopChoice(l_6);
              }
            else
              {
                t = k_6;
                {
                  ATerm o_6 = t;
                  int r_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = not_null(o_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_79, n_0);
                      t = s_5(t);
                      ;
                      LocalPopChoice(r_6);
                    }
                  else
                    {
                      t = o_6;
                      t = Cons_2(t, _id, s_5);
                    }
                }
              }
            return(t);
          }
          t = s_5(t);
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
ATerm foldr_3 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_79(t);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
        ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
        x_5 = t;
        w_5 :
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            y_5 = ATgetFirst((ATermList) x_5);
            z_5 = (ATerm) ATgetNext((ATermList) x_5);
            {
              ATerm c_6 = NULL,e_6 = NULL;
              ATerm x_6;
              x_6 = t;
              {
                ATerm d_6 = NULL;
                t = not_null(y_5);
                {
                  t = w_79(t);
                  {
                    d_6 = t;
                    if(((c_6 != NULL) && (c_6 != d_6)))
                      _fail(d_6);
                    else
                      c_6 = d_6;
                  }
                }
              }
              t = x_6;
              {
                ATerm f_6 = NULL;
                t = not_null(z_5);
                {
                  t = foldr_3(t, u_79, v_79, w_79);
                  {
                    f_6 = t;
                    if(((e_6 != NULL) && (e_6 != f_6)))
                      _fail(f_6);
                    else
                      e_6 = f_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(e_6));
                  t = v_79(t);
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
ATerm crush_3 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm n_6 = NULL;
  ATerm p_6 = NULL;
  n_6 = t;
  {
    ATerm q_6 = NULL;
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
    t = not_null(n_6);
    {
      q_6 = t;
      {
        t = SSL_explode_term(not_null(q_6));
        {
          s_6 = t;
          m_6 :
          if(match_cons(s_6, sym__2))
            {
              t_6 = ATgetArgument(s_6, 0);
              u_6 = ATgetArgument(s_6, 1);
              if(((p_6 != NULL) && (p_6 != u_6)))
                _fail(u_6);
              else
                p_6 = u_6;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_6);
      t = foldr_3(t, s_78, t_78, u_78);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm y_6 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        ATerm a_7 = NULL;
        t = r_77(t);
        {
          a_7 = t;
          if(((z_6 != NULL) && (z_6 != a_7)))
            _fail(a_7);
          else
            z_6 = a_7;
        }
        t = (ATerm) ATinsert(ATempty, not_null(z_6));
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = y_6;
        {
          ATerm o_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, o_0, union_0, b_7);
        }
      }
    return(t);
  }
  t = b_7(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm t_77 (ATerm))
{
  t = collect_om_1(t, t_77);
  return(t);
}
ATerm get_primitives_0 (ATerm t)
{
  t = collect_1(t, EvalPrimitive_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      {
        ATerm p_7 = NULL,r_7 = NULL;
        ATerm q_7 = NULL;
        t = SSLgetAnnotations(not_null(j_7));
        {
          q_7 = t;
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
        }
        {
          t = not_null(k_7);
          {
            ATerm t_7 = NULL;
            t = g_53(t);
            {
              r_7 = t;
              {
                t = not_null(l_7);
                {
                  ATerm v_7 = NULL;
                  t = h_53(t);
                  {
                    t_7 = t;
                    {
                      ATerm w_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_7), not_null(t_7)), not_null(p_7));
                      {
                        w_7 = t;
                        if(((v_7 != NULL) && (v_7 != w_7)))
                          _fail(w_7);
                        else
                          v_7 = w_7;
                      }
                      t = not_null(v_7);
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
  ATerm e_8 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm f_8 = NULL,g_8 = NULL;
      f_8 = t;
      d_8 :
      if(match_cons(f_8, sym_Program_1))
        {
          g_8 = ATgetArgument(f_8, 0);
          if(((e_8 != NULL) && (e_8 != g_8)))
            _fail(g_8);
          else
            e_8 = g_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(e_8)), term_f_7));
      {
        t = printnl_0(t);
        {
          t = term_h_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      {
        ATerm m_7;
        m_7 = t;
        t = SSL_printnl(not_null(l_8), not_null(m_8));
        t = m_7;
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
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_implode_string(not_null(r_8));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
        w_8 = t;
        v_8 :
        if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
          {
            x_8 = ATgetFirst((ATermList) w_8);
            y_8 = (ATerm) ATgetNext((ATermList) w_8);
            {
              t = not_null(x_8);
              {
                ATerm q_0 (ATerm t)
                {
                  t = not_null(y_8);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_0);
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
  ATerm i_9 = NULL;
  ATerm k_9 = NULL;
  i_9 = t;
  {
    ATerm l_9 = NULL;
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
    t = not_null(i_9);
    {
      l_9 = t;
      {
        t = SSL_explode_term(not_null(l_9));
        {
          n_9 = t;
          g_9 :
          if(match_cons(n_9, sym__2))
            {
              o_9 = ATgetArgument(n_9, 0);
              p_9 = ATgetArgument(n_9, 1);
              h_9 :
              if(match_string(o_9, ""))
                {
                  if(((k_9 != NULL) && (k_9 != p_9)))
                    _fail(p_9);
                  else
                    k_9 = p_9;
                }
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
      t = not_null(k_9);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    ATerm s_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_9);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = s_7;
        {
          t = Nil_0(t);
          t = t_73(t);
        }
      }
    return(t);
  }
  t = t_9(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym__2))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      {
        t = not_null(x_9);
        {
          ATerm r_0 (ATerm t)
          {
            t = not_null(y_9);
            return(t);
          }
          t = at_end_1(t, r_0);
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  t = SSL_explode_string(not_null(d_10));
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
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_is_string(not_null(h_10));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_0);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
              q_10 = t;
              p_10 :
              if(match_cons(q_10, sym_Path_1))
                {
                  r_10 = ATgetArgument(q_10, 0);
                  t = not_null(r_10);
                }
              else
                {
                  if(match_cons(q_10, sym_Var_1))
                    {
                      r_10 = ATgetArgument(q_10, 0);
                      {
                        t = not_null(r_10);
                        {
                          ATerm h_8 = t;
                          int i_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  t = term_n_8;
                                  return(t);
                                }
                                t = debug_1(t, t_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_10, sym_Prefix_2))
                        {
                          r_10 = ATgetArgument(q_10, 0);
                          s_10 = ATgetArgument(q_10, 1);
                          {
                            ATerm x_10 = NULL,z_10 = NULL;
                            ATerm o_8;
                            o_8 = t;
                            {
                              ATerm y_10 = NULL;
                              t = not_null(r_10);
                              {
                                t = eval_config_0(t);
                                {
                                  y_10 = t;
                                  if(((x_10 != NULL) && (x_10 != y_10)))
                                    _fail(y_10);
                                  else
                                    x_10 = y_10;
                                }
                              }
                            }
                            t = o_8;
                            {
                              ATerm a_11 = NULL;
                              t = not_null(s_10);
                              {
                                t = eval_config_0(t);
                                {
                                  a_11 = t;
                                  if(((z_10 != NULL) && (z_10 != a_11)))
                                    _fail(a_11);
                                  else
                                    z_10 = a_11;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(z_10));
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
  ATerm i_11 = NULL;
  i_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(i_11));
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_8;
            q_8 = t;
            {
              ATerm k_11 = NULL;
              ATerm l_11 = NULL;
              l_11 = t;
              if(((k_11 != NULL) && (k_11 != l_11)))
                _fail(l_11);
              else
                k_11 = l_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(i_11), not_null(k_11));
                t = table_put_0(t);
              }
            }
            t = q_8;
          }
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm p_11 = NULL;
      ATerm q_11 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_u_8);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = z_86(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      t = SSL_WriteToTextFile(not_null(v_11), not_null(w_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym__2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      t = SSL_WriteToBinaryFile(not_null(d_12), not_null(e_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm n_12 = NULL,o_12 = NULL;
            n_12 = t;
            j_12 :
            if(match_cons(n_12, sym_Output_1))
              {
                o_12 = ATgetArgument(n_12, 0);
                if(((m_12 != NULL) && (m_12 != o_12)))
                  _fail(o_12);
                else
                  m_12 = o_12;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_0);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm p_12 = NULL;
            t = term_c_9;
            {
              p_12 = t;
              if(((m_12 != NULL) && (m_12 != p_12)))
                _fail(p_12);
              else
                m_12 = p_12;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_0, _id);
  }
  t = z_8;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm z_0 (ATerm t)
      {
        t = not_null(m_12);
        return(t);
      }
      t = split_2(t, z_0, _id);
      return(t);
    }
    t = _2(t, _id, y_0);
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm q_12 = NULL;
              q_12 = t;
              l_12 :
              if(!(match_cons(q_12, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_1);
            return(t);
          }
          t = _2(t, a_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm w_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  ATerm f_9;
  f_9 = t;
  t = dtime_0(t);
  t = f_9;
  {
    t = g_85(t);
    {
      ATerm j_9;
      j_9 = t;
      {
        ATerm x_12 = NULL;
        t = dtime_0(t);
        {
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
        }
      }
      t = j_9;
      {
        y_12 = t;
        v_12 :
        if(match_cons(y_12, sym__2))
          {
            z_12 = ATgetArgument(y_12, 0);
            a_13 = ATgetArgument(y_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_12)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_12))), not_null(a_13));
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
ATerm debug_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm h_13 = NULL,j_13 = NULL;
    ATerm q_9;
    q_9 = t;
    {
      ATerm i_13 = NULL;
      t = c_84(t);
      {
        i_13 = t;
        if(((h_13 != NULL) && (h_13 != i_13)))
          _fail(i_13);
        else
          h_13 = i_13;
      }
    }
    t = q_9;
    {
      ATerm k_13 = NULL;
      k_13 = t;
      if(((j_13 != NULL) && (j_13 != k_13)))
        _fail(k_13);
      else
        j_13 = k_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_13)), not_null(h_13)));
        t = printnl_0(t);
      }
    }
  }
  t = m_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm o_13 = NULL;
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL;
      p_13 = t;
      {
        if(((o_13 != NULL) && (o_13 != p_13)))
          _fail(p_13);
        else
          o_13 = p_13;
        t = SSL_ReadFromFile(not_null(o_13));
      }
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_u_9;
          return(t);
        }
        t = debug_1(t, c_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_81 (ATerm), ATerm i_81 (ATerm))
{
  ATerm t_13 = NULL,v_13 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm u_13 = NULL;
    t = h_81(t);
    {
      u_13 = t;
      if(((t_13 != NULL) && (t_13 != u_13)))
        _fail(u_13);
      else
        t_13 = u_13;
    }
  }
  t = z_9;
  {
    ATerm w_13 = NULL;
    t = i_81(t);
    {
      w_13 = t;
      if(((v_13 != NULL) && (v_13 != w_13)))
        _fail(w_13);
      else
        v_13 = w_13;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(v_13));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm a_10;
  a_10 = t;
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 (ATerm t)
        {
          ATerm d_14 = NULL,e_14 = NULL;
          d_14 = t;
          a_14 :
          if(match_cons(d_14, sym_Input_1))
            {
              e_14 = ATgetArgument(d_14, 0);
              if(((c_14 != NULL) && (c_14 != e_14)))
                _fail(e_14);
              else
                c_14 = e_14;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_1);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          ATerm f_14 = NULL;
          t = term_e_10;
          {
            f_14 = t;
            if(((c_14 != NULL) && (c_14 != f_14)))
              _fail(f_14);
            else
              c_14 = f_14;
          }
        }
      }
  }
  t = a_10;
  {
    ATerm e_1 (ATerm t)
    {
      t = not_null(c_14);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm j_14 = NULL;
    j_14 = t;
    i_14 :
    if(!(match_string(j_14, "-v")))
      {
        if(!(match_string(j_14, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_i_10;
    t = set_config_0(t);
    t = term_j_10;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = Option_3(t, i_1, j_1, k_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_14 = NULL;
    m_14 = t;
    k_14 :
    if(!(match_string(m_14, "-k")))
      {
        if(!(match_string(m_14, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm n_14 = NULL;
      ATerm o_14 = NULL;
      t = string_to_int_0(t);
      {
        o_14 = t;
        if(((n_14 != NULL) && (n_14 != o_14)))
          _fail(o_14);
        else
          n_14 = o_14;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(n_14));
        t = set_config_0(t);
      }
    }
    t = l_10;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_string_to_int(not_null(r_14));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm z_14 = NULL;
        z_14 = t;
        u_14 :
        if(!(match_string(z_14, "-S")))
          {
            if(!(match_string(z_14, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_v_10;
        t = set_config_0(t);
        t = term_w_10;
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = Option_3(t, o_1, p_1, q_1);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = o_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm a_15 = NULL;
              a_15 = t;
              v_14 :
              if(!(match_string(a_15, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm d_15 = NULL;
              ATerm e_11;
              e_11 = t;
              {
                ATerm b_15 = NULL;
                ATerm c_15 = NULL;
                t = string_to_int_0(t);
                {
                  c_15 = t;
                  if(((b_15 != NULL) && (b_15 != c_15)))
                    _fail(c_15);
                  else
                    b_15 = c_15;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(b_15));
                  t = set_config_0(t);
                }
              }
              t = e_11;
              {
                ATerm e_15 = NULL;
                e_15 = t;
                if(((d_15 != NULL) && (d_15 != e_15)))
                  _fail(e_15);
                else
                  d_15 = e_15;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_15));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_f_11;
              return(t);
            }
            t = ArgOption_3(t, r_1, u_1, v_1);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm w_1 (ATerm t)
              {
                ATerm f_15 = NULL;
                f_15 = t;
                y_14 :
                if(!(match_string(f_15, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_h_11;
                t = set_config_0(t);
                t = term_j_11;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_m_11;
                return(t);
              }
              t = Option_3(t, w_1, x_1, c_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm l_15 = NULL;
    l_15 = t;
    i_15 :
    if(!(match_string(l_15, "-o")))
      {
        if(!(match_string(l_15, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm o_15 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm m_15 = NULL;
      ATerm n_15 = NULL;
      n_15 = t;
      if(((m_15 != NULL) && (m_15 != n_15)))
        _fail(n_15);
      else
        m_15 = n_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(m_15));
        t = set_config_0(t);
      }
    }
    t = x_11;
    {
      ATerm p_15 = NULL;
      p_15 = t;
      if(((o_15 != NULL) && (o_15 != p_15)))
        _fail(p_15);
      else
        o_15 = p_15;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_15));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = a_12;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm t_15 = NULL;
          t_15 = t;
          s_15 :
          if(!(match_string(t_15, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_h_12;
          t = set_config_0(t);
          t = term_i_12;
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = Option_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  x_15 :
  if(match_string(z_15, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
        {
          a_16 = ATgetFirst((ATermList) z_15);
          b_16 = (ATerm) ATgetNext((ATermList) z_15);
          y_15 :
          if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
            {
              c_16 = ATgetFirst((ATermList) b_16);
              d_16 = (ATerm) ATgetNext((ATermList) b_16);
              {
                ATerm h_16 = NULL;
                ATerm r_12;
                r_12 = t;
                {
                  t = not_null(a_16);
                  t = j_0(t);
                }
                t = r_12;
                {
                  ATerm i_16 = NULL;
                  t = not_null(c_16);
                  {
                    t = k_0(t);
                    {
                      i_16 = t;
                      if(((h_16 != NULL) && (h_16 != i_16)))
                        _fail(i_16);
                      else
                        h_16 = i_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_16)), not_null(h_16));
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
  ATerm u_2 (ATerm t)
  {
    ATerm p_16 = NULL;
    p_16 = t;
    m_16 :
    if(!(match_string(p_16, "-i")))
      {
        if(!(match_string(p_16, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm s_16 = NULL;
    ATerm s_12;
    s_12 = t;
    {
      ATerm q_16 = NULL;
      ATerm r_16 = NULL;
      r_16 = t;
      if(((q_16 != NULL) && (q_16 != r_16)))
        _fail(r_16);
      else
        q_16 = r_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(q_16));
        t = set_config_0(t);
      }
    }
    t = s_12;
    {
      ATerm t_16 = NULL;
      t_16 = t;
      if(((s_16 != NULL) && (s_16 != t_16)))
        _fail(t_16);
      else
        s_16 = t_16;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_16));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_u_12;
    return(t);
  }
  t = ArgOption_3(t, u_2, y_2, e_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_f_13));
  {
    t = printnl_0(t);
    {
      t = term_h_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  t = SSL_TicksToSeconds(not_null(x_16));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        ATerm g_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_17), not_null(e_17));
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = g_13;
            t = SSL_addr(not_null(d_17), not_null(e_17));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_79(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
        l_17 = t;
        k_17 :
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            m_17 = ATgetFirst((ATermList) l_17);
            n_17 = (ATerm) ATgetNext((ATermList) l_17);
            {
              ATerm q_17 = NULL;
              ATerm r_17 = NULL;
              t = not_null(n_17);
              {
                t = foldr_2(t, s_79, t_79);
                {
                  r_17 = t;
                  if(((q_17 != NULL) && (q_17 != r_17)))
                    _fail(r_17);
                  else
                    q_17 = r_17;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(q_17));
                t = t_79(t);
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
ATerm crush_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm y_17 = NULL;
  ATerm a_18 = NULL;
  y_17 = t;
  {
    ATerm b_18 = NULL;
    ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
    t = not_null(y_17);
    {
      b_18 = t;
      {
        t = SSL_explode_term(not_null(b_18));
        {
          d_18 = t;
          x_17 :
          if(match_cons(d_18, sym__2))
            {
              e_18 = ATgetArgument(d_18, 0);
              f_18 = ATgetArgument(d_18, 1);
              if(((a_18 != NULL) && (a_18 != f_18)))
                _fail(f_18);
              else
                a_18 = f_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_18);
      t = foldr_2(t, q_78, r_78);
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
    ATerm f_3 (ATerm t)
    {
      t = term_u_10;
      return(t);
    }
    t = crush_2(t, f_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_13;
        q_13 = t;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_18), not_null(n_18));
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = SSL_gtr(not_null(m_18), not_null(n_18));
            }
        }
        t = q_13;
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
  ATerm t_18 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
      u_18 = t;
      s_18 :
      if(match_cons(u_18, sym__2))
        {
          v_18 = ATgetArgument(u_18, 0);
          w_18 = ATgetArgument(u_18, 1);
          {
            if(((t_18 != NULL) && (t_18 != v_18)))
              _fail(v_18);
            else
              t_18 = v_18;
            if(((t_18 != NULL) && (t_18 != w_18)))
              _fail(w_18);
            else
              t_18 = w_18;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm z_18 = NULL;
      ATerm a_19 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), term_h_7);
        t = geq_0(t);
      }
    }
    t = z_13;
    t = y_86(t);
    return(t);
  }
  t = try_1(t, g_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm e_19 = NULL,g_19 = NULL;
    ATerm b_14;
    b_14 = t;
    {
      ATerm f_19 = NULL;
      t = run_time_0(t);
      {
        f_19 = t;
        if(((e_19 != NULL) && (e_19 != f_19)))
          _fail(f_19);
        else
          e_19 = f_19;
      }
    }
    t = b_14;
    {
      ATerm h_19 = NULL;
      t = term_g_14;
      {
        t = get_config_0(t);
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), not_null(e_19)), term_h_14), not_null(g_19)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_3);
  {
    t = term_u_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Version_0))
    {
      ATerm q_19 = NULL,s_19 = NULL;
      ATerm p_14;
      p_14 = t;
      {
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
      }
      t = p_14;
      {
        ATerm t_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        t = not_null(s_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        {
          ATerm t_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = t_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_3);
  t = e_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_table_create(not_null(y_19));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  {
    ATerm x_14;
    x_14 = t;
    {
      t = term_g_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, not_null(c_20));
          t = table_put_0(t);
        }
      }
    }
    t = x_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  t = SSL_table_destroy(not_null(g_20));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  t = SSL_exit(not_null(k_20));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(((ATgetType(o_20) == AT_LIST) && ATisEmpty(o_20)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
        {
          p_20 = ATgetFirst((ATermList) o_20);
          q_20 = (ATerm) ATgetNext((ATermList) o_20);
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
  ATerm j_15;
  j_15 = t;
  {
    ATerm t_20 = NULL;
    ATerm w_20 = NULL;
    ATerm k_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = k_15;
        {
          ATerm u_20 = NULL;
          ATerm v_20 = NULL;
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
          t = (ATerm) ATinsert(ATempty, not_null(u_20));
        }
      }
    {
      w_20 = t;
      if(((t_20 != NULL) && (t_20 != w_20)))
        _fail(w_20);
      else
        t_20 = w_20;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(t_20));
      t = printnl_0(t);
    }
  }
  t = j_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm z_20 (ATerm t)
  {
    ATerm r_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = r_15;
        t = Cons_2(t, e_73, z_20);
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  i_21 = t;
  f_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      g_21 = ATgetFirst((ATermList) i_21);
      h_21 = (ATerm) ATgetNext((ATermList) i_21);
      {
        ATerm l_21 = NULL;
        t = not_null(h_21);
        {
          ATerm v_15;
          v_15 = t;
          {
            ATerm m_21 = NULL,o_21 = NULL,q_21 = NULL;
            ATerm w_15;
            w_15 = t;
            {
              ATerm n_21 = NULL;
              t = i_0(t);
              {
                n_21 = t;
                if(((m_21 != NULL) && (m_21 != n_21)))
                  _fail(n_21);
                else
                  m_21 = n_21;
              }
            }
            t = w_15;
            {
              ATerm p_21 = NULL;
              t = not_null(g_21);
              {
                t = h_0(t);
                {
                  p_21 = t;
                  if(((o_21 != NULL) && (o_21 != p_21)))
                    _fail(p_21);
                  else
                    o_21 = p_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_21)), not_null(o_21));
                {
                  q_21 = t;
                  if(((l_21 != NULL) && (l_21 != q_21)))
                    _fail(q_21);
                  else
                    l_21 = q_21;
                }
              }
            }
          }
          t = v_15;
          {
            ATerm j_3 (ATerm t)
            {
              t = not_null(l_21);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_21) == AT_LIST) && ATisEmpty(i_21)))
        {
          {
            t = term_g_10;
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
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_Program_1))
    {
      c_22 = ATgetArgument(b_22, 0);
      {
        ATerm f_22 = NULL,h_22 = NULL;
        ATerm g_22 = NULL;
        t = SSLgetAnnotations(not_null(b_22));
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
        {
          t = not_null(c_22);
          {
            ATerm j_22 = NULL;
            t = v_59(t);
            {
              h_22 = t;
              {
                ATerm k_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_22)), not_null(f_22));
                {
                  k_22 = t;
                  if(((j_22 != NULL) && (j_22 != k_22)))
                    _fail(k_22);
                  else
                    j_22 = k_22;
                }
                t = not_null(j_22);
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
  ATerm t_22 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22 = NULL;
      t = term_g_14;
      {
        t = get_config_0(t);
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
      }
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm v_22 = NULL;
            v_22 = t;
            if(((t_22 != NULL) && (t_22 != v_22)))
              _fail(v_22);
            else
              t_22 = v_22;
            return(t);
          }
          t = Program_1(t, m_3);
          return(t);
        }
        t = option_defined_1(t, l_3);
      }
    }
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        t = not_null(t_22);
        return(t);
      }
      t = short_description_1(t, o_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, n_3);
    {
      t = term_g_16;
      {
        t = echo_0(t);
        {
          t = term_l_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm w_22 = NULL;
                  ATerm x_22 = NULL;
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_22)), term_n_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm y_22 = NULL;
                    ATerm z_22 = NULL;
                    ATerm j_4 (ATerm t)
                    {
                      t = not_null(t_22);
                      return(t);
                    }
                    t = long_description_1(t, j_4);
                    {
                      z_22 = t;
                      if(((y_22 != NULL) && (y_22 != z_22)))
                        _fail(z_22);
                      else
                        y_22 = z_22;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_22)), term_o_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_3);
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
  ATerm u_16;
  u_16 = t;
  {
    ATerm m_23 = NULL;
    ATerm n_23 = NULL;
    n_23 = t;
    if(((m_23 != NULL) && (m_23 != n_23)))
      _fail(n_23);
    else
      m_23 = n_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(m_23)));
      t = printnl_0(t);
    }
  }
  t = u_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = d_84(t);
    t = debug_0(t);
  }
  t = v_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Undefined_1))
    {
      v_23 = ATgetArgument(u_23, 0);
      {
        ATerm y_23 = NULL,a_24 = NULL;
        ATerm z_23 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        {
          t = not_null(v_23);
          {
            ATerm c_24 = NULL;
            t = w_59(t);
            {
              a_24 = t;
              {
                ATerm d_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_24)), not_null(y_23));
                {
                  d_24 = t;
                  if(((c_24 != NULL) && (c_24 != d_24)))
                    _fail(d_24);
                  else
                    c_24 = d_24;
                }
                t = not_null(c_24);
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
ATerm fetch_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm i_24 (ATerm t)
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_73, _id);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        t = Cons_2(t, _id, i_24);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_88 (ATerm))
{
  t = fetch_1(t, b_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Help_0))
    {
      ATerm p_24 = NULL,w_24 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm q_24 = NULL;
        t = SSLgetAnnotations(not_null(n_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
      }
      t = z_16;
      {
        ATerm x_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_24));
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
        t = not_null(w_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm a_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_65(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = a_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym__2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      t = SSL_table_get(not_null(e_25), not_null(f_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__3))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      s_25 = ATgetArgument(p_25, 2);
      {
        ATerm g_17;
        g_17 = t;
        {
          ATerm w_25 = NULL;
          ATerm x_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(r_25));
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                t = (ATerm) ATempty;
              }
            {
              x_25 = t;
              if(((w_25 != NULL) && (w_25 != x_25)))
                _fail(x_25);
              else
                w_25 = x_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_25), not_null(r_25), (ATerm) ATinsert(CheckATermList(not_null(w_25)), not_null(s_25)));
            t = table_put_0(t);
          }
        }
        t = g_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm b_26 = NULL;
  ATerm c_26 = NULL;
  t = term_g_10;
  {
    t = g_89(t);
    {
      c_26 = t;
      if(((b_26 != NULL) && (b_26 != c_26)))
        _fail(c_26);
      else
        b_26 = c_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(b_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_string(i_26, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          j_26 = ATgetFirst((ATermList) i_26);
          k_26 = (ATerm) ATgetNext((ATermList) i_26);
          {
            ATerm n_26 = NULL;
            ATerm j_17;
            j_17 = t;
            {
              t = not_null(j_26);
              t = a_0(t);
            }
            t = j_17;
            {
              ATerm o_26 = NULL;
              t = term_g_10;
              {
                t = d_0(t);
                {
                  o_26 = t;
                  if(((n_26 != NULL) && (n_26 != o_26)))
                    _fail(o_26);
                  else
                    n_26 = o_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_26)), not_null(n_26));
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
  ATerm k_4 (ATerm t)
  {
    ATerm t_26 = NULL;
    t_26 = t;
    s_26 :
    if(!(match_string(t_26, "--help")))
      {
        if(!(match_string(t_26, "-h")))
          {
            if(!(match_string(t_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_p_17;
    {
      t = set_config_0(t);
      t = term_s_17;
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = Option_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
    {
      x_26 = ATgetFirst((ATermList) w_26);
      y_26 = (ATerm) ATgetNext((ATermList) w_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_26)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
    {
      j_27 = ATgetFirst((ATermList) i_27);
      k_27 = (ATerm) ATgetNext((ATermList) i_27);
      {
        ATerm o_27 = NULL,q_27 = NULL;
        ATerm p_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm s_27 = NULL;
            t = p_54(t);
            {
              q_27 = t;
              {
                t = not_null(k_27);
                {
                  ATerm u_27 = NULL;
                  t = q_54(t);
                  {
                    s_27 = t;
                    {
                      ATerm v_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_27)), not_null(q_27)), not_null(o_27));
                      {
                        v_27 = t;
                        if(((u_27 != NULL) && (u_27 != v_27)))
                          _fail(v_27);
                        else
                          u_27 = v_27;
                      }
                      t = not_null(u_27);
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
  ATerm f_28 = NULL;
  f_28 = t;
  e_28 :
  if(((ATgetType(f_28) == AT_LIST) && ATisEmpty(f_28)))
    {
      {
        ATerm h_28 = NULL,j_28 = NULL;
        ATerm u_17;
        u_17 = t;
        {
          ATerm i_28 = NULL;
          t = SSLgetAnnotations(not_null(f_28));
          {
            i_28 = t;
            if(((h_28 != NULL) && (h_28 != i_28)))
              _fail(i_28);
            else
              h_28 = i_28;
          }
        }
        t = u_17;
        {
          ATerm k_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_28));
          {
            k_28 = t;
            if(((j_28 != NULL) && (j_28 != k_28)))
              _fail(k_28);
            else
              j_28 = k_28;
          }
          t = not_null(j_28);
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
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(r_28), not_null(s_28));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm v_17;
  v_17 = t;
  {
    ATerm n_4 (ATerm t)
    {
      t = term_w_17;
      t = e_89(t);
      return(t);
    }
    t = try_1(t, n_4);
  }
  t = v_17;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm a_29 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm y_28 = NULL;
        ATerm z_28 = NULL;
        z_28 = t;
        if(((y_28 != NULL) && (y_28 != z_28)))
          _fail(z_28);
        else
          y_28 = z_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_14, not_null(y_28));
          t = set_config_0(t);
        }
      }
      t = z_17;
      {
        ATerm b_29 = NULL;
        b_29 = t;
        if(((a_29 != NULL) && (a_29 != b_29)))
          _fail(b_29);
        else
          a_29 = b_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_29));
      }
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      ATerm c_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              {
                t = e_89(t);
                t = Cons_2(t, _id, p_4);
              }
            }
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = c_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_4, p_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  ATerm j_18;
  j_18 = t;
  {
    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
    k_29 = t;
    g_29 :
    if(match_cons(k_29, sym__3))
      {
        l_29 = ATgetArgument(k_29, 0);
        m_29 = ATgetArgument(k_29, 1);
        n_29 = ATgetArgument(k_29, 2);
        {
          if(((h_29 != NULL) && (h_29 != l_29)))
            _fail(l_29);
          else
            h_29 = l_29;
          {
            if(((i_29 != NULL) && (i_29 != m_29)))
              _fail(m_29);
            else
              i_29 = m_29;
            {
              if(((j_29 != NULL) && (j_29 != n_29)))
                _fail(n_29);
              else
                j_29 = n_29;
              t = SSL_table_put(not_null(h_29), not_null(i_29), not_null(j_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm q_29 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    t = term_p_18;
    t = table_put_0(t);
  }
  t = o_18;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_89(t);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_4);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19;
            b_19 = t;
            {
              ATerm c_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = c_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_19;
            {
              t = system_usage_0(t);
              {
                t = term_u_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm x_4 (ATerm t)
                {
                  ATerm r_29 = NULL;
                  r_29 = t;
                  if(((q_29 != NULL) && (q_29 != r_29)))
                    _fail(r_29);
                  else
                    q_29 = r_29;
                  return(t);
                }
                t = Undefined_1(t, x_4);
                return(t);
              }
              t = option_defined_1(t, w_4);
              {
                ATerm y_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_29)), term_i_19);
                  return(t);
                }
                t = say_1(t, y_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_4);
      {
        ATerm j_19;
        j_19 = t;
        {
          t = term_j_16;
          t = table_destroy_0(t);
        }
        t = j_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  t = parse_options_1(t, k_85);
  {
    t = store_options_0(t);
    {
      t = m_85(t);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_85);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm m_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = m_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_86);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_4, d_86, e_86, e_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm u_29 = NULL;
        ATerm v_29 = NULL;
        t = term_g_14;
        {
          t = get_config_0(t);
          {
            v_29 = t;
            if(((u_29 != NULL) && (u_29 != v_29)))
              _fail(v_29);
            else
              u_29 = v_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(u_29)));
          t = printnl_0(t);
        }
      }
      t = w_19;
      return(t);
    }
    t = if_verbose2_1(t, h_5);
    return(t);
  }
  t = iowrap_4(t, v_85, w_85, x_85, f_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  t = iowrap_3(t, t_85, u_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = _2(t, _id, q_85);
    return(t);
  }
  t = iowrap_2(t, i_5, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm y_29 = NULL;
    t = get_primitives_0(t);
    {
      y_29 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, not_null(y_29))));
    }
    return(t);
  }
  t = iowrap_1(t, j_5);
  return(t);
}
