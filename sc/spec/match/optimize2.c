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
ATerm term_k_34;
ATerm term_c_34;
ATerm term_r_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_g_29;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_g_24;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_11;
ATerm term_b_8;
ATerm term_r_7;
void init_constant_terms (void)
{
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Op_2, term_o_14, (ATerm) ATempty);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_q_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_a_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_q_25);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_q_25);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_j_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_q_25);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
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
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_100 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
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
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
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
            ATerm z_5 = t;
            int a_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(a_6);
              }
            else
              {
                t = z_5;
                {
                  ATerm b_6 = t;
                  int f_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_6;
                      h_6 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, z_109, b_0);
                      }
                      t = h_6;
                      t = Cons_2(t, _id, v_4);
                      ;
                      LocalPopChoice(f_6);
                    }
                  else
                    {
                      t = b_6;
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
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_99, m_99);
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
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
            ATerm m_6 = t;
            int n_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_7);
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
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(w_7);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_110, e_0);
                      t = a_8(t);
                      ;
                      LocalPopChoice(p_6);
                    }
                  else
                    {
                      t = o_6;
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
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_110(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
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
              ATerm v_6;
              v_6 = t;
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
              t = v_6;
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
    ATerm w_6 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_118(t);
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = w_6;
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL;
              ATerm i_7;
              i_7 = t;
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
              t = i_7;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = not_null(h_9);
                    return(t);
                  }
                  t = split_2(t, j_9, j_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm h_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_118(t, f_0, j_9, h_0);
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, m_0, union_0, _id);
                }
              }
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm p_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_0, union_0, j_9);
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
  ATerm q_0 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Scope_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      s_9 = ATgetArgument(q_9, 1);
      {
        ATerm v_9 = NULL;
        ATerm w_9 = NULL,y_9 = NULL;
        ATerm x_9 = NULL;
        t = not_null(s_9);
        {
          t = tvars_0(t);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(w_9));
          {
            t = isect_0(t);
            {
              y_9 = t;
              {
                if(((v_9 != NULL) && (v_9 != y_9)))
                  _fail(y_9);
                else
                  v_9 = y_9;
                {
                  ATerm l_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm z_9 = NULL;
                      z_9 = t;
                      if(((r_9 != NULL) && (r_9 != z_9)))
                        _fail(z_9);
                      else
                        r_9 = z_9;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_7;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_9), not_null(s_9));
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
    ATerm r_0 (ATerm t)
    {
      t = topdown_1(t, l_100);
      return(t);
    }
    t = _all(t, r_0);
  }
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = topdown_1(t, s_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, u_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_10), not_null(l_10)));
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_10), not_null(q_10)));
    return(t);
  }
  m_10 = t;
  g_10 :
  if(match_cons(m_10, sym_Seq_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      q_10 = ATgetArgument(m_10, 1);
      h_10 :
      if(match_cons(q_10, sym_Scope_2))
        {
          k_10 = ATgetArgument(q_10, 0);
          l_10 = ATgetArgument(q_10, 1);
          i_10 :
          if(match_cons(n_10, sym_Scope_2))
            {
              o_10 = ATgetArgument(n_10, 0);
              p_10 = ATgetArgument(n_10, 1);
              {
                ATerm m_7 = t;
                int q_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_10(t);
                    ;
                    LocalPopChoice(q_7);
                  }
                else
                  {
                    t = m_7;
                    t = y_10(t);
                  }
              }
            }
          else
            {
              t = x_10(t);
            }
        }
      else
        {
          j_10 :
          if(match_cons(n_10, sym_Scope_2))
            {
              o_10 = ATgetArgument(n_10, 0);
              p_10 = ATgetArgument(n_10, 1);
              t = y_10(t);
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
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  f_11 = t;
  a_11 :
  if(match_cons(f_11, sym_Let_2))
    {
      g_11 = ATgetArgument(f_11, 0);
      m_11 = ATgetArgument(f_11, 1);
      b_11 :
      if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
        {
          h_11 = ATgetFirst((ATermList) g_11);
          l_11 = (ATerm) ATgetNext((ATermList) g_11);
          c_11 :
          if(match_cons(h_11, sym_SDef_3))
            {
              i_11 = ATgetArgument(h_11, 0);
              j_11 = ATgetArgument(h_11, 1);
              k_11 = ATgetArgument(h_11, 2);
              d_11 :
              if(((ATgetType(j_11) == AT_LIST) && ATisEmpty(j_11)))
                {
                  e_11 :
                  if(((ATgetType(l_11) == AT_LIST) && ATisEmpty(l_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_r_7), not_null(i_11), (ATerm)ATempty, not_null(k_11))), not_null(m_11));
                    }
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
  ATerm r_11 (ATerm t)
  {
    ATerm s_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_107(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = s_7;
        t = Cons_2(t, _id, r_11);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Let_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm j_12 = NULL,k_12 = NULL;
        ATerm z_12 = NULL;
        t = not_null(f_12);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
            l_12 = t;
            z_11 :
            if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
              {
                m_12 = ATgetFirst((ATermList) l_12);
                q_12 = (ATerm) ATgetNext((ATermList) l_12);
                a_12 :
                if(match_cons(m_12, sym_SDef_3))
                  {
                    n_12 = ATgetArgument(m_12, 0);
                    o_12 = ATgetArgument(m_12, 1);
                    p_12 = ATgetArgument(m_12, 2);
                    b_12 :
                    if(((ATgetType(o_12) == AT_LIST) && ATisEmpty(o_12)))
                      {
                        {
                          ATerm y_12 = NULL;
                          t = not_null(g_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                              u_12 = t;
                              v_11 :
                              if(match_cons(u_12, sym_Call_2))
                                {
                                  v_12 = ATgetArgument(u_12, 0);
                                  x_12 = ATgetArgument(u_12, 1);
                                  w_11 :
                                  if(match_cons(v_12, sym_SVar_1))
                                    {
                                      w_12 = ATgetArgument(v_12, 0);
                                      x_11 :
                                      if(((ATgetType(x_12) == AT_LIST) && ATisEmpty(x_12)))
                                        {
                                          {
                                            if(((n_12 != NULL) && (n_12 != w_12)))
                                              _fail(w_12);
                                            else
                                              n_12 = w_12;
                                            t = not_null(p_12);
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
                            t = oncetd_1(t, w_0);
                            {
                              y_12 = t;
                              {
                                if(((j_12 != NULL) && (j_12 != y_12)))
                                  _fail(y_12);
                                else
                                  j_12 = y_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_12)), (ATerm) ATempty), not_null(j_12));
                                  {
                                    ATerm y_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = y_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(q_12);
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
          t = at_suffix_1(t, v_0);
          {
            z_12 = t;
            if(((k_12 != NULL) && (k_12 != z_12)))
              _fail(z_12);
            else
              k_12 = z_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_12), not_null(j_12));
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
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  n_13 = t;
  h_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      q_13 = ATgetArgument(n_13, 1);
      i_13 :
      if(match_cons(o_13, sym_Build_1))
        {
          p_13 = ATgetArgument(o_13, 0);
          j_13 :
          if(match_cons(q_13, sym_Where_1))
            {
              r_13 = ATgetArgument(q_13, 0);
              k_13 :
              if(match_cons(r_13, sym_Prim_2))
                {
                  l_13 = ATgetArgument(r_13, 0);
                  m_13 = ATgetArgument(r_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_13), not_null(m_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_13, sym_Prim_2))
                {
                  r_13 = ATgetArgument(q_13, 0);
                  s_13 = ATgetArgument(q_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_13), not_null(s_13));
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
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  i_14 = t;
  d_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      l_14 = ATgetArgument(i_14, 1);
      e_14 :
      if(match_cons(j_14, sym_Build_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          f_14 :
          if(match_cons(l_14, sym_Where_1))
            {
              m_14 = ATgetArgument(l_14, 0);
              g_14 :
              if(match_cons(m_14, sym_Build_1))
                {
                  h_14 = ATgetArgument(m_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(l_14, sym_Build_1))
                {
                  m_14 = ATgetArgument(l_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_14));
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  c_15 = t;
  x_14 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      h_15 = ATgetArgument(c_15, 1);
      y_14 :
      if(match_cons(d_15, sym_Build_1))
        {
          e_15 = ATgetArgument(d_15, 0);
          z_14 :
          if(match_cons(e_15, sym_Op_2))
            {
              f_15 = ATgetArgument(e_15, 0);
              g_15 = ATgetArgument(e_15, 1);
              a_15 :
              if(match_cons(h_15, sym_Match_1))
                {
                  i_15 = ATgetArgument(h_15, 0);
                  b_15 :
                  if(match_cons(i_15, sym_Op_2))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      k_15 = ATgetArgument(i_15, 1);
                      {
                        ATerm n_15 = NULL,o_15 = NULL;
                        if(((f_15 != NULL) && (f_15 != j_15)))
                          _fail(j_15);
                        else
                          f_15 = j_15;
                        {
                          if(((n_15 != NULL) && (n_15 != k_15)))
                            _fail(k_15);
                          else
                            n_15 = k_15;
                          {
                            ATerm u_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(n_15));
                            {
                              ATerm x_0 (ATerm t)
                              {
                                ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
                                p_15 = t;
                                v_14 :
                                if(match_cons(p_15, sym__2))
                                  {
                                    q_15 = ATgetArgument(p_15, 0);
                                    r_15 = ATgetArgument(p_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, x_0);
                              {
                                u_15 = t;
                                if(((o_15 != NULL) && (o_15 != u_15)))
                                  _fail(u_15);
                                else
                                  o_15 = u_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_15), not_null(g_15))));
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  e_16 = t;
  z_15 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      j_16 = ATgetArgument(e_16, 1);
      a_16 :
      if(match_cons(f_16, sym_Build_1))
        {
          g_16 = ATgetArgument(f_16, 0);
          b_16 :
          if(match_cons(g_16, sym_Op_2))
            {
              h_16 = ATgetArgument(g_16, 0);
              i_16 = ATgetArgument(g_16, 1);
              c_16 :
              if(match_cons(j_16, sym_Match_1))
                {
                  k_16 = ATgetArgument(j_16, 0);
                  d_16 :
                  if(match_cons(k_16, sym_Op_2))
                    {
                      l_16 = ATgetArgument(k_16, 0);
                      m_16 = ATgetArgument(k_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(l_16));
                        {
                          ATerm z_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = z_7;
                            }
                        }
                        t = term_b_8;
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
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm o_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  ATerm n_17 (ATerm t)
  {
    ATerm k_17 = NULL;
    ATerm l_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(c_17));
    {
      t = BMF_0(t);
      {
        l_17 = t;
        if(((k_17 != NULL) && (k_17 != l_17)))
          _fail(l_17);
        else
          k_17 = l_17;
      }
    }
    t = not_null(k_17);
    return(t);
  }
  a_17 = t;
  w_16 :
  if(match_cons(a_17, sym_Seq_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      x_16 :
      if(match_cons(c_17, sym_Seq_2))
        {
          y_16 = ATgetArgument(c_17, 0);
          z_16 = ATgetArgument(c_17, 1);
          {
            ATerm q_8 = t;
            int r_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_17 = NULL;
                ATerm h_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(y_16));
                {
                  t = BMF_0(t);
                  {
                    h_17 = t;
                    if(((g_17 != NULL) && (g_17 != h_17)))
                      _fail(h_17);
                    else
                      g_17 = h_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_17), not_null(z_16));
                ;
                LocalPopChoice(r_8);
              }
            else
              {
                t = q_8;
                t = n_17(t);
              }
          }
        }
      else
        {
          t = n_17(t);
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  r_17 :
  if(match_cons(v_17, sym_Seq_2))
    {
      w_17 = ATgetArgument(v_17, 0);
      y_17 = ATgetArgument(v_17, 1);
      s_17 :
      if(match_cons(w_17, sym_Build_1))
        {
          x_17 = ATgetArgument(w_17, 0);
          t_17 :
          if(match_cons(y_17, sym_Seq_2))
            {
              z_17 = ATgetArgument(y_17, 0);
              b_18 = ATgetArgument(y_17, 1);
              u_17 :
              if(match_cons(z_17, sym_Build_1))
                {
                  a_18 = ATgetArgument(z_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_18)), not_null(b_18));
                }
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  i_18 :
  if(match_cons(k_18, sym_Scope_2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      j_18 :
      if(match_cons(m_18, sym_Scope_2))
        {
          n_18 = ATgetArgument(m_18, 0);
          o_18 = ATgetArgument(m_18, 1);
          {
            ATerm s_18 = NULL;
            ATerm t_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(n_18));
            {
              t = conc_0(t);
              {
                t_18 = t;
                if(((s_18 != NULL) && (s_18 != t_18)))
                  _fail(t_18);
                else
                  s_18 = t_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_18), not_null(o_18));
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
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Var_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      t = not_null(z_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  f_19 = t;
  d_19 :
  if(match_cons(f_19, sym__2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      e_19 :
      if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
        {
          i_19 = ATgetFirst((ATermList) h_19);
          j_19 = (ATerm) ATgetNext((ATermList) h_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_19), not_null(j_19));
        }
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
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  r_19 = t;
  o_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      p_19 :
      if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
        {
          u_19 = ATgetFirst((ATermList) t_19);
          x_19 = (ATerm) ATgetNext((ATermList) t_19);
          q_19 :
          if(match_cons(u_19, sym__2))
            {
              v_19 = ATgetArgument(u_19, 0);
              w_19 = ATgetArgument(u_19, 1);
              {
                ATerm z_19 = NULL;
                if(((s_19 != NULL) && (s_19 != v_19)))
                  _fail(v_19);
                else
                  s_19 = v_19;
                {
                  if(((z_19 != NULL) && (z_19 != w_19)))
                    _fail(w_19);
                  else
                    z_19 = w_19;
                  t = not_null(z_19);
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
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm j_100 (ATerm), ATerm k_100 (ATerm))
{
  ATerm f_20 = NULL;
  ATerm h_20 = NULL,i_20 = NULL;
  f_20 = t;
  {
    ATerm j_20 = NULL;
    t = not_null(f_20);
    {
      ATerm k_20 = NULL;
      t = j_100(t);
      {
        j_20 = t;
        {
          if(((h_20 != NULL) && (h_20 != j_20)))
            _fail(j_20);
          else
            h_20 = j_20;
          {
            t = k_100(t);
            {
              k_20 = t;
              if(((i_20 != NULL) && (i_20 != k_20)))
                _fail(k_20);
              else
                i_20 = k_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(i_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm d_102 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm w_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_102(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = w_8;
        t = _all(t, o_20);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        if(((y_20 != NULL) && (y_20 != v_20)))
          _fail(v_20);
        else
          y_20 = v_20;
      }
    }
  else
    {
      if(match_cons(t_20, sym__3))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          w_20 = ATgetArgument(t_20, 2);
          {
            ATerm e_21 = NULL;
            ATerm f_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), not_null(v_20));
            {
              t = zip_1(t, _id);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(w_20));
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  t = subs_args_0(t);
  {
    l_21 = t;
    k_21 :
    if(match_cons(l_21, sym__2))
      {
        m_21 = ATgetArgument(l_21, 0);
        n_21 = ATgetArgument(l_21, 1);
        {
          t = not_null(n_21);
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = not_null(m_21);
                return(t);
              }
              t = SubsVar_2(t, u_99, z_0);
              t = v_99(t);
              return(t);
            }
            t = alltd_1(t, y_0);
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
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      if(((u_21 != NULL) && (u_21 != v_21)))
        _fail(v_21);
      else
        u_21 = v_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_110 (ATerm), ATerm k_110 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
    {
      c_22 = ATgetFirst((ATermList) b_22);
      d_22 = (ATerm) ATgetNext((ATermList) b_22);
      {
        t = k_110(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm g_22 = NULL;
            g_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(g_22));
              t = j_110(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(d_22);
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
          ATerm s_22 (ATerm t)
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
                {
                  ATerm f_9 = t;
                  int g_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(o_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_110, b_1);
                      t = s_22(t);
                      ;
                      LocalPopChoice(g_9);
                    }
                  else
                    {
                      t = f_9;
                      t = Cons_2(t, _id, s_22);
                    }
                }
              }
            return(t);
          }
          t = s_22(t);
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
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  w_22 = t;
  u_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      v_22 :
      if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
        {
          z_22 = ATgetFirst((ATermList) y_22);
          a_23 = (ATerm) ATgetNext((ATermList) y_22);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_22)), not_null(z_22)), not_null(a_23));
        }
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
    {
      q_23 = ATgetFirst((ATermList) p_23);
      t_23 = (ATerm) ATgetNext((ATermList) p_23);
      o_23 :
      if(match_cons(q_23, sym__2))
        {
          r_23 = ATgetArgument(q_23, 0);
          s_23 = ATgetArgument(q_23, 1);
          {
            ATerm x_23 = NULL,y_23 = NULL,e_24 = NULL,k_24 = NULL;
            ATerm k_9;
            k_9 = t;
            {
              ATerm z_23 = NULL;
              ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
              t = not_null(s_23);
              {
                z_23 = t;
                {
                  t = SSL_explode_term(not_null(z_23));
                  {
                    b_24 = t;
                    i_23 :
                    if(match_cons(b_24, sym__2))
                      {
                        c_24 = ATgetArgument(b_24, 0);
                        d_24 = ATgetArgument(b_24, 1);
                        {
                          if(((x_23 != NULL) && (x_23 != c_24)))
                            _fail(c_24);
                          else
                            x_23 = c_24;
                          if(((y_23 != NULL) && (y_23 != d_24)))
                            _fail(d_24);
                          else
                            y_23 = d_24;
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
              ATerm l_9;
              l_9 = t;
              {
                ATerm f_24 = NULL;
                ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
                t = not_null(r_23);
                {
                  f_24 = t;
                  {
                    t = SSL_explode_term(not_null(f_24));
                    {
                      h_24 = t;
                      l_23 :
                      if(match_cons(h_24, sym__2))
                        {
                          i_24 = ATgetArgument(h_24, 0);
                          j_24 = ATgetArgument(h_24, 1);
                          {
                            if(((x_23 != NULL) && (x_23 != i_24)))
                              _fail(i_24);
                            else
                              x_23 = i_24;
                            if(((e_24 != NULL) && (e_24 != j_24)))
                              _fail(j_24);
                            else
                              e_24 = j_24;
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
              t = l_9;
              {
                ATerm l_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), not_null(y_23));
                {
                  t = zip_1(t, _id);
                  {
                    l_24 = t;
                    if(((k_24 != NULL) && (k_24 != l_24)))
                      _fail(l_24);
                    else
                      k_24 = l_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), not_null(t_23));
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  v_24 = t;
  t_24 :
  if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
    {
      w_24 = ATgetFirst((ATermList) v_24);
      z_24 = (ATerm) ATgetNext((ATermList) v_24);
      u_24 :
      if(match_cons(w_24, sym__2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          {
            ATerm b_25 = NULL;
            if(((x_24 != NULL) && (x_24 != y_24)))
              _fail(y_24);
            else
              x_24 = y_24;
            {
              if(((b_25 != NULL) && (b_25 != z_24)))
                _fail(z_24);
              else
                b_25 = z_24;
              t = not_null(b_25);
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
  ATerm d_25 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_121(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          t = b_121(t);
          t = d_25(t);
        }
      }
    return(t);
  }
  t = d_25(t);
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
  ATerm o_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm f_25 = NULL;
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_25));
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm u_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, f_1);
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = u_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, c_1, d_1, e_1);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = o_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm i_25 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_101(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = _one(t, i_25);
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        ATerm f_10;
        f_10 = t;
        {
          t = not_null(o_25);
          {
            ATerm g_1 (ATerm t)
            {
              ATerm r_25 = NULL;
              r_25 = t;
              if(((n_25 != NULL) && (n_25 != r_25)))
                _fail(r_25);
              else
                n_25 = r_25;
              return(t);
            }
            t = oncetd_1(t, g_1);
          }
        }
        t = f_10;
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Var_1))
    {
      e_26 = ATgetArgument(d_26, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26 = NULL,j_26 = NULL;
            ATerm i_26 = NULL;
            t = SSLgetAnnotations(not_null(d_26));
            {
              i_26 = t;
              if(((h_26 != NULL) && (h_26 != i_26)))
                _fail(i_26);
              else
                h_26 = i_26;
            }
            {
              t = not_null(e_26);
              {
                ATerm l_26 = NULL;
                t = o_0(t);
                {
                  j_26 = t;
                  {
                    ATerm m_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_26)), not_null(h_26));
                    {
                      m_26 = t;
                      if(((l_26 != NULL) && (l_26 != m_26)))
                        _fail(m_26);
                      else
                        l_26 = m_26;
                    }
                    t = not_null(l_26);
                  }
                }
              }
            }
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm p_26 = NULL,r_26 = NULL;
              ATerm q_26 = NULL;
              t = SSLgetAnnotations(not_null(d_26));
              {
                q_26 = t;
                if(((p_26 != NULL) && (p_26 != q_26)))
                  _fail(q_26);
                else
                  p_26 = q_26;
              }
              {
                t = not_null(e_26);
                {
                  ATerm t_26 = NULL;
                  t = o_0(t);
                  {
                    r_26 = t;
                    {
                      ATerm u_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_26)), not_null(p_26));
                      {
                        u_26 = t;
                        if(((t_26 != NULL) && (t_26 != u_26)))
                          _fail(u_26);
                        else
                          t_26 = u_26;
                      }
                      t = not_null(t_26);
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  u_28 = t;
  t_27 :
  if(match_cons(u_28, sym_Seq_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      x_28 = ATgetArgument(u_28, 1);
      u_27 :
      if(match_cons(v_28, sym_Assign_1))
        {
          w_28 = ATgetArgument(v_28, 0);
          v_27 :
          if(match_cons(w_28, sym_Var_1))
            {
              n_28 = ATgetArgument(w_28, 0);
              w_27 :
              if(match_cons(x_28, sym_Seq_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  x_27 :
                  if(match_cons(y_28, sym_Build_1))
                    {
                      q_28 = ATgetArgument(y_28, 0);
                      y_27 :
                      if(match_cons(q_28, sym_Var_1))
                        {
                          r_28 = ATgetArgument(q_28, 0);
                          {
                            ATerm f_29 = NULL;
                            if(((n_28 != NULL) && (n_28 != r_28)))
                              _fail(r_28);
                            else
                              n_28 = r_28;
                            {
                              if(((f_29 != NULL) && (f_29 != z_28)))
                                _fail(z_28);
                              else
                                f_29 = z_28;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_28))), not_null(f_29));
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
          if(match_cons(v_28, sym_Build_1))
            {
              w_28 = ATgetArgument(v_28, 0);
              z_27 :
              if(match_cons(x_28, sym_Scope_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  a_28 :
                  if(match_cons(z_28, sym_Seq_2))
                    {
                      a_29 = ATgetArgument(z_28, 0);
                      d_29 = ATgetArgument(z_28, 1);
                      b_28 :
                      if(match_cons(a_29, sym_Assign_1))
                        {
                          b_29 = ATgetArgument(a_29, 0);
                          c_28 :
                          if(match_cons(b_29, sym_Var_1))
                            {
                              c_29 = ATgetArgument(b_29, 0);
                              {
                                ATerm t_10 = t;
                                int u_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_30 = NULL,k_30 = NULL;
                                    ATerm v_10;
                                    v_10 = t;
                                    {
                                      ATerm j_30 = NULL;
                                      t = not_null(w_28);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(y_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  j_30 = t;
                                                  if(((i_30 != NULL) && (i_30 != j_30)))
                                                    _fail(j_30);
                                                  else
                                                    i_30 = j_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = v_10;
                                    {
                                      ATerm l_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, not_null(w_28)), not_null(d_29));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          l_30 = t;
                                          if(((k_30 != NULL) && (k_30 != l_30)))
                                            _fail(l_30);
                                          else
                                            k_30 = l_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_30), not_null(k_30)));
                                    }
                                    ;
                                    LocalPopChoice(u_10);
                                  }
                                else
                                  {
                                    t = t_10;
                                    {
                                      ATerm q_30 = NULL,s_30 = NULL;
                                      ATerm w_10;
                                      w_10 = t;
                                      {
                                        ATerm r_30 = NULL;
                                        t = not_null(w_28);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(y_28));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    r_30 = t;
                                                    if(((q_30 != NULL) && (q_30 != r_30)))
                                                      _fail(r_30);
                                                    else
                                                      q_30 = r_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = w_10;
                                      {
                                        ATerm t_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, not_null(w_28)), not_null(d_29));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            t_30 = t;
                                            if(((s_30 != NULL) && (s_30 != t_30)))
                                              _fail(t_30);
                                            else
                                              s_30 = t_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_28)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_30), not_null(s_30)));
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
      if(match_cons(u_28, sym_Scope_2))
        {
          v_28 = ATgetArgument(u_28, 0);
          x_28 = ATgetArgument(u_28, 1);
          d_28 :
          if(match_cons(x_28, sym_Seq_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              e_28 :
              if(match_cons(y_28, sym_Assign_1))
                {
                  q_28 = ATgetArgument(y_28, 0);
                  f_28 :
                  if(match_cons(q_28, sym_Var_1))
                    {
                      r_28 = ATgetArgument(q_28, 0);
                      g_28 :
                      if(match_cons(z_28, sym_Seq_2))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          d_29 = ATgetArgument(z_28, 1);
                          h_28 :
                          if(match_cons(a_29, sym_Assign_2))
                            {
                              b_29 = ATgetArgument(a_29, 0);
                              o_28 = ATgetArgument(a_29, 1);
                              i_28 :
                              if(match_cons(b_29, sym_Var_1))
                                {
                                  c_29 = ATgetArgument(b_29, 0);
                                  j_28 :
                                  if(match_cons(o_28, sym_Var_1))
                                    {
                                      p_28 = ATgetArgument(o_28, 0);
                                      {
                                        ATerm j_29 = NULL,k_29 = NULL,m_29 = NULL;
                                        if(((r_28 != NULL) && (r_28 != p_28)))
                                          _fail(p_28);
                                        else
                                          r_28 = p_28;
                                        {
                                          if(((j_29 != NULL) && (j_29 != d_29)))
                                            _fail(d_29);
                                          else
                                            j_29 = d_29;
                                          {
                                            ATerm z_10;
                                            z_10 = t;
                                            {
                                              ATerm l_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(v_28));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          l_29 = t;
                                                          if(((k_29 != NULL) && (k_29 != l_29)))
                                                            _fail(l_29);
                                                          else
                                                            k_29 = l_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = z_10;
                                            {
                                              ATerm n_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(j_29));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  n_29 = t;
                                                  if(((m_29 != NULL) && (m_29 != n_29)))
                                                    _fail(n_29);
                                                  else
                                                    m_29 = n_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(m_29)));
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
                              if(match_cons(a_29, sym_Assign_1))
                                {
                                  b_29 = ATgetArgument(a_29, 0);
                                  k_28 :
                                  if(match_cons(b_29, sym_Var_1))
                                    {
                                      c_29 = ATgetArgument(b_29, 0);
                                      {
                                        ATerm s_29 = NULL,u_29 = NULL;
                                        ATerm n_11;
                                        n_11 = t;
                                        {
                                          ATerm t_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(v_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(c_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      t_29 = t;
                                                      if(((s_29 != NULL) && (s_29 != t_29)))
                                                        _fail(t_29);
                                                      else
                                                        s_29 = t_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = n_11;
                                        {
                                          ATerm v_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(d_29));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              v_29 = t;
                                              if(((u_29 != NULL) && (u_29 != v_29)))
                                                _fail(v_29);
                                              else
                                                u_29 = v_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(u_29)));
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
                  if(match_cons(y_28, sym_Assign_2))
                    {
                      q_28 = ATgetArgument(y_28, 0);
                      s_28 = ATgetArgument(y_28, 1);
                      l_28 :
                      if(match_cons(q_28, sym_Var_1))
                        {
                          r_28 = ATgetArgument(q_28, 0);
                          m_28 :
                          if(match_cons(s_28, sym_Var_1))
                            {
                              t_28 = ATgetArgument(s_28, 0);
                              {
                                ATerm a_30 = NULL,c_30 = NULL;
                                ATerm o_11;
                                o_11 = t;
                                {
                                  ATerm b_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(v_28));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), (ATerm) ATinsert(ATempty, not_null(r_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          b_30 = t;
                                          if(((a_30 != NULL) && (a_30 != b_30)))
                                            _fail(b_30);
                                          else
                                            a_30 = b_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = o_11;
                                {
                                  ATerm d_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_28))), not_null(z_28));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      d_30 = t;
                                      if(((c_30 != NULL) && (c_30 != d_30)))
                                        _fail(d_30);
                                      else
                                        c_30 = d_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_30), not_null(c_30));
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  n_31 = t;
  l_31 :
  if(match_cons(n_31, sym_Seq_2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      m_31 :
      if(match_cons(p_31, sym_Let_2))
        {
          q_31 = ATgetArgument(p_31, 0);
          r_31 = ATgetArgument(p_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_31), not_null(r_31)));
        }
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Cong_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,s_33 = NULL,u_33 = NULL,w_33 = NULL;
        ATerm p_11;
        p_11 = t;
        {
          ATerm y_32 = NULL;
          t = not_null(p_32);
          {
            ATerm b_33 = NULL;
            t = map_1(t, new_0);
            {
              y_32 = t;
              {
                if(((v_32 != NULL) && (v_32 != y_32)))
                  _fail(y_32);
                else
                  v_32 = y_32;
                {
                  t = not_null(v_32);
                  {
                    ATerm c_33 = NULL;
                    ATerm h_1 (ATerm t)
                    {
                      ATerm z_32 = NULL;
                      ATerm a_33 = NULL;
                      a_33 = t;
                      if(((z_32 != NULL) && (z_32 != a_33)))
                        _fail(a_33);
                      else
                        z_32 = a_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_32));
                      return(t);
                    }
                    t = map_1(t, h_1);
                    {
                      b_33 = t;
                      {
                        if(((s_32 != NULL) && (s_32 != b_33)))
                          _fail(b_33);
                        else
                          s_32 = b_33;
                        {
                          ATerm d_33 = NULL;
                          t = new_0(t);
                          {
                            c_33 = t;
                            {
                              if(((t_32 != NULL) && (t_32 != c_33)))
                                _fail(c_33);
                              else
                                t_32 = c_33;
                              {
                                t = not_null(p_32);
                                {
                                  ATerm g_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    d_33 = t;
                                    {
                                      if(((w_32 != NULL) && (w_32 != d_33)))
                                        _fail(d_33);
                                      else
                                        w_32 = d_33;
                                      {
                                        t = not_null(w_32);
                                        {
                                          ATerm h_33 = NULL,r_33 = NULL;
                                          ATerm i_1 (ATerm t)
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
                                          t = map_1(t, i_1);
                                          {
                                            g_33 = t;
                                            {
                                              if(((u_32 != NULL) && (u_32 != g_33)))
                                                _fail(g_33);
                                              else
                                                u_32 = g_33;
                                              {
                                                ATerm i_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(w_32));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    i_33 = t;
                                                    if(((h_33 != NULL) && (h_33 != i_33)))
                                                      _fail(i_33);
                                                    else
                                                      h_33 = i_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), not_null(p_32));
                                                  {
                                                    ATerm j_1 (ATerm t)
                                                    {
                                                      ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
                                                      j_33 = t;
                                                      g_32 :
                                                      if(match_cons(j_33, sym__2))
                                                        {
                                                          k_33 = ATgetArgument(j_33, 0);
                                                          n_33 = ATgetArgument(j_33, 1);
                                                          h_32 :
                                                          if(match_cons(k_33, sym__2))
                                                            {
                                                              l_33 = ATgetArgument(k_33, 0);
                                                              m_33 = ATgetArgument(k_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_33)))));
                                                            }
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
                                                    t = zip_1(t, j_1);
                                                    {
                                                      r_33 = t;
                                                      if(((x_32 != NULL) && (x_32 != r_33)))
                                                        _fail(r_33);
                                                      else
                                                        x_32 = r_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_11;
        {
          ATerm q_11;
          q_11 = t;
          {
            ATerm t_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(w_32));
            {
              t = conc_0(t);
              {
                t_33 = t;
                if(((s_33 != NULL) && (s_33 != t_33)))
                  _fail(t_33);
                else
                  s_33 = t_33;
              }
            }
          }
          t = q_11;
          {
            ATerm s_11;
            s_11 = t;
            {
              ATerm v_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_32), not_null(s_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32))));
              {
                t = Mapp2_0(t);
                {
                  v_33 = t;
                  if(((u_33 != NULL) && (u_33 != v_33)))
                    _fail(v_33);
                  else
                    u_33 = v_33;
                }
              }
            }
            t = s_11;
            {
              ATerm x_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_32), not_null(u_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32))));
              {
                t = Bapp2_0(t);
                {
                  x_33 = t;
                  if(((w_33 != NULL) && (w_33 != x_33)))
                    _fail(x_33);
                  else
                    w_33 = x_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_33)), not_null(t_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_32)), not_null(w_33))));
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
  ATerm c_35 = NULL,d_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_Build_1))
    {
      d_35 = ATgetArgument(c_35, 0);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
            ATerm j_35 = NULL;
            ATerm n_35 = NULL;
            t = new_0(t);
            {
              j_35 = t;
              {
                if(((h_35 != NULL) && (h_35 != j_35)))
                  _fail(j_35);
                else
                  h_35 = j_35;
                {
                  t = not_null(d_35);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
                      k_35 = t;
                      r_34 :
                      if(match_cons(k_35, sym_Anno_2))
                        {
                          l_35 = ATgetArgument(k_35, 0);
                          m_35 = ATgetArgument(k_35, 1);
                          {
                            if(((f_35 != NULL) && (f_35 != l_35)))
                              _fail(l_35);
                            else
                              f_35 = l_35;
                            {
                              if(((g_35 != NULL) && (g_35 != m_35)))
                                _fail(m_35);
                              else
                                g_35 = m_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_35));
                            }
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
                      n_35 = t;
                      if(((i_35 != NULL) && (i_35 != n_35)))
                        _fail(n_35);
                      else
                        i_35 = n_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_35)), not_null(f_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_35))));
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm c_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                  ATerm s_35 = NULL;
                  ATerm v_35 = NULL;
                  t = new_0(t);
                  {
                    s_35 = t;
                    {
                      if(((q_35 != NULL) && (q_35 != s_35)))
                        _fail(s_35);
                      else
                        q_35 = s_35;
                      {
                        t = not_null(d_35);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm t_35 = NULL,u_35 = NULL;
                            t_35 = t;
                            v_34 :
                            if(match_cons(t_35, sym_RootApp_1))
                              {
                                u_35 = ATgetArgument(t_35, 0);
                                {
                                  if(((p_35 != NULL) && (p_35 != u_35)))
                                    _fail(u_35);
                                  else
                                    p_35 = u_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35));
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
                            v_35 = t;
                            if(((r_35 != NULL) && (r_35 != v_35)))
                              _fail(v_35);
                            else
                              r_35 = v_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_35))));
                  ;
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = c_12;
                  {
                    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
                    ATerm b_36 = NULL;
                    ATerm f_36 = NULL;
                    t = new_0(t);
                    {
                      b_36 = t;
                      {
                        if(((z_35 != NULL) && (z_35 != b_36)))
                          _fail(b_36);
                        else
                          z_35 = b_36;
                        {
                          t = not_null(d_35);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
                              c_36 = t;
                              z_34 :
                              if(match_cons(c_36, sym_App_2))
                                {
                                  d_36 = ATgetArgument(c_36, 0);
                                  e_36 = ATgetArgument(c_36, 1);
                                  {
                                    if(((x_35 != NULL) && (x_35 != d_36)))
                                      _fail(d_36);
                                    else
                                      x_35 = d_36;
                                    {
                                      if(((y_35 != NULL) && (y_35 != e_36)))
                                        _fail(e_36);
                                      else
                                        y_35 = e_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35));
                                    }
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
                              f_36 = t;
                              if(((a_36 != NULL) && (a_36 != f_36)))
                                _fail(f_36);
                              else
                                a_36 = f_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_35), not_null(y_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_36))));
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
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym__2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_36)), not_null(v_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  e_37 = t;
  b_37 :
  if(match_cons(e_37, sym__2))
    {
      f_37 = ATgetArgument(e_37, 0);
      i_37 = ATgetArgument(e_37, 1);
      c_37 :
      if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
        {
          g_37 = ATgetFirst((ATermList) f_37);
          h_37 = (ATerm) ATgetNext((ATermList) f_37);
          d_37 :
          if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
            {
              j_37 = ATgetFirst((ATermList) i_37);
              k_37 = (ATerm) ATgetNext((ATermList) i_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_37), not_null(j_37)), (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(k_37)));
            }
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
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  r_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      s_37 :
      if(((ATgetType(v_37) == AT_LIST) && ATisEmpty(v_37)))
        {
          t_37 :
          if(((ATgetType(w_37) == AT_LIST) && ATisEmpty(w_37)))
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
  ATerm y_37 (ATerm t)
  {
    ATerm i_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = i_12;
        {
          t = y_104(t);
          {
            t = _2(t, a_105, y_37);
            t = z_104(t);
          }
        }
      }
    return(t);
  }
  t = y_37(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  x_38 = t;
  q_38 :
  if(match_cons(x_38, sym_Call_2))
    {
      y_38 = ATgetArgument(x_38, 0);
      a_39 = ATgetArgument(x_38, 1);
      r_38 :
      if(match_cons(y_38, sym_SVar_1))
        {
          z_38 = ATgetArgument(y_38, 0);
          s_38 :
          if(match_string(z_38, "Anno_Cong__"))
            {
              t_38 :
              if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
                {
                  b_39 = ATgetFirst((ATermList) a_39);
                  e_39 = (ATerm) ATgetNext((ATermList) a_39);
                  u_38 :
                  if(match_cons(b_39, sym_Cong_2))
                    {
                      c_39 = ATgetArgument(b_39, 0);
                      d_39 = ATgetArgument(b_39, 1);
                      v_38 :
                      if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
                        {
                          f_39 = ATgetFirst((ATermList) e_39);
                          g_39 = (ATerm) ATgetNext((ATermList) e_39);
                          w_38 :
                          if(((ATgetType(g_39) == AT_LIST) && ATisEmpty(g_39)))
                            {
                              {
                                ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,l_42 = NULL,n_42 = NULL,p_42 = NULL;
                                ATerm s_12;
                                s_12 = t;
                                {
                                  ATerm r_39 = NULL,x_39 = NULL,y_39 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(f_39));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      r_39 = t;
                                      m_38 :
                                      if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
                                        {
                                          x_39 = ATgetFirst((ATermList) r_39);
                                          y_39 = (ATerm) ATgetNext((ATermList) r_39);
                                          {
                                            ATerm k_40 = NULL;
                                            if(((k_39 != NULL) && (k_39 != x_39)))
                                              _fail(x_39);
                                            else
                                              k_39 = x_39;
                                            {
                                              if(((o_39 != NULL) && (o_39 != y_39)))
                                                _fail(y_39);
                                              else
                                                o_39 = y_39;
                                              {
                                                ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
                                                ATerm n_1 (ATerm t)
                                                {
                                                  ATerm z_39 = NULL;
                                                  ATerm a_40 = NULL;
                                                  a_40 = t;
                                                  if(((z_39 != NULL) && (z_39 != a_40)))
                                                    _fail(a_40);
                                                  else
                                                    z_39 = a_40;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_39));
                                                  return(t);
                                                }
                                                t = map_1(t, n_1);
                                                {
                                                  k_40 = t;
                                                  {
                                                    if(((l_39 != NULL) && (l_39 != k_40)))
                                                      _fail(k_40);
                                                    else
                                                      l_39 = k_40;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(f_39));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          l_40 = t;
                                                          l_38 :
                                                          if(((ATgetType(l_40) == AT_LIST) && !(ATisEmpty(l_40))))
                                                            {
                                                              m_40 = ATgetFirst((ATermList) l_40);
                                                              n_40 = (ATerm) ATgetNext((ATermList) l_40);
                                                              {
                                                                ATerm v_40 = NULL;
                                                                if(((m_39 != NULL) && (m_39 != m_40)))
                                                                  _fail(m_40);
                                                                else
                                                                  m_39 = m_40;
                                                                {
                                                                  if(((p_39 != NULL) && (p_39 != n_40)))
                                                                    _fail(n_40);
                                                                  else
                                                                    p_39 = n_40;
                                                                  {
                                                                    ATerm w_40 = NULL,p_41 = NULL;
                                                                    ATerm o_1 (ATerm t)
                                                                    {
                                                                      ATerm o_40 = NULL;
                                                                      ATerm p_40 = NULL;
                                                                      p_40 = t;
                                                                      if(((o_40 != NULL) && (o_40 != p_40)))
                                                                        _fail(p_40);
                                                                      else
                                                                        o_40 = p_40;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_40));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, o_1);
                                                                    {
                                                                      v_40 = t;
                                                                      {
                                                                        if(((n_39 != NULL) && (n_39 != v_40)))
                                                                          _fail(v_40);
                                                                        else
                                                                          n_39 = v_40;
                                                                        {
                                                                          ATerm x_40 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_39), not_null(p_39));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              x_40 = t;
                                                                              if(((w_40 != NULL) && (w_40 != x_40)))
                                                                                _fail(x_40);
                                                                              else
                                                                                w_40 = x_40;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_40), (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(f_39)));
                                                                            {
                                                                              ATerm p_1 (ATerm t)
                                                                              {
                                                                                ATerm y_40 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
                                                                                y_40 = t;
                                                                                i_38 :
                                                                                if(match_cons(y_40, sym__2))
                                                                                  {
                                                                                    i_41 = ATgetArgument(y_40, 0);
                                                                                    l_41 = ATgetArgument(y_40, 1);
                                                                                    j_38 :
                                                                                    if(match_cons(i_41, sym__2))
                                                                                      {
                                                                                        j_41 = ATgetArgument(i_41, 0);
                                                                                        k_41 = ATgetArgument(i_41, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_41))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_41)))));
                                                                                      }
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
                                                                              t = zip_1(t, p_1);
                                                                              {
                                                                                p_41 = t;
                                                                                if(((q_39 != NULL) && (q_39 != p_41)))
                                                                                  _fail(p_41);
                                                                                else
                                                                                  q_39 = p_41;
                                                                              }
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
                                t = s_12;
                                {
                                  ATerm t_12;
                                  t_12 = t;
                                  {
                                    ATerm m_42 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_39), not_null(p_39));
                                    {
                                      t = conc_0(t);
                                      {
                                        m_42 = t;
                                        if(((l_42 != NULL) && (l_42 != m_42)))
                                          _fail(m_42);
                                        else
                                          l_42 = m_42;
                                      }
                                    }
                                  }
                                  t = t_12;
                                  {
                                    ATerm a_13;
                                    a_13 = t;
                                    {
                                      ATerm o_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_39), not_null(l_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_39))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          o_42 = t;
                                          if(((n_42 != NULL) && (n_42 != o_42)))
                                            _fail(o_42);
                                          else
                                            n_42 = o_42;
                                        }
                                      }
                                    }
                                    t = a_13;
                                    {
                                      ATerm q_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_39), not_null(n_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_39))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          q_42 = t;
                                          if(((p_42 != NULL) && (p_42 != q_42)))
                                            _fail(q_42);
                                          else
                                            p_42 = q_42;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(l_42)), not_null(m_39)), not_null(k_39)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_39)), not_null(p_42))));
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
  ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym_As_2))
    {
      t_43 = ATgetArgument(s_43, 0);
      w_43 = ATgetArgument(s_43, 1);
      {
        ATerm l_44 = NULL,n_44 = NULL;
        ATerm m_44 = NULL;
        t = SSLgetAnnotations(not_null(s_43));
        {
          m_44 = t;
          if(((l_44 != NULL) && (l_44 != m_44)))
            _fail(m_44);
          else
            l_44 = m_44;
        }
        {
          t = not_null(t_43);
          {
            ATerm p_44 = NULL;
            t = a_91(t);
            {
              n_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm r_44 = NULL;
                  t = b_91(t);
                  {
                    p_44 = t;
                    {
                      ATerm s_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(n_44), not_null(p_44)), not_null(l_44));
                      {
                        s_44 = t;
                        if(((r_44 != NULL) && (r_44 != s_44)))
                          _fail(s_44);
                        else
                          r_44 = s_44;
                      }
                      t = not_null(r_44);
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
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym_Prim_2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        ATerm k_45 = NULL,m_45 = NULL;
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(e_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
        {
          t = not_null(f_45);
          {
            ATerm o_45 = NULL;
            t = x_86(t);
            {
              m_45 = t;
              {
                t = not_null(g_45);
                {
                  ATerm q_45 = NULL;
                  t = y_86(t);
                  {
                    o_45 = t;
                    {
                      ATerm r_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(m_45), not_null(o_45)), not_null(k_45));
                      {
                        r_45 = t;
                        if(((q_45 != NULL) && (q_45 != r_45)))
                          _fail(r_45);
                        else
                          q_45 = r_45;
                      }
                      t = not_null(q_45);
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_Explode_2))
    {
      e_46 = ATgetArgument(d_46, 0);
      f_46 = ATgetArgument(d_46, 1);
      {
        ATerm j_46 = NULL,l_46 = NULL;
        ATerm k_46 = NULL;
        t = SSLgetAnnotations(not_null(d_46));
        {
          k_46 = t;
          if(((j_46 != NULL) && (j_46 != k_46)))
            _fail(k_46);
          else
            j_46 = k_46;
        }
        {
          t = not_null(e_46);
          {
            ATerm n_46 = NULL;
            t = w_90(t);
            {
              l_46 = t;
              {
                t = not_null(f_46);
                {
                  ATerm p_46 = NULL;
                  t = x_90(t);
                  {
                    n_46 = t;
                    {
                      ATerm q_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_46), not_null(n_46)), not_null(j_46));
                      {
                        q_46 = t;
                        if(((p_46 != NULL) && (p_46 != q_46)))
                          _fail(q_46);
                        else
                          p_46 = q_46;
                      }
                      t = not_null(p_46);
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
  ATerm c_47 = NULL,h_47 = NULL,i_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym_Op_2))
    {
      h_47 = ATgetArgument(c_47, 0);
      i_47 = ATgetArgument(c_47, 1);
      {
        ATerm m_47 = NULL,q_47 = NULL;
        ATerm p_47 = NULL;
        t = SSLgetAnnotations(not_null(c_47));
        {
          p_47 = t;
          if(((m_47 != NULL) && (m_47 != p_47)))
            _fail(p_47);
          else
            m_47 = p_47;
        }
        {
          t = not_null(h_47);
          {
            ATerm s_47 = NULL;
            t = b_89(t);
            {
              q_47 = t;
              {
                t = not_null(i_47);
                {
                  ATerm u_47 = NULL;
                  t = c_89(t);
                  {
                    s_47 = t;
                    {
                      ATerm v_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_47), not_null(s_47)), not_null(m_47));
                      {
                        v_47 = t;
                        if(((u_47 != NULL) && (u_47 != v_47)))
                          _fail(v_47);
                        else
                          u_47 = v_47;
                      }
                      t = not_null(u_47);
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
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_98(t);
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
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, s_98);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  ;
                  LocalPopChoice(g_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm t_13 = t;
                    int u_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_98);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        ;
                        LocalPopChoice(u_13);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm v_13 = t;
                          int w_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              ;
                              LocalPopChoice(w_13);
                            }
                          else
                            {
                              t = v_13;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_98);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Match_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
            ATerm d_49 = NULL;
            ATerm h_49 = NULL;
            t = new_0(t);
            {
              d_49 = t;
              {
                if(((b_49 != NULL) && (b_49 != d_49)))
                  _fail(d_49);
                else
                  b_49 = d_49;
                {
                  t = not_null(s_48);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
                      e_49 = t;
                      g_48 :
                      if(match_cons(e_49, sym_Anno_2))
                        {
                          f_49 = ATgetArgument(e_49, 0);
                          g_49 = ATgetArgument(e_49, 1);
                          {
                            if(((u_48 != NULL) && (u_48 != f_49)))
                              _fail(f_49);
                            else
                              u_48 = f_49;
                            {
                              if(((a_49 != NULL) && (a_49 != g_49)))
                                _fail(g_49);
                              else
                                a_49 = g_49;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_49)), not_null(u_48));
                            }
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
                      h_49 = t;
                      if(((c_49 != NULL) && (c_49 != h_49)))
                        _fail(h_49);
                      else
                        c_49 = h_49;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_49)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_49)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_49))))));
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm a_14 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
                  ATerm m_49 = NULL;
                  ATerm s_49 = NULL;
                  t = new_0(t);
                  {
                    m_49 = t;
                    {
                      if(((k_49 != NULL) && (k_49 != m_49)))
                        _fail(m_49);
                      else
                        k_49 = m_49;
                      {
                        t = not_null(s_48);
                        {
                          ATerm y_1 (ATerm t)
                          {
                            ATerm n_49 = NULL,r_49 = NULL;
                            n_49 = t;
                            k_48 :
                            if(match_cons(n_49, sym_RootApp_1))
                              {
                                r_49 = ATgetArgument(n_49, 0);
                                {
                                  if(((j_49 != NULL) && (j_49 != r_49)))
                                    _fail(r_49);
                                  else
                                    j_49 = r_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_49));
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
                            s_49 = t;
                            if(((l_49 != NULL) && (l_49 != s_49)))
                              _fail(s_49);
                            else
                              l_49 = s_49;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_49))), not_null(j_49))));
                  ;
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
                    ATerm y_49 = NULL;
                    ATerm c_50 = NULL;
                    t = new_0(t);
                    {
                      y_49 = t;
                      {
                        if(((w_49 != NULL) && (w_49 != y_49)))
                          _fail(y_49);
                        else
                          w_49 = y_49;
                        {
                          t = not_null(s_48);
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
                              z_49 = t;
                              o_48 :
                              if(match_cons(z_49, sym_App_2))
                                {
                                  a_50 = ATgetArgument(z_49, 0);
                                  b_50 = ATgetArgument(z_49, 1);
                                  {
                                    if(((v_49 != NULL) && (v_49 != a_50)))
                                      _fail(a_50);
                                    else
                                      v_49 = a_50;
                                    {
                                      if(((u_49 != NULL) && (u_49 != b_50)))
                                        _fail(b_50);
                                      else
                                        u_49 = b_50;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_49));
                                    }
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
                              c_50 = t;
                              if(((x_49 != NULL) && (x_49 != c_50)))
                                _fail(c_50);
                              else
                                x_49 = c_50;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_49)), not_null(v_49)))));
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
  ATerm k_51 = NULL,p_51 = NULL,q_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym_Cong_2))
    {
      p_51 = ATgetArgument(k_51, 0);
      q_51 = ATgetArgument(k_51, 1);
      {
        ATerm t_51 = NULL;
        ATerm x_51 = NULL;
        t = not_null(q_51);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm u_51 = NULL,v_51 = NULL;
            v_51 = t;
            d_51 :
            if(match_cons(v_51, sym_Match_1))
              {
                u_51 = ATgetArgument(v_51, 0);
                t = not_null(u_51);
              }
            else
              {
                if(match_cons(v_51, sym_Id_0))
                  {
                    t = term_c_14;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, a_2);
          {
            x_51 = t;
            if(((t_51 != NULL) && (t_51 != x_51)))
              _fail(x_51);
            else
              t_51 = x_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_51), not_null(t_51)));
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
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  d_52 :
  if(match_cons(f_52, sym_Scope_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      e_52 :
      if(((ATgetType(g_52) == AT_LIST) && ATisEmpty(g_52)))
        {
          t = not_null(h_52);
        }
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
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  q_52 :
  if(match_cons(d_53, sym_Where_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      r_52 :
      if(match_cons(e_53, sym_Seq_2))
        {
          c_53 = ATgetArgument(e_53, 0);
          y_52 = ATgetArgument(e_53, 1);
          s_52 :
          if(match_cons(c_53, sym_Where_1))
            {
              x_52 = ATgetArgument(c_53, 0);
              t_52 :
              if(match_cons(y_52, sym_Seq_2))
                {
                  z_52 = ATgetArgument(y_52, 0);
                  b_53 = ATgetArgument(y_52, 1);
                  u_52 :
                  if(match_cons(z_52, sym_Build_1))
                    {
                      a_53 = ATgetArgument(z_52, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_53)), not_null(b_53))));
                    }
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
          if(match_cons(e_53, sym_Where_1))
            {
              c_53 = ATgetArgument(e_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(c_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(d_53, sym_Test_1))
        {
          e_53 = ATgetArgument(d_53, 0);
          v_52 :
          if(match_cons(e_53, sym_Test_1))
            {
              c_53 = ATgetArgument(e_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_53, sym_Not_1))
            {
              e_53 = ATgetArgument(d_53, 0);
              w_52 :
              if(match_cons(e_53, sym_Not_1))
                {
                  c_53 = ATgetArgument(e_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(d_53, sym_LChoice_2))
                {
                  e_53 = ATgetArgument(d_53, 0);
                  f_53 = ATgetArgument(d_53, 1);
                  {
                    if(((e_53 != NULL) && (e_53 != f_53)))
                      _fail(f_53);
                    else
                      e_53 = f_53;
                    t = not_null(e_53);
                  }
                }
              else
                {
                  if(match_cons(d_53, sym_Choice_2))
                    {
                      e_53 = ATgetArgument(d_53, 0);
                      f_53 = ATgetArgument(d_53, 1);
                      {
                        if(((e_53 != NULL) && (e_53 != f_53)))
                          _fail(f_53);
                        else
                          e_53 = f_53;
                        t = not_null(e_53);
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
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  a_54 :
  if(match_cons(e_54, sym_LChoice_2))
    {
      f_54 = ATgetArgument(e_54, 0);
      i_54 = ATgetArgument(e_54, 1);
      b_54 :
      if(match_cons(f_54, sym_LChoice_2))
        {
          g_54 = ATgetArgument(f_54, 0);
          h_54 = ATgetArgument(f_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_54), not_null(i_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(e_54, sym_Seq_2))
        {
          f_54 = ATgetArgument(e_54, 0);
          i_54 = ATgetArgument(e_54, 1);
          c_54 :
          if(match_cons(f_54, sym_Seq_2))
            {
              g_54 = ATgetArgument(f_54, 0);
              h_54 = ATgetArgument(f_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_54), not_null(i_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_54, sym_Choice_2))
            {
              f_54 = ATgetArgument(e_54, 0);
              i_54 = ATgetArgument(e_54, 1);
              d_54 :
              if(match_cons(f_54, sym_Choice_2))
                {
                  g_54 = ATgetArgument(f_54, 0);
                  h_54 = ATgetArgument(f_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_54), not_null(i_54)));
                }
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
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  o_55 :
  if(match_cons(v_55, sym_Lets_2))
    {
      w_55 = ATgetArgument(v_55, 0);
      x_55 = ATgetArgument(v_55, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_55), not_null(x_55));
    }
  else
    {
      if(match_cons(v_55, sym_LChoices_1))
        {
          w_55 = ATgetArgument(v_55, 0);
          p_55 :
          if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
            {
              s_55 = ATgetFirst((ATermList) w_55);
              t_55 = (ATerm) ATgetNext((ATermList) w_55);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_55)));
            }
          else
            {
              if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                {
                  t = term_b_8;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(v_55, sym_Choices_1))
            {
              w_55 = ATgetArgument(v_55, 0);
              q_55 :
              if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
                {
                  s_55 = ATgetFirst((ATermList) w_55);
                  t_55 = (ATerm) ATgetNext((ATermList) w_55);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_55)));
                }
              else
                {
                  if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                    {
                      t = term_b_8;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(v_55, sym_Seqs_1))
                {
                  w_55 = ATgetArgument(v_55, 0);
                  r_55 :
                  if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
                    {
                      s_55 = ATgetFirst((ATermList) w_55);
                      t_55 = (ATerm) ATgetNext((ATermList) w_55);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_55)));
                    }
                  else
                    {
                      if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                        {
                          t = term_n_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(v_55, sym_DefaultVarDec_1))
                    {
                      w_55 = ATgetArgument(v_55, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_14), term_q_14));
                    }
                  else
                    {
                      if(match_cons(v_55, sym_InfixApp_3))
                        {
                          w_55 = ATgetArgument(v_55, 0);
                          x_55 = ATgetArgument(v_55, 1);
                          u_55 = ATgetArgument(v_55, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), not_null(w_55))));
                        }
                      else
                        {
                          if(match_cons(v_55, sym_BAM_3))
                            {
                              w_55 = ATgetArgument(v_55, 0);
                              x_55 = ATgetArgument(v_55, 1);
                              u_55 = ATgetArgument(v_55, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(u_55))), not_null(w_55)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_55))));
                            }
                          else
                            {
                              if(match_cons(v_55, sym_AM_2))
                                {
                                  w_55 = ATgetArgument(v_55, 0);
                                  x_55 = ATgetArgument(v_55, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_55), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_55)));
                                }
                              else
                                {
                                  if(match_cons(v_55, sym_MA_2))
                                    {
                                      w_55 = ATgetArgument(v_55, 0);
                                      x_55 = ATgetArgument(v_55, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_55)), not_null(x_55));
                                    }
                                  else
                                    {
                                      if(match_cons(v_55, sym_BA_2))
                                        {
                                          w_55 = ATgetArgument(v_55, 0);
                                          x_55 = ATgetArgument(v_55, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_55)), not_null(w_55));
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
  ATerm s_57 = NULL,t_57 = NULL;
  s_57 = t;
  o_57 :
  if(match_cons(s_57, sym_Where_1))
    {
      t_57 = ATgetArgument(s_57, 0);
      r_57 :
      if(match_cons(t_57, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  c_58 :
  if(match_cons(e_58, sym_LChoice_2))
    {
      f_58 = ATgetArgument(e_58, 0);
      g_58 = ATgetArgument(e_58, 1);
      d_58 :
      if(match_cons(g_58, sym_Fail_0))
        {
          t = not_null(f_58);
        }
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
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  k_58 :
  if(match_cons(m_58, sym_LChoice_2))
    {
      n_58 = ATgetArgument(m_58, 0);
      o_58 = ATgetArgument(m_58, 1);
      l_58 :
      if(match_cons(n_58, sym_Fail_0))
        {
          t = not_null(o_58);
        }
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
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  s_58 :
  if(match_cons(u_58, sym_Choice_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      t_58 :
      if(match_cons(w_58, sym_Fail_0))
        {
          t = not_null(v_58);
        }
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
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  a_59 :
  if(match_cons(c_59, sym_Choice_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      b_59 :
      if(match_cons(d_59, sym_Fail_0))
        {
          t = not_null(e_59);
        }
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
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  j_59 :
  if(match_cons(k_59, sym_Cong_2))
    {
      l_59 = ATgetArgument(k_59, 0);
      m_59 = ATgetArgument(k_59, 1);
      {
        t = not_null(m_59);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm p_59 = NULL;
            p_59 = t;
            i_59 :
            if(!(match_cons(p_59, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, b_2);
        }
        t = term_b_8;
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
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
  u_59 = t;
  s_59 :
  if(match_cons(u_59, sym_Path_2))
    {
      v_59 = ATgetArgument(u_59, 0);
      w_59 = ATgetArgument(u_59, 1);
      t_59 :
      if(match_cons(w_59, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  a_60 :
  if(match_cons(c_60, sym_One_1))
    {
      d_60 = ATgetArgument(c_60, 0);
      b_60 :
      if(match_cons(d_60, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm i_60 = NULL,j_60 = NULL;
  i_60 = t;
  g_60 :
  if(match_cons(i_60, sym_Some_1))
    {
      j_60 = ATgetArgument(i_60, 0);
      h_60 :
      if(match_cons(j_60, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  m_60 :
  if(match_cons(o_60, sym_Rec_2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
      n_60 :
      if(match_cons(q_60, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  w_60 = t;
  u_60 :
  if(match_cons(w_60, sym_Scope_2))
    {
      x_60 = ATgetArgument(w_60, 0);
      y_60 = ATgetArgument(w_60, 1);
      v_60 :
      if(match_cons(y_60, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  f_61 = t;
  d_61 :
  if(match_cons(f_61, sym_Seq_2))
    {
      g_61 = ATgetArgument(f_61, 0);
      h_61 = ATgetArgument(f_61, 1);
      e_61 :
      if(match_cons(g_61, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  l_61 :
  if(match_cons(n_61, sym_Not_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      m_61 :
      if(match_cons(o_61, sym_Fail_0))
        {
          t = term_n_14;
        }
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
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_Test_1))
    {
      u_61 = ATgetArgument(t_61, 0);
      s_61 :
      if(match_cons(u_61, sym_Fail_0))
        {
          t = term_b_8;
        }
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
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm u_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = u_14;
            {
              ATerm l_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = l_15;
                  {
                    ATerm s_15 = t;
                    int t_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(t_15);
                      }
                    else
                      {
                        t = s_15;
                        {
                          ATerm v_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = v_15;
                              {
                                ATerm x_15 = t;
                                int y_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(y_15);
                                  }
                                else
                                  {
                                    t = x_15;
                                    {
                                      ATerm n_16 = t;
                                      int o_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(o_16);
                                        }
                                      else
                                        {
                                          t = n_16;
                                          {
                                            ATerm p_16 = t;
                                            int q_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
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
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(s_16);
                                                    }
                                                  else
                                                    {
                                                      t = r_16;
                                                      {
                                                        ATerm t_16 = t;
                                                        int u_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(u_16);
                                                          }
                                                        else
                                                          {
                                                            t = t_16;
                                                            {
                                                              ATerm v_16 = t;
                                                              int d_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_17);
                                                                }
                                                              else
                                                                {
                                                                  t = v_16;
                                                                  {
                                                                    ATerm e_17 = t;
                                                                    int f_17 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(f_17);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_17;
                                                                        {
                                                                          ATerm i_17 = t;
                                                                          int j_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(j_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_17;
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
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_Match_1))
    {
      a_62 = ATgetArgument(z_61, 0);
      y_61 :
      if(match_cons(a_62, sym_Wld_0))
        {
          t = term_n_14;
        }
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
  ATerm h_62 = NULL,i_62 = NULL;
  h_62 = t;
  f_62 :
  if(match_cons(h_62, sym_Where_1))
    {
      i_62 = ATgetArgument(h_62, 0);
      g_62 :
      if(match_cons(i_62, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm s_62 = NULL,t_62 = NULL;
  s_62 = t;
  l_62 :
  if(match_cons(s_62, sym_All_1))
    {
      t_62 = ATgetArgument(s_62, 0);
      r_62 :
      if(match_cons(t_62, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  w_62 :
  if(match_cons(y_62, sym_Rec_2))
    {
      z_62 = ATgetArgument(y_62, 0);
      a_63 = ATgetArgument(y_62, 1);
      x_62 :
      if(match_cons(a_63, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
  g_63 = t;
  e_63 :
  if(match_cons(g_63, sym_Scope_2))
    {
      h_63 = ATgetArgument(g_63, 0);
      i_63 = ATgetArgument(g_63, 1);
      f_63 :
      if(match_cons(i_63, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  m_63 :
  if(match_cons(o_63, sym_LChoice_2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      n_63 :
      if(match_cons(p_63, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  u_63 :
  if(match_cons(w_63, sym_Seq_2))
    {
      x_63 = ATgetArgument(w_63, 0);
      y_63 = ATgetArgument(w_63, 1);
      v_63 :
      if(match_cons(y_63, sym_Id_0))
        {
          t = not_null(x_63);
        }
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
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  c_64 :
  if(match_cons(e_64, sym_Seq_2))
    {
      f_64 = ATgetArgument(e_64, 0);
      g_64 = ATgetArgument(e_64, 1);
      d_64 :
      if(match_cons(f_64, sym_Id_0))
        {
          t = not_null(g_64);
        }
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
  ATerm m_64 = NULL,n_64 = NULL;
  m_64 = t;
  k_64 :
  if(match_cons(m_64, sym_Not_1))
    {
      n_64 = ATgetArgument(m_64, 0);
      l_64 :
      if(match_cons(n_64, sym_Id_0))
        {
          t = term_b_8;
        }
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
  ATerm s_64 = NULL,t_64 = NULL;
  s_64 = t;
  q_64 :
  if(match_cons(s_64, sym_Test_1))
    {
      t_64 = ATgetArgument(s_64, 0);
      r_64 :
      if(match_cons(t_64, sym_Id_0))
        {
          t = term_n_14;
        }
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
  ATerm m_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = m_17;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm c_18 = t;
              int d_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(d_18);
                }
              else
                {
                  t = c_18;
                  {
                    ATerm e_18 = t;
                    int f_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(f_18);
                      }
                    else
                      {
                        t = e_18;
                        {
                          ATerm g_18 = t;
                          int h_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(h_18);
                            }
                          else
                            {
                              t = g_18;
                              {
                                ATerm p_18 = t;
                                int q_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(q_18);
                                  }
                                else
                                  {
                                    t = p_18;
                                    {
                                      ATerm r_18 = t;
                                      int u_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(u_18);
                                        }
                                      else
                                        {
                                          t = r_18;
                                          {
                                            ATerm v_18 = t;
                                            int w_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(w_18);
                                              }
                                            else
                                              {
                                                t = v_18;
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
  ATerm c_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = c_19;
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm n_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = n_19;
                  {
                    ATerm a_20 = t;
                    int b_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
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
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(d_20);
                            }
                          else
                            {
                              t = c_20;
                              {
                                ATerm e_20 = t;
                                int g_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(g_20);
                                  }
                                else
                                  {
                                    t = e_20;
                                    {
                                      ATerm l_20 = t;
                                      int m_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(m_20);
                                        }
                                      else
                                        {
                                          t = l_20;
                                          {
                                            ATerm n_20 = t;
                                            int p_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(p_20);
                                              }
                                            else
                                              {
                                                t = n_20;
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
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  ;
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  {
                    ATerm c_21 = t;
                    int d_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        ;
                        LocalPopChoice(d_21);
                      }
                    else
                      {
                        t = c_21;
                        {
                          ATerm g_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              ;
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = g_21;
                              {
                                ATerm i_21 = t;
                                int j_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    ;
                                    LocalPopChoice(j_21);
                                  }
                                else
                                  {
                                    t = i_21;
                                    {
                                      ATerm o_21 = t;
                                      int p_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          ;
                                          LocalPopChoice(p_21);
                                        }
                                      else
                                        {
                                          t = o_21;
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
  ATerm v_64 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = l_120(t);
      t = v_64(t);
      return(t);
    }
    t = try_1(t, c_2);
    return(t);
  }
  t = v_64(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm n_100 (ATerm))
{
  t = n_100(t);
  {
    ATerm d_2 (ATerm t)
    {
      t = downup_1(t, n_100);
      return(t);
    }
    t = _all(t, d_2);
    t = n_100(t);
  }
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          ;
          LocalPopChoice(r_21);
        }
      else
        {
          t = q_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, f_2);
    return(t);
  }
  t = downup_1(t, e_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  e_65 = t;
  d_65 :
  if(match_cons(e_65, sym_SDef_3))
    {
      f_65 = ATgetArgument(e_65, 0);
      g_65 = ATgetArgument(e_65, 1);
      h_65 = ATgetArgument(e_65, 2);
      {
        ATerm m_65 = NULL,o_65 = NULL;
        ATerm n_65 = NULL;
        t = SSLgetAnnotations(not_null(e_65));
        {
          n_65 = t;
          if(((m_65 != NULL) && (m_65 != n_65)))
            _fail(n_65);
          else
            m_65 = n_65;
        }
        {
          t = not_null(f_65);
          {
            ATerm q_65 = NULL;
            t = l_88(t);
            {
              o_65 = t;
              {
                t = not_null(g_65);
                {
                  ATerm s_65 = NULL;
                  t = m_88(t);
                  {
                    q_65 = t;
                    {
                      t = not_null(h_65);
                      {
                        ATerm u_65 = NULL;
                        t = n_88(t);
                        {
                          s_65 = t;
                          {
                            ATerm v_65 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_65), not_null(q_65), not_null(s_65)), not_null(m_65));
                            {
                              v_65 = t;
                              if(((u_65 != NULL) && (u_65 != v_65)))
                                _fail(v_65);
                              else
                                u_65 = v_65;
                            }
                            t = not_null(u_65);
                          }
                        }
                      }
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
  ATerm h_66 = NULL,i_66 = NULL;
  h_66 = t;
  g_66 :
  if(match_cons(h_66, sym_Strategies_1))
    {
      i_66 = ATgetArgument(h_66, 0);
      {
        ATerm l_66 = NULL,n_66 = NULL;
        ATerm m_66 = NULL;
        t = SSLgetAnnotations(not_null(h_66));
        {
          m_66 = t;
          if(((l_66 != NULL) && (l_66 != m_66)))
            _fail(m_66);
          else
            l_66 = m_66;
        }
        {
          t = not_null(i_66);
          {
            ATerm p_66 = NULL;
            t = p_89(t);
            {
              n_66 = t;
              {
                ATerm q_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_66)), not_null(l_66));
                {
                  q_66 = t;
                  if(((p_66 != NULL) && (p_66 != q_66)))
                    _fail(q_66);
                  else
                    p_66 = q_66;
                }
                t = not_null(p_66);
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
  ATerm a_67 = NULL,b_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym_Specification_1))
    {
      b_67 = ATgetArgument(a_67, 0);
      {
        ATerm e_67 = NULL,g_67 = NULL;
        ATerm f_67 = NULL;
        t = SSLgetAnnotations(not_null(a_67));
        {
          f_67 = t;
          if(((e_67 != NULL) && (e_67 != f_67)))
            _fail(f_67);
          else
            e_67 = f_67;
        }
        {
          t = not_null(b_67);
          {
            ATerm i_67 = NULL;
            t = r_89(t);
            {
              g_67 = t;
              {
                ATerm j_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_67)), not_null(e_67));
                {
                  j_67 = t;
                  if(((i_67 != NULL) && (i_67 != j_67)))
                    _fail(j_67);
                  else
                    i_67 = j_67;
                }
                t = not_null(i_67);
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
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, p_98);
            return(t);
          }
          t = map_1(t, k_2);
          return(t);
        }
        t = Strategies_1(t, j_2);
        return(t);
      }
      t = Cons_2(t, i_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, h_2);
    return(t);
  }
  t = Specification_1(t, g_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  u_67 = t;
  t_67 :
  if(match_cons(u_67, sym__2))
    {
      v_67 = ATgetArgument(u_67, 0);
      w_67 = ATgetArgument(u_67, 1);
      {
        ATerm a_68 = NULL,c_68 = NULL;
        ATerm b_68 = NULL;
        t = SSLgetAnnotations(not_null(u_67));
        {
          b_68 = t;
          if(((a_68 != NULL) && (a_68 != b_68)))
            _fail(b_68);
          else
            a_68 = b_68;
        }
        {
          t = not_null(v_67);
          {
            ATerm e_68 = NULL;
            t = m_85(t);
            {
              c_68 = t;
              {
                t = not_null(w_67);
                {
                  ATerm g_68 = NULL;
                  t = n_85(t);
                  {
                    e_68 = t;
                    {
                      ATerm h_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_68), not_null(e_68)), not_null(a_68));
                      {
                        h_68 = t;
                        if(((g_68 != NULL) && (g_68 != h_68)))
                          _fail(h_68);
                        else
                          g_68 = h_68;
                      }
                      t = not_null(g_68);
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
  ATerm p_68 = NULL;
  ATerm w_21;
  w_21 = t;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm q_68 = NULL,r_68 = NULL;
      q_68 = t;
      o_68 :
      if(match_cons(q_68, sym_Program_1))
        {
          r_68 = ATgetArgument(q_68, 0);
          if(((p_68 != NULL) && (p_68 != r_68)))
            _fail(r_68);
          else
            p_68 = r_68;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_21), not_null(p_68)), term_y_21));
      {
        t = printnl_0(t);
        {
          t = term_e_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  v_68 = t;
  u_68 :
  if(match_cons(v_68, sym__2))
    {
      w_68 = ATgetArgument(v_68, 0);
      x_68 = ATgetArgument(v_68, 1);
      {
        ATerm f_22;
        f_22 = t;
        t = SSL_printnl(not_null(w_68), not_null(x_68));
        t = f_22;
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
  ATerm c_69 = NULL;
  c_69 = t;
  t = SSL_implode_string(not_null(c_69));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL;
        h_69 = t;
        g_69 :
        if(((ATgetType(h_69) == AT_LIST) && !(ATisEmpty(h_69))))
          {
            i_69 = ATgetFirst((ATermList) h_69);
            j_69 = (ATerm) ATgetNext((ATermList) h_69);
            {
              t = not_null(i_69);
              {
                ATerm m_2 (ATerm t)
                {
                  t = not_null(j_69);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm w_69 = NULL;
  ATerm y_69 = NULL;
  w_69 = t;
  {
    ATerm z_69 = NULL;
    ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
    t = not_null(w_69);
    {
      z_69 = t;
      {
        t = SSL_explode_term(not_null(z_69));
        {
          b_70 = t;
          u_69 :
          if(match_cons(b_70, sym__2))
            {
              c_70 = ATgetArgument(b_70, 0);
              d_70 = ATgetArgument(b_70, 1);
              v_69 :
              if(match_string(c_70, ""))
                {
                  if(((y_69 != NULL) && (y_69 != d_70)))
                    _fail(d_70);
                  else
                    y_69 = d_70;
                }
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
      t = not_null(y_69);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm h_70 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_70);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          t = Nil_0(t);
          t = b_107(t);
        }
      }
    return(t);
  }
  t = h_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  j_70 :
  if(match_cons(k_70, sym__2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      {
        t = not_null(l_70);
        {
          ATerm n_2 (ATerm t)
          {
            t = not_null(m_70);
            return(t);
          }
          t = at_end_1(t, n_2);
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
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_70 = NULL;
  r_70 = t;
  t = SSL_explode_string(not_null(r_70));
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
  ATerm v_70 = NULL;
  v_70 = t;
  t = SSL_is_string(not_null(v_70));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = r_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_2);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
              e_71 = t;
              d_71 :
              if(match_cons(e_71, sym_Path_1))
                {
                  f_71 = ATgetArgument(e_71, 0);
                  t = not_null(f_71);
                }
              else
                {
                  if(match_cons(e_71, sym_Var_1))
                    {
                      f_71 = ATgetArgument(e_71, 0);
                      {
                        t = not_null(f_71);
                        {
                          ATerm d_23 = t;
                          int e_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_23);
                            }
                          else
                            {
                              t = d_23;
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = term_f_23;
                                  return(t);
                                }
                                t = debug_1(t, p_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_71, sym_Prefix_2))
                        {
                          f_71 = ATgetArgument(e_71, 0);
                          g_71 = ATgetArgument(e_71, 1);
                          {
                            ATerm l_71 = NULL,n_71 = NULL;
                            ATerm g_23;
                            g_23 = t;
                            {
                              ATerm m_71 = NULL;
                              t = not_null(f_71);
                              {
                                t = eval_config_0(t);
                                {
                                  m_71 = t;
                                  if(((l_71 != NULL) && (l_71 != m_71)))
                                    _fail(m_71);
                                  else
                                    l_71 = m_71;
                                }
                              }
                            }
                            t = g_23;
                            {
                              ATerm o_71 = NULL;
                              t = not_null(g_71);
                              {
                                t = eval_config_0(t);
                                {
                                  o_71 = t;
                                  if(((n_71 != NULL) && (n_71 != o_71)))
                                    _fail(o_71);
                                  else
                                    n_71 = o_71;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_71), not_null(n_71));
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
  ATerm w_71 = NULL;
  w_71 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_23, not_null(w_71));
    {
      t = table_get_0(t);
      {
        ATerm q_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_23;
            j_23 = t;
            {
              ATerm y_71 = NULL;
              ATerm z_71 = NULL;
              z_71 = t;
              if(((y_71 != NULL) && (y_71 != z_71)))
                _fail(z_71);
              else
                y_71 = z_71;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_23, not_null(w_71), not_null(y_71));
                t = table_put_0(t);
              }
            }
            t = j_23;
          }
          return(t);
        }
        t = try_1(t, q_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_114 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm k_23;
    k_23 = t;
    {
      ATerm d_72 = NULL;
      ATerm e_72 = NULL;
      t = term_m_23;
      {
        t = get_config_0(t);
        {
          e_72 = t;
          if(((d_72 != NULL) && (d_72 != e_72)))
            _fail(e_72);
          else
            d_72 = e_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_72), term_u_23);
        t = geq_0(t);
      }
    }
    t = k_23;
    t = q_114(t);
    return(t);
  }
  t = try_1(t, r_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  h_72 :
  if(match_cons(i_72, sym__2))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      t = SSL_WriteToTextFile(not_null(j_72), not_null(k_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  p_72 :
  if(match_cons(q_72, sym__2))
    {
      r_72 = ATgetArgument(q_72, 0);
      s_72 = ATgetArgument(q_72, 1);
      t = SSL_WriteToBinaryFile(not_null(r_72), not_null(s_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_73 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm w_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm b_73 = NULL,c_73 = NULL;
            b_73 = t;
            x_72 :
            if(match_cons(b_73, sym_Output_1))
              {
                c_73 = ATgetArgument(b_73, 0);
                if(((a_73 != NULL) && (a_73 != c_73)))
                  _fail(c_73);
                else
                  a_73 = c_73;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_2);
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = w_23;
          {
            ATerm d_73 = NULL;
            t = term_g_24;
            {
              d_73 = t;
              if(((a_73 != NULL) && (a_73 != d_73)))
                _fail(d_73);
              else
                a_73 = d_73;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_2, _id);
  }
  t = v_23;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm v_2 (ATerm t)
      {
        t = not_null(a_73);
        return(t);
      }
      t = split_2(t, v_2, _id);
      return(t);
    }
    t = _2(t, _id, u_2);
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              ATerm e_73 = NULL;
              e_73 = t;
              z_72 :
              if(!(match_cons(e_73, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_2);
            return(t);
          }
          t = _2(t, w_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
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
  ATerm w_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  ATerm o_24;
  o_24 = t;
  t = dtime_0(t);
  t = o_24;
  {
    t = o_124(t);
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm x_73 = NULL;
        t = dtime_0(t);
        {
          x_73 = t;
          if(((w_73 != NULL) && (w_73 != x_73)))
            _fail(x_73);
          else
            w_73 = x_73;
        }
      }
      t = p_24;
      {
        y_73 = t;
        v_73 :
        if(match_cons(y_73, sym__2))
          {
            z_73 = ATgetArgument(y_73, 0);
            a_74 = ATgetArgument(y_73, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_73)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_73))), not_null(a_74));
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
  ATerm q_24;
  q_24 = t;
  {
    ATerm l_74 = NULL,n_74 = NULL;
    ATerm r_24;
    r_24 = t;
    {
      ATerm m_74 = NULL;
      t = p_112(t);
      {
        m_74 = t;
        if(((l_74 != NULL) && (l_74 != m_74)))
          _fail(m_74);
        else
          l_74 = m_74;
      }
    }
    t = r_24;
    {
      ATerm o_74 = NULL;
      o_74 = t;
      if(((n_74 != NULL) && (n_74 != o_74)))
        _fail(o_74);
      else
        n_74 = o_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_74)), not_null(l_74)));
        t = printnl_0(t);
      }
    }
  }
  t = q_24;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_74 = NULL;
  ATerm s_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_74 = NULL;
      t_74 = t;
      {
        if(((s_74 != NULL) && (s_74 != t_74)))
          _fail(t_74);
        else
          s_74 = t_74;
        t = SSL_ReadFromFile(not_null(s_74));
      }
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = s_24;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_c_25;
          return(t);
        }
        t = debug_1(t, y_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_103 (ATerm), ATerm y_103 (ATerm))
{
  ATerm x_74 = NULL,z_74 = NULL;
  ATerm e_25;
  e_25 = t;
  {
    ATerm y_74 = NULL;
    t = x_103(t);
    {
      y_74 = t;
      if(((x_74 != NULL) && (x_74 != y_74)))
        _fail(y_74);
      else
        x_74 = y_74;
    }
  }
  t = e_25;
  {
    ATerm a_75 = NULL;
    t = y_103(t);
    {
      a_75 = t;
      if(((z_74 != NULL) && (z_74 != a_75)))
        _fail(a_75);
      else
        z_74 = a_75;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_74), not_null(z_74));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_76 = NULL;
  ATerm g_25;
  g_25 = t;
  {
    ATerm h_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 (ATerm t)
        {
          ATerm v_76 = NULL,w_76 = NULL;
          v_76 = t;
          x_75 :
          if(match_cons(v_76, sym_Input_1))
            {
              w_76 = ATgetArgument(v_76, 0);
              if(((u_76 != NULL) && (u_76 != w_76)))
                _fail(w_76);
              else
                u_76 = w_76;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_2);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = h_25;
        {
          ATerm x_76 = NULL;
          t = term_k_25;
          {
            x_76 = t;
            if(((u_76 != NULL) && (u_76 != x_76)))
              _fail(x_76);
            else
              u_76 = x_76;
          }
        }
      }
  }
  t = g_25;
  {
    ATerm a_3 (ATerm t)
    {
      t = not_null(u_76);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm c_78 = NULL;
    c_78 = t;
    b_78 :
    if(!(match_string(c_78, "-v")))
      {
        if(!(match_string(c_78, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_s_25;
    t = set_config_0(t);
    t = term_t_25;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_u_25;
    return(t);
  }
  t = Option_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_78 = NULL;
    f_78 = t;
    d_78 :
    if(!(match_string(f_78, "-k")))
      {
        if(!(match_string(f_78, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm v_25;
    v_25 = t;
    {
      ATerm g_78 = NULL;
      ATerm h_78 = NULL;
      t = string_to_int_0(t);
      {
        h_78 = t;
        if(((g_78 != NULL) && (g_78 != h_78)))
          _fail(h_78);
        else
          g_78 = h_78;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(g_78));
        t = set_config_0(t);
      }
    }
    t = v_25;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_78 = NULL;
  k_78 = t;
  t = SSL_string_to_int(not_null(k_78));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        ATerm s_78 = NULL;
        s_78 = t;
        n_78 :
        if(!(match_string(s_78, "-S")))
          {
            if(!(match_string(s_78, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_b_26;
        t = set_config_0(t);
        t = term_f_26;
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_g_26;
        return(t);
      }
      t = Option_3(t, h_3, i_3, k_3);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm k_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm t_78 = NULL;
              t_78 = t;
              o_78 :
              if(!(match_string(t_78, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm w_78 = NULL;
              ATerm o_26;
              o_26 = t;
              {
                ATerm u_78 = NULL;
                ATerm v_78 = NULL;
                t = string_to_int_0(t);
                {
                  v_78 = t;
                  if(((u_78 != NULL) && (u_78 != v_78)))
                    _fail(v_78);
                  else
                    u_78 = v_78;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_23, not_null(u_78));
                  t = set_config_0(t);
                }
              }
              t = o_26;
              {
                ATerm x_78 = NULL;
                x_78 = t;
                if(((w_78 != NULL) && (w_78 != x_78)))
                  _fail(x_78);
                else
                  w_78 = x_78;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_78));
              }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_s_26;
              return(t);
            }
            t = ArgOption_3(t, l_3, m_3, n_3);
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = k_26;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm y_78 = NULL;
                y_78 = t;
                r_78 :
                if(!(match_string(y_78, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_w_26;
                t = set_config_0(t);
                t = term_x_26;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_y_26;
                return(t);
              }
              t = Option_3(t, o_3, p_3, q_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm o_79 = NULL;
    o_79 = t;
    b_79 :
    if(!(match_string(o_79, "-o")))
      {
        if(!(match_string(o_79, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm u_79 = NULL;
    ATerm d_27;
    d_27 = t;
    {
      ATerm p_79 = NULL;
      ATerm q_79 = NULL;
      q_79 = t;
      if(((p_79 != NULL) && (p_79 != q_79)))
        _fail(q_79);
      else
        p_79 = q_79;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_27, not_null(p_79));
        t = set_config_0(t);
      }
    }
    t = d_27;
    {
      ATerm v_79 = NULL;
      v_79 = t;
      if(((u_79 != NULL) && (u_79 != v_79)))
        _fail(v_79);
      else
        u_79 = v_79;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_79));
    }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_f_27;
    return(t);
  }
  t = ArgOption_3(t, r_3, s_3, t_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm u_3 (ATerm t)
        {
          ATerm z_79 = NULL;
          z_79 = t;
          y_79 :
          if(!(match_string(z_79, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_j_27;
          t = set_config_0(t);
          t = term_k_27;
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = term_l_27;
          return(t);
        }
        t = Option_3(t, u_3, v_3, w_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,j_80 = NULL,v_80 = NULL;
  f_80 = t;
  d_80 :
  if(match_string(f_80, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(f_80) == AT_LIST) && !(ATisEmpty(f_80))))
        {
          g_80 = ATgetFirst((ATermList) f_80);
          h_80 = (ATerm) ATgetNext((ATermList) f_80);
          e_80 :
          if(((ATgetType(h_80) == AT_LIST) && !(ATisEmpty(h_80))))
            {
              j_80 = ATgetFirst((ATermList) h_80);
              v_80 = (ATerm) ATgetNext((ATermList) h_80);
              {
                ATerm h_83 = NULL;
                ATerm m_27;
                m_27 = t;
                {
                  t = not_null(g_80);
                  t = k_0(t);
                }
                t = m_27;
                {
                  ATerm i_83 = NULL;
                  t = not_null(j_80);
                  {
                    t = l_0(t);
                    {
                      i_83 = t;
                      if(((h_83 != NULL) && (h_83 != i_83)))
                        _fail(i_83);
                      else
                        h_83 = i_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_80)), not_null(h_83));
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
  ATerm a_4 (ATerm t)
  {
    ATerm p_83 = NULL;
    p_83 = t;
    m_83 :
    if(!(match_string(p_83, "-i")))
      {
        if(!(match_string(p_83, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm s_83 = NULL;
    ATerm n_27;
    n_27 = t;
    {
      ATerm q_83 = NULL;
      ATerm r_83 = NULL;
      r_83 = t;
      if(((q_83 != NULL) && (q_83 != r_83)))
        _fail(r_83);
      else
        q_83 = r_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_27, not_null(q_83));
        t = set_config_0(t);
      }
    }
    t = n_27;
    {
      ATerm t_83 = NULL;
      t_83 = t;
      if(((s_83 != NULL) && (s_83 != t_83)))
        _fail(t_83);
      else
        s_83 = t_83;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_83));
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_p_27;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm s_27 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = s_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATempty, term_g_29));
  {
    t = printnl_0(t);
    {
      t = term_e_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_83 = NULL;
  x_83 = t;
  t = SSL_TicksToSeconds(not_null(x_83));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL;
  c_84 = t;
  b_84 :
  if(match_cons(c_84, sym__2))
    {
      d_84 = ATgetArgument(c_84, 0);
      e_84 = ATgetArgument(c_84, 1);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_84), not_null(e_84));
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = SSL_addr(not_null(d_84), not_null(e_84));
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
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_110(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
        l_84 = t;
        k_84 :
        if(((ATgetType(l_84) == AT_LIST) && !(ATisEmpty(l_84))))
          {
            m_84 = ATgetFirst((ATermList) l_84);
            n_84 = (ATerm) ATgetNext((ATermList) l_84);
            {
              ATerm q_84 = NULL;
              ATerm r_84 = NULL;
              t = not_null(n_84);
              {
                t = foldr_2(t, w_110, x_110);
                {
                  r_84 = t;
                  if(((q_84 != NULL) && (q_84 != r_84)))
                    _fail(r_84);
                  else
                    q_84 = r_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_84), not_null(q_84));
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
  ATerm y_84 = NULL;
  ATerm a_85 = NULL;
  y_84 = t;
  {
    ATerm b_85 = NULL;
    ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
    t = not_null(y_84);
    {
      b_85 = t;
      {
        t = SSL_explode_term(not_null(b_85));
        {
          d_85 = t;
          x_84 :
          if(match_cons(d_85, sym__2))
            {
              e_85 = ATgetArgument(d_85, 0);
              f_85 = ATgetArgument(d_85, 1);
              if(((a_85 != NULL) && (a_85 != f_85)))
                _fail(f_85);
              else
                a_85 = f_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_85);
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
    ATerm d_4 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    t = crush_2(t, d_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_85 = NULL,o_85 = NULL,p_85 = NULL;
  l_85 = t;
  k_85 :
  if(match_cons(l_85, sym__2))
    {
      o_85 = ATgetArgument(l_85, 0);
      p_85 = ATgetArgument(l_85, 1);
      {
        ATerm q_29;
        q_29 = t;
        {
          ATerm r_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_85), not_null(p_85));
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = r_29;
              t = SSL_gtr(not_null(o_85), not_null(p_85));
            }
        }
        t = q_29;
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
  ATerm v_85 = NULL;
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
      w_85 = t;
      u_85 :
      if(match_cons(w_85, sym__2))
        {
          x_85 = ATgetArgument(w_85, 0);
          y_85 = ATgetArgument(w_85, 1);
          {
            if(((v_85 != NULL) && (v_85 != x_85)))
              _fail(x_85);
            else
              v_85 = x_85;
            if(((v_85 != NULL) && (v_85 != y_85)))
              _fail(y_85);
            else
              v_85 = y_85;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_114 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm z_29;
    z_29 = t;
    {
      ATerm b_86 = NULL;
      ATerm c_86 = NULL;
      t = term_m_23;
      {
        t = get_config_0(t);
        {
          c_86 = t;
          if(((b_86 != NULL) && (b_86 != c_86)))
            _fail(c_86);
          else
            b_86 = c_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_86), term_e_22);
        t = geq_0(t);
      }
    }
    t = z_29;
    t = p_114(t);
    return(t);
  }
  t = try_1(t, e_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_86 = NULL,i_86 = NULL;
    ATerm e_30;
    e_30 = t;
    {
      ATerm h_86 = NULL;
      t = run_time_0(t);
      {
        h_86 = t;
        if(((g_86 != NULL) && (g_86 != h_86)))
          _fail(h_86);
        else
          g_86 = h_86;
      }
    }
    t = e_30;
    {
      ATerm j_86 = NULL;
      t = term_f_30;
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(g_86)), term_g_30), not_null(i_86)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_4);
  {
    t = term_a_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_86 = NULL;
  q_86 = t;
  p_86 :
  if(match_cons(q_86, sym_Version_0))
    {
      ATerm s_86 = NULL,u_86 = NULL;
      ATerm m_30;
      m_30 = t;
      {
        ATerm t_86 = NULL;
        t = SSLgetAnnotations(not_null(q_86));
        {
          t_86 = t;
          if(((s_86 != NULL) && (s_86 != t_86)))
            _fail(t_86);
          else
            s_86 = t_86;
        }
      }
      t = m_30;
      {
        ATerm z_86 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_86));
        {
          z_86 = t;
          if(((u_86 != NULL) && (u_86 != z_86)))
            _fail(z_86);
          else
            u_86 = z_86;
        }
        t = not_null(u_86);
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
  ATerm g_4 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm p_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_30);
            }
          else
            {
              t = p_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_4);
  t = m_124(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_87 = NULL;
  e_87 = t;
  t = SSL_table_create(not_null(e_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_87 = NULL;
  k_87 = t;
  {
    ATerm v_30;
    v_30 = t;
    {
      t = term_w_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, not_null(k_87));
          t = table_put_0(t);
        }
      }
    }
    t = v_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_87 = NULL;
  o_87 = t;
  t = SSL_table_destroy(not_null(o_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_87 = NULL;
  s_87 = t;
  t = SSL_exit(not_null(s_87));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  v_87 :
  if(((ATgetType(w_87) == AT_LIST) && ATisEmpty(w_87)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_87) == AT_LIST) && !(ATisEmpty(w_87))))
        {
          x_87 = ATgetFirst((ATermList) w_87);
          y_87 = (ATerm) ATgetNext((ATermList) w_87);
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
  ATerm y_30;
  y_30 = t;
  {
    ATerm b_88 = NULL;
    ATerm e_88 = NULL;
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm c_88 = NULL;
          ATerm d_88 = NULL;
          d_88 = t;
          if(((c_88 != NULL) && (c_88 != d_88)))
            _fail(d_88);
          else
            c_88 = d_88;
          t = (ATerm) ATinsert(ATempty, not_null(c_88));
        }
      }
    {
      e_88 = t;
      if(((b_88 != NULL) && (b_88 != e_88)))
        _fail(e_88);
      else
        b_88 = e_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_24, not_null(b_88));
      t = printnl_0(t);
    }
  }
  t = y_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm h_88 (ATerm t)
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = Cons_2(t, m_106, h_88);
      }
    return(t);
  }
  t = h_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
  t_88 = t;
  q_88 :
  if(((ATgetType(t_88) == AT_LIST) && !(ATisEmpty(t_88))))
    {
      r_88 = ATgetFirst((ATermList) t_88);
      s_88 = (ATerm) ATgetNext((ATermList) t_88);
      {
        ATerm w_88 = NULL;
        t = not_null(s_88);
        {
          ATerm d_31;
          d_31 = t;
          {
            ATerm x_88 = NULL,z_88 = NULL,d_89 = NULL;
            ATerm e_31;
            e_31 = t;
            {
              ATerm y_88 = NULL;
              t = i_0(t);
              {
                y_88 = t;
                if(((x_88 != NULL) && (x_88 != y_88)))
                  _fail(y_88);
                else
                  x_88 = y_88;
              }
            }
            t = e_31;
            {
              ATerm a_89 = NULL;
              t = not_null(r_88);
              {
                t = g_0(t);
                {
                  a_89 = t;
                  if(((z_88 != NULL) && (z_88 != a_89)))
                    _fail(a_89);
                  else
                    z_88 = a_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_88)), not_null(z_88));
                {
                  d_89 = t;
                  if(((w_88 != NULL) && (w_88 != d_89)))
                    _fail(d_89);
                  else
                    w_88 = d_89;
                }
              }
            }
          }
          t = d_31;
          {
            ATerm h_4 (ATerm t)
            {
              t = not_null(w_88);
              return(t);
            }
            t = reverse_acc_2(t, g_0, h_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_88) == AT_LIST) && ATisEmpty(t_88)))
        {
          {
            t = term_q_25;
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
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_126 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm o_89 = NULL,q_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym_Program_1))
    {
      q_89 = ATgetArgument(o_89, 0);
      {
        ATerm u_89 = NULL,w_89 = NULL;
        ATerm v_89 = NULL;
        t = SSLgetAnnotations(not_null(o_89));
        {
          v_89 = t;
          if(((u_89 != NULL) && (u_89 != v_89)))
            _fail(v_89);
          else
            u_89 = v_89;
        }
        {
          t = not_null(q_89);
          {
            ATerm y_89 = NULL;
            t = j_98(t);
            {
              w_89 = t;
              {
                ATerm z_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_89)), not_null(u_89));
                {
                  z_89 = t;
                  if(((y_89 != NULL) && (y_89 != z_89)))
                    _fail(z_89);
                  else
                    y_89 = z_89;
                }
                t = not_null(y_89);
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
  ATerm i_90 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_90 = NULL;
      t = term_f_30;
      {
        t = get_config_0(t);
        {
          j_90 = t;
          if(((i_90 != NULL) && (i_90 != j_90)))
            _fail(j_90);
          else
            i_90 = j_90;
        }
      }
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm k_90 = NULL;
            k_90 = t;
            if(((i_90 != NULL) && (i_90 != k_90)))
              _fail(k_90);
            else
              i_90 = k_90;
            return(t);
          }
          t = Program_1(t, l_4);
          return(t);
        }
        t = option_defined_1(t, j_4);
      }
    }
  {
    ATerm m_4 (ATerm t)
    {
      ATerm n_4 (ATerm t)
      {
        t = not_null(i_90);
        return(t);
      }
      t = short_description_1(t, n_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = term_h_31;
      {
        t = echo_0(t);
        {
          t = term_k_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm m_90 = NULL;
                  ATerm n_90 = NULL;
                  n_90 = t;
                  if(((m_90 != NULL) && (m_90 != n_90)))
                    _fail(n_90);
                  else
                    m_90 = n_90;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_90)), term_s_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm o_90 = NULL;
                    ATerm p_90 = NULL;
                    ATerm t_4 (ATerm t)
                    {
                      t = not_null(i_90);
                      return(t);
                    }
                    t = long_description_1(t, t_4);
                    {
                      p_90 = t;
                      if(((o_90 != NULL) && (o_90 != p_90)))
                        _fail(p_90);
                      else
                        o_90 = p_90;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_90)), term_t_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_4);
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
  ATerm u_31;
  u_31 = t;
  {
    ATerm v_90 = NULL;
    ATerm y_90 = NULL;
    y_90 = t;
    if(((v_90 != NULL) && (v_90 != y_90)))
      _fail(y_90);
    else
      v_90 = y_90;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATempty, not_null(v_90)));
      t = printnl_0(t);
    }
  }
  t = u_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm v_31;
  v_31 = t;
  {
    t = q_112(t);
    t = debug_0(t);
  }
  t = v_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm h_91 = NULL,i_91 = NULL;
  h_91 = t;
  g_91 :
  if(match_cons(h_91, sym_Undefined_1))
    {
      i_91 = ATgetArgument(h_91, 0);
      {
        ATerm l_91 = NULL,n_91 = NULL;
        ATerm m_91 = NULL;
        t = SSLgetAnnotations(not_null(h_91));
        {
          m_91 = t;
          if(((l_91 != NULL) && (l_91 != m_91)))
            _fail(m_91);
          else
            l_91 = m_91;
        }
        {
          t = not_null(i_91);
          {
            ATerm p_91 = NULL;
            t = k_98(t);
            {
              n_91 = t;
              {
                ATerm q_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_91)), not_null(l_91));
                {
                  q_91 = t;
                  if(((p_91 != NULL) && (p_91 != q_91)))
                    _fail(q_91);
                  else
                    p_91 = q_91;
                }
                t = not_null(p_91);
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
  ATerm v_91 (ATerm t)
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_106, _id);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = Cons_2(t, _id, v_91);
      }
    return(t);
  }
  t = v_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_125 (ATerm))
{
  t = fetch_1(t, t_125);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym_Help_0))
    {
      ATerm c_92 = NULL,e_92 = NULL;
      ATerm y_31;
      y_31 = t;
      {
        ATerm d_92 = NULL;
        t = SSLgetAnnotations(not_null(a_92));
        {
          d_92 = t;
          if(((c_92 != NULL) && (c_92 != d_92)))
            _fail(d_92);
          else
            c_92 = d_92;
        }
      }
      t = y_31;
      {
        ATerm f_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_92));
        {
          f_92 = t;
          if(((e_92 != NULL) && (e_92 != f_92)))
            _fail(f_92);
          else
            e_92 = f_92;
        }
        t = not_null(e_92);
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
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_103(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym__2))
    {
      m_92 = ATgetArgument(l_92, 0);
      n_92 = ATgetArgument(l_92, 1);
      t = SSL_table_get(not_null(m_92), not_null(n_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym__3))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      x_92 = ATgetArgument(u_92, 2);
      {
        ATerm b_32;
        b_32 = t;
        {
          ATerm b_93 = NULL;
          ATerm c_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_92), not_null(w_92));
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = (ATerm) ATempty;
              }
            {
              c_93 = t;
              if(((b_93 != NULL) && (b_93 != c_93)))
                _fail(c_93);
              else
                b_93 = c_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_92), not_null(w_92), (ATerm) ATinsert(CheckATermList(not_null(b_93)), not_null(x_92)));
            t = table_put_0(t);
          }
        }
        t = b_32;
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
  ATerm g_93 = NULL;
  ATerm h_93 = NULL;
  t = term_q_25;
  {
    t = y_126(t);
    {
      h_93 = t;
      if(((g_93 != NULL) && (g_93 != h_93)))
        _fail(h_93);
      else
        g_93 = h_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, not_null(g_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL;
  n_93 = t;
  m_93 :
  if(match_string(n_93, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_93) == AT_LIST) && !(ATisEmpty(n_93))))
        {
          o_93 = ATgetFirst((ATermList) n_93);
          p_93 = (ATerm) ATgetNext((ATermList) n_93);
          {
            ATerm s_93 = NULL;
            ATerm e_32;
            e_32 = t;
            {
              t = not_null(o_93);
              t = a_0(t);
            }
            t = e_32;
            {
              ATerm t_93 = NULL;
              t = term_q_25;
              {
                t = c_0(t);
                {
                  t_93 = t;
                  if(((s_93 != NULL) && (s_93 != t_93)))
                    _fail(t_93);
                  else
                    s_93 = t_93;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_93)), not_null(s_93));
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
  ATerm u_4 (ATerm t)
  {
    ATerm y_93 = NULL;
    y_93 = t;
    x_93 :
    if(!(match_string(y_93, "--help")))
      {
        if(!(match_string(y_93, "-h")))
          {
            if(!(match_string(y_93, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_i_32;
    {
      t = set_config_0(t);
      t = term_j_32;
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_k_32;
    return(t);
  }
  t = Option_3(t, u_4, w_4, x_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
  b_94 = t;
  a_94 :
  if(((ATgetType(b_94) == AT_LIST) && !(ATisEmpty(b_94))))
    {
      c_94 = ATgetFirst((ATermList) b_94);
      d_94 = (ATerm) ATgetNext((ATermList) b_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  m_94 :
  if(((ATgetType(n_94) == AT_LIST) && !(ATisEmpty(n_94))))
    {
      o_94 = ATgetFirst((ATermList) n_94);
      p_94 = (ATerm) ATgetNext((ATermList) n_94);
      {
        ATerm t_94 = NULL,v_94 = NULL;
        ATerm u_94 = NULL;
        t = SSLgetAnnotations(not_null(n_94));
        {
          u_94 = t;
          if(((t_94 != NULL) && (t_94 != u_94)))
            _fail(u_94);
          else
            t_94 = u_94;
        }
        {
          t = not_null(o_94);
          {
            ATerm x_94 = NULL;
            t = v_86(t);
            {
              v_94 = t;
              {
                t = not_null(p_94);
                {
                  ATerm z_94 = NULL;
                  t = w_86(t);
                  {
                    x_94 = t;
                    {
                      ATerm a_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_94)), not_null(v_94)), not_null(t_94));
                      {
                        a_95 = t;
                        if(((z_94 != NULL) && (z_94 != a_95)))
                          _fail(a_95);
                        else
                          z_94 = a_95;
                      }
                      t = not_null(z_94);
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
  ATerm k_95 = NULL;
  k_95 = t;
  j_95 :
  if(((ATgetType(k_95) == AT_LIST) && ATisEmpty(k_95)))
    {
      {
        ATerm m_95 = NULL,o_95 = NULL;
        ATerm l_32;
        l_32 = t;
        {
          ATerm n_95 = NULL;
          t = SSLgetAnnotations(not_null(k_95));
          {
            n_95 = t;
            if(((m_95 != NULL) && (m_95 != n_95)))
              _fail(n_95);
            else
              m_95 = n_95;
          }
        }
        t = l_32;
        {
          ATerm p_95 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_95));
          {
            p_95 = t;
            if(((o_95 != NULL) && (o_95 != p_95)))
              _fail(p_95);
            else
              o_95 = p_95;
          }
          t = not_null(o_95);
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
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  u_95 :
  if(match_cons(v_95, sym__2))
    {
      w_95 = ATgetArgument(v_95, 0);
      x_95 = ATgetArgument(v_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_23, not_null(w_95), not_null(x_95));
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
  ATerm q_32;
  q_32 = t;
  {
    ATerm y_4 (ATerm t)
    {
      t = term_r_32;
      t = w_126(t);
      return(t);
    }
    t = try_1(t, y_4);
  }
  t = q_32;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm f_96 = NULL;
      ATerm o_33;
      o_33 = t;
      {
        ATerm d_96 = NULL;
        ATerm e_96 = NULL;
        e_96 = t;
        if(((d_96 != NULL) && (d_96 != e_96)))
          _fail(e_96);
        else
          d_96 = e_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_30, not_null(d_96));
          t = set_config_0(t);
        }
      }
      t = o_33;
      {
        ATerm g_96 = NULL;
        g_96 = t;
        if(((f_96 != NULL) && (f_96 != g_96)))
          _fail(g_96);
        else
          f_96 = g_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_96));
      }
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              {
                t = w_126(t);
                t = Cons_2(t, _id, a_5);
              }
            }
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_4, a_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL;
  ATerm a_34;
  a_34 = t;
  {
    ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
    p_96 = t;
    l_96 :
    if(match_cons(p_96, sym__3))
      {
        q_96 = ATgetArgument(p_96, 0);
        r_96 = ATgetArgument(p_96, 1);
        s_96 = ATgetArgument(p_96, 2);
        {
          if(((m_96 != NULL) && (m_96 != q_96)))
            _fail(q_96);
          else
            m_96 = q_96;
          {
            if(((n_96 != NULL) && (n_96 != r_96)))
              _fail(r_96);
            else
              n_96 = r_96;
            {
              if(((o_96 != NULL) && (o_96 != s_96)))
                _fail(s_96);
              else
                o_96 = s_96;
              t = SSL_table_put(not_null(m_96), not_null(n_96), not_null(o_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_126 (ATerm))
{
  ATerm v_96 = NULL;
  ATerm b_34;
  b_34 = t;
  {
    t = term_c_34;
    t = table_put_0(t);
  }
  t = b_34;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm d_34 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_126(t);
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = d_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm f_5 (ATerm t)
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_34;
            h_34 = t;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_34;
            {
              t = system_usage_0(t);
              {
                t = term_a_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm j_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm w_96 = NULL;
                  w_96 = t;
                  if(((v_96 != NULL) && (v_96 != w_96)))
                    _fail(w_96);
                  else
                    v_96 = w_96;
                  return(t);
                }
                t = Undefined_1(t, m_5);
                return(t);
              }
              t = option_defined_1(t, j_5);
              {
                ATerm n_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_96)), term_k_34);
                  return(t);
                }
                t = say_1(t, n_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_22;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_5);
      {
        ATerm l_34;
        l_34 = t;
        {
          t = term_i_31;
          t = table_destroy_0(t);
        }
        t = l_34;
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
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_124);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm o_34 = t;
              int p_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_124(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_34);
                }
              else
                {
                  t = o_34;
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
  ATerm o_5 (ATerm t)
  {
    ATerm q_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_125(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = q_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_125);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_5, l_125, m_125, p_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm t_34;
      t_34 = t;
      {
        ATerm z_96 = NULL;
        ATerm a_97 = NULL;
        t = term_f_30;
        {
          t = get_config_0(t);
          {
            a_97 = t;
            if(((z_96 != NULL) && (z_96 != a_97)))
              _fail(a_97);
            else
              z_96 = a_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATempty, not_null(z_96)));
          t = printnl_0(t);
        }
      }
      t = t_34;
      return(t);
    }
    t = if_verbose2_1(t, r_5);
    return(t);
  }
  t = iowrap_4(t, d_125, e_125, f_125, q_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_125 (ATerm), ATerm c_125 (ATerm))
{
  t = iowrap_3(t, b_125, c_125, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_124 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    t = _2(t, _id, y_124);
    return(t);
  }
  t = iowrap_2(t, s_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, u_5);
    return(t);
  }
  t = iowrap_1(t, t_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
