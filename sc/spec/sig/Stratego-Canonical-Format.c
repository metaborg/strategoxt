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
Symbol sym_MatchOp_2;
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
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  init_constant_terms();
}
ATerm term_t_16;
ATerm term_e_16;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_q_6;
ATerm term_s_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_d_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_d_11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_d_11);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__3, term_i_14, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm f_66 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm i_66 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm Alt_3 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm t_66 (ATerm));
ATerm Case_4 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm Let_2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm Prim_2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm Where_1 (ATerm, ATerm t_55 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm Build_1 (ATerm, ATerm o_55 (ATerm));
ATerm Op_2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm As_2 (ATerm, ATerm m_59 (ATerm), ATerm n_59 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm o_59 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm n_55 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_56 (ATerm));
ATerm All_1 (ATerm, ATerm a_56 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm y_55 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm Rec_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_56 (ATerm));
ATerm Call_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm Seq_2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm Test_1 (ATerm, ATerm c_56 (ATerm));
ATerm Not_1 (ATerm, ATerm d_56 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm j_74 (ATerm));
ATerm Strategies_1 (ATerm, ATerm b_58 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_58 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_87 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_86 (ATerm));
ATerm debug_1 (ATerm, ATerm b_85 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm crush_2 (ATerm, ATerm p_79 (ATerm), ATerm q_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_90 (ATerm));
ATerm map_1 (ATerm, ATerm h_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_90 (ATerm));
ATerm Program_1 (ATerm, ATerm n_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_55 (ATerm), ATerm g_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_86 (ATerm), ATerm u_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_86 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm v_10 = NULL,z_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Continue_1))
    {
      z_10 = ATgetArgument(v_10, 0);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(z_10);
          {
            ATerm d_13 = NULL;
            t = f_66(t);
            {
              o_12 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(o_12)), not_null(m_12));
                {
                  e_13 = t;
                  if(((d_13 != NULL) && (d_13 != e_13)))
                    _fail(e_13);
                  else
                    d_13 = e_13;
                }
                t = not_null(d_13);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Var_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL,l_14 = NULL;
            ATerm k_14 = NULL;
            t = SSLgetAnnotations(not_null(f_14));
            {
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
            }
            {
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                t = s_0(t);
                {
                  l_14 = t;
                  {
                    ATerm o_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    t = not_null(n_14);
                  }
                }
              }
            }
            ;
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm r_14 = NULL,t_14 = NULL;
              ATerm s_14 = NULL;
              t = SSLgetAnnotations(not_null(f_14));
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
              {
                t = not_null(g_14);
                {
                  ATerm v_14 = NULL;
                  t = s_0(t);
                  {
                    t_14 = t;
                    {
                      ATerm w_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
                      {
                        w_14 = t;
                        if(((v_14 != NULL) && (v_14 != w_14)))
                          _fail(w_14);
                        else
                          v_14 = w_14;
                      }
                      t = not_null(v_14);
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
ATerm Assign_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Assign_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = i_66(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm term_expression_0 (ATerm t)
{
  ATerm r_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(s_4);
    }
  else
    {
      t = r_4;
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm v_4 = t;
              int w_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
                        ;
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
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(a_5);
                            }
                          else
                            {
                              t = z_4;
                              {
                                ATerm b_5 = t;
                                int c_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(c_5);
                                  }
                                else
                                  {
                                    t = b_5;
                                    {
                                      ATerm d_5 = t;
                                      int e_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          ;
                                          LocalPopChoice(e_5);
                                        }
                                      else
                                        {
                                          t = d_5;
                                          {
                                            ATerm f_5 = t;
                                            int g_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(g_5);
                                              }
                                            else
                                              {
                                                t = f_5;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_h_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
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
ATerm Assign_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Assign_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      m_16 = ATgetArgument(k_16, 1);
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,s_16 = NULL;
            ATerm r_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm u_16 = NULL;
                t = q_0(t);
                {
                  s_16 = t;
                  {
                    t = not_null(m_16);
                    {
                      ATerm w_16 = NULL;
                      t = r_0(t);
                      {
                        u_16 = t;
                        {
                          ATerm x_16 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(s_16), not_null(u_16)), not_null(q_16));
                          {
                            x_16 = t;
                            if(((w_16 != NULL) && (w_16 != x_16)))
                              _fail(x_16);
                            else
                              w_16 = x_16;
                          }
                          t = not_null(w_16);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm b_17 = NULL,d_17 = NULL;
              ATerm c_17 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                c_17 = t;
                if(((b_17 != NULL) && (b_17 != c_17)))
                  _fail(c_17);
                else
                  b_17 = c_17;
              }
              {
                t = not_null(l_16);
                {
                  ATerm f_17 = NULL;
                  t = q_0(t);
                  {
                    d_17 = t;
                    {
                      t = not_null(m_16);
                      {
                        ATerm h_17 = NULL;
                        t = r_0(t);
                        {
                          f_17 = t;
                          {
                            ATerm i_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                            {
                              i_17 = t;
                              if(((h_17 != NULL) && (h_17 != i_17)))
                                _fail(i_17);
                              else
                                h_17 = i_17;
                            }
                            t = not_null(h_17);
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
ATerm Fun_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Fun_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm j_18 = NULL;
            t = j_66(t);
            {
              h_18 = t;
              {
                t = not_null(b_18);
                {
                  ATerm l_18 = NULL;
                  t = k_66(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(h_18), not_null(j_18)), not_null(f_18));
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
ATerm Alt_3 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Alt_3))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      c_19 = ATgetArgument(z_18, 2);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(z_18));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(a_19);
          {
            ATerm l_19 = NULL;
            t = c_66(t);
            {
              j_19 = t;
              {
                t = not_null(b_19);
                {
                  ATerm n_19 = NULL;
                  t = d_66(t);
                  {
                    l_19 = t;
                    {
                      t = not_null(c_19);
                      {
                        ATerm p_19 = NULL;
                        t = e_66(t);
                        {
                          n_19 = t;
                          {
                            ATerm q_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(j_19), not_null(l_19), not_null(n_19)), not_null(h_19));
                            {
                              q_19 = t;
                              if(((p_19 != NULL) && (p_19 != q_19)))
                                _fail(q_19);
                              else
                                p_19 = q_19;
                            }
                            t = not_null(p_19);
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
ATerm case_alternative_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            ;
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
                  t = Str_1(t, is_string_0);
                  ;
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
                        t = Int_1(t, is_int_0);
                        ;
                        LocalPopChoice(r_5);
                      }
                    else
                      {
                        t = q_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, u_0);
        return(t);
      }
      t = Alt_3(t, h_0, t_0, t_66);
      ;
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_s_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Case_4))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      j_20 = ATgetArgument(f_20, 3);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm t_20 = NULL;
            t = v_65(t);
            {
              r_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm v_20 = NULL;
                  t = w_65(t);
                  {
                    t_20 = t;
                    {
                      t = not_null(i_20);
                      {
                        ATerm x_20 = NULL;
                        t = x_65(t);
                        {
                          v_20 = t;
                          {
                            t = not_null(j_20);
                            {
                              ATerm z_20 = NULL;
                              t = y_65(t);
                              {
                                x_20 = t;
                                {
                                  ATerm a_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_20), not_null(t_20), not_null(v_20), not_null(x_20)), not_null(p_20));
                                  {
                                    a_21 = t;
                                    if(((z_20 != NULL) && (z_20 != a_21)))
                                      _fail(a_21);
                                    else
                                      z_20 = a_21;
                                  }
                                  t = not_null(z_20);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Let_2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm y_21 = NULL;
            t = v_56(t);
            {
              w_21 = t;
              {
                t = not_null(q_21);
                {
                  ATerm a_22 = NULL;
                  t = w_56(t);
                  {
                    y_21 = t;
                    {
                      ATerm b_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_21), not_null(y_21)), not_null(u_21));
                      {
                        b_22 = t;
                        if(((a_22 != NULL) && (a_22 != b_22)))
                          _fail(b_22);
                        else
                          a_22 = b_22;
                      }
                      t = not_null(a_22);
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
ATerm Prim_2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Prim_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm t_22 = NULL,v_22 = NULL;
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
        {
          t = not_null(o_22);
          {
            ATerm x_22 = NULL;
            t = j_55(t);
            {
              v_22 = t;
              {
                t = not_null(p_22);
                {
                  ATerm z_22 = NULL;
                  t = k_55(t);
                  {
                    x_22 = t;
                    {
                      ATerm a_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_22), not_null(x_22)), not_null(t_22));
                      {
                        a_23 = t;
                        if(((z_22 != NULL) && (z_22 != a_23)))
                          _fail(a_23);
                        else
                          z_22 = a_23;
                      }
                      t = not_null(z_22);
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
ATerm Where_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Where_1))
    {
      m_23 = ATgetArgument(l_23, 0);
      {
        ATerm p_23 = NULL,r_23 = NULL;
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm t_23 = NULL;
            t = t_55(t);
            {
              r_23 = t;
              {
                ATerm u_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(r_23)), not_null(p_23));
                {
                  u_23 = t;
                  if(((t_23 != NULL) && (t_23 != u_23)))
                    _fail(u_23);
                  else
                    t_23 = u_23;
                }
                t = not_null(t_23);
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
ATerm Scope_2 (ATerm t, ATerm r_55 (ATerm), ATerm s_55 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym_Scope_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      {
        ATerm l_24 = NULL,n_24 = NULL;
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(f_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        {
          t = not_null(g_24);
          {
            ATerm p_24 = NULL;
            t = r_55(t);
            {
              n_24 = t;
              {
                t = not_null(h_24);
                {
                  ATerm r_24 = NULL;
                  t = s_55(t);
                  {
                    p_24 = t;
                    {
                      ATerm s_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_24), not_null(p_24)), not_null(l_24));
                      {
                        s_24 = t;
                        if(((r_24 != NULL) && (r_24 != s_24)))
                          _fail(s_24);
                        else
                          r_24 = s_24;
                      }
                      t = not_null(r_24);
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
ATerm Build_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_Build_1))
    {
      e_25 = ATgetArgument(d_25, 0);
      {
        ATerm m_25 = NULL,o_25 = NULL;
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(d_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
        {
          t = not_null(e_25);
          {
            ATerm q_25 = NULL;
            t = o_55(t);
            {
              o_25 = t;
              {
                ATerm r_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(o_25)), not_null(m_25));
                {
                  r_25 = t;
                  if(((q_25 != NULL) && (q_25 != r_25)))
                    _fail(r_25);
                  else
                    q_25 = r_25;
                }
                t = not_null(q_25);
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
ATerm Op_2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_Op_2))
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
            t = n_57(t);
            {
              n_26 = t;
              {
                t = not_null(h_26);
                {
                  ATerm r_26 = NULL;
                  t = o_57(t);
                  {
                    p_26 = t;
                    {
                      ATerm s_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_26), not_null(p_26)), not_null(l_26));
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
ATerm As_2 (ATerm t, ATerm m_59 (ATerm), ATerm n_59 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_As_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm k_27 = NULL,m_27 = NULL;
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        {
          t = not_null(f_27);
          {
            ATerm o_27 = NULL;
            t = m_59(t);
            {
              m_27 = t;
              {
                t = not_null(g_27);
                {
                  ATerm q_27 = NULL;
                  t = n_59(t);
                  {
                    o_27 = t;
                    {
                      ATerm r_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(m_27), not_null(o_27)), not_null(k_27));
                      {
                        r_27 = t;
                        if(((q_27 != NULL) && (q_27 != r_27)))
                          _fail(r_27);
                        else
                          q_27 = r_27;
                      }
                      t = not_null(q_27);
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
ATerm BuildDefault_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_BuildDefault_1))
    {
      d_28 = ATgetArgument(c_28, 0);
      {
        ATerm g_28 = NULL,i_28 = NULL;
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(c_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        {
          t = not_null(d_28);
          {
            ATerm k_28 = NULL;
            t = o_59(t);
            {
              i_28 = t;
              {
                ATerm l_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(i_28)), not_null(g_28));
                {
                  l_28 = t;
                  if(((k_28 != NULL) && (k_28 != l_28)))
                    _fail(l_28);
                  else
                    k_28 = l_28;
                }
                t = not_null(k_28);
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Str_1))
    {
      a_29 = ATgetArgument(z_28, 0);
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_29 = NULL,f_29 = NULL;
            ATerm e_29 = NULL;
            t = SSLgetAnnotations(not_null(z_28));
            {
              e_29 = t;
              if(((d_29 != NULL) && (d_29 != e_29)))
                _fail(e_29);
              else
                d_29 = e_29;
            }
            {
              t = not_null(a_29);
              {
                ATerm h_29 = NULL;
                t = p_0(t);
                {
                  f_29 = t;
                  {
                    ATerm i_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_29)), not_null(d_29));
                    {
                      i_29 = t;
                      if(((h_29 != NULL) && (h_29 != i_29)))
                        _fail(i_29);
                      else
                        h_29 = i_29;
                    }
                    t = not_null(h_29);
                  }
                }
              }
            }
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm l_29 = NULL,n_29 = NULL;
              ATerm m_29 = NULL;
              t = SSLgetAnnotations(not_null(z_28));
              {
                m_29 = t;
                if(((l_29 != NULL) && (l_29 != m_29)))
                  _fail(m_29);
                else
                  l_29 = m_29;
              }
              {
                t = not_null(a_29);
                {
                  ATerm p_29 = NULL;
                  t = p_0(t);
                  {
                    n_29 = t;
                    {
                      ATerm q_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(n_29)), not_null(l_29));
                      {
                        q_29 = t;
                        if(((p_29 != NULL) && (p_29 != q_29)))
                          _fail(q_29);
                        else
                          p_29 = q_29;
                      }
                      t = not_null(p_29);
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
ATerm is_real_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  t = SSL_is_real(not_null(a_30));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_Real_1))
    {
      n_30 = ATgetArgument(m_30, 0);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_30 = NULL,t_30 = NULL;
            ATerm s_30 = NULL;
            t = SSLgetAnnotations(not_null(m_30));
            {
              s_30 = t;
              if(((r_30 != NULL) && (r_30 != s_30)))
                _fail(s_30);
              else
                r_30 = s_30;
            }
            {
              t = not_null(n_30);
              {
                ATerm v_30 = NULL;
                t = o_0(t);
                {
                  t_30 = t;
                  {
                    ATerm w_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_30)), not_null(r_30));
                    {
                      w_30 = t;
                      if(((v_30 != NULL) && (v_30 != w_30)))
                        _fail(w_30);
                      else
                        v_30 = w_30;
                    }
                    t = not_null(v_30);
                  }
                }
              }
            }
            ;
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm z_30 = NULL,b_31 = NULL;
              ATerm a_31 = NULL;
              t = SSLgetAnnotations(not_null(m_30));
              {
                a_31 = t;
                if(((z_30 != NULL) && (z_30 != a_31)))
                  _fail(a_31);
                else
                  z_30 = a_31;
              }
              {
                t = not_null(n_30);
                {
                  ATerm d_31 = NULL;
                  t = o_0(t);
                  {
                    b_31 = t;
                    {
                      ATerm e_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(b_31)), not_null(z_30));
                      {
                        e_31 = t;
                        if(((d_31 != NULL) && (d_31 != e_31)))
                          _fail(e_31);
                        else
                          d_31 = e_31;
                      }
                      t = not_null(d_31);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Int_1))
    {
      z_31 = ATgetArgument(y_31, 0);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_32 = NULL,e_32 = NULL;
            ATerm d_32 = NULL;
            t = SSLgetAnnotations(not_null(y_31));
            {
              d_32 = t;
              if(((c_32 != NULL) && (c_32 != d_32)))
                _fail(d_32);
              else
                c_32 = d_32;
            }
            {
              t = not_null(z_31);
              {
                ATerm g_32 = NULL;
                t = n_0(t);
                {
                  e_32 = t;
                  {
                    ATerm h_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(e_32)), not_null(c_32));
                    {
                      h_32 = t;
                      if(((g_32 != NULL) && (g_32 != h_32)))
                        _fail(h_32);
                      else
                        g_32 = h_32;
                    }
                    t = not_null(g_32);
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            {
              ATerm k_32 = NULL,m_32 = NULL;
              ATerm l_32 = NULL;
              t = SSLgetAnnotations(not_null(y_31));
              {
                l_32 = t;
                if(((k_32 != NULL) && (k_32 != l_32)))
                  _fail(l_32);
                else
                  k_32 = l_32;
              }
              {
                t = not_null(z_31);
                {
                  ATerm o_32 = NULL;
                  t = n_0(t);
                  {
                    m_32 = t;
                    {
                      ATerm p_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(m_32)), not_null(k_32));
                      {
                        p_32 = t;
                        if(((o_32 != NULL) && (o_32 != p_32)))
                          _fail(p_32);
                        else
                          o_32 = p_32;
                      }
                      t = not_null(o_32);
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
ATerm Wld_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_Wld_0))
    {
      ATerm e_33 = NULL,g_33 = NULL;
      ATerm z_5;
      z_5 = t;
      {
        ATerm f_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
      }
      t = z_5;
      {
        ATerm h_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(e_33));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
        t = not_null(g_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
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
            t = Var_1(t, is_string_0);
            ;
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
                  t = Int_1(t, is_int_0);
                  ;
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
                        t = Real_1(t, is_real_0);
                        ;
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
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(j_6);
                            }
                          else
                            {
                              t = i_6;
                              {
                                ATerm k_6 = t;
                                int l_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    ;
                                    LocalPopChoice(l_6);
                                  }
                                else
                                  {
                                    t = k_6;
                                    {
                                      ATerm m_6 = t;
                                      int n_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
                                          ;
                                          LocalPopChoice(n_6);
                                        }
                                      else
                                        {
                                          t = m_6;
                                          {
                                            ATerm o_6 = t;
                                            int p_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                ;
                                                LocalPopChoice(p_6);
                                              }
                                            else
                                              {
                                                t = o_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_q_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, y_0);
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
ATerm Match_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_Match_1))
    {
      s_33 = ATgetArgument(r_33, 0);
      {
        ATerm v_33 = NULL,x_33 = NULL;
        ATerm w_33 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        {
          t = not_null(s_33);
          {
            ATerm z_33 = NULL;
            t = n_55(t);
            {
              x_33 = t;
              {
                ATerm a_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(x_33)), not_null(v_33));
                {
                  a_34 = t;
                  if(((z_33 != NULL) && (z_33 != a_34)))
                    _fail(a_34);
                  else
                    z_33 = a_34;
                }
                t = not_null(z_33);
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
ATerm Thread_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm k_34 = NULL,l_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym_Thread_1))
    {
      l_34 = ATgetArgument(k_34, 0);
      {
        ATerm o_34 = NULL,q_34 = NULL;
        ATerm p_34 = NULL;
        t = SSLgetAnnotations(not_null(k_34));
        {
          p_34 = t;
          if(((o_34 != NULL) && (o_34 != p_34)))
            _fail(p_34);
          else
            o_34 = p_34;
        }
        {
          t = not_null(l_34);
          {
            ATerm s_34 = NULL;
            t = b_56(t);
            {
              q_34 = t;
              {
                ATerm t_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(q_34)), not_null(o_34));
                {
                  t_34 = t;
                  if(((s_34 != NULL) && (s_34 != t_34)))
                    _fail(t_34);
                  else
                    s_34 = t_34;
                }
                t = not_null(s_34);
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
ATerm All_1 (ATerm t, ATerm a_56 (ATerm))
{
  ATerm d_35 = NULL,e_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym_All_1))
    {
      e_35 = ATgetArgument(d_35, 0);
      {
        ATerm h_35 = NULL,j_35 = NULL;
        ATerm i_35 = NULL;
        t = SSLgetAnnotations(not_null(d_35));
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
        {
          t = not_null(e_35);
          {
            ATerm l_35 = NULL;
            t = a_56(t);
            {
              j_35 = t;
              {
                ATerm m_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(j_35)), not_null(h_35));
                {
                  m_35 = t;
                  if(((l_35 != NULL) && (l_35 != m_35)))
                    _fail(m_35);
                  else
                    l_35 = m_35;
                }
                t = not_null(l_35);
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
  ATerm a_36 = NULL,b_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym_Some_1))
    {
      b_36 = ATgetArgument(a_36, 0);
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_36 = NULL,g_36 = NULL;
            ATerm f_36 = NULL;
            t = SSLgetAnnotations(not_null(a_36));
            {
              f_36 = t;
              if(((e_36 != NULL) && (e_36 != f_36)))
                _fail(f_36);
              else
                e_36 = f_36;
            }
            {
              t = not_null(b_36);
              {
                ATerm i_36 = NULL;
                t = m_0(t);
                {
                  g_36 = t;
                  {
                    ATerm j_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(g_36)), not_null(e_36));
                    {
                      j_36 = t;
                      if(((i_36 != NULL) && (i_36 != j_36)))
                        _fail(j_36);
                      else
                        i_36 = j_36;
                    }
                    t = not_null(i_36);
                  }
                }
              }
            }
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            {
              ATerm m_36 = NULL,o_36 = NULL;
              ATerm n_36 = NULL;
              t = SSLgetAnnotations(not_null(a_36));
              {
                n_36 = t;
                if(((m_36 != NULL) && (m_36 != n_36)))
                  _fail(n_36);
                else
                  m_36 = n_36;
              }
              {
                t = not_null(b_36);
                {
                  ATerm q_36 = NULL;
                  t = m_0(t);
                  {
                    o_36 = t;
                    {
                      ATerm r_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(o_36)), not_null(m_36));
                      {
                        r_36 = t;
                        if(((q_36 != NULL) && (q_36 != r_36)))
                          _fail(r_36);
                        else
                          q_36 = r_36;
                      }
                      t = not_null(q_36);
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
ATerm One_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_One_1))
    {
      g_37 = ATgetArgument(f_37, 0);
      {
        ATerm j_37 = NULL,l_37 = NULL;
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm n_37 = NULL;
            t = y_55(t);
            {
              l_37 = t;
              {
                ATerm o_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(l_37)), not_null(j_37));
                {
                  o_37 = t;
                  if(((n_37 != NULL) && (n_37 != o_37)))
                    _fail(o_37);
                  else
                    n_37 = o_37;
                }
                t = not_null(n_37);
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
ATerm Cong_2 (ATerm t, ATerm w_55 (ATerm), ATerm x_55 (ATerm))
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
  c_38 = t;
  y_37 :
  if(match_cons(c_38, sym_Cong_2))
    {
      d_38 = ATgetArgument(c_38, 0);
      e_38 = ATgetArgument(c_38, 1);
      {
        ATerm i_38 = NULL,k_38 = NULL;
        ATerm j_38 = NULL;
        t = SSLgetAnnotations(not_null(c_38));
        {
          j_38 = t;
          if(((i_38 != NULL) && (i_38 != j_38)))
            _fail(j_38);
          else
            i_38 = j_38;
        }
        {
          t = not_null(d_38);
          {
            ATerm m_38 = NULL;
            t = w_55(t);
            {
              k_38 = t;
              {
                t = not_null(e_38);
                {
                  ATerm o_38 = NULL;
                  t = x_55(t);
                  {
                    m_38 = t;
                    {
                      ATerm p_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(k_38), not_null(m_38)), not_null(i_38));
                      {
                        p_38 = t;
                        if(((o_38 != NULL) && (o_38 != p_38)))
                          _fail(p_38);
                        else
                          o_38 = p_38;
                      }
                      t = not_null(o_38);
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
  ATerm w_38 = NULL;
  w_38 = t;
  t = SSL_is_int(not_null(w_38));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_Path_2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      {
        ATerm l_39 = NULL,n_39 = NULL;
        ATerm m_39 = NULL;
        t = SSLgetAnnotations(not_null(f_39));
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
        {
          t = not_null(g_39);
          {
            ATerm p_39 = NULL;
            t = u_55(t);
            {
              n_39 = t;
              {
                t = not_null(h_39);
                {
                  ATerm r_39 = NULL;
                  t = v_55(t);
                  {
                    p_39 = t;
                    {
                      ATerm t_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(n_39), not_null(p_39)), not_null(l_39));
                      {
                        t_39 = t;
                        if(((r_39 != NULL) && (r_39 != t_39)))
                          _fail(t_39);
                        else
                          r_39 = t_39;
                      }
                      t = not_null(r_39);
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
ATerm Rec_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym_Rec_2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        ATerm o_40 = NULL,q_40 = NULL;
        ATerm p_40 = NULL;
        t = SSLgetAnnotations(not_null(i_40));
        {
          p_40 = t;
          if(((o_40 != NULL) && (o_40 != p_40)))
            _fail(p_40);
          else
            o_40 = p_40;
        }
        {
          t = not_null(j_40);
          {
            ATerm s_40 = NULL;
            t = t_56(t);
            {
              q_40 = t;
              {
                t = not_null(k_40);
                {
                  ATerm u_40 = NULL;
                  t = u_56(t);
                  {
                    s_40 = t;
                    {
                      ATerm v_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_40), not_null(s_40)), not_null(o_40));
                      {
                        v_40 = t;
                        if(((u_40 != NULL) && (u_40 != v_40)))
                          _fail(v_40);
                        else
                          u_40 = v_40;
                      }
                      t = not_null(u_40);
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
ATerm SVar_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym_SVar_1))
    {
      k_41 = ATgetArgument(j_41, 0);
      {
        ATerm n_41 = NULL,p_41 = NULL;
        ATerm o_41 = NULL;
        t = SSLgetAnnotations(not_null(j_41));
        {
          o_41 = t;
          if(((n_41 != NULL) && (n_41 != o_41)))
            _fail(o_41);
          else
            n_41 = o_41;
        }
        {
          t = not_null(k_41);
          {
            ATerm r_41 = NULL;
            t = s_56(t);
            {
              p_41 = t;
              {
                ATerm t_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(p_41)), not_null(n_41));
                {
                  t_41 = t;
                  if(((r_41 != NULL) && (r_41 != t_41)))
                    _fail(t_41);
                  else
                    r_41 = t_41;
                }
                t = not_null(r_41);
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
ATerm Call_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Call_2))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      {
        ATerm m_42 = NULL,o_42 = NULL;
        ATerm n_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          n_42 = t;
          if(((m_42 != NULL) && (m_42 != n_42)))
            _fail(n_42);
          else
            m_42 = n_42;
        }
        {
          t = not_null(f_42);
          {
            ATerm w_42 = NULL;
            t = h_57(t);
            {
              o_42 = t;
              {
                t = not_null(g_42);
                {
                  ATerm y_42 = NULL;
                  t = i_57(t);
                  {
                    w_42 = t;
                    {
                      ATerm z_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(o_42), not_null(w_42)), not_null(m_42));
                      {
                        z_42 = t;
                        if(((y_42 != NULL) && (y_42 != z_42)))
                          _fail(z_42);
                        else
                          y_42 = z_42;
                      }
                      t = not_null(y_42);
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
ATerm LGChoice_2 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_LGChoice_2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        ATerm r_43 = NULL,t_43 = NULL;
        ATerm s_43 = NULL;
        t = SSLgetAnnotations(not_null(l_43));
        {
          s_43 = t;
          if(((r_43 != NULL) && (r_43 != s_43)))
            _fail(s_43);
          else
            r_43 = s_43;
        }
        {
          t = not_null(m_43);
          {
            ATerm v_43 = NULL;
            t = p_56(t);
            {
              t_43 = t;
              {
                t = not_null(n_43);
                {
                  ATerm x_43 = NULL;
                  t = q_56(t);
                  {
                    v_43 = t;
                    {
                      ATerm y_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(t_43), not_null(v_43)), not_null(r_43));
                      {
                        y_43 = t;
                        if(((x_43 != NULL) && (x_43 != y_43)))
                          _fail(y_43);
                        else
                          x_43 = y_43;
                      }
                      t = not_null(x_43);
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
ATerm GChoice_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_GChoice_2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      {
        ATerm q_44 = NULL,s_44 = NULL;
        ATerm r_44 = NULL;
        t = SSLgetAnnotations(not_null(k_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        {
          t = not_null(l_44);
          {
            ATerm u_44 = NULL;
            t = n_56(t);
            {
              s_44 = t;
              {
                t = not_null(m_44);
                {
                  ATerm w_44 = NULL;
                  t = o_56(t);
                  {
                    u_44 = t;
                    {
                      ATerm x_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(s_44), not_null(u_44)), not_null(q_44));
                      {
                        x_44 = t;
                        if(((w_44 != NULL) && (w_44 != x_44)))
                          _fail(x_44);
                        else
                          w_44 = x_44;
                      }
                      t = not_null(w_44);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_GuardedLChoice_3))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      n_45 = ATgetArgument(k_45, 2);
      {
        ATerm s_45 = NULL,u_45 = NULL;
        ATerm t_45 = NULL;
        t = SSLgetAnnotations(not_null(k_45));
        {
          t_45 = t;
          if(((s_45 != NULL) && (s_45 != t_45)))
            _fail(t_45);
          else
            s_45 = t_45;
        }
        {
          t = not_null(l_45);
          {
            ATerm w_45 = NULL;
            t = k_56(t);
            {
              u_45 = t;
              {
                t = not_null(m_45);
                {
                  ATerm f_46 = NULL;
                  t = l_56(t);
                  {
                    w_45 = t;
                    {
                      t = not_null(n_45);
                      {
                        ATerm h_46 = NULL;
                        t = m_56(t);
                        {
                          f_46 = t;
                          {
                            ATerm k_46 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(u_45), not_null(w_45), not_null(f_46)), not_null(s_45));
                            {
                              k_46 = t;
                              if(((h_46 != NULL) && (h_46 != k_46)))
                                _fail(k_46);
                              else
                                h_46 = k_46;
                            }
                            t = not_null(h_46);
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
ATerm LChoice_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm h_47 = NULL,i_47 = NULL,n_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym_LChoice_2))
    {
      i_47 = ATgetArgument(h_47, 0);
      n_47 = ATgetArgument(h_47, 1);
      {
        ATerm r_47 = NULL,t_47 = NULL;
        ATerm s_47 = NULL;
        t = SSLgetAnnotations(not_null(h_47));
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
        {
          t = not_null(i_47);
          {
            ATerm v_47 = NULL;
            t = i_56(t);
            {
              t_47 = t;
              {
                t = not_null(n_47);
                {
                  ATerm x_47 = NULL;
                  t = j_56(t);
                  {
                    v_47 = t;
                    {
                      ATerm y_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(t_47), not_null(v_47)), not_null(r_47));
                      {
                        y_47 = t;
                        if(((x_47 != NULL) && (x_47 != y_47)))
                          _fail(y_47);
                        else
                          x_47 = y_47;
                      }
                      t = not_null(x_47);
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
ATerm Choice_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Choice_2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      {
        ATerm r_48 = NULL,t_48 = NULL;
        ATerm s_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
        }
        {
          t = not_null(m_48);
          {
            ATerm v_48 = NULL;
            t = g_56(t);
            {
              t_48 = t;
              {
                t = not_null(n_48);
                {
                  ATerm x_48 = NULL;
                  t = h_56(t);
                  {
                    v_48 = t;
                    {
                      ATerm y_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(t_48), not_null(v_48)), not_null(r_48));
                      {
                        y_48 = t;
                        if(((x_48 != NULL) && (x_48 != y_48)))
                          _fail(y_48);
                        else
                          x_48 = y_48;
                      }
                      t = not_null(x_48);
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
ATerm Seq_2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_Seq_2))
    {
      o_49 = ATgetArgument(n_49, 0);
      p_49 = ATgetArgument(n_49, 1);
      {
        ATerm t_49 = NULL,v_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(n_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(o_49);
          {
            ATerm x_49 = NULL;
            t = e_56(t);
            {
              v_49 = t;
              {
                t = not_null(p_49);
                {
                  ATerm z_49 = NULL;
                  t = f_56(t);
                  {
                    x_49 = t;
                    {
                      ATerm a_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(v_49), not_null(x_49)), not_null(t_49));
                      {
                        a_50 = t;
                        if(((z_49 != NULL) && (z_49 != a_50)))
                          _fail(a_50);
                        else
                          z_49 = a_50;
                      }
                      t = not_null(z_49);
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
ATerm Test_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm l_50 = NULL,m_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym_Test_1))
    {
      m_50 = ATgetArgument(l_50, 0);
      {
        ATerm p_50 = NULL,y_50 = NULL;
        ATerm x_50 = NULL;
        t = SSLgetAnnotations(not_null(l_50));
        {
          x_50 = t;
          if(((p_50 != NULL) && (p_50 != x_50)))
            _fail(x_50);
          else
            p_50 = x_50;
        }
        {
          t = not_null(m_50);
          {
            ATerm a_51 = NULL;
            t = c_56(t);
            {
              y_50 = t;
              {
                ATerm b_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(y_50)), not_null(p_50));
                {
                  b_51 = t;
                  if(((a_51 != NULL) && (a_51 != b_51)))
                    _fail(b_51);
                  else
                    a_51 = b_51;
                }
                t = not_null(a_51);
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
ATerm Not_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm l_51 = NULL,m_51 = NULL;
  l_51 = t;
  k_51 :
  if(match_cons(l_51, sym_Not_1))
    {
      m_51 = ATgetArgument(l_51, 0);
      {
        ATerm p_51 = NULL,r_51 = NULL;
        ATerm q_51 = NULL;
        t = SSLgetAnnotations(not_null(l_51));
        {
          q_51 = t;
          if(((p_51 != NULL) && (p_51 != q_51)))
            _fail(q_51);
          else
            p_51 = q_51;
        }
        {
          t = not_null(m_51);
          {
            ATerm t_51 = NULL;
            t = d_56(t);
            {
              r_51 = t;
              {
                ATerm u_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(r_51)), not_null(p_51));
                {
                  u_51 = t;
                  if(((t_51 != NULL) && (t_51 != u_51)))
                    _fail(u_51);
                  else
                    t_51 = u_51;
                }
                t = not_null(t_51);
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
  ATerm d_52 = NULL;
  d_52 = t;
  c_52 :
  if(match_cons(d_52, sym_Fail_0))
    {
      ATerm f_52 = NULL,h_52 = NULL;
      ATerm t_6;
      t_6 = t;
      {
        ATerm g_52 = NULL;
        t = SSLgetAnnotations(not_null(d_52));
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
      }
      t = t_6;
      {
        ATerm i_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(f_52));
        {
          i_52 = t;
          if(((h_52 != NULL) && (h_52 != i_52)))
            _fail(i_52);
          else
            h_52 = i_52;
        }
        t = not_null(h_52);
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
  ATerm q_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym_Id_0))
    {
      ATerm s_52 = NULL,u_52 = NULL;
      ATerm u_6;
      u_6 = t;
      {
        ATerm t_52 = NULL;
        t = SSLgetAnnotations(not_null(q_52));
        {
          t_52 = t;
          if(((s_52 != NULL) && (s_52 != t_52)))
            _fail(t_52);
          else
            s_52 = t_52;
        }
      }
      t = u_6;
      {
        ATerm v_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
        t = not_null(u_52);
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
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm z_6 = t;
              int a_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(a_7);
                }
              else
                {
                  t = z_6;
                  {
                    ATerm b_7 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = b_7;
                        {
                          ATerm d_7 = t;
                          int e_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(g_7);
                                  }
                                else
                                  {
                                    t = f_7;
                                    {
                                      ATerm h_7 = t;
                                      int i_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(i_7);
                                        }
                                      else
                                        {
                                          t = h_7;
                                          {
                                            ATerm j_7 = t;
                                            int k_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(m_7);
                                                    }
                                                  else
                                                    {
                                                      t = l_7;
                                                      {
                                                        ATerm n_7 = t;
                                                        int o_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(o_7);
                                                          }
                                                        else
                                                          {
                                                            t = n_7;
                                                            {
                                                              ATerm p_7 = t;
                                                              int q_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    ATerm b_1 (ATerm t)
                                                                    {
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, c_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, b_1);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, z_0, a_1);
                                                                  ;
                                                                  LocalPopChoice(q_7);
                                                                }
                                                              else
                                                                {
                                                                  t = p_7;
                                                                  {
                                                                    ATerm r_7 = t;
                                                                    int s_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(s_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_7;
                                                                        {
                                                                          ATerm t_7 = t;
                                                                          int u_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(u_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_7;
                                                                              {
                                                                                ATerm v_7 = t;
                                                                                int w_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
                                                                                    ;
                                                                                    LocalPopChoice(w_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_7;
                                                                                    {
                                                                                      ATerm x_7 = t;
                                                                                      int y_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(y_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_7;
                                                                                          {
                                                                                            ATerm z_7 = t;
                                                                                            int a_8 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(c_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_8;
                                                                                                      {
                                                                                                        ATerm d_8 = t;
                                                                                                        int e_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(e_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_8;
                                                                                                            {
                                                                                                              ATerm f_8 = t;
                                                                                                              int g_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(g_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_8;
                                                                                                                  {
                                                                                                                    ATerm h_8 = t;
                                                                                                                    int i_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(i_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_8;
                                                                                                                        {
                                                                                                                          ATerm j_8 = t;
                                                                                                                          int k_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(k_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_8;
                                                                                                                              {
                                                                                                                                ATerm l_8 = t;
                                                                                                                                int m_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(m_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_8;
                                                                                                                                    {
                                                                                                                                      ATerm n_8 = t;
                                                                                                                                      int o_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(o_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = n_8;
                                                                                                                                          {
                                                                                                                                            ATerm p_8 = t;
                                                                                                                                            int q_8 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm g_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm h_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, j_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, i_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, h_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, g_1, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(q_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = p_8;
                                                                                                                                                {
                                                                                                                                                  ATerm r_8 = t;
                                                                                                                                                  int s_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm k_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm m_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, m_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, k_1, l_1, strategy_expression_0);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(s_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = r_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm t_8 = t;
                                                                                                                                                        int u_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(u_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = t_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm v_8 = t;
                                                                                                                                                              int w_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(w_8);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = v_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm x_8 = t;
                                                                                                                                                                    int y_8 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        ;
                                                                                                                                                                        LocalPopChoice(y_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = x_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_z_8;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, p_1);
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
ATerm VarDec_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  f_53 :
  if(match_cons(g_53, sym_VarDec_2))
    {
      h_53 = ATgetArgument(g_53, 0);
      i_53 = ATgetArgument(g_53, 1);
      {
        ATerm m_53 = NULL,o_53 = NULL;
        ATerm n_53 = NULL;
        t = SSLgetAnnotations(not_null(g_53));
        {
          n_53 = t;
          if(((m_53 != NULL) && (m_53 != n_53)))
            _fail(n_53);
          else
            m_53 = n_53;
        }
        {
          t = not_null(h_53);
          {
            ATerm q_53 = NULL;
            t = a_57(t);
            {
              o_53 = t;
              {
                t = not_null(i_53);
                {
                  ATerm s_53 = NULL;
                  t = b_57(t);
                  {
                    q_53 = t;
                    {
                      ATerm t_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_53), not_null(q_53)), not_null(m_53));
                      {
                        t_53 = t;
                        if(((s_53 != NULL) && (s_53 != t_53)))
                          _fail(t_53);
                        else
                          s_53 = t_53;
                      }
                      t = not_null(s_53);
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
ATerm SDef_3 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym_SDef_3))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      l_54 = ATgetArgument(i_54, 2);
      {
        ATerm q_54 = NULL,s_54 = NULL;
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
        {
          t = not_null(j_54);
          {
            ATerm u_54 = NULL;
            t = x_56(t);
            {
              s_54 = t;
              {
                t = not_null(k_54);
                {
                  ATerm w_54 = NULL;
                  t = y_56(t);
                  {
                    u_54 = t;
                    {
                      t = not_null(l_54);
                      {
                        ATerm y_54 = NULL;
                        t = z_56(t);
                        {
                          w_54 = t;
                          {
                            ATerm z_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_54), not_null(u_54), not_null(w_54)), not_null(q_54));
                            {
                              z_54 = t;
                              if(((y_54 != NULL) && (y_54 != z_54)))
                                _fail(z_54);
                              else
                                y_54 = z_54;
                            }
                            t = not_null(y_54);
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
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, r_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, q_1, strategy_expression_0);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_c_9;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm i_55 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = Cons_2(t, j_74, i_55);
      }
    return(t);
  }
  t = i_55(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm r_56 = NULL,c_57 = NULL;
  r_56 = t;
  z_55 :
  if(match_cons(r_56, sym_Strategies_1))
    {
      c_57 = ATgetArgument(r_56, 0);
      {
        ATerm f_57 = NULL,j_57 = NULL;
        ATerm g_57 = NULL;
        t = SSLgetAnnotations(not_null(r_56));
        {
          g_57 = t;
          if(((f_57 != NULL) && (f_57 != g_57)))
            _fail(g_57);
          else
            f_57 = g_57;
        }
        {
          t = not_null(c_57);
          {
            ATerm l_57 = NULL;
            t = b_58(t);
            {
              j_57 = t;
              {
                ATerm m_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_57)), not_null(f_57));
                {
                  m_57 = t;
                  if(((l_57 != NULL) && (l_57 != m_57)))
                    _fail(m_57);
                  else
                    l_57 = m_57;
                }
                t = not_null(l_57);
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
ATerm Specification_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm y_57 = NULL,z_57 = NULL;
  y_57 = t;
  x_57 :
  if(match_cons(y_57, sym_Specification_1))
    {
      z_57 = ATgetArgument(y_57, 0);
      {
        ATerm e_58 = NULL,g_58 = NULL;
        ATerm f_58 = NULL;
        t = SSLgetAnnotations(not_null(y_57));
        {
          f_58 = t;
          if(((e_58 != NULL) && (e_58 != f_58)))
            _fail(f_58);
          else
            e_58 = f_58;
        }
        {
          t = not_null(z_57);
          {
            ATerm i_58 = NULL;
            t = d_58(t);
            {
              g_58 = t;
              {
                ATerm j_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_58)), not_null(e_58));
                {
                  j_58 = t;
                  if(((i_58 != NULL) && (i_58 != j_58)))
                    _fail(j_58);
                  else
                    i_58 = j_58;
                }
                t = not_null(i_58);
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
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, w_1);
            return(t);
          }
          t = Cons_2(t, v_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, u_1);
        return(t);
      }
      t = Specification_1(t, t_1);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm))
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm a_59 = NULL,c_59 = NULL;
        ATerm b_59 = NULL;
        t = SSLgetAnnotations(not_null(u_58));
        {
          b_59 = t;
          if(((a_59 != NULL) && (a_59 != b_59)))
            _fail(b_59);
          else
            a_59 = b_59;
        }
        {
          t = not_null(v_58);
          {
            ATerm e_59 = NULL;
            t = w_53(t);
            {
              c_59 = t;
              {
                t = not_null(w_58);
                {
                  ATerm g_59 = NULL;
                  t = x_53(t);
                  {
                    e_59 = t;
                    {
                      ATerm h_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_59), not_null(e_59)), not_null(a_59));
                      {
                        h_59 = t;
                        if(((g_59 != NULL) && (g_59 != h_59)))
                          _fail(h_59);
                        else
                          g_59 = h_59;
                      }
                      t = not_null(g_59);
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
  ATerm s_59 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm t_59 = NULL,u_59 = NULL;
      t_59 = t;
      r_59 :
      if(match_cons(t_59, sym_Program_1))
        {
          u_59 = ATgetArgument(t_59, 0);
          if(((s_59 != NULL) && (s_59 != u_59)))
            _fail(u_59);
          else
            s_59 = u_59;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), not_null(s_59)), term_k_9));
      {
        t = printnl_0(t);
        {
          t = term_m_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  y_59 = t;
  x_59 :
  if(match_cons(y_59, sym__2))
    {
      z_59 = ATgetArgument(y_59, 0);
      a_60 = ATgetArgument(y_59, 1);
      {
        ATerm n_9;
        n_9 = t;
        t = SSL_printnl(not_null(z_59), not_null(a_60));
        t = n_9;
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
  ATerm f_60 = NULL;
  f_60 = t;
  t = SSL_implode_string(not_null(f_60));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
        k_60 = t;
        j_60 :
        if(((ATgetType(k_60) == AT_LIST) && !(ATisEmpty(k_60))))
          {
            l_60 = ATgetFirst((ATermList) k_60);
            m_60 = (ATerm) ATgetNext((ATermList) k_60);
            {
              t = not_null(l_60);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(m_60);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
  ATerm w_60 = NULL;
  ATerm y_60 = NULL;
  w_60 = t;
  {
    ATerm z_60 = NULL;
    ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
    t = not_null(w_60);
    {
      z_60 = t;
      {
        t = SSL_explode_term(not_null(z_60));
        {
          b_61 = t;
          u_60 :
          if(match_cons(b_61, sym__2))
            {
              c_61 = ATgetArgument(b_61, 0);
              d_61 = ATgetArgument(b_61, 1);
              v_60 :
              if(match_string(c_61, ""))
                {
                  if(((y_60 != NULL) && (y_60 != d_61)))
                    _fail(d_61);
                  else
                    y_60 = d_61;
                }
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
      t = not_null(y_60);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm h_61 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_61);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        {
          t = Nil_0(t);
          t = w_74(t);
        }
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  j_61 :
  if(match_cons(k_61, sym__2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      {
        t = not_null(l_61);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(m_61);
            return(t);
          }
          t = at_end_1(t, a_2);
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
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_61 = NULL;
  r_61 = t;
  t = SSL_explode_string(not_null(r_61));
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
  ATerm v_61 = NULL;
  v_61 = t;
  t = SSL_is_string(not_null(v_61));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_2);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
              e_62 = t;
              d_62 :
              if(match_cons(e_62, sym_Path_1))
                {
                  f_62 = ATgetArgument(e_62, 0);
                  t = not_null(f_62);
                }
              else
                {
                  if(match_cons(e_62, sym_Var_1))
                    {
                      f_62 = ATgetArgument(e_62, 0);
                      {
                        t = not_null(f_62);
                        {
                          ATerm y_9 = t;
                          int z_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_9);
                            }
                          else
                            {
                              t = y_9;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_a_10;
                                  return(t);
                                }
                                t = debug_1(t, c_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_62, sym_Prefix_2))
                        {
                          f_62 = ATgetArgument(e_62, 0);
                          g_62 = ATgetArgument(e_62, 1);
                          {
                            ATerm l_62 = NULL,n_62 = NULL;
                            ATerm b_10;
                            b_10 = t;
                            {
                              ATerm m_62 = NULL;
                              t = not_null(f_62);
                              {
                                t = eval_config_0(t);
                                {
                                  m_62 = t;
                                  if(((l_62 != NULL) && (l_62 != m_62)))
                                    _fail(m_62);
                                  else
                                    l_62 = m_62;
                                }
                              }
                            }
                            t = b_10;
                            {
                              ATerm o_62 = NULL;
                              t = not_null(g_62);
                              {
                                t = eval_config_0(t);
                                {
                                  o_62 = t;
                                  if(((n_62 != NULL) && (n_62 != o_62)))
                                    _fail(o_62);
                                  else
                                    n_62 = o_62;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), not_null(n_62));
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
  ATerm w_62 = NULL;
  w_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(w_62));
    {
      t = table_get_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_10;
            d_10 = t;
            {
              ATerm y_62 = NULL;
              ATerm z_62 = NULL;
              z_62 = t;
              if(((y_62 != NULL) && (y_62 != z_62)))
                _fail(z_62);
              else
                y_62 = z_62;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_10, not_null(w_62), not_null(y_62));
                t = table_put_0(t);
              }
            }
            t = d_10;
          }
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm d_63 = NULL;
      ATerm e_63 = NULL;
      t = term_f_10;
      {
        t = get_config_0(t);
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_63), term_g_10);
        t = geq_0(t);
      }
    }
    t = e_10;
    t = z_87(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  i_63 = t;
  h_63 :
  if(match_cons(i_63, sym__2))
    {
      j_63 = ATgetArgument(i_63, 0);
      k_63 = ATgetArgument(i_63, 1);
      t = SSL_WriteToTextFile(not_null(j_63), not_null(k_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  q_63 = t;
  p_63 :
  if(match_cons(q_63, sym__2))
    {
      r_63 = ATgetArgument(q_63, 0);
      s_63 = ATgetArgument(q_63, 1);
      t = SSL_WriteToBinaryFile(not_null(r_63), not_null(s_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_64 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm i_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 (ATerm t)
          {
            ATerm b_64 = NULL,c_64 = NULL;
            b_64 = t;
            x_63 :
            if(match_cons(b_64, sym_Output_1))
              {
                c_64 = ATgetArgument(b_64, 0);
                if(((a_64 != NULL) && (a_64 != c_64)))
                  _fail(c_64);
                else
                  a_64 = c_64;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_2);
          ;
          LocalPopChoice(j_10);
        }
      else
        {
          t = i_10;
          {
            ATerm d_64 = NULL;
            t = term_k_10;
            {
              d_64 = t;
              if(((a_64 != NULL) && (a_64 != d_64)))
                _fail(d_64);
              else
                a_64 = d_64;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_2, _id);
  }
  t = h_10;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        t = not_null(a_64);
        return(t);
      }
      t = split_2(t, i_2, _id);
      return(t);
    }
    t = _2(t, _id, h_2);
    {
      ATerm l_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm e_64 = NULL;
              e_64 = t;
              z_63 :
              if(!(match_cons(e_64, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_2);
            return(t);
          }
          t = _2(t, j_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_10);
        }
      else
        {
          t = l_10;
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
  ATerm k_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  ATerm n_10;
  n_10 = t;
  t = dtime_0(t);
  t = n_10;
  {
    t = g_86(t);
    {
      ATerm o_10;
      o_10 = t;
      {
        ATerm l_64 = NULL;
        t = dtime_0(t);
        {
          l_64 = t;
          if(((k_64 != NULL) && (k_64 != l_64)))
            _fail(l_64);
          else
            k_64 = l_64;
        }
      }
      t = o_10;
      {
        m_64 = t;
        j_64 :
        if(match_cons(m_64, sym__2))
          {
            n_64 = ATgetArgument(m_64, 0);
            o_64 = ATgetArgument(m_64, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_64))), not_null(o_64));
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
ATerm debug_1 (ATerm t, ATerm b_85 (ATerm))
{
  ATerm p_10;
  p_10 = t;
  {
    ATerm v_64 = NULL,x_64 = NULL;
    ATerm q_10;
    q_10 = t;
    {
      ATerm w_64 = NULL;
      t = b_85(t);
      {
        w_64 = t;
        if(((v_64 != NULL) && (v_64 != w_64)))
          _fail(w_64);
        else
          v_64 = w_64;
      }
    }
    t = q_10;
    {
      ATerm y_64 = NULL;
      y_64 = t;
      if(((x_64 != NULL) && (x_64 != y_64)))
        _fail(y_64);
      else
        x_64 = y_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_64)), not_null(v_64)));
        t = printnl_0(t);
      }
    }
  }
  t = p_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_65 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_65 = NULL;
      d_65 = t;
      {
        if(((c_65 != NULL) && (c_65 != d_65)))
          _fail(d_65);
        else
          c_65 = d_65;
        t = SSL_ReadFromFile(not_null(c_65));
      }
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm l_2 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1(t, l_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm h_65 = NULL,j_65 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    ATerm i_65 = NULL;
    t = g_82(t);
    {
      i_65 = t;
      if(((h_65 != NULL) && (h_65 != i_65)))
        _fail(i_65);
      else
        h_65 = i_65;
    }
  }
  t = w_10;
  {
    ATerm k_65 = NULL;
    t = h_82(t);
    {
      k_65 = t;
      if(((j_65 != NULL) && (j_65 != k_65)))
        _fail(k_65);
      else
        j_65 = k_65;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_65), not_null(j_65));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_65 = NULL;
  ATerm x_10;
  x_10 = t;
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 (ATerm t)
        {
          ATerm t_65 = NULL,u_65 = NULL;
          t_65 = t;
          q_65 :
          if(match_cons(t_65, sym_Input_1))
            {
              u_65 = ATgetArgument(t_65, 0);
              if(((s_65 != NULL) && (s_65 != u_65)))
                _fail(u_65);
              else
                s_65 = u_65;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_2);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        {
          ATerm z_65 = NULL;
          t = term_b_11;
          {
            z_65 = t;
            if(((s_65 != NULL) && (s_65 != z_65)))
              _fail(z_65);
            else
              s_65 = z_65;
          }
        }
      }
  }
  t = x_10;
  {
    ATerm n_2 (ATerm t)
    {
      t = not_null(s_65);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm h_66 = NULL;
    h_66 = t;
    g_66 :
    if(!(match_string(h_66, "-v")))
      {
        if(!(match_string(h_66, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_e_11;
    t = set_config_0(t);
    t = term_f_11;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = Option_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm n_66 = NULL;
    n_66 = t;
    l_66 :
    if(!(match_string(n_66, "-k")))
      {
        if(!(match_string(n_66, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm h_11;
    h_11 = t;
    {
      ATerm o_66 = NULL;
      ATerm p_66 = NULL;
      t = string_to_int_0(t);
      {
        p_66 = t;
        if(((o_66 != NULL) && (o_66 != p_66)))
          _fail(p_66);
        else
          o_66 = p_66;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(o_66));
        t = set_config_0(t);
      }
    }
    t = h_11;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = ArgOption_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_66 = NULL;
  x_66 = t;
  t = SSL_string_to_int(not_null(x_66));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 (ATerm t)
      {
        ATerm f_67 = NULL;
        f_67 = t;
        a_67 :
        if(!(match_string(f_67, "-S")))
          {
            if(!(match_string(f_67, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_n_11;
        t = set_config_0(t);
        t = term_o_11;
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_p_11;
        return(t);
      }
      t = Option_3(t, u_2, v_2, w_2);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              ATerm g_67 = NULL;
              g_67 = t;
              b_67 :
              if(!(match_string(g_67, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm j_67 = NULL;
              ATerm s_11;
              s_11 = t;
              {
                ATerm h_67 = NULL;
                ATerm i_67 = NULL;
                t = string_to_int_0(t);
                {
                  i_67 = t;
                  if(((h_67 != NULL) && (h_67 != i_67)))
                    _fail(i_67);
                  else
                    h_67 = i_67;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(h_67));
                  t = set_config_0(t);
                }
              }
              t = s_11;
              {
                ATerm k_67 = NULL;
                k_67 = t;
                if(((j_67 != NULL) && (j_67 != k_67)))
                  _fail(k_67);
                else
                  j_67 = k_67;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_67));
              }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_t_11;
              return(t);
            }
            t = ArgOption_3(t, x_2, y_2, z_2);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm a_3 (ATerm t)
              {
                ATerm l_67 = NULL;
                l_67 = t;
                e_67 :
                if(!(match_string(l_67, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_v_11;
                t = set_config_0(t);
                t = term_w_11;
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_x_11;
                return(t);
              }
              t = Option_3(t, a_3, b_3, c_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm r_67 = NULL;
    r_67 = t;
    o_67 :
    if(!(match_string(r_67, "-o")))
      {
        if(!(match_string(r_67, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm u_67 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm s_67 = NULL;
      ATerm t_67 = NULL;
      t_67 = t;
      if(((s_67 != NULL) && (s_67 != t_67)))
        _fail(t_67);
      else
        s_67 = t_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(s_67));
        t = set_config_0(t);
      }
    }
    t = c_12;
    {
      ATerm v_67 = NULL;
      v_67 = t;
      if(((u_67 != NULL) && (u_67 != v_67)))
        _fail(v_67);
      else
        u_67 = v_67;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_67));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm z_67 = NULL;
          z_67 = t;
          y_67 :
          if(!(match_string(z_67, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_i_12;
          t = set_config_0(t);
          t = term_j_12;
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = Option_3(t, g_3, h_3, i_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  f_68 = t;
  d_68 :
  if(match_string(f_68, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_68) == AT_LIST) && !(ATisEmpty(f_68))))
        {
          g_68 = ATgetFirst((ATermList) f_68);
          h_68 = (ATerm) ATgetNext((ATermList) f_68);
          e_68 :
          if(((ATgetType(h_68) == AT_LIST) && !(ATisEmpty(h_68))))
            {
              i_68 = ATgetFirst((ATermList) h_68);
              j_68 = (ATerm) ATgetNext((ATermList) h_68);
              {
                ATerm n_68 = NULL;
                ATerm l_12;
                l_12 = t;
                {
                  t = not_null(g_68);
                  t = j_0(t);
                }
                t = l_12;
                {
                  ATerm o_68 = NULL;
                  t = not_null(i_68);
                  {
                    t = k_0(t);
                    {
                      o_68 = t;
                      if(((n_68 != NULL) && (n_68 != o_68)))
                        _fail(o_68);
                      else
                        n_68 = o_68;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_68)), not_null(n_68));
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
  ATerm j_3 (ATerm t)
  {
    ATerm v_68 = NULL;
    v_68 = t;
    s_68 :
    if(!(match_string(v_68, "-i")))
      {
        if(!(match_string(v_68, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm y_68 = NULL;
    ATerm p_12;
    p_12 = t;
    {
      ATerm w_68 = NULL;
      ATerm x_68 = NULL;
      x_68 = t;
      if(((w_68 != NULL) && (w_68 != x_68)))
        _fail(x_68);
      else
        w_68 = x_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(w_68));
        t = set_config_0(t);
      }
    }
    t = p_12;
    {
      ATerm z_68 = NULL;
      z_68 = t;
      if(((y_68 != NULL) && (y_68 != z_68)))
        _fail(z_68);
      else
        y_68 = z_68;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_68));
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_r_12;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATempty, term_w_12));
  {
    t = printnl_0(t);
    {
      t = term_m_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_69 = NULL;
  d_69 = t;
  t = SSL_TicksToSeconds(not_null(d_69));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  i_69 = t;
  h_69 :
  if(match_cons(i_69, sym__2))
    {
      j_69 = ATgetArgument(i_69, 0);
      k_69 = ATgetArgument(i_69, 1);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_69), not_null(k_69));
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = SSL_addr(not_null(j_69), not_null(k_69));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_80(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
        r_69 = t;
        q_69 :
        if(((ATgetType(r_69) == AT_LIST) && !(ATisEmpty(r_69))))
          {
            s_69 = ATgetFirst((ATermList) r_69);
            t_69 = (ATerm) ATgetNext((ATermList) r_69);
            {
              ATerm w_69 = NULL;
              ATerm x_69 = NULL;
              t = not_null(t_69);
              {
                t = foldr_2(t, r_80, s_80);
                {
                  x_69 = t;
                  if(((w_69 != NULL) && (w_69 != x_69)))
                    _fail(x_69);
                  else
                    w_69 = x_69;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_69), not_null(w_69));
                t = s_80(t);
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
ATerm crush_2 (ATerm t, ATerm p_79 (ATerm), ATerm q_79 (ATerm))
{
  ATerm e_70 = NULL;
  ATerm g_70 = NULL;
  e_70 = t;
  {
    ATerm h_70 = NULL;
    ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
    t = not_null(e_70);
    {
      h_70 = t;
      {
        t = SSL_explode_term(not_null(h_70));
        {
          j_70 = t;
          d_70 :
          if(match_cons(j_70, sym__2))
            {
              k_70 = ATgetArgument(j_70, 0);
              l_70 = ATgetArgument(j_70, 1);
              if(((g_70 != NULL) && (g_70 != l_70)))
                _fail(l_70);
              else
                g_70 = l_70;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_70);
      t = foldr_2(t, p_79, q_79);
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
    ATerm m_3 (ATerm t)
    {
      t = term_m_11;
      return(t);
    }
    t = crush_2(t, m_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  r_70 = t;
  q_70 :
  if(match_cons(r_70, sym__2))
    {
      s_70 = ATgetArgument(r_70, 0);
      t_70 = ATgetArgument(r_70, 1);
      {
        ATerm b_13;
        b_13 = t;
        {
          ATerm c_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_70), not_null(t_70));
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = c_13;
              t = SSL_gtr(not_null(s_70), not_null(t_70));
            }
        }
        t = b_13;
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
  ATerm z_70 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
      a_71 = t;
      y_70 :
      if(match_cons(a_71, sym__2))
        {
          b_71 = ATgetArgument(a_71, 0);
          c_71 = ATgetArgument(a_71, 1);
          {
            if(((z_70 != NULL) && (z_70 != b_71)))
              _fail(b_71);
            else
              z_70 = b_71;
            if(((z_70 != NULL) && (z_70 != c_71)))
              _fail(c_71);
            else
              z_70 = c_71;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm i_13;
    i_13 = t;
    {
      ATerm f_71 = NULL;
      ATerm g_71 = NULL;
      t = term_f_10;
      {
        t = get_config_0(t);
        {
          g_71 = t;
          if(((f_71 != NULL) && (f_71 != g_71)))
            _fail(g_71);
          else
            f_71 = g_71;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_71), term_m_9);
        t = geq_0(t);
      }
    }
    t = i_13;
    t = y_87(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm k_71 = NULL,m_71 = NULL;
    ATerm j_13;
    j_13 = t;
    {
      ATerm l_71 = NULL;
      t = run_time_0(t);
      {
        l_71 = t;
        if(((k_71 != NULL) && (k_71 != l_71)))
          _fail(l_71);
        else
          k_71 = l_71;
      }
    }
    t = j_13;
    {
      ATerm n_71 = NULL;
      t = term_k_13;
      {
        t = get_config_0(t);
        {
          n_71 = t;
          if(((m_71 != NULL) && (m_71 != n_71)))
            _fail(n_71);
          else
            m_71 = n_71;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), not_null(k_71)), term_l_13), not_null(m_71)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_3);
  {
    t = term_m_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_71 = NULL;
  u_71 = t;
  t_71 :
  if(match_cons(u_71, sym_Version_0))
    {
      ATerm w_71 = NULL,y_71 = NULL;
      ATerm n_13;
      n_13 = t;
      {
        ATerm x_71 = NULL;
        t = SSLgetAnnotations(not_null(u_71));
        {
          x_71 = t;
          if(((w_71 != NULL) && (w_71 != x_71)))
            _fail(x_71);
          else
            w_71 = x_71;
        }
      }
      t = n_13;
      {
        ATerm z_71 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_71));
        {
          z_71 = t;
          if(((y_71 != NULL) && (y_71 != z_71)))
            _fail(z_71);
          else
            y_71 = z_71;
        }
        t = not_null(y_71);
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
  ATerm p_3 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_3);
  t = e_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  t = SSL_table_create(not_null(e_72));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_72 = NULL;
  i_72 = t;
  {
    ATerm s_13;
    s_13 = t;
    {
      t = term_t_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_13, term_u_13, not_null(i_72));
          t = table_put_0(t);
        }
      }
    }
    t = s_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  t = SSL_table_destroy(not_null(m_72));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  t = SSL_exit(not_null(q_72));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  u_72 = t;
  t_72 :
  if(((ATgetType(u_72) == AT_LIST) && ATisEmpty(u_72)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_72) == AT_LIST) && !(ATisEmpty(u_72))))
        {
          v_72 = ATgetFirst((ATermList) u_72);
          w_72 = (ATerm) ATgetNext((ATermList) u_72);
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
  ATerm v_13;
  v_13 = t;
  {
    ATerm z_72 = NULL;
    ATerm c_73 = NULL;
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        {
          ATerm a_73 = NULL;
          ATerm b_73 = NULL;
          b_73 = t;
          if(((a_73 != NULL) && (a_73 != b_73)))
            _fail(b_73);
          else
            a_73 = b_73;
          t = (ATerm) ATinsert(ATempty, not_null(a_73));
        }
      }
    {
      c_73 = t;
      if(((z_72 != NULL) && (z_72 != c_73)))
        _fail(c_73);
      else
        z_72 = c_73;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(z_72));
      t = printnl_0(t);
    }
  }
  t = v_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm f_73 (ATerm t)
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = Cons_2(t, h_74, f_73);
      }
    return(t);
  }
  t = f_73(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
  o_73 = t;
  l_73 :
  if(((ATgetType(o_73) == AT_LIST) && !(ATisEmpty(o_73))))
    {
      m_73 = ATgetFirst((ATermList) o_73);
      n_73 = (ATerm) ATgetNext((ATermList) o_73);
      {
        ATerm r_73 = NULL;
        t = not_null(n_73);
        {
          ATerm a_14;
          a_14 = t;
          {
            ATerm s_73 = NULL,u_73 = NULL,w_73 = NULL;
            ATerm b_14;
            b_14 = t;
            {
              ATerm t_73 = NULL;
              t = i_0(t);
              {
                t_73 = t;
                if(((s_73 != NULL) && (s_73 != t_73)))
                  _fail(t_73);
                else
                  s_73 = t_73;
              }
            }
            t = b_14;
            {
              ATerm v_73 = NULL;
              t = not_null(m_73);
              {
                t = g_0(t);
                {
                  v_73 = t;
                  if(((u_73 != NULL) && (u_73 != v_73)))
                    _fail(v_73);
                  else
                    u_73 = v_73;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_73)), not_null(u_73));
                {
                  w_73 = t;
                  if(((r_73 != NULL) && (r_73 != w_73)))
                    _fail(w_73);
                  else
                    r_73 = w_73;
                }
              }
            }
          }
          t = a_14;
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(r_73);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_73) == AT_LIST) && ATisEmpty(o_73)))
        {
          {
            t = term_d_11;
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
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm m_74 = NULL,n_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym_Program_1))
    {
      n_74 = ATgetArgument(m_74, 0);
      {
        ATerm s_74 = NULL,u_74 = NULL;
        ATerm t_74 = NULL;
        t = SSLgetAnnotations(not_null(m_74));
        {
          t_74 = t;
          if(((s_74 != NULL) && (s_74 != t_74)))
            _fail(t_74);
          else
            s_74 = t_74;
        }
        {
          t = not_null(n_74);
          {
            ATerm y_74 = NULL;
            t = n_65(t);
            {
              u_74 = t;
              {
                ATerm z_74 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_74)), not_null(s_74));
                {
                  z_74 = t;
                  if(((y_74 != NULL) && (y_74 != z_74)))
                    _fail(z_74);
                  else
                    y_74 = z_74;
                }
                t = not_null(y_74);
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
  ATerm i_75 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_75 = NULL;
      t = term_k_13;
      {
        t = get_config_0(t);
        {
          j_75 = t;
          if(((i_75 != NULL) && (i_75 != j_75)))
            _fail(j_75);
          else
            i_75 = j_75;
        }
      }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm t_3 (ATerm t)
          {
            ATerm k_75 = NULL;
            k_75 = t;
            if(((i_75 != NULL) && (i_75 != k_75)))
              _fail(k_75);
            else
              i_75 = k_75;
            return(t);
          }
          t = Program_1(t, t_3);
          return(t);
        }
        t = option_defined_1(t, s_3);
      }
    }
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(i_75);
        return(t);
      }
      t = short_description_1(t, v_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_3);
    {
      t = term_h_14;
      {
        t = echo_0(t);
        {
          t = term_p_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm l_75 = NULL;
                  ATerm m_75 = NULL;
                  m_75 = t;
                  if(((l_75 != NULL) && (l_75 != m_75)))
                    _fail(m_75);
                  else
                    l_75 = m_75;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_75)), term_q_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_3);
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm n_75 = NULL;
                    ATerm o_75 = NULL;
                    ATerm y_3 (ATerm t)
                    {
                      t = not_null(i_75);
                      return(t);
                    }
                    t = long_description_1(t, y_3);
                    {
                      o_75 = t;
                      if(((n_75 != NULL) && (n_75 != o_75)))
                        _fail(o_75);
                      else
                        n_75 = o_75;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_75)), term_u_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_3);
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
  ATerm x_14;
  x_14 = t;
  {
    ATerm u_75 = NULL;
    ATerm v_75 = NULL;
    v_75 = t;
    if(((u_75 != NULL) && (u_75 != v_75)))
      _fail(v_75);
    else
      u_75 = v_75;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATempty, not_null(u_75)));
      t = printnl_0(t);
    }
  }
  t = x_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm y_14;
  y_14 = t;
  {
    t = c_85(t);
    t = debug_0(t);
  }
  t = y_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm c_76 = NULL,d_76 = NULL;
  c_76 = t;
  b_76 :
  if(match_cons(c_76, sym_Undefined_1))
    {
      d_76 = ATgetArgument(c_76, 0);
      {
        ATerm g_76 = NULL,i_76 = NULL;
        ATerm h_76 = NULL;
        t = SSLgetAnnotations(not_null(c_76));
        {
          h_76 = t;
          if(((g_76 != NULL) && (g_76 != h_76)))
            _fail(h_76);
          else
            g_76 = h_76;
        }
        {
          t = not_null(d_76);
          {
            ATerm k_76 = NULL;
            t = o_65(t);
            {
              i_76 = t;
              {
                ATerm l_76 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_76)), not_null(g_76));
                {
                  l_76 = t;
                  if(((k_76 != NULL) && (k_76 != l_76)))
                    _fail(l_76);
                  else
                    k_76 = l_76;
                }
                t = not_null(k_76);
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
ATerm fetch_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm q_76 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_74, _id);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = Cons_2(t, _id, q_76);
      }
    return(t);
  }
  t = q_76(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_89 (ATerm))
{
  t = fetch_1(t, b_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  u_76 :
  if(match_cons(v_76, sym_Help_0))
    {
      ATerm x_76 = NULL,z_76 = NULL;
      ATerm b_15;
      b_15 = t;
      {
        ATerm y_76 = NULL;
        t = SSLgetAnnotations(not_null(v_76));
        {
          y_76 = t;
          if(((x_76 != NULL) && (x_76 != y_76)))
            _fail(y_76);
          else
            x_76 = y_76;
        }
      }
      t = b_15;
      {
        ATerm a_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_76));
        {
          a_77 = t;
          if(((z_76 != NULL) && (z_76 != a_77)))
            _fail(a_77);
          else
            z_76 = a_77;
        }
        t = not_null(z_76);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_66(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      t = SSL_table_get(not_null(h_77), not_null(i_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym__3))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      s_77 = ATgetArgument(p_77, 2);
      {
        ATerm e_15;
        e_15 = t;
        {
          ATerm w_77 = NULL;
          ATerm x_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_77), not_null(r_77));
          {
            ATerm f_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_15);
              }
            else
              {
                t = f_15;
                t = (ATerm) ATempty;
              }
            {
              x_77 = t;
              if(((w_77 != NULL) && (w_77 != x_77)))
                _fail(x_77);
              else
                w_77 = x_77;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_77), not_null(r_77), (ATerm) ATinsert(CheckATermList(not_null(w_77)), not_null(s_77)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm b_78 = NULL;
  ATerm c_78 = NULL;
  t = term_d_11;
  {
    t = g_90(t);
    {
      c_78 = t;
      if(((b_78 != NULL) && (b_78 != c_78)))
        _fail(c_78);
      else
        b_78 = c_78;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_m_14, not_null(b_78));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_string(i_78, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(i_78) == AT_LIST) && !(ATisEmpty(i_78))))
        {
          j_78 = ATgetFirst((ATermList) i_78);
          k_78 = (ATerm) ATgetNext((ATermList) i_78);
          {
            ATerm n_78 = NULL;
            ATerm h_15;
            h_15 = t;
            {
              t = not_null(j_78);
              t = a_0(t);
            }
            t = h_15;
            {
              ATerm o_78 = NULL;
              t = term_d_11;
              {
                t = c_0(t);
                {
                  o_78 = t;
                  if(((n_78 != NULL) && (n_78 != o_78)))
                    _fail(o_78);
                  else
                    n_78 = o_78;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_78)), not_null(n_78));
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
  ATerm z_3 (ATerm t)
  {
    ATerm t_78 = NULL;
    t_78 = t;
    s_78 :
    if(!(match_string(t_78, "--help")))
      {
        if(!(match_string(t_78, "-h")))
          {
            if(!(match_string(t_78, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_m_15;
    {
      t = set_config_0(t);
      t = term_n_15;
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  w_78 = t;
  v_78 :
  if(((ATgetType(w_78) == AT_LIST) && !(ATisEmpty(w_78))))
    {
      x_78 = ATgetFirst((ATermList) w_78);
      y_78 = (ATerm) ATgetNext((ATermList) w_78);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_78)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_78)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_55 (ATerm), ATerm g_55 (ATerm))
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  h_79 :
  if(((ATgetType(i_79) == AT_LIST) && !(ATisEmpty(i_79))))
    {
      j_79 = ATgetFirst((ATermList) i_79);
      k_79 = (ATerm) ATgetNext((ATermList) i_79);
      {
        ATerm o_79 = NULL,s_79 = NULL;
        ATerm r_79 = NULL;
        t = SSLgetAnnotations(not_null(i_79));
        {
          r_79 = t;
          if(((o_79 != NULL) && (o_79 != r_79)))
            _fail(r_79);
          else
            o_79 = r_79;
        }
        {
          t = not_null(j_79);
          {
            ATerm u_79 = NULL;
            t = f_55(t);
            {
              s_79 = t;
              {
                t = not_null(k_79);
                {
                  ATerm w_79 = NULL;
                  t = g_55(t);
                  {
                    u_79 = t;
                    {
                      ATerm x_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_79)), not_null(s_79)), not_null(o_79));
                      {
                        x_79 = t;
                        if(((w_79 != NULL) && (w_79 != x_79)))
                          _fail(x_79);
                        else
                          w_79 = x_79;
                      }
                      t = not_null(w_79);
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
  ATerm h_80 = NULL;
  h_80 = t;
  g_80 :
  if(((ATgetType(h_80) == AT_LIST) && ATisEmpty(h_80)))
    {
      {
        ATerm j_80 = NULL,l_80 = NULL;
        ATerm u_15;
        u_15 = t;
        {
          ATerm k_80 = NULL;
          t = SSLgetAnnotations(not_null(h_80));
          {
            k_80 = t;
            if(((j_80 != NULL) && (j_80 != k_80)))
              _fail(k_80);
            else
              j_80 = k_80;
          }
        }
        t = u_15;
        {
          ATerm m_80 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_80));
          {
            m_80 = t;
            if(((l_80 != NULL) && (l_80 != m_80)))
              _fail(m_80);
            else
              l_80 = m_80;
          }
          t = not_null(l_80);
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
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t_80 :
  if(match_cons(u_80, sym__2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_10, not_null(v_80), not_null(w_80));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm v_15;
  v_15 = t;
  {
    ATerm c_4 (ATerm t)
    {
      t = term_w_15;
      t = e_90(t);
      return(t);
    }
    t = try_1(t, c_4);
  }
  t = v_15;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm e_81 = NULL;
      ATerm x_15;
      x_15 = t;
      {
        ATerm c_81 = NULL;
        ATerm d_81 = NULL;
        d_81 = t;
        if(((c_81 != NULL) && (c_81 != d_81)))
          _fail(d_81);
        else
          c_81 = d_81;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(c_81));
          t = set_config_0(t);
        }
      }
      t = x_15;
      {
        ATerm f_81 = NULL;
        f_81 = t;
        if(((e_81 != NULL) && (e_81 != f_81)))
          _fail(f_81);
        else
          e_81 = f_81;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_81));
      }
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              {
                t = e_90(t);
                t = Cons_2(t, _id, e_4);
              }
            }
          ;
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_4, e_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
  ATerm c_16;
  c_16 = t;
  {
    ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL;
    o_81 = t;
    k_81 :
    if(match_cons(o_81, sym__3))
      {
        p_81 = ATgetArgument(o_81, 0);
        q_81 = ATgetArgument(o_81, 1);
        r_81 = ATgetArgument(o_81, 2);
        {
          if(((l_81 != NULL) && (l_81 != p_81)))
            _fail(p_81);
          else
            l_81 = p_81;
          {
            if(((m_81 != NULL) && (m_81 != q_81)))
              _fail(q_81);
            else
              m_81 = q_81;
            {
              if(((n_81 != NULL) && (n_81 != r_81)))
                _fail(r_81);
              else
                n_81 = r_81;
              t = SSL_table_put(not_null(l_81), not_null(m_81), not_null(n_81));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm u_81 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    t = term_e_16;
    t = table_put_0(t);
  }
  t = d_16;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_90(t);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_4);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_16;
            n_16 = t;
            {
              ATerm o_16 = t;
              int p_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_16);
                }
              else
                {
                  t = o_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_16;
            {
              t = system_usage_0(t);
              {
                t = term_m_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm v_81 = NULL;
                  v_81 = t;
                  if(((u_81 != NULL) && (u_81 != v_81)))
                    _fail(v_81);
                  else
                    u_81 = v_81;
                  return(t);
                }
                t = Undefined_1(t, i_4);
                return(t);
              }
              t = option_defined_1(t, h_4);
              {
                ATerm j_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_t_16);
                  return(t);
                }
                t = say_1(t, j_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_4);
      {
        ATerm v_16;
        v_16 = t;
        {
          t = term_i_14;
          t = table_destroy_0(t);
        }
        t = v_16;
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
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_86);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm a_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_86(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = a_17;
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
  ATerm k_4 (ATerm t)
  {
    ATerm g_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = g_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_4, d_87, e_87, l_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm k_17;
      k_17 = t;
      {
        ATerm y_81 = NULL;
        ATerm z_81 = NULL;
        t = term_k_13;
        {
          t = get_config_0(t);
          {
            z_81 = t;
            if(((y_81 != NULL) && (y_81 != z_81)))
              _fail(z_81);
            else
              y_81 = z_81;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATempty, not_null(y_81)));
          t = printnl_0(t);
        }
      }
      t = k_17;
      return(t);
    }
    t = if_verbose2_1(t, n_4);
    return(t);
  }
  t = iowrap_4(t, v_86, w_86, x_86, m_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_86 (ATerm), ATerm u_86 (ATerm))
{
  t = iowrap_3(t, t_86, u_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    t = _2(t, _id, q_86);
    return(t);
  }
  t = iowrap_2(t, o_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
