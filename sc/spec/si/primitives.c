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
ATerm term_y_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_y_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Op_2, term_p_5, (ATerm) ATempty);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_5);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATempty);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Var_1, term_i_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_h_10);
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
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_h_10);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_10);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_h_10);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
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
ATerm HdMember_p__2 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm union_1 (ATerm, ATerm n_78 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm crush_3 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm collect_om_1 (ATerm, ATerm g_77 (ATerm));
ATerm collect_1 (ATerm, ATerm h_77 (ATerm));
ATerm get_primitives_0 (ATerm);
ATerm _2 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_84 (ATerm));
ATerm debug_1 (ATerm, ATerm o_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm crush_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_88 (ATerm));
ATerm map_1 (ATerm, ATerm u_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_88 (ATerm));
ATerm Program_1 (ATerm, ATerm x_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_88 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_85 (ATerm), ATerm h_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_85 (ATerm));
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
                  ATerm e_0 (ATerm t)
                  {
                    t = term_q_5;
                    return(t);
                  }
                  ATerm f_0 (ATerm t)
                  {
                    ATerm b_4 = NULL,d_4 = NULL;
                    ATerm r_5;
                    r_5 = t;
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
                    t = r_5;
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_4)), not_null(b_4)));
                    }
                    return(t);
                  }
                  t = foldr_2(t, e_0, f_0);
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
                          ATerm h_0 (ATerm t)
                          {
                            ATerm g_4 = NULL;
                            ATerm h_4 = NULL;
                            h_4 = t;
                            if(((g_4 != NULL) && (g_4 != h_4)))
                              _fail(h_4);
                            else
                              g_4 = h_4;
                            t = (ATerm) ATmakeAppl(sym_App_2, term_a_6, not_null(g_4));
                            return(t);
                          }
                          t = map_1(t, h_0);
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
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_b_6, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, term_j_6), (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_3)), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_3)))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, not_null(r_3), not_null(x_3)), term_j_6), term_k_6));
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
ATerm HdMember_p__2 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
    {
      c_5 = ATgetFirst((ATermList) b_5);
      d_5 = (ATerm) ATgetNext((ATermList) b_5);
      {
        t = s_78(t);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm g_5 = NULL;
            g_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), not_null(g_5));
              t = r_78(t);
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
ATerm union_1 (ATerm t, ATerm n_78 (ATerm))
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
            ATerm l_6 = t;
            int o_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_5);
                ;
                LocalPopChoice(o_6);
              }
            else
              {
                t = l_6;
                {
                  ATerm r_6 = t;
                  int v_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = not_null(o_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_78, n_0);
                      t = s_5(t);
                      ;
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = r_6;
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
ATerm foldr_3 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_79(t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
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
              ATerm y_6;
              y_6 = t;
              {
                ATerm d_6 = NULL;
                t = not_null(y_5);
                {
                  t = i_79(t);
                  {
                    d_6 = t;
                    if(((c_6 != NULL) && (c_6 != d_6)))
                      _fail(d_6);
                    else
                      c_6 = d_6;
                  }
                }
              }
              t = y_6;
              {
                ATerm f_6 = NULL;
                t = not_null(z_5);
                {
                  t = foldr_3(t, g_79, h_79, i_79);
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
                  t = h_79(t);
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
ATerm crush_3 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm))
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
      t = foldr_3(t, e_78, f_78, g_78);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_6 = NULL;
      ATerm a_7 = NULL;
      t = g_77(t);
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
      t = b_7;
      {
        ATerm o_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm p_0 (ATerm t)
        {
          t = collect_om_1(t, g_77);
          return(t);
        }
        t = crush_3(t, o_0, union_0, p_0);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm h_77 (ATerm))
{
  t = collect_om_1(t, h_77);
  return(t);
}
ATerm get_primitives_0 (ATerm t)
{
  t = collect_1(t, EvalPrimitive_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm))
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym__2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      {
        ATerm o_7 = NULL,q_7 = NULL;
        ATerm p_7 = NULL;
        t = SSLgetAnnotations(not_null(i_7));
        {
          p_7 = t;
          if(((o_7 != NULL) && (o_7 != p_7)))
            _fail(p_7);
          else
            o_7 = p_7;
        }
        {
          t = not_null(j_7);
          {
            ATerm s_7 = NULL;
            t = i_53(t);
            {
              q_7 = t;
              {
                t = not_null(k_7);
                {
                  ATerm u_7 = NULL;
                  t = j_53(t);
                  {
                    s_7 = t;
                    {
                      ATerm v_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_7), not_null(s_7)), not_null(o_7));
                      {
                        v_7 = t;
                        if(((u_7 != NULL) && (u_7 != v_7)))
                          _fail(v_7);
                        else
                          u_7 = v_7;
                      }
                      t = not_null(u_7);
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
  ATerm d_8 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm e_8 = NULL,f_8 = NULL;
      e_8 = t;
      c_8 :
      if(match_cons(e_8, sym_Program_1))
        {
          f_8 = ATgetArgument(e_8, 0);
          if(((d_8 != NULL) && (d_8 != f_8)))
            _fail(f_8);
          else
            d_8 = f_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(d_8)), term_f_7));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
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
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym__2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm m_7;
        m_7 = t;
        t = SSL_printnl(not_null(k_8), not_null(l_8));
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
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_implode_string(not_null(q_8));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = n_7;
      {
        ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
        v_8 = t;
        u_8 :
        if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
          {
            w_8 = ATgetFirst((ATermList) v_8);
            x_8 = (ATerm) ATgetNext((ATermList) v_8);
            {
              t = not_null(w_8);
              {
                ATerm r_0 (ATerm t)
                {
                  t = not_null(x_8);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm h_9 = NULL;
  ATerm j_9 = NULL;
  h_9 = t;
  {
    ATerm k_9 = NULL;
    ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
    t = not_null(h_9);
    {
      k_9 = t;
      {
        t = SSL_explode_term(not_null(k_9));
        {
          m_9 = t;
          f_9 :
          if(match_cons(m_9, sym__2))
            {
              n_9 = ATgetArgument(m_9, 0);
              o_9 = ATgetArgument(m_9, 1);
              g_9 :
              if(match_string(n_9, ""))
                {
                  if(((j_9 != NULL) && (j_9 != o_9)))
                    _fail(o_9);
                  else
                    j_9 = o_9;
                }
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
      t = not_null(j_9);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_73 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    ATerm t_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_9);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = t_7;
        {
          t = Nil_0(t);
          t = j_73(t);
        }
      }
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        t = not_null(w_9);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(x_9);
            return(t);
          }
          t = at_end_1(t, s_0);
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
  ATerm c_10 = NULL;
  c_10 = t;
  t = SSL_explode_string(not_null(c_10));
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
  ATerm g_10 = NULL;
  g_10 = t;
  t = SSL_is_string(not_null(g_10));
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
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = b_8;
            {
              ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
              p_10 = t;
              o_10 :
              if(match_cons(p_10, sym_Path_1))
                {
                  q_10 = ATgetArgument(p_10, 0);
                  t = not_null(q_10);
                }
              else
                {
                  if(match_cons(p_10, sym_Var_1))
                    {
                      q_10 = ATgetArgument(p_10, 0);
                      {
                        t = not_null(q_10);
                        {
                          ATerm h_8 = t;
                          int m_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_n_8;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_10, sym_Prefix_2))
                        {
                          q_10 = ATgetArgument(p_10, 0);
                          r_10 = ATgetArgument(p_10, 1);
                          {
                            ATerm w_10 = NULL,y_10 = NULL;
                            ATerm o_8;
                            o_8 = t;
                            {
                              ATerm x_10 = NULL;
                              t = not_null(q_10);
                              {
                                t = eval_config_0(t);
                                {
                                  x_10 = t;
                                  if(((w_10 != NULL) && (w_10 != x_10)))
                                    _fail(x_10);
                                  else
                                    w_10 = x_10;
                                }
                              }
                            }
                            t = o_8;
                            {
                              ATerm z_10 = NULL;
                              t = not_null(r_10);
                              {
                                t = eval_config_0(t);
                                {
                                  z_10 = t;
                                  if(((y_10 != NULL) && (y_10 != z_10)))
                                    _fail(z_10);
                                  else
                                    y_10 = z_10;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(y_10));
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
  ATerm h_11 = NULL;
  h_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(h_11));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_8;
            r_8 = t;
            {
              ATerm j_11 = NULL;
              ATerm k_11 = NULL;
              k_11 = t;
              if(((j_11 != NULL) && (j_11 != k_11)))
                _fail(k_11);
              else
                j_11 = k_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(h_11), not_null(j_11));
                t = table_put_0(t);
              }
            }
            t = r_8;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_y_8);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = m_86(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      t = SSL_WriteToTextFile(not_null(u_11), not_null(v_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      t = SSL_WriteToBinaryFile(not_null(c_12), not_null(d_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm m_12 = NULL,n_12 = NULL;
            m_12 = t;
            i_12 :
            if(match_cons(m_12, sym_Output_1))
              {
                n_12 = ATgetArgument(m_12, 0);
                if(((l_12 != NULL) && (l_12 != n_12)))
                  _fail(n_12);
                else
                  l_12 = n_12;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm o_12 = NULL;
            t = term_c_9;
            {
              o_12 = t;
              if(((l_12 != NULL) && (l_12 != o_12)))
                _fail(o_12);
              else
                l_12 = o_12;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = z_8;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(l_12);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm p_12 = NULL;
              p_12 = t;
              k_12 :
              if(!(match_cons(p_12, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_1);
            return(t);
          }
          t = _2(t, b_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm v_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  ATerm i_9;
  i_9 = t;
  t = dtime_0(t);
  t = i_9;
  {
    t = t_84(t);
    {
      ATerm l_9;
      l_9 = t;
      {
        ATerm w_12 = NULL;
        t = dtime_0(t);
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      t = l_9;
      {
        x_12 = t;
        u_12 :
        if(match_cons(x_12, sym__2))
          {
            y_12 = ATgetArgument(x_12, 0);
            z_12 = ATgetArgument(x_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_12)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_12))), not_null(z_12));
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
ATerm debug_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm p_9;
  p_9 = t;
  {
    ATerm g_13 = NULL,i_13 = NULL;
    ATerm q_9;
    q_9 = t;
    {
      ATerm h_13 = NULL;
      t = o_83(t);
      {
        h_13 = t;
        if(((g_13 != NULL) && (g_13 != h_13)))
          _fail(h_13);
        else
          g_13 = h_13;
      }
    }
    t = q_9;
    {
      ATerm j_13 = NULL;
      j_13 = t;
      if(((i_13 != NULL) && (i_13 != j_13)))
        _fail(j_13);
      else
        i_13 = j_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_13)), not_null(g_13)));
        t = printnl_0(t);
      }
    }
  }
  t = p_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm r_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL;
      o_13 = t;
      {
        if(((n_13 != NULL) && (n_13 != o_13)))
          _fail(o_13);
        else
          n_13 = o_13;
        t = SSL_ReadFromFile(not_null(n_13));
      }
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = r_9;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_y_9;
          return(t);
        }
        t = debug_1(t, d_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm s_13 = NULL,u_13 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm t_13 = NULL;
    t = t_80(t);
    {
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
    }
  }
  t = z_9;
  {
    ATerm v_13 = NULL;
    t = u_80(t);
    {
      v_13 = t;
      if(((u_13 != NULL) && (u_13 != v_13)))
        _fail(v_13);
      else
        u_13 = v_13;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), not_null(u_13));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_14 = NULL;
  ATerm a_10;
  a_10 = t;
  {
    ATerm b_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          ATerm c_14 = NULL,d_14 = NULL;
          c_14 = t;
          z_13 :
          if(match_cons(c_14, sym_Input_1))
            {
              d_14 = ATgetArgument(c_14, 0);
              if(((b_14 != NULL) && (b_14 != d_14)))
                _fail(d_14);
              else
                b_14 = d_14;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_1);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = b_10;
        {
          ATerm e_14 = NULL;
          t = term_e_10;
          {
            e_14 = t;
            if(((b_14 != NULL) && (b_14 != e_14)))
              _fail(e_14);
            else
              b_14 = e_14;
          }
        }
      }
  }
  t = a_10;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(b_14);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm i_14 = NULL;
    i_14 = t;
    h_14 :
    if(!(match_string(i_14, "-v")))
      {
        if(!(match_string(i_14, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_i_10;
    t = set_config_0(t);
    t = term_j_10;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = Option_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm l_14 = NULL;
    l_14 = t;
    j_14 :
    if(!(match_string(l_14, "-k")))
      {
        if(!(match_string(l_14, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      t = string_to_int_0(t);
      {
        n_14 = t;
        if(((m_14 != NULL) && (m_14 != n_14)))
          _fail(n_14);
        else
          m_14 = n_14;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(m_14));
        t = set_config_0(t);
      }
    }
    t = l_10;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_string_to_int(not_null(q_14));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t_14 :
        if(!(match_string(y_14, "-S")))
          {
            if(!(match_string(y_14, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_v_10;
        t = set_config_0(t);
        t = term_a_11;
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = Option_3(t, p_1, q_1, r_1);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm z_14 = NULL;
              z_14 = t;
              u_14 :
              if(!(match_string(z_14, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm c_15 = NULL;
              ATerm e_11;
              e_11 = t;
              {
                ATerm a_15 = NULL;
                ATerm b_15 = NULL;
                t = string_to_int_0(t);
                {
                  b_15 = t;
                  if(((a_15 != NULL) && (a_15 != b_15)))
                    _fail(b_15);
                  else
                    a_15 = b_15;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(a_15));
                  t = set_config_0(t);
                }
              }
              t = e_11;
              {
                ATerm d_15 = NULL;
                d_15 = t;
                if(((c_15 != NULL) && (c_15 != d_15)))
                  _fail(d_15);
                else
                  c_15 = d_15;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_15));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_f_11;
              return(t);
            }
            t = ArgOption_3(t, u_1, v_1, w_1);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm e_15 = NULL;
                e_15 = t;
                x_14 :
                if(!(match_string(e_15, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_i_11;
                t = set_config_0(t);
                t = term_l_11;
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_m_11;
                return(t);
              }
              t = Option_3(t, x_1, c_2, k_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = n_11;
      {
        ATerm r_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(w_11);
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
  ATerm l_2 (ATerm t)
  {
    ATerm k_15 = NULL;
    k_15 = t;
    h_15 :
    if(!(match_string(k_15, "-o")))
      {
        if(!(match_string(k_15, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm n_15 = NULL;
    ATerm x_11;
    x_11 = t;
    {
      ATerm l_15 = NULL;
      ATerm m_15 = NULL;
      m_15 = t;
      if(((l_15 != NULL) && (l_15 != m_15)))
        _fail(m_15);
      else
        l_15 = m_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(l_15));
        t = set_config_0(t);
      }
    }
    t = x_11;
    {
      ATerm o_15 = NULL;
      o_15 = t;
      if(((n_15 != NULL) && (n_15 != o_15)))
        _fail(o_15);
      else
        n_15 = o_15;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_15));
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  t = ArgOption_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm s_15 = NULL;
          s_15 = t;
          r_15 :
          if(!(match_string(s_15, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_h_12;
          t = set_config_0(t);
          t = term_j_12;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = Option_3(t, o_2, p_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  y_15 = t;
  w_15 :
  if(match_string(y_15, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          z_15 = ATgetFirst((ATermList) y_15);
          a_16 = (ATerm) ATgetNext((ATermList) y_15);
          x_15 :
          if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
            {
              b_16 = ATgetFirst((ATermList) a_16);
              c_16 = (ATerm) ATgetNext((ATermList) a_16);
              {
                ATerm g_16 = NULL;
                ATerm r_12;
                r_12 = t;
                {
                  t = not_null(z_15);
                  t = j_0(t);
                }
                t = r_12;
                {
                  ATerm h_16 = NULL;
                  t = not_null(b_16);
                  {
                    t = k_0(t);
                    {
                      h_16 = t;
                      if(((g_16 != NULL) && (g_16 != h_16)))
                        _fail(h_16);
                      else
                        g_16 = h_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_16)), not_null(g_16));
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
  ATerm y_2 (ATerm t)
  {
    ATerm o_16 = NULL;
    o_16 = t;
    l_16 :
    if(!(match_string(o_16, "-i")))
      {
        if(!(match_string(o_16, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm r_16 = NULL;
    ATerm s_12;
    s_12 = t;
    {
      ATerm p_16 = NULL;
      ATerm q_16 = NULL;
      q_16 = t;
      if(((p_16 != NULL) && (p_16 != q_16)))
        _fail(q_16);
      else
        p_16 = q_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(p_16));
        t = set_config_0(t);
      }
    }
    t = s_12;
    {
      ATerm s_16 = NULL;
      s_16 = t;
      if(((r_16 != NULL) && (r_16 != s_16)))
        _fail(s_16);
      else
        r_16 = s_16;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_16));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_a_13;
    return(t);
  }
  t = ArgOption_3(t, y_2, e_3, f_3);
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
      t = term_l_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = SSL_TicksToSeconds(not_null(w_16));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_17), not_null(d_17));
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = SSL_addr(not_null(c_17), not_null(d_17));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm m_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_79(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = m_13;
      {
        ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
        k_17 = t;
        j_17 :
        if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
          {
            l_17 = ATgetFirst((ATermList) k_17);
            m_17 = (ATerm) ATgetNext((ATermList) k_17);
            {
              ATerm p_17 = NULL;
              ATerm q_17 = NULL;
              t = not_null(m_17);
              {
                t = foldr_2(t, e_79, f_79);
                {
                  q_17 = t;
                  if(((p_17 != NULL) && (p_17 != q_17)))
                    _fail(q_17);
                  else
                    p_17 = q_17;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), not_null(p_17));
                t = f_79(t);
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
ATerm crush_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm z_17 = NULL;
  x_17 = t;
  {
    ATerm a_18 = NULL;
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
    t = not_null(x_17);
    {
      a_18 = t;
      {
        t = SSL_explode_term(not_null(a_18));
        {
          c_18 = t;
          w_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              if(((z_17 != NULL) && (z_17 != e_18)))
                _fail(e_18);
              else
                z_17 = e_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_17);
      t = foldr_2(t, c_78, d_78);
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
    ATerm g_3 (ATerm t)
    {
      t = term_u_10;
      return(t);
    }
    t = crush_2(t, g_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      {
        ATerm q_13;
        q_13 = t;
        {
          ATerm r_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_18), not_null(m_18));
              ;
              LocalPopChoice(w_13);
            }
          else
            {
              t = r_13;
              t = SSL_gtr(not_null(l_18), not_null(m_18));
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
  ATerm s_18 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
      t_18 = t;
      r_18 :
      if(match_cons(t_18, sym__2))
        {
          u_18 = ATgetArgument(t_18, 0);
          v_18 = ATgetArgument(t_18, 1);
          {
            if(((s_18 != NULL) && (s_18 != u_18)))
              _fail(u_18);
            else
              s_18 = u_18;
            if(((s_18 != NULL) && (s_18 != v_18)))
              _fail(v_18);
            else
              s_18 = v_18;
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
ATerm if_verbose1_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm y_18 = NULL;
      ATerm z_18 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), term_l_7);
        t = geq_0(t);
      }
    }
    t = a_14;
    t = l_86(t);
    return(t);
  }
  t = try_1(t, h_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm d_19 = NULL,f_19 = NULL;
    ATerm f_14;
    f_14 = t;
    {
      ATerm e_19 = NULL;
      t = run_time_0(t);
      {
        e_19 = t;
        if(((d_19 != NULL) && (d_19 != e_19)))
          _fail(e_19);
        else
          d_19 = e_19;
      }
    }
    t = f_14;
    {
      ATerm g_19 = NULL;
      t = term_g_14;
      {
        t = get_config_0(t);
        {
          g_19 = t;
          if(((f_19 != NULL) && (f_19 != g_19)))
            _fail(g_19);
          else
            f_19 = g_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_14), not_null(d_19)), term_k_14), not_null(f_19)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_3);
  {
    t = term_u_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Version_0))
    {
      ATerm p_19 = NULL,r_19 = NULL;
      ATerm p_14;
      p_14 = t;
      {
        ATerm q_19 = NULL;
        t = SSLgetAnnotations(not_null(n_19));
        {
          q_19 = t;
          if(((p_19 != NULL) && (p_19 != q_19)))
            _fail(q_19);
          else
            p_19 = q_19;
        }
      }
      t = p_14;
      {
        ATerm s_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_19));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_3);
  t = r_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = SSL_table_create(not_null(x_19));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  {
    ATerm f_15;
    f_15 = t;
    {
      t = term_g_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_i_15, not_null(b_20));
          t = table_put_0(t);
        }
      }
    }
    t = f_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  t = SSL_table_destroy(not_null(f_20));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = SSL_exit(not_null(j_20));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(((ATgetType(n_20) == AT_LIST) && ATisEmpty(n_20)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
        {
          o_20 = ATgetFirst((ATermList) n_20);
          p_20 = (ATerm) ATgetNext((ATermList) n_20);
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
    ATerm s_20 = NULL;
    ATerm v_20 = NULL;
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm t_20 = NULL;
          ATerm u_20 = NULL;
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
          t = (ATerm) ATinsert(ATempty, not_null(t_20));
        }
      }
    {
      v_20 = t;
      if(((s_20 != NULL) && (s_20 != v_20)))
        _fail(v_20);
      else
        s_20 = v_20;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(s_20));
      t = printnl_0(t);
    }
  }
  t = j_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm y_20 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = Cons_2(t, u_72, y_20);
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  e_21 :
  if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
    {
      f_21 = ATgetFirst((ATermList) h_21);
      g_21 = (ATerm) ATgetNext((ATermList) h_21);
      {
        ATerm k_21 = NULL;
        t = not_null(g_21);
        {
          ATerm v_15;
          v_15 = t;
          {
            ATerm l_21 = NULL,n_21 = NULL,p_21 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              ATerm m_21 = NULL;
              t = i_0(t);
              {
                m_21 = t;
                if(((l_21 != NULL) && (l_21 != m_21)))
                  _fail(m_21);
                else
                  l_21 = m_21;
              }
            }
            t = d_16;
            {
              ATerm o_21 = NULL;
              t = not_null(f_21);
              {
                t = g_0(t);
                {
                  o_21 = t;
                  if(((n_21 != NULL) && (n_21 != o_21)))
                    _fail(o_21);
                  else
                    n_21 = o_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_21)), not_null(n_21));
                {
                  p_21 = t;
                  if(((k_21 != NULL) && (k_21 != p_21)))
                    _fail(p_21);
                  else
                    k_21 = p_21;
                }
              }
            }
          }
          t = v_15;
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(k_21);
              return(t);
            }
            t = reverse_acc_2(t, g_0, k_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_21) == AT_LIST) && ATisEmpty(h_21)))
        {
          {
            t = term_h_10;
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
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_Program_1))
    {
      b_22 = ATgetArgument(a_22, 0);
      {
        ATerm e_22 = NULL,g_22 = NULL;
        ATerm f_22 = NULL;
        t = SSLgetAnnotations(not_null(a_22));
        {
          f_22 = t;
          if(((e_22 != NULL) && (e_22 != f_22)))
            _fail(f_22);
          else
            e_22 = f_22;
        }
        {
          t = not_null(b_22);
          {
            ATerm i_22 = NULL;
            t = x_59(t);
            {
              g_22 = t;
              {
                ATerm j_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_22)), not_null(e_22));
                {
                  j_22 = t;
                  if(((i_22 != NULL) && (i_22 != j_22)))
                    _fail(j_22);
                  else
                    i_22 = j_22;
                }
                t = not_null(i_22);
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
  ATerm s_22 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL;
      t = term_g_14;
      {
        t = get_config_0(t);
        {
          t_22 = t;
          if(((s_22 != NULL) && (s_22 != t_22)))
            _fail(t_22);
          else
            s_22 = t_22;
        }
      }
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            ATerm u_22 = NULL;
            u_22 = t;
            if(((s_22 != NULL) && (s_22 != u_22)))
              _fail(u_22);
            else
              s_22 = u_22;
            return(t);
          }
          t = Program_1(t, n_3);
          return(t);
        }
        t = option_defined_1(t, m_3);
      }
    }
  {
    ATerm o_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(s_22);
        return(t);
      }
      t = short_description_1(t, t_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_3);
    {
      t = term_i_16;
      {
        t = echo_0(t);
        {
          t = term_m_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm v_22 = NULL;
                  ATerm w_22 = NULL;
                  w_22 = t;
                  if(((v_22 != NULL) && (v_22 != w_22)))
                    _fail(w_22);
                  else
                    v_22 = w_22;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_22)), term_n_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_3);
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm x_22 = NULL;
                    ATerm y_22 = NULL;
                    ATerm k_4 (ATerm t)
                    {
                      t = not_null(s_22);
                      return(t);
                    }
                    t = long_description_1(t, k_4);
                    {
                      y_22 = t;
                      if(((x_22 != NULL) && (x_22 != y_22)))
                        _fail(y_22);
                      else
                        x_22 = y_22;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_22)), term_t_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_4);
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
    ATerm l_23 = NULL;
    ATerm m_23 = NULL;
    m_23 = t;
    if(((l_23 != NULL) && (l_23 != m_23)))
      _fail(m_23);
    else
      l_23 = m_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(l_23)));
      t = printnl_0(t);
    }
  }
  t = u_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = p_83(t);
    t = debug_0(t);
  }
  t = v_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_Undefined_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm x_23 = NULL,z_23 = NULL;
        ATerm y_23 = NULL;
        t = SSLgetAnnotations(not_null(t_23));
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
        {
          t = not_null(u_23);
          {
            ATerm b_24 = NULL;
            t = y_59(t);
            {
              z_23 = t;
              {
                ATerm c_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_23)), not_null(x_23));
                {
                  c_24 = t;
                  if(((b_24 != NULL) && (b_24 != c_24)))
                    _fail(c_24);
                  else
                    b_24 = c_24;
                }
                t = not_null(b_24);
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
ATerm fetch_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm h_24 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_73, _id);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = Cons_2(t, _id, h_24);
      }
    return(t);
  }
  t = h_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_87 (ATerm))
{
  t = fetch_1(t, o_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Help_0))
    {
      ATerm o_24 = NULL,q_24 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm p_24 = NULL;
        t = SSLgetAnnotations(not_null(m_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
      }
      t = z_16;
      {
        ATerm w_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_24));
        {
          w_24 = t;
          if(((q_24 != NULL) && (q_24 != w_24)))
            _fail(w_24);
          else
            q_24 = w_24;
        }
        t = not_null(q_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_65(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      t = SSL_table_get(not_null(d_25), not_null(e_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym__3))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      r_25 = ATgetArgument(o_25, 2);
      {
        ATerm g_17;
        g_17 = t;
        {
          ATerm v_25 = NULL;
          ATerm w_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(q_25));
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
              w_25 = t;
              if(((v_25 != NULL) && (v_25 != w_25)))
                _fail(w_25);
              else
                v_25 = w_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_25), not_null(q_25), (ATerm) ATinsert(CheckATermList(not_null(v_25)), not_null(r_25)));
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
ATerm register_usage_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm a_26 = NULL;
  ATerm b_26 = NULL;
  t = term_h_10;
  {
    t = t_88(t);
    {
      b_26 = t;
      if(((a_26 != NULL) && (a_26 != b_26)))
        _fail(b_26);
      else
        a_26 = b_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(a_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_string(h_26, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          i_26 = ATgetFirst((ATermList) h_26);
          j_26 = (ATerm) ATgetNext((ATermList) h_26);
          {
            ATerm m_26 = NULL;
            ATerm n_17;
            n_17 = t;
            {
              t = not_null(i_26);
              t = a_0(t);
            }
            t = n_17;
            {
              ATerm n_26 = NULL;
              t = term_h_10;
              {
                t = c_0(t);
                {
                  n_26 = t;
                  if(((m_26 != NULL) && (m_26 != n_26)))
                    _fail(n_26);
                  else
                    m_26 = n_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_26)), not_null(m_26));
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
  ATerm l_4 (ATerm t)
  {
    ATerm s_26 = NULL;
    s_26 = t;
    r_26 :
    if(!(match_string(s_26, "--help")))
      {
        if(!(match_string(s_26, "-h")))
          {
            if(!(match_string(s_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_r_17;
    {
      t = set_config_0(t);
      t = term_s_17;
    }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = Option_3(t, l_4, m_4, n_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  u_26 :
  if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
    {
      w_26 = ATgetFirst((ATermList) v_26);
      x_26 = (ATerm) ATgetNext((ATermList) v_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_26)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
    {
      i_27 = ATgetFirst((ATermList) h_27);
      j_27 = (ATerm) ATgetNext((ATermList) h_27);
      {
        ATerm n_27 = NULL,p_27 = NULL;
        ATerm o_27 = NULL;
        t = SSLgetAnnotations(not_null(h_27));
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
        {
          t = not_null(i_27);
          {
            ATerm r_27 = NULL;
            t = r_54(t);
            {
              p_27 = t;
              {
                t = not_null(j_27);
                {
                  ATerm t_27 = NULL;
                  t = s_54(t);
                  {
                    r_27 = t;
                    {
                      ATerm u_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_27)), not_null(p_27)), not_null(n_27));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  d_28 :
  if(((ATgetType(e_28) == AT_LIST) && ATisEmpty(e_28)))
    {
      {
        ATerm g_28 = NULL,i_28 = NULL;
        ATerm u_17;
        u_17 = t;
        {
          ATerm h_28 = NULL;
          t = SSLgetAnnotations(not_null(e_28));
          {
            h_28 = t;
            if(((g_28 != NULL) && (g_28 != h_28)))
              _fail(h_28);
            else
              g_28 = h_28;
          }
        }
        t = u_17;
        {
          ATerm j_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_28));
          {
            j_28 = t;
            if(((i_28 != NULL) && (i_28 != j_28)))
              _fail(j_28);
            else
              i_28 = j_28;
          }
          t = not_null(i_28);
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
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(q_28), not_null(r_28));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_88 (ATerm))
{
  ATerm v_17;
  v_17 = t;
  {
    ATerm o_4 (ATerm t)
    {
      t = term_y_17;
      t = r_88(t);
      return(t);
    }
    t = try_1(t, o_4);
  }
  t = v_17;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm z_28 = NULL;
      ATerm b_18;
      b_18 = t;
      {
        ATerm x_28 = NULL;
        ATerm y_28 = NULL;
        y_28 = t;
        if(((x_28 != NULL) && (x_28 != y_28)))
          _fail(y_28);
        else
          x_28 = y_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_14, not_null(x_28));
          t = set_config_0(t);
        }
      }
      t = b_18;
      {
        ATerm a_29 = NULL;
        a_29 = t;
        if(((z_28 != NULL) && (z_28 != a_29)))
          _fail(a_29);
        else
          z_28 = a_29;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_28));
      }
      return(t);
    }
    ATerm q_4 (ATerm t)
    {
      ATerm f_18 = t;
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
                t = r_88(t);
                t = Cons_2(t, _id, q_4);
              }
            }
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_4, q_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  ATerm n_18;
  n_18 = t;
  {
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
    j_29 = t;
    f_29 :
    if(match_cons(j_29, sym__3))
      {
        k_29 = ATgetArgument(j_29, 0);
        l_29 = ATgetArgument(j_29, 1);
        m_29 = ATgetArgument(j_29, 2);
        {
          if(((g_29 != NULL) && (g_29 != k_29)))
            _fail(k_29);
          else
            g_29 = k_29;
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
              t = SSL_table_put(not_null(g_29), not_null(h_29), not_null(i_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm p_29 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    t = term_p_18;
    t = table_put_0(t);
  }
  t = o_18;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm q_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_88(t);
          ;
          LocalPopChoice(w_18);
        }
      else
        {
          t = q_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_4);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm x_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19;
            b_19 = t;
            {
              ATerm c_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_19);
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
            LocalPopChoice(a_19);
          }
        else
          {
            t = x_18;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm q_29 = NULL;
                  q_29 = t;
                  if(((p_29 != NULL) && (p_29 != q_29)))
                    _fail(q_29);
                  else
                    p_29 = q_29;
                  return(t);
                }
                t = Undefined_1(t, y_4);
                return(t);
              }
              t = option_defined_1(t, x_4);
              {
                ATerm z_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_29)), term_i_19);
                  return(t);
                }
                t = say_1(t, z_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_4);
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
ATerm option_wrap_4 (ATerm t, ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm))
{
  t = parse_options_1(t, x_84);
  {
    t = store_options_0(t);
    {
      t = z_84(t);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_84);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm o_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = o_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
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
  ATerm f_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_85);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, e_5, q_85, r_85, f_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm t_29 = NULL;
        ATerm u_29 = NULL;
        t = term_g_14;
        {
          t = get_config_0(t);
          {
            u_29 = t;
            if(((t_29 != NULL) && (t_29 != u_29)))
              _fail(u_29);
            else
              t_29 = u_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(t_29)));
          t = printnl_0(t);
        }
      }
      t = w_19;
      return(t);
    }
    t = if_verbose2_1(t, i_5);
    return(t);
  }
  t = iowrap_4(t, i_85, j_85, k_85, h_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_85 (ATerm), ATerm h_85 (ATerm))
{
  t = iowrap_3(t, g_85, h_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    t = _2(t, _id, d_85);
    return(t);
  }
  t = iowrap_2(t, j_5, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm x_29 = NULL;
    t = get_primitives_0(t);
    {
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, not_null(x_29))));
    }
    return(t);
  }
  t = iowrap_1(t, k_5);
  return(t);
}
