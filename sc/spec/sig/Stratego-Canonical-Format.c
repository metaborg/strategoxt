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
ATerm term_z_16;
ATerm term_h_16;
ATerm term_z_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
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
ATerm term_y_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_i_6;
ATerm term_k_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_d_11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__3, term_h_14, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm w_65 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm z_65 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm Alt_3 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm k_66 (ATerm));
ATerm Case_4 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm Let_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm Prim_2 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm Where_1 (ATerm, ATerm k_55 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm Build_1 (ATerm, ATerm f_55 (ATerm));
ATerm Op_2 (ATerm, ATerm e_57 (ATerm), ATerm f_57 (ATerm));
ATerm As_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm f_59 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm e_55 (ATerm));
ATerm Thread_1 (ATerm, ATerm s_55 (ATerm));
ATerm All_1 (ATerm, ATerm r_55 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm p_55 (ATerm));
ATerm Cong_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm));
ATerm SVar_1 (ATerm, ATerm j_56 (ATerm));
ATerm Call_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm GChoice_2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm LChoice_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm));
ATerm Seq_2 (ATerm, ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm Test_1 (ATerm, ATerm t_55 (ATerm));
ATerm Not_1 (ATerm, ATerm u_55 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm g_74 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_57 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_74 (ATerm));
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
ATerm debug_1 (ATerm, ATerm c_85 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm crush_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
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
ATerm map_1 (ATerm, ATerm e_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_90 (ATerm));
ATerm Program_1 (ATerm, ATerm e_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
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
ATerm Continue_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym_Continue_1))
    {
      b_11 = ATgetArgument(a_11, 0);
      {
        ATerm c_13 = NULL,e_13 = NULL;
        ATerm d_13 = NULL;
        t = SSLgetAnnotations(not_null(a_11));
        {
          d_13 = t;
          if(((c_13 != NULL) && (c_13 != d_13)))
            _fail(d_13);
          else
            c_13 = d_13;
        }
        {
          t = not_null(b_11);
          {
            ATerm r_13 = NULL;
            t = w_65(t);
            {
              e_13 = t;
              {
                ATerm v_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(e_13)), not_null(c_13));
                {
                  v_13 = t;
                  if(((r_13 != NULL) && (r_13 != v_13)))
                    _fail(v_13);
                  else
                    r_13 = v_13;
                }
                t = not_null(r_13);
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
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_Var_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      {
        ATerm h_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_14 = NULL,p_14 = NULL;
            ATerm o_14 = NULL;
            t = SSLgetAnnotations(not_null(j_14));
            {
              o_14 = t;
              if(((n_14 != NULL) && (n_14 != o_14)))
                _fail(o_14);
              else
                n_14 = o_14;
            }
            {
              t = not_null(k_14);
              {
                ATerm r_14 = NULL;
                t = s_0(t);
                {
                  p_14 = t;
                  {
                    ATerm s_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_14)), not_null(n_14));
                    {
                      s_14 = t;
                      if(((r_14 != NULL) && (r_14 != s_14)))
                        _fail(s_14);
                      else
                        r_14 = s_14;
                    }
                    t = not_null(r_14);
                  }
                }
              }
            }
            LocalPopChoice(i_4);
          }
        else
          {
            t = h_4;
            {
              ATerm v_14 = NULL,x_14 = NULL;
              ATerm w_14 = NULL;
              t = SSLgetAnnotations(not_null(j_14));
              {
                w_14 = t;
                if(((v_14 != NULL) && (v_14 != w_14)))
                  _fail(w_14);
                else
                  v_14 = w_14;
              }
              {
                t = not_null(k_14);
                {
                  ATerm z_14 = NULL;
                  t = s_0(t);
                  {
                    x_14 = t;
                    {
                      ATerm a_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_14)), not_null(v_14));
                      {
                        a_15 = t;
                        if(((z_14 != NULL) && (z_14 != a_15)))
                          _fail(a_15);
                        else
                          z_14 = a_15;
                      }
                      t = not_null(z_14);
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
ATerm Assign_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_Assign_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      {
        ATerm s_15 = NULL,u_15 = NULL;
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(o_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        {
          t = not_null(p_15);
          {
            ATerm w_15 = NULL;
            t = z_65(t);
            {
              u_15 = t;
              {
                ATerm x_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(u_15)), not_null(s_15));
                {
                  x_15 = t;
                  if(((w_15 != NULL) && (w_15 != x_15)))
                    _fail(x_15);
                  else
                    w_15 = x_15;
                }
                t = not_null(w_15);
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
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            {
              ATerm n_4 = t;
              int o_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(o_4);
                }
              else
                {
                  t = n_4;
                  {
                    ATerm p_4 = t;
                    int q_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(q_4);
                      }
                    else
                      {
                        t = p_4;
                        {
                          ATerm r_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
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
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(y_4);
                                              }
                                            else
                                              {
                                                t = x_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_z_4;
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
ATerm Assign_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Assign_2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        ATerm a_5 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL,w_16 = NULL;
            ATerm v_16 = NULL;
            t = SSLgetAnnotations(not_null(o_16));
            {
              v_16 = t;
              if(((u_16 != NULL) && (u_16 != v_16)))
                _fail(v_16);
              else
                u_16 = v_16;
            }
            {
              t = not_null(p_16);
              {
                ATerm y_16 = NULL;
                t = q_0(t);
                {
                  w_16 = t;
                  {
                    t = not_null(q_16);
                    {
                      ATerm a_17 = NULL;
                      t = r_0(t);
                      {
                        y_16 = t;
                        {
                          ATerm b_17 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(w_16), not_null(y_16)), not_null(u_16));
                          {
                            b_17 = t;
                            if(((a_17 != NULL) && (a_17 != b_17)))
                              _fail(b_17);
                            else
                              a_17 = b_17;
                          }
                          t = not_null(a_17);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(b_5);
          }
        else
          {
            t = a_5;
            {
              ATerm f_17 = NULL,h_17 = NULL;
              ATerm g_17 = NULL;
              t = SSLgetAnnotations(not_null(o_16));
              {
                g_17 = t;
                if(((f_17 != NULL) && (f_17 != g_17)))
                  _fail(g_17);
                else
                  f_17 = g_17;
              }
              {
                t = not_null(p_16);
                {
                  ATerm j_17 = NULL;
                  t = q_0(t);
                  {
                    h_17 = t;
                    {
                      t = not_null(q_16);
                      {
                        ATerm l_17 = NULL;
                        t = r_0(t);
                        {
                          j_17 = t;
                          {
                            ATerm m_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(h_17), not_null(j_17)), not_null(f_17));
                            {
                              m_17 = t;
                              if(((l_17 != NULL) && (l_17 != m_17)))
                                _fail(m_17);
                              else
                                l_17 = m_17;
                            }
                            t = not_null(l_17);
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
ATerm Fun_2 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Fun_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm j_18 = NULL,l_18 = NULL;
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
        {
          t = not_null(e_18);
          {
            ATerm n_18 = NULL;
            t = a_66(t);
            {
              l_18 = t;
              {
                t = not_null(f_18);
                {
                  ATerm p_18 = NULL;
                  t = b_66(t);
                  {
                    n_18 = t;
                    {
                      ATerm q_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(l_18), not_null(n_18)), not_null(j_18));
                      {
                        q_18 = t;
                        if(((p_18 != NULL) && (p_18 != q_18)))
                          _fail(q_18);
                        else
                          p_18 = q_18;
                      }
                      t = not_null(p_18);
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
ATerm Alt_3 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Alt_3))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      g_19 = ATgetArgument(d_19, 2);
      {
        ATerm l_19 = NULL,n_19 = NULL;
        ATerm m_19 = NULL;
        t = SSLgetAnnotations(not_null(d_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        {
          t = not_null(e_19);
          {
            ATerm p_19 = NULL;
            t = t_65(t);
            {
              n_19 = t;
              {
                t = not_null(f_19);
                {
                  ATerm r_19 = NULL;
                  t = u_65(t);
                  {
                    p_19 = t;
                    {
                      t = not_null(g_19);
                      {
                        ATerm t_19 = NULL;
                        t = v_65(t);
                        {
                          r_19 = t;
                          {
                            ATerm u_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(n_19), not_null(p_19), not_null(r_19)), not_null(l_19));
                            {
                              u_19 = t;
                              if(((t_19 != NULL) && (t_19 != u_19)))
                                _fail(u_19);
                              else
                                t_19 = u_19;
                            }
                            t = not_null(t_19);
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
ATerm case_alternative_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
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
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(h_5);
                }
              else
                {
                  t = g_5;
                  {
                    ATerm i_5 = t;
                    int j_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(j_5);
                      }
                    else
                      {
                        t = i_5;
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
      t = Alt_3(t, f_0, t_0, k_66);
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm v_0 (ATerm t)
        {
          t = term_k_5;
          return(t);
        }
        t = debug_1(t, v_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_Case_4))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      m_20 = ATgetArgument(j_20, 2);
      n_20 = ATgetArgument(j_20, 3);
      {
        ATerm t_20 = NULL,v_20 = NULL;
        ATerm u_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
        }
        {
          t = not_null(k_20);
          {
            ATerm x_20 = NULL;
            t = m_65(t);
            {
              v_20 = t;
              {
                t = not_null(l_20);
                {
                  ATerm z_20 = NULL;
                  t = n_65(t);
                  {
                    x_20 = t;
                    {
                      t = not_null(m_20);
                      {
                        ATerm b_21 = NULL;
                        t = o_65(t);
                        {
                          z_20 = t;
                          {
                            t = not_null(n_20);
                            {
                              ATerm d_21 = NULL;
                              t = p_65(t);
                              {
                                b_21 = t;
                                {
                                  ATerm e_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(v_20), not_null(x_20), not_null(z_20), not_null(b_21)), not_null(t_20));
                                  {
                                    e_21 = t;
                                    if(((d_21 != NULL) && (d_21 != e_21)))
                                      _fail(e_21);
                                    else
                                      d_21 = e_21;
                                  }
                                  t = not_null(d_21);
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
ATerm Let_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Let_2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      {
        ATerm y_21 = NULL,a_22 = NULL;
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(s_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
        {
          t = not_null(t_21);
          {
            ATerm c_22 = NULL;
            t = m_56(t);
            {
              a_22 = t;
              {
                t = not_null(u_21);
                {
                  ATerm e_22 = NULL;
                  t = n_56(t);
                  {
                    c_22 = t;
                    {
                      ATerm f_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_22), not_null(c_22)), not_null(y_21));
                      {
                        f_22 = t;
                        if(((e_22 != NULL) && (e_22 != f_22)))
                          _fail(f_22);
                        else
                          e_22 = f_22;
                      }
                      t = not_null(e_22);
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
ATerm Prim_2 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_Prim_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm x_22 = NULL,z_22 = NULL;
        ATerm y_22 = NULL;
        t = SSLgetAnnotations(not_null(r_22));
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
        {
          t = not_null(s_22);
          {
            ATerm b_23 = NULL;
            t = a_55(t);
            {
              z_22 = t;
              {
                t = not_null(t_22);
                {
                  ATerm d_23 = NULL;
                  t = b_55(t);
                  {
                    b_23 = t;
                    {
                      ATerm e_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(z_22), not_null(b_23)), not_null(x_22));
                      {
                        e_23 = t;
                        if(((d_23 != NULL) && (d_23 != e_23)))
                          _fail(e_23);
                        else
                          d_23 = e_23;
                      }
                      t = not_null(d_23);
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
ATerm Where_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_Where_1))
    {
      q_23 = ATgetArgument(p_23, 0);
      {
        ATerm t_23 = NULL,v_23 = NULL;
        ATerm u_23 = NULL;
        t = SSLgetAnnotations(not_null(p_23));
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
        {
          t = not_null(q_23);
          {
            ATerm x_23 = NULL;
            t = k_55(t);
            {
              v_23 = t;
              {
                ATerm y_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(v_23)), not_null(t_23));
                {
                  y_23 = t;
                  if(((x_23 != NULL) && (x_23 != y_23)))
                    _fail(y_23);
                  else
                    x_23 = y_23;
                }
                t = not_null(x_23);
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
ATerm Scope_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym_Scope_2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      {
        ATerm p_24 = NULL,r_24 = NULL;
        ATerm q_24 = NULL;
        t = SSLgetAnnotations(not_null(j_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
        {
          t = not_null(k_24);
          {
            ATerm t_24 = NULL;
            t = i_55(t);
            {
              r_24 = t;
              {
                t = not_null(l_24);
                {
                  ATerm v_24 = NULL;
                  t = j_55(t);
                  {
                    t_24 = t;
                    {
                      ATerm w_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_24), not_null(t_24)), not_null(p_24));
                      {
                        w_24 = t;
                        if(((v_24 != NULL) && (v_24 != w_24)))
                          _fail(w_24);
                        else
                          v_24 = w_24;
                      }
                      t = not_null(v_24);
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
ATerm Build_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym_Build_1))
    {
      n_25 = ATgetArgument(m_25, 0);
      {
        ATerm q_25 = NULL,v_25 = NULL;
        ATerm u_25 = NULL;
        t = SSLgetAnnotations(not_null(m_25));
        {
          u_25 = t;
          if(((q_25 != NULL) && (q_25 != u_25)))
            _fail(u_25);
          else
            q_25 = u_25;
        }
        {
          t = not_null(n_25);
          {
            ATerm x_25 = NULL;
            t = f_55(t);
            {
              v_25 = t;
              {
                ATerm y_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(v_25)), not_null(q_25));
                {
                  y_25 = t;
                  if(((x_25 != NULL) && (x_25 != y_25)))
                    _fail(y_25);
                  else
                    x_25 = y_25;
                }
                t = not_null(x_25);
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
ATerm Op_2 (ATerm t, ATerm e_57 (ATerm), ATerm f_57 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Op_2))
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
            t = e_57(t);
            {
              r_26 = t;
              {
                t = not_null(l_26);
                {
                  ATerm v_26 = NULL;
                  t = f_57(t);
                  {
                    t_26 = t;
                    {
                      ATerm w_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_26), not_null(t_26)), not_null(p_26));
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
ATerm As_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_As_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
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
            t = d_59(t);
            {
              q_27 = t;
              {
                t = not_null(k_27);
                {
                  ATerm u_27 = NULL;
                  t = e_59(t);
                  {
                    s_27 = t;
                    {
                      ATerm v_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(q_27), not_null(s_27)), not_null(o_27));
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
ATerm BuildDefault_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_BuildDefault_1))
    {
      h_28 = ATgetArgument(g_28, 0);
      {
        ATerm k_28 = NULL,m_28 = NULL;
        ATerm l_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm o_28 = NULL;
            t = f_59(t);
            {
              m_28 = t;
              {
                ATerm p_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(m_28)), not_null(k_28));
                {
                  p_28 = t;
                  if(((o_28 != NULL) && (o_28 != p_28)))
                    _fail(p_28);
                  else
                    o_28 = p_28;
                }
                t = not_null(o_28);
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
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym_Str_1))
    {
      e_29 = ATgetArgument(d_29, 0);
      {
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_29 = NULL,j_29 = NULL;
            ATerm i_29 = NULL;
            t = SSLgetAnnotations(not_null(d_29));
            {
              i_29 = t;
              if(((h_29 != NULL) && (h_29 != i_29)))
                _fail(i_29);
              else
                h_29 = i_29;
            }
            {
              t = not_null(e_29);
              {
                ATerm l_29 = NULL;
                t = p_0(t);
                {
                  j_29 = t;
                  {
                    ATerm m_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(j_29)), not_null(h_29));
                    {
                      m_29 = t;
                      if(((l_29 != NULL) && (l_29 != m_29)))
                        _fail(m_29);
                      else
                        l_29 = m_29;
                    }
                    t = not_null(l_29);
                  }
                }
              }
            }
            LocalPopChoice(m_5);
          }
        else
          {
            t = l_5;
            {
              ATerm p_29 = NULL,r_29 = NULL;
              ATerm q_29 = NULL;
              t = SSLgetAnnotations(not_null(d_29));
              {
                q_29 = t;
                if(((p_29 != NULL) && (p_29 != q_29)))
                  _fail(q_29);
                else
                  p_29 = q_29;
              }
              {
                t = not_null(e_29);
                {
                  ATerm t_29 = NULL;
                  t = p_0(t);
                  {
                    r_29 = t;
                    {
                      ATerm u_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(r_29)), not_null(p_29));
                      {
                        u_29 = t;
                        if(((t_29 != NULL) && (t_29 != u_29)))
                          _fail(u_29);
                        else
                          t_29 = u_29;
                      }
                      t = not_null(t_29);
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
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_is_real(not_null(e_30));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym_Real_1))
    {
      s_30 = ATgetArgument(r_30, 0);
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = NULL,x_30 = NULL;
            ATerm w_30 = NULL;
            t = SSLgetAnnotations(not_null(r_30));
            {
              w_30 = t;
              if(((v_30 != NULL) && (v_30 != w_30)))
                _fail(w_30);
              else
                v_30 = w_30;
            }
            {
              t = not_null(s_30);
              {
                ATerm z_30 = NULL;
                t = o_0(t);
                {
                  x_30 = t;
                  {
                    ATerm a_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(x_30)), not_null(v_30));
                    {
                      a_31 = t;
                      if(((z_30 != NULL) && (z_30 != a_31)))
                        _fail(a_31);
                      else
                        z_30 = a_31;
                    }
                    t = not_null(z_30);
                  }
                }
              }
            }
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm f_31 = NULL,h_31 = NULL;
              ATerm g_31 = NULL;
              t = SSLgetAnnotations(not_null(r_30));
              {
                g_31 = t;
                if(((f_31 != NULL) && (f_31 != g_31)))
                  _fail(g_31);
                else
                  f_31 = g_31;
              }
              {
                t = not_null(s_30);
                {
                  ATerm j_31 = NULL;
                  t = o_0(t);
                  {
                    h_31 = t;
                    {
                      ATerm k_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_31)), not_null(f_31));
                      {
                        k_31 = t;
                        if(((j_31 != NULL) && (j_31 != k_31)))
                          _fail(k_31);
                        else
                          j_31 = k_31;
                      }
                      t = not_null(j_31);
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
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_Int_1))
    {
      d_32 = ATgetArgument(c_32, 0);
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_32 = NULL,i_32 = NULL;
            ATerm h_32 = NULL;
            t = SSLgetAnnotations(not_null(c_32));
            {
              h_32 = t;
              if(((g_32 != NULL) && (g_32 != h_32)))
                _fail(h_32);
              else
                g_32 = h_32;
            }
            {
              t = not_null(d_32);
              {
                ATerm k_32 = NULL;
                t = n_0(t);
                {
                  i_32 = t;
                  {
                    ATerm l_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(i_32)), not_null(g_32));
                    {
                      l_32 = t;
                      if(((k_32 != NULL) && (k_32 != l_32)))
                        _fail(l_32);
                      else
                        k_32 = l_32;
                    }
                    t = not_null(k_32);
                  }
                }
              }
            }
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm o_32 = NULL,q_32 = NULL;
              ATerm p_32 = NULL;
              t = SSLgetAnnotations(not_null(c_32));
              {
                p_32 = t;
                if(((o_32 != NULL) && (o_32 != p_32)))
                  _fail(p_32);
                else
                  o_32 = p_32;
              }
              {
                t = not_null(d_32);
                {
                  ATerm s_32 = NULL;
                  t = n_0(t);
                  {
                    q_32 = t;
                    {
                      ATerm t_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_32)), not_null(o_32));
                      {
                        t_32 = t;
                        if(((s_32 != NULL) && (s_32 != t_32)))
                          _fail(t_32);
                        else
                          s_32 = t_32;
                      }
                      t = not_null(s_32);
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
  ATerm g_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Wld_0))
    {
      ATerm i_33 = NULL,k_33 = NULL;
      ATerm r_5;
      r_5 = t;
      {
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(g_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
      t = r_5;
      {
        ATerm l_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(i_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        t = not_null(k_33);
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
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, match_term_exp_0);
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
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, w_0, match_term_exp_0);
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
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, x_0);
                                                LocalPopChoice(h_6);
                                              }
                                            else
                                              {
                                                t = g_6;
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_i_6;
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
ATerm Match_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm v_33 = NULL,w_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym_Match_1))
    {
      w_33 = ATgetArgument(v_33, 0);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(v_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(w_33);
          {
            ATerm d_34 = NULL;
            t = e_55(t);
            {
              b_34 = t;
              {
                ATerm e_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(b_34)), not_null(z_33));
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
                t = not_null(d_34);
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
ATerm Thread_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_Thread_1))
    {
      p_34 = ATgetArgument(o_34, 0);
      {
        ATerm s_34 = NULL,u_34 = NULL;
        ATerm t_34 = NULL;
        t = SSLgetAnnotations(not_null(o_34));
        {
          t_34 = t;
          if(((s_34 != NULL) && (s_34 != t_34)))
            _fail(t_34);
          else
            s_34 = t_34;
        }
        {
          t = not_null(p_34);
          {
            ATerm w_34 = NULL;
            t = s_55(t);
            {
              u_34 = t;
              {
                ATerm x_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(u_34)), not_null(s_34));
                {
                  x_34 = t;
                  if(((w_34 != NULL) && (w_34 != x_34)))
                    _fail(x_34);
                  else
                    w_34 = x_34;
                }
                t = not_null(w_34);
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
ATerm All_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym_All_1))
    {
      i_35 = ATgetArgument(h_35, 0);
      {
        ATerm l_35 = NULL,n_35 = NULL;
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(h_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
        {
          t = not_null(i_35);
          {
            ATerm p_35 = NULL;
            t = r_55(t);
            {
              n_35 = t;
              {
                ATerm q_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(n_35)), not_null(l_35));
                {
                  q_35 = t;
                  if(((p_35 != NULL) && (p_35 != q_35)))
                    _fail(q_35);
                  else
                    p_35 = q_35;
                }
                t = not_null(p_35);
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
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Some_1))
    {
      f_36 = ATgetArgument(e_36, 0);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_36 = NULL,k_36 = NULL;
            ATerm j_36 = NULL;
            t = SSLgetAnnotations(not_null(e_36));
            {
              j_36 = t;
              if(((i_36 != NULL) && (i_36 != j_36)))
                _fail(j_36);
              else
                i_36 = j_36;
            }
            {
              t = not_null(f_36);
              {
                ATerm m_36 = NULL;
                t = m_0(t);
                {
                  k_36 = t;
                  {
                    ATerm n_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(k_36)), not_null(i_36));
                    {
                      n_36 = t;
                      if(((m_36 != NULL) && (m_36 != n_36)))
                        _fail(n_36);
                      else
                        m_36 = n_36;
                    }
                    t = not_null(m_36);
                  }
                }
              }
            }
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            {
              ATerm q_36 = NULL,s_36 = NULL;
              ATerm r_36 = NULL;
              t = SSLgetAnnotations(not_null(e_36));
              {
                r_36 = t;
                if(((q_36 != NULL) && (q_36 != r_36)))
                  _fail(r_36);
                else
                  q_36 = r_36;
              }
              {
                t = not_null(f_36);
                {
                  ATerm u_36 = NULL;
                  t = m_0(t);
                  {
                    s_36 = t;
                    {
                      ATerm v_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(s_36)), not_null(q_36));
                      {
                        v_36 = t;
                        if(((u_36 != NULL) && (u_36 != v_36)))
                          _fail(v_36);
                        else
                          u_36 = v_36;
                      }
                      t = not_null(u_36);
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
ATerm One_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_One_1))
    {
      k_37 = ATgetArgument(j_37, 0);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm r_37 = NULL;
            t = p_55(t);
            {
              p_37 = t;
              {
                ATerm v_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(p_37)), not_null(n_37));
                {
                  v_37 = t;
                  if(((r_37 != NULL) && (r_37 != v_37)))
                    _fail(v_37);
                  else
                    r_37 = v_37;
                }
                t = not_null(r_37);
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
ATerm Cong_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Cong_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        ATerm m_38 = NULL,o_38 = NULL;
        ATerm n_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm q_38 = NULL;
            t = n_55(t);
            {
              o_38 = t;
              {
                t = not_null(i_38);
                {
                  ATerm s_38 = NULL;
                  t = o_55(t);
                  {
                    q_38 = t;
                    {
                      ATerm t_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(o_38), not_null(q_38)), not_null(m_38));
                      {
                        t_38 = t;
                        if(((s_38 != NULL) && (s_38 != t_38)))
                          _fail(t_38);
                        else
                          s_38 = t_38;
                      }
                      t = not_null(s_38);
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
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_is_int(not_null(a_39));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm j_39 = NULL,k_39 = NULL,m_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym_Path_2))
    {
      k_39 = ATgetArgument(j_39, 0);
      m_39 = ATgetArgument(j_39, 1);
      {
        ATerm t_39 = NULL,v_39 = NULL;
        ATerm u_39 = NULL;
        t = SSLgetAnnotations(not_null(j_39));
        {
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
        }
        {
          t = not_null(k_39);
          {
            ATerm x_39 = NULL;
            t = l_55(t);
            {
              v_39 = t;
              {
                t = not_null(m_39);
                {
                  ATerm z_39 = NULL;
                  t = m_55(t);
                  {
                    x_39 = t;
                    {
                      ATerm a_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(v_39), not_null(x_39)), not_null(t_39));
                      {
                        a_40 = t;
                        if(((z_39 != NULL) && (z_39 != a_40)))
                          _fail(a_40);
                        else
                          z_39 = a_40;
                      }
                      t = not_null(z_39);
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
ATerm Rec_2 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Rec_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm u_40 = NULL,x_40 = NULL;
        ATerm v_40 = NULL;
        t = SSLgetAnnotations(not_null(m_40));
        {
          v_40 = t;
          if(((u_40 != NULL) && (u_40 != v_40)))
            _fail(v_40);
          else
            u_40 = v_40;
        }
        {
          t = not_null(n_40);
          {
            ATerm z_40 = NULL;
            t = k_56(t);
            {
              x_40 = t;
              {
                t = not_null(o_40);
                {
                  ATerm b_41 = NULL;
                  t = l_56(t);
                  {
                    z_40 = t;
                    {
                      ATerm c_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_40), not_null(z_40)), not_null(u_40));
                      {
                        c_41 = t;
                        if(((b_41 != NULL) && (b_41 != c_41)))
                          _fail(c_41);
                        else
                          b_41 = c_41;
                      }
                      t = not_null(b_41);
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
ATerm SVar_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym_SVar_1))
    {
      p_41 = ATgetArgument(o_41, 0);
      {
        ATerm s_41 = NULL,u_41 = NULL;
        ATerm t_41 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          t_41 = t;
          if(((s_41 != NULL) && (s_41 != t_41)))
            _fail(t_41);
          else
            s_41 = t_41;
        }
        {
          t = not_null(p_41);
          {
            ATerm w_41 = NULL;
            t = j_56(t);
            {
              u_41 = t;
              {
                ATerm x_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_41)), not_null(s_41));
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
                t = not_null(w_41);
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
ATerm Call_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Call_2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      {
        ATerm w_42 = NULL,y_42 = NULL;
        ATerm x_42 = NULL;
        t = SSLgetAnnotations(not_null(q_42));
        {
          x_42 = t;
          if(((w_42 != NULL) && (w_42 != x_42)))
            _fail(x_42);
          else
            w_42 = x_42;
        }
        {
          t = not_null(r_42);
          {
            ATerm a_43 = NULL;
            t = y_56(t);
            {
              y_42 = t;
              {
                t = not_null(s_42);
                {
                  ATerm c_43 = NULL;
                  t = z_56(t);
                  {
                    a_43 = t;
                    {
                      ATerm d_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(y_42), not_null(a_43)), not_null(w_42));
                      {
                        d_43 = t;
                        if(((c_43 != NULL) && (c_43 != d_43)))
                          _fail(d_43);
                        else
                          c_43 = d_43;
                      }
                      t = not_null(c_43);
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
ATerm LGChoice_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym_LGChoice_2))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      {
        ATerm v_43 = NULL,x_43 = NULL;
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(p_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
        {
          t = not_null(q_43);
          {
            ATerm z_43 = NULL;
            t = g_56(t);
            {
              x_43 = t;
              {
                t = not_null(r_43);
                {
                  ATerm b_44 = NULL;
                  t = h_56(t);
                  {
                    z_43 = t;
                    {
                      ATerm c_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(x_43), not_null(z_43)), not_null(v_43));
                      {
                        c_44 = t;
                        if(((b_44 != NULL) && (b_44 != c_44)))
                          _fail(c_44);
                        else
                          b_44 = c_44;
                      }
                      t = not_null(b_44);
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
ATerm GChoice_2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_GChoice_2))
    {
      p_44 = ATgetArgument(o_44, 0);
      q_44 = ATgetArgument(o_44, 1);
      {
        ATerm u_44 = NULL,w_44 = NULL;
        ATerm v_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm y_44 = NULL;
            t = e_56(t);
            {
              w_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm a_45 = NULL;
                  t = f_56(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(w_44), not_null(y_44)), not_null(u_44));
                      {
                        b_45 = t;
                        if(((a_45 != NULL) && (a_45 != b_45)))
                          _fail(b_45);
                        else
                          a_45 = b_45;
                      }
                      t = not_null(a_45);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  v_45 = t;
  n_45 :
  if(match_cons(v_45, sym_GuardedLChoice_3))
    {
      w_45 = ATgetArgument(v_45, 0);
      x_45 = ATgetArgument(v_45, 1);
      y_45 = ATgetArgument(v_45, 2);
      {
        ATerm f_46 = NULL,h_46 = NULL;
        ATerm g_46 = NULL;
        t = SSLgetAnnotations(not_null(v_45));
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
        {
          t = not_null(w_45);
          {
            ATerm t_46 = NULL;
            t = b_56(t);
            {
              h_46 = t;
              {
                t = not_null(x_45);
                {
                  ATerm v_46 = NULL;
                  t = c_56(t);
                  {
                    t_46 = t;
                    {
                      t = not_null(y_45);
                      {
                        ATerm x_46 = NULL;
                        t = d_56(t);
                        {
                          v_46 = t;
                          {
                            ATerm y_46 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(h_46), not_null(t_46), not_null(v_46)), not_null(f_46));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_LChoice_2))
    {
      q_47 = ATgetArgument(p_47, 0);
      r_47 = ATgetArgument(p_47, 1);
      {
        ATerm v_47 = NULL,y_47 = NULL;
        ATerm w_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          w_47 = t;
          if(((v_47 != NULL) && (v_47 != w_47)))
            _fail(w_47);
          else
            v_47 = w_47;
        }
        {
          t = not_null(q_47);
          {
            ATerm a_48 = NULL;
            t = z_55(t);
            {
              y_47 = t;
              {
                t = not_null(r_47);
                {
                  ATerm c_48 = NULL;
                  t = a_56(t);
                  {
                    a_48 = t;
                    {
                      ATerm d_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(y_47), not_null(a_48)), not_null(v_47));
                      {
                        d_48 = t;
                        if(((c_48 != NULL) && (c_48 != d_48)))
                          _fail(d_48);
                        else
                          c_48 = d_48;
                      }
                      t = not_null(c_48);
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
ATerm Choice_2 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm))
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym_Choice_2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      {
        ATerm v_48 = NULL,a_49 = NULL;
        ATerm w_48 = NULL;
        t = SSLgetAnnotations(not_null(p_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
        {
          t = not_null(q_48);
          {
            ATerm c_49 = NULL;
            t = x_55(t);
            {
              a_49 = t;
              {
                t = not_null(r_48);
                {
                  ATerm e_49 = NULL;
                  t = y_55(t);
                  {
                    c_49 = t;
                    {
                      ATerm f_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(a_49), not_null(c_49)), not_null(v_48));
                      {
                        f_49 = t;
                        if(((e_49 != NULL) && (e_49 != f_49)))
                          _fail(f_49);
                        else
                          e_49 = f_49;
                      }
                      t = not_null(e_49);
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
ATerm Seq_2 (ATerm t, ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym_Seq_2))
    {
      s_49 = ATgetArgument(r_49, 0);
      t_49 = ATgetArgument(r_49, 1);
      {
        ATerm x_49 = NULL,z_49 = NULL;
        ATerm y_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          y_49 = t;
          if(((x_49 != NULL) && (x_49 != y_49)))
            _fail(y_49);
          else
            x_49 = y_49;
        }
        {
          t = not_null(s_49);
          {
            ATerm b_50 = NULL;
            t = v_55(t);
            {
              z_49 = t;
              {
                t = not_null(t_49);
                {
                  ATerm d_50 = NULL;
                  t = w_55(t);
                  {
                    b_50 = t;
                    {
                      ATerm e_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(z_49), not_null(b_50)), not_null(x_49));
                      {
                        e_50 = t;
                        if(((d_50 != NULL) && (d_50 != e_50)))
                          _fail(e_50);
                        else
                          d_50 = e_50;
                      }
                      t = not_null(d_50);
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
ATerm Test_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm w_50 = NULL,x_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_Test_1))
    {
      x_50 = ATgetArgument(w_50, 0);
      {
        ATerm a_51 = NULL,c_51 = NULL;
        ATerm b_51 = NULL;
        t = SSLgetAnnotations(not_null(w_50));
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
        {
          t = not_null(x_50);
          {
            ATerm e_51 = NULL;
            t = t_55(t);
            {
              c_51 = t;
              {
                ATerm f_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(c_51)), not_null(a_51));
                {
                  f_51 = t;
                  if(((e_51 != NULL) && (e_51 != f_51)))
                    _fail(f_51);
                  else
                    e_51 = f_51;
                }
                t = not_null(e_51);
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
ATerm Not_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm p_51 = NULL,q_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_Not_1))
    {
      q_51 = ATgetArgument(p_51, 0);
      {
        ATerm t_51 = NULL,v_51 = NULL;
        ATerm u_51 = NULL;
        t = SSLgetAnnotations(not_null(p_51));
        {
          u_51 = t;
          if(((t_51 != NULL) && (t_51 != u_51)))
            _fail(u_51);
          else
            t_51 = u_51;
        }
        {
          t = not_null(q_51);
          {
            ATerm x_51 = NULL;
            t = u_55(t);
            {
              v_51 = t;
              {
                ATerm y_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(v_51)), not_null(t_51));
                {
                  y_51 = t;
                  if(((x_51 != NULL) && (x_51 != y_51)))
                    _fail(y_51);
                  else
                    x_51 = y_51;
                }
                t = not_null(x_51);
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
  ATerm h_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Fail_0))
    {
      ATerm j_52 = NULL,l_52 = NULL;
      ATerm l_6;
      l_6 = t;
      {
        ATerm k_52 = NULL;
        t = SSLgetAnnotations(not_null(h_52));
        {
          k_52 = t;
          if(((j_52 != NULL) && (j_52 != k_52)))
            _fail(k_52);
          else
            j_52 = k_52;
        }
      }
      t = l_6;
      {
        ATerm m_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(j_52));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  t_52 :
  if(match_cons(u_52, sym_Id_0))
    {
      ATerm w_52 = NULL,y_52 = NULL;
      ATerm m_6;
      m_6 = t;
      {
        ATerm x_52 = NULL;
        t = SSLgetAnnotations(not_null(u_52));
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
      }
      t = m_6;
      {
        ATerm z_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(w_52));
        {
          z_52 = t;
          if(((y_52 != NULL) && (y_52 != z_52)))
            _fail(z_52);
          else
            y_52 = z_52;
        }
        t = not_null(y_52);
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
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        {
                          ATerm v_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm d_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, d_1);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, match_term_exp_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
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
                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, e_1, strategy_expression_0);
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
                                                                                                                                    t = Where_1(t, strategy_expression_0);
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
                                                                                                                                          ATerm f_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, f_1);
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
                                                                                                                                                            ATerm n_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, n_1, term_expression_0);
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
                                                                                                                                                                  ATerm o_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, o_1);
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
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(q_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = p_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm p_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_r_8;
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
ATerm VarDec_2 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_VarDec_2))
    {
      l_53 = ATgetArgument(k_53, 0);
      m_53 = ATgetArgument(k_53, 1);
      {
        ATerm s_53 = NULL,u_53 = NULL;
        ATerm t_53 = NULL;
        t = SSLgetAnnotations(not_null(k_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
        {
          t = not_null(l_53);
          {
            ATerm w_53 = NULL;
            t = r_56(t);
            {
              u_53 = t;
              {
                t = not_null(m_53);
                {
                  ATerm y_53 = NULL;
                  t = s_56(t);
                  {
                    w_53 = t;
                    {
                      ATerm z_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_53), not_null(w_53)), not_null(s_53));
                      {
                        z_53 = t;
                        if(((y_53 != NULL) && (y_53 != z_53)))
                          _fail(z_53);
                        else
                          y_53 = z_53;
                      }
                      t = not_null(y_53);
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
ATerm SDef_3 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym_SDef_3))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      p_54 = ATgetArgument(m_54, 2);
      {
        ATerm u_54 = NULL,y_54 = NULL;
        ATerm v_54 = NULL;
        t = SSLgetAnnotations(not_null(m_54));
        {
          v_54 = t;
          if(((u_54 != NULL) && (u_54 != v_54)))
            _fail(v_54);
          else
            u_54 = v_54;
        }
        {
          t = not_null(n_54);
          {
            ATerm c_55 = NULL;
            t = o_56(t);
            {
              y_54 = t;
              {
                t = not_null(o_54);
                {
                  ATerm g_55 = NULL;
                  t = p_56(t);
                  {
                    c_55 = t;
                    {
                      t = not_null(p_54);
                      {
                        ATerm q_55 = NULL;
                        t = q_56(t);
                        {
                          g_55 = t;
                          {
                            ATerm i_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_54), not_null(c_55), not_null(g_55)), not_null(u_54));
                            {
                              i_56 = t;
                              if(((q_55 != NULL) && (q_55 != i_56)))
                                _fail(i_56);
                              else
                                q_55 = i_56;
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
  ATerm s_8 = t;
  int t_8 = stack_ptr;
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
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_u_8;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm b_57 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = Cons_2(t, g_74, b_57);
      }
    return(t);
  }
  t = b_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm j_57 = NULL,k_57 = NULL;
  j_57 = t;
  i_57 :
  if(match_cons(j_57, sym_Strategies_1))
    {
      k_57 = ATgetArgument(j_57, 0);
      {
        ATerm n_57 = NULL,p_57 = NULL;
        ATerm o_57 = NULL;
        t = SSLgetAnnotations(not_null(j_57));
        {
          o_57 = t;
          if(((n_57 != NULL) && (n_57 != o_57)))
            _fail(o_57);
          else
            n_57 = o_57;
        }
        {
          t = not_null(k_57);
          {
            ATerm r_57 = NULL;
            t = s_57(t);
            {
              p_57 = t;
              {
                ATerm t_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_57)), not_null(n_57));
                {
                  t_57 = t;
                  if(((r_57 != NULL) && (r_57 != t_57)))
                    _fail(t_57);
                  else
                    r_57 = t_57;
                }
                t = not_null(r_57);
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
ATerm Specification_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm e_58 = NULL,f_58 = NULL;
  e_58 = t;
  d_58 :
  if(match_cons(e_58, sym_Specification_1))
    {
      f_58 = ATgetArgument(e_58, 0);
      {
        ATerm i_58 = NULL,k_58 = NULL;
        ATerm j_58 = NULL;
        t = SSLgetAnnotations(not_null(e_58));
        {
          j_58 = t;
          if(((i_58 != NULL) && (i_58 != j_58)))
            _fail(j_58);
          else
            i_58 = j_58;
        }
        {
          t = not_null(f_58);
          {
            ATerm m_58 = NULL;
            t = u_57(t);
            {
              k_58 = t;
              {
                ATerm n_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_58)), not_null(i_58));
                {
                  n_58 = t;
                  if(((m_58 != NULL) && (m_58 != n_58)))
                    _fail(n_58);
                  else
                    m_58 = n_58;
                }
                t = not_null(m_58);
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
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
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_z_8;
          return(t);
        }
        t = debug_1(t, x_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  y_58 = t;
  x_58 :
  if(match_cons(y_58, sym__2))
    {
      z_58 = ATgetArgument(y_58, 0);
      a_59 = ATgetArgument(y_58, 1);
      {
        ATerm h_59 = NULL,j_59 = NULL;
        ATerm i_59 = NULL;
        t = SSLgetAnnotations(not_null(y_58));
        {
          i_59 = t;
          if(((h_59 != NULL) && (h_59 != i_59)))
            _fail(i_59);
          else
            h_59 = i_59;
        }
        {
          t = not_null(z_58);
          {
            ATerm l_59 = NULL;
            t = n_53(t);
            {
              j_59 = t;
              {
                t = not_null(a_59);
                {
                  ATerm n_59 = NULL;
                  t = o_53(t);
                  {
                    l_59 = t;
                    {
                      ATerm o_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_59), not_null(l_59)), not_null(h_59));
                      {
                        o_59 = t;
                        if(((n_59 != NULL) && (n_59 != o_59)))
                          _fail(o_59);
                        else
                          n_59 = o_59;
                      }
                      t = not_null(n_59);
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
  ATerm w_59 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm x_59 = NULL,y_59 = NULL;
      x_59 = t;
      v_59 :
      if(match_cons(x_59, sym_Program_1))
        {
          y_59 = ATgetArgument(x_59, 0);
          if(((w_59 != NULL) && (w_59 != y_59)))
            _fail(y_59);
          else
            w_59 = y_59;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), not_null(w_59)), term_c_9));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym__2))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      {
        ATerm f_9;
        f_9 = t;
        t = SSL_printnl(not_null(d_60), not_null(e_60));
        t = f_9;
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
  ATerm j_60 = NULL;
  j_60 = t;
  t = SSL_implode_string(not_null(j_60));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
        o_60 = t;
        n_60 :
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            p_60 = ATgetFirst((ATermList) o_60);
            q_60 = (ATerm) ATgetNext((ATermList) o_60);
            {
              t = not_null(p_60);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(q_60);
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
  ATerm a_61 = NULL;
  ATerm c_61 = NULL;
  a_61 = t;
  {
    ATerm d_61 = NULL;
    ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
    t = not_null(a_61);
    {
      d_61 = t;
      {
        t = SSL_explode_term(not_null(d_61));
        {
          f_61 = t;
          y_60 :
          if(match_cons(f_61, sym__2))
            {
              g_61 = ATgetArgument(f_61, 0);
              h_61 = ATgetArgument(f_61, 1);
              z_60 :
              if(match_string(g_61, ""))
                {
                  if(((c_61 != NULL) && (c_61 != h_61)))
                    _fail(h_61);
                  else
                    c_61 = h_61;
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
      t = not_null(c_61);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm l_61 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_61);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        {
          t = Nil_0(t);
          t = t_74(t);
        }
      }
    return(t);
  }
  t = l_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  o_61 = t;
  n_61 :
  if(match_cons(o_61, sym__2))
    {
      p_61 = ATgetArgument(o_61, 0);
      q_61 = ATgetArgument(o_61, 1);
      {
        t = not_null(p_61);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(q_61);
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  t = SSL_explode_string(not_null(v_61));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_61 = NULL;
  z_61 = t;
  t = SSL_is_string(not_null(z_61));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
              i_62 = t;
              h_62 :
              if(match_cons(i_62, sym_Path_1))
                {
                  j_62 = ATgetArgument(i_62, 0);
                  t = not_null(j_62);
                }
              else
                {
                  if(match_cons(i_62, sym_Var_1))
                    {
                      j_62 = ATgetArgument(i_62, 0);
                      {
                        t = not_null(j_62);
                        {
                          ATerm u_9 = t;
                          int v_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_9);
                            }
                          else
                            {
                              t = u_9;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_w_9;
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
                      if(match_cons(i_62, sym_Prefix_2))
                        {
                          j_62 = ATgetArgument(i_62, 0);
                          k_62 = ATgetArgument(i_62, 1);
                          {
                            ATerm p_62 = NULL,r_62 = NULL;
                            ATerm x_9;
                            x_9 = t;
                            {
                              ATerm q_62 = NULL;
                              t = not_null(j_62);
                              {
                                t = eval_config_0(t);
                                {
                                  q_62 = t;
                                  if(((p_62 != NULL) && (p_62 != q_62)))
                                    _fail(q_62);
                                  else
                                    p_62 = q_62;
                                }
                              }
                            }
                            t = x_9;
                            {
                              ATerm s_62 = NULL;
                              t = not_null(k_62);
                              {
                                t = eval_config_0(t);
                                {
                                  s_62 = t;
                                  if(((r_62 != NULL) && (r_62 != s_62)))
                                    _fail(s_62);
                                  else
                                    r_62 = s_62;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_62), not_null(r_62));
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
  ATerm a_63 = NULL;
  a_63 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(a_63));
    {
      t = table_get_0(t);
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm b_10;
              b_10 = t;
              {
                ATerm c_63 = NULL;
                ATerm d_63 = NULL;
                d_63 = t;
                if(((c_63 != NULL) && (c_63 != d_63)))
                  _fail(d_63);
                else
                  c_63 = d_63;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_y_9, not_null(a_63), not_null(c_63));
                  t = table_put_0(t);
                }
              }
              t = b_10;
            }
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_10;
      e_10 = t;
      {
        ATerm h_63 = NULL;
        ATerm i_63 = NULL;
        t = term_f_10;
        {
          t = get_config_0(t);
          {
            i_63 = t;
            if(((h_63 != NULL) && (h_63 != i_63)))
              _fail(i_63);
            else
              h_63 = i_63;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_63), term_g_10);
          t = geq_0(t);
        }
      }
      t = e_10;
      t = z_87(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      t = SSL_WriteToTextFile(not_null(n_63), not_null(o_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  t_63 :
  if(match_cons(u_63, sym__2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      t = SSL_WriteToBinaryFile(not_null(v_63), not_null(w_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_64 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm i_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_64 = NULL,g_64 = NULL;
            f_64 = t;
            b_64 :
            if(match_cons(f_64, sym_Output_1))
              {
                g_64 = ATgetArgument(f_64, 0);
                if(((e_64 != NULL) && (e_64 != g_64)))
                  _fail(g_64);
                else
                  e_64 = g_64;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, e_2);
          LocalPopChoice(j_10);
        }
      else
        {
          t = i_10;
          {
            ATerm h_64 = NULL;
            t = term_k_10;
            {
              h_64 = t;
              if(((e_64 != NULL) && (e_64 != h_64)))
                _fail(h_64);
              else
                e_64 = h_64;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = h_10;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(e_64);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm l_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm i_64 = NULL;
              i_64 = t;
              d_64 :
              if(!(match_cons(i_64, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, i_2);
            return(t);
          }
          t = _2(t, h_2, WriteToBinaryFile_0);
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
  ATerm o_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
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
        ATerm p_64 = NULL;
        t = dtime_0(t);
        {
          p_64 = t;
          if(((o_64 != NULL) && (o_64 != p_64)))
            _fail(p_64);
          else
            o_64 = p_64;
        }
      }
      t = o_10;
      {
        q_64 = t;
        n_64 :
        if(match_cons(q_64, sym__2))
          {
            r_64 = ATgetArgument(q_64, 0);
            s_64 = ATgetArgument(q_64, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_64))), not_null(s_64));
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
ATerm debug_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm p_10;
  p_10 = t;
  {
    ATerm z_64 = NULL,b_65 = NULL;
    ATerm q_10;
    q_10 = t;
    {
      ATerm a_65 = NULL;
      t = c_85(t);
      {
        a_65 = t;
        if(((z_64 != NULL) && (z_64 != a_65)))
          _fail(a_65);
        else
          z_64 = a_65;
      }
    }
    t = q_10;
    {
      ATerm c_65 = NULL;
      c_65 = t;
      if(((b_65 != NULL) && (b_65 != c_65)))
        _fail(c_65);
      else
        b_65 = c_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_65)), not_null(z_64)));
        t = printnl_0(t);
      }
    }
  }
  t = p_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_65 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_65 = NULL;
      j_65 = t;
      {
        if(((i_65 != NULL) && (i_65 != j_65)))
          _fail(j_65);
        else
          i_65 = j_65;
        t = SSL_ReadFromFile(not_null(i_65));
      }
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1(t, j_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm r_65 = NULL,x_65 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm s_65 = NULL;
    t = h_82(t);
    {
      s_65 = t;
      if(((r_65 != NULL) && (r_65 != s_65)))
        _fail(s_65);
      else
        r_65 = s_65;
    }
  }
  t = u_10;
  {
    ATerm y_65 = NULL;
    t = i_82(t);
    {
      y_65 = t;
      if(((x_65 != NULL) && (x_65 != y_65)))
        _fail(y_65);
      else
        x_65 = y_65;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), not_null(x_65));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_66 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm i_66 = NULL,o_66 = NULL;
          i_66 = t;
          f_66 :
          if(match_cons(i_66, sym_Input_1))
            {
              o_66 = ATgetArgument(i_66, 0);
              if(((h_66 != NULL) && (h_66 != o_66)))
                _fail(o_66);
              else
                h_66 = o_66;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, k_2);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm p_66 = NULL;
          t = term_y_10;
          {
            p_66 = t;
            if(((h_66 != NULL) && (h_66 != p_66)))
              _fail(p_66);
            else
              h_66 = p_66;
          }
        }
      }
  }
  t = v_10;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(h_66);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm t_66 = NULL;
    t_66 = t;
    s_66 :
    if(!(match_string(t_66, "-v")))
      {
        if(!(match_string(t_66, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_e_11;
    t = set_config_0(t);
    t = term_f_11;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = Option_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm w_66 = NULL;
    w_66 = t;
    u_66 :
    if(!(match_string(w_66, "-k")))
      {
        if(!(match_string(w_66, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm h_11;
    h_11 = t;
    {
      ATerm x_66 = NULL;
      ATerm y_66 = NULL;
      t = string_to_int_0(t);
      {
        y_66 = t;
        if(((x_66 != NULL) && (x_66 != y_66)))
          _fail(y_66);
        else
          x_66 = y_66;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(x_66));
        t = set_config_0(t);
      }
    }
    t = h_11;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  t = SSL_string_to_int(not_null(b_67));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm j_67 = NULL;
        j_67 = t;
        e_67 :
        if(!(match_string(j_67, "-S")))
          {
            if(!(match_string(j_67, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_n_11;
        t = set_config_0(t);
        t = term_o_11;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_p_11;
        return(t);
      }
      t = Option_3(t, s_2, t_2, u_2);
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
            ATerm v_2 (ATerm t)
            {
              ATerm k_67 = NULL;
              k_67 = t;
              f_67 :
              if(!(match_string(k_67, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm n_67 = NULL;
              ATerm s_11;
              s_11 = t;
              {
                ATerm l_67 = NULL;
                ATerm m_67 = NULL;
                t = string_to_int_0(t);
                {
                  m_67 = t;
                  if(((l_67 != NULL) && (l_67 != m_67)))
                    _fail(m_67);
                  else
                    l_67 = m_67;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(l_67));
                  t = set_config_0(t);
                }
              }
              t = s_11;
              {
                ATerm o_67 = NULL;
                o_67 = t;
                if(((n_67 != NULL) && (n_67 != o_67)))
                  _fail(o_67);
                else
                  n_67 = o_67;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_67));
              }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_t_11;
              return(t);
            }
            t = ArgOption_3(t, v_2, w_2, x_2);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm y_2 (ATerm t)
              {
                ATerm p_67 = NULL;
                p_67 = t;
                i_67 :
                if(!(match_string(p_67, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_v_11;
                t = set_config_0(t);
                t = term_w_11;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_x_11;
                return(t);
              }
              t = Option_3(t, y_2, z_2, a_3);
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
  ATerm b_3 (ATerm t)
  {
    ATerm v_67 = NULL;
    v_67 = t;
    s_67 :
    if(!(match_string(v_67, "-o")))
      {
        if(!(match_string(v_67, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm y_67 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm w_67 = NULL;
      ATerm x_67 = NULL;
      x_67 = t;
      if(((w_67 != NULL) && (w_67 != x_67)))
        _fail(x_67);
      else
        w_67 = x_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(w_67));
        t = set_config_0(t);
      }
    }
    t = c_12;
    {
      ATerm z_67 = NULL;
      z_67 = t;
      if(((y_67 != NULL) && (y_67 != z_67)))
        _fail(z_67);
      else
        y_67 = z_67;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_67));
    }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm d_68 = NULL;
          d_68 = t;
          c_68 :
          if(!(match_string(d_68, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_i_12;
          t = set_config_0(t);
          t = term_j_12;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_k_12;
          return(t);
        }
        t = Option_3(t, e_3, f_3, g_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  j_68 = t;
  h_68 :
  if(match_string(j_68, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_68) == AT_LIST) && !(ATisEmpty(j_68))))
        {
          k_68 = ATgetFirst((ATermList) j_68);
          l_68 = (ATerm) ATgetNext((ATermList) j_68);
          i_68 :
          if(((ATgetType(l_68) == AT_LIST) && !(ATisEmpty(l_68))))
            {
              m_68 = ATgetFirst((ATermList) l_68);
              n_68 = (ATerm) ATgetNext((ATermList) l_68);
              {
                ATerm r_68 = NULL;
                ATerm l_12;
                l_12 = t;
                {
                  t = not_null(k_68);
                  t = j_0(t);
                }
                t = l_12;
                {
                  ATerm s_68 = NULL;
                  t = not_null(m_68);
                  {
                    t = k_0(t);
                    {
                      s_68 = t;
                      if(((r_68 != NULL) && (r_68 != s_68)))
                        _fail(s_68);
                      else
                        r_68 = s_68;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_68)), not_null(r_68));
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
  ATerm h_3 (ATerm t)
  {
    ATerm z_68 = NULL;
    z_68 = t;
    w_68 :
    if(!(match_string(z_68, "-i")))
      {
        if(!(match_string(z_68, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm c_69 = NULL;
    ATerm m_12;
    m_12 = t;
    {
      ATerm a_69 = NULL;
      ATerm b_69 = NULL;
      b_69 = t;
      if(((a_69 != NULL) && (a_69 != b_69)))
        _fail(b_69);
      else
        a_69 = b_69;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(a_69));
        t = set_config_0(t);
      }
    }
    t = m_12;
    {
      ATerm d_69 = NULL;
      d_69 = t;
      if(((c_69 != NULL) && (c_69 != d_69)))
        _fail(d_69);
      else
        c_69 = d_69;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_69));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_o_12;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, term_t_12));
  {
    t = printnl_0(t);
    {
      t = term_e_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  t = SSL_TicksToSeconds(not_null(h_69));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  l_69 :
  if(match_cons(m_69, sym__2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_69), not_null(o_69));
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = SSL_addr(not_null(n_69), not_null(o_69));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_80(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
        v_69 = t;
        u_69 :
        if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
          {
            w_69 = ATgetFirst((ATermList) v_69);
            x_69 = (ATerm) ATgetNext((ATermList) v_69);
            {
              ATerm a_70 = NULL;
              ATerm b_70 = NULL;
              t = not_null(x_69);
              {
                t = foldr_2(t, s_80, t_80);
                {
                  b_70 = t;
                  if(((a_70 != NULL) && (a_70 != b_70)))
                    _fail(b_70);
                  else
                    a_70 = b_70;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_69), not_null(a_70));
                t = t_80(t);
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
ATerm crush_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm i_70 = NULL;
  ATerm k_70 = NULL;
  i_70 = t;
  {
    ATerm l_70 = NULL;
    ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
    t = not_null(i_70);
    {
      l_70 = t;
      {
        t = SSL_explode_term(not_null(l_70));
        {
          n_70 = t;
          h_70 :
          if(match_cons(n_70, sym__2))
            {
              o_70 = ATgetArgument(n_70, 0);
              p_70 = ATgetArgument(n_70, 1);
              if(((k_70 != NULL) && (k_70 != p_70)))
                _fail(p_70);
              else
                k_70 = p_70;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_70);
      t = foldr_2(t, q_79, r_79);
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
    ATerm k_3 (ATerm t)
    {
      t = term_m_11;
      return(t);
    }
    t = crush_2(t, k_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym__2))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      {
        ATerm y_12;
        y_12 = t;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_70), not_null(x_70));
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              t = SSL_gtr(not_null(w_70), not_null(x_70));
            }
        }
        t = y_12;
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
  ATerm d_71 = NULL;
  ATerm b_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
      e_71 = t;
      c_71 :
      if(match_cons(e_71, sym__2))
        {
          f_71 = ATgetArgument(e_71, 0);
          g_71 = ATgetArgument(e_71, 1);
          {
            if(((d_71 != NULL) && (d_71 != f_71)))
              _fail(f_71);
            else
              d_71 = f_71;
            if(((d_71 != NULL) && (d_71 != g_71)))
              _fail(g_71);
            else
              d_71 = g_71;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_13);
    }
  else
    {
      t = b_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13;
      i_13 = t;
      {
        ATerm j_71 = NULL;
        ATerm k_71 = NULL;
        t = term_f_10;
        {
          t = get_config_0(t);
          {
            k_71 = t;
            if(((j_71 != NULL) && (j_71 != k_71)))
              _fail(k_71);
            else
              j_71 = k_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_71), term_e_9);
          t = geq_0(t);
        }
      }
      t = i_13;
      t = y_87(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm o_71 = NULL,q_71 = NULL;
    ATerm j_13;
    j_13 = t;
    {
      ATerm p_71 = NULL;
      t = run_time_0(t);
      {
        p_71 = t;
        if(((o_71 != NULL) && (o_71 != p_71)))
          _fail(p_71);
        else
          o_71 = p_71;
      }
    }
    t = j_13;
    {
      ATerm r_71 = NULL;
      t = term_k_13;
      {
        t = get_config_0(t);
        {
          r_71 = t;
          if(((q_71 != NULL) && (q_71 != r_71)))
            _fail(r_71);
          else
            q_71 = r_71;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), not_null(o_71)), term_l_13), not_null(q_71)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_3);
  {
    t = term_m_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_71 = NULL;
  y_71 = t;
  x_71 :
  if(match_cons(y_71, sym_Version_0))
    {
      ATerm a_72 = NULL,c_72 = NULL;
      ATerm n_13;
      n_13 = t;
      {
        ATerm b_72 = NULL;
        t = SSLgetAnnotations(not_null(y_71));
        {
          b_72 = t;
          if(((a_72 != NULL) && (a_72 != b_72)))
            _fail(b_72);
          else
            a_72 = b_72;
        }
      }
      t = n_13;
      {
        ATerm d_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_72));
        {
          d_72 = t;
          if(((c_72 != NULL) && (c_72 != d_72)))
            _fail(d_72);
          else
            c_72 = d_72;
        }
        t = not_null(c_72);
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
  ATerm m_3 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm q_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_13);
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
  t = fetch_1(t, m_3);
  t = e_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_72 = NULL;
  i_72 = t;
  t = SSL_table_create(not_null(i_72));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  {
    ATerm t_13;
    t_13 = t;
    {
      t = term_u_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_w_13, not_null(m_72));
          t = table_put_0(t);
        }
      }
    }
    t = t_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  t = SSL_table_destroy(not_null(q_72));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_72 = NULL;
  u_72 = t;
  t = SSL_exit(not_null(u_72));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  x_72 :
  if(((ATgetType(y_72) == AT_LIST) && ATisEmpty(y_72)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
        {
          z_72 = ATgetFirst((ATermList) y_72);
          a_73 = (ATerm) ATgetNext((ATermList) y_72);
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
  ATerm x_13;
  x_13 = t;
  {
    ATerm d_73 = NULL;
    ATerm g_73 = NULL;
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm e_73 = NULL;
          ATerm f_73 = NULL;
          f_73 = t;
          if(((e_73 != NULL) && (e_73 != f_73)))
            _fail(f_73);
          else
            e_73 = f_73;
          t = (ATerm) ATinsert(ATempty, not_null(e_73));
        }
      }
    {
      g_73 = t;
      if(((d_73 != NULL) && (d_73 != g_73)))
        _fail(g_73);
      else
        d_73 = g_73;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(d_73));
      t = printnl_0(t);
    }
  }
  t = x_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm j_73 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = Cons_2(t, e_74, j_73);
      }
    return(t);
  }
  t = j_73(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  s_73 = t;
  p_73 :
  if(((ATgetType(s_73) == AT_LIST) && !(ATisEmpty(s_73))))
    {
      q_73 = ATgetFirst((ATermList) s_73);
      r_73 = (ATerm) ATgetNext((ATermList) s_73);
      {
        ATerm v_73 = NULL;
        t = not_null(r_73);
        {
          ATerm c_14;
          c_14 = t;
          {
            ATerm w_73 = NULL,y_73 = NULL,a_74 = NULL;
            ATerm d_14;
            d_14 = t;
            {
              ATerm x_73 = NULL;
              t = i_0(t);
              {
                x_73 = t;
                if(((w_73 != NULL) && (w_73 != x_73)))
                  _fail(x_73);
                else
                  w_73 = x_73;
              }
            }
            t = d_14;
            {
              ATerm z_73 = NULL;
              t = not_null(q_73);
              {
                t = h_0(t);
                {
                  z_73 = t;
                  if(((y_73 != NULL) && (y_73 != z_73)))
                    _fail(z_73);
                  else
                    y_73 = z_73;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_73)), not_null(y_73));
                {
                  a_74 = t;
                  if(((v_73 != NULL) && (v_73 != a_74)))
                    _fail(a_74);
                  else
                    v_73 = a_74;
                }
              }
            }
          }
          t = c_14;
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(v_73);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_73) == AT_LIST) && ATisEmpty(s_73)))
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
  ATerm o_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm s_74 = NULL,v_74 = NULL;
  s_74 = t;
  r_74 :
  if(match_cons(s_74, sym_Program_1))
    {
      v_74 = ATgetArgument(s_74, 0);
      {
        ATerm y_74 = NULL,a_75 = NULL;
        ATerm z_74 = NULL;
        t = SSLgetAnnotations(not_null(s_74));
        {
          z_74 = t;
          if(((y_74 != NULL) && (y_74 != z_74)))
            _fail(z_74);
          else
            y_74 = z_74;
        }
        {
          t = not_null(v_74);
          {
            ATerm c_75 = NULL;
            t = e_65(t);
            {
              a_75 = t;
              {
                ATerm d_75 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_75)), not_null(y_74));
                {
                  d_75 = t;
                  if(((c_75 != NULL) && (c_75 != d_75)))
                    _fail(d_75);
                  else
                    c_75 = d_75;
                }
                t = not_null(c_75);
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
  ATerm l_75 = NULL;
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_75 = NULL;
      t = term_k_13;
      {
        t = get_config_0(t);
        {
          m_75 = t;
          if(((l_75 != NULL) && (l_75 != m_75)))
            _fail(m_75);
          else
            l_75 = m_75;
        }
      }
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm n_75 = NULL;
            n_75 = t;
            if(((l_75 != NULL) && (l_75 != n_75)))
              _fail(n_75);
            else
              l_75 = n_75;
            return(t);
          }
          t = Program_1(t, q_3);
          return(t);
        }
        t = fetch_1(t, p_3);
      }
    }
  {
    t = term_g_14;
    {
      t = echo_0(t);
      {
        t = term_m_14;
        {
          t = table_get_0(t);
          {
            ATerm r_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, r_3);
            {
              ATerm s_3 (ATerm t)
              {
                ATerm o_75 = NULL;
                ATerm p_75 = NULL;
                p_75 = t;
                if(((o_75 != NULL) && (o_75 != p_75)))
                  _fail(p_75);
                else
                  o_75 = p_75;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_75)), term_q_14);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, s_3);
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
  ATerm t_14;
  t_14 = t;
  {
    ATerm u_75 = NULL;
    ATerm v_75 = NULL;
    v_75 = t;
    if(((u_75 != NULL) && (u_75 != v_75)))
      _fail(v_75);
    else
      u_75 = v_75;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, not_null(u_75)));
      t = printnl_0(t);
    }
  }
  t = t_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm u_14;
  u_14 = t;
  {
    t = d_85(t);
    t = debug_0(t);
  }
  t = u_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_65 (ATerm))
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
            t = f_65(t);
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
ATerm fetch_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm q_76 (ATerm t)
  {
    ATerm y_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_74, _id);
        LocalPopChoice(b_15);
      }
    else
      {
        t = y_14;
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
      ATerm c_15;
      c_15 = t;
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
      t = c_15;
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
ATerm try_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_66(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
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
        ATerm f_15;
        f_15 = t;
        {
          ATerm w_77 = NULL;
          ATerm x_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_77), not_null(r_77));
          {
            ATerm g_15 = t;
            int h_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_15);
              }
            else
              {
                t = g_15;
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
        t = f_15;
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
    t = (ATerm) ATmakeAppl(sym__3, term_h_14, term_l_14, not_null(b_78));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_string(i_78, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(i_78) == AT_LIST) && !(ATisEmpty(i_78))))
        {
          j_78 = ATgetFirst((ATermList) i_78);
          k_78 = (ATerm) ATgetNext((ATermList) i_78);
          {
            ATerm n_78 = NULL;
            ATerm i_15;
            i_15 = t;
            {
              t = not_null(j_78);
              t = a_0(t);
            }
            t = i_15;
            {
              ATerm o_78 = NULL;
              t = term_d_11;
              {
                t = d_0(t);
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
  ATerm t_3 (ATerm t)
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
  ATerm u_3 (ATerm t)
  {
    t = term_k_15;
    {
      t = set_config_0(t);
      t = term_l_15;
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = Option_3(t, t_3, u_3, v_3);
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
ATerm Cons_2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
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
        ATerm p_79 = NULL;
        t = SSLgetAnnotations(not_null(i_79));
        {
          p_79 = t;
          if(((o_79 != NULL) && (o_79 != p_79)))
            _fail(p_79);
          else
            o_79 = p_79;
        }
        {
          t = not_null(j_79);
          {
            ATerm u_79 = NULL;
            t = w_54(t);
            {
              s_79 = t;
              {
                t = not_null(k_79);
                {
                  ATerm w_79 = NULL;
                  t = x_54(t);
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
        ATerm q_15;
        q_15 = t;
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
        t = q_15;
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
  r_80 :
  if(match_cons(u_80, sym__2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_9, not_null(v_80), not_null(w_80));
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
  ATerm r_15;
  r_15 = t;
  {
    ATerm v_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_15;
        t = e_90(t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = v_15;
        {
        }
      }
  }
  t = r_15;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm e_81 = NULL;
      ATerm a_16;
      a_16 = t;
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
      t = a_16;
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
    ATerm x_3 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                t = e_90(t);
                t = Cons_2(t, _id, x_3);
              }
            }
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_3, x_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
  ATerm f_16;
  f_16 = t;
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
  t = f_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm u_81 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    t = term_h_16;
    t = table_put_0(t);
  }
  t = g_16;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_90(t);
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_3);
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_16;
          m_16 = t;
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_15;
                t = get_config_0(t);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_16;
          {
            t = system_usage_0(t);
            {
              t = term_m_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          {
            ATerm t_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm v_81 = NULL;
                    v_81 = t;
                    if(((u_81 != NULL) && (u_81 != v_81)))
                      _fail(v_81);
                    else
                      u_81 = v_81;
                    return(t);
                  }
                  t = Undefined_1(t, a_4);
                  return(t);
                }
                t = fetch_1(t, z_3);
                {
                  ATerm b_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_z_16);
                    return(t);
                  }
                  t = say_1(t, b_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_e_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_16);
              }
            else
              {
                t = t_16;
                {
                }
              }
          }
        }
      {
        ATerm c_17;
        c_17 = t;
        {
          t = term_h_14;
          t = table_destroy_0(t);
        }
        t = c_17;
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
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_86);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm i_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = i_17;
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
  ATerm c_4 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, c_4, d_87, e_87, d_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm p_17;
      p_17 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATempty, not_null(y_81)));
          t = printnl_0(t);
        }
      }
      t = p_17;
      return(t);
    }
    t = if_verbose2_1(t, f_4);
    return(t);
  }
  t = iowrap_4(t, v_86, w_86, x_86, e_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_86 (ATerm), ATerm u_86 (ATerm))
{
  t = iowrap_3(t, t_86, u_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, q_86);
    return(t);
  }
  t = iowrap_2(t, g_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
