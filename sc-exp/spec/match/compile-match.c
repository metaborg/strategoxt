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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Anno_2;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_i_35;
ATerm term_a_35;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_x_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_s_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_g_25;
ATerm term_h_24;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_t_17;
ATerm term_f_16;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
void init_constant_terms (void)
{
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Op_2, term_h_18, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_h_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_l_12);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_12);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_h_28);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_h_28);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_h_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_h_28);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__3, term_g_33, term_h_33, (ATerm) ATempty);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_99 (ATerm));
ATerm Rec_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Let_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm g_88 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_99 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm l_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_87 (ATerm), ATerm g_87 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm diff_1 (ATerm, ATerm b_110 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_121 (ATerm), ATerm b_121 (ATerm));
ATerm for_3 (ATerm, ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm c_117 (ATerm), ATerm d_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm w_116 (ATerm), ATerm x_116 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm h_117 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm a_118 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm k_117 (ATerm));
ATerm rename_4 (ATerm, ATerm r_116 (ATerm, ATerm (ATerm)), ATerm s_116 (ATerm), ATerm t_116 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_116 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm p_91 (ATerm));
ATerm Call_2 (ATerm, ATerm v_88 (ATerm), ATerm w_88 (ATerm));
ATerm Str_1 (ATerm, ATerm v_0 (ATerm));
ATerm Real_1 (ATerm, ATerm u_0 (ATerm));
ATerm Int_1 (ATerm, ATerm s_0 (ATerm));
ATerm Var_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm o_106 (ATerm));
ATerm Build_1 (ATerm, ATerm c_87 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm h_112 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm o_0 (ATerm), ATerm q_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm h_127 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm l_105 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm t_107 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm f_116 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_112 (ATerm));
ATerm restore_always_2 (ATerm, ATerm s_103 (ATerm), ATerm t_103 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_112 (ATerm));
ATerm scope_2 (ATerm, ATerm f_112 (ATerm), ATerm g_112 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm c_105 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm Prim_2 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm Explode_2 (ATerm, ATerm w_90 (ATerm), ATerm x_90 (ATerm));
ATerm Op_2 (ATerm, ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_98 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm));
ATerm crush_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm collect_om_1 (ATerm, ATerm y_108 (ATerm));
ATerm collect_1 (ATerm, ATerm z_108 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_110 (ATerm), ATerm k_110 (ATerm));
ATerm union_1 (ATerm, ATerm f_110 (ATerm));
ATerm unions_1 (ATerm, ATerm h_110 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_105 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm l_108 (ATerm), ATerm m_108 (ATerm));
ATerm collect_split_2 (ATerm, ATerm m_109 (ATerm), ATerm n_109 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm q_98 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm i_105 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_100 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm l_120 (ATerm));
ATerm downup_1 (ATerm, ATerm n_100 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm));
ATerm Strategies_1 (ATerm, ATerm p_89 (ATerm));
ATerm Specification_1 (ATerm, ATerm r_89 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm p_98 (ATerm));
ATerm _2 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_107 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_114 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_124 (ATerm));
ATerm debug_1 (ATerm, ATerm p_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_103 (ATerm), ATerm y_103 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_110 (ATerm), ATerm x_110 (ATerm));
ATerm crush_2 (ATerm, ATerm u_109 (ATerm), ATerm v_109 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_114 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_124 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_126 (ATerm));
ATerm map_1 (ATerm, ATerm m_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_126 (ATerm));
ATerm Program_1 (ATerm, ATerm j_98 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_112 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_98 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_125 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_126 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_126 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_126 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_125 (ATerm), ATerm c_125 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_124 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,l_4 = NULL;
  g_4 = t;
  f_4 :
  if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
    {
      h_4 = ATgetFirst((ATermList) g_4);
      l_4 = (ATerm) ATgetNext((ATermList) g_4);
      t = not_null(h_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, p_99);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
            f_8 = t;
            d_7 :
            if(match_cons(f_8, sym__2))
              {
                g_8 = ATgetArgument(f_8, 0);
                n_8 = ATgetArgument(f_8, 1);
                e_7 :
                if(match_cons(g_8, sym_SDef_3))
                  {
                    h_8 = ATgetArgument(g_8, 0);
                    l_8 = ATgetArgument(g_8, 1);
                    m_8 = ATgetArgument(g_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_8), not_null(l_8), not_null(m_8));
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
          t = zip_1(t, e_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
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
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, p_99);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
                  r_8 = t;
                  t_7 :
                  if(match_cons(r_8, sym__2))
                    {
                      s_8 = ATgetArgument(r_8, 0);
                      v_8 = ATgetArgument(r_8, 1);
                      u_7 :
                      if(match_cons(s_8, sym_VarDec_2))
                        {
                          t_8 = ATgetArgument(s_8, 0);
                          u_8 = ATgetArgument(s_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_8), not_null(u_8));
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
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm j_0 (ATerm t)
              {
                t = p_99(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, j_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Rec_2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        ATerm n_9 = NULL,p_9 = NULL;
        ATerm o_9 = NULL;
        t = SSLgetAnnotations(not_null(h_9));
        {
          o_9 = t;
          if(((n_9 != NULL) && (n_9 != o_9)))
            _fail(o_9);
          else
            n_9 = o_9;
        }
        {
          t = not_null(i_9);
          {
            ATerm r_9 = NULL;
            t = h_88(t);
            {
              p_9 = t;
              {
                t = not_null(j_9);
                {
                  ATerm t_9 = NULL;
                  t = i_88(t);
                  {
                    r_9 = t;
                    {
                      ATerm u_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_9), not_null(r_9)), not_null(n_9));
                      {
                        u_9 = t;
                        if(((t_9 != NULL) && (t_9 != u_9)))
                          _fail(u_9);
                        else
                          t_9 = u_9;
                      }
                      t = not_null(t_9);
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
ATerm Let_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_Let_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(g_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(h_10);
          {
            ATerm q_10 = NULL;
            t = j_88(t);
            {
              o_10 = t;
              {
                t = not_null(i_10);
                {
                  ATerm s_10 = NULL;
                  t = k_88(t);
                  {
                    q_10 = t;
                    {
                      ATerm t_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_10), not_null(q_10)), not_null(m_10));
                      {
                        t_10 = t;
                        if(((s_10 != NULL) && (s_10 != t_10)))
                          _fail(t_10);
                        else
                          s_10 = t_10;
                      }
                      t = not_null(s_10);
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
ATerm sboundin_3 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, q_99, q_99);
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
            t = SDef_3(t, s_99, s_99, q_99);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = Rec_2(t, s_99, q_99);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym_Rec_2))
    {
      c_11 = ATgetArgument(b_11, 0);
      d_11 = ATgetArgument(b_11, 1);
      t = (ATerm) ATinsert(ATempty, not_null(c_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_SDef_3))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      o_11 = ATgetArgument(l_11, 2);
      {
        t = not_null(n_11);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
            s_11 = t;
            j_11 :
            if(match_cons(s_11, sym_VarDec_2))
              {
                t_11 = ATgetArgument(s_11, 0);
                u_11 = ATgetArgument(s_11, 1);
                t = not_null(t_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, m_0);
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
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Let_2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      {
        t = not_null(d_12);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
            h_12 = t;
            a_12 :
            if(match_cons(h_12, sym_SDef_3))
              {
                i_12 = ATgetArgument(h_12, 0);
                j_12 = ATgetArgument(h_12, 1);
                k_12 = ATgetArgument(h_12, 2);
                t = not_null(i_12);
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
ATerm SVar_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_SVar_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm z_12 = NULL,b_13 = NULL;
        ATerm a_13 = NULL;
        t = SSLgetAnnotations(not_null(v_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        {
          t = not_null(w_12);
          {
            ATerm d_13 = NULL;
            t = g_88(t);
            {
              b_13 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_13)), not_null(z_12));
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
ATerm srename_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(w_7);
            }
          else
            {
              t = v_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, t_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_99 (ATerm))
{
  t = Scope_2(t, l_99, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_DynamicRules_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm s_13 = NULL,u_13 = NULL;
        ATerm t_13 = NULL;
        t = SSLgetAnnotations(not_null(o_13));
        {
          t_13 = t;
          if(((s_13 != NULL) && (s_13 != t_13)))
            _fail(t_13);
          else
            s_13 = t_13;
        }
        {
          t = not_null(p_13);
          {
            ATerm w_13 = NULL;
            t = l_90(t);
            {
              u_13 = t;
              {
                ATerm x_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_13)), not_null(s_13));
                {
                  x_13 = t;
                  if(((w_13 != NULL) && (w_13 != x_13)))
                    _fail(x_13);
                  else
                    w_13 = x_13;
                }
                t = not_null(w_13);
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
ATerm Scope_2 (ATerm t, ATerm f_87 (ATerm), ATerm g_87 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_Scope_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(j_14);
          {
            ATerm s_14 = NULL;
            t = f_87(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = g_87(t);
                  {
                    s_14 = t;
                    {
                      ATerm v_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_14), not_null(s_14)), not_null(o_14));
                      {
                        v_14 = t;
                        if(((u_14 != NULL) && (u_14 != v_14)))
                          _fail(v_14);
                        else
                          u_14 = v_14;
                      }
                      t = not_null(u_14);
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
ATerm tboundin_3 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_99, m_99);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = DynamicRules_1(t, m_99);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_DynamicRules_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        t = not_null(e_15);
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
  ATerm j_15 = NULL,k_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Var_1))
    {
      k_15 = ATgetArgument(j_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm b_110 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        t = not_null(q_15);
        {
          ATerm v_15 (ATerm t)
          {
            ATerm z_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(r_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_110, w_0);
                      t = v_15(t);
                      ;
                      LocalPopChoice(c_8);
                    }
                  else
                    {
                      t = b_8;
                      t = Cons_2(t, _id, v_15);
                    }
                }
              }
            return(t);
          }
          t = v_15(t);
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  x_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      y_15 :
      if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
        {
          c_16 = ATgetFirst((ATermList) b_16);
          d_16 = (ATerm) ATgetNext((ATermList) b_16);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_16)), not_null(c_16)), not_null(d_16));
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
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  s_16 = t;
  q_16 :
  if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
    {
      t_16 = ATgetFirst((ATermList) s_16);
      w_16 = (ATerm) ATgetNext((ATermList) s_16);
      r_16 :
      if(match_cons(t_16, sym__2))
        {
          u_16 = ATgetArgument(t_16, 0);
          v_16 = ATgetArgument(t_16, 1);
          {
            ATerm a_17 = NULL,b_17 = NULL,h_17 = NULL,n_17 = NULL;
            ATerm d_8;
            d_8 = t;
            {
              ATerm c_17 = NULL;
              ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
              t = not_null(v_16);
              {
                c_17 = t;
                {
                  t = SSL_explode_term(not_null(c_17));
                  {
                    e_17 = t;
                    l_16 :
                    if(match_cons(e_17, sym__2))
                      {
                        f_17 = ATgetArgument(e_17, 0);
                        g_17 = ATgetArgument(e_17, 1);
                        {
                          if(((a_17 != NULL) && (a_17 != f_17)))
                            _fail(f_17);
                          else
                            a_17 = f_17;
                          if(((b_17 != NULL) && (b_17 != g_17)))
                            _fail(g_17);
                          else
                            b_17 = g_17;
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
            t = d_8;
            {
              ATerm e_8;
              e_8 = t;
              {
                ATerm i_17 = NULL;
                ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
                t = not_null(u_16);
                {
                  i_17 = t;
                  {
                    t = SSL_explode_term(not_null(i_17));
                    {
                      k_17 = t;
                      o_16 :
                      if(match_cons(k_17, sym__2))
                        {
                          l_17 = ATgetArgument(k_17, 0);
                          m_17 = ATgetArgument(k_17, 1);
                          {
                            if(((a_17 != NULL) && (a_17 != l_17)))
                              _fail(l_17);
                            else
                              a_17 = l_17;
                            if(((h_17 != NULL) && (h_17 != m_17)))
                              _fail(m_17);
                            else
                              h_17 = m_17;
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
              t = e_8;
              {
                ATerm o_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(b_17));
                {
                  t = zip_1(t, _id);
                  {
                    o_17 = t;
                    if(((n_17 != NULL) && (n_17 != o_17)))
                      _fail(o_17);
                    else
                      n_17 = o_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(w_16));
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
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  w_17 :
  if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
    {
      z_17 = ATgetFirst((ATermList) y_17);
      c_18 = (ATerm) ATgetNext((ATermList) y_17);
      x_17 :
      if(match_cons(z_17, sym__2))
        {
          a_18 = ATgetArgument(z_17, 0);
          b_18 = ATgetArgument(z_17, 1);
          {
            ATerm e_18 = NULL;
            if(((a_18 != NULL) && (a_18 != b_18)))
              _fail(b_18);
            else
              a_18 = b_18;
            {
              if(((e_18 != NULL) && (e_18 != c_18)))
                _fail(c_18);
              else
                e_18 = c_18;
              t = not_null(e_18);
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
ATerm while_not_2 (ATerm t, ATerm a_121 (ATerm), ATerm b_121 (ATerm))
{
  ATerm g_18 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_121(t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          t = b_121(t);
          t = g_18(t);
        }
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm))
{
  t = d_121(t);
  t = while_not_2(t, e_121, f_121);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm i_18 = NULL;
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_18));
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm w_8 = t;
              int x_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(x_8);
                }
              else
                {
                  t = w_8;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, b_1);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, x_0, y_0, a_1);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = k_8;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_18 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_118(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_18 = NULL;
              ATerm c_9;
              c_9 = t;
              {
                ATerm n_18 = NULL;
                t = v_118(t);
                {
                  n_18 = t;
                  if(((m_18 != NULL) && (m_18 != n_18)))
                    _fail(n_18);
                  else
                    m_18 = n_18;
                }
              }
              t = c_9;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(m_18);
                    return(t);
                  }
                  t = split_2(t, o_18, e_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_118(t, c_1, o_18, d_1);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, f_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              {
                ATerm g_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, g_1, union_0, o_18);
              }
            }
        }
      }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, h_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  s_18 :
  if(match_cons(x_18, sym_LRule_1))
    {
      y_18 = ATgetArgument(x_18, 0);
      t_18 :
      if(match_cons(y_18, sym_Rule_3))
        {
          u_18 = ATgetArgument(y_18, 0);
          v_18 = ATgetArgument(y_18, 1);
          w_18 = ATgetArgument(y_18, 2);
          {
            t = not_null(u_18);
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
      if(match_cons(x_18, sym_Scope_2))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          t = not_null(y_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm c_117 (ATerm), ATerm d_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__3))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      o_19 = ATgetArgument(l_19, 2);
      {
        t = not_null(m_19);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm s_19 = NULL;
            s_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(o_19));
              t = c_117(t);
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            ATerm u_19 = NULL;
            u_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(n_19));
              t = c_117(t);
            }
            return(t);
          }
          t = d_117(t, i_1, j_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm w_116 (ATerm), ATerm x_116 (ATerm, ATerm (ATerm)))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym__2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      {
        ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,t_20 = NULL;
        ATerm f_9;
        f_9 = t;
        {
          ATerm o_20 = NULL;
          t = not_null(h_20);
          {
            ATerm p_20 = NULL;
            t = w_116(t);
            {
              o_20 = t;
              {
                if(((l_20 != NULL) && (l_20 != o_20)))
                  _fail(o_20);
                else
                  l_20 = o_20;
                {
                  ATerm q_20 = NULL,s_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    p_20 = t;
                    {
                      if(((m_20 != NULL) && (m_20 != p_20)))
                        _fail(p_20);
                      else
                        m_20 = p_20;
                      {
                        ATerm r_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(m_20));
                        {
                          t = zip_1(t, _id);
                          {
                            r_20 = t;
                            if(((q_20 != NULL) && (q_20 != r_20)))
                              _fail(r_20);
                            else
                              q_20 = r_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(i_20));
                          {
                            t = conc_0(t);
                            {
                              s_20 = t;
                              if(((n_20 != NULL) && (n_20 != s_20)))
                                _fail(s_20);
                              else
                                n_20 = s_20;
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
        t = f_9;
        {
          ATerm u_20 = NULL;
          t = not_null(h_20);
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(m_20);
              return(t);
            }
            t = x_116(t, k_1);
            {
              u_20 = t;
              if(((t_20 != NULL) && (t_20 != u_20)))
                _fail(u_20);
              else
                t_20 = u_20;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_20), not_null(i_20), not_null(n_20));
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
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  e_21 = t;
  c_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      d_21 :
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          h_21 = ATgetFirst((ATermList) g_21);
          i_21 = (ATerm) ATgetNext((ATermList) g_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(i_21));
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
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  q_21 = t;
  n_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      o_21 :
      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
        {
          t_21 = ATgetFirst((ATermList) s_21);
          w_21 = (ATerm) ATgetNext((ATermList) s_21);
          p_21 :
          if(match_cons(t_21, sym__2))
            {
              u_21 = ATgetArgument(t_21, 0);
              v_21 = ATgetArgument(t_21, 1);
              {
                ATerm y_21 = NULL;
                if(((r_21 != NULL) && (r_21 != u_21)))
                  _fail(u_21);
                else
                  r_21 = u_21;
                {
                  if(((y_21 != NULL) && (y_21 != v_21)))
                    _fail(v_21);
                  else
                    y_21 = v_21;
                  t = not_null(y_21);
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm h_117 (ATerm, ATerm (ATerm)))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        t = not_null(e_22);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(f_22);
              return(t);
            }
            t = split_2(t, _id, m_1);
            t = lookup_0(t);
            return(t);
          }
          t = h_117(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm a_118 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym__2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      {
        t = not_null(n_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm r_22 = NULL;
            r_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(o_22));
              t = a_118(t);
            }
            return(t);
          }
          t = _all(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm k_117 (ATerm))
{
  ATerm v_22 (ATerm t)
  {
    ATerm m_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_117(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = m_9;
        t = all_dist_1(t, v_22);
      }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm r_116 (ATerm, ATerm (ATerm)), ATerm s_116 (ATerm), ATerm t_116 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_116 (ATerm, ATerm (ATerm)))
{
  ATerm x_22 = NULL;
  x_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), (ATerm) ATempty);
    {
      ATerm a_23 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm s_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, r_116);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = s_9;
              {
                t = RnBinding_2(t, s_116, u_116);
                t = DistBinding_2(t, a_23, t_116);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, o_1);
        return(t);
      }
      t = a_23(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm b_23 (ATerm t, ATerm c_23 (ATerm))
  {
    t = Scope_2(t, c_23, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, b_23);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Seqs_1))
    {
      j_23 = ATgetArgument(i_23, 0);
      {
        ATerm m_23 = NULL,o_23 = NULL;
        ATerm n_23 = NULL;
        t = SSLgetAnnotations(not_null(i_23));
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
        {
          t = not_null(j_23);
          {
            ATerm q_23 = NULL;
            t = p_91(t);
            {
              o_23 = t;
              {
                ATerm r_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_23)), not_null(m_23));
                {
                  r_23 = t;
                  if(((q_23 != NULL) && (q_23 != r_23)))
                    _fail(r_23);
                  else
                    q_23 = r_23;
                }
                t = not_null(q_23);
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
ATerm Call_2 (ATerm t, ATerm v_88 (ATerm), ATerm w_88 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_Call_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      {
        ATerm i_24 = NULL,k_24 = NULL;
        ATerm j_24 = NULL;
        t = SSLgetAnnotations(not_null(c_24));
        {
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
        }
        {
          t = not_null(d_24);
          {
            ATerm m_24 = NULL;
            t = v_88(t);
            {
              k_24 = t;
              {
                t = not_null(e_24);
                {
                  ATerm o_24 = NULL;
                  t = w_88(t);
                  {
                    m_24 = t;
                    {
                      ATerm p_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(k_24), not_null(m_24)), not_null(i_24));
                      {
                        p_24 = t;
                        if(((o_24 != NULL) && (o_24 != p_24)))
                          _fail(p_24);
                        else
                          o_24 = p_24;
                      }
                      t = not_null(o_24);
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
ATerm Str_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Str_1))
    {
      f_25 = ATgetArgument(e_25, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_25 = NULL,k_25 = NULL;
            ATerm j_25 = NULL;
            t = SSLgetAnnotations(not_null(e_25));
            {
              j_25 = t;
              if(((i_25 != NULL) && (i_25 != j_25)))
                _fail(j_25);
              else
                i_25 = j_25;
            }
            {
              t = not_null(f_25);
              {
                ATerm m_25 = NULL;
                t = v_0(t);
                {
                  k_25 = t;
                  {
                    ATerm n_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(k_25)), not_null(i_25));
                    {
                      n_25 = t;
                      if(((m_25 != NULL) && (m_25 != n_25)))
                        _fail(n_25);
                      else
                        m_25 = n_25;
                    }
                    t = not_null(m_25);
                  }
                }
              }
            }
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm q_25 = NULL,s_25 = NULL;
              ATerm r_25 = NULL;
              t = SSLgetAnnotations(not_null(e_25));
              {
                r_25 = t;
                if(((q_25 != NULL) && (q_25 != r_25)))
                  _fail(r_25);
                else
                  q_25 = r_25;
              }
              {
                t = not_null(f_25);
                {
                  ATerm u_25 = NULL;
                  t = v_0(t);
                  {
                    s_25 = t;
                    {
                      ATerm v_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(s_25)), not_null(q_25));
                      {
                        v_25 = t;
                        if(((u_25 != NULL) && (u_25 != v_25)))
                          _fail(v_25);
                        else
                          u_25 = v_25;
                      }
                      t = not_null(u_25);
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
ATerm Real_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Real_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = NULL,t_26 = NULL;
            ATerm s_26 = NULL;
            t = SSLgetAnnotations(not_null(n_26));
            {
              s_26 = t;
              if(((r_26 != NULL) && (r_26 != s_26)))
                _fail(s_26);
              else
                r_26 = s_26;
            }
            {
              t = not_null(o_26);
              {
                ATerm v_26 = NULL;
                t = u_0(t);
                {
                  t_26 = t;
                  {
                    ATerm w_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_26)), not_null(r_26));
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
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm z_26 = NULL,b_27 = NULL;
              ATerm a_27 = NULL;
              t = SSLgetAnnotations(not_null(n_26));
              {
                a_27 = t;
                if(((z_26 != NULL) && (z_26 != a_27)))
                  _fail(a_27);
                else
                  z_26 = a_27;
              }
              {
                t = not_null(o_26);
                {
                  ATerm d_27 = NULL;
                  t = u_0(t);
                  {
                    b_27 = t;
                    {
                      ATerm e_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(b_27)), not_null(z_26));
                      {
                        e_27 = t;
                        if(((d_27 != NULL) && (d_27 != e_27)))
                          _fail(e_27);
                        else
                          d_27 = e_27;
                      }
                      t = not_null(d_27);
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
ATerm Int_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Int_1))
    {
      x_27 = ATgetArgument(w_27, 0);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_28 = NULL,c_28 = NULL;
            ATerm b_28 = NULL;
            t = SSLgetAnnotations(not_null(w_27));
            {
              b_28 = t;
              if(((a_28 != NULL) && (a_28 != b_28)))
                _fail(b_28);
              else
                a_28 = b_28;
            }
            {
              t = not_null(x_27);
              {
                ATerm e_28 = NULL;
                t = s_0(t);
                {
                  c_28 = t;
                  {
                    ATerm f_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(c_28)), not_null(a_28));
                    {
                      f_28 = t;
                      if(((e_28 != NULL) && (e_28 != f_28)))
                        _fail(f_28);
                      else
                        e_28 = f_28;
                    }
                    t = not_null(e_28);
                  }
                }
              }
            }
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm i_28 = NULL,k_28 = NULL;
              ATerm j_28 = NULL;
              t = SSLgetAnnotations(not_null(w_27));
              {
                j_28 = t;
                if(((i_28 != NULL) && (i_28 != j_28)))
                  _fail(j_28);
                else
                  i_28 = j_28;
              }
              {
                t = not_null(x_27);
                {
                  ATerm m_28 = NULL;
                  t = s_0(t);
                  {
                    k_28 = t;
                    {
                      ATerm n_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(k_28)), not_null(i_28));
                      {
                        n_28 = t;
                        if(((m_28 != NULL) && (m_28 != n_28)))
                          _fail(n_28);
                        else
                          m_28 = n_28;
                      }
                      t = not_null(m_28);
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
ATerm Var_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_Var_1))
    {
      g_29 = ATgetArgument(f_29, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
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
                t = r_0(t);
                {
                  l_29 = t;
                  {
                    ATerm o_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_29)), not_null(j_29));
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
            ;
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm r_29 = NULL,t_29 = NULL;
              ATerm s_29 = NULL;
              t = SSLgetAnnotations(not_null(f_29));
              {
                s_29 = t;
                if(((r_29 != NULL) && (r_29 != s_29)))
                  _fail(s_29);
                else
                  r_29 = s_29;
              }
              {
                t = not_null(g_29);
                {
                  ATerm v_29 = NULL;
                  t = r_0(t);
                  {
                    t_29 = t;
                    {
                      ATerm w_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_29)), not_null(r_29));
                      {
                        w_29 = t;
                        if(((v_29 != NULL) && (v_29 != w_29)))
                          _fail(w_29);
                        else
                          v_29 = w_29;
                      }
                      t = not_null(v_29);
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
ATerm list_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm f_30 (ATerm t)
  {
    ATerm e_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = e_10;
        t = Cons_2(t, o_106, f_30);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_Build_1))
    {
      m_30 = ATgetArgument(l_30, 0);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(l_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(m_30);
          {
            ATerm t_30 = NULL;
            t = c_87(t);
            {
              r_30 = t;
              {
                ATerm u_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(r_30)), not_null(p_30));
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
                t = not_null(t_30);
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
  ATerm d_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_Fail_0))
    {
      ATerm f_31 = NULL,h_31 = NULL;
      ATerm k_10;
      k_10 = t;
      {
        ATerm g_31 = NULL;
        t = SSLgetAnnotations(not_null(d_31));
        {
          g_31 = t;
          if(((f_31 != NULL) && (f_31 != g_31)))
            _fail(g_31);
          else
            f_31 = g_31;
        }
      }
      t = k_10;
      {
        ATerm i_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(f_31));
        {
          i_31 = t;
          if(((h_31 != NULL) && (h_31 != i_31)))
            _fail(i_31);
          else
            h_31 = i_31;
        }
        t = not_null(h_31);
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
  ATerm q_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Id_0))
    {
      ATerm s_31 = NULL,u_31 = NULL;
      ATerm l_10;
      l_10 = t;
      {
        ATerm t_31 = NULL;
        t = SSLgetAnnotations(not_null(q_31));
        {
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
      }
      t = l_10;
      {
        ATerm v_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        t = not_null(u_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  ;
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm y_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm e_11 = t;
                          int f_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              ;
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
                                    ATerm q_1 (ATerm t)
                                    {
                                      ATerm r_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, r_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, q_1);
                                    ;
                                    LocalPopChoice(h_11);
                                  }
                                else
                                  {
                                    t = g_11;
                                    {
                                      ATerm i_11 = t;
                                      int p_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          ;
                                          LocalPopChoice(p_11);
                                        }
                                      else
                                        {
                                          t = i_11;
                                          {
                                            ATerm q_11 = t;
                                            int r_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                ;
                                                LocalPopChoice(r_11);
                                              }
                                            else
                                              {
                                                t = q_11;
                                                t = Str_1(t, _id);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                          return(t);
                        }
                        t = Build_1(t, p_1);
                        ;
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = y_10;
                        {
                          ATerm v_11 = t;
                          int w_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              ;
                              LocalPopChoice(w_11);
                            }
                          else
                            {
                              t = v_11;
                              {
                                ATerm x_11 = t;
                                int y_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    ;
                                    LocalPopChoice(y_11);
                                  }
                                else
                                  {
                                    t = x_11;
                                    {
                                      ATerm s_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, s_1);
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
ATerm RowLet_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Row_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm z_11 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = NULL;
            ATerm k_32 = NULL;
            t = not_null(g_32);
            {
              ATerm g_12 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_12;
                }
              {
                t = new_0(t);
                {
                  k_32 = t;
                  if(((j_32 != NULL) && (j_32 != k_32)))
                    _fail(k_32);
                  else
                    j_32 = k_32;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_32), (ATerm)ATempty, not_null(g_32))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(f_32), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_32)), (ATerm) ATempty)));
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = z_11;
            {
              t = not_null(g_32);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(f_32), not_null(g_32)));
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
ATerm MatrixScope_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Matrix_2))
    {
      v_32 = ATgetArgument(u_32, 0);
      w_32 = ATgetArgument(u_32, 1);
      {
        ATerm z_32 = NULL,a_33 = NULL;
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
        t = not_null(w_32);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              b_33 = t;
              s_32 :
              if(match_cons(b_33, sym__2))
                {
                  c_33 = ATgetArgument(b_33, 0);
                  d_33 = ATgetArgument(b_33, 1);
                  {
                    if(((z_32 != NULL) && (z_32 != c_33)))
                      _fail(c_33);
                    else
                      z_32 = c_33;
                    if(((a_33 != NULL) && (a_33 != d_33)))
                      _fail(d_33);
                    else
                      a_33 = d_33;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(z_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_12))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(a_33)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_112 (ATerm))
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym__2))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      {
        ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
        ATerm m_12;
        m_12 = t;
        {
          ATerm t_33 = NULL;
          ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
          t = h_112(t);
          {
            t_33 = t;
            {
              if(((q_33 != NULL) && (q_33 != t_33)))
                _fail(t_33);
              else
                q_33 = t_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_33), not_null(m_33), not_null(n_33));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_12 = t;
                    int o_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), term_p_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(o_12);
                      }
                    else
                      {
                        t = n_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_33 = t;
                      j_33 :
                      if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
                        {
                          v_33 = ATgetFirst((ATermList) u_33);
                          w_33 = (ATerm) ATgetNext((ATermList) u_33);
                          {
                            if(((r_33 != NULL) && (r_33 != v_33)))
                              _fail(v_33);
                            else
                              r_33 = v_33;
                            {
                              if(((s_33 != NULL) && (s_33 != w_33)))
                                _fail(w_33);
                              else
                                s_33 = w_33;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_33), term_p_12, (ATerm) ATinsert(CheckATermList(not_null(s_33)), (ATerm) ATinsert(CheckATermList(not_null(r_33)), not_null(m_33))));
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
        t = m_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  r_35 = t;
  b_34 :
  if(match_cons(r_35, sym_Row_3))
    {
      s_35 = ATgetArgument(r_35, 0);
      h_36 = ATgetArgument(r_35, 1);
      i_36 = ATgetArgument(r_35, 2);
      c_34 :
      if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
        {
          t_35 = ATgetFirst((ATermList) s_35);
          g_36 = (ATerm) ATgetNext((ATermList) s_35);
          d_34 :
          if(match_cons(t_35, sym_As_2))
            {
              u_35 = ATgetArgument(t_35, 0);
              v_35 = ATgetArgument(t_35, 1);
              e_34 :
              if(match_cons(v_35, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(g_36), not_null(h_36), not_null(i_36));
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
ATerm default_state_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = filter_1(t, WildPat_0);
  {
    g_37 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_37));
  }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm o_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_Wld_0))
    {
      ATerm h_38 = NULL;
      ATerm l_38 = NULL;
      t = q_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm i_38 = NULL,j_38 = NULL;
          i_38 = t;
          p_37 :
          if(match_cons(i_38, sym_Var_1))
            {
              j_38 = ATgetArgument(i_38, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_38)), term_q_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, t_1);
        {
          l_38 = t;
          if(((h_38 != NULL) && (h_38 != l_38)))
            _fail(l_38);
          else
            h_38 = l_38;
        }
      }
      t = not_null(h_38);
    }
  else
    {
      if(match_cons(e_38, sym_Int_1))
        {
          f_38 = ATgetArgument(e_38, 0);
          {
            ATerm n_38 = NULL,o_38 = NULL;
            t = o_0(t);
            {
              n_38 = t;
              t_37 :
              if(match_cons(n_38, sym_Int_1))
                {
                  o_38 = ATgetArgument(n_38, 0);
                  {
                    ATerm p_38 = NULL;
                    if(((f_38 != NULL) && (f_38 != o_38)))
                      _fail(o_38);
                    else
                      f_38 = o_38;
                    {
                      t = q_0(t);
                      {
                        p_38 = t;
                        s_37 :
                        if(((ATgetType(p_38) == AT_LIST) && ATisEmpty(p_38)))
                          {
                            {
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
              else
                {
                  _fail(t);
                }
            }
            t = (ATerm) ATempty;
          }
        }
      else
        {
          if(match_cons(e_38, sym_Real_1))
            {
              f_38 = ATgetArgument(e_38, 0);
              {
                ATerm r_38 = NULL,s_38 = NULL;
                t = o_0(t);
                {
                  r_38 = t;
                  w_37 :
                  if(match_cons(r_38, sym_Real_1))
                    {
                      s_38 = ATgetArgument(r_38, 0);
                      {
                        ATerm t_38 = NULL;
                        if(((f_38 != NULL) && (f_38 != s_38)))
                          _fail(s_38);
                        else
                          f_38 = s_38;
                        {
                          t = q_0(t);
                          {
                            t_38 = t;
                            v_37 :
                            if(((ATgetType(t_38) == AT_LIST) && ATisEmpty(t_38)))
                              {
                                {
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
                  else
                    {
                      _fail(t);
                    }
                }
                t = (ATerm) ATempty;
              }
            }
          else
            {
              if(match_cons(e_38, sym_Str_1))
                {
                  f_38 = ATgetArgument(e_38, 0);
                  {
                    ATerm v_38 = NULL,w_38 = NULL;
                    t = o_0(t);
                    {
                      v_38 = t;
                      z_37 :
                      if(match_cons(v_38, sym_Str_1))
                        {
                          w_38 = ATgetArgument(v_38, 0);
                          {
                            ATerm x_38 = NULL;
                            if(((f_38 != NULL) && (f_38 != w_38)))
                              _fail(w_38);
                            else
                              f_38 = w_38;
                            {
                              t = q_0(t);
                              {
                                x_38 = t;
                                y_37 :
                                if(((ATgetType(x_38) == AT_LIST) && ATisEmpty(x_38)))
                                  {
                                    {
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
                      else
                        {
                          _fail(t);
                        }
                    }
                    t = (ATerm) ATempty;
                  }
                }
              else
                {
                  if(match_cons(e_38, sym_Op_2))
                    {
                      f_38 = ATgetArgument(e_38, 0);
                      g_38 = ATgetArgument(e_38, 1);
                      {
                        ATerm a_39 = NULL;
                        ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
                        t = o_0(t);
                        {
                          b_39 = t;
                          c_38 :
                          if(match_cons(b_39, sym_Fun_2))
                            {
                              c_39 = ATgetArgument(b_39, 0);
                              d_39 = ATgetArgument(b_39, 1);
                              {
                                ATerm e_39 = NULL;
                                if(((f_38 != NULL) && (f_38 != c_39)))
                                  _fail(c_39);
                                else
                                  f_38 = c_39;
                                {
                                  if(((a_39 != NULL) && (a_39 != d_39)))
                                    _fail(d_39);
                                  else
                                    a_39 = d_39;
                                  {
                                    ATerm f_39 = NULL;
                                    t = not_null(g_38);
                                    {
                                      t = length_0(t);
                                      {
                                        f_39 = t;
                                        if(((e_39 != NULL) && (e_39 != f_39)))
                                          _fail(f_39);
                                        else
                                          e_39 = f_39;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(a_39));
                                      t = eq_0(t);
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
                        t = not_null(g_38);
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
  return(t);
}
ATerm ConsTransition_1 (ATerm t, ATerm h_127 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  m_40 = t;
  a_40 :
  if(match_cons(m_40, sym_Row_3))
    {
      n_40 = ATgetArgument(m_40, 0);
      x_40 = ATgetArgument(m_40, 1);
      y_40 = ATgetArgument(m_40, 2);
      k_40 :
      if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
        {
          o_40 = ATgetFirst((ATermList) n_40);
          w_40 = (ATerm) ATgetNext((ATermList) n_40);
          l_40 :
          if(match_cons(o_40, sym_As_2))
            {
              p_40 = ATgetArgument(o_40, 0);
              v_40 = ATgetArgument(o_40, 1);
              {
                ATerm m_41 = NULL,o_41 = NULL;
                ATerm r_12;
                r_12 = t;
                {
                  ATerm n_41 = NULL;
                  t = not_null(v_40);
                  {
                    t = h_127(t);
                    {
                      n_41 = t;
                      if(((m_41 != NULL) && (m_41 != n_41)))
                        _fail(n_41);
                      else
                        m_41 = n_41;
                    }
                  }
                }
                t = r_12;
                {
                  ATerm p_41 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), not_null(x_40));
                  {
                    t = conc_0(t);
                    {
                      p_41 = t;
                      if(((o_41 != NULL) && (o_41 != p_41)))
                        _fail(p_41);
                      else
                        o_41 = p_41;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(w_40), not_null(o_41), not_null(y_40));
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
ATerm Transition_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  q_43 = t;
  o_43 :
  if(match_cons(q_43, sym__2))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      p_43 :
      if(match_cons(s_43, sym__2))
        {
          t_43 = ATgetArgument(s_43, 0);
          u_43 = ATgetArgument(s_43, 1);
          {
            ATerm y_43 = NULL;
            ATerm z_43 = NULL;
            t = not_null(r_43);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(t_43);
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = not_null(u_43);
                    return(t);
                  }
                  t = MatchCons_2(t, w_1, x_1);
                  return(t);
                }
                t = ConsTransition_1(t, v_1);
                return(t);
              }
              t = filter_1(t, u_1);
              {
                z_43 = t;
                if(((y_43 != NULL) && (y_43 != z_43)))
                  _fail(z_43);
                else
                  y_43 = z_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(t_43), not_null(u_43), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(y_43)));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  f_44 = t;
  d_44 :
  if(match_cons(f_44, sym__2))
    {
      g_44 = ATgetArgument(f_44, 0);
      i_44 = ATgetArgument(f_44, 1);
      e_44 :
      if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
        {
          j_44 = ATgetFirst((ATermList) i_44);
          k_44 = (ATerm) ATgetNext((ATermList) i_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_44), not_null(j_44)), (ATerm) ATmakeAppl(sym__2, not_null(g_44), not_null(k_44)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  q_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      r_44 :
      if(((ATgetType(u_44) == AT_LIST) && ATisEmpty(u_44)))
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
ATerm rzip_1 (ATerm t, ATerm l_105 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, l_105);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(((ATgetType(a_45) == AT_LIST) && !(ATisEmpty(a_45))))
    {
      b_45 = ATgetFirst((ATermList) a_45);
      c_45 = (ATerm) ATgetNext((ATermList) a_45);
      {
        ATerm f_45 = NULL;
        ATerm h_45 = NULL;
        t = not_null(c_45);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm s_12 = t;
            if((PushChoice() == 0))
              {
                ATerm g_45 = NULL;
                g_45 = t;
                if(((b_45 != NULL) && (b_45 != g_45)))
                  _fail(g_45);
                else
                  b_45 = g_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_12;
              }
            return(t);
          }
          t = filter_1(t, y_1);
          {
            h_45 = t;
            if(((f_45 != NULL) && (f_45 != h_45)))
              _fail(h_45);
            else
              f_45 = h_45;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(f_45)), not_null(b_45));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm t_107 (ATerm))
{
  ATerm l_45 (ATerm t)
  {
    t = t_107(t);
    {
      ATerm t_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(x_12);
        }
      else
        {
          t = t_12;
          t = Cons_2(t, _id, l_45);
        }
    }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, z_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
    p_45 = t;
    n_45 :
    if(match_cons(p_45, sym_As_2))
      {
        q_45 = ATgetArgument(p_45, 0);
        s_45 = ATgetArgument(p_45, 1);
        o_45 :
        if(match_cons(q_45, sym_Off_1))
          {
            r_45 = ATgetArgument(q_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_45));
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
  t = map_1(t, a_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_l_12;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_y_12;
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  g_46 = t;
  c_46 :
  if(match_cons(g_46, sym_Row_3))
    {
      h_46 = ATgetArgument(g_46, 0);
      o_46 = ATgetArgument(g_46, 1);
      p_46 = ATgetArgument(g_46, 2);
      d_46 :
      if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
        {
          i_46 = ATgetFirst((ATermList) h_46);
          n_46 = (ATerm) ATgetNext((ATermList) h_46);
          e_46 :
          if(match_cons(i_46, sym_As_2))
            {
              j_46 = ATgetArgument(i_46, 0);
              k_46 = ATgetArgument(i_46, 1);
              f_46 :
              if(match_cons(k_46, sym_Str_1))
                {
                  l_46 = ATgetArgument(k_46, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(l_46)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(k_46, sym_Real_1))
                    {
                      l_46 = ATgetArgument(k_46, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(l_46)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(k_46, sym_Int_1))
                        {
                          l_46 = ATgetArgument(k_46, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(l_46)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(k_46, sym_Op_2))
                            {
                              l_46 = ATgetArgument(k_46, 0);
                              m_46 = ATgetArgument(k_46, 1);
                              {
                                ATerm v_46 = NULL,x_46 = NULL;
                                ATerm c_13;
                                c_13 = t;
                                {
                                  ATerm w_46 = NULL;
                                  t = not_null(m_46);
                                  {
                                    t = length_0(t);
                                    {
                                      w_46 = t;
                                      if(((v_46 != NULL) && (v_46 != w_46)))
                                        _fail(w_46);
                                      else
                                        v_46 = w_46;
                                    }
                                  }
                                }
                                t = c_13;
                                {
                                  ATerm y_46 = NULL;
                                  t = not_null(m_46);
                                  {
                                    t = offsets_0(t);
                                    {
                                      y_46 = t;
                                      if(((x_46 != NULL) && (x_46 != y_46)))
                                        _fail(y_46);
                                      else
                                        x_46 = y_46;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(l_46), not_null(v_46)), not_null(x_46));
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
ATerm filter_1 (ATerm t, ATerm f_116 (ATerm))
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, f_116);
              return(t);
            }
            t = Cons_2(t, f_116, d_2);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
              d_48 = t;
              w_47 :
              if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
                {
                  e_48 = ATgetFirst((ATermList) d_48);
                  f_48 = (ATerm) ATgetNext((ATermList) d_48);
                  {
                    t = not_null(f_48);
                    t = filter_1(t, f_116);
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
  return(t);
}
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
      p_48 = t;
      j_48 :
      if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
        {
          q_48 = ATgetFirst((ATermList) p_48);
          e_49 = (ATerm) ATgetNext((ATermList) p_48);
          k_48 :
          if(match_cons(q_48, sym_Row_3))
            {
              r_48 = ATgetArgument(q_48, 0);
              c_49 = ATgetArgument(q_48, 1);
              d_49 = ATgetArgument(q_48, 2);
              l_48 :
              if(((ATgetType(r_48) == AT_LIST) && !(ATisEmpty(r_48))))
                {
                  s_48 = ATgetFirst((ATermList) r_48);
                  b_49 = (ATerm) ATgetNext((ATermList) r_48);
                  m_48 :
                  if(match_cons(s_48, sym_As_2))
                    {
                      t_48 = ATgetArgument(s_48, 0);
                      a_49 = ATgetArgument(s_48, 1);
                      n_48 :
                      if(match_cons(t_48, sym_Off_1))
                        {
                          u_48 = ATgetArgument(t_48, 0);
                          t = not_null(u_48);
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
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        t = explode_string_0(t);
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_49 (ATerm t)
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, i_49);
                    ;
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    {
                      ATerm e_2 (ATerm t)
                      {
                        ATerm g_49 = NULL;
                        g_49 = t;
                        o_48 :
                        if(!(match_int(g_49, 47)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm f_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = Cons_2(t, e_2, f_2);
                    }
                  }
                return(t);
              }
              t = i_49(t);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              t = (ATerm) ATempty;
            }
          t = implode_string_0(t);
        }
      }
    }
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_Matrix_1))
    {
      w_49 = ATgetArgument(v_49, 0);
      {
        ATerm y_49 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL;
        ATerm m_50 = NULL;
        t = not_null(w_49);
        {
          ATerm r_50 = NULL;
          t = get_path_0(t);
          {
            m_50 = t;
            {
              if(((y_49 != NULL) && (y_49 != m_50)))
                _fail(m_50);
              else
                y_49 = m_50;
              {
                t = not_null(w_49);
                {
                  ATerm s_50 = NULL;
                  t = outedges_0(t);
                  {
                    r_50 = t;
                    {
                      if(((g_50 != NULL) && (g_50 != r_50)))
                        _fail(r_50);
                      else
                        g_50 = r_50;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_49), not_null(g_50));
                        {
                          ATerm w_50 = NULL;
                          t = transitions_0(t);
                          {
                            s_50 = t;
                            {
                              if(((h_50 != NULL) && (h_50 != s_50)))
                                _fail(s_50);
                              else
                                h_50 = s_50;
                              {
                                t = not_null(w_49);
                                {
                                  ATerm x_50 = NULL;
                                  t = default_state_0(t);
                                  {
                                    w_50 = t;
                                    {
                                      if(((i_50 != NULL) && (i_50 != w_50)))
                                        _fail(w_50);
                                      else
                                        i_50 = w_50;
                                      {
                                        t = new_0(t);
                                        {
                                          x_50 = t;
                                          {
                                            if(((l_50 != NULL) && (l_50 != x_50)))
                                              _fail(x_50);
                                            else
                                              l_50 = x_50;
                                            {
                                              ATerm v_13;
                                              v_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, not_null(w_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_13, not_null(l_50)));
                                                {
                                                  ATerm g_2 (ATerm t)
                                                  {
                                                    t = term_z_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, g_2);
                                                }
                                              }
                                              t = v_13;
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
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(l_50), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_49)), not_null(h_50), not_null(i_50));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  p_51 = t;
  j_51 :
  if(match_cons(p_51, sym_Row_3))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      u_51 = ATgetArgument(p_51, 2);
      k_51 :
      if(((ATgetType(r_51) == AT_LIST) && !(ATisEmpty(r_51))))
        {
          s_51 = ATgetFirst((ATermList) r_51);
          t_51 = (ATerm) ATgetNext((ATermList) r_51);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(q_51)), not_null(s_51)), not_null(t_51), not_null(u_51));
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
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  d_52 = t;
  c_52 :
  if(match_cons(d_52, sym_Matrix_1))
    {
      e_52 = ATgetArgument(d_52, 0);
      {
        ATerm g_52 = NULL;
        ATerm h_52 = NULL;
        t = not_null(e_52);
        {
          ATerm a_14 = t;
          if((PushChoice() == 0))
            {
              ATerm h_2 (ATerm t)
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm k_2 (ATerm t)
                    {
                      ATerm b_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = b_14;
                        }
                      return(t);
                    }
                    t = As_2(t, _id, k_2);
                    return(t);
                  }
                  t = Cons_2(t, j_2, _id);
                  return(t);
                }
                t = Row_3(t, i_2, _id, _id);
                return(t);
              }
              t = map_1(t, h_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_14;
            }
          {
            t = not_null(e_52);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                h_52 = t;
                if(((g_52 != NULL) && (g_52 != h_52)))
                  _fail(h_52);
                else
                  g_52 = h_52;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_52));
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
  ATerm o_52 = NULL;
  o_52 = t;
  n_52 :
  if(match_cons(o_52, sym_Wld_0))
    {
      ATerm q_52 = NULL,s_52 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm r_52 = NULL;
        t = SSLgetAnnotations(not_null(o_52));
        {
          r_52 = t;
          if(((q_52 != NULL) && (q_52 != r_52)))
            _fail(r_52);
          else
            q_52 = r_52;
        }
      }
      t = c_14;
      {
        ATerm t_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(q_52));
        {
          t_52 = t;
          if(((s_52 != NULL) && (s_52 != t_52)))
            _fail(t_52);
          else
            s_52 = t_52;
        }
        t = not_null(s_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  e_53 = t;
  d_53 :
  if(match_cons(e_53, sym_Row_3))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      h_53 = ATgetArgument(e_53, 2);
      {
        ATerm n_53 = NULL,p_53 = NULL;
        ATerm o_53 = NULL;
        t = SSLgetAnnotations(not_null(e_53));
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
        {
          t = not_null(f_53);
          {
            ATerm t_53 = NULL;
            t = z_91(t);
            {
              p_53 = t;
              {
                t = not_null(g_53);
                {
                  ATerm v_53 = NULL;
                  t = a_92(t);
                  {
                    t_53 = t;
                    {
                      t = not_null(h_53);
                      {
                        ATerm x_53 = NULL;
                        t = b_92(t);
                        {
                          v_53 = t;
                          {
                            ATerm y_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(p_53), not_null(t_53), not_null(v_53)), not_null(n_53));
                            {
                              y_53 = t;
                              if(((x_53 != NULL) && (x_53 != y_53)))
                                _fail(y_53);
                              else
                                x_53 = y_53;
                            }
                            t = not_null(x_53);
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
ATerm SkipWild_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym_Matrix_1))
    {
      j_54 = ATgetArgument(i_54, 0);
      {
        ATerm l_54 = NULL;
        ATerm m_54 = NULL;
        t = not_null(j_54);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm n_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, n_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, m_2, _id);
            return(t);
          }
          t = map_1(t, l_2);
          {
            m_54 = t;
            if(((l_54 != NULL) && (l_54 != m_54)))
              _fail(m_54);
            else
              l_54 = m_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(l_54));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym_Matrix_1))
    {
      k_55 = ATgetArgument(j_55, 0);
      {
        ATerm r_55 = NULL;
        ATerm x_55 = NULL;
        t = not_null(k_55);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
            s_55 = t;
            t_54 :
            if(match_cons(s_55, sym_Row_3))
              {
                t_55 = ATgetArgument(s_55, 0);
                u_55 = ATgetArgument(s_55, 1);
                v_55 = ATgetArgument(s_55, 2);
                u_54 :
                if(((ATgetType(t_55) == AT_LIST) && ATisEmpty(t_55)))
                  {
                    v_54 :
                    if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
                      {
                        t = not_null(v_55);
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
          t = map_1(t, o_2);
          {
            x_55 = t;
            if(((r_55 != NULL) && (r_55 != x_55)))
              _fail(x_55);
            else
              r_55 = x_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_55));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  ;
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  t = Mixture_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  c_56 :
  if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
    {
      e_56 = ATgetFirst((ATermList) d_56);
      f_56 = (ATerm) ATgetNext((ATermList) d_56);
      t = not_null(f_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      {
        ATerm n_14;
        n_14 = t;
        {
          ATerm q_56 = NULL;
          ATerm r_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_56), not_null(n_56));
          {
            ATerm r_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_14);
              }
            else
              {
                t = r_14;
                t = (ATerm) ATempty;
              }
            {
              r_56 = t;
              if(((q_56 != NULL) && (q_56 != r_56)))
                _fail(r_56);
              else
                q_56 = r_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_56), not_null(n_56), not_null(q_56));
            t = table_put_0(t);
          }
        }
        t = n_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm e_112 (ATerm))
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm i_57 = NULL;
    ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
    t = e_112(t);
    {
      i_57 = t;
      {
        if(((h_57 != NULL) && (h_57 != i_57)))
          _fail(i_57);
        else
          h_57 = i_57;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_57), term_p_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_57 = t;
            e_57 :
            if(((ATgetType(j_57) == AT_LIST) && !(ATisEmpty(j_57))))
              {
                k_57 = ATgetFirst((ATermList) j_57);
                l_57 = (ATerm) ATgetNext((ATermList) j_57);
                {
                  if(((g_57 != NULL) && (g_57 != k_57)))
                    _fail(k_57);
                  else
                    g_57 = k_57;
                  {
                    if(((f_57 != NULL) && (f_57 != l_57)))
                      _fail(l_57);
                    else
                      f_57 = l_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_57), term_p_12, not_null(f_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_57);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm m_57 = NULL;
                              m_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_57), not_null(m_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, p_2);
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
  }
  t = w_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_103 (ATerm), ATerm t_103 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_103(t);
      t = t_103(t);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        t = t_103(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_112 (ATerm))
{
  ATerm a_58 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm c_58 = NULL;
    ATerm d_58 = NULL;
    t = d_112(t);
    {
      c_58 = t;
      {
        if(((a_58 != NULL) && (a_58 != c_58)))
          _fail(c_58);
        else
          a_58 = c_58;
        {
          ATerm e_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_58), term_p_12);
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
              e_58 = t;
              if(((d_58 != NULL) && (d_58 != e_58)))
                _fail(e_58);
              else
                d_58 = e_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_58), term_p_12, (ATerm) ATinsert(CheckATermList(not_null(d_58)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm f_112 (ATerm), ATerm g_112 (ATerm))
{
  t = begin_scope_1(t, f_112);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, f_112);
      return(t);
    }
    t = restore_always_2(t, g_112, q_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm h_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          ;
          LocalPopChoice(l_15);
        }
      else
        {
          t = h_15;
          {
            ATerm m_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                ;
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, t_2);
    t = _all(t, s_2);
    return(t);
  }
  t = scope_2(t, r_2, s_2);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  y_58 :
  if(match_cons(z_58, sym_Cong_2))
    {
      a_59 = ATgetArgument(z_58, 0);
      b_59 = ATgetArgument(z_58, 1);
      {
        ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,e_60 = NULL,g_60 = NULL,i_60 = NULL;
        ATerm s_15;
        s_15 = t;
        {
          ATerm k_59 = NULL;
          t = not_null(b_59);
          {
            ATerm n_59 = NULL;
            t = map_1(t, new_0);
            {
              k_59 = t;
              {
                if(((h_59 != NULL) && (h_59 != k_59)))
                  _fail(k_59);
                else
                  h_59 = k_59;
                {
                  t = not_null(h_59);
                  {
                    ATerm o_59 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      ATerm l_59 = NULL;
                      ATerm m_59 = NULL;
                      m_59 = t;
                      if(((l_59 != NULL) && (l_59 != m_59)))
                        _fail(m_59);
                      else
                        l_59 = m_59;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_59));
                      return(t);
                    }
                    t = map_1(t, u_2);
                    {
                      n_59 = t;
                      {
                        if(((e_59 != NULL) && (e_59 != n_59)))
                          _fail(n_59);
                        else
                          e_59 = n_59;
                        {
                          ATerm p_59 = NULL;
                          t = new_0(t);
                          {
                            o_59 = t;
                            {
                              if(((f_59 != NULL) && (f_59 != o_59)))
                                _fail(o_59);
                              else
                                f_59 = o_59;
                              {
                                t = not_null(b_59);
                                {
                                  ATerm s_59 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    p_59 = t;
                                    {
                                      if(((i_59 != NULL) && (i_59 != p_59)))
                                        _fail(p_59);
                                      else
                                        i_59 = p_59;
                                      {
                                        t = not_null(i_59);
                                        {
                                          ATerm t_59 = NULL,d_60 = NULL;
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm q_59 = NULL;
                                            ATerm r_59 = NULL;
                                            r_59 = t;
                                            if(((q_59 != NULL) && (q_59 != r_59)))
                                              _fail(r_59);
                                            else
                                              q_59 = r_59;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_59));
                                            return(t);
                                          }
                                          t = map_1(t, v_2);
                                          {
                                            s_59 = t;
                                            {
                                              if(((g_59 != NULL) && (g_59 != s_59)))
                                                _fail(s_59);
                                              else
                                                g_59 = s_59;
                                              {
                                                ATerm u_59 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), not_null(i_59));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    u_59 = t;
                                                    if(((t_59 != NULL) && (t_59 != u_59)))
                                                      _fail(u_59);
                                                    else
                                                      t_59 = u_59;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_59), not_null(b_59));
                                                  {
                                                    ATerm w_2 (ATerm t)
                                                    {
                                                      ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
                                                      v_59 = t;
                                                      s_58 :
                                                      if(match_cons(v_59, sym__2))
                                                        {
                                                          w_59 = ATgetArgument(v_59, 0);
                                                          z_59 = ATgetArgument(v_59, 1);
                                                          t_58 :
                                                          if(match_cons(w_59, sym__2))
                                                            {
                                                              x_59 = ATgetArgument(w_59, 0);
                                                              y_59 = ATgetArgument(w_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59)))));
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
                                                    t = zip_1(t, w_2);
                                                    {
                                                      d_60 = t;
                                                      if(((j_59 != NULL) && (j_59 != d_60)))
                                                        _fail(d_60);
                                                      else
                                                        j_59 = d_60;
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
        t = s_15;
        {
          ATerm t_15;
          t_15 = t;
          {
            ATerm f_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), not_null(i_59));
            {
              t = conc_0(t);
              {
                f_60 = t;
                if(((e_60 != NULL) && (e_60 != f_60)))
                  _fail(f_60);
                else
                  e_60 = f_60;
              }
            }
          }
          t = t_15;
          {
            ATerm u_15;
            u_15 = t;
            {
              ATerm h_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_59), not_null(e_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_59))));
              {
                t = Mapp2_0(t);
                {
                  h_60 = t;
                  if(((g_60 != NULL) && (g_60 != h_60)))
                    _fail(h_60);
                  else
                    g_60 = h_60;
                }
              }
            }
            t = u_15;
            {
              ATerm j_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_59), not_null(g_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_59))));
              {
                t = Bapp2_0(t);
                {
                  j_60 = t;
                  if(((i_60 != NULL) && (i_60 != j_60)))
                    _fail(j_60);
                  else
                    i_60 = j_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_60)), not_null(f_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_59)), not_null(i_60))));
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
ATerm Bapp2_0 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL;
  p_61 = t;
  o_61 :
  if(match_cons(p_61, sym_Build_1))
    {
      q_61 = ATgetArgument(p_61, 0);
      {
        ATerm w_15 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
            ATerm w_61 = NULL;
            ATerm a_62 = NULL;
            t = new_0(t);
            {
              w_61 = t;
              {
                if(((u_61 != NULL) && (u_61 != w_61)))
                  _fail(w_61);
                else
                  u_61 = w_61;
                {
                  t = not_null(q_61);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
                      x_61 = t;
                      e_61 :
                      if(match_cons(x_61, sym_Anno_2))
                        {
                          y_61 = ATgetArgument(x_61, 0);
                          z_61 = ATgetArgument(x_61, 1);
                          {
                            if(((s_61 != NULL) && (s_61 != y_61)))
                              _fail(y_61);
                            else
                              s_61 = y_61;
                            {
                              if(((t_61 != NULL) && (t_61 != z_61)))
                                _fail(z_61);
                              else
                                t_61 = z_61;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, x_2);
                    {
                      a_62 = t;
                      if(((v_61 != NULL) && (v_61 != a_62)))
                        _fail(a_62);
                      else
                        v_61 = a_62;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_61)), not_null(s_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_61))));
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = w_15;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_62 = NULL,f_62 = NULL,g_62 = NULL;
                  ATerm h_62 = NULL;
                  ATerm k_62 = NULL;
                  t = new_0(t);
                  {
                    h_62 = t;
                    {
                      if(((f_62 != NULL) && (f_62 != h_62)))
                        _fail(h_62);
                      else
                        f_62 = h_62;
                      {
                        t = not_null(q_61);
                        {
                          ATerm y_2 (ATerm t)
                          {
                            ATerm i_62 = NULL,j_62 = NULL;
                            i_62 = t;
                            i_61 :
                            if(match_cons(i_62, sym_RootApp_1))
                              {
                                j_62 = ATgetArgument(i_62, 0);
                                {
                                  if(((c_62 != NULL) && (c_62 != j_62)))
                                    _fail(j_62);
                                  else
                                    c_62 = j_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_62));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_2);
                          {
                            k_62 = t;
                            if(((g_62 != NULL) && (g_62 != k_62)))
                              _fail(k_62);
                            else
                              g_62 = k_62;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_62))));
                  ;
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
                    ATerm v_62 = NULL;
                    ATerm z_62 = NULL;
                    t = new_0(t);
                    {
                      v_62 = t;
                      {
                        if(((t_62 != NULL) && (t_62 != v_62)))
                          _fail(v_62);
                        else
                          t_62 = v_62;
                        {
                          t = not_null(q_61);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
                              w_62 = t;
                              m_61 :
                              if(match_cons(w_62, sym_App_2))
                                {
                                  x_62 = ATgetArgument(w_62, 0);
                                  y_62 = ATgetArgument(w_62, 1);
                                  {
                                    if(((r_62 != NULL) && (r_62 != x_62)))
                                      _fail(x_62);
                                    else
                                      r_62 = x_62;
                                    {
                                      if(((s_62 != NULL) && (s_62 != y_62)))
                                        _fail(y_62);
                                      else
                                        s_62 = y_62;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_62));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_2);
                            {
                              z_62 = t;
                              if(((u_62 != NULL) && (u_62 != z_62)))
                                _fail(z_62);
                              else
                                u_62 = z_62;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_62), not_null(s_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_62)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_62))));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  y_63 :
  if(match_cons(b_64, sym__2))
    {
      c_64 = ATgetArgument(b_64, 0);
      d_64 = ATgetArgument(b_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_64)), not_null(c_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  o_64 = t;
  i_64 :
  if(match_cons(o_64, sym__2))
    {
      p_64 = ATgetArgument(o_64, 0);
      s_64 = ATgetArgument(o_64, 1);
      j_64 :
      if(((ATgetType(p_64) == AT_LIST) && !(ATisEmpty(p_64))))
        {
          q_64 = ATgetFirst((ATermList) p_64);
          r_64 = (ATerm) ATgetNext((ATermList) p_64);
          n_64 :
          if(((ATgetType(s_64) == AT_LIST) && !(ATisEmpty(s_64))))
            {
              t_64 = ATgetFirst((ATermList) s_64);
              u_64 = (ATerm) ATgetNext((ATermList) s_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_64), not_null(t_64)), (ATerm) ATmakeAppl(sym__2, not_null(r_64), not_null(u_64)));
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
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  c_65 :
  if(match_cons(f_65, sym__2))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      d_65 :
      if(((ATgetType(g_65) == AT_LIST) && ATisEmpty(g_65)))
        {
          e_65 :
          if(((ATgetType(h_65) == AT_LIST) && ATisEmpty(h_65)))
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
ATerm zip_1 (ATerm t, ATerm c_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  h_66 = t;
  a_66 :
  if(match_cons(h_66, sym_Call_2))
    {
      i_66 = ATgetArgument(h_66, 0);
      k_66 = ATgetArgument(h_66, 1);
      b_66 :
      if(match_cons(i_66, sym_SVar_1))
        {
          j_66 = ATgetArgument(i_66, 0);
          c_66 :
          if(match_string(j_66, "Anno_Cong__"))
            {
              d_66 :
              if(((ATgetType(k_66) == AT_LIST) && !(ATisEmpty(k_66))))
                {
                  l_66 = ATgetFirst((ATermList) k_66);
                  o_66 = (ATerm) ATgetNext((ATermList) k_66);
                  e_66 :
                  if(match_cons(l_66, sym_Cong_2))
                    {
                      m_66 = ATgetArgument(l_66, 0);
                      n_66 = ATgetArgument(l_66, 1);
                      f_66 :
                      if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
                        {
                          p_66 = ATgetFirst((ATermList) o_66);
                          q_66 = (ATerm) ATgetNext((ATermList) o_66);
                          g_66 :
                          if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
                            {
                              {
                                ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,y_67 = NULL,a_68 = NULL,c_68 = NULL;
                                ATerm i_16;
                                i_16 = t;
                                {
                                  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(n_66)), not_null(p_66));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      b_67 = t;
                                      w_65 :
                                      if(((ATgetType(b_67) == AT_LIST) && !(ATisEmpty(b_67))))
                                        {
                                          c_67 = ATgetFirst((ATermList) b_67);
                                          d_67 = (ATerm) ATgetNext((ATermList) b_67);
                                          {
                                            ATerm g_67 = NULL;
                                            if(((u_66 != NULL) && (u_66 != c_67)))
                                              _fail(c_67);
                                            else
                                              u_66 = c_67;
                                            {
                                              if(((y_66 != NULL) && (y_66 != d_67)))
                                                _fail(d_67);
                                              else
                                                y_66 = d_67;
                                              {
                                                ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
                                                ATerm a_3 (ATerm t)
                                                {
                                                  ATerm e_67 = NULL;
                                                  ATerm f_67 = NULL;
                                                  f_67 = t;
                                                  if(((e_67 != NULL) && (e_67 != f_67)))
                                                    _fail(f_67);
                                                  else
                                                    e_67 = f_67;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67));
                                                  return(t);
                                                }
                                                t = map_1(t, a_3);
                                                {
                                                  g_67 = t;
                                                  {
                                                    if(((v_66 != NULL) && (v_66 != g_67)))
                                                      _fail(g_67);
                                                    else
                                                      v_66 = g_67;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(n_66)), not_null(p_66));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          h_67 = t;
                                                          v_65 :
                                                          if(((ATgetType(h_67) == AT_LIST) && !(ATisEmpty(h_67))))
                                                            {
                                                              i_67 = ATgetFirst((ATermList) h_67);
                                                              j_67 = (ATerm) ATgetNext((ATermList) h_67);
                                                              {
                                                                ATerm m_67 = NULL;
                                                                if(((w_66 != NULL) && (w_66 != i_67)))
                                                                  _fail(i_67);
                                                                else
                                                                  w_66 = i_67;
                                                                {
                                                                  if(((z_66 != NULL) && (z_66 != j_67)))
                                                                    _fail(j_67);
                                                                  else
                                                                    z_66 = j_67;
                                                                  {
                                                                    ATerm n_67 = NULL,x_67 = NULL;
                                                                    ATerm b_3 (ATerm t)
                                                                    {
                                                                      ATerm k_67 = NULL;
                                                                      ATerm l_67 = NULL;
                                                                      l_67 = t;
                                                                      if(((k_67 != NULL) && (k_67 != l_67)))
                                                                        _fail(l_67);
                                                                      else
                                                                        k_67 = l_67;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, b_3);
                                                                    {
                                                                      m_67 = t;
                                                                      {
                                                                        if(((x_66 != NULL) && (x_66 != m_67)))
                                                                          _fail(m_67);
                                                                        else
                                                                          x_66 = m_67;
                                                                        {
                                                                          ATerm o_67 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), not_null(z_66));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              o_67 = t;
                                                                              if(((n_67 != NULL) && (n_67 != o_67)))
                                                                                _fail(o_67);
                                                                              else
                                                                                n_67 = o_67;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_67), (ATerm) ATinsert(CheckATermList(not_null(n_66)), not_null(p_66)));
                                                                            {
                                                                              ATerm c_3 (ATerm t)
                                                                              {
                                                                                ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
                                                                                p_67 = t;
                                                                                s_65 :
                                                                                if(match_cons(p_67, sym__2))
                                                                                  {
                                                                                    q_67 = ATgetArgument(p_67, 0);
                                                                                    t_67 = ATgetArgument(p_67, 1);
                                                                                    t_65 :
                                                                                    if(match_cons(q_67, sym__2))
                                                                                      {
                                                                                        r_67 = ATgetArgument(q_67, 0);
                                                                                        s_67 = ATgetArgument(q_67, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_67))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_67), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67)))));
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
                                                                              t = zip_1(t, c_3);
                                                                              {
                                                                                x_67 = t;
                                                                                if(((a_67 != NULL) && (a_67 != x_67)))
                                                                                  _fail(x_67);
                                                                                else
                                                                                  a_67 = x_67;
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
                                t = i_16;
                                {
                                  ATerm j_16;
                                  j_16 = t;
                                  {
                                    ATerm z_67 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), not_null(z_66));
                                    {
                                      t = conc_0(t);
                                      {
                                        z_67 = t;
                                        if(((y_67 != NULL) && (y_67 != z_67)))
                                          _fail(z_67);
                                        else
                                          y_67 = z_67;
                                      }
                                    }
                                  }
                                  t = j_16;
                                  {
                                    ATerm k_16;
                                    k_16 = t;
                                    {
                                      ATerm b_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_66), not_null(v_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_66))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          b_68 = t;
                                          if(((a_68 != NULL) && (a_68 != b_68)))
                                            _fail(b_68);
                                          else
                                            a_68 = b_68;
                                        }
                                      }
                                    }
                                    t = k_16;
                                    {
                                      ATerm d_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_66), not_null(x_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          d_68 = t;
                                          if(((c_68 != NULL) && (c_68 != d_68)))
                                            _fail(d_68);
                                          else
                                            c_68 = d_68;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(y_67)), not_null(w_66)), not_null(u_66)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_67)), not_null(c_68))));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_As_2))
    {
      y_68 = ATgetArgument(x_68, 0);
      z_68 = ATgetArgument(x_68, 1);
      {
        ATerm d_69 = NULL,f_69 = NULL;
        ATerm e_69 = NULL;
        t = SSLgetAnnotations(not_null(x_68));
        {
          e_69 = t;
          if(((d_69 != NULL) && (d_69 != e_69)))
            _fail(e_69);
          else
            d_69 = e_69;
        }
        {
          t = not_null(y_68);
          {
            ATerm h_69 = NULL;
            t = a_91(t);
            {
              f_69 = t;
              {
                t = not_null(z_68);
                {
                  ATerm j_69 = NULL;
                  t = b_91(t);
                  {
                    h_69 = t;
                    {
                      ATerm k_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(f_69), not_null(h_69)), not_null(d_69));
                      {
                        k_69 = t;
                        if(((j_69 != NULL) && (j_69 != k_69)))
                          _fail(k_69);
                        else
                          j_69 = k_69;
                      }
                      t = not_null(j_69);
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
ATerm Prim_2 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym_Prim_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        ATerm i_70 = NULL,k_70 = NULL;
        ATerm j_70 = NULL;
        t = SSLgetAnnotations(not_null(c_70));
        {
          j_70 = t;
          if(((i_70 != NULL) && (i_70 != j_70)))
            _fail(j_70);
          else
            i_70 = j_70;
        }
        {
          t = not_null(d_70);
          {
            ATerm m_70 = NULL;
            t = x_86(t);
            {
              k_70 = t;
              {
                t = not_null(e_70);
                {
                  ATerm o_70 = NULL;
                  t = y_86(t);
                  {
                    m_70 = t;
                    {
                      ATerm p_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(k_70), not_null(m_70)), not_null(i_70));
                      {
                        p_70 = t;
                        if(((o_70 != NULL) && (o_70 != p_70)))
                          _fail(p_70);
                        else
                          o_70 = p_70;
                      }
                      t = not_null(o_70);
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
ATerm Explode_2 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm))
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  a_71 :
  if(match_cons(b_71, sym_Explode_2))
    {
      c_71 = ATgetArgument(b_71, 0);
      d_71 = ATgetArgument(b_71, 1);
      {
        ATerm h_71 = NULL,j_71 = NULL;
        ATerm i_71 = NULL;
        t = SSLgetAnnotations(not_null(b_71));
        {
          i_71 = t;
          if(((h_71 != NULL) && (h_71 != i_71)))
            _fail(i_71);
          else
            h_71 = i_71;
        }
        {
          t = not_null(c_71);
          {
            ATerm l_71 = NULL;
            t = w_90(t);
            {
              j_71 = t;
              {
                t = not_null(d_71);
                {
                  ATerm n_71 = NULL;
                  t = x_90(t);
                  {
                    l_71 = t;
                    {
                      ATerm o_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(j_71), not_null(l_71)), not_null(h_71));
                      {
                        o_71 = t;
                        if(((n_71 != NULL) && (n_71 != o_71)))
                          _fail(o_71);
                        else
                          n_71 = o_71;
                      }
                      t = not_null(n_71);
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
ATerm Op_2 (ATerm t, ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL;
  a_72 = t;
  z_71 :
  if(match_cons(a_72, sym_Op_2))
    {
      b_72 = ATgetArgument(a_72, 0);
      c_72 = ATgetArgument(a_72, 1);
      {
        ATerm g_72 = NULL,i_72 = NULL;
        ATerm h_72 = NULL;
        t = SSLgetAnnotations(not_null(a_72));
        {
          h_72 = t;
          if(((g_72 != NULL) && (g_72 != h_72)))
            _fail(h_72);
          else
            g_72 = h_72;
        }
        {
          t = not_null(b_72);
          {
            ATerm k_72 = NULL;
            t = b_89(t);
            {
              i_72 = t;
              {
                t = not_null(c_72);
                {
                  ATerm m_72 = NULL;
                  t = c_89(t);
                  {
                    k_72 = t;
                    {
                      ATerm n_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_72), not_null(k_72)), not_null(g_72));
                      {
                        n_72 = t;
                        if(((m_72 != NULL) && (m_72 != n_72)))
                          _fail(n_72);
                        else
                          m_72 = n_72;
                      }
                      t = not_null(m_72);
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
ATerm pat_td_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_98(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm p_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                t = pat_td_1(t, s_98);
                return(t);
              }
              t = fetch_1(t, e_3);
              return(t);
            }
            t = Op_2(t, _id, d_3);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = p_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = pat_td_1(t, s_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_3);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
                  {
                    ATerm d_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          t = pat_td_1(t, s_98);
                          return(t);
                        }
                        t = Explode_2(t, g_3, _id);
                        ;
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = d_17;
                        {
                          ATerm p_17 = t;
                          int q_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
                                  return(t);
                                }
                                t = fetch_1(t, i_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, h_3);
                              ;
                              LocalPopChoice(q_17);
                            }
                          else
                            {
                              t = p_17;
                              {
                                ATerm j_3 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
                                  return(t);
                                }
                                t = As_2(t, _id, j_3);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  v_73 = t;
  u_73 :
  if(match_cons(v_73, sym_Match_1))
    {
      w_73 = ATgetArgument(v_73, 0);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
            ATerm g_74 = NULL;
            ATerm k_74 = NULL;
            t = new_0(t);
            {
              g_74 = t;
              {
                if(((a_74 != NULL) && (a_74 != g_74)))
                  _fail(g_74);
                else
                  a_74 = g_74;
                {
                  t = not_null(w_73);
                  {
                    ATerm k_3 (ATerm t)
                    {
                      ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
                      h_74 = t;
                      y_72 :
                      if(match_cons(h_74, sym_Anno_2))
                        {
                          i_74 = ATgetArgument(h_74, 0);
                          j_74 = ATgetArgument(h_74, 1);
                          {
                            if(((y_73 != NULL) && (y_73 != i_74)))
                              _fail(i_74);
                            else
                              y_73 = i_74;
                            {
                              if(((z_73 != NULL) && (z_73 != j_74)))
                                _fail(j_74);
                              else
                                z_73 = j_74;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_74)), not_null(y_73));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, k_3);
                    {
                      k_74 = t;
                      if(((b_74 != NULL) && (b_74 != k_74)))
                        _fail(k_74);
                      else
                        b_74 = k_74;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_74)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_73))))));
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
                  ATerm p_74 = NULL;
                  ATerm s_74 = NULL;
                  t = new_0(t);
                  {
                    p_74 = t;
                    {
                      if(((n_74 != NULL) && (n_74 != p_74)))
                        _fail(p_74);
                      else
                        n_74 = p_74;
                      {
                        t = not_null(w_73);
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm q_74 = NULL,r_74 = NULL;
                            q_74 = t;
                            c_73 :
                            if(match_cons(q_74, sym_RootApp_1))
                              {
                                r_74 = ATgetArgument(q_74, 0);
                                {
                                  if(((m_74 != NULL) && (m_74 != r_74)))
                                    _fail(r_74);
                                  else
                                    m_74 = r_74;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, l_3);
                          {
                            s_74 = t;
                            if(((o_74 != NULL) && (o_74 != s_74)))
                              _fail(s_74);
                            else
                              o_74 = s_74;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74))), not_null(m_74))));
                  ;
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  {
                    ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
                    ATerm y_74 = NULL;
                    ATerm m_75 = NULL;
                    t = new_0(t);
                    {
                      y_74 = t;
                      {
                        if(((w_74 != NULL) && (w_74 != y_74)))
                          _fail(y_74);
                        else
                          w_74 = y_74;
                        {
                          t = not_null(w_73);
                          {
                            ATerm m_3 (ATerm t)
                            {
                              ATerm z_74 = NULL,a_75 = NULL,l_75 = NULL;
                              z_74 = t;
                              n_73 :
                              if(match_cons(z_74, sym_App_2))
                                {
                                  a_75 = ATgetArgument(z_74, 0);
                                  l_75 = ATgetArgument(z_74, 1);
                                  {
                                    if(((v_74 != NULL) && (v_74 != a_75)))
                                      _fail(a_75);
                                    else
                                      v_74 = a_75;
                                    {
                                      if(((u_74 != NULL) && (u_74 != l_75)))
                                        _fail(l_75);
                                      else
                                        u_74 = l_75;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_74));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, m_3);
                            {
                              m_75 = t;
                              if(((x_74 != NULL) && (x_74 != m_75)))
                                _fail(m_75);
                              else
                                x_74 = m_75;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_74))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_74)), not_null(v_74)))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym_Cong_2))
    {
      y_76 = ATgetArgument(x_76, 0);
      z_76 = ATgetArgument(x_76, 1);
      {
        ATerm c_77 = NULL;
        ATerm g_77 = NULL;
        t = not_null(z_76);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm d_77 = NULL,e_77 = NULL;
            e_77 = t;
            u_76 :
            if(match_cons(e_77, sym_Match_1))
              {
                d_77 = ATgetArgument(e_77, 0);
                t = not_null(d_77);
              }
            else
              {
                if(match_cons(e_77, sym_Id_0))
                  {
                    t = term_q_12;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, n_3);
          {
            g_77 = t;
            if(((c_77 != NULL) && (c_77 != g_77)))
              _fail(g_77);
            else
              c_77 = g_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_76), not_null(c_77)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  o_77 = t;
  m_77 :
  if(match_cons(o_77, sym_Scope_2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      n_77 :
      if(((ATgetType(p_77) == AT_LIST) && ATisEmpty(p_77)))
        {
          t = not_null(q_77);
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
ATerm Idempotency_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  z_77 :
  if(match_cons(m_78, sym_Where_1))
    {
      n_78 = ATgetArgument(m_78, 0);
      a_78 :
      if(match_cons(n_78, sym_Seq_2))
        {
          l_78 = ATgetArgument(n_78, 0);
          h_78 = ATgetArgument(n_78, 1);
          b_78 :
          if(match_cons(l_78, sym_Where_1))
            {
              g_78 = ATgetArgument(l_78, 0);
              c_78 :
              if(match_cons(h_78, sym_Seq_2))
                {
                  i_78 = ATgetArgument(h_78, 0);
                  k_78 = ATgetArgument(h_78, 1);
                  d_78 :
                  if(match_cons(i_78, sym_Build_1))
                    {
                      j_78 = ATgetArgument(i_78, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_78)), not_null(k_78))));
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
          if(match_cons(n_78, sym_Where_1))
            {
              l_78 = ATgetArgument(n_78, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_78));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(m_78, sym_Test_1))
        {
          n_78 = ATgetArgument(m_78, 0);
          e_78 :
          if(match_cons(n_78, sym_Test_1))
            {
              l_78 = ATgetArgument(n_78, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_78));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_78, sym_Not_1))
            {
              n_78 = ATgetArgument(m_78, 0);
              f_78 :
              if(match_cons(n_78, sym_Not_1))
                {
                  l_78 = ATgetArgument(n_78, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_78));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(m_78, sym_LChoice_2))
                {
                  n_78 = ATgetArgument(m_78, 0);
                  o_78 = ATgetArgument(m_78, 1);
                  {
                    if(((n_78 != NULL) && (n_78 != o_78)))
                      _fail(o_78);
                    else
                      n_78 = o_78;
                    t = not_null(n_78);
                  }
                }
              else
                {
                  if(match_cons(m_78, sym_Choice_2))
                    {
                      n_78 = ATgetArgument(m_78, 0);
                      o_78 = ATgetArgument(m_78, 1);
                      {
                        if(((n_78 != NULL) && (n_78 != o_78)))
                          _fail(o_78);
                        else
                          n_78 = o_78;
                        t = not_null(n_78);
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
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
  k_79 = t;
  g_79 :
  if(match_cons(k_79, sym_LChoice_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      o_79 = ATgetArgument(k_79, 1);
      h_79 :
      if(match_cons(l_79, sym_LChoice_2))
        {
          m_79 = ATgetArgument(l_79, 0);
          n_79 = ATgetArgument(l_79, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_79), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_79), not_null(o_79)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(k_79, sym_Seq_2))
        {
          l_79 = ATgetArgument(k_79, 0);
          o_79 = ATgetArgument(k_79, 1);
          i_79 :
          if(match_cons(l_79, sym_Seq_2))
            {
              m_79 = ATgetArgument(l_79, 0);
              n_79 = ATgetArgument(l_79, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_79), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_79), not_null(o_79)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_79, sym_Choice_2))
            {
              l_79 = ATgetArgument(k_79, 0);
              o_79 = ATgetArgument(k_79, 1);
              j_79 :
              if(match_cons(l_79, sym_Choice_2))
                {
                  m_79 = ATgetArgument(l_79, 0);
                  n_79 = ATgetArgument(l_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_79), (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_79), not_null(o_79)));
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
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  m_82 = t;
  f_82 :
  if(match_cons(m_82, sym_Lets_2))
    {
      n_82 = ATgetArgument(m_82, 0);
      o_82 = ATgetArgument(m_82, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_82), not_null(o_82));
    }
  else
    {
      if(match_cons(m_82, sym_LChoices_1))
        {
          n_82 = ATgetArgument(m_82, 0);
          g_82 :
          if(((ATgetType(n_82) == AT_LIST) && !(ATisEmpty(n_82))))
            {
              j_82 = ATgetFirst((ATermList) n_82);
              k_82 = (ATerm) ATgetNext((ATermList) n_82);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_82), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_82)));
            }
          else
            {
              if(((ATgetType(n_82) == AT_LIST) && ATisEmpty(n_82)))
                {
                  t = term_d_18;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(m_82, sym_Choices_1))
            {
              n_82 = ATgetArgument(m_82, 0);
              h_82 :
              if(((ATgetType(n_82) == AT_LIST) && !(ATisEmpty(n_82))))
                {
                  j_82 = ATgetFirst((ATermList) n_82);
                  k_82 = (ATerm) ATgetNext((ATermList) n_82);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_82), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_82)));
                }
              else
                {
                  if(((ATgetType(n_82) == AT_LIST) && ATisEmpty(n_82)))
                    {
                      t = term_d_18;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(m_82, sym_Seqs_1))
                {
                  n_82 = ATgetArgument(m_82, 0);
                  i_82 :
                  if(((ATgetType(n_82) == AT_LIST) && !(ATisEmpty(n_82))))
                    {
                      j_82 = ATgetFirst((ATermList) n_82);
                      k_82 = (ATerm) ATgetNext((ATermList) n_82);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_82), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_82)));
                    }
                  else
                    {
                      if(((ATgetType(n_82) == AT_LIST) && ATisEmpty(n_82)))
                        {
                          t = term_f_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(m_82, sym_DefaultVarDec_1))
                    {
                      n_82 = ATgetArgument(m_82, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_82), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_18), term_k_18));
                    }
                  else
                    {
                      if(match_cons(m_82, sym_InfixApp_3))
                        {
                          n_82 = ATgetArgument(m_82, 0);
                          o_82 = ATgetArgument(m_82, 1);
                          l_82 = ATgetArgument(m_82, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_82), (ATerm) ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_82)), not_null(n_82))));
                        }
                      else
                        {
                          if(match_cons(m_82, sym_BAM_3))
                            {
                              n_82 = ATgetArgument(m_82, 0);
                              o_82 = ATgetArgument(m_82, 1);
                              l_82 = ATgetArgument(m_82, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_82))), not_null(n_82)), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_82))));
                            }
                          else
                            {
                              if(match_cons(m_82, sym_AM_2))
                                {
                                  n_82 = ATgetArgument(m_82, 0);
                                  o_82 = ATgetArgument(m_82, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_82), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_82)));
                                }
                              else
                                {
                                  if(match_cons(m_82, sym_MA_2))
                                    {
                                      n_82 = ATgetArgument(m_82, 0);
                                      o_82 = ATgetArgument(m_82, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_82)), not_null(o_82));
                                    }
                                  else
                                    {
                                      if(match_cons(m_82, sym_BA_2))
                                        {
                                          n_82 = ATgetArgument(m_82, 0);
                                          o_82 = ATgetArgument(m_82, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_82)), not_null(n_82));
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
ATerm F15_0 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  f_86 = t;
  d_86 :
  if(match_cons(f_86, sym_Where_1))
    {
      g_86 = ATgetArgument(f_86, 0);
      e_86 :
      if(match_cons(g_86, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F14_0 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  j_86 :
  if(match_cons(l_86, sym_LChoice_2))
    {
      m_86 = ATgetArgument(l_86, 0);
      n_86 = ATgetArgument(l_86, 1);
      k_86 :
      if(match_cons(n_86, sym_Fail_0))
        {
          t = not_null(m_86);
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
ATerm F13_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,z_86 = NULL;
  t_86 = t;
  r_86 :
  if(match_cons(t_86, sym_LChoice_2))
    {
      u_86 = ATgetArgument(t_86, 0);
      z_86 = ATgetArgument(t_86, 1);
      s_86 :
      if(match_cons(u_86, sym_Fail_0))
        {
          t = not_null(z_86);
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
ATerm F12_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  e_87 :
  if(match_cons(i_87, sym_Choice_2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      h_87 :
      if(match_cons(k_87, sym_Fail_0))
        {
          t = not_null(j_87);
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
ATerm F11_0 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  o_87 :
  if(match_cons(q_87, sym_Choice_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      p_87 :
      if(match_cons(r_87, sym_Fail_0))
        {
          t = not_null(s_87);
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
ATerm F10_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym_Cong_2))
    {
      z_87 = ATgetArgument(y_87, 0);
      a_88 = ATgetArgument(y_87, 1);
      {
        t = not_null(a_88);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm d_88 = NULL;
            d_88 = t;
            w_87 :
            if(!(match_cons(d_88, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
        }
        t = term_d_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  q_88 = t;
  o_88 :
  if(match_cons(q_88, sym_Path_2))
    {
      r_88 = ATgetArgument(q_88, 0);
      s_88 = ATgetArgument(q_88, 1);
      p_88 :
      if(match_cons(s_88, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F8_0 (ATerm t)
{
  ATerm a_89 = NULL,d_89 = NULL;
  a_89 = t;
  y_88 :
  if(match_cons(a_89, sym_One_1))
    {
      d_89 = ATgetArgument(a_89, 0);
      z_88 :
      if(match_cons(d_89, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F7_0 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL;
  i_89 = t;
  g_89 :
  if(match_cons(i_89, sym_Some_1))
    {
      j_89 = ATgetArgument(i_89, 0);
      h_89 :
      if(match_cons(j_89, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F6_0 (ATerm t)
{
  ATerm o_89 = NULL,q_89 = NULL,s_89 = NULL;
  o_89 = t;
  m_89 :
  if(match_cons(o_89, sym_Rec_2))
    {
      q_89 = ATgetArgument(o_89, 0);
      s_89 = ATgetArgument(o_89, 1);
      n_89 :
      if(match_cons(s_89, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F5_0 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL;
  y_89 = t;
  w_89 :
  if(match_cons(y_89, sym_Scope_2))
    {
      z_89 = ATgetArgument(y_89, 0);
      a_90 = ATgetArgument(y_89, 1);
      x_89 :
      if(match_cons(a_90, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F3_0 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  e_90 :
  if(match_cons(g_90, sym_Seq_2))
    {
      h_90 = ATgetArgument(g_90, 0);
      i_90 = ATgetArgument(g_90, 1);
      f_90 :
      if(match_cons(h_90, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm F2_0 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL;
  p_90 = t;
  n_90 :
  if(match_cons(p_90, sym_Not_1))
    {
      q_90 = ATgetArgument(p_90, 0);
      o_90 :
      if(match_cons(q_90, sym_Fail_0))
        {
          t = term_f_18;
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
ATerm F1_0 (ATerm t)
{
  ATerm v_90 = NULL,y_90 = NULL;
  v_90 = t;
  t_90 :
  if(match_cons(v_90, sym_Test_1))
    {
      y_90 = ATgetArgument(v_90, 0);
      u_90 :
      if(match_cons(y_90, sym_Fail_0))
        {
          t = term_d_18;
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm r_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = r_18;
            {
              ATerm b_19 = t;
              int c_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(c_19);
                }
              else
                {
                  t = b_19;
                  {
                    ATerm d_19 = t;
                    int e_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(e_19);
                      }
                    else
                      {
                        t = d_19;
                        {
                          ATerm f_19 = t;
                          int g_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(g_19);
                            }
                          else
                            {
                              t = f_19;
                              {
                                ATerm h_19 = t;
                                int i_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(i_19);
                                  }
                                else
                                  {
                                    t = h_19;
                                    {
                                      ATerm j_19 = t;
                                      int p_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(p_19);
                                        }
                                      else
                                        {
                                          t = j_19;
                                          {
                                            ATerm q_19 = t;
                                            int r_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(r_19);
                                              }
                                            else
                                              {
                                                t = q_19;
                                                {
                                                  ATerm t_19 = t;
                                                  int v_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(v_19);
                                                    }
                                                  else
                                                    {
                                                      t = t_19;
                                                      {
                                                        ATerm w_19 = t;
                                                        int x_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(x_19);
                                                          }
                                                        else
                                                          {
                                                            t = w_19;
                                                            {
                                                              ATerm y_19 = t;
                                                              int z_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(z_19);
                                                                }
                                                              else
                                                                {
                                                                  t = y_19;
                                                                  {
                                                                    ATerm a_20 = t;
                                                                    int b_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(b_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_20;
                                                                        {
                                                                          ATerm c_20 = t;
                                                                          int d_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(d_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_20;
                                                                              t = F15_0(t);
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
ATerm I16_0 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL;
  f_91 = t;
  d_91 :
  if(match_cons(f_91, sym_Match_1))
    {
      g_91 = ATgetArgument(f_91, 0);
      e_91 :
      if(match_cons(g_91, sym_Wld_0))
        {
          t = term_f_18;
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
ATerm I12_0 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL;
  l_91 = t;
  j_91 :
  if(match_cons(l_91, sym_Where_1))
    {
      m_91 = ATgetArgument(l_91, 0);
      k_91 :
      if(match_cons(m_91, sym_Id_0))
        {
          t = term_f_18;
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
ATerm I10_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL;
  s_91 = t;
  q_91 :
  if(match_cons(s_91, sym_All_1))
    {
      t_91 = ATgetArgument(s_91, 0);
      r_91 :
      if(match_cons(t_91, sym_Id_0))
        {
          t = term_f_18;
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
ATerm I9_0 (ATerm t)
{
  ATerm y_91 = NULL,c_92 = NULL,d_92 = NULL;
  y_91 = t;
  w_91 :
  if(match_cons(y_91, sym_Rec_2))
    {
      c_92 = ATgetArgument(y_91, 0);
      d_92 = ATgetArgument(y_91, 1);
      x_91 :
      if(match_cons(d_92, sym_Id_0))
        {
          t = term_f_18;
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
ATerm I8_0 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  h_92 :
  if(match_cons(j_92, sym_Scope_2))
    {
      k_92 = ATgetArgument(j_92, 0);
      l_92 = ATgetArgument(j_92, 1);
      i_92 :
      if(match_cons(l_92, sym_Id_0))
        {
          t = term_f_18;
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
ATerm I7_0 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  p_92 :
  if(match_cons(r_92, sym_LChoice_2))
    {
      s_92 = ATgetArgument(r_92, 0);
      t_92 = ATgetArgument(r_92, 1);
      q_92 :
      if(match_cons(s_92, sym_Id_0))
        {
          t = term_f_18;
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
ATerm I4_0 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
  z_92 = t;
  x_92 :
  if(match_cons(z_92, sym_Seq_2))
    {
      a_93 = ATgetArgument(z_92, 0);
      b_93 = ATgetArgument(z_92, 1);
      y_92 :
      if(match_cons(b_93, sym_Id_0))
        {
          t = not_null(a_93);
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
ATerm I3_0 (ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  f_93 :
  if(match_cons(h_93, sym_Seq_2))
    {
      i_93 = ATgetArgument(h_93, 0);
      j_93 = ATgetArgument(h_93, 1);
      g_93 :
      if(match_cons(i_93, sym_Id_0))
        {
          t = not_null(j_93);
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
ATerm I2_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL;
  p_93 = t;
  n_93 :
  if(match_cons(p_93, sym_Not_1))
    {
      q_93 = ATgetArgument(p_93, 0);
      o_93 :
      if(match_cons(q_93, sym_Id_0))
        {
          t = term_d_18;
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
ATerm I1_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL;
  v_93 = t;
  t_93 :
  if(match_cons(v_93, sym_Test_1))
    {
      w_93 = ATgetArgument(v_93, 0);
      u_93 :
      if(match_cons(w_93, sym_Id_0))
        {
          t = term_f_18;
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
ATerm ElimId_0 (ATerm t)
{
  ATerm e_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = e_20;
      {
        ATerm k_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = k_20;
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  {
                    ATerm y_20 = t;
                    int z_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(z_20);
                      }
                    else
                      {
                        t = y_20;
                        {
                          ATerm a_21 = t;
                          int b_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(b_21);
                            }
                          else
                            {
                              t = a_21;
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    {
                                      ATerm l_21 = t;
                                      int m_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(m_21);
                                        }
                                      else
                                        {
                                          t = l_21;
                                          {
                                            ATerm x_21 = t;
                                            int z_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(z_21);
                                              }
                                            else
                                              {
                                                t = x_21;
                                                {
                                                  ATerm a_22 = t;
                                                  int b_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(b_22);
                                                    }
                                                  else
                                                    {
                                                      t = a_22;
                                                      t = I16_0(t);
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
ATerm Simplify_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            {
              ATerm k_22 = t;
              int p_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(p_22);
                }
              else
                {
                  t = k_22;
                  {
                    ATerm q_22 = t;
                    int s_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(s_22);
                      }
                    else
                      {
                        t = q_22;
                        {
                          ATerm t_22 = t;
                          int u_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(u_22);
                            }
                          else
                            {
                              t = t_22;
                              {
                                ATerm w_22 = t;
                                int y_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(y_22);
                                  }
                                else
                                  {
                                    t = w_22;
                                    {
                                      ATerm z_22 = t;
                                      int d_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(d_23);
                                        }
                                      else
                                        {
                                          t = z_22;
                                          {
                                            ATerm e_23 = t;
                                            int f_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(f_23);
                                              }
                                            else
                                              {
                                                t = e_23;
                                                t = TransformingCongruence_0(t);
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
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  n_95 = t;
  v_94 :
  if(match_cons(n_95, sym_LChoice_2))
    {
      o_95 = ATgetArgument(n_95, 0);
      v_95 = ATgetArgument(n_95, 1);
      w_94 :
      if(match_cons(o_95, sym_Matrix_2))
        {
          p_95 = ATgetArgument(o_95, 0);
          q_95 = ATgetArgument(o_95, 1);
          x_94 :
          if(match_cons(v_95, sym_Choice_2))
            {
              l_95 = ATgetArgument(v_95, 0);
              m_95 = ATgetArgument(v_95, 1);
              y_94 :
              if(match_cons(l_95, sym_Matrix_2))
                {
                  j_95 = ATgetArgument(l_95, 0);
                  k_95 = ATgetArgument(l_95, 1);
                  {
                    ATerm b_96 = NULL,d_96 = NULL;
                    ATerm g_23;
                    g_23 = t;
                    {
                      ATerm c_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(j_95));
                      {
                        t = union_0(t);
                        {
                          c_96 = t;
                          if(((b_96 != NULL) && (b_96 != c_96)))
                            _fail(c_96);
                          else
                            b_96 = c_96;
                        }
                      }
                    }
                    t = g_23;
                    {
                      ATerm e_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(k_95));
                      {
                        t = conc_0(t);
                        {
                          e_96 = t;
                          if(((d_96 != NULL) && (d_96 != e_96)))
                            _fail(e_96);
                          else
                            d_96 = e_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(b_96), not_null(d_96)), not_null(m_95));
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
              if(match_cons(v_95, sym_LChoice_2))
                {
                  l_95 = ATgetArgument(v_95, 0);
                  m_95 = ATgetArgument(v_95, 1);
                  z_94 :
                  if(match_cons(l_95, sym_Matrix_2))
                    {
                      j_95 = ATgetArgument(l_95, 0);
                      k_95 = ATgetArgument(l_95, 1);
                      {
                        ATerm k_96 = NULL,m_96 = NULL;
                        ATerm k_23;
                        k_23 = t;
                        {
                          ATerm l_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(j_95));
                          {
                            t = union_0(t);
                            {
                              l_96 = t;
                              if(((k_96 != NULL) && (k_96 != l_96)))
                                _fail(l_96);
                              else
                                k_96 = l_96;
                            }
                          }
                        }
                        t = k_23;
                        {
                          ATerm n_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(k_95));
                          {
                            t = conc_0(t);
                            {
                              n_96 = t;
                              if(((m_96 != NULL) && (m_96 != n_96)))
                                _fail(n_96);
                              else
                                m_96 = n_96;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(k_96), not_null(m_96)), not_null(m_95));
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
                  if(match_cons(v_95, sym_Matrix_2))
                    {
                      l_95 = ATgetArgument(v_95, 0);
                      m_95 = ATgetArgument(v_95, 1);
                      {
                        ATerm s_96 = NULL,u_96 = NULL;
                        ATerm l_23;
                        l_23 = t;
                        {
                          ATerm t_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(l_95));
                          {
                            t = union_0(t);
                            {
                              t_96 = t;
                              if(((s_96 != NULL) && (s_96 != t_96)))
                                _fail(t_96);
                              else
                                s_96 = t_96;
                            }
                          }
                        }
                        t = l_23;
                        {
                          ATerm v_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(m_95));
                          {
                            t = conc_0(t);
                            {
                              v_96 = t;
                              if(((u_96 != NULL) && (u_96 != v_96)))
                                _fail(v_96);
                              else
                                u_96 = v_96;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(s_96), not_null(u_96));
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
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(n_95, sym_Choice_2))
        {
          o_95 = ATgetArgument(n_95, 0);
          v_95 = ATgetArgument(n_95, 1);
          a_95 :
          if(match_cons(o_95, sym_Matrix_2))
            {
              p_95 = ATgetArgument(o_95, 0);
              q_95 = ATgetArgument(o_95, 1);
              b_95 :
              if(match_cons(v_95, sym_LChoice_2))
                {
                  l_95 = ATgetArgument(v_95, 0);
                  m_95 = ATgetArgument(v_95, 1);
                  c_95 :
                  if(match_cons(l_95, sym_Matrix_2))
                    {
                      j_95 = ATgetArgument(l_95, 0);
                      k_95 = ATgetArgument(l_95, 1);
                      {
                        ATerm b_97 = NULL,d_97 = NULL;
                        ATerm p_23;
                        p_23 = t;
                        {
                          ATerm c_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(j_95));
                          {
                            t = union_0(t);
                            {
                              c_97 = t;
                              if(((b_97 != NULL) && (b_97 != c_97)))
                                _fail(c_97);
                              else
                                b_97 = c_97;
                            }
                          }
                        }
                        t = p_23;
                        {
                          ATerm e_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(k_95));
                          {
                            t = conc_0(t);
                            {
                              e_97 = t;
                              if(((d_97 != NULL) && (d_97 != e_97)))
                                _fail(e_97);
                              else
                                d_97 = e_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(b_97), not_null(d_97)), not_null(m_95));
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
                  if(match_cons(v_95, sym_Choice_2))
                    {
                      l_95 = ATgetArgument(v_95, 0);
                      m_95 = ATgetArgument(v_95, 1);
                      d_95 :
                      if(match_cons(l_95, sym_Matrix_2))
                        {
                          j_95 = ATgetArgument(l_95, 0);
                          k_95 = ATgetArgument(l_95, 1);
                          {
                            ATerm k_97 = NULL,m_97 = NULL;
                            ATerm s_23;
                            s_23 = t;
                            {
                              ATerm l_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(j_95));
                              {
                                t = union_0(t);
                                {
                                  l_97 = t;
                                  if(((k_97 != NULL) && (k_97 != l_97)))
                                    _fail(l_97);
                                  else
                                    k_97 = l_97;
                                }
                              }
                            }
                            t = s_23;
                            {
                              ATerm n_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(k_95));
                              {
                                t = conc_0(t);
                                {
                                  n_97 = t;
                                  if(((m_97 != NULL) && (m_97 != n_97)))
                                    _fail(n_97);
                                  else
                                    m_97 = n_97;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(k_97), not_null(m_97)), not_null(m_95));
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
                      if(match_cons(v_95, sym_Matrix_2))
                        {
                          l_95 = ATgetArgument(v_95, 0);
                          m_95 = ATgetArgument(v_95, 1);
                          {
                            ATerm s_97 = NULL,u_97 = NULL;
                            ATerm t_23;
                            t_23 = t;
                            {
                              ATerm t_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(l_95));
                              {
                                t = union_0(t);
                                {
                                  t_97 = t;
                                  if(((s_97 != NULL) && (s_97 != t_97)))
                                    _fail(t_97);
                                  else
                                    s_97 = t_97;
                                }
                              }
                            }
                            t = t_23;
                            {
                              ATerm v_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(m_95));
                              {
                                t = conc_0(t);
                                {
                                  v_97 = t;
                                  if(((u_97 != NULL) && (u_97 != v_97)))
                                    _fail(v_97);
                                  else
                                    u_97 = v_97;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(s_97), not_null(u_97));
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
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(n_95, sym_Scope_2))
            {
              o_95 = ATgetArgument(n_95, 0);
              v_95 = ATgetArgument(n_95, 1);
              e_95 :
              if(match_cons(v_95, sym_Matrix_2))
                {
                  l_95 = ATgetArgument(v_95, 0);
                  m_95 = ATgetArgument(v_95, 1);
                  {
                    ATerm z_97 = NULL;
                    ATerm f_98 = NULL;
                    t = not_null(m_95);
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
                        a_98 = t;
                        t_94 :
                        if(match_cons(a_98, sym_Row_2))
                          {
                            b_98 = ATgetArgument(a_98, 0);
                            c_98 = ATgetArgument(a_98, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(b_98), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_95), not_null(c_98)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, p_3);
                      {
                        f_98 = t;
                        if(((z_97 != NULL) && (z_97 != f_98)))
                          _fail(f_98);
                        else
                          z_97 = f_98;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(l_95), not_null(z_97));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(n_95, sym_Seq_2))
                {
                  o_95 = ATgetArgument(n_95, 0);
                  v_95 = ATgetArgument(n_95, 1);
                  f_95 :
                  if(match_cons(o_95, sym_Matrix_2))
                    {
                      p_95 = ATgetArgument(o_95, 0);
                      q_95 = ATgetArgument(o_95, 1);
                      g_95 :
                      if(((ATgetType(q_95) == AT_LIST) && !(ATisEmpty(q_95))))
                        {
                          r_95 = ATgetFirst((ATermList) q_95);
                          u_95 = (ATerm) ATgetNext((ATermList) q_95);
                          h_95 :
                          if(match_cons(r_95, sym_Row_2))
                            {
                              s_95 = ATgetArgument(r_95, 0);
                              t_95 = ATgetArgument(r_95, 1);
                              i_95 :
                              if(((ATgetType(u_95) == AT_LIST) && ATisEmpty(u_95)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(p_95), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(s_95), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_95), not_null(v_95)))));
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
              else
                {
                  _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm))
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_110(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
        x_99 = t;
        w_99 :
        if(((ATgetType(x_99) == AT_LIST) && !(ATisEmpty(x_99))))
          {
            y_99 = ATgetFirst((ATermList) x_99);
            z_99 = (ATerm) ATgetNext((ATermList) x_99);
            {
              ATerm c_100 = NULL,e_100 = NULL;
              ATerm w_23;
              w_23 = t;
              {
                ATerm d_100 = NULL;
                t = not_null(y_99);
                {
                  t = a_111(t);
                  {
                    d_100 = t;
                    if(((c_100 != NULL) && (c_100 != d_100)))
                      _fail(d_100);
                    else
                      c_100 = d_100;
                  }
                }
              }
              t = w_23;
              {
                ATerm f_100 = NULL;
                t = not_null(z_99);
                {
                  t = foldr_3(t, y_110, z_110, a_111);
                  {
                    f_100 = t;
                    if(((e_100 != NULL) && (e_100 != f_100)))
                      _fail(f_100);
                    else
                      e_100 = f_100;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_100), not_null(e_100));
                  t = z_110(t);
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
ATerm crush_3 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm))
{
  ATerm p_100 = NULL;
  ATerm r_100 = NULL;
  p_100 = t;
  {
    ATerm s_100 = NULL;
    ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
    t = not_null(p_100);
    {
      s_100 = t;
      {
        t = SSL_explode_term(not_null(s_100));
        {
          u_100 = t;
          o_100 :
          if(match_cons(u_100, sym__2))
            {
              v_100 = ATgetArgument(u_100, 0);
              w_100 = ATgetArgument(u_100, 1);
              if(((r_100 != NULL) && (r_100 != w_100)))
                _fail(w_100);
              else
                r_100 = w_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_100);
      t = foldr_3(t, w_109, x_109, y_109);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_101 = NULL;
      ATerm c_101 = NULL;
      t = y_108(t);
      {
        c_101 = t;
        if(((b_101 != NULL) && (b_101 != c_101)))
          _fail(c_101);
        else
          b_101 = c_101;
      }
      t = (ATerm) ATinsert(ATempty, not_null(b_101));
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = collect_om_1(t, y_108);
          return(t);
        }
        t = crush_3(t, q_3, union_0, r_3);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm z_108 (ATerm))
{
  t = collect_om_1(t, z_108);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm g_101 = NULL,h_101 = NULL;
    g_101 = t;
    f_101 :
    if(match_cons(g_101, sym_Off_1))
      {
        h_101 = ATgetArgument(g_101, 0);
        t = not_null(h_101);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_1(t, s_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL;
  t_101 = t;
  m_101 :
  if(match_cons(t_101, sym_As_2))
    {
      u_101 = ATgetArgument(t_101, 0);
      w_101 = ATgetArgument(t_101, 1);
      n_101 :
      if(match_cons(u_101, sym_Var_1))
        {
          v_101 = ATgetArgument(u_101, 0);
          o_101 :
          if(match_cons(w_101, sym_As_2))
            {
              x_101 = ATgetArgument(w_101, 0);
              s_101 = ATgetArgument(w_101, 1);
              p_101 :
              if(match_cons(x_101, sym_Off_1))
                {
                  r_101 = ATgetArgument(x_101, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_101)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_101))));
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
          if(match_cons(u_101, sym_Off_1))
            {
              v_101 = ATgetArgument(u_101, 0);
              q_101 :
              if(match_cons(w_101, sym_Var_1))
                {
                  x_101 = ATgetArgument(w_101, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_101)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_101))));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL;
  o_102 = t;
  h_102 :
  if(match_cons(o_102, sym_As_2))
    {
      p_102 = ATgetArgument(o_102, 0);
      r_102 = ATgetArgument(o_102, 1);
      i_102 :
      if(match_cons(p_102, sym_Var_1))
        {
          q_102 = ATgetArgument(p_102, 0);
          j_102 :
          if(match_cons(r_102, sym_As_2))
            {
              s_102 = ATgetArgument(r_102, 0);
              n_102 = ATgetArgument(r_102, 1);
              k_102 :
              if(match_cons(s_102, sym_Off_1))
                {
                  m_102 = ATgetArgument(s_102, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(m_102)), not_null(n_102));
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
          if(match_cons(p_102, sym_Off_1))
            {
              q_102 = ATgetArgument(p_102, 0);
              l_102 :
              if(match_cons(r_102, sym_Var_1))
                {
                  s_102 = ATgetArgument(r_102, 0);
                  {
                    t = not_null(q_102);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_102)), term_q_12);
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
ATerm eq_0 (ATerm t)
{
  ATerm c_103 = NULL,e_103 = NULL,f_103 = NULL;
  c_103 = t;
  b_103 :
  if(match_cons(c_103, sym__2))
    {
      e_103 = ATgetArgument(c_103, 0);
      f_103 = ATgetArgument(c_103, 1);
      if(((e_103 != NULL) && (e_103 != f_103)))
        _fail(f_103);
      else
        e_103 = f_103;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_110 (ATerm), ATerm k_110 (ATerm))
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  l_103 = t;
  k_103 :
  if(((ATgetType(l_103) == AT_LIST) && !(ATisEmpty(l_103))))
    {
      m_103 = ATgetFirst((ATermList) l_103);
      n_103 = (ATerm) ATgetNext((ATermList) l_103);
      {
        t = k_110(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm q_103 = NULL;
            q_103 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_103), not_null(q_103));
              t = j_110(t);
            }
            return(t);
          }
          t = fetch_1(t, t_3);
        }
        t = not_null(n_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_110 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  a_104 = t;
  z_103 :
  if(match_cons(a_104, sym__2))
    {
      b_104 = ATgetArgument(a_104, 0);
      c_104 = ATgetArgument(a_104, 1);
      {
        t = not_null(b_104);
        {
          ATerm g_104 (ATerm t)
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_104);
                ;
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                {
                  ATerm f_24 = t;
                  int g_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(c_104);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_110, u_3);
                      t = g_104(t);
                      ;
                      LocalPopChoice(g_24);
                    }
                  else
                    {
                      t = f_24;
                      t = Cons_2(t, _id, g_104);
                    }
                }
              }
            return(t);
          }
          t = g_104(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_1 (ATerm t, ATerm h_110 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = union_1(t, h_110);
    return(t);
  }
  t = foldr_2(t, v_3, w_3);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  t = unions_1(t, eq_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
  l_104 = t;
  i_104 :
  if(match_cons(l_104, sym__2))
    {
      m_104 = ATgetArgument(l_104, 0);
      p_104 = ATgetArgument(l_104, 1);
      j_104 :
      if(match_cons(m_104, sym__2))
        {
          n_104 = ATgetArgument(m_104, 0);
          o_104 = ATgetArgument(m_104, 1);
          k_104 :
          if(match_cons(p_104, sym__2))
            {
              q_104 = ATgetArgument(p_104, 0);
              r_104 = ATgetArgument(p_104, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_104)), not_null(n_104)), (ATerm) ATinsert(CheckATermList(not_null(r_104)), not_null(o_104)));
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
  ATerm f_105 = NULL,g_105 = NULL,j_105 = NULL;
  f_105 = t;
  e_105 :
  if(((ATgetType(f_105) == AT_LIST) && !(ATisEmpty(f_105))))
    {
      g_105 = ATgetFirst((ATermList) f_105);
      j_105 = (ATerm) ATgetNext((ATermList) f_105);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), not_null(j_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_105 = NULL;
  q_105 = t;
  p_105 :
  if(((ATgetType(q_105) == AT_LIST) && ATisEmpty(q_105)))
    {
      t = term_h_24;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm h_105 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_105);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm l_108 (ATerm), ATerm m_108 (ATerm))
{
  ATerm g_106 = NULL;
  ATerm j_106 = NULL,l_106 = NULL,x_106 = NULL,z_106 = NULL,a_107 = NULL,d_107 = NULL,e_107 = NULL,r_107 = NULL;
  g_106 = t;
  {
    ATerm l_24;
    l_24 = t;
    {
      ATerm q_106 = NULL;
      ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
      t = not_null(g_106);
      {
        q_106 = t;
        {
          t = SSL_explode_term(not_null(q_106));
          {
            s_106 = t;
            v_105 :
            if(match_cons(s_106, sym__2))
              {
                t_106 = ATgetArgument(s_106, 0);
                u_106 = ATgetArgument(s_106, 1);
                {
                  if(((j_106 != NULL) && (j_106 != t_106)))
                    _fail(t_106);
                  else
                    j_106 = t_106;
                  if(((l_106 != NULL) && (l_106 != u_106)))
                    _fail(u_106);
                  else
                    l_106 = u_106;
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
    t = l_24;
    {
      ATerm n_24;
      n_24 = t;
      {
        ATerm y_106 = NULL;
        t = SSLgetAnnotations(not_null(g_106));
        {
          y_106 = t;
          if(((x_106 != NULL) && (x_106 != y_106)))
            _fail(y_106);
          else
            x_106 = y_106;
        }
      }
      t = n_24;
      {
        ATerm q_24;
        q_24 = t;
        {
          ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
          t = not_null(l_106);
          {
            t = unzip_1(t, l_108);
            {
              f_107 = t;
              d_106 :
              if(match_cons(f_107, sym__2))
                {
                  g_107 = ATgetArgument(f_107, 0);
                  h_107 = ATgetArgument(f_107, 1);
                  {
                    ATerm i_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL;
                    if(((a_107 != NULL) && (a_107 != g_107)))
                      _fail(g_107);
                    else
                      a_107 = g_107;
                    {
                      if(((z_106 != NULL) && (z_106 != h_107)))
                        _fail(h_107);
                      else
                        z_106 = h_107;
                      {
                        ATerm j_107 = NULL,n_107 = NULL;
                        ATerm r_24;
                        r_24 = t;
                        {
                          ATerm k_107 = NULL;
                          ATerm m_107 = NULL;
                          t = SSL_mkterm(not_null(j_106), not_null(a_107));
                          {
                            k_107 = t;
                            {
                              m_107 = t;
                              if(((j_107 != NULL) && (j_107 != m_107)))
                                _fail(m_107);
                              else
                                j_107 = m_107;
                            }
                          }
                        }
                        t = r_24;
                        {
                          t = SSLsetAnnotations(not_null(j_107), not_null(x_106));
                          {
                            n_107 = t;
                            if(((i_107 != NULL) && (i_107 != n_107)))
                              _fail(n_107);
                            else
                              i_107 = n_107;
                          }
                        }
                        {
                          t = not_null(i_107);
                          {
                            t = m_108(t);
                            {
                              o_107 = t;
                              c_106 :
                              if(match_cons(o_107, sym__2))
                                {
                                  p_107 = ATgetArgument(o_107, 0);
                                  q_107 = ATgetArgument(o_107, 1);
                                  {
                                    if(((d_107 != NULL) && (d_107 != p_107)))
                                      _fail(p_107);
                                    else
                                      d_107 = p_107;
                                    if(((e_107 != NULL) && (e_107 != q_107)))
                                      _fail(q_107);
                                    else
                                      e_107 = q_107;
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
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = q_24;
        {
          ATerm s_107 = NULL,w_107 = NULL;
          ATerm v_107 = NULL;
          t = not_null(z_106);
          {
            t = unions_0(t);
            {
              v_107 = t;
              if(((s_107 != NULL) && (s_107 != v_107)))
                _fail(v_107);
              else
                s_107 = v_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), not_null(s_107));
            {
              t = union_0(t);
              {
                w_107 = t;
                if(((r_107 != NULL) && (r_107 != w_107)))
                  _fail(w_107);
                else
                  r_107 = w_107;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_107), not_null(r_107));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm m_109 (ATerm), ATerm n_109 (ATerm))
{
  ATerm q_108 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm k_108 = NULL,o_108 = NULL;
      ATerm s_24;
      s_24 = t;
      {
        ATerm n_108 = NULL;
        t = try_1(t, m_109);
        {
          n_108 = t;
          if(((k_108 != NULL) && (k_108 != n_108)))
            _fail(n_108);
          else
            k_108 = n_108;
        }
      }
      t = s_24;
      {
        ATerm p_108 = NULL;
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_109(t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = (ATerm) ATempty;
          }
        {
          p_108 = t;
          if(((o_108 != NULL) && (o_108 != p_108)))
            _fail(p_108);
          else
            o_108 = p_108;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_108), not_null(o_108));
      }
      return(t);
    }
    t = CollectSplit_2(t, q_108, x_3);
    return(t);
  }
  t = q_108(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm w_108 = NULL,x_108 = NULL,a_109 = NULL;
  w_108 = t;
  v_108 :
  if(match_cons(w_108, sym__2))
    {
      x_108 = ATgetArgument(w_108, 0);
      a_109 = ATgetArgument(w_108, 1);
      {
        ATerm d_109 = NULL;
        ATerm e_109 = NULL;
        t = q_98(t);
        {
          e_109 = t;
          if(((d_109 != NULL) && (d_109 != e_109)))
            _fail(e_109);
          else
            d_109 = e_109;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(d_109)), not_null(x_108))), not_null(a_109));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
  j_109 = t;
  i_109 :
  if(match_cons(j_109, sym__2))
    {
      k_109 = ATgetArgument(j_109, 0);
      l_109 = ATgetArgument(j_109, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_109)), not_null(k_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL,i_110 = NULL,m_110 = NULL,n_110 = NULL;
  d_110 = t;
  z_109 :
  if(match_cons(d_110, sym__2))
    {
      e_110 = ATgetArgument(d_110, 0);
      i_110 = ATgetArgument(d_110, 1);
      a_110 :
      if(((ATgetType(i_110) == AT_LIST) && !(ATisEmpty(i_110))))
        {
          m_110 = ATgetFirst((ATermList) i_110);
          n_110 = (ATerm) ATgetNext((ATermList) i_110);
          {
            ATerm r_110 = NULL;
            ATerm s_110 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_110), term_y_12);
            {
              t = add_0(t);
              {
                s_110 = t;
                if(((r_110 != NULL) && (r_110 != s_110)))
                  _fail(s_110);
                else
                  r_110 = s_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_110), not_null(m_110)), (ATerm) ATmakeAppl(sym__2, not_null(r_110), not_null(n_110)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL;
  d_111 = t;
  b_111 :
  if(match_cons(d_111, sym__2))
    {
      e_111 = ATgetArgument(d_111, 0);
      f_111 = ATgetArgument(d_111, 1);
      c_111 :
      if(((ATgetType(f_111) == AT_LIST) && ATisEmpty(f_111)))
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
ATerm genzip_4 (ATerm t, ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm))
{
  ATerm i_111 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          t = y_104(t);
          {
            t = _2(t, a_105, i_111);
            t = z_104(t);
          }
        }
      }
    return(t);
  }
  t = i_111(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(k_111));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm i_105 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, i_105);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL;
  ATerm w_112 (ATerm t)
  {
    ATerm k_112 = NULL;
    ATerm l_112 = NULL;
    t = not_null(a_112);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(z_111);
          return(t);
        }
        t = Annotate_1(t, z_3);
        return(t);
      }
      t = nzip0_1(t, y_3);
      {
        l_112 = t;
        if(((k_112 != NULL) && (k_112 != l_112)))
          _fail(l_112);
        else
          k_112 = l_112;
      }
    }
    t = not_null(k_112);
    return(t);
  }
  ATerm x_112 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_111)), term_q_12);
    return(t);
  }
  ATerm y_112 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_111)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_111)), not_null(c_112)));
    return(t);
  }
  ATerm z_112 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_111)), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_112), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_111)), not_null(c_112))));
    return(t);
  }
  x_111 = t;
  s_111 :
  if(match_cons(x_111, sym_As_2))
    {
      y_111 = ATgetArgument(x_111, 0);
      a_112 = ATgetArgument(x_111, 1);
      t_111 :
      if(match_cons(y_111, sym_Off_1))
        {
          z_111 = ATgetArgument(y_111, 0);
          u_111 :
          if(match_cons(a_112, sym_BuildDefault_1))
            {
              b_112 = ATgetArgument(a_112, 0);
              {
                ATerm x_24 = t;
                int y_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_112(t);
                    ;
                    LocalPopChoice(y_24);
                  }
                else
                  {
                    t = x_24;
                    t = x_112(t);
                  }
              }
            }
          else
            {
              if(match_cons(a_112, sym_As_2))
                {
                  b_112 = ATgetArgument(a_112, 0);
                  c_112 = ATgetArgument(a_112, 1);
                  v_111 :
                  if(match_cons(b_112, sym_Var_1))
                    {
                      w_111 = ATgetArgument(b_112, 0);
                      {
                        ATerm z_24 = t;
                        int a_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_112(t);
                            ;
                            LocalPopChoice(a_25);
                          }
                        else
                          {
                            t = z_24;
                            t = y_112(t);
                          }
                      }
                    }
                  else
                    {
                      t = w_112(t);
                    }
                }
              else
                {
                  if(match_cons(a_112, sym_Op_2))
                    {
                      b_112 = ATgetArgument(a_112, 0);
                      c_112 = ATgetArgument(a_112, 1);
                      {
                        ATerm b_25 = t;
                        int c_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_112(t);
                            ;
                            LocalPopChoice(c_25);
                          }
                        else
                          {
                            t = b_25;
                            t = z_112(t);
                          }
                      }
                    }
                  else
                    {
                      t = w_112(t);
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
ATerm topdown_1 (ATerm t, ATerm l_100 (ATerm))
{
  t = l_100(t);
  {
    ATerm a_4 (ATerm t)
    {
      t = topdown_1(t, l_100);
      return(t);
    }
    t = _all(t, a_4);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm f_113 = NULL;
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL;
  f_113 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_g_25, (ATerm) ATinsert(ATempty, not_null(f_113)));
    {
      ATerm b_4 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, b_4);
      {
        t = collect_substitutions_0(t);
        {
          h_113 = t;
          e_113 :
          if(match_cons(h_113, sym__2))
            {
              i_113 = ATgetArgument(h_113, 0);
              j_113 = ATgetArgument(h_113, 1);
              {
                ATerm m_113 = NULL;
                ATerm n_113 = NULL;
                t = not_null(i_113);
                {
                  t = collect_offsets_0(t);
                  {
                    n_113 = t;
                    if(((m_113 != NULL) && (m_113 != n_113)))
                      _fail(n_113);
                    else
                      m_113 = n_113;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(m_113), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(i_113), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_113)))));
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
  return(t);
}
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL;
  t_113 = t;
  s_113 :
  if(match_cons(t_113, sym_Match_1))
    {
      u_113 = ATgetArgument(t_113, 0);
      {
        t = not_null(u_113);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm l_120 (ATerm))
{
  ATerm x_113 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      t = l_120(t);
      t = x_113(t);
      return(t);
    }
    t = try_1(t, c_4);
    return(t);
  }
  t = x_113(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_100 (ATerm))
{
  t = n_100(t);
  {
    ATerm d_4 (ATerm t)
    {
      t = downup_1(t, n_100);
      return(t);
    }
    t = _all(t, d_4);
    t = n_100(t);
  }
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm h_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = h_25;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                ;
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, i_4);
    return(t);
  }
  t = downup_1(t, e_4);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  {
    t = matrix_to_dfa_0(t);
    t = strename_0(t);
  }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL;
  f_114 = t;
  e_114 :
  if(match_cons(f_114, sym_SDef_3))
    {
      g_114 = ATgetArgument(f_114, 0);
      h_114 = ATgetArgument(f_114, 1);
      i_114 = ATgetArgument(f_114, 2);
      {
        ATerm n_114 = NULL,r_114 = NULL;
        ATerm o_114 = NULL;
        t = SSLgetAnnotations(not_null(f_114));
        {
          o_114 = t;
          if(((n_114 != NULL) && (n_114 != o_114)))
            _fail(o_114);
          else
            n_114 = o_114;
        }
        {
          t = not_null(g_114);
          {
            ATerm t_114 = NULL;
            t = l_88(t);
            {
              r_114 = t;
              {
                t = not_null(h_114);
                {
                  ATerm v_114 = NULL;
                  t = m_88(t);
                  {
                    t_114 = t;
                    {
                      t = not_null(i_114);
                      {
                        ATerm x_114 = NULL;
                        t = n_88(t);
                        {
                          v_114 = t;
                          {
                            ATerm y_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_114), not_null(t_114), not_null(v_114)), not_null(n_114));
                            {
                              y_114 = t;
                              if(((x_114 != NULL) && (x_114 != y_114)))
                                _fail(y_114);
                              else
                                x_114 = y_114;
                            }
                            t = not_null(x_114);
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
ATerm Strategies_1 (ATerm t, ATerm p_89 (ATerm))
{
  ATerm k_115 = NULL,l_115 = NULL;
  k_115 = t;
  j_115 :
  if(match_cons(k_115, sym_Strategies_1))
    {
      l_115 = ATgetArgument(k_115, 0);
      {
        ATerm o_115 = NULL,q_115 = NULL;
        ATerm p_115 = NULL;
        t = SSLgetAnnotations(not_null(k_115));
        {
          p_115 = t;
          if(((o_115 != NULL) && (o_115 != p_115)))
            _fail(p_115);
          else
            o_115 = p_115;
        }
        {
          t = not_null(l_115);
          {
            ATerm s_115 = NULL;
            t = p_89(t);
            {
              q_115 = t;
              {
                ATerm t_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_115)), not_null(o_115));
                {
                  t_115 = t;
                  if(((s_115 != NULL) && (s_115 != t_115)))
                    _fail(t_115);
                  else
                    s_115 = t_115;
                }
                t = not_null(s_115);
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
ATerm Specification_1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm d_116 = NULL,e_116 = NULL;
  d_116 = t;
  c_116 :
  if(match_cons(d_116, sym_Specification_1))
    {
      e_116 = ATgetArgument(d_116, 0);
      {
        ATerm i_116 = NULL,k_116 = NULL;
        ATerm j_116 = NULL;
        t = SSLgetAnnotations(not_null(d_116));
        {
          j_116 = t;
          if(((i_116 != NULL) && (i_116 != j_116)))
            _fail(j_116);
          else
            i_116 = j_116;
        }
        {
          t = not_null(e_116);
          {
            ATerm m_116 = NULL;
            t = r_89(t);
            {
              k_116 = t;
              {
                ATerm n_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_116)), not_null(i_116));
                {
                  n_116 = t;
                  if(((m_116 != NULL) && (m_116 != n_116)))
                    _fail(n_116);
                  else
                    m_116 = n_116;
                }
                t = not_null(m_116);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, p_98);
            return(t);
          }
          t = map_1(t, o_4);
          return(t);
        }
        t = Strategies_1(t, n_4);
        return(t);
      }
      t = Cons_2(t, m_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, k_4);
    return(t);
  }
  t = Specification_1(t, j_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm i_117 = NULL,j_117 = NULL,m_117 = NULL;
  i_117 = t;
  g_117 :
  if(match_cons(i_117, sym__2))
    {
      j_117 = ATgetArgument(i_117, 0);
      m_117 = ATgetArgument(i_117, 1);
      {
        ATerm q_117 = NULL,s_117 = NULL;
        ATerm r_117 = NULL;
        t = SSLgetAnnotations(not_null(i_117));
        {
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
        }
        {
          t = not_null(j_117);
          {
            ATerm u_117 = NULL;
            t = m_85(t);
            {
              s_117 = t;
              {
                t = not_null(m_117);
                {
                  ATerm w_117 = NULL;
                  t = n_85(t);
                  {
                    u_117 = t;
                    {
                      ATerm x_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_117), not_null(u_117)), not_null(q_117));
                      {
                        x_117 = t;
                        if(((w_117 != NULL) && (w_117 != x_117)))
                          _fail(x_117);
                        else
                          w_117 = x_117;
                      }
                      t = not_null(w_117);
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
  ATerm g_118 = NULL;
  ATerm t_25;
  t_25 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm h_118 = NULL,i_118 = NULL;
      h_118 = t;
      f_118 :
      if(match_cons(h_118, sym_Program_1))
        {
          i_118 = ATgetArgument(h_118, 0);
          if(((g_118 != NULL) && (g_118 != i_118)))
            _fail(i_118);
          else
            g_118 = i_118;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), not_null(g_118)), term_x_25));
      {
        t = printnl_0(t);
        {
          t = term_y_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL;
  m_118 = t;
  l_118 :
  if(match_cons(m_118, sym__2))
    {
      n_118 = ATgetArgument(m_118, 0);
      o_118 = ATgetArgument(m_118, 1);
      {
        ATerm z_25;
        z_25 = t;
        t = SSL_printnl(not_null(n_118), not_null(o_118));
        t = z_25;
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
  ATerm t_118 = NULL;
  t_118 = t;
  t = SSL_implode_string(not_null(t_118));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL;
        c_119 = t;
        b_119 :
        if(((ATgetType(c_119) == AT_LIST) && !(ATisEmpty(c_119))))
          {
            d_119 = ATgetFirst((ATermList) c_119);
            e_119 = (ATerm) ATgetNext((ATermList) c_119);
            {
              t = not_null(d_119);
              {
                ATerm q_4 (ATerm t)
                {
                  t = not_null(e_119);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_4);
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
  ATerm o_119 = NULL;
  ATerm q_119 = NULL;
  o_119 = t;
  {
    ATerm r_119 = NULL;
    ATerm t_119 = NULL,u_119 = NULL,w_119 = NULL;
    t = not_null(o_119);
    {
      r_119 = t;
      {
        t = SSL_explode_term(not_null(r_119));
        {
          t_119 = t;
          m_119 :
          if(match_cons(t_119, sym__2))
            {
              u_119 = ATgetArgument(t_119, 0);
              w_119 = ATgetArgument(t_119, 1);
              n_119 :
              if(match_string(u_119, ""))
                {
                  if(((q_119 != NULL) && (q_119 != w_119)))
                    _fail(w_119);
                  else
                    q_119 = w_119;
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
      t = not_null(q_119);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm a_120 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_120);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          t = Nil_0(t);
          t = b_107(t);
        }
      }
    return(t);
  }
  t = a_120(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
  d_120 = t;
  c_120 :
  if(match_cons(d_120, sym__2))
    {
      e_120 = ATgetArgument(d_120, 0);
      f_120 = ATgetArgument(d_120, 1);
      {
        t = not_null(e_120);
        {
          ATerm r_4 (ATerm t)
          {
            t = not_null(f_120);
            return(t);
          }
          t = at_end_1(t, r_4);
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
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_120 = NULL;
  k_120 = t;
  t = SSL_explode_string(not_null(k_120));
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
  ATerm q_120 = NULL;
  q_120 = t;
  t = SSL_is_string(not_null(q_120));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_4);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm z_120 = NULL,g_121 = NULL,h_121 = NULL;
              z_120 = t;
              y_120 :
              if(match_cons(z_120, sym_Path_1))
                {
                  g_121 = ATgetArgument(z_120, 0);
                  t = not_null(g_121);
                }
              else
                {
                  if(match_cons(z_120, sym_Var_1))
                    {
                      g_121 = ATgetArgument(z_120, 0);
                      {
                        t = not_null(g_121);
                        {
                          ATerm k_26 = t;
                          int l_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm t_4 (ATerm t)
                                {
                                  t = term_p_26;
                                  return(t);
                                }
                                t = debug_1(t, t_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_120, sym_Prefix_2))
                        {
                          g_121 = ATgetArgument(z_120, 0);
                          h_121 = ATgetArgument(z_120, 1);
                          {
                            ATerm m_121 = NULL,o_121 = NULL;
                            ATerm q_26;
                            q_26 = t;
                            {
                              ATerm n_121 = NULL;
                              t = not_null(g_121);
                              {
                                t = eval_config_0(t);
                                {
                                  n_121 = t;
                                  if(((m_121 != NULL) && (m_121 != n_121)))
                                    _fail(n_121);
                                  else
                                    m_121 = n_121;
                                }
                              }
                            }
                            t = q_26;
                            {
                              ATerm p_121 = NULL;
                              t = not_null(h_121);
                              {
                                t = eval_config_0(t);
                                {
                                  p_121 = t;
                                  if(((o_121 != NULL) && (o_121 != p_121)))
                                    _fail(p_121);
                                  else
                                    o_121 = p_121;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_121), not_null(o_121));
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
  ATerm x_121 = NULL;
  x_121 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_26, not_null(x_121));
    {
      t = table_get_0(t);
      {
        ATerm u_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_26;
            x_26 = t;
            {
              ATerm z_121 = NULL;
              ATerm a_122 = NULL;
              a_122 = t;
              if(((z_121 != NULL) && (z_121 != a_122)))
                _fail(a_122);
              else
                z_121 = a_122;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_26, not_null(x_121), not_null(z_121));
                t = table_put_0(t);
              }
            }
            t = x_26;
          }
          return(t);
        }
        t = try_1(t, u_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_114 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm y_26;
    y_26 = t;
    {
      ATerm e_122 = NULL;
      ATerm f_122 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          f_122 = t;
          if(((e_122 != NULL) && (e_122 != f_122)))
            _fail(f_122);
          else
            e_122 = f_122;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_122), term_f_27);
        t = geq_0(t);
      }
    }
    t = y_26;
    t = q_114(t);
    return(t);
  }
  t = try_1(t, v_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL;
  j_122 = t;
  i_122 :
  if(match_cons(j_122, sym__2))
    {
      k_122 = ATgetArgument(j_122, 0);
      l_122 = ATgetArgument(j_122, 1);
      t = SSL_WriteToTextFile(not_null(k_122), not_null(l_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL;
  r_122 = t;
  q_122 :
  if(match_cons(r_122, sym__2))
    {
      s_122 = ATgetArgument(r_122, 0);
      t_122 = ATgetArgument(r_122, 1);
      t = SSL_WriteToBinaryFile(not_null(s_122), not_null(t_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_123 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm c_123 = NULL,d_123 = NULL;
            c_123 = t;
            y_122 :
            if(match_cons(c_123, sym_Output_1))
              {
                d_123 = ATgetArgument(c_123, 0);
                if(((b_123 != NULL) && (b_123 != d_123)))
                  _fail(d_123);
                else
                  b_123 = d_123;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_4);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm e_123 = NULL;
            t = term_j_27;
            {
              e_123 = t;
              if(((b_123 != NULL) && (b_123 != e_123)))
                _fail(e_123);
              else
                b_123 = e_123;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_4, _id);
  }
  t = g_27;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(b_123);
        return(t);
      }
      t = split_2(t, z_4, _id);
      return(t);
    }
    t = _2(t, _id, y_4);
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_5 (ATerm t)
          {
            ATerm b_5 (ATerm t)
            {
              ATerm f_123 = NULL;
              f_123 = t;
              a_123 :
              if(!(match_cons(f_123, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_5);
            return(t);
          }
          t = _2(t, a_5, WriteToBinaryFile_0);
          ;
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm l_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL;
  ATerm m_27;
  m_27 = t;
  t = dtime_0(t);
  t = m_27;
  {
    t = o_124(t);
    {
      ATerm n_27;
      n_27 = t;
      {
        ATerm m_123 = NULL;
        t = dtime_0(t);
        {
          m_123 = t;
          if(((l_123 != NULL) && (l_123 != m_123)))
            _fail(m_123);
          else
            l_123 = m_123;
        }
      }
      t = n_27;
      {
        n_123 = t;
        k_123 :
        if(match_cons(n_123, sym__2))
          {
            o_123 = ATgetArgument(n_123, 0);
            p_123 = ATgetArgument(n_123, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_123)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_123))), not_null(p_123));
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
ATerm debug_1 (ATerm t, ATerm p_112 (ATerm))
{
  ATerm o_27;
  o_27 = t;
  {
    ATerm w_123 = NULL,y_123 = NULL;
    ATerm p_27;
    p_27 = t;
    {
      ATerm x_123 = NULL;
      t = p_112(t);
      {
        x_123 = t;
        if(((w_123 != NULL) && (w_123 != x_123)))
          _fail(x_123);
        else
          w_123 = x_123;
      }
    }
    t = p_27;
    {
      ATerm z_123 = NULL;
      z_123 = t;
      if(((y_123 != NULL) && (y_123 != z_123)))
        _fail(z_123);
      else
        y_123 = z_123;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_123)), not_null(w_123)));
        t = printnl_0(t);
      }
    }
  }
  t = o_27;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_124 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_124 = NULL;
      e_124 = t;
      {
        if(((d_124 != NULL) && (d_124 != e_124)))
          _fail(e_124);
        else
          d_124 = e_124;
        t = SSL_ReadFromFile(not_null(d_124));
      }
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm c_5 (ATerm t)
        {
          t = term_s_27;
          return(t);
        }
        t = debug_1(t, c_5);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_103 (ATerm), ATerm y_103 (ATerm))
{
  ATerm i_124 = NULL,k_124 = NULL;
  ATerm t_27;
  t_27 = t;
  {
    ATerm j_124 = NULL;
    t = x_103(t);
    {
      j_124 = t;
      if(((i_124 != NULL) && (i_124 != j_124)))
        _fail(j_124);
      else
        i_124 = j_124;
    }
  }
  t = t_27;
  {
    ATerm l_124 = NULL;
    t = y_103(t);
    {
      l_124 = t;
      if(((k_124 != NULL) && (k_124 != l_124)))
        _fail(l_124);
      else
        k_124 = l_124;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_124), not_null(k_124));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_124 = NULL;
  ATerm u_27;
  u_27 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 (ATerm t)
        {
          ATerm z_124 = NULL,a_125 = NULL;
          z_124 = t;
          r_124 :
          if(match_cons(z_124, sym_Input_1))
            {
              a_125 = ATgetArgument(z_124, 0);
              if(((x_124 != NULL) && (x_124 != a_125)))
                _fail(a_125);
              else
                x_124 = a_125;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_5);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm g_125 = NULL;
          t = term_d_28;
          {
            g_125 = t;
            if(((x_124 != NULL) && (x_124 != g_125)))
              _fail(g_125);
            else
              x_124 = g_125;
          }
        }
      }
  }
  t = u_27;
  {
    ATerm e_5 (ATerm t)
    {
      t = not_null(x_124);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_5);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm o_125 = NULL;
    o_125 = t;
    n_125 :
    if(!(match_string(o_125, "-v")))
      {
        if(!(match_string(o_125, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_l_28;
    t = set_config_0(t);
    t = term_o_28;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = Option_3(t, f_5, g_5, h_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm r_125 = NULL;
    r_125 = t;
    p_125 :
    if(!(match_string(r_125, "-k")))
      {
        if(!(match_string(r_125, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm q_28;
    q_28 = t;
    {
      ATerm s_125 = NULL;
      ATerm u_125 = NULL;
      t = string_to_int_0(t);
      {
        u_125 = t;
        if(((s_125 != NULL) && (s_125 != u_125)))
          _fail(u_125);
        else
          s_125 = u_125;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_28, not_null(s_125));
        t = set_config_0(t);
      }
    }
    t = q_28;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_s_28;
    return(t);
  }
  t = ArgOption_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_125 = NULL;
  x_125 = t;
  t = SSL_string_to_int(not_null(x_125));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm f_126 = NULL;
        f_126 = t;
        a_126 :
        if(!(match_string(f_126, "-S")))
          {
            if(!(match_string(f_126, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_v_28;
        t = set_config_0(t);
        t = term_w_28;
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_x_28;
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              ATerm g_126 = NULL;
              g_126 = t;
              b_126 :
              if(!(match_string(g_126, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_5 (ATerm t)
            {
              ATerm j_126 = NULL;
              ATerm a_29;
              a_29 = t;
              {
                ATerm h_126 = NULL;
                ATerm i_126 = NULL;
                t = string_to_int_0(t);
                {
                  i_126 = t;
                  if(((h_126 != NULL) && (h_126 != i_126)))
                    _fail(i_126);
                  else
                    h_126 = i_126;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(h_126));
                  t = set_config_0(t);
                }
              }
              t = a_29;
              {
                ATerm k_126 = NULL;
                k_126 = t;
                if(((j_126 != NULL) && (j_126 != k_126)))
                  _fail(k_126);
                else
                  j_126 = k_126;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_126));
              }
              return(t);
            }
            ATerm q_5 (ATerm t)
            {
              t = term_b_29;
              return(t);
            }
            t = ArgOption_3(t, o_5, p_5, q_5);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm r_5 (ATerm t)
              {
                ATerm l_126 = NULL;
                l_126 = t;
                e_126 :
                if(!(match_string(l_126, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm s_5 (ATerm t)
              {
                t = term_d_29;
                t = set_config_0(t);
                t = term_h_29;
                return(t);
              }
              ATerm t_5 (ATerm t)
              {
                t = term_i_29;
                return(t);
              }
              t = Option_3(t, r_5, s_5, t_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = m_29;
      {
        ATerm q_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = q_29;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm r_126 = NULL;
    r_126 = t;
    o_126 :
    if(!(match_string(r_126, "-o")))
      {
        if(!(match_string(r_126, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm a_127 = NULL;
    ATerm x_29;
    x_29 = t;
    {
      ATerm s_126 = NULL;
      ATerm z_126 = NULL;
      z_126 = t;
      if(((s_126 != NULL) && (s_126 != z_126)))
        _fail(z_126);
      else
        s_126 = z_126;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_29, not_null(s_126));
        t = set_config_0(t);
      }
    }
    t = x_29;
    {
      ATerm b_127 = NULL;
      b_127 = t;
      if(((a_127 != NULL) && (a_127 != b_127)))
        _fail(b_127);
      else
        a_127 = b_127;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_127));
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_z_29;
    return(t);
  }
  t = ArgOption_3(t, u_5, v_5, w_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm x_5 (ATerm t)
        {
          ATerm f_127 = NULL;
          f_127 = t;
          e_127 :
          if(!(match_string(f_127, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = term_d_30;
          t = set_config_0(t);
          t = term_e_30;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_g_30;
          return(t);
        }
        t = Option_3(t, x_5, y_5, z_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL;
  m_127 = t;
  k_127 :
  if(match_string(m_127, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_127) == AT_LIST) && !(ATisEmpty(m_127))))
        {
          n_127 = ATgetFirst((ATermList) m_127);
          o_127 = (ATerm) ATgetNext((ATermList) m_127);
          l_127 :
          if(((ATgetType(o_127) == AT_LIST) && !(ATisEmpty(o_127))))
            {
              p_127 = ATgetFirst((ATermList) o_127);
              q_127 = (ATerm) ATgetNext((ATermList) o_127);
              {
                ATerm w_127 = NULL;
                ATerm h_30;
                h_30 = t;
                {
                  t = not_null(n_127);
                  t = k_0(t);
                }
                t = h_30;
                {
                  ATerm x_127 = NULL;
                  t = not_null(p_127);
                  {
                    t = l_0(t);
                    {
                      x_127 = t;
                      if(((w_127 != NULL) && (w_127 != x_127)))
                        _fail(x_127);
                      else
                        w_127 = x_127;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_127)), not_null(w_127));
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
  ATerm a_6 (ATerm t)
  {
    ATerm e_128 = NULL;
    e_128 = t;
    b_128 :
    if(!(match_string(e_128, "-i")))
      {
        if(!(match_string(e_128, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm h_128 = NULL;
    ATerm i_30;
    i_30 = t;
    {
      ATerm f_128 = NULL;
      ATerm g_128 = NULL;
      g_128 = t;
      if(((f_128 != NULL) && (f_128 != g_128)))
        _fail(g_128);
      else
        f_128 = g_128;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(f_128));
        t = set_config_0(t);
      }
    }
    t = i_30;
    {
      ATerm i_128 = NULL;
      i_128 = t;
      if(((h_128 != NULL) && (h_128 != i_128)))
        _fail(i_128);
      else
        h_128 = i_128;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_128));
    }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_n_30;
    return(t);
  }
  t = ArgOption_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = o_30;
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, term_x_30));
  {
    t = printnl_0(t);
    {
      t = term_y_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_128 = NULL;
  m_128 = t;
  t = SSL_TicksToSeconds(not_null(m_128));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL;
  r_128 = t;
  q_128 :
  if(match_cons(r_128, sym__2))
    {
      s_128 = ATgetArgument(r_128, 0);
      t_128 = ATgetArgument(r_128, 1);
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_128), not_null(t_128));
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            t = SSL_addr(not_null(s_128), not_null(t_128));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_110 (ATerm), ATerm x_110 (ATerm))
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_110(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL;
        a_129 = t;
        z_128 :
        if(((ATgetType(a_129) == AT_LIST) && !(ATisEmpty(a_129))))
          {
            b_129 = ATgetFirst((ATermList) a_129);
            c_129 = (ATerm) ATgetNext((ATermList) a_129);
            {
              ATerm f_129 = NULL;
              ATerm g_129 = NULL;
              t = not_null(c_129);
              {
                t = foldr_2(t, w_110, x_110);
                {
                  g_129 = t;
                  if(((f_129 != NULL) && (f_129 != g_129)))
                    _fail(g_129);
                  else
                    f_129 = g_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_129), not_null(f_129));
                t = x_110(t);
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
ATerm crush_2 (ATerm t, ATerm u_109 (ATerm), ATerm v_109 (ATerm))
{
  ATerm n_129 = NULL;
  ATerm p_129 = NULL;
  n_129 = t;
  {
    ATerm q_129 = NULL;
    ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL;
    t = not_null(n_129);
    {
      q_129 = t;
      {
        t = SSL_explode_term(not_null(q_129));
        {
          s_129 = t;
          m_129 :
          if(match_cons(s_129, sym__2))
            {
              t_129 = ATgetArgument(s_129, 0);
              u_129 = ATgetArgument(s_129, 1);
              if(((p_129 != NULL) && (p_129 != u_129)))
                _fail(u_129);
              else
                p_129 = u_129;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_129);
      t = foldr_2(t, u_109, v_109);
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
    ATerm d_6 (ATerm t)
    {
      t = term_l_12;
      return(t);
    }
    t = crush_2(t, d_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL;
  a_130 = t;
  z_129 :
  if(match_cons(a_130, sym__2))
    {
      b_130 = ATgetArgument(a_130, 0);
      c_130 = ATgetArgument(a_130, 1);
      {
        ATerm e_31;
        e_31 = t;
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_130), not_null(c_130));
              ;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              t = SSL_gtr(not_null(b_130), not_null(c_130));
            }
        }
        t = e_31;
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
  ATerm i_130 = NULL;
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL;
      j_130 = t;
      h_130 :
      if(match_cons(j_130, sym__2))
        {
          k_130 = ATgetArgument(j_130, 0);
          l_130 = ATgetArgument(j_130, 1);
          {
            if(((i_130 != NULL) && (i_130 != k_130)))
              _fail(k_130);
            else
              i_130 = k_130;
            if(((i_130 != NULL) && (i_130 != l_130)))
              _fail(l_130);
            else
              i_130 = l_130;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_114 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm n_31;
    n_31 = t;
    {
      ATerm o_130 = NULL;
      ATerm p_130 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          p_130 = t;
          if(((o_130 != NULL) && (o_130 != p_130)))
            _fail(p_130);
          else
            o_130 = p_130;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_130), term_y_12);
        t = geq_0(t);
      }
    }
    t = n_31;
    t = p_114(t);
    return(t);
  }
  t = try_1(t, e_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm u_130 = NULL,w_130 = NULL;
    ATerm o_31;
    o_31 = t;
    {
      ATerm v_130 = NULL;
      t = run_time_0(t);
      {
        v_130 = t;
        if(((u_130 != NULL) && (u_130 != v_130)))
          _fail(v_130);
        else
          u_130 = v_130;
      }
    }
    t = o_31;
    {
      ATerm x_130 = NULL;
      t = term_r_31;
      {
        t = get_config_0(t);
        {
          x_130 = t;
          if(((w_130 != NULL) && (w_130 != x_130)))
            _fail(x_130);
          else
            w_130 = x_130;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_31), not_null(u_130)), term_w_31), not_null(w_130)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_6);
  {
    t = term_l_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_131 = NULL;
  e_131 = t;
  d_131 :
  if(match_cons(e_131, sym_Version_0))
    {
      ATerm g_131 = NULL,i_131 = NULL;
      ATerm y_31;
      y_31 = t;
      {
        ATerm h_131 = NULL;
        t = SSLgetAnnotations(not_null(e_131));
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
      }
      t = y_31;
      {
        ATerm j_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_131));
        {
          j_131 = t;
          if(((i_131 != NULL) && (i_131 != j_131)))
            _fail(j_131);
          else
            i_131 = j_131;
        }
        t = not_null(i_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_124 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_6);
  t = m_124(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_131 = NULL;
  o_131 = t;
  t = SSL_table_create(not_null(o_131));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_131 = NULL;
  s_131 = t;
  {
    ATerm h_32;
    h_32 = t;
    {
      t = term_i_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_32, term_l_32, not_null(s_131));
          t = table_put_0(t);
        }
      }
    }
    t = h_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_131 = NULL;
  x_131 = t;
  t = SSL_table_destroy(not_null(x_131));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_132 = NULL;
  b_132 = t;
  t = SSL_exit(not_null(b_132));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_132 = NULL,h_132 = NULL,i_132 = NULL;
  f_132 = t;
  e_132 :
  if(((ATgetType(f_132) == AT_LIST) && ATisEmpty(f_132)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_132) == AT_LIST) && !(ATisEmpty(f_132))))
        {
          h_132 = ATgetFirst((ATermList) f_132);
          i_132 = (ATerm) ATgetNext((ATermList) f_132);
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
  ATerm m_32;
  m_32 = t;
  {
    ATerm l_132 = NULL;
    ATerm o_132 = NULL;
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm m_132 = NULL;
          ATerm n_132 = NULL;
          n_132 = t;
          if(((m_132 != NULL) && (m_132 != n_132)))
            _fail(n_132);
          else
            m_132 = n_132;
          t = (ATerm) ATinsert(ATempty, not_null(m_132));
        }
      }
    {
      o_132 = t;
      if(((l_132 != NULL) && (l_132 != o_132)))
        _fail(o_132);
      else
        l_132 = o_132;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(l_132));
      t = printnl_0(t);
    }
  }
  t = m_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm r_132 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, m_106, r_132);
      }
    return(t);
  }
  t = r_132(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL;
  a_133 = t;
  x_132 :
  if(((ATgetType(a_133) == AT_LIST) && !(ATisEmpty(a_133))))
    {
      y_132 = ATgetFirst((ATermList) a_133);
      z_132 = (ATerm) ATgetNext((ATermList) a_133);
      {
        ATerm e_133 = NULL;
        t = not_null(z_132);
        {
          ATerm r_32;
          r_32 = t;
          {
            ATerm f_133 = NULL,h_133 = NULL,j_133 = NULL;
            ATerm x_32;
            x_32 = t;
            {
              ATerm g_133 = NULL;
              t = i_0(t);
              {
                g_133 = t;
                if(((f_133 != NULL) && (f_133 != g_133)))
                  _fail(g_133);
                else
                  f_133 = g_133;
              }
            }
            t = x_32;
            {
              ATerm i_133 = NULL;
              t = not_null(y_132);
              {
                t = g_0(t);
                {
                  i_133 = t;
                  if(((h_133 != NULL) && (h_133 != i_133)))
                    _fail(i_133);
                  else
                    h_133 = i_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_133)), not_null(h_133));
                {
                  j_133 = t;
                  if(((e_133 != NULL) && (e_133 != j_133)))
                    _fail(j_133);
                  else
                    e_133 = j_133;
                }
              }
            }
          }
          t = r_32;
          {
            ATerm h_6 (ATerm t)
            {
              t = not_null(e_133);
              return(t);
            }
            t = reverse_acc_2(t, g_0, h_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_133) == AT_LIST) && ATisEmpty(a_133)))
        {
          {
            t = term_h_28;
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
  ATerm i_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm v_133 = NULL,w_133 = NULL;
  v_133 = t;
  u_133 :
  if(match_cons(v_133, sym_Program_1))
    {
      w_133 = ATgetArgument(v_133, 0);
      {
        ATerm z_133 = NULL,b_134 = NULL;
        ATerm a_134 = NULL;
        t = SSLgetAnnotations(not_null(v_133));
        {
          a_134 = t;
          if(((z_133 != NULL) && (z_133 != a_134)))
            _fail(a_134);
          else
            z_133 = a_134;
        }
        {
          t = not_null(w_133);
          {
            ATerm d_134 = NULL;
            t = j_98(t);
            {
              b_134 = t;
              {
                ATerm e_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_134)), not_null(z_133));
                {
                  e_134 = t;
                  if(((d_134 != NULL) && (d_134 != e_134)))
                    _fail(e_134);
                  else
                    d_134 = e_134;
                }
                t = not_null(d_134);
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
  ATerm o_134 = NULL;
  ATerm y_32 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_134 = NULL;
      t = term_r_31;
      {
        t = get_config_0(t);
        {
          p_134 = t;
          if(((o_134 != NULL) && (o_134 != p_134)))
            _fail(p_134);
          else
            o_134 = p_134;
        }
      }
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = y_32;
      {
        ATerm j_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            ATerm q_134 = NULL;
            q_134 = t;
            if(((o_134 != NULL) && (o_134 != q_134)))
              _fail(q_134);
            else
              o_134 = q_134;
            return(t);
          }
          t = Program_1(t, k_6);
          return(t);
        }
        t = option_defined_1(t, j_6);
      }
    }
  {
    ATerm l_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        t = not_null(o_134);
        return(t);
      }
      t = short_description_1(t, m_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_6);
    {
      t = term_f_33;
      {
        t = echo_0(t);
        {
          t = term_i_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm r_134 = NULL;
                  ATerm s_134 = NULL;
                  s_134 = t;
                  if(((r_134 != NULL) && (r_134 != s_134)))
                    _fail(s_134);
                  else
                    r_134 = s_134;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_134)), term_o_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm t_134 = NULL;
                    ATerm v_134 = NULL;
                    ATerm p_6 (ATerm t)
                    {
                      t = not_null(o_134);
                      return(t);
                    }
                    t = long_description_1(t, p_6);
                    {
                      v_134 = t;
                      if(((t_134 != NULL) && (t_134 != v_134)))
                        _fail(v_134);
                      else
                        t_134 = v_134;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_134)), term_p_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_6);
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
  ATerm x_33;
  x_33 = t;
  {
    ATerm b_135 = NULL;
    ATerm c_135 = NULL;
    c_135 = t;
    if(((b_135 != NULL) && (b_135 != c_135)))
      _fail(c_135);
    else
      b_135 = c_135;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, not_null(b_135)));
      t = printnl_0(t);
    }
  }
  t = x_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm y_33;
  y_33 = t;
  {
    t = q_112(t);
    t = debug_0(t);
  }
  t = y_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm j_135 = NULL,k_135 = NULL;
  j_135 = t;
  i_135 :
  if(match_cons(j_135, sym_Undefined_1))
    {
      k_135 = ATgetArgument(j_135, 0);
      {
        ATerm n_135 = NULL,q_135 = NULL;
        ATerm o_135 = NULL;
        t = SSLgetAnnotations(not_null(j_135));
        {
          o_135 = t;
          if(((n_135 != NULL) && (n_135 != o_135)))
            _fail(o_135);
          else
            n_135 = o_135;
        }
        {
          t = not_null(k_135);
          {
            ATerm s_135 = NULL;
            t = k_98(t);
            {
              q_135 = t;
              {
                ATerm t_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_135)), not_null(n_135));
                {
                  t_135 = t;
                  if(((s_135 != NULL) && (s_135 != t_135)))
                    _fail(t_135);
                  else
                    s_135 = t_135;
                }
                t = not_null(s_135);
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
ATerm fetch_1 (ATerm t, ATerm v_106 (ATerm))
{
  ATerm y_135 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_106, _id);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = Cons_2(t, _id, y_135);
      }
    return(t);
  }
  t = y_135(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_125 (ATerm))
{
  t = fetch_1(t, t_125);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_136 = NULL;
  e_136 = t;
  d_136 :
  if(match_cons(e_136, sym_Help_0))
    {
      ATerm g_136 = NULL,i_136 = NULL;
      ATerm f_34;
      f_34 = t;
      {
        ATerm h_136 = NULL;
        t = SSLgetAnnotations(not_null(e_136));
        {
          h_136 = t;
          if(((g_136 != NULL) && (g_136 != h_136)))
            _fail(h_136);
          else
            g_136 = h_136;
        }
      }
      t = f_34;
      {
        ATerm j_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_136));
        {
          j_136 = t;
          if(((i_136 != NULL) && (i_136 != j_136)))
            _fail(j_136);
          else
            i_136 = j_136;
        }
        t = not_null(i_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_103 (ATerm))
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_103(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL;
  p_136 = t;
  o_136 :
  if(match_cons(p_136, sym__2))
    {
      q_136 = ATgetArgument(p_136, 0);
      r_136 = ATgetArgument(p_136, 1);
      t = SSL_table_get(not_null(q_136), not_null(r_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL,c_137 = NULL;
  z_136 = t;
  y_136 :
  if(match_cons(z_136, sym__3))
    {
      a_137 = ATgetArgument(z_136, 0);
      b_137 = ATgetArgument(z_136, 1);
      c_137 = ATgetArgument(z_136, 2);
      {
        ATerm i_34;
        i_34 = t;
        {
          ATerm g_137 = NULL;
          ATerm h_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_137), not_null(b_137));
          {
            ATerm j_34 = t;
            int k_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_34);
              }
            else
              {
                t = j_34;
                t = (ATerm) ATempty;
              }
            {
              h_137 = t;
              if(((g_137 != NULL) && (g_137 != h_137)))
                _fail(h_137);
              else
                g_137 = h_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_137), not_null(b_137), (ATerm) ATinsert(CheckATermList(not_null(g_137)), not_null(c_137)));
            t = table_put_0(t);
          }
        }
        t = i_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_126 (ATerm))
{
  ATerm m_137 = NULL;
  ATerm n_137 = NULL;
  t = term_h_28;
  {
    t = y_126(t);
    {
      n_137 = t;
      if(((m_137 != NULL) && (m_137 != n_137)))
        _fail(n_137);
      else
        m_137 = n_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_33, term_h_33, not_null(m_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL;
  t_137 = t;
  s_137 :
  if(match_string(t_137, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_137) == AT_LIST) && !(ATisEmpty(t_137))))
        {
          u_137 = ATgetFirst((ATermList) t_137);
          v_137 = (ATerm) ATgetNext((ATermList) t_137);
          {
            ATerm y_137 = NULL;
            ATerm l_34;
            l_34 = t;
            {
              t = not_null(u_137);
              t = a_0(t);
            }
            t = l_34;
            {
              ATerm z_137 = NULL;
              t = term_h_28;
              {
                t = c_0(t);
                {
                  z_137 = t;
                  if(((y_137 != NULL) && (y_137 != z_137)))
                    _fail(z_137);
                  else
                    y_137 = z_137;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_137)), not_null(y_137));
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
  ATerm q_6 (ATerm t)
  {
    ATerm f_138 = NULL;
    f_138 = t;
    e_138 :
    if(!(match_string(f_138, "--help")))
      {
        if(!(match_string(f_138, "-h")))
          {
            if(!(match_string(f_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_n_34;
    {
      t = set_config_0(t);
      t = term_o_34;
    }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  t = Option_3(t, q_6, r_6, s_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_138 = NULL,j_138 = NULL,k_138 = NULL;
  i_138 = t;
  h_138 :
  if(((ATgetType(i_138) == AT_LIST) && !(ATisEmpty(i_138))))
    {
      j_138 = ATgetFirst((ATermList) i_138);
      k_138 = (ATerm) ATgetNext((ATermList) i_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  ATerm v_138 = NULL,w_138 = NULL,x_138 = NULL;
  v_138 = t;
  u_138 :
  if(((ATgetType(v_138) == AT_LIST) && !(ATisEmpty(v_138))))
    {
      w_138 = ATgetFirst((ATermList) v_138);
      x_138 = (ATerm) ATgetNext((ATermList) v_138);
      {
        ATerm b_139 = NULL,d_139 = NULL;
        ATerm c_139 = NULL;
        t = SSLgetAnnotations(not_null(v_138));
        {
          c_139 = t;
          if(((b_139 != NULL) && (b_139 != c_139)))
            _fail(c_139);
          else
            b_139 = c_139;
        }
        {
          t = not_null(w_138);
          {
            ATerm f_139 = NULL;
            t = v_86(t);
            {
              d_139 = t;
              {
                t = not_null(x_138);
                {
                  ATerm h_139 = NULL;
                  t = w_86(t);
                  {
                    f_139 = t;
                    {
                      ATerm i_139 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_139)), not_null(d_139)), not_null(b_139));
                      {
                        i_139 = t;
                        if(((h_139 != NULL) && (h_139 != i_139)))
                          _fail(i_139);
                        else
                          h_139 = i_139;
                      }
                      t = not_null(h_139);
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
  ATerm s_139 = NULL;
  s_139 = t;
  r_139 :
  if(((ATgetType(s_139) == AT_LIST) && ATisEmpty(s_139)))
    {
      {
        ATerm u_139 = NULL,w_139 = NULL;
        ATerm q_34;
        q_34 = t;
        {
          ATerm v_139 = NULL;
          t = SSLgetAnnotations(not_null(s_139));
          {
            v_139 = t;
            if(((u_139 != NULL) && (u_139 != v_139)))
              _fail(v_139);
            else
              u_139 = v_139;
          }
        }
        t = q_34;
        {
          ATerm x_139 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_139));
          {
            x_139 = t;
            if(((w_139 != NULL) && (w_139 != x_139)))
              _fail(x_139);
            else
              w_139 = x_139;
          }
          t = not_null(w_139);
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
  ATerm d_140 = NULL,e_140 = NULL,f_140 = NULL;
  d_140 = t;
  c_140 :
  if(match_cons(d_140, sym__2))
    {
      e_140 = ATgetArgument(d_140, 0);
      f_140 = ATgetArgument(d_140, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_26, not_null(e_140), not_null(f_140));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_126 (ATerm))
{
  ATerm r_34;
  r_34 = t;
  {
    ATerm t_6 (ATerm t)
    {
      t = term_s_34;
      t = w_126(t);
      return(t);
    }
    t = try_1(t, t_6);
  }
  t = r_34;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm n_140 = NULL;
      ATerm t_34;
      t_34 = t;
      {
        ATerm l_140 = NULL;
        ATerm m_140 = NULL;
        m_140 = t;
        if(((l_140 != NULL) && (l_140 != m_140)))
          _fail(m_140);
        else
          l_140 = m_140;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_31, not_null(l_140));
          t = set_config_0(t);
        }
      }
      t = t_34;
      {
        ATerm o_140 = NULL;
        o_140 = t;
        if(((n_140 != NULL) && (n_140 != o_140)))
          _fail(o_140);
        else
          n_140 = o_140;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_140));
      }
      return(t);
    }
    ATerm v_6 (ATerm t)
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_34);
            }
          else
            {
              t = w_34;
              {
                t = w_126(t);
                t = Cons_2(t, _id, v_6);
              }
            }
          ;
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_6, v_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_140 = NULL,v_140 = NULL,w_140 = NULL;
  ATerm y_34;
  y_34 = t;
  {
    ATerm x_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL;
    x_140 = t;
    t_140 :
    if(match_cons(x_140, sym__3))
      {
        y_140 = ATgetArgument(x_140, 0);
        z_140 = ATgetArgument(x_140, 1);
        a_141 = ATgetArgument(x_140, 2);
        {
          if(((u_140 != NULL) && (u_140 != y_140)))
            _fail(y_140);
          else
            u_140 = y_140;
          {
            if(((v_140 != NULL) && (v_140 != z_140)))
              _fail(z_140);
            else
              v_140 = z_140;
            {
              if(((w_140 != NULL) && (w_140 != a_141)))
                _fail(a_141);
              else
                w_140 = a_141;
              t = SSL_table_put(not_null(u_140), not_null(v_140), not_null(w_140));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_126 (ATerm))
{
  ATerm d_141 = NULL;
  ATerm z_34;
  z_34 = t;
  {
    t = term_a_35;
    t = table_put_0(t);
  }
  t = z_34;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_126(t);
          ;
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_6);
    {
      ATerm x_6 (ATerm t)
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_35;
            f_35 = t;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_35;
            {
              t = system_usage_0(t);
              {
                t = term_l_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm e_141 = NULL;
                  e_141 = t;
                  if(((d_141 != NULL) && (d_141 != e_141)))
                    _fail(e_141);
                  else
                    d_141 = e_141;
                  return(t);
                }
                t = Undefined_1(t, z_6);
                return(t);
              }
              t = option_defined_1(t, y_6);
              {
                ATerm a_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_141)), term_i_35);
                  return(t);
                }
                t = say_1(t, a_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_6);
      {
        ATerm j_35;
        j_35 = t;
        {
          t = term_g_33;
          t = table_destroy_0(t);
        }
        t = j_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm))
{
  t = parse_options_1(t, s_124);
  {
    t = store_options_0(t);
    {
      t = u_124(t);
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_124);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm m_35 = t;
              int n_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_124(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_35);
                }
              else
                {
                  t = m_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_125(t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_125);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_7, l_125, m_125, c_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm))
{
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      ATerm q_35;
      q_35 = t;
      {
        ATerm h_141 = NULL;
        ATerm i_141 = NULL;
        t = term_r_31;
        {
          t = get_config_0(t);
          {
            i_141 = t;
            if(((h_141 != NULL) && (h_141 != i_141)))
              _fail(i_141);
            else
              h_141 = i_141;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATempty, not_null(h_141)));
          t = printnl_0(t);
        }
      }
      t = q_35;
      return(t);
    }
    t = if_verbose2_1(t, g_7);
    return(t);
  }
  t = iowrap_4(t, d_125, e_125, f_125, f_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_125 (ATerm), ATerm c_125 (ATerm))
{
  t = iowrap_3(t, b_125, c_125, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_124 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    t = _2(t, _id, y_124);
    return(t);
  }
  t = iowrap_2(t, h_7, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, i_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
