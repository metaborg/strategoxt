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
ATerm term_n_34;
ATerm term_f_34;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_x_24;
ATerm term_b_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_w_21;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_y_11;
ATerm term_z_7;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_h_14, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_p_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_p_25);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_p_25);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_p_25);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__3, term_l_31, term_m_31, (ATerm) ATempty);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm isect_1 (ATerm, ATerm z_109 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm l_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_87 (ATerm), ATerm g_87 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm f_110 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm));
ATerm crush_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm free_vars_3 (ATerm, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_100 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm f_107 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm j_100 (ATerm), ATerm k_100 (ATerm));
ATerm alltd_1 (ATerm, ATerm d_102 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_99 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_110 (ATerm), ATerm k_110 (ATerm));
ATerm diff_1 (ATerm, ATerm b_110 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_121 (ATerm), ATerm b_121 (ATerm));
ATerm for_3 (ATerm, ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm p_101 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm l_120 (ATerm));
ATerm downup_1 (ATerm, ATerm n_100 (ATerm));
ATerm simplify_widen_0 (ATerm);
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
ATerm apply_strategy_1 (ATerm, ATerm p_124 (ATerm));
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
ATerm need_help_1 (ATerm, ATerm n_124 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_126 (ATerm));
ATerm map_1 (ATerm, ATerm m_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_126 (ATerm));
ATerm Program_1 (ATerm, ATerm j_98 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_112 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_98 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_125 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_126 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_126 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_126 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_125 (ATerm), ATerm d_125 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_124 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, b_0);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm y_3 = NULL,z_3 = NULL,k_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      k_4 = ATgetArgument(y_3, 1);
      {
        t = not_null(z_3);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm u_5 = t;
            int z_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(z_5);
              }
            else
              {
                t = u_5;
                {
                  ATerm a_6 = t;
                  int b_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_6;
                      f_6 = t;
                      {
                        ATerm e_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, z_109, e_0);
                      }
                      t = f_6;
                      t = Cons_2(t, _id, v_4);
                      ;
                      LocalPopChoice(b_6);
                    }
                  else
                    {
                      t = a_6;
                      {
                        ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
                        q_4 = t;
                        j_3 :
                        if(((ATgetType(q_4) == AT_LIST) && !(ATisEmpty(q_4))))
                          {
                            r_4 = ATgetFirst((ATermList) q_4);
                            s_4 = (ATerm) ATgetNext((ATermList) q_4);
                            {
                              t = not_null(s_4);
                              t = v_4(t);
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
          t = v_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  t = isect_1(t, eq_0);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_DynamicRules_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      {
        ATerm g_5 = NULL,i_5 = NULL;
        ATerm h_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          h_5 = t;
          if(((g_5 != NULL) && (g_5 != h_5)))
            _fail(h_5);
          else
            g_5 = h_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm k_5 = NULL;
            t = l_90(t);
            {
              i_5 = t;
              {
                ATerm l_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(i_5)), not_null(g_5));
                {
                  l_5 = t;
                  if(((k_5 != NULL) && (k_5 != l_5)))
                    _fail(l_5);
                  else
                    k_5 = l_5;
                }
                t = not_null(k_5);
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
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Scope_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = SSLgetAnnotations(not_null(w_5));
        {
          d_6 = t;
          if(((c_6 != NULL) && (c_6 != d_6)))
            _fail(d_6);
          else
            c_6 = d_6;
        }
        {
          t = not_null(x_5);
          {
            ATerm g_6 = NULL;
            t = f_87(t);
            {
              e_6 = t;
              {
                t = not_null(y_5);
                {
                  ATerm i_6 = NULL;
                  t = g_87(t);
                  {
                    g_6 = t;
                    {
                      ATerm j_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_6), not_null(g_6)), not_null(c_6));
                      {
                        j_6 = t;
                        if(((i_6 != NULL) && (i_6 != j_6)))
                          _fail(j_6);
                        else
                          i_6 = j_6;
                      }
                      t = not_null(i_6);
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
  ATerm h_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_99, m_99);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = h_6;
      t = DynamicRules_1(t, m_99);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_DynamicRules_1))
    {
      s_6 = ATgetArgument(r_6, 0);
      {
        t = not_null(s_6);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  x_6 :
  if(match_cons(c_7, sym_LRule_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      y_6 :
      if(match_cons(d_7, sym_Rule_3))
        {
          z_6 = ATgetArgument(d_7, 0);
          a_7 = ATgetArgument(d_7, 1);
          b_7 = ATgetArgument(d_7, 2);
          {
            t = not_null(z_6);
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
      if(match_cons(c_7, sym_Scope_2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          t = not_null(d_7);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_Var_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_110 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = not_null(v_7);
        {
          ATerm a_8 (ATerm t)
          {
            ATerm l_6 = t;
            int m_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_7);
                ;
                LocalPopChoice(m_6);
              }
            else
              {
                t = l_6;
                {
                  ATerm n_6 = t;
                  int o_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_0 (ATerm t)
                      {
                        t = not_null(w_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_110, f_0);
                      t = a_8(t);
                      ;
                      LocalPopChoice(o_6);
                    }
                  else
                    {
                      t = n_6;
                      t = Cons_2(t, _id, a_8);
                    }
                }
              }
            return(t);
          }
          t = a_8(t);
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
ATerm foldr_3 (ATerm t, ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm))
{
  ATerm p_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_110(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = p_6;
      {
        ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
        f_8 = t;
        e_8 :
        if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
          {
            g_8 = ATgetFirst((ATermList) f_8);
            h_8 = (ATerm) ATgetNext((ATermList) f_8);
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm u_6;
              u_6 = t;
              {
                ATerm l_8 = NULL;
                t = not_null(g_8);
                {
                  t = a_111(t);
                  {
                    l_8 = t;
                    if(((k_8 != NULL) && (k_8 != l_8)))
                      _fail(l_8);
                    else
                      k_8 = l_8;
                  }
                }
              }
              t = u_6;
              {
                ATerm n_8 = NULL;
                t = not_null(h_8);
                {
                  t = foldr_3(t, y_110, z_110, a_111);
                  {
                    n_8 = t;
                    if(((m_8 != NULL) && (m_8 != n_8)))
                      _fail(n_8);
                    else
                      m_8 = n_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
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
  ATerm v_8 = NULL;
  ATerm x_8 = NULL;
  v_8 = t;
  {
    ATerm y_8 = NULL;
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
    t = not_null(v_8);
    {
      y_8 = t;
      {
        t = SSL_explode_term(not_null(y_8));
        {
          a_9 = t;
          u_8 :
          if(match_cons(a_9, sym__2))
            {
              b_9 = ATgetArgument(a_9, 0);
              c_9 = ATgetArgument(a_9, 1);
              if(((x_8 != NULL) && (x_8 != c_9)))
                _fail(c_9);
              else
                x_8 = c_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_8);
      t = foldr_3(t, w_109, x_109, y_109);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_9 (ATerm t)
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_118(t);
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL;
              ATerm h_7;
              h_7 = t;
              {
                ATerm i_9 = NULL;
                t = v_118(t);
                {
                  i_9 = t;
                  if(((h_9 != NULL) && (h_9 != i_9)))
                    _fail(i_9);
                  else
                    h_9 = i_9;
                }
              }
              t = h_7;
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(h_9);
                    return(t);
                  }
                  t = split_2(t, j_9, m_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm j_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_118(t, h_0, j_9, j_0);
                {
                  ATerm p_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, p_0, union_0, _id);
                }
              }
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_0, union_0, j_9);
              }
            }
        }
      }
    return(t);
  }
  t = j_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, r_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  r_9 = t;
  p_9 :
  if(match_cons(r_9, sym_Scope_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      q_9 :
      if(match_cons(t_9, sym_Seq_2))
        {
          u_9 = ATgetArgument(t_9, 0);
          v_9 = ATgetArgument(t_9, 1);
          {
            ATerm z_9 = NULL,a_10 = NULL;
            ATerm b_10 = NULL,d_10 = NULL;
            ATerm c_10 = NULL;
            t = not_null(u_9);
            {
              t = tvars_0(t);
              {
                c_10 = t;
                if(((b_10 != NULL) && (b_10 != c_10)))
                  _fail(c_10);
                else
                  b_10 = c_10;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), not_null(s_9));
              {
                ATerm e_10 = NULL;
                t = isect_0(t);
                {
                  d_10 = t;
                  {
                    if(((z_9 != NULL) && (z_9 != d_10)))
                      _fail(d_10);
                    else
                      z_9 = d_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(z_9));
                      {
                        t = diff_0(t);
                        {
                          e_10 = t;
                          {
                            if(((a_10 != NULL) && (a_10 != e_10)))
                              _fail(e_10);
                            else
                              a_10 = e_10;
                            {
                              ATerm k_7 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = k_7;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_9), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_10), not_null(v_9))));
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
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, l_100);
      return(t);
    }
    t = _all(t, s_0);
  }
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, t_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  ATerm c_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_10), not_null(q_10)));
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_10), not_null(v_10)));
    return(t);
  }
  r_10 = t;
  l_10 :
  if(match_cons(r_10, sym_Seq_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      v_10 = ATgetArgument(r_10, 1);
      m_10 :
      if(match_cons(v_10, sym_Scope_2))
        {
          p_10 = ATgetArgument(v_10, 0);
          q_10 = ATgetArgument(v_10, 1);
          n_10 :
          if(match_cons(s_10, sym_Scope_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              {
                ATerm l_7 = t;
                int m_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_11(t);
                    ;
                    LocalPopChoice(m_7);
                  }
                else
                  {
                    t = l_7;
                    t = d_11(t);
                  }
              }
            }
          else
            {
              t = c_11(t);
            }
        }
      else
        {
          o_10 :
          if(match_cons(s_10, sym_Scope_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              t = d_11(t);
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
ATerm InlineDont_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  k_11 = t;
  f_11 :
  if(match_cons(k_11, sym_Let_2))
    {
      l_11 = ATgetArgument(k_11, 0);
      r_11 = ATgetArgument(k_11, 1);
      g_11 :
      if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
        {
          m_11 = ATgetFirst((ATermList) l_11);
          q_11 = (ATerm) ATgetNext((ATermList) l_11);
          h_11 :
          if(match_cons(m_11, sym_SDef_3))
            {
              n_11 = ATgetArgument(m_11, 0);
              o_11 = ATgetArgument(m_11, 1);
              p_11 = ATgetArgument(m_11, 2);
              i_11 :
              if(((ATgetType(o_11) == AT_LIST) && ATisEmpty(o_11)))
                {
                  j_11 :
                  if(((ATgetType(q_11) == AT_LIST) && ATisEmpty(q_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_q_7), not_null(n_11), (ATerm)ATempty, not_null(p_11))), not_null(r_11));
                    }
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
ATerm at_suffix_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm w_11 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_107(t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = Cons_2(t, _id, w_11);
      }
    return(t);
  }
  t = w_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Let_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm o_12 = NULL,p_12 = NULL;
        ATerm e_13 = NULL;
        t = not_null(k_12);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
            q_12 = t;
            e_12 :
            if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
              {
                r_12 = ATgetFirst((ATermList) q_12);
                v_12 = (ATerm) ATgetNext((ATermList) q_12);
                f_12 :
                if(match_cons(r_12, sym_SDef_3))
                  {
                    s_12 = ATgetArgument(r_12, 0);
                    t_12 = ATgetArgument(r_12, 1);
                    u_12 = ATgetArgument(r_12, 2);
                    g_12 :
                    if(((ATgetType(t_12) == AT_LIST) && ATisEmpty(t_12)))
                      {
                        {
                          ATerm d_13 = NULL;
                          t = not_null(l_12);
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
                              z_12 = t;
                              a_12 :
                              if(match_cons(z_12, sym_Call_2))
                                {
                                  a_13 = ATgetArgument(z_12, 0);
                                  c_13 = ATgetArgument(z_12, 1);
                                  b_12 :
                                  if(match_cons(a_13, sym_SVar_1))
                                    {
                                      b_13 = ATgetArgument(a_13, 0);
                                      c_12 :
                                      if(((ATgetType(c_13) == AT_LIST) && ATisEmpty(c_13)))
                                        {
                                          {
                                            if(((s_12 != NULL) && (s_12 != b_13)))
                                              _fail(b_13);
                                            else
                                              s_12 = b_13;
                                            t = not_null(u_12);
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
                            t = oncetd_1(t, v_0);
                            {
                              d_13 = t;
                              {
                                if(((o_12 != NULL) && (o_12 != d_13)))
                                  _fail(d_13);
                                else
                                  o_12 = d_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_12)), (ATerm) ATempty), not_null(o_12));
                                  {
                                    ATerm x_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = x_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(v_12);
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
          t = at_suffix_1(t, u_0);
          {
            e_13 = t;
            if(((p_12 != NULL) && (p_12 != e_13)))
              _fail(e_13);
            else
              p_12 = e_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_12), not_null(o_12));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  s_13 = t;
  m_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      v_13 = ATgetArgument(s_13, 1);
      n_13 :
      if(match_cons(t_13, sym_Build_1))
        {
          u_13 = ATgetArgument(t_13, 0);
          o_13 :
          if(match_cons(v_13, sym_Where_1))
            {
              w_13 = ATgetArgument(v_13, 0);
              p_13 :
              if(match_cons(w_13, sym_Prim_2))
                {
                  q_13 = ATgetArgument(w_13, 0);
                  r_13 = ATgetArgument(w_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_13), not_null(r_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(v_13, sym_Prim_2))
                {
                  w_13 = ATgetArgument(v_13, 0);
                  x_13 = ATgetArgument(v_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_13), not_null(x_13));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  n_14 = t;
  i_14 :
  if(match_cons(n_14, sym__2))
    {
      o_14 = ATgetArgument(n_14, 0);
      q_14 = ATgetArgument(n_14, 1);
      j_14 :
      if(match_cons(o_14, sym_Build_1))
        {
          p_14 = ATgetArgument(o_14, 0);
          k_14 :
          if(match_cons(q_14, sym_Where_1))
            {
              r_14 = ATgetArgument(q_14, 0);
              l_14 :
              if(match_cons(r_14, sym_Build_1))
                {
                  m_14 = ATgetArgument(r_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_14, sym_Build_1))
                {
                  r_14 = ATgetArgument(q_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_14));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  h_15 = t;
  c_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      m_15 = ATgetArgument(h_15, 1);
      d_15 :
      if(match_cons(i_15, sym_Build_1))
        {
          j_15 = ATgetArgument(i_15, 0);
          e_15 :
          if(match_cons(j_15, sym_Op_2))
            {
              k_15 = ATgetArgument(j_15, 0);
              l_15 = ATgetArgument(j_15, 1);
              f_15 :
              if(match_cons(m_15, sym_Match_1))
                {
                  n_15 = ATgetArgument(m_15, 0);
                  g_15 :
                  if(match_cons(n_15, sym_Op_2))
                    {
                      o_15 = ATgetArgument(n_15, 0);
                      p_15 = ATgetArgument(n_15, 1);
                      {
                        ATerm s_15 = NULL,t_15 = NULL;
                        if(((k_15 != NULL) && (k_15 != o_15)))
                          _fail(o_15);
                        else
                          k_15 = o_15;
                        {
                          if(((s_15 != NULL) && (s_15 != p_15)))
                            _fail(p_15);
                          else
                            s_15 = p_15;
                          {
                            ATerm z_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(s_15));
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
                                u_15 = t;
                                a_15 :
                                if(match_cons(u_15, sym__2))
                                  {
                                    v_15 = ATgetArgument(u_15, 0);
                                    w_15 = ATgetArgument(u_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, w_0);
                              {
                                z_15 = t;
                                if(((t_15 != NULL) && (t_15 != z_15)))
                                  _fail(z_15);
                                else
                                  t_15 = z_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_15), not_null(l_15))));
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
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  j_16 = t;
  e_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      o_16 = ATgetArgument(j_16, 1);
      f_16 :
      if(match_cons(k_16, sym_Build_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          g_16 :
          if(match_cons(l_16, sym_Op_2))
            {
              m_16 = ATgetArgument(l_16, 0);
              n_16 = ATgetArgument(l_16, 1);
              h_16 :
              if(match_cons(o_16, sym_Match_1))
                {
                  p_16 = ATgetArgument(o_16, 0);
                  i_16 :
                  if(match_cons(p_16, sym_Op_2))
                    {
                      q_16 = ATgetArgument(p_16, 0);
                      r_16 = ATgetArgument(p_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(q_16));
                        {
                          ATerm y_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = y_7;
                            }
                        }
                        t = term_z_7;
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
ATerm BMF_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm d_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = d_8;
            {
              ATerm j_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = j_8;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  ATerm s_17 (ATerm t)
  {
    ATerm p_17 = NULL;
    ATerm q_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(h_17));
    {
      t = BMF_0(t);
      {
        q_17 = t;
        if(((p_17 != NULL) && (p_17 != q_17)))
          _fail(q_17);
        else
          p_17 = q_17;
      }
    }
    t = not_null(p_17);
    return(t);
  }
  f_17 = t;
  b_17 :
  if(match_cons(f_17, sym_Seq_2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      c_17 :
      if(match_cons(h_17, sym_Seq_2))
        {
          d_17 = ATgetArgument(h_17, 0);
          e_17 = ATgetArgument(h_17, 1);
          {
            ATerm p_8 = t;
            int q_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_17 = NULL;
                ATerm m_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(d_17));
                {
                  t = BMF_0(t);
                  {
                    m_17 = t;
                    if(((l_17 != NULL) && (l_17 != m_17)))
                      _fail(m_17);
                    else
                      l_17 = m_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_17), not_null(e_17));
                ;
                LocalPopChoice(q_8);
              }
            else
              {
                t = p_8;
                t = s_17(t);
              }
          }
        }
      else
        {
          t = s_17(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  a_18 = t;
  w_17 :
  if(match_cons(a_18, sym_Seq_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      d_18 = ATgetArgument(a_18, 1);
      x_17 :
      if(match_cons(b_18, sym_Build_1))
        {
          c_18 = ATgetArgument(b_18, 0);
          y_17 :
          if(match_cons(d_18, sym_Seq_2))
            {
              e_18 = ATgetArgument(d_18, 0);
              g_18 = ATgetArgument(d_18, 1);
              z_17 :
              if(match_cons(e_18, sym_Build_1))
                {
                  f_18 = ATgetArgument(e_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_18)), not_null(g_18));
                }
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
ATerm FuseScope_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  p_18 = t;
  n_18 :
  if(match_cons(p_18, sym_Scope_2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      o_18 :
      if(match_cons(r_18, sym_Scope_2))
        {
          s_18 = ATgetArgument(r_18, 0);
          t_18 = ATgetArgument(r_18, 1);
          {
            ATerm x_18 = NULL;
            ATerm y_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(s_18));
            {
              t = conc_0(t);
              {
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_18), not_null(t_18));
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
ATerm IsVar_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_Var_1))
    {
      e_19 = ATgetArgument(d_19, 0);
      t = not_null(e_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  k_19 = t;
  i_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      j_19 :
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          n_19 = ATgetFirst((ATermList) m_19);
          o_19 = (ATerm) ATgetNext((ATermList) m_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(o_19));
        }
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  w_19 = t;
  t_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      u_19 :
      if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
        {
          z_19 = ATgetFirst((ATermList) y_19);
          c_20 = (ATerm) ATgetNext((ATermList) y_19);
          v_19 :
          if(match_cons(z_19, sym__2))
            {
              a_20 = ATgetArgument(z_19, 0);
              b_20 = ATgetArgument(z_19, 1);
              {
                ATerm e_20 = NULL;
                if(((x_19 != NULL) && (x_19 != a_20)))
                  _fail(a_20);
                else
                  x_19 = a_20;
                {
                  if(((e_20 != NULL) && (e_20 != b_20)))
                    _fail(b_20);
                  else
                    e_20 = b_20;
                  t = not_null(e_20);
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
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm j_100 (ATerm), ATerm k_100 (ATerm))
{
  ATerm k_20 = NULL;
  ATerm m_20 = NULL,n_20 = NULL;
  k_20 = t;
  {
    ATerm o_20 = NULL;
    t = not_null(k_20);
    {
      ATerm p_20 = NULL;
      t = j_100(t);
      {
        o_20 = t;
        {
          if(((m_20 != NULL) && (m_20 != o_20)))
            _fail(o_20);
          else
            m_20 = o_20;
          {
            t = k_100(t);
            {
              p_20 = t;
              if(((n_20 != NULL) && (n_20 != p_20)))
                _fail(p_20);
              else
                n_20 = p_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm d_102 (ATerm))
{
  ATerm t_20 (ATerm t)
  {
    ATerm t_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_102(t);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = t_8;
        t = _all(t, t_20);
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm d_21 = NULL;
        if(((d_21 != NULL) && (d_21 != a_21)))
          _fail(a_21);
        else
          d_21 = a_21;
      }
    }
  else
    {
      if(match_cons(y_20, sym__3))
        {
          z_20 = ATgetArgument(y_20, 0);
          a_21 = ATgetArgument(y_20, 1);
          b_21 = ATgetArgument(y_20, 2);
          {
            ATerm j_21 = NULL;
            ATerm k_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), not_null(a_21));
            {
              t = zip_1(t, _id);
              {
                k_21 = t;
                if(((j_21 != NULL) && (j_21 != k_21)))
                  _fail(k_21);
                else
                  j_21 = k_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(b_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  t = subs_args_0(t);
  {
    q_21 = t;
    p_21 :
    if(match_cons(q_21, sym__2))
      {
        r_21 = ATgetArgument(q_21, 0);
        s_21 = ATgetArgument(q_21, 1);
        {
          t = not_null(s_21);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = not_null(r_21);
                return(t);
              }
              t = SubsVar_2(t, u_99, y_0);
              t = v_99(t);
              return(t);
            }
            t = alltd_1(t, x_0);
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
ATerm substitute_1 (ATerm t, ATerm w_99 (ATerm))
{
  t = substitute_2(t, w_99, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym__2))
    {
      z_21 = ATgetArgument(y_21, 0);
      a_22 = ATgetArgument(y_21, 1);
      if(((z_21 != NULL) && (z_21 != a_22)))
        _fail(a_22);
      else
        z_21 = a_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_110 (ATerm), ATerm k_110 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
    {
      h_22 = ATgetFirst((ATermList) g_22);
      i_22 = (ATerm) ATgetNext((ATermList) g_22);
      {
        t = k_110(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm l_22 = NULL;
            l_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(l_22));
              t = j_110(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(i_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm b_110 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym__2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        t = not_null(s_22);
        {
          ATerm x_22 (ATerm t)
          {
            ATerm z_8 = t;
            int d_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(d_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm e_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(t_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_110, a_1);
                      t = x_22(t);
                      ;
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = e_9;
                      t = Cons_2(t, _id, x_22);
                    }
                }
              }
            return(t);
          }
          t = x_22(t);
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
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  b_23 = t;
  z_22 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      a_23 :
      if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
        {
          e_23 = ATgetFirst((ATermList) d_23);
          f_23 = (ATerm) ATgetNext((ATermList) d_23);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_23)), not_null(e_23)), not_null(f_23));
        }
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  s_23 :
  if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
    {
      v_23 = ATgetFirst((ATermList) u_23);
      y_23 = (ATerm) ATgetNext((ATermList) u_23);
      t_23 :
      if(match_cons(v_23, sym__2))
        {
          w_23 = ATgetArgument(v_23, 0);
          x_23 = ATgetArgument(v_23, 1);
          {
            ATerm c_24 = NULL,d_24 = NULL,j_24 = NULL,p_24 = NULL;
            ATerm g_9;
            g_9 = t;
            {
              ATerm e_24 = NULL;
              ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
              t = not_null(x_23);
              {
                e_24 = t;
                {
                  t = SSL_explode_term(not_null(e_24));
                  {
                    g_24 = t;
                    n_23 :
                    if(match_cons(g_24, sym__2))
                      {
                        h_24 = ATgetArgument(g_24, 0);
                        i_24 = ATgetArgument(g_24, 1);
                        {
                          if(((c_24 != NULL) && (c_24 != h_24)))
                            _fail(h_24);
                          else
                            c_24 = h_24;
                          if(((d_24 != NULL) && (d_24 != i_24)))
                            _fail(i_24);
                          else
                            d_24 = i_24;
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
            t = g_9;
            {
              ATerm k_9;
              k_9 = t;
              {
                ATerm k_24 = NULL;
                ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
                t = not_null(w_23);
                {
                  k_24 = t;
                  {
                    t = SSL_explode_term(not_null(k_24));
                    {
                      m_24 = t;
                      q_23 :
                      if(match_cons(m_24, sym__2))
                        {
                          n_24 = ATgetArgument(m_24, 0);
                          o_24 = ATgetArgument(m_24, 1);
                          {
                            if(((c_24 != NULL) && (c_24 != n_24)))
                              _fail(n_24);
                            else
                              c_24 = n_24;
                            if(((j_24 != NULL) && (j_24 != o_24)))
                              _fail(o_24);
                            else
                              j_24 = o_24;
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
              t = k_9;
              {
                ATerm q_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(d_24));
                {
                  t = zip_1(t, _id);
                  {
                    q_24 = t;
                    if(((p_24 != NULL) && (p_24 != q_24)))
                      _fail(q_24);
                    else
                      p_24 = q_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), not_null(y_23));
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
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  a_25 = t;
  y_24 :
  if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
    {
      b_25 = ATgetFirst((ATermList) a_25);
      e_25 = (ATerm) ATgetNext((ATermList) a_25);
      z_24 :
      if(match_cons(b_25, sym__2))
        {
          c_25 = ATgetArgument(b_25, 0);
          d_25 = ATgetArgument(b_25, 1);
          {
            ATerm g_25 = NULL;
            if(((c_25 != NULL) && (c_25 != d_25)))
              _fail(d_25);
            else
              c_25 = d_25;
            {
              if(((g_25 != NULL) && (g_25 != e_25)))
                _fail(e_25);
              else
                g_25 = e_25;
              t = not_null(g_25);
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
  ATerm i_25 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_121(t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          t = b_121(t);
          t = i_25(t);
        }
      }
    return(t);
  }
  t = i_25(t);
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
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm k_25 = NULL;
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_25));
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm y_9 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = y_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, e_1);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, b_1, c_1, d_1);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_101(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = _one(t, n_25);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym__2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      {
        ATerm i_10;
        i_10 = t;
        {
          t = not_null(t_25);
          {
            ATerm f_1 (ATerm t)
            {
              ATerm w_25 = NULL;
              w_25 = t;
              if(((s_25 != NULL) && (s_25 != w_25)))
                _fail(w_25);
              else
                s_25 = w_25;
              return(t);
            }
            t = oncetd_1(t, f_1);
          }
        }
        t = i_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Var_1))
    {
      j_26 = ATgetArgument(i_26, 0);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_26 = NULL,o_26 = NULL;
            ATerm n_26 = NULL;
            t = SSLgetAnnotations(not_null(i_26));
            {
              n_26 = t;
              if(((m_26 != NULL) && (m_26 != n_26)))
                _fail(n_26);
              else
                m_26 = n_26;
            }
            {
              t = not_null(j_26);
              {
                ATerm q_26 = NULL;
                t = o_0(t);
                {
                  o_26 = t;
                  {
                    ATerm r_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_26)), not_null(m_26));
                    {
                      r_26 = t;
                      if(((q_26 != NULL) && (q_26 != r_26)))
                        _fail(r_26);
                      else
                        q_26 = r_26;
                    }
                    t = not_null(q_26);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm u_26 = NULL,w_26 = NULL;
              ATerm v_26 = NULL;
              t = SSLgetAnnotations(not_null(i_26));
              {
                v_26 = t;
                if(((u_26 != NULL) && (u_26 != v_26)))
                  _fail(v_26);
                else
                  u_26 = v_26;
              }
              {
                t = not_null(j_26);
                {
                  ATerm y_26 = NULL;
                  t = o_0(t);
                  {
                    w_26 = t;
                    {
                      ATerm z_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_26)), not_null(u_26));
                      {
                        z_26 = t;
                        if(((y_26 != NULL) && (y_26 != z_26)))
                          _fail(z_26);
                        else
                          y_26 = z_26;
                      }
                      t = not_null(y_26);
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
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  z_28 = t;
  y_27 :
  if(match_cons(z_28, sym_Seq_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      c_29 = ATgetArgument(z_28, 1);
      z_27 :
      if(match_cons(a_29, sym_Assign_1))
        {
          b_29 = ATgetArgument(a_29, 0);
          a_28 :
          if(match_cons(b_29, sym_Var_1))
            {
              s_28 = ATgetArgument(b_29, 0);
              b_28 :
              if(match_cons(c_29, sym_Seq_2))
                {
                  d_29 = ATgetArgument(c_29, 0);
                  e_29 = ATgetArgument(c_29, 1);
                  c_28 :
                  if(match_cons(d_29, sym_Build_1))
                    {
                      v_28 = ATgetArgument(d_29, 0);
                      d_28 :
                      if(match_cons(v_28, sym_Var_1))
                        {
                          w_28 = ATgetArgument(v_28, 0);
                          {
                            ATerm k_29 = NULL;
                            if(((s_28 != NULL) && (s_28 != w_28)))
                              _fail(w_28);
                            else
                              s_28 = w_28;
                            {
                              if(((k_29 != NULL) && (k_29 != e_29)))
                                _fail(e_29);
                              else
                                k_29 = e_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_28))), not_null(k_29));
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
          if(match_cons(a_29, sym_Build_1))
            {
              b_29 = ATgetArgument(a_29, 0);
              e_28 :
              if(match_cons(c_29, sym_Scope_2))
                {
                  d_29 = ATgetArgument(c_29, 0);
                  e_29 = ATgetArgument(c_29, 1);
                  f_28 :
                  if(match_cons(e_29, sym_Seq_2))
                    {
                      f_29 = ATgetArgument(e_29, 0);
                      i_29 = ATgetArgument(e_29, 1);
                      g_28 :
                      if(match_cons(f_29, sym_Assign_1))
                        {
                          g_29 = ATgetArgument(f_29, 0);
                          h_28 :
                          if(match_cons(g_29, sym_Var_1))
                            {
                              h_29 = ATgetArgument(g_29, 0);
                              {
                                ATerm w_10 = t;
                                int x_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_30 = NULL,p_30 = NULL;
                                    ATerm y_10;
                                    y_10 = t;
                                    {
                                      ATerm o_30 = NULL;
                                      t = not_null(b_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(d_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  o_30 = t;
                                                  if(((n_30 != NULL) && (n_30 != o_30)))
                                                    _fail(o_30);
                                                  else
                                                    n_30 = o_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = y_10;
                                    {
                                      ATerm q_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, not_null(b_29)), not_null(i_29));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          q_30 = t;
                                          if(((p_30 != NULL) && (p_30 != q_30)))
                                            _fail(q_30);
                                          else
                                            p_30 = q_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_30), not_null(p_30)));
                                    }
                                    ;
                                    LocalPopChoice(x_10);
                                  }
                                else
                                  {
                                    t = w_10;
                                    {
                                      ATerm v_30 = NULL,x_30 = NULL;
                                      ATerm z_10;
                                      z_10 = t;
                                      {
                                        ATerm w_30 = NULL;
                                        t = not_null(b_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(d_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    w_30 = t;
                                                    if(((v_30 != NULL) && (v_30 != w_30)))
                                                      _fail(w_30);
                                                    else
                                                      v_30 = w_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = z_10;
                                      {
                                        ATerm y_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, not_null(b_29)), not_null(i_29));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            y_30 = t;
                                            if(((x_30 != NULL) && (x_30 != y_30)))
                                              _fail(y_30);
                                            else
                                              x_30 = y_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_30), not_null(x_30)));
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
    }
  else
    {
      if(match_cons(z_28, sym_Scope_2))
        {
          a_29 = ATgetArgument(z_28, 0);
          c_29 = ATgetArgument(z_28, 1);
          i_28 :
          if(match_cons(c_29, sym_Seq_2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              j_28 :
              if(match_cons(d_29, sym_Assign_1))
                {
                  v_28 = ATgetArgument(d_29, 0);
                  k_28 :
                  if(match_cons(v_28, sym_Var_1))
                    {
                      w_28 = ATgetArgument(v_28, 0);
                      l_28 :
                      if(match_cons(e_29, sym_Seq_2))
                        {
                          f_29 = ATgetArgument(e_29, 0);
                          i_29 = ATgetArgument(e_29, 1);
                          m_28 :
                          if(match_cons(f_29, sym_Assign_2))
                            {
                              g_29 = ATgetArgument(f_29, 0);
                              t_28 = ATgetArgument(f_29, 1);
                              n_28 :
                              if(match_cons(g_29, sym_Var_1))
                                {
                                  h_29 = ATgetArgument(g_29, 0);
                                  o_28 :
                                  if(match_cons(t_28, sym_Var_1))
                                    {
                                      u_28 = ATgetArgument(t_28, 0);
                                      {
                                        ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
                                        if(((w_28 != NULL) && (w_28 != u_28)))
                                          _fail(u_28);
                                        else
                                          w_28 = u_28;
                                        {
                                          if(((o_29 != NULL) && (o_29 != i_29)))
                                            _fail(i_29);
                                          else
                                            o_29 = i_29;
                                          {
                                            ATerm a_11;
                                            a_11 = t;
                                            {
                                              ATerm q_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(a_29));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          q_29 = t;
                                                          if(((p_29 != NULL) && (p_29 != q_29)))
                                                            _fail(q_29);
                                                          else
                                                            p_29 = q_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = a_11;
                                            {
                                              ATerm s_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(o_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  s_29 = t;
                                                  if(((r_29 != NULL) && (r_29 != s_29)))
                                                    _fail(s_29);
                                                  else
                                                    r_29 = s_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(r_29)));
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
                              if(match_cons(f_29, sym_Assign_1))
                                {
                                  g_29 = ATgetArgument(f_29, 0);
                                  p_28 :
                                  if(match_cons(g_29, sym_Var_1))
                                    {
                                      h_29 = ATgetArgument(g_29, 0);
                                      {
                                        ATerm x_29 = NULL,z_29 = NULL;
                                        ATerm b_11;
                                        b_11 = t;
                                        {
                                          ATerm y_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(a_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(h_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      y_29 = t;
                                                      if(((x_29 != NULL) && (x_29 != y_29)))
                                                        _fail(y_29);
                                                      else
                                                        x_29 = y_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = b_11;
                                        {
                                          ATerm a_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(h_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(i_29));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              a_30 = t;
                                              if(((z_29 != NULL) && (z_29 != a_30)))
                                                _fail(a_30);
                                              else
                                                z_29 = a_30;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(z_29)));
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
                  if(match_cons(d_29, sym_Assign_2))
                    {
                      v_28 = ATgetArgument(d_29, 0);
                      x_28 = ATgetArgument(d_29, 1);
                      q_28 :
                      if(match_cons(v_28, sym_Var_1))
                        {
                          w_28 = ATgetArgument(v_28, 0);
                          r_28 :
                          if(match_cons(x_28, sym_Var_1))
                            {
                              y_28 = ATgetArgument(x_28, 0);
                              {
                                ATerm f_30 = NULL,h_30 = NULL;
                                ATerm e_11;
                                e_11 = t;
                                {
                                  ATerm g_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(a_29));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), (ATerm) ATinsert(ATempty, not_null(w_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          g_30 = t;
                                          if(((f_30 != NULL) && (f_30 != g_30)))
                                            _fail(g_30);
                                          else
                                            f_30 = g_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = e_11;
                                {
                                  ATerm i_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_28))), not_null(e_29));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      i_30 = t;
                                      if(((h_30 != NULL) && (h_30 != i_30)))
                                        _fail(i_30);
                                      else
                                        h_30 = i_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_30), not_null(h_30));
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
            }
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
ATerm HoistLet_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  s_31 = t;
  q_31 :
  if(match_cons(s_31, sym_Seq_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      r_31 :
      if(match_cons(u_31, sym_Let_2))
        {
          v_31 = ATgetArgument(u_31, 0);
          w_31 = ATgetArgument(u_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_31), not_null(w_31)));
        }
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
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_Cong_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      {
        ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,x_33 = NULL,z_33 = NULL,b_34 = NULL;
        ATerm s_11;
        s_11 = t;
        {
          ATerm d_33 = NULL;
          t = not_null(u_32);
          {
            ATerm g_33 = NULL;
            t = map_1(t, new_0);
            {
              d_33 = t;
              {
                if(((a_33 != NULL) && (a_33 != d_33)))
                  _fail(d_33);
                else
                  a_33 = d_33;
                {
                  t = not_null(a_33);
                  {
                    ATerm h_33 = NULL;
                    ATerm g_1 (ATerm t)
                    {
                      ATerm e_33 = NULL;
                      ATerm f_33 = NULL;
                      f_33 = t;
                      if(((e_33 != NULL) && (e_33 != f_33)))
                        _fail(f_33);
                      else
                        e_33 = f_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33));
                      return(t);
                    }
                    t = map_1(t, g_1);
                    {
                      g_33 = t;
                      {
                        if(((x_32 != NULL) && (x_32 != g_33)))
                          _fail(g_33);
                        else
                          x_32 = g_33;
                        {
                          ATerm i_33 = NULL;
                          t = new_0(t);
                          {
                            h_33 = t;
                            {
                              if(((y_32 != NULL) && (y_32 != h_33)))
                                _fail(h_33);
                              else
                                y_32 = h_33;
                              {
                                t = not_null(u_32);
                                {
                                  ATerm l_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    i_33 = t;
                                    {
                                      if(((b_33 != NULL) && (b_33 != i_33)))
                                        _fail(i_33);
                                      else
                                        b_33 = i_33;
                                      {
                                        t = not_null(b_33);
                                        {
                                          ATerm m_33 = NULL,w_33 = NULL;
                                          ATerm h_1 (ATerm t)
                                          {
                                            ATerm j_33 = NULL;
                                            ATerm k_33 = NULL;
                                            k_33 = t;
                                            if(((j_33 != NULL) && (j_33 != k_33)))
                                              _fail(k_33);
                                            else
                                              j_33 = k_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_33));
                                            return(t);
                                          }
                                          t = map_1(t, h_1);
                                          {
                                            l_33 = t;
                                            {
                                              if(((z_32 != NULL) && (z_32 != l_33)))
                                                _fail(l_33);
                                              else
                                                z_32 = l_33;
                                              {
                                                ATerm n_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    n_33 = t;
                                                    if(((m_33 != NULL) && (m_33 != n_33)))
                                                      _fail(n_33);
                                                    else
                                                      m_33 = n_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(u_32));
                                                  {
                                                    ATerm i_1 (ATerm t)
                                                    {
                                                      ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
                                                      o_33 = t;
                                                      l_32 :
                                                      if(match_cons(o_33, sym__2))
                                                        {
                                                          p_33 = ATgetArgument(o_33, 0);
                                                          s_33 = ATgetArgument(o_33, 1);
                                                          m_32 :
                                                          if(match_cons(p_33, sym__2))
                                                            {
                                                              q_33 = ATgetArgument(p_33, 0);
                                                              r_33 = ATgetArgument(p_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_33)))));
                                                            }
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
                                                    t = zip_1(t, i_1);
                                                    {
                                                      w_33 = t;
                                                      if(((c_33 != NULL) && (c_33 != w_33)))
                                                        _fail(w_33);
                                                      else
                                                        c_33 = w_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = s_11;
        {
          ATerm t_11;
          t_11 = t;
          {
            ATerm y_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
            {
              t = conc_0(t);
              {
                y_33 = t;
                if(((x_33 != NULL) && (x_33 != y_33)))
                  _fail(y_33);
                else
                  x_33 = y_33;
              }
            }
          }
          t = t_11;
          {
            ATerm u_11;
            u_11 = t;
            {
              ATerm a_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_32), not_null(x_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32))));
              {
                t = Mapp2_0(t);
                {
                  a_34 = t;
                  if(((z_33 != NULL) && (z_33 != a_34)))
                    _fail(a_34);
                  else
                    z_33 = a_34;
                }
              }
            }
            t = u_11;
            {
              ATerm c_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_32), not_null(z_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32))));
              {
                t = Bapp2_0(t);
                {
                  c_34 = t;
                  if(((b_34 != NULL) && (b_34 != c_34)))
                    _fail(c_34);
                  else
                    b_34 = c_34;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(x_33)), not_null(y_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_33)), not_null(b_34))));
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
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_cons(h_35, sym_Build_1))
    {
      i_35 = ATgetArgument(h_35, 0);
      {
        ATerm v_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
            ATerm o_35 = NULL;
            ATerm s_35 = NULL;
            t = new_0(t);
            {
              o_35 = t;
              {
                if(((m_35 != NULL) && (m_35 != o_35)))
                  _fail(o_35);
                else
                  m_35 = o_35;
                {
                  t = not_null(i_35);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                      p_35 = t;
                      w_34 :
                      if(match_cons(p_35, sym_Anno_2))
                        {
                          q_35 = ATgetArgument(p_35, 0);
                          r_35 = ATgetArgument(p_35, 1);
                          {
                            if(((k_35 != NULL) && (k_35 != q_35)))
                              _fail(q_35);
                            else
                              k_35 = q_35;
                            {
                              if(((l_35 != NULL) && (l_35 != r_35)))
                                _fail(r_35);
                              else
                                l_35 = r_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35));
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
                      s_35 = t;
                      if(((n_35 != NULL) && (n_35 != s_35)))
                        _fail(s_35);
                      else
                        n_35 = s_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_35)), not_null(k_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_35))));
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = v_11;
            {
              ATerm z_11 = t;
              int d_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
                  ATerm x_35 = NULL;
                  ATerm a_36 = NULL;
                  t = new_0(t);
                  {
                    x_35 = t;
                    {
                      if(((v_35 != NULL) && (v_35 != x_35)))
                        _fail(x_35);
                      else
                        v_35 = x_35;
                      {
                        t = not_null(i_35);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm y_35 = NULL,z_35 = NULL;
                            y_35 = t;
                            a_35 :
                            if(match_cons(y_35, sym_RootApp_1))
                              {
                                z_35 = ATgetArgument(y_35, 0);
                                {
                                  if(((u_35 != NULL) && (u_35 != z_35)))
                                    _fail(z_35);
                                  else
                                    u_35 = z_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_35));
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
                            a_36 = t;
                            if(((w_35 != NULL) && (w_35 != a_36)))
                              _fail(a_36);
                            else
                              w_35 = a_36;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_35))));
                  ;
                  LocalPopChoice(d_12);
                }
              else
                {
                  t = z_11;
                  {
                    ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
                    ATerm g_36 = NULL;
                    ATerm k_36 = NULL;
                    t = new_0(t);
                    {
                      g_36 = t;
                      {
                        if(((e_36 != NULL) && (e_36 != g_36)))
                          _fail(g_36);
                        else
                          e_36 = g_36;
                        {
                          t = not_null(i_35);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
                              h_36 = t;
                              e_35 :
                              if(match_cons(h_36, sym_App_2))
                                {
                                  i_36 = ATgetArgument(h_36, 0);
                                  j_36 = ATgetArgument(h_36, 1);
                                  {
                                    if(((c_36 != NULL) && (c_36 != i_36)))
                                      _fail(i_36);
                                    else
                                      c_36 = i_36;
                                    {
                                      if(((d_36 != NULL) && (d_36 != j_36)))
                                        _fail(j_36);
                                      else
                                        d_36 = j_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_36));
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
                              k_36 = t;
                              if(((f_36 != NULL) && (f_36 != k_36)))
                                _fail(k_36);
                              else
                                f_36 = k_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_36), not_null(d_36), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_36))));
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
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym__2))
    {
      a_37 = ATgetArgument(z_36, 0);
      b_37 = ATgetArgument(z_36, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_37)), not_null(a_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  j_37 = t;
  g_37 :
  if(match_cons(j_37, sym__2))
    {
      k_37 = ATgetArgument(j_37, 0);
      n_37 = ATgetArgument(j_37, 1);
      h_37 :
      if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
        {
          l_37 = ATgetFirst((ATermList) k_37);
          m_37 = (ATerm) ATgetNext((ATermList) k_37);
          i_37 :
          if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
            {
              o_37 = ATgetFirst((ATermList) n_37);
              p_37 = (ATerm) ATgetNext((ATermList) n_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_37), not_null(o_37)), (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(p_37)));
            }
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
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  w_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      x_37 :
      if(((ATgetType(a_38) == AT_LIST) && ATisEmpty(a_38)))
        {
          y_37 :
          if(((ATgetType(b_38) == AT_LIST) && ATisEmpty(b_38)))
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
ATerm genzip_4 (ATerm t, ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm))
{
  ATerm d_38 (ATerm t)
  {
    ATerm h_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = h_12;
        {
          t = y_104(t);
          {
            t = _2(t, a_105, d_38);
            t = z_104(t);
          }
        }
      }
    return(t);
  }
  t = d_38(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  c_39 = t;
  v_38 :
  if(match_cons(c_39, sym_Call_2))
    {
      d_39 = ATgetArgument(c_39, 0);
      f_39 = ATgetArgument(c_39, 1);
      w_38 :
      if(match_cons(d_39, sym_SVar_1))
        {
          e_39 = ATgetArgument(d_39, 0);
          x_38 :
          if(match_string(e_39, "Anno_Cong__"))
            {
              y_38 :
              if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
                {
                  g_39 = ATgetFirst((ATermList) f_39);
                  j_39 = (ATerm) ATgetNext((ATermList) f_39);
                  z_38 :
                  if(match_cons(g_39, sym_Cong_2))
                    {
                      h_39 = ATgetArgument(g_39, 0);
                      i_39 = ATgetArgument(g_39, 1);
                      a_39 :
                      if(((ATgetType(j_39) == AT_LIST) && !(ATisEmpty(j_39))))
                        {
                          k_39 = ATgetFirst((ATermList) j_39);
                          l_39 = (ATerm) ATgetNext((ATermList) j_39);
                          b_39 :
                          if(((ATgetType(l_39) == AT_LIST) && ATisEmpty(l_39)))
                            {
                              {
                                ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,q_42 = NULL,s_42 = NULL,u_42 = NULL;
                                ATerm n_12;
                                n_12 = t;
                                {
                                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(k_39));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      k_40 = t;
                                      r_38 :
                                      if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
                                        {
                                          l_40 = ATgetFirst((ATermList) k_40);
                                          m_40 = (ATerm) ATgetNext((ATermList) k_40);
                                          {
                                            ATerm p_40 = NULL;
                                            if(((p_39 != NULL) && (p_39 != l_40)))
                                              _fail(l_40);
                                            else
                                              p_39 = l_40;
                                            {
                                              if(((y_39 != NULL) && (y_39 != m_40)))
                                                _fail(m_40);
                                              else
                                                y_39 = m_40;
                                              {
                                                ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
                                                ATerm m_1 (ATerm t)
                                                {
                                                  ATerm n_40 = NULL;
                                                  ATerm o_40 = NULL;
                                                  o_40 = t;
                                                  if(((n_40 != NULL) && (n_40 != o_40)))
                                                    _fail(o_40);
                                                  else
                                                    n_40 = o_40;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_40));
                                                  return(t);
                                                }
                                                t = map_1(t, m_1);
                                                {
                                                  p_40 = t;
                                                  {
                                                    if(((q_39 != NULL) && (q_39 != p_40)))
                                                      _fail(p_40);
                                                    else
                                                      q_39 = p_40;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(k_39));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          v_40 = t;
                                                          q_38 :
                                                          if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
                                                            {
                                                              w_40 = ATgetFirst((ATermList) v_40);
                                                              x_40 = (ATerm) ATgetNext((ATermList) v_40);
                                                              {
                                                                ATerm j_41 = NULL;
                                                                if(((r_39 != NULL) && (r_39 != w_40)))
                                                                  _fail(w_40);
                                                                else
                                                                  r_39 = w_40;
                                                                {
                                                                  if(((z_39 != NULL) && (z_39 != x_40)))
                                                                    _fail(x_40);
                                                                  else
                                                                    z_39 = x_40;
                                                                  {
                                                                    ATerm k_41 = NULL,p_42 = NULL;
                                                                    ATerm n_1 (ATerm t)
                                                                    {
                                                                      ATerm y_40 = NULL;
                                                                      ATerm i_41 = NULL;
                                                                      i_41 = t;
                                                                      if(((y_40 != NULL) && (y_40 != i_41)))
                                                                        _fail(i_41);
                                                                      else
                                                                        y_40 = i_41;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_40));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, n_1);
                                                                    {
                                                                      j_41 = t;
                                                                      {
                                                                        if(((x_39 != NULL) && (x_39 != j_41)))
                                                                          _fail(j_41);
                                                                        else
                                                                          x_39 = j_41;
                                                                        {
                                                                          ATerm l_41 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(z_39));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              l_41 = t;
                                                                              if(((k_41 != NULL) && (k_41 != l_41)))
                                                                                _fail(l_41);
                                                                              else
                                                                                k_41 = l_41;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(k_39)));
                                                                            {
                                                                              ATerm o_1 (ATerm t)
                                                                              {
                                                                                ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,l_42 = NULL;
                                                                                m_41 = t;
                                                                                n_38 :
                                                                                if(match_cons(m_41, sym__2))
                                                                                  {
                                                                                    n_41 = ATgetArgument(m_41, 0);
                                                                                    l_42 = ATgetArgument(m_41, 1);
                                                                                    o_38 :
                                                                                    if(match_cons(n_41, sym__2))
                                                                                      {
                                                                                        o_41 = ATgetArgument(n_41, 0);
                                                                                        p_41 = ATgetArgument(n_41, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_41))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_41)))));
                                                                                      }
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
                                                                              t = zip_1(t, o_1);
                                                                              {
                                                                                p_42 = t;
                                                                                if(((a_40 != NULL) && (a_40 != p_42)))
                                                                                  _fail(p_42);
                                                                                else
                                                                                  a_40 = p_42;
                                                                              }
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
                                t = n_12;
                                {
                                  ATerm w_12;
                                  w_12 = t;
                                  {
                                    ATerm r_42 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(z_39));
                                    {
                                      t = conc_0(t);
                                      {
                                        r_42 = t;
                                        if(((q_42 != NULL) && (q_42 != r_42)))
                                          _fail(r_42);
                                        else
                                          q_42 = r_42;
                                      }
                                    }
                                  }
                                  t = w_12;
                                  {
                                    ATerm x_12;
                                    x_12 = t;
                                    {
                                      ATerm t_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_39), not_null(q_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_39))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          t_42 = t;
                                          if(((s_42 != NULL) && (s_42 != t_42)))
                                            _fail(t_42);
                                          else
                                            s_42 = t_42;
                                        }
                                      }
                                    }
                                    t = x_12;
                                    {
                                      ATerm v_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(h_39), not_null(x_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_39))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          v_42 = t;
                                          if(((u_42 != NULL) && (u_42 != v_42)))
                                            _fail(v_42);
                                          else
                                            u_42 = v_42;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(q_42)), not_null(r_39)), not_null(p_39)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_40)), not_null(u_42))));
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
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  g_44 :
  if(match_cons(k_44, sym_As_2))
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
            t = a_91(t);
            {
              s_44 = t;
              {
                t = not_null(m_44);
                {
                  ATerm w_44 = NULL;
                  t = b_91(t);
                  {
                    u_44 = t;
                    {
                      ATerm x_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(s_44), not_null(u_44)), not_null(q_44));
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
ATerm Prim_2 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_Prim_2))
    {
      k_45 = ATgetArgument(j_45, 0);
      l_45 = ATgetArgument(j_45, 1);
      {
        ATerm p_45 = NULL,r_45 = NULL;
        ATerm q_45 = NULL;
        t = SSLgetAnnotations(not_null(j_45));
        {
          q_45 = t;
          if(((p_45 != NULL) && (p_45 != q_45)))
            _fail(q_45);
          else
            p_45 = q_45;
        }
        {
          t = not_null(k_45);
          {
            ATerm t_45 = NULL;
            t = x_86(t);
            {
              r_45 = t;
              {
                t = not_null(l_45);
                {
                  ATerm v_45 = NULL;
                  t = y_86(t);
                  {
                    t_45 = t;
                    {
                      ATerm w_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_45), not_null(t_45)), not_null(p_45));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm))
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  i_46 = t;
  h_46 :
  if(match_cons(i_46, sym_Explode_2))
    {
      j_46 = ATgetArgument(i_46, 0);
      k_46 = ATgetArgument(i_46, 1);
      {
        ATerm o_46 = NULL,q_46 = NULL;
        ATerm p_46 = NULL;
        t = SSLgetAnnotations(not_null(i_46));
        {
          p_46 = t;
          if(((o_46 != NULL) && (o_46 != p_46)))
            _fail(p_46);
          else
            o_46 = p_46;
        }
        {
          t = not_null(j_46);
          {
            ATerm s_46 = NULL;
            t = w_90(t);
            {
              q_46 = t;
              {
                t = not_null(k_46);
                {
                  ATerm u_46 = NULL;
                  t = x_90(t);
                  {
                    s_46 = t;
                    {
                      ATerm v_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(q_46), not_null(s_46)), not_null(o_46));
                      {
                        v_46 = t;
                        if(((u_46 != NULL) && (u_46 != v_46)))
                          _fail(v_46);
                        else
                          u_46 = v_46;
                      }
                      t = not_null(u_46);
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
  ATerm l_47 = NULL,m_47 = NULL,p_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym_Op_2))
    {
      m_47 = ATgetArgument(l_47, 0);
      p_47 = ATgetArgument(l_47, 1);
      {
        ATerm t_47 = NULL,v_47 = NULL;
        ATerm u_47 = NULL;
        t = SSLgetAnnotations(not_null(l_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        {
          t = not_null(m_47);
          {
            ATerm x_47 = NULL;
            t = b_89(t);
            {
              v_47 = t;
              {
                t = not_null(p_47);
                {
                  ATerm z_47 = NULL;
                  t = c_89(t);
                  {
                    x_47 = t;
                    {
                      ATerm a_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_47), not_null(x_47)), not_null(t_47));
                      {
                        a_48 = t;
                        if(((z_47 != NULL) && (z_47 != a_48)))
                          _fail(a_48);
                        else
                          z_47 = a_48;
                      }
                      t = not_null(z_47);
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
  ATerm y_12 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_98(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = y_12;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = pat_td_1(t, s_98);
                return(t);
              }
              t = fetch_1(t, q_1);
              return(t);
            }
            t = Op_2(t, _id, p_1);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, r_1);
                  ;
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
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_98);
                          return(t);
                        }
                        t = Explode_2(t, s_1, _id);
                        ;
                        LocalPopChoice(l_13);
                      }
                    else
                      {
                        t = k_13;
                        {
                          ATerm y_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 (ATerm t)
                              {
                                ATerm u_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
                                  return(t);
                                }
                                t = fetch_1(t, u_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, t_1);
                              ;
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = y_13;
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
                                  return(t);
                                }
                                t = As_2(t, _id, v_1);
                              }
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
  ATerm b_49 = NULL,c_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym_Match_1))
    {
      c_49 = ATgetArgument(b_49, 0);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
            ATerm i_49 = NULL;
            ATerm m_49 = NULL;
            t = new_0(t);
            {
              i_49 = t;
              {
                if(((g_49 != NULL) && (g_49 != i_49)))
                  _fail(i_49);
                else
                  g_49 = i_49;
                {
                  t = not_null(c_49);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
                      j_49 = t;
                      l_48 :
                      if(match_cons(j_49, sym_Anno_2))
                        {
                          k_49 = ATgetArgument(j_49, 0);
                          l_49 = ATgetArgument(j_49, 1);
                          {
                            if(((e_49 != NULL) && (e_49 != k_49)))
                              _fail(k_49);
                            else
                              e_49 = k_49;
                            {
                              if(((f_49 != NULL) && (f_49 != l_49)))
                                _fail(l_49);
                              else
                                f_49 = l_49;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_49)), not_null(e_49));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, w_1);
                    {
                      m_49 = t;
                      if(((h_49 != NULL) && (h_49 != m_49)))
                        _fail(m_49);
                      else
                        h_49 = m_49;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_49)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_49)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_49))))));
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
                  ATerm u_49 = NULL;
                  ATerm x_49 = NULL;
                  t = new_0(t);
                  {
                    u_49 = t;
                    {
                      if(((s_49 != NULL) && (s_49 != u_49)))
                        _fail(u_49);
                      else
                        s_49 = u_49;
                      {
                        t = not_null(c_49);
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm v_49 = NULL,w_49 = NULL;
                            v_49 = t;
                            p_48 :
                            if(match_cons(v_49, sym_RootApp_1))
                              {
                                w_49 = ATgetArgument(v_49, 0);
                                {
                                  if(((r_49 != NULL) && (r_49 != w_49)))
                                    _fail(w_49);
                                  else
                                    r_49 = w_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_49));
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
                            x_49 = t;
                            if(((t_49 != NULL) && (t_49 != x_49)))
                              _fail(x_49);
                            else
                              t_49 = x_49;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_49))), not_null(r_49))));
                  ;
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  {
                    ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
                    ATerm d_50 = NULL;
                    ATerm h_50 = NULL;
                    t = new_0(t);
                    {
                      d_50 = t;
                      {
                        if(((b_50 != NULL) && (b_50 != d_50)))
                          _fail(d_50);
                        else
                          b_50 = d_50;
                        {
                          t = not_null(c_49);
                          {
                            ATerm y_1 (ATerm t)
                            {
                              ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
                              e_50 = t;
                              t_48 :
                              if(match_cons(e_50, sym_App_2))
                                {
                                  f_50 = ATgetArgument(e_50, 0);
                                  g_50 = ATgetArgument(e_50, 1);
                                  {
                                    if(((a_50 != NULL) && (a_50 != f_50)))
                                      _fail(f_50);
                                    else
                                      a_50 = f_50;
                                    {
                                      if(((z_49 != NULL) && (z_49 != g_50)))
                                        _fail(g_50);
                                      else
                                        z_49 = g_50;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_50));
                                    }
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
                              h_50 = t;
                              if(((c_50 != NULL) && (c_50 != h_50)))
                                _fail(h_50);
                              else
                                c_50 = h_50;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_50))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_49)), not_null(a_50)))));
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
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym_Cong_2))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      {
        ATerm y_51 = NULL;
        ATerm c_52 = NULL;
        t = not_null(v_51);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm z_51 = NULL,a_52 = NULL;
            a_52 = t;
            q_51 :
            if(match_cons(a_52, sym_Match_1))
              {
                z_51 = ATgetArgument(a_52, 0);
                t = not_null(z_51);
              }
            else
              {
                if(match_cons(a_52, sym_Id_0))
                  {
                    t = term_f_14;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, z_1);
          {
            c_52 = t;
            if(((y_51 != NULL) && (y_51 != c_52)))
              _fail(c_52);
            else
              y_51 = c_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_51), not_null(y_51)));
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
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Scope_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      j_52 :
      if(((ATgetType(l_52) == AT_LIST) && ATisEmpty(l_52)))
        {
          t = not_null(m_52);
        }
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
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  v_52 :
  if(match_cons(i_53, sym_Where_1))
    {
      j_53 = ATgetArgument(i_53, 0);
      w_52 :
      if(match_cons(j_53, sym_Seq_2))
        {
          h_53 = ATgetArgument(j_53, 0);
          d_53 = ATgetArgument(j_53, 1);
          x_52 :
          if(match_cons(h_53, sym_Where_1))
            {
              c_53 = ATgetArgument(h_53, 0);
              y_52 :
              if(match_cons(d_53, sym_Seq_2))
                {
                  e_53 = ATgetArgument(d_53, 0);
                  g_53 = ATgetArgument(d_53, 1);
                  z_52 :
                  if(match_cons(e_53, sym_Build_1))
                    {
                      f_53 = ATgetArgument(e_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_53)), not_null(g_53))));
                    }
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
          if(match_cons(j_53, sym_Where_1))
            {
              h_53 = ATgetArgument(j_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(h_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(i_53, sym_Test_1))
        {
          j_53 = ATgetArgument(i_53, 0);
          a_53 :
          if(match_cons(j_53, sym_Test_1))
            {
              h_53 = ATgetArgument(j_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(h_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(i_53, sym_Not_1))
            {
              j_53 = ATgetArgument(i_53, 0);
              b_53 :
              if(match_cons(j_53, sym_Not_1))
                {
                  h_53 = ATgetArgument(j_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(h_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(i_53, sym_LChoice_2))
                {
                  j_53 = ATgetArgument(i_53, 0);
                  k_53 = ATgetArgument(i_53, 1);
                  {
                    if(((j_53 != NULL) && (j_53 != k_53)))
                      _fail(k_53);
                    else
                      j_53 = k_53;
                    t = not_null(j_53);
                  }
                }
              else
                {
                  if(match_cons(i_53, sym_Choice_2))
                    {
                      j_53 = ATgetArgument(i_53, 0);
                      k_53 = ATgetArgument(i_53, 1);
                      {
                        if(((j_53 != NULL) && (j_53 != k_53)))
                          _fail(k_53);
                        else
                          j_53 = k_53;
                        t = not_null(j_53);
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
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  j_54 = t;
  f_54 :
  if(match_cons(j_54, sym_LChoice_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      n_54 = ATgetArgument(j_54, 1);
      g_54 :
      if(match_cons(k_54, sym_LChoice_2))
        {
          l_54 = ATgetArgument(k_54, 0);
          m_54 = ATgetArgument(k_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_54), not_null(n_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_54, sym_Seq_2))
        {
          k_54 = ATgetArgument(j_54, 0);
          n_54 = ATgetArgument(j_54, 1);
          h_54 :
          if(match_cons(k_54, sym_Seq_2))
            {
              l_54 = ATgetArgument(k_54, 0);
              m_54 = ATgetArgument(k_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_54), not_null(n_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_54, sym_Choice_2))
            {
              k_54 = ATgetArgument(j_54, 0);
              n_54 = ATgetArgument(j_54, 1);
              i_54 :
              if(match_cons(k_54, sym_Choice_2))
                {
                  l_54 = ATgetArgument(k_54, 0);
                  m_54 = ATgetArgument(k_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_54), not_null(n_54)));
                }
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  a_56 = t;
  t_55 :
  if(match_cons(a_56, sym_Lets_2))
    {
      b_56 = ATgetArgument(a_56, 0);
      c_56 = ATgetArgument(a_56, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_56), not_null(c_56));
    }
  else
    {
      if(match_cons(a_56, sym_LChoices_1))
        {
          b_56 = ATgetArgument(a_56, 0);
          u_55 :
          if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
            {
              x_55 = ATgetFirst((ATermList) b_56);
              y_55 = (ATerm) ATgetNext((ATermList) b_56);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_55)));
            }
          else
            {
              if(((ATgetType(b_56) == AT_LIST) && ATisEmpty(b_56)))
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
          if(match_cons(a_56, sym_Choices_1))
            {
              b_56 = ATgetArgument(a_56, 0);
              v_55 :
              if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
                {
                  x_55 = ATgetFirst((ATermList) b_56);
                  y_55 = (ATerm) ATgetNext((ATermList) b_56);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_55)));
                }
              else
                {
                  if(((ATgetType(b_56) == AT_LIST) && ATisEmpty(b_56)))
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
              if(match_cons(a_56, sym_Seqs_1))
                {
                  b_56 = ATgetArgument(a_56, 0);
                  w_55 :
                  if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
                    {
                      x_55 = ATgetFirst((ATermList) b_56);
                      y_55 = (ATerm) ATgetNext((ATermList) b_56);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_55)));
                    }
                  else
                    {
                      if(((ATgetType(b_56) == AT_LIST) && ATisEmpty(b_56)))
                        {
                          t = term_g_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(a_56, sym_DefaultVarDec_1))
                    {
                      b_56 = ATgetArgument(a_56, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_14), term_t_14));
                    }
                  else
                    {
                      if(match_cons(a_56, sym_InfixApp_3))
                        {
                          b_56 = ATgetArgument(a_56, 0);
                          c_56 = ATgetArgument(a_56, 1);
                          z_55 = ATgetArgument(a_56, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_56), (ATerm) ATmakeAppl(sym_Op_2, term_u_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_55)), not_null(b_56))));
                        }
                      else
                        {
                          if(match_cons(a_56, sym_BAM_3))
                            {
                              b_56 = ATgetArgument(a_56, 0);
                              c_56 = ATgetArgument(a_56, 1);
                              z_55 = ATgetArgument(a_56, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(z_55))), not_null(b_56)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_56))));
                            }
                          else
                            {
                              if(match_cons(a_56, sym_AM_2))
                                {
                                  b_56 = ATgetArgument(a_56, 0);
                                  c_56 = ATgetArgument(a_56, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_56), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_56)));
                                }
                              else
                                {
                                  if(match_cons(a_56, sym_MA_2))
                                    {
                                      b_56 = ATgetArgument(a_56, 0);
                                      c_56 = ATgetArgument(a_56, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_56)), not_null(c_56));
                                    }
                                  else
                                    {
                                      if(match_cons(a_56, sym_BA_2))
                                        {
                                          b_56 = ATgetArgument(a_56, 0);
                                          c_56 = ATgetArgument(a_56, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_56)), not_null(b_56));
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
  ATerm d_58 = NULL,e_58 = NULL;
  d_58 = t;
  a_58 :
  if(match_cons(d_58, sym_Where_1))
    {
      e_58 = ATgetArgument(d_58, 0);
      c_58 :
      if(match_cons(e_58, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  h_58 :
  if(match_cons(j_58, sym_LChoice_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      i_58 :
      if(match_cons(l_58, sym_Fail_0))
        {
          t = not_null(k_58);
        }
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
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  p_58 :
  if(match_cons(r_58, sym_LChoice_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      q_58 :
      if(match_cons(s_58, sym_Fail_0))
        {
          t = not_null(t_58);
        }
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
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  x_58 :
  if(match_cons(z_58, sym_Choice_2))
    {
      a_59 = ATgetArgument(z_58, 0);
      b_59 = ATgetArgument(z_58, 1);
      y_58 :
      if(match_cons(b_59, sym_Fail_0))
        {
          t = not_null(a_59);
        }
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
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  f_59 :
  if(match_cons(h_59, sym_Choice_2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      g_59 :
      if(match_cons(i_59, sym_Fail_0))
        {
          t = not_null(j_59);
        }
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
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  o_59 :
  if(match_cons(p_59, sym_Cong_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      {
        t = not_null(r_59);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm u_59 = NULL;
            u_59 = t;
            n_59 :
            if(!(match_cons(u_59, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, a_2);
        }
        t = term_z_7;
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
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  x_59 :
  if(match_cons(z_59, sym_Path_2))
    {
      a_60 = ATgetArgument(z_59, 0);
      b_60 = ATgetArgument(z_59, 1);
      y_59 :
      if(match_cons(b_60, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm h_60 = NULL,i_60 = NULL;
  h_60 = t;
  f_60 :
  if(match_cons(h_60, sym_One_1))
    {
      i_60 = ATgetArgument(h_60, 0);
      g_60 :
      if(match_cons(i_60, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm n_60 = NULL,o_60 = NULL;
  n_60 = t;
  l_60 :
  if(match_cons(n_60, sym_Some_1))
    {
      o_60 = ATgetArgument(n_60, 0);
      m_60 :
      if(match_cons(o_60, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  r_60 :
  if(match_cons(t_60, sym_Rec_2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      s_60 :
      if(match_cons(v_60, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  c_61 = t;
  z_60 :
  if(match_cons(c_61, sym_Scope_2))
    {
      d_61 = ATgetArgument(c_61, 0);
      e_61 = ATgetArgument(c_61, 1);
      a_61 :
      if(match_cons(e_61, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  i_61 :
  if(match_cons(k_61, sym_Seq_2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      j_61 :
      if(match_cons(l_61, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm s_61 = NULL,t_61 = NULL;
  s_61 = t;
  q_61 :
  if(match_cons(s_61, sym_Not_1))
    {
      t_61 = ATgetArgument(s_61, 0);
      r_61 :
      if(match_cons(t_61, sym_Fail_0))
        {
          t = term_g_14;
        }
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
  ATerm y_61 = NULL,z_61 = NULL;
  y_61 = t;
  w_61 :
  if(match_cons(y_61, sym_Test_1))
    {
      z_61 = ATgetArgument(y_61, 0);
      x_61 :
      if(match_cons(z_61, sym_Fail_0))
        {
          t = term_z_7;
        }
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
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm z_14 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = z_14;
                  {
                    ATerm q_15 = t;
                    int r_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(r_15);
                      }
                    else
                      {
                        t = q_15;
                        {
                          ATerm x_15 = t;
                          int y_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(y_15);
                            }
                          else
                            {
                              t = x_15;
                              {
                                ATerm a_16 = t;
                                int b_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(b_16);
                                  }
                                else
                                  {
                                    t = a_16;
                                    {
                                      ATerm c_16 = t;
                                      int d_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(d_16);
                                        }
                                      else
                                        {
                                          t = c_16;
                                          {
                                            ATerm s_16 = t;
                                            int t_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(t_16);
                                              }
                                            else
                                              {
                                                t = s_16;
                                                {
                                                  ATerm u_16 = t;
                                                  int v_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(v_16);
                                                    }
                                                  else
                                                    {
                                                      t = u_16;
                                                      {
                                                        ATerm w_16 = t;
                                                        int x_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(x_16);
                                                          }
                                                        else
                                                          {
                                                            t = w_16;
                                                            {
                                                              ATerm y_16 = t;
                                                              int z_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(z_16);
                                                                }
                                                              else
                                                                {
                                                                  t = y_16;
                                                                  {
                                                                    ATerm a_17 = t;
                                                                    int i_17 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(i_17);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_17;
                                                                        {
                                                                          ATerm j_17 = t;
                                                                          int k_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(k_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_17;
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
  ATerm g_62 = NULL,h_62 = NULL;
  g_62 = t;
  c_62 :
  if(match_cons(g_62, sym_Match_1))
    {
      h_62 = ATgetArgument(g_62, 0);
      f_62 :
      if(match_cons(h_62, sym_Wld_0))
        {
          t = term_g_14;
        }
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
  ATerm r_62 = NULL,s_62 = NULL;
  r_62 = t;
  k_62 :
  if(match_cons(r_62, sym_Where_1))
    {
      s_62 = ATgetArgument(r_62, 0);
      l_62 :
      if(match_cons(s_62, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm x_62 = NULL,y_62 = NULL;
  x_62 = t;
  v_62 :
  if(match_cons(x_62, sym_All_1))
    {
      y_62 = ATgetArgument(x_62, 0);
      w_62 :
      if(match_cons(y_62, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
  d_63 = t;
  b_63 :
  if(match_cons(d_63, sym_Rec_2))
    {
      e_63 = ATgetArgument(d_63, 0);
      f_63 = ATgetArgument(d_63, 1);
      c_63 :
      if(match_cons(f_63, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  j_63 :
  if(match_cons(l_63, sym_Scope_2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      k_63 :
      if(match_cons(n_63, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  r_63 :
  if(match_cons(t_63, sym_LChoice_2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      s_63 :
      if(match_cons(u_63, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  z_63 :
  if(match_cons(b_64, sym_Seq_2))
    {
      c_64 = ATgetArgument(b_64, 0);
      d_64 = ATgetArgument(b_64, 1);
      a_64 :
      if(match_cons(d_64, sym_Id_0))
        {
          t = not_null(c_64);
        }
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
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym_Seq_2))
    {
      k_64 = ATgetArgument(j_64, 0);
      l_64 = ATgetArgument(j_64, 1);
      i_64 :
      if(match_cons(k_64, sym_Id_0))
        {
          t = not_null(l_64);
        }
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
  ATerm r_64 = NULL,s_64 = NULL;
  r_64 = t;
  p_64 :
  if(match_cons(r_64, sym_Not_1))
    {
      s_64 = ATgetArgument(r_64, 0);
      q_64 :
      if(match_cons(s_64, sym_Id_0))
        {
          t = term_z_7;
        }
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
  ATerm x_64 = NULL,y_64 = NULL;
  x_64 = t;
  v_64 :
  if(match_cons(x_64, sym_Test_1))
    {
      y_64 = ATgetArgument(x_64, 0);
      w_64 :
      if(match_cons(y_64, sym_Id_0))
        {
          t = term_g_14;
        }
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
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm r_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = r_17;
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  {
                    ATerm h_18 = t;
                    int i_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(i_18);
                      }
                    else
                      {
                        t = h_18;
                        {
                          ATerm j_18 = t;
                          int k_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(k_18);
                            }
                          else
                            {
                              t = j_18;
                              {
                                ATerm l_18 = t;
                                int m_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(m_18);
                                  }
                                else
                                  {
                                    t = l_18;
                                    {
                                      ATerm u_18 = t;
                                      int v_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(v_18);
                                        }
                                      else
                                        {
                                          t = u_18;
                                          {
                                            ATerm w_18 = t;
                                            int z_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(z_18);
                                              }
                                            else
                                              {
                                                t = w_18;
                                                {
                                                  ATerm a_19 = t;
                                                  int b_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(b_19);
                                                    }
                                                  else
                                                    {
                                                      t = a_19;
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
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm h_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = h_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  {
                    ATerm s_19 = t;
                    int d_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(d_20);
                      }
                    else
                      {
                        t = s_19;
                        {
                          ATerm f_20 = t;
                          int g_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(g_20);
                            }
                          else
                            {
                              t = f_20;
                              {
                                ATerm h_20 = t;
                                int i_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(i_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    {
                                      ATerm j_20 = t;
                                      int l_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(l_20);
                                        }
                                      else
                                        {
                                          t = j_20;
                                          {
                                            ATerm q_20 = t;
                                            int r_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(r_20);
                                              }
                                            else
                                              {
                                                t = q_20;
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
ATerm Optimize_0 (ATerm t)
{
  ATerm s_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = s_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm c_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  ;
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = c_21;
                  {
                    ATerm f_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        ;
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = f_21;
                        {
                          ATerm h_21 = t;
                          int i_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              ;
                              LocalPopChoice(i_21);
                            }
                          else
                            {
                              t = h_21;
                              {
                                ATerm l_21 = t;
                                int m_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    ;
                                    LocalPopChoice(m_21);
                                  }
                                else
                                  {
                                    t = l_21;
                                    {
                                      ATerm n_21 = t;
                                      int o_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          ;
                                          LocalPopChoice(o_21);
                                        }
                                      else
                                        {
                                          t = n_21;
                                          t = InlineDont_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1 (ATerm t, ATerm l_120 (ATerm))
{
  ATerm b_65 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = l_120(t);
      t = b_65(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = b_65(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_100 (ATerm))
{
  t = n_100(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = downup_1(t, n_100);
      return(t);
    }
    t = _all(t, c_2);
    t = n_100(t);
  }
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          ;
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, e_2);
    return(t);
  }
  t = downup_1(t, d_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  j_65 = t;
  i_65 :
  if(match_cons(j_65, sym_SDef_3))
    {
      k_65 = ATgetArgument(j_65, 0);
      l_65 = ATgetArgument(j_65, 1);
      m_65 = ATgetArgument(j_65, 2);
      {
        ATerm r_65 = NULL,t_65 = NULL;
        ATerm s_65 = NULL;
        t = SSLgetAnnotations(not_null(j_65));
        {
          s_65 = t;
          if(((r_65 != NULL) && (r_65 != s_65)))
            _fail(s_65);
          else
            r_65 = s_65;
        }
        {
          t = not_null(k_65);
          {
            ATerm v_65 = NULL;
            t = l_88(t);
            {
              t_65 = t;
              {
                t = not_null(l_65);
                {
                  ATerm x_65 = NULL;
                  t = m_88(t);
                  {
                    v_65 = t;
                    {
                      t = not_null(m_65);
                      {
                        ATerm z_65 = NULL;
                        t = n_88(t);
                        {
                          x_65 = t;
                          {
                            ATerm a_66 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(t_65), not_null(v_65), not_null(x_65)), not_null(r_65));
                            {
                              a_66 = t;
                              if(((z_65 != NULL) && (z_65 != a_66)))
                                _fail(a_66);
                              else
                                z_65 = a_66;
                            }
                            t = not_null(z_65);
                          }
                        }
                      }
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
  ATerm m_66 = NULL,n_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_cons(m_66, sym_Strategies_1))
    {
      n_66 = ATgetArgument(m_66, 0);
      {
        ATerm q_66 = NULL,s_66 = NULL;
        ATerm r_66 = NULL;
        t = SSLgetAnnotations(not_null(m_66));
        {
          r_66 = t;
          if(((q_66 != NULL) && (q_66 != r_66)))
            _fail(r_66);
          else
            q_66 = r_66;
        }
        {
          t = not_null(n_66);
          {
            ATerm u_66 = NULL;
            t = p_89(t);
            {
              s_66 = t;
              {
                ATerm v_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_66)), not_null(q_66));
                {
                  v_66 = t;
                  if(((u_66 != NULL) && (u_66 != v_66)))
                    _fail(v_66);
                  else
                    u_66 = v_66;
                }
                t = not_null(u_66);
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
  ATerm f_67 = NULL,g_67 = NULL;
  f_67 = t;
  e_67 :
  if(match_cons(f_67, sym_Specification_1))
    {
      g_67 = ATgetArgument(f_67, 0);
      {
        ATerm j_67 = NULL,l_67 = NULL;
        ATerm k_67 = NULL;
        t = SSLgetAnnotations(not_null(f_67));
        {
          k_67 = t;
          if(((j_67 != NULL) && (j_67 != k_67)))
            _fail(k_67);
          else
            j_67 = k_67;
        }
        {
          t = not_null(g_67);
          {
            ATerm n_67 = NULL;
            t = r_89(t);
            {
              l_67 = t;
              {
                ATerm o_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(l_67)), not_null(j_67));
                {
                  o_67 = t;
                  if(((n_67 != NULL) && (n_67 != o_67)))
                    _fail(o_67);
                  else
                    n_67 = o_67;
                }
                t = not_null(n_67);
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
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm j_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, p_98);
            return(t);
          }
          t = map_1(t, j_2);
          return(t);
        }
        t = Strategies_1(t, i_2);
        return(t);
      }
      t = Cons_2(t, h_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, g_2);
    return(t);
  }
  t = Specification_1(t, f_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym__2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      {
        ATerm f_68 = NULL,h_68 = NULL;
        ATerm g_68 = NULL;
        t = SSLgetAnnotations(not_null(z_67));
        {
          g_68 = t;
          if(((f_68 != NULL) && (f_68 != g_68)))
            _fail(g_68);
          else
            f_68 = g_68;
        }
        {
          t = not_null(a_68);
          {
            ATerm j_68 = NULL;
            t = m_85(t);
            {
              h_68 = t;
              {
                t = not_null(b_68);
                {
                  ATerm l_68 = NULL;
                  t = n_85(t);
                  {
                    j_68 = t;
                    {
                      ATerm m_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_68), not_null(j_68)), not_null(f_68));
                      {
                        m_68 = t;
                        if(((l_68 != NULL) && (l_68 != m_68)))
                          _fail(m_68);
                        else
                          l_68 = m_68;
                      }
                      t = not_null(l_68);
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
  ATerm u_68 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm v_68 = NULL,w_68 = NULL;
      v_68 = t;
      t_68 :
      if(match_cons(v_68, sym_Program_1))
        {
          w_68 = ATgetArgument(v_68, 0);
          if(((u_68 != NULL) && (u_68 != w_68)))
            _fail(w_68);
          else
            u_68 = w_68;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_22), not_null(u_68)), term_b_22));
      {
        t = printnl_0(t);
        {
          t = term_d_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  a_69 = t;
  z_68 :
  if(match_cons(a_69, sym__2))
    {
      b_69 = ATgetArgument(a_69, 0);
      c_69 = ATgetArgument(a_69, 1);
      {
        ATerm e_22;
        e_22 = t;
        t = SSL_printnl(not_null(b_69), not_null(c_69));
        t = e_22;
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
  ATerm h_69 = NULL;
  h_69 = t;
  t = SSL_implode_string(not_null(h_69));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm m_69 = NULL,n_69 = NULL,r_69 = NULL;
        m_69 = t;
        l_69 :
        if(((ATgetType(m_69) == AT_LIST) && !(ATisEmpty(m_69))))
          {
            n_69 = ATgetFirst((ATermList) m_69);
            r_69 = (ATerm) ATgetNext((ATermList) m_69);
            {
              t = not_null(n_69);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(r_69);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_2);
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
  ATerm b_70 = NULL;
  ATerm d_70 = NULL;
  b_70 = t;
  {
    ATerm e_70 = NULL;
    ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
    t = not_null(b_70);
    {
      e_70 = t;
      {
        t = SSL_explode_term(not_null(e_70));
        {
          g_70 = t;
          z_69 :
          if(match_cons(g_70, sym__2))
            {
              h_70 = ATgetArgument(g_70, 0);
              i_70 = ATgetArgument(g_70, 1);
              a_70 :
              if(match_string(h_70, ""))
                {
                  if(((d_70 != NULL) && (d_70 != i_70)))
                    _fail(i_70);
                  else
                    d_70 = i_70;
                }
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
      t = not_null(d_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm m_70 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_70);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          t = Nil_0(t);
          t = b_107(t);
        }
      }
    return(t);
  }
  t = m_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(match_cons(p_70, sym__2))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      {
        t = not_null(q_70);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(r_70);
            return(t);
          }
          t = at_end_1(t, m_2);
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
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_70 = NULL;
  w_70 = t;
  t = SSL_explode_string(not_null(w_70));
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
  ATerm a_71 = NULL;
  a_71 = t;
  t = SSL_is_string(not_null(a_71));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_2);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = w_22;
            {
              ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
              j_71 = t;
              i_71 :
              if(match_cons(j_71, sym_Path_1))
                {
                  k_71 = ATgetArgument(j_71, 0);
                  t = not_null(k_71);
                }
              else
                {
                  if(match_cons(j_71, sym_Var_1))
                    {
                      k_71 = ATgetArgument(j_71, 0);
                      {
                        t = not_null(k_71);
                        {
                          ATerm g_23 = t;
                          int h_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(h_23);
                            }
                          else
                            {
                              t = g_23;
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = term_i_23;
                                  return(t);
                                }
                                t = debug_1(t, o_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_71, sym_Prefix_2))
                        {
                          k_71 = ATgetArgument(j_71, 0);
                          l_71 = ATgetArgument(j_71, 1);
                          {
                            ATerm q_71 = NULL,s_71 = NULL;
                            ATerm j_23;
                            j_23 = t;
                            {
                              ATerm r_71 = NULL;
                              t = not_null(k_71);
                              {
                                t = eval_config_0(t);
                                {
                                  r_71 = t;
                                  if(((q_71 != NULL) && (q_71 != r_71)))
                                    _fail(r_71);
                                  else
                                    q_71 = r_71;
                                }
                              }
                            }
                            t = j_23;
                            {
                              ATerm t_71 = NULL;
                              t = not_null(l_71);
                              {
                                t = eval_config_0(t);
                                {
                                  t_71 = t;
                                  if(((s_71 != NULL) && (s_71 != t_71)))
                                    _fail(t_71);
                                  else
                                    s_71 = t_71;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_71), not_null(s_71));
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
  ATerm b_72 = NULL;
  b_72 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_23, not_null(b_72));
    {
      t = table_get_0(t);
      {
        ATerm p_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_23;
            l_23 = t;
            {
              ATerm d_72 = NULL;
              ATerm e_72 = NULL;
              e_72 = t;
              if(((d_72 != NULL) && (d_72 != e_72)))
                _fail(e_72);
              else
                d_72 = e_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_23, not_null(b_72), not_null(d_72));
                t = table_put_0(t);
              }
            }
            t = l_23;
          }
          return(t);
        }
        t = try_1(t, p_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_114 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm m_23;
    m_23 = t;
    {
      ATerm i_72 = NULL;
      ATerm j_72 = NULL;
      t = term_o_23;
      {
        t = get_config_0(t);
        {
          j_72 = t;
          if(((i_72 != NULL) && (i_72 != j_72)))
            _fail(j_72);
          else
            i_72 = j_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_72), term_p_23);
        t = geq_0(t);
      }
    }
    t = m_23;
    t = q_114(t);
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
  n_72 = t;
  m_72 :
  if(match_cons(n_72, sym__2))
    {
      o_72 = ATgetArgument(n_72, 0);
      p_72 = ATgetArgument(n_72, 1);
      t = SSL_WriteToTextFile(not_null(o_72), not_null(p_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
  v_72 = t;
  u_72 :
  if(match_cons(v_72, sym__2))
    {
      w_72 = ATgetArgument(v_72, 0);
      x_72 = ATgetArgument(v_72, 1);
      t = SSL_WriteToBinaryFile(not_null(w_72), not_null(x_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_73 = NULL;
  ATerm r_23;
  r_23 = t;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_2 (ATerm t)
          {
            ATerm n_73 = NULL,o_73 = NULL;
            n_73 = t;
            c_73 :
            if(match_cons(n_73, sym_Output_1))
              {
                o_73 = ATgetArgument(n_73, 0);
                if(((f_73 != NULL) && (f_73 != o_73)))
                  _fail(o_73);
                else
                  f_73 = o_73;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_2);
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          {
            ATerm u_73 = NULL;
            t = term_b_24;
            {
              u_73 = t;
              if(((f_73 != NULL) && (f_73 != u_73)))
                _fail(u_73);
              else
                f_73 = u_73;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_2, _id);
  }
  t = r_23;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        t = not_null(f_73);
        return(t);
      }
      t = split_2(t, u_2, _id);
      return(t);
    }
    t = _2(t, _id, t_2);
    {
      ATerm f_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm v_73 = NULL;
              v_73 = t;
              e_73 :
              if(!(match_cons(v_73, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_2);
            return(t);
          }
          t = _2(t, v_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(l_24);
        }
      else
        {
          t = f_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm b_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  ATerm r_24;
  r_24 = t;
  t = dtime_0(t);
  t = r_24;
  {
    t = p_124(t);
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm g_74 = NULL;
        t = dtime_0(t);
        {
          g_74 = t;
          if(((b_74 != NULL) && (b_74 != g_74)))
            _fail(g_74);
          else
            b_74 = g_74;
        }
      }
      t = s_24;
      {
        h_74 = t;
        a_74 :
        if(match_cons(h_74, sym__2))
          {
            i_74 = ATgetArgument(h_74, 0);
            j_74 = ATgetArgument(h_74, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_74)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_74))), not_null(j_74));
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
  ATerm t_24;
  t_24 = t;
  {
    ATerm q_74 = NULL,s_74 = NULL;
    ATerm u_24;
    u_24 = t;
    {
      ATerm r_74 = NULL;
      t = p_112(t);
      {
        r_74 = t;
        if(((q_74 != NULL) && (q_74 != r_74)))
          _fail(r_74);
        else
          q_74 = r_74;
      }
    }
    t = u_24;
    {
      ATerm t_74 = NULL;
      t_74 = t;
      if(((s_74 != NULL) && (s_74 != t_74)))
        _fail(t_74);
      else
        s_74 = t_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_74)), not_null(q_74)));
        t = printnl_0(t);
      }
    }
  }
  t = t_24;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_74 = NULL;
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_74 = NULL;
      y_74 = t;
      {
        if(((x_74 != NULL) && (x_74 != y_74)))
          _fail(y_74);
        else
          x_74 = y_74;
        t = SSL_ReadFromFile(not_null(x_74));
      }
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_x_24;
          return(t);
        }
        t = debug_1(t, x_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_103 (ATerm), ATerm y_103 (ATerm))
{
  ATerm m_75 = NULL,x_75 = NULL;
  ATerm f_25;
  f_25 = t;
  {
    ATerm w_75 = NULL;
    t = x_103(t);
    {
      w_75 = t;
      if(((m_75 != NULL) && (m_75 != w_75)))
        _fail(w_75);
      else
        m_75 = w_75;
    }
  }
  t = f_25;
  {
    ATerm y_75 = NULL;
    t = y_103(t);
    {
      y_75 = t;
      if(((x_75 != NULL) && (x_75 != y_75)))
        _fail(y_75);
      else
        x_75 = y_75;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_75), not_null(x_75));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_78 = NULL;
  ATerm h_25;
  h_25 = t;
  {
    ATerm j_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 (ATerm t)
        {
          ATerm d_78 = NULL,e_78 = NULL;
          d_78 = t;
          a_78 :
          if(match_cons(d_78, sym_Input_1))
            {
              e_78 = ATgetArgument(d_78, 0);
              if(((c_78 != NULL) && (c_78 != e_78)))
                _fail(e_78);
              else
                c_78 = e_78;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_2);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = j_25;
        {
          ATerm f_78 = NULL;
          t = term_m_25;
          {
            f_78 = t;
            if(((c_78 != NULL) && (c_78 != f_78)))
              _fail(f_78);
            else
              c_78 = f_78;
          }
        }
      }
  }
  t = h_25;
  {
    ATerm z_2 (ATerm t)
    {
      t = not_null(c_78);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm j_78 = NULL;
    j_78 = t;
    i_78 :
    if(!(match_string(j_78, "-v")))
      {
        if(!(match_string(j_78, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_u_25;
    t = set_config_0(t);
    t = term_v_25;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  t = Option_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm m_78 = NULL;
    m_78 = t;
    k_78 :
    if(!(match_string(m_78, "-k")))
      {
        if(!(match_string(m_78, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm y_25;
    y_25 = t;
    {
      ATerm n_78 = NULL;
      ATerm o_78 = NULL;
      t = string_to_int_0(t);
      {
        o_78 = t;
        if(((n_78 != NULL) && (n_78 != o_78)))
          _fail(o_78);
        else
          n_78 = o_78;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(n_78));
        t = set_config_0(t);
      }
    }
    t = y_25;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_78 = NULL;
  r_78 = t;
  t = SSL_string_to_int(not_null(r_78));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm z_78 = NULL;
        z_78 = t;
        u_78 :
        if(!(match_string(z_78, "-S")))
          {
            if(!(match_string(z_78, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_e_26;
        t = set_config_0(t);
        t = term_f_26;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_g_26;
        return(t);
      }
      t = Option_3(t, g_3, h_3, i_3);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm a_79 = NULL;
              a_79 = t;
              v_78 :
              if(!(match_string(a_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm n_79 = NULL;
              ATerm p_26;
              p_26 = t;
              {
                ATerm b_79 = NULL;
                ATerm c_79 = NULL;
                t = string_to_int_0(t);
                {
                  c_79 = t;
                  if(((b_79 != NULL) && (b_79 != c_79)))
                    _fail(c_79);
                  else
                    b_79 = c_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_23, not_null(b_79));
                  t = set_config_0(t);
                }
              }
              t = p_26;
              {
                ATerm o_79 = NULL;
                o_79 = t;
                if(((n_79 != NULL) && (n_79 != o_79)))
                  _fail(o_79);
                else
                  n_79 = o_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_79));
              }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_s_26;
              return(t);
            }
            t = ArgOption_3(t, k_3, l_3, m_3);
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm p_79 = NULL;
                p_79 = t;
                y_78 :
                if(!(match_string(p_79, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_x_26;
                t = set_config_0(t);
                t = term_a_27;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_b_27;
                return(t);
              }
              t = Option_3(t, n_3, o_3, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm e_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(f_27);
          }
        else
          {
            t = e_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm y_79 = NULL;
    y_79 = t;
    v_79 :
    if(!(match_string(y_79, "-o")))
      {
        if(!(match_string(y_79, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm b_80 = NULL;
    ATerm g_27;
    g_27 = t;
    {
      ATerm z_79 = NULL;
      ATerm a_80 = NULL;
      a_80 = t;
      if(((z_79 != NULL) && (z_79 != a_80)))
        _fail(a_80);
      else
        z_79 = a_80;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_27, not_null(z_79));
        t = set_config_0(t);
      }
    }
    t = g_27;
    {
      ATerm c_80 = NULL;
      c_80 = t;
      if(((b_80 != NULL) && (b_80 != c_80)))
        _fail(c_80);
      else
        b_80 = c_80;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_80));
    }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, q_3, r_3, s_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm g_80 = NULL;
          g_80 = t;
          f_80 :
          if(!(match_string(g_80, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_m_27;
          t = set_config_0(t);
          t = term_n_27;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_o_27;
          return(t);
        }
        t = Option_3(t, t_3, u_3, v_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
  g_83 = t;
  w_80 :
  if(match_string(g_83, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(g_83) == AT_LIST) && !(ATisEmpty(g_83))))
        {
          h_83 = ATgetFirst((ATermList) g_83);
          i_83 = (ATerm) ATgetNext((ATermList) g_83);
          f_83 :
          if(((ATgetType(i_83) == AT_LIST) && !(ATisEmpty(i_83))))
            {
              j_83 = ATgetFirst((ATermList) i_83);
              k_83 = (ATerm) ATgetNext((ATermList) i_83);
              {
                ATerm o_83 = NULL;
                ATerm p_27;
                p_27 = t;
                {
                  t = not_null(h_83);
                  t = k_0(t);
                }
                t = p_27;
                {
                  ATerm p_83 = NULL;
                  t = not_null(j_83);
                  {
                    t = l_0(t);
                    {
                      p_83 = t;
                      if(((o_83 != NULL) && (o_83 != p_83)))
                        _fail(p_83);
                      else
                        o_83 = p_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_83)), not_null(o_83));
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
  ATerm w_3 (ATerm t)
  {
    ATerm w_83 = NULL;
    w_83 = t;
    t_83 :
    if(!(match_string(w_83, "-i")))
      {
        if(!(match_string(w_83, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm z_83 = NULL;
    ATerm q_27;
    q_27 = t;
    {
      ATerm x_83 = NULL;
      ATerm y_83 = NULL;
      y_83 = t;
      if(((x_83 != NULL) && (x_83 != y_83)))
        _fail(y_83);
      else
        x_83 = y_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, not_null(x_83));
        t = set_config_0(t);
      }
    }
    t = q_27;
    {
      ATerm a_84 = NULL;
      a_84 = t;
      if(((z_83 != NULL) && (z_83 != a_84)))
        _fail(a_84);
      else
        z_83 = a_84;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_83));
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_s_27;
    return(t);
  }
  t = ArgOption_3(t, w_3, a_4, b_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATempty, term_x_27));
  {
    t = printnl_0(t);
    {
      t = term_d_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_84 = NULL;
  e_84 = t;
  t = SSL_TicksToSeconds(not_null(e_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL;
  j_84 = t;
  i_84 :
  if(match_cons(j_84, sym__2))
    {
      k_84 = ATgetArgument(j_84, 0);
      l_84 = ATgetArgument(j_84, 1);
      {
        ATerm j_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_84), not_null(l_84));
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = j_29;
            t = SSL_addr(not_null(k_84), not_null(l_84));
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
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_110(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
        s_84 = t;
        r_84 :
        if(((ATgetType(s_84) == AT_LIST) && !(ATisEmpty(s_84))))
          {
            t_84 = ATgetFirst((ATermList) s_84);
            u_84 = (ATerm) ATgetNext((ATermList) s_84);
            {
              ATerm x_84 = NULL;
              ATerm y_84 = NULL;
              t = not_null(u_84);
              {
                t = foldr_2(t, w_110, x_110);
                {
                  y_84 = t;
                  if(((x_84 != NULL) && (x_84 != y_84)))
                    _fail(y_84);
                  else
                    x_84 = y_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_84), not_null(x_84));
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
  ATerm f_85 = NULL;
  ATerm h_85 = NULL;
  f_85 = t;
  {
    ATerm i_85 = NULL;
    ATerm k_85 = NULL,l_85 = NULL,o_85 = NULL;
    t = not_null(f_85);
    {
      i_85 = t;
      {
        t = SSL_explode_term(not_null(i_85));
        {
          k_85 = t;
          e_85 :
          if(match_cons(k_85, sym__2))
            {
              l_85 = ATgetArgument(k_85, 0);
              o_85 = ATgetArgument(k_85, 1);
              if(((h_85 != NULL) && (h_85 != o_85)))
                _fail(o_85);
              else
                h_85 = o_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_85);
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
    ATerm c_4 (ATerm t)
    {
      t = term_d_26;
      return(t);
    }
    t = crush_2(t, c_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL;
  u_85 = t;
  t_85 :
  if(match_cons(u_85, sym__2))
    {
      v_85 = ATgetArgument(u_85, 0);
      w_85 = ATgetArgument(u_85, 1);
      {
        ATerm t_29;
        t_29 = t;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_85), not_null(w_85));
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = SSL_gtr(not_null(v_85), not_null(w_85));
            }
        }
        t = t_29;
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
  ATerm c_86 = NULL;
  ATerm w_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
      d_86 = t;
      b_86 :
      if(match_cons(d_86, sym__2))
        {
          e_86 = ATgetArgument(d_86, 0);
          f_86 = ATgetArgument(d_86, 1);
          {
            if(((c_86 != NULL) && (c_86 != e_86)))
              _fail(e_86);
            else
              c_86 = e_86;
            if(((c_86 != NULL) && (c_86 != f_86)))
              _fail(f_86);
            else
              c_86 = f_86;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = w_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_114 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm c_30;
    c_30 = t;
    {
      ATerm i_86 = NULL;
      ATerm j_86 = NULL;
      t = term_o_23;
      {
        t = get_config_0(t);
        {
          j_86 = t;
          if(((i_86 != NULL) && (i_86 != j_86)))
            _fail(j_86);
          else
            i_86 = j_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_86), term_d_22);
        t = geq_0(t);
      }
    }
    t = c_30;
    t = p_114(t);
    return(t);
  }
  t = try_1(t, d_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm n_86 = NULL,p_86 = NULL;
    ATerm d_30;
    d_30 = t;
    {
      ATerm o_86 = NULL;
      t = run_time_0(t);
      {
        o_86 = t;
        if(((n_86 != NULL) && (n_86 != o_86)))
          _fail(o_86);
        else
          n_86 = o_86;
      }
    }
    t = d_30;
    {
      ATerm q_86 = NULL;
      t = term_e_30;
      {
        t = get_config_0(t);
        {
          q_86 = t;
          if(((p_86 != NULL) && (p_86 != q_86)))
            _fail(q_86);
          else
            p_86 = q_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), not_null(n_86)), term_j_30), not_null(p_86)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_4);
  {
    t = term_d_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym_Version_0))
    {
      ATerm d_87 = NULL,h_87 = NULL;
      ATerm l_30;
      l_30 = t;
      {
        ATerm e_87 = NULL;
        t = SSLgetAnnotations(not_null(b_87));
        {
          e_87 = t;
          if(((d_87 != NULL) && (d_87 != e_87)))
            _fail(e_87);
          else
            d_87 = e_87;
        }
      }
      t = l_30;
      {
        ATerm i_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_87));
        {
          i_87 = t;
          if(((h_87 != NULL) && (h_87 != i_87)))
            _fail(i_87);
          else
            h_87 = i_87;
        }
        t = not_null(h_87);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_124 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm m_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = m_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_4);
  t = n_124(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_87 = NULL;
  n_87 = t;
  t = SSL_table_create(not_null(n_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_87 = NULL;
  r_87 = t;
  {
    ATerm u_30;
    u_30 = t;
    {
      t = term_z_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_30, term_a_31, not_null(r_87));
          t = table_put_0(t);
        }
      }
    }
    t = u_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_87 = NULL;
  v_87 = t;
  t = SSL_table_destroy(not_null(v_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_87 = NULL;
  z_87 = t;
  t = SSL_exit(not_null(z_87));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  c_88 :
  if(((ATgetType(d_88) == AT_LIST) && ATisEmpty(d_88)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_88) == AT_LIST) && !(ATisEmpty(d_88))))
        {
          e_88 = ATgetFirst((ATermList) d_88);
          f_88 = (ATerm) ATgetNext((ATermList) d_88);
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
  ATerm b_31;
  b_31 = t;
  {
    ATerm i_88 = NULL;
    ATerm o_88 = NULL;
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm j_88 = NULL;
          ATerm k_88 = NULL;
          k_88 = t;
          if(((j_88 != NULL) && (j_88 != k_88)))
            _fail(k_88);
          else
            j_88 = k_88;
          t = (ATerm) ATinsert(ATempty, not_null(j_88));
        }
      }
    {
      o_88 = t;
      if(((i_88 != NULL) && (i_88 != o_88)))
        _fail(o_88);
      else
        i_88 = o_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(i_88));
      t = printnl_0(t);
    }
  }
  t = b_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm r_88 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = Cons_2(t, m_106, r_88);
      }
    return(t);
  }
  t = r_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  a_89 = t;
  x_88 :
  if(((ATgetType(a_89) == AT_LIST) && !(ATisEmpty(a_89))))
    {
      y_88 = ATgetFirst((ATermList) a_89);
      z_88 = (ATerm) ATgetNext((ATermList) a_89);
      {
        ATerm f_89 = NULL;
        t = not_null(z_88);
        {
          ATerm g_31;
          g_31 = t;
          {
            ATerm g_89 = NULL,i_89 = NULL,k_89 = NULL;
            ATerm h_31;
            h_31 = t;
            {
              ATerm h_89 = NULL;
              t = i_0(t);
              {
                h_89 = t;
                if(((g_89 != NULL) && (g_89 != h_89)))
                  _fail(h_89);
                else
                  g_89 = h_89;
              }
            }
            t = h_31;
            {
              ATerm j_89 = NULL;
              t = not_null(y_88);
              {
                t = g_0(t);
                {
                  j_89 = t;
                  if(((i_89 != NULL) && (i_89 != j_89)))
                    _fail(j_89);
                  else
                    i_89 = j_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_89)), not_null(i_89));
                {
                  k_89 = t;
                  if(((f_89 != NULL) && (f_89 != k_89)))
                    _fail(k_89);
                  else
                    f_89 = k_89;
                }
              }
            }
          }
          t = g_31;
          {
            ATerm g_4 (ATerm t)
            {
              t = not_null(f_89);
              return(t);
            }
            t = reverse_acc_2(t, g_0, g_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_89) == AT_LIST) && ATisEmpty(a_89)))
        {
          {
            t = term_p_25;
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
  ATerm h_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm x_89 = NULL,y_89 = NULL;
  x_89 = t;
  w_89 :
  if(match_cons(x_89, sym_Program_1))
    {
      y_89 = ATgetArgument(x_89, 0);
      {
        ATerm b_90 = NULL,d_90 = NULL;
        ATerm c_90 = NULL;
        t = SSLgetAnnotations(not_null(x_89));
        {
          c_90 = t;
          if(((b_90 != NULL) && (b_90 != c_90)))
            _fail(c_90);
          else
            b_90 = c_90;
        }
        {
          t = not_null(y_89);
          {
            ATerm f_90 = NULL;
            t = j_98(t);
            {
              d_90 = t;
              {
                ATerm g_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_90)), not_null(b_90));
                {
                  g_90 = t;
                  if(((f_90 != NULL) && (f_90 != g_90)))
                    _fail(g_90);
                  else
                    f_90 = g_90;
                }
                t = not_null(f_90);
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
  ATerm q_90 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_90 = NULL;
      t = term_e_30;
      {
        t = get_config_0(t);
        {
          r_90 = t;
          if(((q_90 != NULL) && (q_90 != r_90)))
            _fail(r_90);
          else
            q_90 = r_90;
        }
      }
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm j_4 (ATerm t)
          {
            ATerm s_90 = NULL;
            s_90 = t;
            if(((q_90 != NULL) && (q_90 != s_90)))
              _fail(s_90);
            else
              q_90 = s_90;
            return(t);
          }
          t = Program_1(t, j_4);
          return(t);
        }
        t = option_defined_1(t, i_4);
      }
    }
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        t = not_null(q_90);
        return(t);
      }
      t = short_description_1(t, m_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_4);
    {
      t = term_k_31;
      {
        t = echo_0(t);
        {
          t = term_n_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm t_90 = NULL;
                  ATerm u_90 = NULL;
                  u_90 = t;
                  if(((t_90 != NULL) && (t_90 != u_90)))
                    _fail(u_90);
                  else
                    t_90 = u_90;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_90)), term_o_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_4);
                {
                  ATerm o_4 (ATerm t)
                  {
                    ATerm v_90 = NULL;
                    ATerm y_90 = NULL;
                    ATerm p_4 (ATerm t)
                    {
                      t = not_null(q_90);
                      return(t);
                    }
                    t = long_description_1(t, p_4);
                    {
                      y_90 = t;
                      if(((v_90 != NULL) && (v_90 != y_90)))
                        _fail(y_90);
                      else
                        v_90 = y_90;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_90)), term_p_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_4);
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
  ATerm x_31;
  x_31 = t;
  {
    ATerm g_91 = NULL;
    ATerm h_91 = NULL;
    h_91 = t;
    if(((g_91 != NULL) && (g_91 != h_91)))
      _fail(h_91);
    else
      g_91 = h_91;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATempty, not_null(g_91)));
      t = printnl_0(t);
    }
  }
  t = x_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm y_31;
  y_31 = t;
  {
    t = q_112(t);
    t = debug_0(t);
  }
  t = y_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm o_91 = NULL,p_91 = NULL;
  o_91 = t;
  n_91 :
  if(match_cons(o_91, sym_Undefined_1))
    {
      p_91 = ATgetArgument(o_91, 0);
      {
        ATerm s_91 = NULL,u_91 = NULL;
        ATerm t_91 = NULL;
        t = SSLgetAnnotations(not_null(o_91));
        {
          t_91 = t;
          if(((s_91 != NULL) && (s_91 != t_91)))
            _fail(t_91);
          else
            s_91 = t_91;
        }
        {
          t = not_null(p_91);
          {
            ATerm w_91 = NULL;
            t = k_98(t);
            {
              u_91 = t;
              {
                ATerm x_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_91)), not_null(s_91));
                {
                  x_91 = t;
                  if(((w_91 != NULL) && (w_91 != x_91)))
                    _fail(x_91);
                  else
                    w_91 = x_91;
                }
                t = not_null(w_91);
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
  ATerm c_92 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_106, _id);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = Cons_2(t, _id, c_92);
      }
    return(t);
  }
  t = c_92(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_125 (ATerm))
{
  t = fetch_1(t, u_125);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_92 = NULL;
  h_92 = t;
  g_92 :
  if(match_cons(h_92, sym_Help_0))
    {
      ATerm j_92 = NULL,l_92 = NULL;
      ATerm b_32;
      b_32 = t;
      {
        ATerm k_92 = NULL;
        t = SSLgetAnnotations(not_null(h_92));
        {
          k_92 = t;
          if(((j_92 != NULL) && (j_92 != k_92)))
            _fail(k_92);
          else
            j_92 = k_92;
        }
      }
      t = b_32;
      {
        ATerm m_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_92));
        {
          m_92 = t;
          if(((l_92 != NULL) && (l_92 != m_92)))
            _fail(m_92);
          else
            l_92 = m_92;
        }
        t = not_null(l_92);
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
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_103(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
  s_92 = t;
  r_92 :
  if(match_cons(s_92, sym__2))
    {
      t_92 = ATgetArgument(s_92, 0);
      u_92 = ATgetArgument(s_92, 1);
      t = SSL_table_get(not_null(t_92), not_null(u_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL;
  b_93 = t;
  a_93 :
  if(match_cons(b_93, sym__3))
    {
      c_93 = ATgetArgument(b_93, 0);
      d_93 = ATgetArgument(b_93, 1);
      e_93 = ATgetArgument(b_93, 2);
      {
        ATerm e_32;
        e_32 = t;
        {
          ATerm i_93 = NULL;
          ATerm j_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_93), not_null(d_93));
          {
            ATerm f_32 = t;
            int g_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_32);
              }
            else
              {
                t = f_32;
                t = (ATerm) ATempty;
              }
            {
              j_93 = t;
              if(((i_93 != NULL) && (i_93 != j_93)))
                _fail(j_93);
              else
                i_93 = j_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_93), not_null(d_93), (ATerm) ATinsert(CheckATermList(not_null(i_93)), not_null(e_93)));
            t = table_put_0(t);
          }
        }
        t = e_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_126 (ATerm))
{
  ATerm n_93 = NULL;
  ATerm o_93 = NULL;
  t = term_p_25;
  {
    t = z_126(t);
    {
      o_93 = t;
      if(((n_93 != NULL) && (n_93 != o_93)))
        _fail(o_93);
      else
        n_93 = o_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_31, term_m_31, not_null(n_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL;
  u_93 = t;
  t_93 :
  if(match_string(u_93, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(u_93) == AT_LIST) && !(ATisEmpty(u_93))))
        {
          v_93 = ATgetFirst((ATermList) u_93);
          w_93 = (ATerm) ATgetNext((ATermList) u_93);
          {
            ATerm z_93 = NULL;
            ATerm h_32;
            h_32 = t;
            {
              t = not_null(v_93);
              t = a_0(t);
            }
            t = h_32;
            {
              ATerm a_94 = NULL;
              t = term_p_25;
              {
                t = c_0(t);
                {
                  a_94 = t;
                  if(((z_93 != NULL) && (z_93 != a_94)))
                    _fail(a_94);
                  else
                    z_93 = a_94;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_93)), not_null(z_93));
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
  ATerm t_4 (ATerm t)
  {
    ATerm f_94 = NULL;
    f_94 = t;
    e_94 :
    if(!(match_string(f_94, "--help")))
      {
        if(!(match_string(f_94, "-h")))
          {
            if(!(match_string(f_94, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_j_32;
    {
      t = set_config_0(t);
      t = term_k_32;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  t = Option_3(t, t_4, u_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  i_94 = t;
  h_94 :
  if(((ATgetType(i_94) == AT_LIST) && !(ATisEmpty(i_94))))
    {
      j_94 = ATgetFirst((ATermList) i_94);
      k_94 = (ATerm) ATgetNext((ATermList) i_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL;
  u_94 = t;
  t_94 :
  if(((ATgetType(u_94) == AT_LIST) && !(ATisEmpty(u_94))))
    {
      v_94 = ATgetFirst((ATermList) u_94);
      w_94 = (ATerm) ATgetNext((ATermList) u_94);
      {
        ATerm a_95 = NULL,c_95 = NULL;
        ATerm b_95 = NULL;
        t = SSLgetAnnotations(not_null(u_94));
        {
          b_95 = t;
          if(((a_95 != NULL) && (a_95 != b_95)))
            _fail(b_95);
          else
            a_95 = b_95;
        }
        {
          t = not_null(v_94);
          {
            ATerm e_95 = NULL;
            t = v_86(t);
            {
              c_95 = t;
              {
                t = not_null(w_94);
                {
                  ATerm g_95 = NULL;
                  t = w_86(t);
                  {
                    e_95 = t;
                    {
                      ATerm h_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_95)), not_null(c_95)), not_null(a_95));
                      {
                        h_95 = t;
                        if(((g_95 != NULL) && (g_95 != h_95)))
                          _fail(h_95);
                        else
                          g_95 = h_95;
                      }
                      t = not_null(g_95);
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
  ATerm r_95 = NULL;
  r_95 = t;
  q_95 :
  if(((ATgetType(r_95) == AT_LIST) && ATisEmpty(r_95)))
    {
      {
        ATerm t_95 = NULL,v_95 = NULL;
        ATerm o_32;
        o_32 = t;
        {
          ATerm u_95 = NULL;
          t = SSLgetAnnotations(not_null(r_95));
          {
            u_95 = t;
            if(((t_95 != NULL) && (t_95 != u_95)))
              _fail(u_95);
            else
              t_95 = u_95;
          }
        }
        t = o_32;
        {
          ATerm w_95 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_95));
          {
            w_95 = t;
            if(((v_95 != NULL) && (v_95 != w_95)))
              _fail(w_95);
            else
              v_95 = w_95;
          }
          t = not_null(v_95);
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
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL;
  c_96 = t;
  b_96 :
  if(match_cons(c_96, sym__2))
    {
      d_96 = ATgetArgument(c_96, 0);
      e_96 = ATgetArgument(c_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_23, not_null(d_96), not_null(e_96));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_126 (ATerm))
{
  ATerm p_32;
  p_32 = t;
  {
    ATerm x_4 (ATerm t)
    {
      t = term_q_32;
      t = x_126(t);
      return(t);
    }
    t = try_1(t, x_4);
  }
  t = p_32;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm m_96 = NULL;
      ATerm v_32;
      v_32 = t;
      {
        ATerm k_96 = NULL;
        ATerm l_96 = NULL;
        l_96 = t;
        if(((k_96 != NULL) && (k_96 != l_96)))
          _fail(l_96);
        else
          k_96 = l_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_30, not_null(k_96));
          t = set_config_0(t);
        }
      }
      t = v_32;
      {
        ATerm n_96 = NULL;
        n_96 = t;
        if(((m_96 != NULL) && (m_96 != n_96)))
          _fail(n_96);
        else
          m_96 = n_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_96));
      }
      return(t);
    }
    ATerm z_4 (ATerm t)
    {
      ATerm w_32 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              {
                t = x_126(t);
                t = Cons_2(t, _id, z_4);
              }
            }
          ;
          LocalPopChoice(t_33);
        }
      else
        {
          t = w_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_4, z_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  ATerm d_34;
  d_34 = t;
  {
    ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL;
    w_96 = t;
    s_96 :
    if(match_cons(w_96, sym__3))
      {
        x_96 = ATgetArgument(w_96, 0);
        y_96 = ATgetArgument(w_96, 1);
        z_96 = ATgetArgument(w_96, 2);
        {
          if(((t_96 != NULL) && (t_96 != x_96)))
            _fail(x_96);
          else
            t_96 = x_96;
          {
            if(((u_96 != NULL) && (u_96 != y_96)))
              _fail(y_96);
            else
              u_96 = y_96;
            {
              if(((v_96 != NULL) && (v_96 != z_96)))
                _fail(z_96);
              else
                v_96 = z_96;
              t = SSL_table_put(not_null(t_96), not_null(u_96), not_null(v_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_126 (ATerm))
{
  ATerm c_97 = NULL;
  ATerm e_34;
  e_34 = t;
  {
    t = term_f_34;
    t = table_put_0(t);
  }
  t = e_34;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm g_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_126(t);
          ;
          LocalPopChoice(h_34);
        }
      else
        {
          t = g_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_5);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_34;
            k_34 = t;
            {
              ATerm l_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = l_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_34;
            {
              t = system_usage_0(t);
              {
                t = term_d_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm d_97 = NULL;
                  d_97 = t;
                  if(((c_97 != NULL) && (c_97 != d_97)))
                    _fail(d_97);
                  else
                    c_97 = d_97;
                  return(t);
                }
                t = Undefined_1(t, j_5);
                return(t);
              }
              t = option_defined_1(t, f_5);
              {
                ATerm m_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), term_n_34);
                  return(t);
                }
                t = say_1(t, m_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_22;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_5);
      {
        ATerm o_34;
        o_34 = t;
        {
          t = term_l_31;
          t = table_destroy_0(t);
        }
        t = o_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm))
{
  t = parse_options_1(t, t_124);
  {
    t = store_options_0(t);
    {
      t = v_124(t);
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_124);
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            {
              ATerm r_34 = t;
              int s_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_124(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(s_34);
                }
              else
                {
                  t = r_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_125(t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, k_125);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_5, m_125, n_125, o_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm v_34;
      v_34 = t;
      {
        ATerm g_97 = NULL;
        ATerm h_97 = NULL;
        t = term_e_30;
        {
          t = get_config_0(t);
          {
            h_97 = t;
            if(((g_97 != NULL) && (g_97 != h_97)))
              _fail(h_97);
            else
              g_97 = h_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATinsert(ATempty, not_null(g_97)));
          t = printnl_0(t);
        }
      }
      t = v_34;
      return(t);
    }
    t = if_verbose2_1(t, q_5);
    return(t);
  }
  t = iowrap_4(t, e_125, f_125, g_125, p_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_125 (ATerm), ATerm d_125 (ATerm))
{
  t = iowrap_3(t, c_125, d_125, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_124 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    t = _2(t, _id, z_124);
    return(t);
  }
  t = iowrap_2(t, r_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = simplify_0(t);
      {
        t = simplify_widen_0(t);
        {
          t = simplify_0(t);
          {
            t = simplify_narrow_0(t);
            t = simplify_0(t);
          }
        }
      }
      return(t);
    }
    t = apply_to_bodies_1(t, t_5);
    return(t);
  }
  t = iowrap_1(t, s_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
