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
  init_constant_terms();
}
ATerm term_u_36;
ATerm term_k_36;
ATerm term_w_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_t_32;
ATerm term_m_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_m_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_e_28;
ATerm term_z_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_i_26;
ATerm term_d_25;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_z_15;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_v_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_v_11;
void init_constant_terms (void)
{
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Op_2, term_k_18, (ATerm) ATempty);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_v_11);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_11);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_d_30);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_d_30);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_d_30);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, (ATerm) ATempty);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm h_99 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm Let_2 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm sboundin_3 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm y_87 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm d_99 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm d_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm diff_1 (ATerm, ATerm c_110 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_116 (ATerm), ATerm v_116 (ATerm));
ATerm for_3 (ATerm, ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm x_112 (ATerm), ATerm y_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm r_112 (ATerm), ATerm s_112 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm c_113 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm v_113 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm f_113 (ATerm));
ATerm rename_4 (ATerm, ATerm m_112 (ATerm, ATerm (ATerm)), ATerm n_112 (ATerm), ATerm o_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_112 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm h_91 (ATerm));
ATerm Call_2 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm));
ATerm Str_1 (ATerm, ATerm x_0 (ATerm));
ATerm Real_1 (ATerm, ATerm v_0 (ATerm));
ATerm Int_1 (ATerm, ATerm u_0 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm list_1 (ATerm, ATerm l_106 (ATerm));
ATerm Build_1 (ATerm, ATerm u_86 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm i_120 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm p_0 (ATerm), ATerm r_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm i_127 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm j_105 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm q_107 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm a_112 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_120 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_120 (ATerm));
ATerm scope_2 (ATerm, ATerm g_120 (ATerm), ATerm h_120 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm a_105 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm Op_2 (ATerm, ATerm t_88 (ATerm), ATerm u_88 (ATerm));
ATerm pat_td_1 (ATerm, ATerm k_98 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm));
ATerm crush_3 (ATerm, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm));
ATerm collect_om_1 (ATerm, ATerm w_108 (ATerm));
ATerm collect_1 (ATerm, ATerm y_108 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm union_1 (ATerm, ATerm g_110 (ATerm));
ATerm unions_1 (ATerm, ATerm i_110 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm f_105 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm i_108 (ATerm), ATerm j_108 (ATerm));
ATerm collect_split_2 (ATerm, ATerm n_109 (ATerm), ATerm o_109 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm i_98 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm g_105 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_100 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm d_116 (ATerm), ATerm e_116 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_116 (ATerm));
ATerm downup_1 (ATerm, ATerm f_100 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm Strategies_1 (ATerm, ATerm h_89 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_89 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm h_98 (ATerm));
ATerm _2 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_106 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_123 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_121 (ATerm));
ATerm debug_1 (ATerm, ATerm p_120 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_103 (ATerm), ATerm w_103 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_110 (ATerm), ATerm y_110 (ATerm));
ATerm crush_2 (ATerm, ATerm v_109 (ATerm), ATerm w_109 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_123 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_121 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_125 (ATerm));
ATerm map_1 (ATerm, ATerm j_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_125 (ATerm));
ATerm Program_1 (ATerm, ATerm w_97 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_120 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_97 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_124 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_125 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_125 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_125 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_122 (ATerm), ATerm h_122 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_122 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm g_4 = NULL,l_4 = NULL,m_4 = NULL;
  g_4 = t;
  f_4 :
  if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
    {
      l_4 = ATgetFirst((ATermList) g_4);
      m_4 = (ATerm) ATgetNext((ATermList) g_4);
      t = not_null(l_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, h_99);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
            l_8 = t;
            e_7 :
            if(match_cons(l_8, sym__2))
              {
                n_8 = ATgetArgument(l_8, 0);
                r_8 = ATgetArgument(l_8, 1);
                t_7 :
                if(match_cons(n_8, sym_SDef_3))
                  {
                    o_8 = ATgetArgument(n_8, 0);
                    p_8 = ATgetArgument(n_8, 1);
                    q_8 = ATgetArgument(n_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_8), not_null(p_8), not_null(q_8));
                  }
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
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
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
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, h_99);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
                  w_8 = t;
                  g_8 :
                  if(match_cons(w_8, sym__2))
                    {
                      x_8 = ATgetArgument(w_8, 0);
                      a_9 = ATgetArgument(w_8, 1);
                      h_8 :
                      if(match_cons(x_8, sym_VarDec_2))
                        {
                          y_8 = ATgetArgument(x_8, 0);
                          z_8 = ATgetArgument(x_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_9), not_null(z_8));
                        }
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
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
            {
              ATerm h_0 (ATerm t)
              {
                t = h_99(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, h_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_Rec_2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      {
        ATerm s_9 = NULL,u_9 = NULL;
        ATerm t_9 = NULL;
        t = SSLgetAnnotations(not_null(m_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
        {
          t = not_null(n_9);
          {
            ATerm w_9 = NULL;
            t = z_87(t);
            {
              u_9 = t;
              {
                t = not_null(o_9);
                {
                  ATerm y_9 = NULL;
                  t = a_88(t);
                  {
                    w_9 = t;
                    {
                      ATerm z_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_9), not_null(w_9)), not_null(s_9));
                      {
                        z_9 = t;
                        if(((y_9 != NULL) && (y_9 != z_9)))
                          _fail(z_9);
                        else
                          y_9 = z_9;
                      }
                      t = not_null(y_9);
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
ATerm Let_2 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Let_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        ATerm r_10 = NULL,t_10 = NULL;
        ATerm s_10 = NULL;
        t = SSLgetAnnotations(not_null(l_10));
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
        {
          t = not_null(m_10);
          {
            ATerm v_10 = NULL;
            t = b_88(t);
            {
              t_10 = t;
              {
                t = not_null(n_10);
                {
                  ATerm x_10 = NULL;
                  t = c_88(t);
                  {
                    v_10 = t;
                    {
                      ATerm y_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_10), not_null(v_10)), not_null(r_10));
                      {
                        y_10 = t;
                        if(((x_10 != NULL) && (x_10 != y_10)))
                          _fail(y_10);
                        else
                          x_10 = y_10;
                      }
                      t = not_null(x_10);
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
ATerm sboundin_3 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm))
{
  ATerm d_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, i_99, i_99);
      LocalPopChoice(f_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, k_99, k_99, i_99);
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            t = Rec_2(t, k_99, i_99);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym_Rec_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_SDef_3))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      t_11 = ATgetArgument(q_11, 2);
      {
        t = not_null(s_11);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
            x_11 = t;
            o_11 :
            if(match_cons(x_11, sym_VarDec_2))
              {
                y_11 = ATgetArgument(x_11, 0);
                z_11 = ATgetArgument(x_11, 1);
                t = not_null(y_11);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Let_2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        t = not_null(i_12);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
            m_12 = t;
            f_12 :
            if(match_cons(m_12, sym_SDef_3))
              {
                n_12 = ATgetArgument(m_12, 0);
                o_12 = ATgetArgument(m_12, 1);
                p_12 = ATgetArgument(m_12, 2);
                t = not_null(n_12);
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
ATerm SVar_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_SVar_1))
    {
      b_13 = ATgetArgument(a_13, 0);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(a_13));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(b_13);
          {
            ATerm i_13 = NULL;
            t = y_87(t);
            {
              g_13 = t;
              {
                ATerm j_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(g_13)), not_null(e_13));
                {
                  j_13 = t;
                  if(((i_13 != NULL) && (i_13 != j_13)))
                    _fail(j_13);
                  else
                    i_13 = j_13;
                }
                t = not_null(i_13);
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
  ATerm q_0 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm d_99 (ATerm))
{
  t = Scope_2(t, d_99, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_DynamicRules_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      {
        ATerm x_13 = NULL,z_13 = NULL;
        ATerm y_13 = NULL;
        t = SSLgetAnnotations(not_null(t_13));
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
        {
          t = not_null(u_13);
          {
            ATerm b_14 = NULL;
            t = d_90(t);
            {
              z_13 = t;
              {
                ATerm c_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(z_13)), not_null(x_13));
                {
                  c_14 = t;
                  if(((b_14 != NULL) && (b_14 != c_14)))
                    _fail(c_14);
                  else
                    b_14 = c_14;
                }
                t = not_null(b_14);
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
ATerm Scope_2 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Scope_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        ATerm t_14 = NULL,v_14 = NULL;
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
        {
          t = not_null(o_14);
          {
            ATerm x_14 = NULL;
            t = x_86(t);
            {
              v_14 = t;
              {
                t = not_null(p_14);
                {
                  ATerm z_14 = NULL;
                  t = y_86(t);
                  {
                    x_14 = t;
                    {
                      ATerm a_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_14), not_null(x_14)), not_null(t_14));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, g_99, e_99);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = DynamicRules_1(t, e_99);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_DynamicRules_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        t = not_null(j_15);
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
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_Var_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        t = not_null(v_15);
        {
          ATerm a_16 (ATerm t)
          {
            ATerm o_7 = t;
            int p_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_7);
              }
            else
              {
                t = o_7;
                {
                  ATerm q_7 = t;
                  int r_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(w_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_110, t_0);
                      t = a_16(t);
                      LocalPopChoice(r_7);
                    }
                  else
                    {
                      t = q_7;
                      t = Cons_2(t, _id, a_16);
                    }
                }
              }
            return(t);
          }
          t = a_16(t);
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      d_16 :
      if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
        {
          h_16 = ATgetFirst((ATermList) g_16);
          i_16 = (ATerm) ATgetNext((ATermList) g_16);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_16)), not_null(h_16)), not_null(i_16));
        }
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  v_16 :
  if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
    {
      y_16 = ATgetFirst((ATermList) x_16);
      b_17 = (ATerm) ATgetNext((ATermList) x_16);
      w_16 :
      if(match_cons(y_16, sym__2))
        {
          z_16 = ATgetArgument(y_16, 0);
          a_17 = ATgetArgument(y_16, 1);
          {
            ATerm f_17 = NULL,g_17 = NULL,m_17 = NULL,s_17 = NULL;
            ATerm s_7;
            s_7 = t;
            {
              ATerm h_17 = NULL;
              ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
              t = not_null(a_17);
              {
                h_17 = t;
                {
                  t = SSL_explode_term(not_null(h_17));
                  {
                    j_17 = t;
                    q_16 :
                    if(match_cons(j_17, sym__2))
                      {
                        k_17 = ATgetArgument(j_17, 0);
                        l_17 = ATgetArgument(j_17, 1);
                        {
                          if(((f_17 != NULL) && (f_17 != k_17)))
                            _fail(k_17);
                          else
                            f_17 = k_17;
                          if(((g_17 != NULL) && (g_17 != l_17)))
                            _fail(l_17);
                          else
                            g_17 = l_17;
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
            t = s_7;
            {
              ATerm u_7;
              u_7 = t;
              {
                ATerm n_17 = NULL;
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                t = not_null(z_16);
                {
                  n_17 = t;
                  {
                    t = SSL_explode_term(not_null(n_17));
                    {
                      p_17 = t;
                      t_16 :
                      if(match_cons(p_17, sym__2))
                        {
                          q_17 = ATgetArgument(p_17, 0);
                          r_17 = ATgetArgument(p_17, 1);
                          {
                            if(((f_17 != NULL) && (f_17 != q_17)))
                              _fail(q_17);
                            else
                              f_17 = q_17;
                            if(((m_17 != NULL) && (m_17 != r_17)))
                              _fail(r_17);
                            else
                              m_17 = r_17;
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
              t = u_7;
              {
                ATerm t_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(g_17));
                {
                  t = zip_1(t, _id);
                  {
                    t_17 = t;
                    if(((s_17 != NULL) && (s_17 != t_17)))
                      _fail(t_17);
                    else
                      s_17 = t_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(b_17));
                  {
                    ATerm v_7 = t;
                    int w_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(w_7);
                      }
                    else
                      {
                        t = v_7;
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  b_18 :
  if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
    {
      e_18 = ATgetFirst((ATermList) d_18);
      h_18 = (ATerm) ATgetNext((ATermList) d_18);
      c_18 :
      if(match_cons(e_18, sym__2))
        {
          f_18 = ATgetArgument(e_18, 0);
          g_18 = ATgetArgument(e_18, 1);
          {
            ATerm j_18 = NULL;
            if(((f_18 != NULL) && (f_18 != g_18)))
              _fail(g_18);
            else
              f_18 = g_18;
            {
              if(((j_18 != NULL) && (j_18 != h_18)))
                _fail(h_18);
              else
                j_18 = h_18;
              t = not_null(j_18);
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
ATerm while_not_2 (ATerm t, ATerm u_116 (ATerm), ATerm v_116 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_116(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        {
          t = v_116(t);
          t = l_18(t);
        }
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm))
{
  t = x_116(t);
  t = while_not_2(t, y_116, z_116);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm n_18 = NULL;
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_18));
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(e_8);
                }
              else
                {
                  t = d_8;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, b_1);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_0, y_0, a_1);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_18 (ATerm t)
  {
    ATerm f_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = f_8;
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_18 = NULL;
              ATerm m_8;
              m_8 = t;
              {
                ATerm s_18 = NULL;
                t = q_114(t);
                {
                  s_18 = t;
                  if(((r_18 != NULL) && (r_18 != s_18)))
                    _fail(s_18);
                  else
                    r_18 = s_18;
                }
              }
              t = m_8;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(r_18);
                    return(t);
                  }
                  t = split_2(t, t_18, e_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = r_114(t, c_1, t_18, d_1);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm g_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, f_1, g_1, _id);
                }
              }
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              {
                ATerm h_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm i_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, h_1, i_1, t_18);
              }
            }
        }
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, j_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  x_18 :
  if(match_cons(c_19, sym_LRule_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      y_18 :
      if(match_cons(d_19, sym_Rule_3))
        {
          z_18 = ATgetArgument(d_19, 0);
          a_19 = ATgetArgument(d_19, 1);
          b_19 = ATgetArgument(d_19, 2);
          {
            t = not_null(z_18);
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
      if(match_cons(c_19, sym_Scope_2))
        {
          d_19 = ATgetArgument(c_19, 0);
          e_19 = ATgetArgument(c_19, 1);
          t = not_null(d_19);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm x_112 (ATerm), ATerm y_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__3))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      t_19 = ATgetArgument(q_19, 2);
      {
        t = not_null(r_19);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm x_19 = NULL;
            x_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(t_19));
              t = x_112(t);
            }
            return(t);
          }
          ATerm l_1 (ATerm t)
          {
            ATerm z_19 = NULL;
            z_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(s_19));
              t = x_112(t);
            }
            return(t);
          }
          t = y_112(t, k_1, l_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm r_112 (ATerm), ATerm s_112 (ATerm, ATerm (ATerm)))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,y_20 = NULL;
        ATerm u_8;
        u_8 = t;
        {
          ATerm t_20 = NULL;
          t = not_null(m_20);
          {
            ATerm u_20 = NULL;
            t = r_112(t);
            {
              t_20 = t;
              {
                if(((q_20 != NULL) && (q_20 != t_20)))
                  _fail(t_20);
                else
                  q_20 = t_20;
                {
                  ATerm v_20 = NULL,x_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    u_20 = t;
                    {
                      if(((r_20 != NULL) && (r_20 != u_20)))
                        _fail(u_20);
                      else
                        r_20 = u_20;
                      {
                        ATerm w_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(r_20));
                        {
                          t = zip_1(t, _id);
                          {
                            w_20 = t;
                            if(((v_20 != NULL) && (v_20 != w_20)))
                              _fail(w_20);
                            else
                              v_20 = w_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(n_20));
                          {
                            ATerm v_8 = t;
                            int b_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(b_9);
                              }
                            else
                              {
                                t = v_8;
                                t = conc_more_lists_0(t);
                              }
                            {
                              x_20 = t;
                              if(((s_20 != NULL) && (s_20 != x_20)))
                                _fail(x_20);
                              else
                                s_20 = x_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_8;
        {
          ATerm z_20 = NULL;
          t = not_null(m_20);
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(r_20);
              return(t);
            }
            t = s_112(t, m_1);
            {
              z_20 = t;
              if(((y_20 != NULL) && (y_20 != z_20)))
                _fail(z_20);
              else
                y_20 = z_20;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(y_20), not_null(n_20), not_null(s_20));
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
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  j_21 = t;
  h_21 :
  if(match_cons(j_21, sym__2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      i_21 :
      if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
        {
          m_21 = ATgetFirst((ATermList) l_21);
          n_21 = (ATerm) ATgetNext((ATermList) l_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(n_21));
        }
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  v_21 = t;
  s_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      t_21 :
      if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          b_22 = (ATerm) ATgetNext((ATermList) x_21);
          u_21 :
          if(match_cons(y_21, sym__2))
            {
              z_21 = ATgetArgument(y_21, 0);
              a_22 = ATgetArgument(y_21, 1);
              {
                ATerm d_22 = NULL;
                if(((w_21 != NULL) && (w_21 != z_21)))
                  _fail(z_21);
                else
                  w_21 = z_21;
                {
                  if(((d_22 != NULL) && (d_22 != a_22)))
                    _fail(a_22);
                  else
                    d_22 = a_22;
                  t = not_null(d_22);
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm c_113 (ATerm, ATerm (ATerm)))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym__2))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      {
        t = not_null(j_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = not_null(k_22);
              return(t);
            }
            t = split_2(t, _id, o_1);
            t = lookup_0(t);
            return(t);
          }
          t = c_113(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm v_113 (ATerm))
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
          ATerm p_1 (ATerm t)
          {
            ATerm w_22 = NULL;
            w_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(t_22));
              t = v_113(t);
            }
            return(t);
          }
          t = _all(t, p_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm f_113 (ATerm))
{
  ATerm a_23 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_113(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = all_dist_1(t, a_23);
      }
    return(t);
  }
  t = a_23(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm m_112 (ATerm, ATerm (ATerm)), ATerm n_112 (ATerm), ATerm o_112 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_112 (ATerm, ATerm (ATerm)))
{
  ATerm c_23 = NULL;
  c_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), (ATerm) ATempty);
    {
      ATerm f_23 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, m_112);
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              {
                t = RnBinding_2(t, n_112, p_112);
                t = DistBinding_2(t, f_23, o_112);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, q_1);
        return(t);
      }
      t = f_23(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm g_23 (ATerm t, ATerm h_23 (ATerm))
  {
    t = Scope_2(t, h_23, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, g_23);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm h_91 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Seqs_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = h_91(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
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
ATerm Call_2 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Call_2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        ATerm n_24 = NULL,p_24 = NULL;
        ATerm o_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
        {
          t = not_null(i_24);
          {
            ATerm r_24 = NULL;
            t = n_88(t);
            {
              p_24 = t;
              {
                t = not_null(j_24);
                {
                  ATerm t_24 = NULL;
                  t = o_88(t);
                  {
                    r_24 = t;
                    {
                      ATerm u_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(p_24), not_null(r_24)), not_null(n_24));
                      {
                        u_24 = t;
                        if(((t_24 != NULL) && (t_24 != u_24)))
                          _fail(u_24);
                        else
                          t_24 = u_24;
                      }
                      t = not_null(t_24);
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
ATerm Str_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Str_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL,p_25 = NULL;
            ATerm o_25 = NULL;
            t = SSLgetAnnotations(not_null(j_25));
            {
              o_25 = t;
              if(((n_25 != NULL) && (n_25 != o_25)))
                _fail(o_25);
              else
                n_25 = o_25;
            }
            {
              t = not_null(k_25);
              {
                ATerm r_25 = NULL;
                t = x_0(t);
                {
                  p_25 = t;
                  {
                    ATerm s_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(p_25)), not_null(n_25));
                    {
                      s_25 = t;
                      if(((r_25 != NULL) && (r_25 != s_25)))
                        _fail(s_25);
                      else
                        r_25 = s_25;
                    }
                    t = not_null(r_25);
                  }
                }
              }
            }
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm v_25 = NULL,x_25 = NULL;
              ATerm w_25 = NULL;
              t = SSLgetAnnotations(not_null(j_25));
              {
                w_25 = t;
                if(((v_25 != NULL) && (v_25 != w_25)))
                  _fail(w_25);
                else
                  v_25 = w_25;
              }
              {
                t = not_null(k_25);
                {
                  ATerm z_25 = NULL;
                  t = x_0(t);
                  {
                    x_25 = t;
                    {
                      ATerm a_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(x_25)), not_null(v_25));
                      {
                        a_26 = t;
                        if(((z_25 != NULL) && (z_25 != a_26)))
                          _fail(a_26);
                        else
                          z_25 = a_26;
                      }
                      t = not_null(z_25);
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
ATerm Real_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Real_1))
    {
      t_26 = ATgetArgument(s_26, 0);
      {
        ATerm k_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_26 = NULL,y_26 = NULL;
            ATerm x_26 = NULL;
            t = SSLgetAnnotations(not_null(s_26));
            {
              x_26 = t;
              if(((w_26 != NULL) && (w_26 != x_26)))
                _fail(x_26);
              else
                w_26 = x_26;
            }
            {
              t = not_null(t_26);
              {
                ATerm a_27 = NULL;
                t = v_0(t);
                {
                  y_26 = t;
                  {
                    ATerm b_27 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_26)), not_null(w_26));
                    {
                      b_27 = t;
                      if(((a_27 != NULL) && (a_27 != b_27)))
                        _fail(b_27);
                      else
                        a_27 = b_27;
                    }
                    t = not_null(a_27);
                  }
                }
              }
            }
            LocalPopChoice(p_9);
          }
        else
          {
            t = k_9;
            {
              ATerm e_27 = NULL,g_27 = NULL;
              ATerm f_27 = NULL;
              t = SSLgetAnnotations(not_null(s_26));
              {
                f_27 = t;
                if(((e_27 != NULL) && (e_27 != f_27)))
                  _fail(f_27);
                else
                  e_27 = f_27;
              }
              {
                t = not_null(t_26);
                {
                  ATerm i_27 = NULL;
                  t = v_0(t);
                  {
                    g_27 = t;
                    {
                      ATerm j_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_27)), not_null(e_27));
                      {
                        j_27 = t;
                        if(((i_27 != NULL) && (i_27 != j_27)))
                          _fail(j_27);
                        else
                          i_27 = j_27;
                      }
                      t = not_null(i_27);
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
ATerm Int_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Int_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_28 = NULL,h_28 = NULL;
            ATerm g_28 = NULL;
            t = SSLgetAnnotations(not_null(b_28));
            {
              g_28 = t;
              if(((f_28 != NULL) && (f_28 != g_28)))
                _fail(g_28);
              else
                f_28 = g_28;
            }
            {
              t = not_null(c_28);
              {
                ATerm j_28 = NULL;
                t = u_0(t);
                {
                  h_28 = t;
                  {
                    ATerm k_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(h_28)), not_null(f_28));
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
            }
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm n_28 = NULL,p_28 = NULL;
              ATerm o_28 = NULL;
              t = SSLgetAnnotations(not_null(b_28));
              {
                o_28 = t;
                if(((n_28 != NULL) && (n_28 != o_28)))
                  _fail(o_28);
                else
                  n_28 = o_28;
              }
              {
                t = not_null(c_28);
                {
                  ATerm r_28 = NULL;
                  t = u_0(t);
                  {
                    p_28 = t;
                    {
                      ATerm s_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_28)), not_null(n_28));
                      {
                        s_28 = t;
                        if(((r_28 != NULL) && (r_28 != s_28)))
                          _fail(s_28);
                        else
                          r_28 = s_28;
                      }
                      t = not_null(r_28);
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
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Var_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm v_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_29 = NULL,q_29 = NULL;
            ATerm p_29 = NULL;
            t = SSLgetAnnotations(not_null(k_29));
            {
              p_29 = t;
              if(((o_29 != NULL) && (o_29 != p_29)))
                _fail(p_29);
              else
                o_29 = p_29;
            }
            {
              t = not_null(l_29);
              {
                ATerm s_29 = NULL;
                t = s_0(t);
                {
                  q_29 = t;
                  {
                    ATerm t_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_29)), not_null(o_29));
                    {
                      t_29 = t;
                      if(((s_29 != NULL) && (s_29 != t_29)))
                        _fail(t_29);
                      else
                        s_29 = t_29;
                    }
                    t = not_null(s_29);
                  }
                }
              }
            }
            LocalPopChoice(x_9);
          }
        else
          {
            t = v_9;
            {
              ATerm w_29 = NULL,y_29 = NULL;
              ATerm x_29 = NULL;
              t = SSLgetAnnotations(not_null(k_29));
              {
                x_29 = t;
                if(((w_29 != NULL) && (w_29 != x_29)))
                  _fail(x_29);
                else
                  w_29 = x_29;
              }
              {
                t = not_null(l_29);
                {
                  ATerm a_30 = NULL;
                  t = s_0(t);
                  {
                    y_29 = t;
                    {
                      ATerm b_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_29)), not_null(w_29));
                      {
                        b_30 = t;
                        if(((a_30 != NULL) && (a_30 != b_30)))
                          _fail(b_30);
                        else
                          a_30 = b_30;
                      }
                      t = not_null(a_30);
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
ATerm list_1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm k_30 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = Cons_2(t, l_106, k_30);
      }
    return(t);
  }
  t = k_30(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Build_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      {
        ATerm u_30 = NULL,w_30 = NULL;
        ATerm v_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm y_30 = NULL;
            t = u_86(t);
            {
              w_30 = t;
              {
                ATerm z_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(w_30)), not_null(u_30));
                {
                  z_30 = t;
                  if(((y_30 != NULL) && (y_30 != z_30)))
                    _fail(z_30);
                  else
                    y_30 = z_30;
                }
                t = not_null(y_30);
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
  ATerm i_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym_Fail_0))
    {
      ATerm k_31 = NULL,m_31 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(i_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
      }
      t = c_10;
      {
        ATerm n_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(k_31));
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
        t = not_null(m_31);
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
  ATerm v_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_Id_0))
    {
      ATerm x_31 = NULL,z_31 = NULL;
      ATerm d_10;
      d_10 = t;
      {
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(v_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
      }
      t = d_10;
      {
        ATerm a_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_31));
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
        t = not_null(z_31);
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          ATerm q_10 = t;
                          int u_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              LocalPopChoice(u_10);
                            }
                          else
                            {
                              t = q_10;
                              {
                                ATerm w_10 = t;
                                int z_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_1 (ATerm t)
                                    {
                                      ATerm t_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, t_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, s_1);
                                    LocalPopChoice(z_10);
                                  }
                                else
                                  {
                                    t = w_10;
                                    {
                                      ATerm a_11 = t;
                                      int b_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(b_11);
                                        }
                                      else
                                        {
                                          t = a_11;
                                          {
                                            ATerm c_11 = t;
                                            int d_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(d_11);
                                              }
                                            else
                                              {
                                                t = c_11;
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
                        t = Build_1(t, r_1);
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        {
                          ATerm e_11 = t;
                          int j_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm k_11 = t;
                                int l_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(l_11);
                                  }
                                else
                                  {
                                    t = k_11;
                                    {
                                      ATerm u_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, u_1);
                                    }
                                  }
                              }
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
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Row_2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_32 = NULL;
            ATerm p_32 = NULL;
            t = not_null(l_32);
            {
              ATerm u_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_11;
                }
              {
                t = new_0(t);
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_32), (ATerm)ATempty, not_null(l_32))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(k_32), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_32)), (ATerm) ATempty)));
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              t = not_null(l_32);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(k_32), not_null(l_32)));
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
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Matrix_2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      {
        ATerm e_33 = NULL,f_33 = NULL;
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
        t = not_null(b_33);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              g_33 = t;
              x_32 :
              if(match_cons(g_33, sym__2))
                {
                  h_33 = ATgetArgument(g_33, 0);
                  i_33 = ATgetArgument(g_33, 1);
                  {
                    if(((e_33 != NULL) && (e_33 != h_33)))
                      _fail(h_33);
                    else
                      e_33 = h_33;
                    if(((f_33 != NULL) && (f_33 != i_33)))
                      _fail(i_33);
                    else
                      f_33 = i_33;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_33), (ATerm) ATmakeAppl(sym_Let_2, not_null(e_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_v_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_33)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      {
        ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
        ATerm w_11;
        w_11 = t;
        {
          ATerm y_33 = NULL;
          ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
          t = i_120(t);
          {
            y_33 = t;
            {
              if(((v_33 != NULL) && (v_33 != y_33)))
                _fail(y_33);
              else
                v_33 = y_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_33), not_null(r_33), not_null(s_33));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_12 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), term_c_12);
                        t = table_get_0(t);
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = a_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_33 = t;
                      o_33 :
                      if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
                        {
                          a_34 = ATgetFirst((ATermList) z_33);
                          b_34 = (ATerm) ATgetNext((ATermList) z_33);
                          {
                            if(((w_33 != NULL) && (w_33 != a_34)))
                              _fail(a_34);
                            else
                              w_33 = a_34;
                            {
                              if(((x_33 != NULL) && (x_33 != b_34)))
                                _fail(b_34);
                              else
                                x_33 = b_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_33), term_c_12, (ATerm) ATinsert(CheckATermList(not_null(x_33)), (ATerm) ATinsert(CheckATermList(not_null(w_33)), not_null(r_33))));
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
        t = w_11;
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
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  g_36 = t;
  s_35 :
  if(match_cons(g_36, sym_Row_3))
    {
      h_36 = ATgetArgument(g_36, 0);
      d_37 = ATgetArgument(g_36, 1);
      e_37 = ATgetArgument(g_36, 2);
      d_36 :
      if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
        {
          i_36 = ATgetFirst((ATermList) h_36);
          c_37 = (ATerm) ATgetNext((ATermList) h_36);
          e_36 :
          if(match_cons(i_36, sym_As_2))
            {
              a_37 = ATgetArgument(i_36, 0);
              b_37 = ATgetArgument(i_36, 1);
              f_36 :
              if(match_cons(b_37, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(c_37), not_null(d_37), not_null(e_37));
                }
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
  ATerm k_37 = NULL;
  t = filter_1(t, WildPat_0);
  {
    k_37 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_37));
  }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm p_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Wld_0))
    {
      ATerm l_38 = NULL;
      ATerm p_38 = NULL;
      t = r_0(t);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm m_38 = NULL,n_38 = NULL;
          m_38 = t;
          t_37 :
          if(match_cons(m_38, sym_Var_1))
            {
              n_38 = ATgetArgument(m_38, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_38)), term_d_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, v_1);
        {
          p_38 = t;
          if(((l_38 != NULL) && (l_38 != p_38)))
            _fail(p_38);
          else
            l_38 = p_38;
        }
      }
      t = not_null(l_38);
    }
  else
    {
      if(match_cons(i_38, sym_Int_1))
        {
          j_38 = ATgetArgument(i_38, 0);
          {
            ATerm r_38 = NULL,s_38 = NULL;
            t = p_0(t);
            {
              r_38 = t;
              x_37 :
              if(match_cons(r_38, sym_Int_1))
                {
                  s_38 = ATgetArgument(r_38, 0);
                  {
                    ATerm t_38 = NULL;
                    if(((j_38 != NULL) && (j_38 != s_38)))
                      _fail(s_38);
                    else
                      j_38 = s_38;
                    {
                      t = r_0(t);
                      {
                        t_38 = t;
                        w_37 :
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
          if(match_cons(i_38, sym_Real_1))
            {
              j_38 = ATgetArgument(i_38, 0);
              {
                ATerm v_38 = NULL,w_38 = NULL;
                t = p_0(t);
                {
                  v_38 = t;
                  a_38 :
                  if(match_cons(v_38, sym_Real_1))
                    {
                      w_38 = ATgetArgument(v_38, 0);
                      {
                        ATerm x_38 = NULL;
                        if(((j_38 != NULL) && (j_38 != w_38)))
                          _fail(w_38);
                        else
                          j_38 = w_38;
                        {
                          t = r_0(t);
                          {
                            x_38 = t;
                            z_37 :
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
              if(match_cons(i_38, sym_Str_1))
                {
                  j_38 = ATgetArgument(i_38, 0);
                  {
                    ATerm z_38 = NULL,a_39 = NULL;
                    t = p_0(t);
                    {
                      z_38 = t;
                      d_38 :
                      if(match_cons(z_38, sym_Str_1))
                        {
                          a_39 = ATgetArgument(z_38, 0);
                          {
                            ATerm b_39 = NULL;
                            if(((j_38 != NULL) && (j_38 != a_39)))
                              _fail(a_39);
                            else
                              j_38 = a_39;
                            {
                              t = r_0(t);
                              {
                                b_39 = t;
                                c_38 :
                                if(((ATgetType(b_39) == AT_LIST) && ATisEmpty(b_39)))
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
                  if(match_cons(i_38, sym_Op_2))
                    {
                      j_38 = ATgetArgument(i_38, 0);
                      k_38 = ATgetArgument(i_38, 1);
                      {
                        ATerm e_39 = NULL;
                        ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
                        t = p_0(t);
                        {
                          f_39 = t;
                          g_38 :
                          if(match_cons(f_39, sym_Fun_2))
                            {
                              g_39 = ATgetArgument(f_39, 0);
                              h_39 = ATgetArgument(f_39, 1);
                              {
                                ATerm i_39 = NULL;
                                if(((j_38 != NULL) && (j_38 != g_39)))
                                  _fail(g_39);
                                else
                                  j_38 = g_39;
                                {
                                  if(((e_39 != NULL) && (e_39 != h_39)))
                                    _fail(h_39);
                                  else
                                    e_39 = h_39;
                                  {
                                    ATerm j_39 = NULL;
                                    t = not_null(k_38);
                                    {
                                      t = length_0(t);
                                      {
                                        j_39 = t;
                                        if(((i_39 != NULL) && (i_39 != j_39)))
                                          _fail(j_39);
                                        else
                                          i_39 = j_39;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_39), not_null(e_39));
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
                        t = not_null(k_38);
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
ATerm ConsTransition_1 (ATerm t, ATerm i_127 (ATerm))
{
  ATerm v_40 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  v_40 = t;
  s_40 :
  if(match_cons(v_40, sym_Row_3))
    {
      f_41 = ATgetArgument(v_40, 0);
      k_41 = ATgetArgument(v_40, 1);
      l_41 = ATgetArgument(v_40, 2);
      t_40 :
      if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
        {
          g_41 = ATgetFirst((ATermList) f_41);
          j_41 = (ATerm) ATgetNext((ATermList) f_41);
          u_40 :
          if(match_cons(g_41, sym_As_2))
            {
              h_41 = ATgetArgument(g_41, 0);
              i_41 = ATgetArgument(g_41, 1);
              {
                ATerm l_42 = NULL,l_43 = NULL;
                ATerm e_12;
                e_12 = t;
                {
                  ATerm m_42 = NULL;
                  t = not_null(i_41);
                  {
                    t = i_127(t);
                    {
                      m_42 = t;
                      if(((l_42 != NULL) && (l_42 != m_42)))
                        _fail(m_42);
                      else
                        l_42 = m_42;
                    }
                  }
                }
                t = e_12;
                {
                  ATerm m_43 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_42), not_null(k_41));
                  {
                    ATerm k_12 = t;
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(l_12);
                      }
                    else
                      {
                        t = k_12;
                        t = conc_more_lists_0(t);
                      }
                    {
                      m_43 = t;
                      if(((l_43 != NULL) && (l_43 != m_43)))
                        _fail(m_43);
                      else
                        l_43 = m_43;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(j_41), not_null(l_43), not_null(l_41));
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
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
  u_43 = t;
  s_43 :
  if(match_cons(u_43, sym__2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      t_43 :
      if(match_cons(w_43, sym__2))
        {
          x_43 = ATgetArgument(w_43, 0);
          y_43 = ATgetArgument(w_43, 1);
          {
            ATerm c_44 = NULL;
            ATerm e_44 = NULL;
            t = not_null(v_43);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = not_null(x_43);
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = not_null(y_43);
                    return(t);
                  }
                  t = MatchCons_2(t, y_1, z_1);
                  return(t);
                }
                t = ConsTransition_1(t, x_1);
                return(t);
              }
              t = filter_1(t, w_1);
              {
                e_44 = t;
                if(((c_44 != NULL) && (c_44 != e_44)))
                  _fail(e_44);
                else
                  c_44 = e_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(x_43), not_null(y_43), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(c_44)));
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
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  k_44 = t;
  i_44 :
  if(match_cons(k_44, sym__2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      j_44 :
      if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
        {
          n_44 = ATgetFirst((ATermList) m_44);
          o_44 = (ATerm) ATgetNext((ATermList) m_44);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_44), not_null(n_44)), (ATerm) ATmakeAppl(sym__2, not_null(l_44), not_null(o_44)));
        }
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
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  u_44 :
  if(match_cons(w_44, sym__2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      v_44 :
      if(((ATgetType(y_44) == AT_LIST) && ATisEmpty(y_44)))
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
ATerm rzip_1 (ATerm t, ATerm j_105 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, j_105);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(((ATgetType(e_45) == AT_LIST) && !(ATisEmpty(e_45))))
    {
      f_45 = ATgetFirst((ATermList) e_45);
      g_45 = (ATerm) ATgetNext((ATermList) e_45);
      {
        ATerm j_45 = NULL;
        ATerm l_45 = NULL;
        t = not_null(g_45);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm q_12 = t;
            if((PushChoice() == 0))
              {
                ATerm k_45 = NULL;
                k_45 = t;
                if(((f_45 != NULL) && (f_45 != k_45)))
                  _fail(k_45);
                else
                  f_45 = k_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_12;
              }
            return(t);
          }
          t = filter_1(t, a_2);
          {
            l_45 = t;
            if(((j_45 != NULL) && (j_45 != l_45)))
              _fail(l_45);
            else
              j_45 = l_45;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(j_45)), not_null(f_45));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm p_45 (ATerm t)
  {
    t = q_107(t);
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          t = Cons_2(t, _id, p_45);
        }
    }
    return(t);
  }
  t = p_45(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Uniq_0(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
        }
      }
    return(t);
  }
  t = listtd_1(t, b_2);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
    t_45 = t;
    r_45 :
    if(match_cons(t_45, sym_As_2))
      {
        u_45 = ATgetArgument(t_45, 0);
        w_45 = ATgetArgument(t_45, 1);
        s_45 :
        if(match_cons(u_45, sym_Off_1))
          {
            v_45 = ATgetArgument(u_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_45));
          }
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
  t = map_1(t, c_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_v_12;
    return(t);
  }
  t = foldr_3(t, d_2, add_0, e_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  k_46 = t;
  g_46 :
  if(match_cons(k_46, sym_Row_3))
    {
      l_46 = ATgetArgument(k_46, 0);
      s_46 = ATgetArgument(k_46, 1);
      t_46 = ATgetArgument(k_46, 2);
      h_46 :
      if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
        {
          m_46 = ATgetFirst((ATermList) l_46);
          r_46 = (ATerm) ATgetNext((ATermList) l_46);
          i_46 :
          if(match_cons(m_46, sym_As_2))
            {
              n_46 = ATgetArgument(m_46, 0);
              o_46 = ATgetArgument(m_46, 1);
              j_46 :
              if(match_cons(o_46, sym_Str_1))
                {
                  p_46 = ATgetArgument(o_46, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(p_46)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(o_46, sym_Real_1))
                    {
                      p_46 = ATgetArgument(o_46, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(p_46)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(o_46, sym_Int_1))
                        {
                          p_46 = ATgetArgument(o_46, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(p_46)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(o_46, sym_Op_2))
                            {
                              p_46 = ATgetArgument(o_46, 0);
                              q_46 = ATgetArgument(o_46, 1);
                              {
                                ATerm d_47 = NULL,f_47 = NULL;
                                ATerm w_12;
                                w_12 = t;
                                {
                                  ATerm e_47 = NULL;
                                  t = not_null(q_46);
                                  {
                                    t = length_0(t);
                                    {
                                      e_47 = t;
                                      if(((d_47 != NULL) && (d_47 != e_47)))
                                        _fail(e_47);
                                      else
                                        d_47 = e_47;
                                    }
                                  }
                                }
                                t = w_12;
                                {
                                  ATerm s_47 = NULL;
                                  t = not_null(q_46);
                                  {
                                    t = offsets_0(t);
                                    {
                                      s_47 = t;
                                      if(((f_47 != NULL) && (f_47 != s_47)))
                                        _fail(s_47);
                                      else
                                        f_47 = s_47;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(p_46), not_null(d_47)), not_null(f_47));
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
ATerm filter_1 (ATerm t, ATerm a_112 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              t = filter_1(t, a_112);
              return(t);
            }
            t = Cons_2(t, a_112, f_2);
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
              h_48 = t;
              g_48 :
              if(((ATgetType(h_48) == AT_LIST) && !(ATisEmpty(h_48))))
                {
                  i_48 = ATgetFirst((ATermList) h_48);
                  j_48 = (ATerm) ATgetNext((ATermList) h_48);
                  {
                    t = not_null(j_48);
                    t = filter_1(t, a_112);
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
  ATerm h_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,m_49 = NULL,n_49 = NULL;
      y_48 = t;
      n_48 :
      if(((ATgetType(y_48) == AT_LIST) && !(ATisEmpty(y_48))))
        {
          z_48 = ATgetFirst((ATermList) y_48);
          n_49 = (ATerm) ATgetNext((ATermList) y_48);
          t_48 :
          if(match_cons(z_48, sym_Row_3))
            {
              a_49 = ATgetArgument(z_48, 0);
              g_49 = ATgetArgument(z_48, 1);
              m_49 = ATgetArgument(z_48, 2);
              u_48 :
              if(((ATgetType(a_49) == AT_LIST) && !(ATisEmpty(a_49))))
                {
                  b_49 = ATgetFirst((ATermList) a_49);
                  f_49 = (ATerm) ATgetNext((ATermList) a_49);
                  v_48 :
                  if(match_cons(b_49, sym_As_2))
                    {
                      c_49 = ATgetArgument(b_49, 0);
                      e_49 = ATgetArgument(b_49, 1);
                      w_48 :
                      if(match_cons(c_49, sym_Off_1))
                        {
                          d_49 = ATgetArgument(c_49, 0);
                          t = not_null(d_49);
                        }
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
      LocalPopChoice(k_13);
    }
  else
    {
      t = h_13;
      {
        t = explode_string_0(t);
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_49 (ATerm t)
              {
                ATerm n_13 = t;
                int o_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, r_49);
                    LocalPopChoice(o_13);
                  }
                else
                  {
                    t = n_13;
                    {
                      ATerm g_2 (ATerm t)
                      {
                        ATerm p_49 = NULL;
                        p_49 = t;
                        x_48 :
                        if(!(match_int(p_49, 47)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm h_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = Cons_2(t, g_2, h_2);
                    }
                  }
                return(t);
              }
              t = r_49(t);
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
  ATerm p_50 = NULL,q_50 = NULL;
  p_50 = t;
  l_50 :
  if(match_cons(p_50, sym_Matrix_1))
    {
      q_50 = ATgetArgument(p_50, 0);
      {
        ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
        ATerm x_50 = NULL;
        t = not_null(q_50);
        {
          ATerm c_51 = NULL;
          t = get_path_0(t);
          {
            x_50 = t;
            {
              if(((s_50 != NULL) && (s_50 != x_50)))
                _fail(x_50);
              else
                s_50 = x_50;
              {
                t = not_null(q_50);
                {
                  ATerm d_51 = NULL;
                  t = outedges_0(t);
                  {
                    c_51 = t;
                    {
                      if(((t_50 != NULL) && (t_50 != c_51)))
                        _fail(c_51);
                      else
                        t_50 = c_51;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), not_null(t_50));
                        {
                          ATerm i_51 = NULL;
                          t = rzip_1(t, Transition_0);
                          {
                            d_51 = t;
                            {
                              if(((u_50 != NULL) && (u_50 != d_51)))
                                _fail(d_51);
                              else
                                u_50 = d_51;
                              {
                                t = not_null(q_50);
                                {
                                  ATerm j_51 = NULL;
                                  t = default_state_0(t);
                                  {
                                    i_51 = t;
                                    {
                                      if(((v_50 != NULL) && (v_50 != i_51)))
                                        _fail(i_51);
                                      else
                                        v_50 = i_51;
                                      {
                                        t = new_0(t);
                                        {
                                          j_51 = t;
                                          {
                                            if(((w_50 != NULL) && (w_50 != j_51)))
                                              _fail(j_51);
                                            else
                                              w_50 = j_51;
                                            {
                                              ATerm p_13;
                                              p_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, not_null(q_50)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_13, not_null(w_50)));
                                                {
                                                  ATerm i_2 (ATerm t)
                                                  {
                                                    t = term_r_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, i_2);
                                                }
                                              }
                                              t = p_13;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(w_50), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_50)), not_null(u_50), not_null(v_50));
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
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  t_51 = t;
  r_51 :
  if(match_cons(t_51, sym_Row_3))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      y_51 = ATgetArgument(t_51, 2);
      s_51 :
      if(((ATgetType(v_51) == AT_LIST) && !(ATisEmpty(v_51))))
        {
          w_51 = ATgetFirst((ATermList) v_51);
          x_51 = (ATerm) ATgetNext((ATermList) v_51);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(u_51)), not_null(w_51)), not_null(x_51), not_null(y_51));
        }
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
  ATerm h_52 = NULL,i_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Matrix_1))
    {
      i_52 = ATgetArgument(h_52, 0);
      {
        ATerm k_52 = NULL;
        ATerm l_52 = NULL;
        t = not_null(i_52);
        {
          ATerm v_13 = t;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm m_2 (ATerm t)
                    {
                      ATerm w_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = w_13;
                        }
                      return(t);
                    }
                    t = As_2(t, _id, m_2);
                    return(t);
                  }
                  t = Cons_2(t, l_2, _id);
                  return(t);
                }
                t = Row_3(t, k_2, _id, _id);
                return(t);
              }
              t = map_1(t, j_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_13;
            }
          {
            t = not_null(i_52);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                l_52 = t;
                if(((k_52 != NULL) && (k_52 != l_52)))
                  _fail(l_52);
                else
                  k_52 = l_52;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_52));
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
  ATerm d_53 = NULL;
  d_53 = t;
  x_52 :
  if(match_cons(d_53, sym_Wld_0))
    {
      ATerm h_53 = NULL,j_53 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(d_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
      }
      t = a_14;
      {
        ATerm k_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(h_53));
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
        t = not_null(j_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  y_53 = t;
  x_53 :
  if(match_cons(y_53, sym_Row_3))
    {
      z_53 = ATgetArgument(y_53, 0);
      a_54 = ATgetArgument(y_53, 1);
      b_54 = ATgetArgument(y_53, 2);
      {
        ATerm h_54 = NULL,j_54 = NULL;
        ATerm i_54 = NULL;
        t = SSLgetAnnotations(not_null(y_53));
        {
          i_54 = t;
          if(((h_54 != NULL) && (h_54 != i_54)))
            _fail(i_54);
          else
            h_54 = i_54;
        }
        {
          t = not_null(z_53);
          {
            ATerm l_54 = NULL;
            t = r_91(t);
            {
              j_54 = t;
              {
                t = not_null(a_54);
                {
                  ATerm n_54 = NULL;
                  t = s_91(t);
                  {
                    l_54 = t;
                    {
                      t = not_null(b_54);
                      {
                        ATerm p_54 = NULL;
                        t = t_91(t);
                        {
                          n_54 = t;
                          {
                            ATerm q_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(j_54), not_null(l_54), not_null(n_54)), not_null(h_54));
                            {
                              q_54 = t;
                              if(((p_54 != NULL) && (p_54 != q_54)))
                                _fail(q_54);
                              else
                                p_54 = q_54;
                            }
                            t = not_null(p_54);
                          }
                        }
                      }
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
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym_Matrix_1))
    {
      b_55 = ATgetArgument(a_55, 0);
      {
        ATerm d_55 = NULL;
        ATerm e_55 = NULL;
        t = not_null(b_55);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              ATerm p_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, p_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, o_2, _id);
            return(t);
          }
          t = map_1(t, n_2);
          {
            e_55 = t;
            if(((d_55 != NULL) && (d_55 != e_55)))
              _fail(e_55);
            else
              d_55 = e_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(d_55));
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
  ATerm o_55 = NULL,p_55 = NULL;
  o_55 = t;
  n_55 :
  if(match_cons(o_55, sym_Matrix_1))
    {
      p_55 = ATgetArgument(o_55, 0);
      {
        ATerm r_55 = NULL;
        ATerm x_55 = NULL;
        t = not_null(p_55);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
            s_55 = t;
            j_55 :
            if(match_cons(s_55, sym_Row_3))
              {
                t_55 = ATgetArgument(s_55, 0);
                u_55 = ATgetArgument(s_55, 1);
                v_55 = ATgetArgument(s_55, 2);
                k_55 :
                if(((ATgetType(t_55) == AT_LIST) && ATisEmpty(t_55)))
                  {
                    l_55 :
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
          t = map_1(t, q_2);
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
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm h_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(i_14);
                }
              else
                {
                  t = h_14;
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
        ATerm j_14;
        j_14 = t;
        {
          ATerm q_56 = NULL;
          ATerm r_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_56), not_null(n_56));
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
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
        t = j_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_120 (ATerm))
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm b_57 = NULL;
    ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
    t = f_120(t);
    {
      b_57 = t;
      {
        if(((a_57 != NULL) && (a_57 != b_57)))
          _fail(b_57);
        else
          a_57 = b_57;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), term_c_12);
              t = table_get_0(t);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_57 = t;
            x_56 :
            if(((ATgetType(c_57) == AT_LIST) && !(ATisEmpty(c_57))))
              {
                d_57 = ATgetFirst((ATermList) c_57);
                e_57 = (ATerm) ATgetNext((ATermList) c_57);
                {
                  if(((z_56 != NULL) && (z_56 != d_57)))
                    _fail(d_57);
                  else
                    z_56 = d_57;
                  {
                    if(((y_56 != NULL) && (y_56 != e_57)))
                      _fail(e_57);
                    else
                      y_56 = e_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_57), term_c_12, not_null(y_56));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_56);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm f_57 = NULL;
                              f_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), not_null(f_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = q_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm))
{
  ATerm w_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_103(t);
      t = s_103(t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = w_14;
      {
        t = s_103(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_120 (ATerm))
{
  ATerm m_57 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm n_57 = NULL;
    ATerm o_57 = NULL;
    t = e_120(t);
    {
      n_57 = t;
      {
        if(((m_57 != NULL) && (m_57 != n_57)))
          _fail(n_57);
        else
          m_57 = n_57;
        {
          ATerm p_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_57), term_c_12);
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
                t = (ATerm) ATempty;
              }
            {
              p_57 = t;
              if(((o_57 != NULL) && (o_57 != p_57)))
                _fail(p_57);
              else
                o_57 = p_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_57), term_c_12, (ATerm) ATinsert(CheckATermList(not_null(o_57)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm g_120 (ATerm), ATerm h_120 (ATerm))
{
  t = begin_scope_1(t, g_120);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, g_120);
      return(t);
    }
    t = restore_always_2(t, h_120, s_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm v_2 (ATerm t)
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          {
            ATerm g_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(k_15);
              }
            else
              {
                t = g_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_2(t, v_2, _id);
    t = _all(t, u_2);
    return(t);
  }
  t = scope_2(t, t_2, u_2);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  k_58 = t;
  j_58 :
  if(match_cons(k_58, sym_Cong_2))
    {
      l_58 = ATgetArgument(k_58, 0);
      m_58 = ATgetArgument(k_58, 1);
      {
        ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,z_58 = NULL,a_59 = NULL,v_59 = NULL,x_59 = NULL,z_59 = NULL;
        ATerm l_15;
        l_15 = t;
        {
          ATerm b_59 = NULL;
          t = not_null(m_58);
          {
            ATerm e_59 = NULL;
            t = map_1(t, new_0);
            {
              b_59 = t;
              {
                if(((s_58 != NULL) && (s_58 != b_59)))
                  _fail(b_59);
                else
                  s_58 = b_59;
                {
                  t = not_null(s_58);
                  {
                    ATerm f_59 = NULL;
                    ATerm w_2 (ATerm t)
                    {
                      ATerm c_59 = NULL;
                      ATerm d_59 = NULL;
                      d_59 = t;
                      if(((c_59 != NULL) && (c_59 != d_59)))
                        _fail(d_59);
                      else
                        c_59 = d_59;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_59));
                      return(t);
                    }
                    t = map_1(t, w_2);
                    {
                      e_59 = t;
                      {
                        if(((p_58 != NULL) && (p_58 != e_59)))
                          _fail(e_59);
                        else
                          p_58 = e_59;
                        {
                          ATerm g_59 = NULL;
                          t = new_0(t);
                          {
                            f_59 = t;
                            {
                              if(((q_58 != NULL) && (q_58 != f_59)))
                                _fail(f_59);
                              else
                                q_58 = f_59;
                              {
                                t = not_null(m_58);
                                {
                                  ATerm j_59 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    g_59 = t;
                                    {
                                      if(((z_58 != NULL) && (z_58 != g_59)))
                                        _fail(g_59);
                                      else
                                        z_58 = g_59;
                                      {
                                        t = not_null(z_58);
                                        {
                                          ATerm k_59 = NULL,u_59 = NULL;
                                          ATerm x_2 (ATerm t)
                                          {
                                            ATerm h_59 = NULL;
                                            ATerm i_59 = NULL;
                                            i_59 = t;
                                            if(((h_59 != NULL) && (h_59 != i_59)))
                                              _fail(i_59);
                                            else
                                              h_59 = i_59;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_59));
                                            return(t);
                                          }
                                          t = map_1(t, x_2);
                                          {
                                            j_59 = t;
                                            {
                                              if(((r_58 != NULL) && (r_58 != j_59)))
                                                _fail(j_59);
                                              else
                                                r_58 = j_59;
                                              {
                                                ATerm l_59 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_58), not_null(z_58));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    l_59 = t;
                                                    if(((k_59 != NULL) && (k_59 != l_59)))
                                                      _fail(l_59);
                                                    else
                                                      k_59 = l_59;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_59), not_null(m_58));
                                                  {
                                                    ATerm y_2 (ATerm t)
                                                    {
                                                      ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
                                                      m_59 = t;
                                                      d_58 :
                                                      if(match_cons(m_59, sym__2))
                                                        {
                                                          n_59 = ATgetArgument(m_59, 0);
                                                          q_59 = ATgetArgument(m_59, 1);
                                                          e_58 :
                                                          if(match_cons(n_59, sym__2))
                                                            {
                                                              o_59 = ATgetArgument(n_59, 0);
                                                              p_59 = ATgetArgument(n_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_59)))));
                                                            }
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
                                                    t = zip_1(t, y_2);
                                                    {
                                                      u_59 = t;
                                                      if(((a_59 != NULL) && (a_59 != u_59)))
                                                        _fail(u_59);
                                                      else
                                                        a_59 = u_59;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = l_15;
        {
          ATerm m_15;
          m_15 = t;
          {
            ATerm w_59 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_58), not_null(z_58));
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
                w_59 = t;
                if(((v_59 != NULL) && (v_59 != w_59)))
                  _fail(w_59);
                else
                  v_59 = w_59;
              }
            }
          }
          t = m_15;
          {
            ATerm s_15;
            s_15 = t;
            {
              ATerm y_59 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_58), not_null(p_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_58))));
              {
                t = Mapp2_0(t);
                {
                  y_59 = t;
                  if(((x_59 != NULL) && (x_59 != y_59)))
                    _fail(y_59);
                  else
                    x_59 = y_59;
                }
              }
            }
            t = s_15;
            {
              ATerm a_60 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_58), not_null(r_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_58))));
              {
                t = Bapp2_0(t);
                {
                  a_60 = t;
                  if(((z_59 != NULL) && (z_59 != a_60)))
                    _fail(a_60);
                  else
                    z_59 = a_60;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_59)), not_null(q_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_59)), not_null(z_59))));
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
  ATerm f_61 = NULL,g_61 = NULL;
  f_61 = t;
  e_61 :
  if(match_cons(f_61, sym_Build_1))
    {
      g_61 = ATgetArgument(f_61, 0);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
            ATerm m_61 = NULL;
            ATerm q_61 = NULL;
            t = new_0(t);
            {
              m_61 = t;
              {
                if(((k_61 != NULL) && (k_61 != m_61)))
                  _fail(m_61);
                else
                  k_61 = m_61;
                {
                  t = not_null(g_61);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
                      n_61 = t;
                      u_60 :
                      if(match_cons(n_61, sym_Anno_2))
                        {
                          o_61 = ATgetArgument(n_61, 0);
                          p_61 = ATgetArgument(n_61, 1);
                          {
                            if(((i_61 != NULL) && (i_61 != o_61)))
                              _fail(o_61);
                            else
                              i_61 = o_61;
                            {
                              if(((j_61 != NULL) && (j_61 != p_61)))
                                _fail(p_61);
                              else
                                j_61 = p_61;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_61));
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
                      q_61 = t;
                      if(((l_61 != NULL) && (l_61 != q_61)))
                        _fail(q_61);
                      else
                        l_61 = q_61;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_61)), not_null(i_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_61))));
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm b_16 = t;
              int j_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
                  ATerm v_61 = NULL;
                  ATerm y_61 = NULL;
                  t = new_0(t);
                  {
                    v_61 = t;
                    {
                      if(((t_61 != NULL) && (t_61 != v_61)))
                        _fail(v_61);
                      else
                        t_61 = v_61;
                      {
                        t = not_null(g_61);
                        {
                          ATerm a_3 (ATerm t)
                          {
                            ATerm w_61 = NULL,x_61 = NULL;
                            w_61 = t;
                            y_60 :
                            if(match_cons(w_61, sym_RootApp_1))
                              {
                                x_61 = ATgetArgument(w_61, 0);
                                {
                                  if(((s_61 != NULL) && (s_61 != x_61)))
                                    _fail(x_61);
                                  else
                                    s_61 = x_61;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_61));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, a_3);
                          {
                            y_61 = t;
                            if(((u_61 != NULL) && (u_61 != y_61)))
                              _fail(y_61);
                            else
                              u_61 = y_61;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_61))));
                  LocalPopChoice(j_16);
                }
              else
                {
                  t = b_16;
                  {
                    ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
                    ATerm e_62 = NULL;
                    ATerm i_62 = NULL;
                    t = new_0(t);
                    {
                      e_62 = t;
                      {
                        if(((c_62 != NULL) && (c_62 != e_62)))
                          _fail(e_62);
                        else
                          c_62 = e_62;
                        {
                          t = not_null(g_61);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
                              f_62 = t;
                              c_61 :
                              if(match_cons(f_62, sym_App_2))
                                {
                                  g_62 = ATgetArgument(f_62, 0);
                                  h_62 = ATgetArgument(f_62, 1);
                                  {
                                    if(((a_62 != NULL) && (a_62 != g_62)))
                                      _fail(g_62);
                                    else
                                      a_62 = g_62;
                                    {
                                      if(((b_62 != NULL) && (b_62 != h_62)))
                                        _fail(h_62);
                                      else
                                        b_62 = h_62;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_62));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, b_3);
                            {
                              i_62 = t;
                              if(((d_62 != NULL) && (d_62 != i_62)))
                                _fail(i_62);
                              else
                                d_62 = i_62;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_62), not_null(b_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_62)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_62))));
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
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  a_63 = t;
  z_62 :
  if(match_cons(a_63, sym__2))
    {
      b_63 = ATgetArgument(a_63, 0);
      c_63 = ATgetArgument(a_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_63)), not_null(b_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  k_63 = t;
  h_63 :
  if(match_cons(k_63, sym__2))
    {
      l_63 = ATgetArgument(k_63, 0);
      o_63 = ATgetArgument(k_63, 1);
      i_63 :
      if(((ATgetType(l_63) == AT_LIST) && !(ATisEmpty(l_63))))
        {
          m_63 = ATgetFirst((ATermList) l_63);
          n_63 = (ATerm) ATgetNext((ATermList) l_63);
          j_63 :
          if(((ATgetType(o_63) == AT_LIST) && !(ATisEmpty(o_63))))
            {
              p_63 = ATgetFirst((ATermList) o_63);
              q_63 = (ATerm) ATgetNext((ATermList) o_63);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_63), not_null(p_63)), (ATerm) ATmakeAppl(sym__2, not_null(n_63), not_null(q_63)));
            }
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
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  n_64 = t;
  z_63 :
  if(match_cons(n_64, sym__2))
    {
      o_64 = ATgetArgument(n_64, 0);
      p_64 = ATgetArgument(n_64, 1);
      a_64 :
      if(((ATgetType(o_64) == AT_LIST) && ATisEmpty(o_64)))
        {
          m_64 :
          if(((ATgetType(p_64) == AT_LIST) && ATisEmpty(p_64)))
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
ATerm zip_1 (ATerm t, ATerm a_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
  x_65 = t;
  k_65 :
  if(match_cons(x_65, sym_Call_2))
    {
      y_65 = ATgetArgument(x_65, 0);
      a_66 = ATgetArgument(x_65, 1);
      l_65 :
      if(match_cons(y_65, sym_SVar_1))
        {
          z_65 = ATgetArgument(y_65, 0);
          m_65 :
          if(match_string(z_65, "Anno_Cong__"))
            {
              s_65 :
              if(((ATgetType(a_66) == AT_LIST) && !(ATisEmpty(a_66))))
                {
                  b_66 = ATgetFirst((ATermList) a_66);
                  e_66 = (ATerm) ATgetNext((ATermList) a_66);
                  u_65 :
                  if(match_cons(b_66, sym_Cong_2))
                    {
                      c_66 = ATgetArgument(b_66, 0);
                      d_66 = ATgetArgument(b_66, 1);
                      v_65 :
                      if(((ATgetType(e_66) == AT_LIST) && !(ATisEmpty(e_66))))
                        {
                          f_66 = ATgetFirst((ATermList) e_66);
                          g_66 = (ATerm) ATgetNext((ATermList) e_66);
                          w_65 :
                          if(((ATgetType(g_66) == AT_LIST) && ATisEmpty(g_66)))
                            {
                              {
                                ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,o_67 = NULL,q_67 = NULL,s_67 = NULL;
                                ATerm k_16;
                                k_16 = t;
                                {
                                  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      r_66 = t;
                                      e_65 :
                                      if(((ATgetType(r_66) == AT_LIST) && !(ATisEmpty(r_66))))
                                        {
                                          s_66 = ATgetFirst((ATermList) r_66);
                                          t_66 = (ATerm) ATgetNext((ATermList) r_66);
                                          {
                                            ATerm w_66 = NULL;
                                            if(((k_66 != NULL) && (k_66 != s_66)))
                                              _fail(s_66);
                                            else
                                              k_66 = s_66;
                                            {
                                              if(((o_66 != NULL) && (o_66 != t_66)))
                                                _fail(t_66);
                                              else
                                                o_66 = t_66;
                                              {
                                                ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
                                                ATerm c_3 (ATerm t)
                                                {
                                                  ATerm u_66 = NULL;
                                                  ATerm v_66 = NULL;
                                                  v_66 = t;
                                                  if(((u_66 != NULL) && (u_66 != v_66)))
                                                    _fail(v_66);
                                                  else
                                                    u_66 = v_66;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_66));
                                                  return(t);
                                                }
                                                t = map_1(t, c_3);
                                                {
                                                  w_66 = t;
                                                  {
                                                    if(((l_66 != NULL) && (l_66 != w_66)))
                                                      _fail(w_66);
                                                    else
                                                      l_66 = w_66;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          x_66 = t;
                                                          d_65 :
                                                          if(((ATgetType(x_66) == AT_LIST) && !(ATisEmpty(x_66))))
                                                            {
                                                              y_66 = ATgetFirst((ATermList) x_66);
                                                              z_66 = (ATerm) ATgetNext((ATermList) x_66);
                                                              {
                                                                ATerm c_67 = NULL;
                                                                if(((m_66 != NULL) && (m_66 != y_66)))
                                                                  _fail(y_66);
                                                                else
                                                                  m_66 = y_66;
                                                                {
                                                                  if(((p_66 != NULL) && (p_66 != z_66)))
                                                                    _fail(z_66);
                                                                  else
                                                                    p_66 = z_66;
                                                                  {
                                                                    ATerm d_67 = NULL,n_67 = NULL;
                                                                    ATerm d_3 (ATerm t)
                                                                    {
                                                                      ATerm a_67 = NULL;
                                                                      ATerm b_67 = NULL;
                                                                      b_67 = t;
                                                                      if(((a_67 != NULL) && (a_67 != b_67)))
                                                                        _fail(b_67);
                                                                      else
                                                                        a_67 = b_67;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_67));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, d_3);
                                                                    {
                                                                      c_67 = t;
                                                                      {
                                                                        if(((n_66 != NULL) && (n_66 != c_67)))
                                                                          _fail(c_67);
                                                                        else
                                                                          n_66 = c_67;
                                                                        {
                                                                          ATerm e_67 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_66), not_null(p_66));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              e_67 = t;
                                                                              if(((d_67 != NULL) && (d_67 != e_67)))
                                                                                _fail(e_67);
                                                                              else
                                                                                d_67 = e_67;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_67), (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(f_66)));
                                                                            {
                                                                              ATerm e_3 (ATerm t)
                                                                              {
                                                                                ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
                                                                                f_67 = t;
                                                                                a_65 :
                                                                                if(match_cons(f_67, sym__2))
                                                                                  {
                                                                                    g_67 = ATgetArgument(f_67, 0);
                                                                                    j_67 = ATgetArgument(f_67, 1);
                                                                                    b_65 :
                                                                                    if(match_cons(g_67, sym__2))
                                                                                      {
                                                                                        h_67 = ATgetArgument(g_67, 0);
                                                                                        i_67 = ATgetArgument(g_67, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_67))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_67), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67)))));
                                                                                      }
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
                                                                              t = zip_1(t, e_3);
                                                                              {
                                                                                n_67 = t;
                                                                                if(((q_66 != NULL) && (q_66 != n_67)))
                                                                                  _fail(n_67);
                                                                                else
                                                                                  q_66 = n_67;
                                                                              }
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
                                t = k_16;
                                {
                                  ATerm l_16;
                                  l_16 = t;
                                  {
                                    ATerm p_67 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_66), not_null(p_66));
                                    {
                                      ATerm m_16 = t;
                                      int n_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(n_16);
                                        }
                                      else
                                        {
                                          t = m_16;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        p_67 = t;
                                        if(((o_67 != NULL) && (o_67 != p_67)))
                                          _fail(p_67);
                                        else
                                          o_67 = p_67;
                                      }
                                    }
                                  }
                                  t = l_16;
                                  {
                                    ATerm o_16;
                                    o_16 = t;
                                    {
                                      ATerm r_67 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(l_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_66))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          r_67 = t;
                                          if(((q_67 != NULL) && (q_67 != r_67)))
                                            _fail(r_67);
                                          else
                                            q_67 = r_67;
                                        }
                                      }
                                    }
                                    t = o_16;
                                    {
                                      ATerm t_67 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_66), not_null(n_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_66))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          t_67 = t;
                                          if(((s_67 != NULL) && (s_67 != t_67)))
                                            _fail(t_67);
                                          else
                                            s_67 = t_67;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(o_67)), not_null(m_66)), not_null(k_66)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_66)), not_null(s_67))));
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
ATerm As_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym_As_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      {
        ATerm a_69 = NULL,c_69 = NULL;
        ATerm b_69 = NULL;
        t = SSLgetAnnotations(not_null(n_68));
        {
          b_69 = t;
          if(((a_69 != NULL) && (a_69 != b_69)))
            _fail(b_69);
          else
            a_69 = b_69;
        }
        {
          t = not_null(o_68);
          {
            ATerm g_69 = NULL;
            t = s_90(t);
            {
              c_69 = t;
              {
                t = not_null(p_68);
                {
                  ATerm i_69 = NULL;
                  t = t_90(t);
                  {
                    g_69 = t;
                    {
                      ATerm j_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_69), not_null(g_69)), not_null(a_69));
                      {
                        j_69 = t;
                        if(((i_69 != NULL) && (i_69 != j_69)))
                          _fail(j_69);
                        else
                          i_69 = j_69;
                      }
                      t = not_null(i_69);
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
ATerm Prim_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  j_70 = t;
  e_70 :
  if(match_cons(j_70, sym_Prim_2))
    {
      k_70 = ATgetArgument(j_70, 0);
      l_70 = ATgetArgument(j_70, 1);
      {
        ATerm p_70 = NULL,r_70 = NULL;
        ATerm q_70 = NULL;
        t = SSLgetAnnotations(not_null(j_70));
        {
          q_70 = t;
          if(((p_70 != NULL) && (p_70 != q_70)))
            _fail(q_70);
          else
            p_70 = q_70;
        }
        {
          t = not_null(k_70);
          {
            ATerm t_70 = NULL;
            t = p_86(t);
            {
              r_70 = t;
              {
                t = not_null(l_70);
                {
                  ATerm v_70 = NULL;
                  t = q_86(t);
                  {
                    t_70 = t;
                    {
                      ATerm w_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_70), not_null(t_70)), not_null(p_70));
                      {
                        w_70 = t;
                        if(((v_70 != NULL) && (v_70 != w_70)))
                          _fail(w_70);
                        else
                          v_70 = w_70;
                      }
                      t = not_null(v_70);
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
ATerm Explode_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym_Explode_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      {
        ATerm p_71 = NULL,r_71 = NULL;
        ATerm q_71 = NULL;
        t = SSLgetAnnotations(not_null(j_71));
        {
          q_71 = t;
          if(((p_71 != NULL) && (p_71 != q_71)))
            _fail(q_71);
          else
            p_71 = q_71;
        }
        {
          t = not_null(k_71);
          {
            ATerm t_71 = NULL;
            t = o_90(t);
            {
              r_71 = t;
              {
                t = not_null(l_71);
                {
                  ATerm v_71 = NULL;
                  t = p_90(t);
                  {
                    t_71 = t;
                    {
                      ATerm w_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(r_71), not_null(t_71)), not_null(p_71));
                      {
                        w_71 = t;
                        if(((v_71 != NULL) && (v_71 != w_71)))
                          _fail(w_71);
                        else
                          v_71 = w_71;
                      }
                      t = not_null(v_71);
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
ATerm Op_2 (ATerm t, ATerm t_88 (ATerm), ATerm u_88 (ATerm))
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
  n_72 = t;
  m_72 :
  if(match_cons(n_72, sym_Op_2))
    {
      o_72 = ATgetArgument(n_72, 0);
      p_72 = ATgetArgument(n_72, 1);
      {
        ATerm t_72 = NULL,v_72 = NULL;
        ATerm u_72 = NULL;
        t = SSLgetAnnotations(not_null(n_72));
        {
          u_72 = t;
          if(((t_72 != NULL) && (t_72 != u_72)))
            _fail(u_72);
          else
            t_72 = u_72;
        }
        {
          t = not_null(o_72);
          {
            ATerm x_72 = NULL;
            t = t_88(t);
            {
              v_72 = t;
              {
                t = not_null(p_72);
                {
                  ATerm z_72 = NULL;
                  t = u_88(t);
                  {
                    x_72 = t;
                    {
                      ATerm a_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_72), not_null(x_72)), not_null(t_72));
                      {
                        a_73 = t;
                        if(((z_72 != NULL) && (z_72 != a_73)))
                          _fail(a_73);
                        else
                          z_72 = a_73;
                      }
                      t = not_null(z_72);
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
ATerm pat_td_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm p_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_98(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = p_16;
      {
        ATerm s_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm g_3 (ATerm t)
              {
                t = pat_td_1(t, k_98);
                return(t);
              }
              t = fetch_1(t, g_3);
              return(t);
            }
            t = Op_2(t, _id, f_3);
            LocalPopChoice(u_16);
          }
        else
          {
            t = s_16;
            {
              ATerm c_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = pat_td_1(t, k_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, h_3);
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = c_17;
                  {
                    ATerm e_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_3 (ATerm t)
                        {
                          t = pat_td_1(t, k_98);
                          return(t);
                        }
                        t = Explode_2(t, i_3, _id);
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = e_17;
                        {
                          ATerm o_17 = t;
                          int u_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_3 (ATerm t)
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = pat_td_1(t, k_98);
                                  return(t);
                                }
                                t = fetch_1(t, k_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, j_3);
                              LocalPopChoice(u_17);
                            }
                          else
                            {
                              t = o_17;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = pat_td_1(t, k_98);
                                  return(t);
                                }
                                t = As_2(t, _id, l_3);
                              }
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
  ATerm d_74 = NULL,e_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym_Match_1))
    {
      e_74 = ATgetArgument(d_74, 0);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
            ATerm k_74 = NULL;
            ATerm o_74 = NULL;
            t = new_0(t);
            {
              k_74 = t;
              {
                if(((i_74 != NULL) && (i_74 != k_74)))
                  _fail(k_74);
                else
                  i_74 = k_74;
                {
                  t = not_null(e_74);
                  {
                    ATerm m_3 (ATerm t)
                    {
                      ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
                      l_74 = t;
                      l_73 :
                      if(match_cons(l_74, sym_Anno_2))
                        {
                          m_74 = ATgetArgument(l_74, 0);
                          n_74 = ATgetArgument(l_74, 1);
                          {
                            if(((g_74 != NULL) && (g_74 != m_74)))
                              _fail(m_74);
                            else
                              g_74 = m_74;
                            {
                              if(((h_74 != NULL) && (h_74 != n_74)))
                                _fail(n_74);
                              else
                                h_74 = n_74;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_74)), not_null(g_74));
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
                      o_74 = t;
                      if(((j_74 != NULL) && (j_74 != o_74)))
                        _fail(o_74);
                      else
                        j_74 = o_74;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_74)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_74)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_74))))));
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm y_17 = t;
              int z_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
                  ATerm d_75 = NULL;
                  ATerm p_75 = NULL;
                  t = new_0(t);
                  {
                    d_75 = t;
                    {
                      if(((r_74 != NULL) && (r_74 != d_75)))
                        _fail(d_75);
                      else
                        r_74 = d_75;
                      {
                        t = not_null(e_74);
                        {
                          ATerm n_3 (ATerm t)
                          {
                            ATerm e_75 = NULL,o_75 = NULL;
                            e_75 = t;
                            w_73 :
                            if(match_cons(e_75, sym_RootApp_1))
                              {
                                o_75 = ATgetArgument(e_75, 0);
                                {
                                  if(((q_74 != NULL) && (q_74 != o_75)))
                                    _fail(o_75);
                                  else
                                    q_74 = o_75;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_74));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, n_3);
                          {
                            p_75 = t;
                            if(((s_74 != NULL) && (s_74 != p_75)))
                              _fail(p_75);
                            else
                              s_74 = p_75;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_74))), not_null(q_74))));
                  LocalPopChoice(z_17);
                }
              else
                {
                  t = y_17;
                  {
                    ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
                    ATerm e_76 = NULL;
                    ATerm i_76 = NULL;
                    t = new_0(t);
                    {
                      e_76 = t;
                      {
                        if(((c_76 != NULL) && (c_76 != e_76)))
                          _fail(e_76);
                        else
                          c_76 = e_76;
                        {
                          t = not_null(e_74);
                          {
                            ATerm o_3 (ATerm t)
                            {
                              ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
                              f_76 = t;
                              a_74 :
                              if(match_cons(f_76, sym_App_2))
                                {
                                  g_76 = ATgetArgument(f_76, 0);
                                  h_76 = ATgetArgument(f_76, 1);
                                  {
                                    if(((b_76 != NULL) && (b_76 != g_76)))
                                      _fail(g_76);
                                    else
                                      b_76 = g_76;
                                    {
                                      if(((a_76 != NULL) && (a_76 != h_76)))
                                        _fail(h_76);
                                      else
                                        a_76 = h_76;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_76));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, o_3);
                            {
                              i_76 = t;
                              if(((d_76 != NULL) && (d_76 != i_76)))
                                _fail(i_76);
                              else
                                d_76 = i_76;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_76)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_76))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_76)), not_null(b_76)))));
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
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym_Cong_2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      {
        ATerm g_77 = NULL;
        ATerm k_77 = NULL;
        t = not_null(d_77);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm h_77 = NULL,i_77 = NULL;
            i_77 = t;
            y_76 :
            if(match_cons(i_77, sym_Match_1))
              {
                h_77 = ATgetArgument(i_77, 0);
                t = not_null(h_77);
              }
            else
              {
                if(match_cons(i_77, sym_Id_0))
                  {
                    t = term_d_12;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, p_3);
          {
            k_77 = t;
            if(((g_77 != NULL) && (g_77 != k_77)))
              _fail(k_77);
            else
              g_77 = k_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_77), not_null(g_77)));
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
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
  s_77 = t;
  q_77 :
  if(match_cons(s_77, sym_Scope_2))
    {
      t_77 = ATgetArgument(s_77, 0);
      u_77 = ATgetArgument(s_77, 1);
      r_77 :
      if(((ATgetType(t_77) == AT_LIST) && ATisEmpty(t_77)))
        {
          t = not_null(u_77);
        }
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
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  d_78 :
  if(match_cons(q_78, sym_Where_1))
    {
      r_78 = ATgetArgument(q_78, 0);
      e_78 :
      if(match_cons(r_78, sym_Seq_2))
        {
          p_78 = ATgetArgument(r_78, 0);
          l_78 = ATgetArgument(r_78, 1);
          f_78 :
          if(match_cons(p_78, sym_Where_1))
            {
              k_78 = ATgetArgument(p_78, 0);
              g_78 :
              if(match_cons(l_78, sym_Seq_2))
                {
                  m_78 = ATgetArgument(l_78, 0);
                  o_78 = ATgetArgument(l_78, 1);
                  h_78 :
                  if(match_cons(m_78, sym_Build_1))
                    {
                      n_78 = ATgetArgument(m_78, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_78)), not_null(o_78))));
                    }
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
          if(match_cons(r_78, sym_Where_1))
            {
              p_78 = ATgetArgument(r_78, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_78));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(q_78, sym_Test_1))
        {
          r_78 = ATgetArgument(q_78, 0);
          i_78 :
          if(match_cons(r_78, sym_Test_1))
            {
              p_78 = ATgetArgument(r_78, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_78));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_78, sym_Not_1))
            {
              r_78 = ATgetArgument(q_78, 0);
              j_78 :
              if(match_cons(r_78, sym_Not_1))
                {
                  p_78 = ATgetArgument(r_78, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_78));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_78, sym_LChoice_2))
                {
                  r_78 = ATgetArgument(q_78, 0);
                  s_78 = ATgetArgument(q_78, 1);
                  {
                    if(((r_78 != NULL) && (r_78 != s_78)))
                      _fail(s_78);
                    else
                      r_78 = s_78;
                    t = not_null(r_78);
                  }
                }
              else
                {
                  if(match_cons(q_78, sym_Choice_2))
                    {
                      r_78 = ATgetArgument(q_78, 0);
                      s_78 = ATgetArgument(q_78, 1);
                      {
                        if(((r_78 != NULL) && (r_78 != s_78)))
                          _fail(s_78);
                        else
                          r_78 = s_78;
                        t = not_null(r_78);
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
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  o_79 = t;
  k_79 :
  if(match_cons(o_79, sym_LChoice_2))
    {
      p_79 = ATgetArgument(o_79, 0);
      s_79 = ATgetArgument(o_79, 1);
      l_79 :
      if(match_cons(p_79, sym_LChoice_2))
        {
          q_79 = ATgetArgument(p_79, 0);
          r_79 = ATgetArgument(p_79, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_79), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_79), not_null(s_79)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(o_79, sym_Seq_2))
        {
          p_79 = ATgetArgument(o_79, 0);
          s_79 = ATgetArgument(o_79, 1);
          m_79 :
          if(match_cons(p_79, sym_Seq_2))
            {
              q_79 = ATgetArgument(p_79, 0);
              r_79 = ATgetArgument(p_79, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_79), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_79), not_null(s_79)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_79, sym_Choice_2))
            {
              p_79 = ATgetArgument(o_79, 0);
              s_79 = ATgetArgument(o_79, 1);
              n_79 :
              if(match_cons(p_79, sym_Choice_2))
                {
                  q_79 = ATgetArgument(p_79, 0);
                  r_79 = ATgetArgument(p_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_79), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_79), not_null(s_79)));
                }
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
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  j_82 :
  if(match_cons(q_82, sym_Lets_2))
    {
      r_82 = ATgetArgument(q_82, 0);
      s_82 = ATgetArgument(q_82, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_82), not_null(s_82));
    }
  else
    {
      if(match_cons(q_82, sym_LChoices_1))
        {
          r_82 = ATgetArgument(q_82, 0);
          k_82 :
          if(((ATgetType(r_82) == AT_LIST) && !(ATisEmpty(r_82))))
            {
              n_82 = ATgetFirst((ATermList) r_82);
              o_82 = (ATerm) ATgetNext((ATermList) r_82);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_82), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_82)));
            }
          else
            {
              if(((ATgetType(r_82) == AT_LIST) && ATisEmpty(r_82)))
                {
                  t = term_a_18;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(q_82, sym_Choices_1))
            {
              r_82 = ATgetArgument(q_82, 0);
              l_82 :
              if(((ATgetType(r_82) == AT_LIST) && !(ATisEmpty(r_82))))
                {
                  n_82 = ATgetFirst((ATermList) r_82);
                  o_82 = (ATerm) ATgetNext((ATermList) r_82);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_82), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_82)));
                }
              else
                {
                  if(((ATgetType(r_82) == AT_LIST) && ATisEmpty(r_82)))
                    {
                      t = term_a_18;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(q_82, sym_Seqs_1))
                {
                  r_82 = ATgetArgument(q_82, 0);
                  m_82 :
                  if(((ATgetType(r_82) == AT_LIST) && !(ATisEmpty(r_82))))
                    {
                      n_82 = ATgetFirst((ATermList) r_82);
                      o_82 = (ATerm) ATgetNext((ATermList) r_82);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_82), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_82)));
                    }
                  else
                    {
                      if(((ATgetType(r_82) == AT_LIST) && ATisEmpty(r_82)))
                        {
                          t = term_i_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(q_82, sym_DefaultVarDec_1))
                    {
                      r_82 = ATgetArgument(q_82, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_82), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18));
                    }
                  else
                    {
                      if(match_cons(q_82, sym_InfixApp_3))
                        {
                          r_82 = ATgetArgument(q_82, 0);
                          s_82 = ATgetArgument(q_82, 1);
                          p_82 = ATgetArgument(q_82, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_82), (ATerm) ATmakeAppl(sym_Op_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_82)), not_null(r_82))));
                        }
                      else
                        {
                          if(match_cons(q_82, sym_BAM_3))
                            {
                              r_82 = ATgetArgument(q_82, 0);
                              s_82 = ATgetArgument(q_82, 1);
                              p_82 = ATgetArgument(q_82, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(p_82))), not_null(r_82)), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_82))));
                            }
                          else
                            {
                              if(match_cons(q_82, sym_AM_2))
                                {
                                  r_82 = ATgetArgument(q_82, 0);
                                  s_82 = ATgetArgument(q_82, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_82), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_82)));
                                }
                              else
                                {
                                  if(match_cons(q_82, sym_MA_2))
                                    {
                                      r_82 = ATgetArgument(q_82, 0);
                                      s_82 = ATgetArgument(q_82, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_82)), not_null(s_82));
                                    }
                                  else
                                    {
                                      if(match_cons(q_82, sym_BA_2))
                                        {
                                          r_82 = ATgetArgument(q_82, 0);
                                          s_82 = ATgetArgument(q_82, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_82)), not_null(r_82));
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
  ATerm j_86 = NULL,k_86 = NULL;
  j_86 = t;
  h_86 :
  if(match_cons(j_86, sym_Where_1))
    {
      k_86 = ATgetArgument(j_86, 0);
      i_86 :
      if(match_cons(k_86, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm t_86 = NULL,v_86 = NULL,w_86 = NULL;
  t_86 = t;
  r_86 :
  if(match_cons(t_86, sym_LChoice_2))
    {
      v_86 = ATgetArgument(t_86, 0);
      w_86 = ATgetArgument(t_86, 1);
      s_86 :
      if(match_cons(w_86, sym_Fail_0))
        {
          t = not_null(v_86);
        }
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
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  c_87 :
  if(match_cons(e_87, sym_LChoice_2))
    {
      f_87 = ATgetArgument(e_87, 0);
      g_87 = ATgetArgument(e_87, 1);
      d_87 :
      if(match_cons(f_87, sym_Fail_0))
        {
          t = not_null(g_87);
        }
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
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
  m_87 = t;
  k_87 :
  if(match_cons(m_87, sym_Choice_2))
    {
      n_87 = ATgetArgument(m_87, 0);
      o_87 = ATgetArgument(m_87, 1);
      l_87 :
      if(match_cons(o_87, sym_Fail_0))
        {
          t = not_null(n_87);
        }
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
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  s_87 :
  if(match_cons(u_87, sym_Choice_2))
    {
      v_87 = ATgetArgument(u_87, 0);
      w_87 = ATgetArgument(u_87, 1);
      t_87 :
      if(match_cons(v_87, sym_Fail_0))
        {
          t = not_null(w_87);
        }
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
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  j_88 :
  if(match_cons(k_88, sym_Cong_2))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      {
        t = not_null(m_88);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_88 = NULL;
            r_88 = t;
            i_88 :
            if(!(match_cons(r_88, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_3);
        }
        t = term_a_18;
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
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  y_88 = t;
  w_88 :
  if(match_cons(y_88, sym_Path_2))
    {
      z_88 = ATgetArgument(y_88, 0);
      a_89 = ATgetArgument(y_88, 1);
      x_88 :
      if(match_cons(a_89, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm g_89 = NULL,i_89 = NULL;
  g_89 = t;
  e_89 :
  if(match_cons(g_89, sym_One_1))
    {
      i_89 = ATgetArgument(g_89, 0);
      f_89 :
      if(match_cons(i_89, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm o_89 = NULL,p_89 = NULL;
  o_89 = t;
  m_89 :
  if(match_cons(o_89, sym_Some_1))
    {
      p_89 = ATgetArgument(o_89, 0);
      n_89 :
      if(match_cons(p_89, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  s_89 :
  if(match_cons(u_89, sym_Rec_2))
    {
      v_89 = ATgetArgument(u_89, 0);
      w_89 = ATgetArgument(u_89, 1);
      t_89 :
      if(match_cons(w_89, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm c_90 = NULL,e_90 = NULL,f_90 = NULL;
  c_90 = t;
  a_90 :
  if(match_cons(c_90, sym_Scope_2))
    {
      e_90 = ATgetArgument(c_90, 0);
      f_90 = ATgetArgument(c_90, 1);
      b_90 :
      if(match_cons(f_90, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
  l_90 = t;
  j_90 :
  if(match_cons(l_90, sym_Seq_2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      k_90 :
      if(match_cons(m_90, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm x_90 = NULL,y_90 = NULL;
  x_90 = t;
  v_90 :
  if(match_cons(x_90, sym_Not_1))
    {
      y_90 = ATgetArgument(x_90, 0);
      w_90 :
      if(match_cons(y_90, sym_Fail_0))
        {
          t = term_i_18;
        }
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
  ATerm d_91 = NULL,e_91 = NULL;
  d_91 = t;
  b_91 :
  if(match_cons(d_91, sym_Test_1))
    {
      e_91 = ATgetArgument(d_91, 0);
      c_91 :
      if(match_cons(e_91, sym_Fail_0))
        {
          t = term_a_18;
        }
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
  ATerm q_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = q_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm f_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
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
                        t = F5_0(t);
                        LocalPopChoice(i_19);
                      }
                    else
                      {
                        t = h_19;
                        {
                          ATerm j_19 = t;
                          int k_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(k_19);
                            }
                          else
                            {
                              t = j_19;
                              {
                                ATerm l_19 = t;
                                int m_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(m_19);
                                  }
                                else
                                  {
                                    t = l_19;
                                    {
                                      ATerm n_19 = t;
                                      int o_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(o_19);
                                        }
                                      else
                                        {
                                          t = n_19;
                                          {
                                            ATerm u_19 = t;
                                            int v_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(v_19);
                                              }
                                            else
                                              {
                                                t = u_19;
                                                {
                                                  ATerm w_19 = t;
                                                  int y_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(y_19);
                                                    }
                                                  else
                                                    {
                                                      t = w_19;
                                                      {
                                                        ATerm a_20 = t;
                                                        int b_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(d_20);
                                                                }
                                                              else
                                                                {
                                                                  t = c_20;
                                                                  {
                                                                    ATerm e_20 = t;
                                                                    int f_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(f_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_20;
                                                                        {
                                                                          ATerm g_20 = t;
                                                                          int h_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(h_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_20;
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
  ATerm k_91 = NULL,l_91 = NULL;
  k_91 = t;
  i_91 :
  if(match_cons(k_91, sym_Match_1))
    {
      l_91 = ATgetArgument(k_91, 0);
      j_91 :
      if(match_cons(l_91, sym_Wld_0))
        {
          t = term_i_18;
        }
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
  ATerm q_91 = NULL,u_91 = NULL;
  q_91 = t;
  o_91 :
  if(match_cons(q_91, sym_Where_1))
    {
      u_91 = ATgetArgument(q_91, 0);
      p_91 :
      if(match_cons(u_91, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm z_91 = NULL,a_92 = NULL;
  z_91 = t;
  x_91 :
  if(match_cons(z_91, sym_All_1))
    {
      a_92 = ATgetArgument(z_91, 0);
      y_91 :
      if(match_cons(a_92, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  d_92 :
  if(match_cons(f_92, sym_Rec_2))
    {
      g_92 = ATgetArgument(f_92, 0);
      h_92 = ATgetArgument(f_92, 1);
      e_92 :
      if(match_cons(h_92, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  l_92 :
  if(match_cons(n_92, sym_Scope_2))
    {
      o_92 = ATgetArgument(n_92, 0);
      p_92 = ATgetArgument(n_92, 1);
      m_92 :
      if(match_cons(p_92, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
  v_92 = t;
  t_92 :
  if(match_cons(v_92, sym_LChoice_2))
    {
      w_92 = ATgetArgument(v_92, 0);
      x_92 = ATgetArgument(v_92, 1);
      u_92 :
      if(match_cons(w_92, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  d_93 = t;
  b_93 :
  if(match_cons(d_93, sym_Seq_2))
    {
      e_93 = ATgetArgument(d_93, 0);
      f_93 = ATgetArgument(d_93, 1);
      c_93 :
      if(match_cons(f_93, sym_Id_0))
        {
          t = not_null(e_93);
        }
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
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  j_93 :
  if(match_cons(l_93, sym_Seq_2))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      k_93 :
      if(match_cons(m_93, sym_Id_0))
        {
          t = not_null(n_93);
        }
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
  ATerm t_93 = NULL,u_93 = NULL;
  t_93 = t;
  r_93 :
  if(match_cons(t_93, sym_Not_1))
    {
      u_93 = ATgetArgument(t_93, 0);
      s_93 :
      if(match_cons(u_93, sym_Id_0))
        {
          t = term_a_18;
        }
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
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  x_93 :
  if(match_cons(z_93, sym_Test_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      y_93 :
      if(match_cons(a_94, sym_Id_0))
        {
          t = term_i_18;
        }
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
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
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
                        t = I4_0(t);
                        LocalPopChoice(d_21);
                      }
                    else
                      {
                        t = c_21;
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm g_21 = t;
                                int o_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(o_21);
                                  }
                                else
                                  {
                                    t = g_21;
                                    {
                                      ATerm p_21 = t;
                                      int q_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(q_21);
                                        }
                                      else
                                        {
                                          t = p_21;
                                          {
                                            ATerm r_21 = t;
                                            int c_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(c_22);
                                              }
                                            else
                                              {
                                                t = r_21;
                                                {
                                                  ATerm e_22 = t;
                                                  int f_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(f_22);
                                                    }
                                                  else
                                                    {
                                                      t = e_22;
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
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = g_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm o_22 = t;
              int p_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(p_22);
                }
              else
                {
                  t = o_22;
                  {
                    ATerm u_22 = t;
                    int v_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(v_22);
                      }
                    else
                      {
                        t = u_22;
                        {
                          ATerm x_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = x_22;
                              {
                                ATerm z_22 = t;
                                int b_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(b_23);
                                  }
                                else
                                  {
                                    t = z_22;
                                    {
                                      ATerm d_23 = t;
                                      int e_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(e_23);
                                        }
                                      else
                                        {
                                          t = d_23;
                                          {
                                            ATerm i_23 = t;
                                            int j_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(j_23);
                                              }
                                            else
                                              {
                                                t = i_23;
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
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  r_95 = t;
  z_94 :
  if(match_cons(r_95, sym_LChoice_2))
    {
      s_95 = ATgetArgument(r_95, 0);
      z_95 = ATgetArgument(r_95, 1);
      a_95 :
      if(match_cons(s_95, sym_Matrix_2))
        {
          t_95 = ATgetArgument(s_95, 0);
          u_95 = ATgetArgument(s_95, 1);
          b_95 :
          if(match_cons(z_95, sym_Choice_2))
            {
              p_95 = ATgetArgument(z_95, 0);
              q_95 = ATgetArgument(z_95, 1);
              c_95 :
              if(match_cons(p_95, sym_Matrix_2))
                {
                  n_95 = ATgetArgument(p_95, 0);
                  o_95 = ATgetArgument(p_95, 1);
                  {
                    ATerm f_96 = NULL,h_96 = NULL;
                    ATerm k_23;
                    k_23 = t;
                    {
                      ATerm g_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(n_95));
                      {
                        t = union_1(t, eq_0);
                        {
                          g_96 = t;
                          if(((f_96 != NULL) && (f_96 != g_96)))
                            _fail(g_96);
                          else
                            f_96 = g_96;
                        }
                      }
                    }
                    t = k_23;
                    {
                      ATerm i_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(o_95));
                      {
                        ATerm l_23 = t;
                        int p_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(p_23);
                          }
                        else
                          {
                            t = l_23;
                            t = conc_more_lists_0(t);
                          }
                        {
                          i_96 = t;
                          if(((h_96 != NULL) && (h_96 != i_96)))
                            _fail(i_96);
                          else
                            h_96 = i_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_96), not_null(h_96)), not_null(q_95));
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
              if(match_cons(z_95, sym_LChoice_2))
                {
                  p_95 = ATgetArgument(z_95, 0);
                  q_95 = ATgetArgument(z_95, 1);
                  d_95 :
                  if(match_cons(p_95, sym_Matrix_2))
                    {
                      n_95 = ATgetArgument(p_95, 0);
                      o_95 = ATgetArgument(p_95, 1);
                      {
                        ATerm o_96 = NULL,q_96 = NULL;
                        ATerm q_23;
                        q_23 = t;
                        {
                          ATerm p_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(n_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              p_96 = t;
                              if(((o_96 != NULL) && (o_96 != p_96)))
                                _fail(p_96);
                              else
                                o_96 = p_96;
                            }
                          }
                        }
                        t = q_23;
                        {
                          ATerm r_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(o_95));
                          {
                            ATerm u_23 = t;
                            int x_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(x_23);
                              }
                            else
                              {
                                t = u_23;
                                t = conc_more_lists_0(t);
                              }
                            {
                              r_96 = t;
                              if(((q_96 != NULL) && (q_96 != r_96)))
                                _fail(r_96);
                              else
                                q_96 = r_96;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(o_96), not_null(q_96)), not_null(q_95));
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
                  if(match_cons(z_95, sym_Matrix_2))
                    {
                      p_95 = ATgetArgument(z_95, 0);
                      q_95 = ATgetArgument(z_95, 1);
                      {
                        ATerm w_96 = NULL,y_96 = NULL;
                        ATerm y_23;
                        y_23 = t;
                        {
                          ATerm x_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(p_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              x_96 = t;
                              if(((w_96 != NULL) && (w_96 != x_96)))
                                _fail(x_96);
                              else
                                w_96 = x_96;
                            }
                          }
                        }
                        t = y_23;
                        {
                          ATerm z_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(q_95));
                          {
                            ATerm z_23 = t;
                            int a_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(a_24);
                              }
                            else
                              {
                                t = z_23;
                                t = conc_more_lists_0(t);
                              }
                            {
                              z_96 = t;
                              if(((y_96 != NULL) && (y_96 != z_96)))
                                _fail(z_96);
                              else
                                y_96 = z_96;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_96), not_null(y_96));
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
      if(match_cons(r_95, sym_Choice_2))
        {
          s_95 = ATgetArgument(r_95, 0);
          z_95 = ATgetArgument(r_95, 1);
          e_95 :
          if(match_cons(s_95, sym_Matrix_2))
            {
              t_95 = ATgetArgument(s_95, 0);
              u_95 = ATgetArgument(s_95, 1);
              f_95 :
              if(match_cons(z_95, sym_LChoice_2))
                {
                  p_95 = ATgetArgument(z_95, 0);
                  q_95 = ATgetArgument(z_95, 1);
                  g_95 :
                  if(match_cons(p_95, sym_Matrix_2))
                    {
                      n_95 = ATgetArgument(p_95, 0);
                      o_95 = ATgetArgument(p_95, 1);
                      {
                        ATerm f_97 = NULL,h_97 = NULL;
                        ATerm b_24;
                        b_24 = t;
                        {
                          ATerm g_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(n_95));
                          {
                            t = union_1(t, eq_0);
                            {
                              g_97 = t;
                              if(((f_97 != NULL) && (f_97 != g_97)))
                                _fail(g_97);
                              else
                                f_97 = g_97;
                            }
                          }
                        }
                        t = b_24;
                        {
                          ATerm i_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(o_95));
                          {
                            ATerm c_24 = t;
                            int d_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(d_24);
                              }
                            else
                              {
                                t = c_24;
                                t = conc_more_lists_0(t);
                              }
                            {
                              i_97 = t;
                              if(((h_97 != NULL) && (h_97 != i_97)))
                                _fail(i_97);
                              else
                                h_97 = i_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_97), not_null(h_97)), not_null(q_95));
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
                  if(match_cons(z_95, sym_Choice_2))
                    {
                      p_95 = ATgetArgument(z_95, 0);
                      q_95 = ATgetArgument(z_95, 1);
                      h_95 :
                      if(match_cons(p_95, sym_Matrix_2))
                        {
                          n_95 = ATgetArgument(p_95, 0);
                          o_95 = ATgetArgument(p_95, 1);
                          {
                            ATerm o_97 = NULL,q_97 = NULL;
                            ATerm e_24;
                            e_24 = t;
                            {
                              ATerm p_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(n_95));
                              {
                                t = union_1(t, eq_0);
                                {
                                  p_97 = t;
                                  if(((o_97 != NULL) && (o_97 != p_97)))
                                    _fail(p_97);
                                  else
                                    o_97 = p_97;
                                }
                              }
                            }
                            t = e_24;
                            {
                              ATerm r_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(o_95));
                              {
                                ATerm f_24 = t;
                                int k_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = conc_two_lists_0(t);
                                    LocalPopChoice(k_24);
                                  }
                                else
                                  {
                                    t = f_24;
                                    t = conc_more_lists_0(t);
                                  }
                                {
                                  r_97 = t;
                                  if(((q_97 != NULL) && (q_97 != r_97)))
                                    _fail(r_97);
                                  else
                                    q_97 = r_97;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(o_97), not_null(q_97)), not_null(q_95));
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
                      if(match_cons(z_95, sym_Matrix_2))
                        {
                          p_95 = ATgetArgument(z_95, 0);
                          q_95 = ATgetArgument(z_95, 1);
                          {
                            ATerm y_97 = NULL,a_98 = NULL;
                            ATerm l_24;
                            l_24 = t;
                            {
                              ATerm z_97 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(p_95));
                              {
                                t = union_1(t, eq_0);
                                {
                                  z_97 = t;
                                  if(((y_97 != NULL) && (y_97 != z_97)))
                                    _fail(z_97);
                                  else
                                    y_97 = z_97;
                                }
                              }
                            }
                            t = l_24;
                            {
                              ATerm b_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_95), not_null(q_95));
                              {
                                ATerm m_24 = t;
                                int q_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = conc_two_lists_0(t);
                                    LocalPopChoice(q_24);
                                  }
                                else
                                  {
                                    t = m_24;
                                    t = conc_more_lists_0(t);
                                  }
                                {
                                  b_98 = t;
                                  if(((a_98 != NULL) && (a_98 != b_98)))
                                    _fail(b_98);
                                  else
                                    a_98 = b_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(y_97), not_null(a_98));
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
          if(match_cons(r_95, sym_Scope_2))
            {
              s_95 = ATgetArgument(r_95, 0);
              z_95 = ATgetArgument(r_95, 1);
              i_95 :
              if(match_cons(z_95, sym_Matrix_2))
                {
                  p_95 = ATgetArgument(z_95, 0);
                  q_95 = ATgetArgument(z_95, 1);
                  {
                    ATerm f_98 = NULL;
                    ATerm o_98 = NULL;
                    t = not_null(q_95);
                    {
                      ATerm r_3 (ATerm t)
                      {
                        ATerm g_98 = NULL,j_98 = NULL,l_98 = NULL;
                        g_98 = t;
                        x_94 :
                        if(match_cons(g_98, sym_Row_2))
                          {
                            j_98 = ATgetArgument(g_98, 0);
                            l_98 = ATgetArgument(g_98, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(j_98), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_95), not_null(l_98)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, r_3);
                      {
                        o_98 = t;
                        if(((f_98 != NULL) && (f_98 != o_98)))
                          _fail(o_98);
                        else
                          f_98 = o_98;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(p_95), not_null(f_98));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(r_95, sym_Seq_2))
                {
                  s_95 = ATgetArgument(r_95, 0);
                  z_95 = ATgetArgument(r_95, 1);
                  j_95 :
                  if(match_cons(s_95, sym_Matrix_2))
                    {
                      t_95 = ATgetArgument(s_95, 0);
                      u_95 = ATgetArgument(s_95, 1);
                      k_95 :
                      if(((ATgetType(u_95) == AT_LIST) && !(ATisEmpty(u_95))))
                        {
                          v_95 = ATgetFirst((ATermList) u_95);
                          y_95 = (ATerm) ATgetNext((ATermList) u_95);
                          l_95 :
                          if(match_cons(v_95, sym_Row_2))
                            {
                              w_95 = ATgetArgument(v_95, 0);
                              x_95 = ATgetArgument(v_95, 1);
                              m_95 :
                              if(((ATgetType(y_95) == AT_LIST) && ATisEmpty(y_95)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(t_95), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(w_95), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_95), not_null(z_95)))));
                                }
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
ATerm foldr_3 (ATerm t, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm))
{
  ATerm s_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_110(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = s_24;
      {
        ATerm b_100 = NULL,c_100 = NULL,e_100 = NULL;
        b_100 = t;
        a_100 :
        if(((ATgetType(b_100) == AT_LIST) && !(ATisEmpty(b_100))))
          {
            c_100 = ATgetFirst((ATermList) b_100);
            e_100 = (ATerm) ATgetNext((ATermList) b_100);
            {
              ATerm j_100 = NULL,l_100 = NULL;
              ATerm w_24;
              w_24 = t;
              {
                ATerm k_100 = NULL;
                t = not_null(c_100);
                {
                  t = b_111(t);
                  {
                    k_100 = t;
                    if(((j_100 != NULL) && (j_100 != k_100)))
                      _fail(k_100);
                    else
                      j_100 = k_100;
                  }
                }
              }
              t = w_24;
              {
                ATerm m_100 = NULL;
                t = not_null(e_100);
                {
                  t = foldr_3(t, z_110, a_111, b_111);
                  {
                    m_100 = t;
                    if(((l_100 != NULL) && (l_100 != m_100)))
                      _fail(m_100);
                    else
                      l_100 = m_100;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_100), not_null(l_100));
                  t = a_111(t);
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
ATerm crush_3 (ATerm t, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm))
{
  ATerm u_100 = NULL;
  ATerm w_100 = NULL;
  u_100 = t;
  {
    ATerm x_100 = NULL;
    ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
    t = not_null(u_100);
    {
      x_100 = t;
      {
        t = SSL_explode_term(not_null(x_100));
        {
          z_100 = t;
          t_100 :
          if(match_cons(z_100, sym__2))
            {
              a_101 = ATgetArgument(z_100, 0);
              b_101 = ATgetArgument(z_100, 1);
              if(((w_100 != NULL) && (w_100 != b_101)))
                _fail(b_101);
              else
                w_100 = b_101;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_100);
      t = foldr_3(t, x_109, y_109, z_109);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm i_101 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_101 = NULL;
        ATerm h_101 = NULL;
        t = w_108(t);
        {
          h_101 = t;
          if(((g_101 != NULL) && (g_101 != h_101)))
            _fail(h_101);
          else
            g_101 = h_101;
        }
        t = (ATerm) ATinsert(ATempty, not_null(g_101));
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm s_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm t_3 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, s_3, t_3, i_101);
        }
      }
    return(t);
  }
  t = i_101(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm y_108 (ATerm))
{
  t = collect_om_1(t, y_108);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm m_101 = NULL,n_101 = NULL;
    m_101 = t;
    l_101 :
    if(match_cons(m_101, sym_Off_1))
      {
        n_101 = ATgetArgument(m_101, 0);
        t = not_null(n_101);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_om_1(t, u_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  z_101 = t;
  s_101 :
  if(match_cons(z_101, sym_As_2))
    {
      a_102 = ATgetArgument(z_101, 0);
      c_102 = ATgetArgument(z_101, 1);
      t_101 :
      if(match_cons(a_102, sym_Var_1))
        {
          b_102 = ATgetArgument(a_102, 0);
          u_101 :
          if(match_cons(c_102, sym_As_2))
            {
              d_102 = ATgetArgument(c_102, 0);
              y_101 = ATgetArgument(c_102, 1);
              v_101 :
              if(match_cons(d_102, sym_Off_1))
                {
                  x_101 = ATgetArgument(d_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_101))));
                }
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
          if(match_cons(a_102, sym_Off_1))
            {
              b_102 = ATgetArgument(a_102, 0);
              w_101 :
              if(match_cons(c_102, sym_Var_1))
                {
                  d_102 = ATgetArgument(c_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_102))));
                }
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
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL;
  u_102 = t;
  n_102 :
  if(match_cons(u_102, sym_As_2))
    {
      v_102 = ATgetArgument(u_102, 0);
      x_102 = ATgetArgument(u_102, 1);
      o_102 :
      if(match_cons(v_102, sym_Var_1))
        {
          w_102 = ATgetArgument(v_102, 0);
          p_102 :
          if(match_cons(x_102, sym_As_2))
            {
              y_102 = ATgetArgument(x_102, 0);
              t_102 = ATgetArgument(x_102, 1);
              q_102 :
              if(match_cons(y_102, sym_Off_1))
                {
                  s_102 = ATgetArgument(y_102, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(s_102)), not_null(t_102));
                }
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
          if(match_cons(v_102, sym_Off_1))
            {
              w_102 = ATgetArgument(v_102, 0);
              r_102 :
              if(match_cons(x_102, sym_Var_1))
                {
                  y_102 = ATgetArgument(x_102, 0);
                  {
                    t = not_null(w_102);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(w_102)), term_d_12);
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
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym__2))
    {
      k_103 = ATgetArgument(j_103, 0);
      l_103 = ATgetArgument(j_103, 1);
      if(((k_103 != NULL) && (k_103 != l_103)))
        _fail(l_103);
      else
        k_103 = l_103;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm t_103 = NULL,u_103 = NULL,x_103 = NULL;
  t_103 = t;
  q_103 :
  if(((ATgetType(t_103) == AT_LIST) && !(ATisEmpty(t_103))))
    {
      u_103 = ATgetFirst((ATermList) t_103);
      x_103 = (ATerm) ATgetNext((ATermList) t_103);
      {
        t = l_110(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm a_104 = NULL;
            a_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_103), not_null(a_104));
              t = k_110(t);
            }
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        t = not_null(x_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_110 (ATerm))
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
  g_104 = t;
  f_104 :
  if(match_cons(g_104, sym__2))
    {
      h_104 = ATgetArgument(g_104, 0);
      i_104 = ATgetArgument(g_104, 1);
      {
        t = not_null(h_104);
        {
          ATerm m_104 (ATerm t)
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_104);
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
                {
                  ATerm b_25 = t;
                  int c_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(i_104);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_110, w_3);
                      t = m_104(t);
                      LocalPopChoice(c_25);
                    }
                  else
                    {
                      t = b_25;
                      t = Cons_2(t, _id, m_104);
                    }
                }
              }
            return(t);
          }
          t = m_104(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = union_1(t, i_110);
    return(t);
  }
  t = foldr_2(t, x_3, y_3);
  return(t);
}
ATerm unions_0 (ATerm t)
{
  t = unions_1(t, eq_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL;
  r_104 = t;
  o_104 :
  if(match_cons(r_104, sym__2))
    {
      s_104 = ATgetArgument(r_104, 0);
      b_105 = ATgetArgument(r_104, 1);
      p_104 :
      if(match_cons(s_104, sym__2))
        {
          t_104 = ATgetArgument(s_104, 0);
          u_104 = ATgetArgument(s_104, 1);
          q_104 :
          if(match_cons(b_105, sym__2))
            {
              c_105 = ATgetArgument(b_105, 0);
              d_105 = ATgetArgument(b_105, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_105)), not_null(t_104)), (ATerm) ATinsert(CheckATermList(not_null(d_105)), not_null(u_104)));
            }
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
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
  o_105 = t;
  n_105 :
  if(((ATgetType(o_105) == AT_LIST) && !(ATisEmpty(o_105))))
    {
      p_105 = ATgetFirst((ATermList) o_105);
      q_105 = (ATerm) ATgetNext((ATermList) o_105);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_105), not_null(q_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_105 = NULL;
  w_105 = t;
  v_105 :
  if(((ATgetType(w_105) == AT_LIST) && ATisEmpty(w_105)))
    {
      t = term_d_25;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm f_105 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, f_105);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm i_108 (ATerm), ATerm j_108 (ATerm))
{
  ATerm r_106 = NULL;
  ATerm w_106 = NULL,x_106 = NULL,f_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,z_107 = NULL;
  r_106 = t;
  {
    ATerm e_25;
    e_25 = t;
    {
      ATerm a_107 = NULL;
      ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL;
      t = not_null(r_106);
      {
        a_107 = t;
        {
          t = SSL_explode_term(not_null(a_107));
          {
            c_107 = t;
            b_106 :
            if(match_cons(c_107, sym__2))
              {
                d_107 = ATgetArgument(c_107, 0);
                e_107 = ATgetArgument(c_107, 1);
                {
                  if(((w_106 != NULL) && (w_106 != d_107)))
                    _fail(d_107);
                  else
                    w_106 = d_107;
                  if(((x_106 != NULL) && (x_106 != e_107)))
                    _fail(e_107);
                  else
                    x_106 = e_107;
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
    t = e_25;
    {
      ATerm f_25;
      f_25 = t;
      {
        ATerm g_107 = NULL;
        t = SSLgetAnnotations(not_null(r_106));
        {
          g_107 = t;
          if(((f_107 != NULL) && (f_107 != g_107)))
            _fail(g_107);
          else
            f_107 = g_107;
        }
      }
      t = f_25;
      {
        ATerm g_25;
        g_25 = t;
        {
          ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
          t = not_null(x_106);
          {
            t = unzip_1(t, i_108);
            {
              l_107 = t;
              o_106 :
              if(match_cons(l_107, sym__2))
                {
                  m_107 = ATgetArgument(l_107, 0);
                  n_107 = ATgetArgument(l_107, 1);
                  {
                    ATerm o_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL;
                    if(((i_107 != NULL) && (i_107 != m_107)))
                      _fail(m_107);
                    else
                      i_107 = m_107;
                    {
                      if(((h_107 != NULL) && (h_107 != n_107)))
                        _fail(n_107);
                      else
                        h_107 = n_107;
                      {
                        ATerm p_107 = NULL,v_107 = NULL;
                        ATerm h_25;
                        h_25 = t;
                        {
                          ATerm s_107 = NULL;
                          ATerm u_107 = NULL;
                          t = SSL_mkterm(not_null(w_106), not_null(i_107));
                          {
                            s_107 = t;
                            {
                              u_107 = t;
                              if(((p_107 != NULL) && (p_107 != u_107)))
                                _fail(u_107);
                              else
                                p_107 = u_107;
                            }
                          }
                        }
                        t = h_25;
                        {
                          t = SSLsetAnnotations(not_null(p_107), not_null(f_107));
                          {
                            v_107 = t;
                            if(((o_107 != NULL) && (o_107 != v_107)))
                              _fail(v_107);
                            else
                              o_107 = v_107;
                          }
                        }
                        {
                          t = not_null(o_107);
                          {
                            t = j_108(t);
                            {
                              w_107 = t;
                              n_106 :
                              if(match_cons(w_107, sym__2))
                                {
                                  x_107 = ATgetArgument(w_107, 0);
                                  y_107 = ATgetArgument(w_107, 1);
                                  {
                                    if(((j_107 != NULL) && (j_107 != x_107)))
                                      _fail(x_107);
                                    else
                                      j_107 = x_107;
                                    if(((k_107 != NULL) && (k_107 != y_107)))
                                      _fail(y_107);
                                    else
                                      k_107 = y_107;
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
        t = g_25;
        {
          ATerm a_108 = NULL,c_108 = NULL;
          ATerm b_108 = NULL;
          t = not_null(h_107);
          {
            t = unions_1(t, eq_0);
            {
              b_108 = t;
              if(((a_108 != NULL) && (a_108 != b_108)))
                _fail(b_108);
              else
                a_108 = b_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_107), not_null(a_108));
            {
              t = union_1(t, eq_0);
              {
                c_108 = t;
                if(((z_107 != NULL) && (z_107 != c_108)))
                  _fail(c_108);
                else
                  z_107 = c_108;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_107), not_null(z_107));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm n_109 (ATerm), ATerm o_109 (ATerm))
{
  ATerm z_108 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      ATerm s_108 = NULL,u_108 = NULL;
      ATerm l_25;
      l_25 = t;
      {
        ATerm t_108 = NULL;
        ATerm m_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_109(t);
            LocalPopChoice(q_25);
          }
        else
          {
            t = m_25;
            {
            }
          }
        {
          t_108 = t;
          if(((s_108 != NULL) && (s_108 != t_108)))
            _fail(t_108);
          else
            s_108 = t_108;
        }
      }
      t = l_25;
      {
        ATerm v_108 = NULL;
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_109(t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = (ATerm) ATempty;
          }
        {
          v_108 = t;
          if(((u_108 != NULL) && (u_108 != v_108)))
            _fail(v_108);
          else
            u_108 = v_108;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_108), not_null(u_108));
      }
      return(t);
    }
    t = CollectSplit_2(t, z_108, z_3);
    return(t);
  }
  t = z_108(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL;
  f_109 = t;
  e_109 :
  if(match_cons(f_109, sym__2))
    {
      g_109 = ATgetArgument(f_109, 0);
      h_109 = ATgetArgument(f_109, 1);
      {
        ATerm k_109 = NULL;
        ATerm l_109 = NULL;
        t = i_98(t);
        {
          l_109 = t;
          if(((k_109 != NULL) && (k_109 != l_109)))
            _fail(l_109);
          else
            k_109 = l_109;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(k_109)), not_null(g_109))), not_null(h_109));
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
  ATerm t_109 = NULL,u_109 = NULL,a_110 = NULL;
  t_109 = t;
  s_109 :
  if(match_cons(t_109, sym__2))
    {
      u_109 = ATgetArgument(t_109, 0);
      a_110 = ATgetArgument(t_109, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_110)), not_null(u_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  q_110 = t;
  o_110 :
  if(match_cons(q_110, sym__2))
    {
      r_110 = ATgetArgument(q_110, 0);
      s_110 = ATgetArgument(q_110, 1);
      p_110 :
      if(((ATgetType(s_110) == AT_LIST) && !(ATisEmpty(s_110))))
        {
          t_110 = ATgetFirst((ATermList) s_110);
          u_110 = (ATerm) ATgetNext((ATermList) s_110);
          {
            ATerm d_111 = NULL;
            ATerm e_111 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_110), term_v_12);
            {
              t = add_0(t);
              {
                e_111 = t;
                if(((d_111 != NULL) && (d_111 != e_111)))
                  _fail(e_111);
                else
                  d_111 = e_111;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_110), not_null(t_110)), (ATerm) ATmakeAppl(sym__2, not_null(d_111), not_null(u_110)));
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
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL;
  k_111 = t;
  i_111 :
  if(match_cons(k_111, sym__2))
    {
      l_111 = ATgetArgument(k_111, 0);
      m_111 = ATgetArgument(k_111, 1);
      j_111 :
      if(((ATgetType(m_111) == AT_LIST) && ATisEmpty(m_111)))
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
ATerm genzip_4 (ATerm t, ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm))
{
  ATerm p_111 (ATerm t)
  {
    ATerm y_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = y_25;
        {
          t = w_104(t);
          {
            t = _2(t, y_104, p_111);
            t = x_104(t);
          }
        }
      }
    return(t);
  }
  t = p_111(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm r_111 = NULL;
  r_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(r_111));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm g_105 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, g_105);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  ATerm j_113 (ATerm t)
  {
    ATerm u_112 = NULL;
    ATerm v_112 = NULL;
    t = not_null(i_112);
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = not_null(h_112);
          return(t);
        }
        t = Annotate_1(t, b_4);
        return(t);
      }
      t = nzip0_1(t, a_4);
      {
        v_112 = t;
        if(((u_112 != NULL) && (u_112 != v_112)))
          _fail(v_112);
        else
          u_112 = v_112;
      }
    }
    t = not_null(u_112);
    return(t);
  }
  ATerm k_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_112)), term_d_12);
    return(t);
  }
  ATerm l_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_112)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_112)), not_null(k_112)));
    return(t);
  }
  ATerm m_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_112)), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_112), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_112)), not_null(k_112))));
    return(t);
  }
  f_112 = t;
  z_111 :
  if(match_cons(f_112, sym_As_2))
    {
      g_112 = ATgetArgument(f_112, 0);
      i_112 = ATgetArgument(f_112, 1);
      b_112 :
      if(match_cons(g_112, sym_Off_1))
        {
          h_112 = ATgetArgument(g_112, 0);
          c_112 :
          if(match_cons(i_112, sym_BuildDefault_1))
            {
              j_112 = ATgetArgument(i_112, 0);
              {
                ATerm c_26 = t;
                int d_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_113(t);
                    LocalPopChoice(d_26);
                  }
                else
                  {
                    t = c_26;
                    t = k_113(t);
                  }
              }
            }
          else
            {
              if(match_cons(i_112, sym_As_2))
                {
                  j_112 = ATgetArgument(i_112, 0);
                  k_112 = ATgetArgument(i_112, 1);
                  d_112 :
                  if(match_cons(j_112, sym_Var_1))
                    {
                      e_112 = ATgetArgument(j_112, 0);
                      {
                        ATerm e_26 = t;
                        int f_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_113(t);
                            LocalPopChoice(f_26);
                          }
                        else
                          {
                            t = e_26;
                            t = l_113(t);
                          }
                      }
                    }
                  else
                    {
                      t = j_113(t);
                    }
                }
              else
                {
                  if(match_cons(i_112, sym_Op_2))
                    {
                      j_112 = ATgetArgument(i_112, 0);
                      k_112 = ATgetArgument(i_112, 1);
                      {
                        ATerm g_26 = t;
                        int h_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_113(t);
                            LocalPopChoice(h_26);
                          }
                        else
                          {
                            t = g_26;
                            t = m_113(t);
                          }
                      }
                    }
                  else
                    {
                      t = j_113(t);
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
ATerm topdown_1 (ATerm t, ATerm d_100 (ATerm))
{
  t = d_100(t);
  {
    ATerm c_4 (ATerm t)
    {
      t = topdown_1(t, d_100);
      return(t);
    }
    t = _all(t, c_4);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm s_113 = NULL;
  ATerm u_113 = NULL,w_113 = NULL,x_113 = NULL;
  s_113 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_i_26, (ATerm) ATinsert(ATempty, not_null(s_113)));
    {
      ATerm d_4 (ATerm t)
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Propagate_0(t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, d_4);
      {
        t = collect_substitutions_0(t);
        {
          u_113 = t;
          r_113 :
          if(match_cons(u_113, sym__2))
            {
              w_113 = ATgetArgument(u_113, 0);
              x_113 = ATgetArgument(u_113, 1);
              {
                ATerm a_114 = NULL;
                ATerm b_114 = NULL;
                t = not_null(w_113);
                {
                  t = collect_offsets_0(t);
                  {
                    b_114 = t;
                    if(((a_114 != NULL) && (a_114 != b_114)))
                      _fail(b_114);
                    else
                      a_114 = b_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(a_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(w_113), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_113)))));
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
  ATerm h_114 = NULL,i_114 = NULL;
  h_114 = t;
  g_114 :
  if(match_cons(h_114, sym_Match_1))
    {
      i_114 = ATgetArgument(h_114, 0);
      {
        t = not_null(i_114);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm d_116 (ATerm), ATerm e_116 (ATerm))
{
  ATerm l_114 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        t = l_114(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = e_116(t);
      }
    return(t);
  }
  t = l_114(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_116 (ATerm))
{
  t = repeat_2(t, g_116, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm f_100 (ATerm))
{
  ATerm m_114 (ATerm t)
  {
    t = f_100(t);
    {
      t = _all(t, m_114);
      t = f_100(t);
    }
    return(t);
  }
  t = m_114(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          {
            ATerm p_26 = t;
            int q_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(q_26);
              }
            else
              {
                t = p_26;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_2(t, h_4, _id);
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
ATerm SDef_3 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym_SDef_3))
    {
      z_114 = ATgetArgument(y_114, 0);
      a_115 = ATgetArgument(y_114, 1);
      b_115 = ATgetArgument(y_114, 2);
      {
        ATerm g_115 = NULL,i_115 = NULL;
        ATerm h_115 = NULL;
        t = SSLgetAnnotations(not_null(y_114));
        {
          h_115 = t;
          if(((g_115 != NULL) && (g_115 != h_115)))
            _fail(h_115);
          else
            g_115 = h_115;
        }
        {
          t = not_null(z_114);
          {
            ATerm k_115 = NULL;
            t = d_88(t);
            {
              i_115 = t;
              {
                t = not_null(a_115);
                {
                  ATerm m_115 = NULL;
                  t = e_88(t);
                  {
                    k_115 = t;
                    {
                      t = not_null(b_115);
                      {
                        ATerm o_115 = NULL;
                        t = f_88(t);
                        {
                          m_115 = t;
                          {
                            ATerm p_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(i_115), not_null(k_115), not_null(m_115)), not_null(g_115));
                            {
                              p_115 = t;
                              if(((o_115 != NULL) && (o_115 != p_115)))
                                _fail(p_115);
                              else
                                o_115 = p_115;
                            }
                            t = not_null(o_115);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm c_116 = NULL,h_116 = NULL;
  c_116 = t;
  b_116 :
  if(match_cons(c_116, sym_Strategies_1))
    {
      h_116 = ATgetArgument(c_116, 0);
      {
        ATerm k_116 = NULL,m_116 = NULL;
        ATerm l_116 = NULL;
        t = SSLgetAnnotations(not_null(c_116));
        {
          l_116 = t;
          if(((k_116 != NULL) && (k_116 != l_116)))
            _fail(l_116);
          else
            k_116 = l_116;
        }
        {
          t = not_null(h_116);
          {
            ATerm o_116 = NULL;
            t = h_89(t);
            {
              m_116 = t;
              {
                ATerm p_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_116)), not_null(k_116));
                {
                  p_116 = t;
                  if(((o_116 != NULL) && (o_116 != p_116)))
                    _fail(p_116);
                  else
                    o_116 = p_116;
                }
                t = not_null(o_116);
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
ATerm Specification_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm f_117 = NULL,g_117 = NULL;
  f_117 = t;
  e_117 :
  if(match_cons(f_117, sym_Specification_1))
    {
      g_117 = ATgetArgument(f_117, 0);
      {
        ATerm j_117 = NULL,l_117 = NULL;
        ATerm k_117 = NULL;
        t = SSLgetAnnotations(not_null(f_117));
        {
          k_117 = t;
          if(((j_117 != NULL) && (j_117 != k_117)))
            _fail(k_117);
          else
            j_117 = k_117;
        }
        {
          t = not_null(g_117);
          {
            ATerm n_117 = NULL;
            t = j_89(t);
            {
              l_117 = t;
              {
                ATerm o_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(l_117)), not_null(j_117));
                {
                  o_117 = t;
                  if(((n_117 != NULL) && (n_117 != o_117)))
                    _fail(o_117);
                  else
                    n_117 = o_117;
                }
                t = not_null(n_117);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm h_98 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, h_98);
            return(t);
          }
          t = map_1(t, o_4);
          return(t);
        }
        t = Strategies_1(t, n_4);
        return(t);
      }
      t = Cons_2(t, k_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, j_4);
    return(t);
  }
  t = Specification_1(t, i_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym__2))
    {
      a_118 = ATgetArgument(z_117, 0);
      b_118 = ATgetArgument(z_117, 1);
      {
        ATerm f_118 = NULL,h_118 = NULL;
        ATerm g_118 = NULL;
        t = SSLgetAnnotations(not_null(z_117));
        {
          g_118 = t;
          if(((f_118 != NULL) && (f_118 != g_118)))
            _fail(g_118);
          else
            f_118 = g_118;
        }
        {
          t = not_null(a_118);
          {
            ATerm j_118 = NULL;
            t = e_85(t);
            {
              h_118 = t;
              {
                t = not_null(b_118);
                {
                  ATerm l_118 = NULL;
                  t = f_85(t);
                  {
                    j_118 = t;
                    {
                      ATerm m_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_118), not_null(j_118)), not_null(f_118));
                      {
                        m_118 = t;
                        if(((l_118 != NULL) && (l_118 != m_118)))
                          _fail(m_118);
                        else
                          l_118 = m_118;
                      }
                      t = not_null(l_118);
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
  ATerm u_118 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm v_118 = NULL,w_118 = NULL;
      v_118 = t;
      t_118 :
      if(match_cons(v_118, sym_Program_1))
        {
          w_118 = ATgetArgument(v_118, 0);
          if(((u_118 != NULL) && (u_118 != w_118)))
            _fail(w_118);
          else
            u_118 = w_118;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_27), not_null(u_118)), term_z_26));
      {
        t = printnl_0(t);
        {
          t = term_v_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL;
  a_119 = t;
  z_118 :
  if(match_cons(a_119, sym__2))
    {
      b_119 = ATgetArgument(a_119, 0);
      c_119 = ATgetArgument(a_119, 1);
      {
        ATerm d_27;
        d_27 = t;
        t = SSL_printnl(not_null(b_119), not_null(c_119));
        t = d_27;
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
  ATerm h_119 = NULL;
  h_119 = t;
  t = SSL_implode_string(not_null(h_119));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = h_27;
      {
        ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL;
        m_119 = t;
        l_119 :
        if(((ATgetType(m_119) == AT_LIST) && !(ATisEmpty(m_119))))
          {
            n_119 = ATgetFirst((ATermList) m_119);
            o_119 = (ATerm) ATgetNext((ATermList) m_119);
            {
              t = not_null(n_119);
              {
                ATerm q_4 (ATerm t)
                {
                  t = not_null(o_119);
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
  ATerm y_119 = NULL;
  ATerm a_120 = NULL;
  y_119 = t;
  {
    ATerm b_120 = NULL;
    ATerm d_120 = NULL,j_120 = NULL,k_120 = NULL;
    t = not_null(y_119);
    {
      b_120 = t;
      {
        t = SSL_explode_term(not_null(b_120));
        {
          d_120 = t;
          w_119 :
          if(match_cons(d_120, sym__2))
            {
              j_120 = ATgetArgument(d_120, 0);
              k_120 = ATgetArgument(d_120, 1);
              x_119 :
              if(match_string(j_120, ""))
                {
                  if(((a_120 != NULL) && (a_120 != k_120)))
                    _fail(k_120);
                  else
                    a_120 = k_120;
                }
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
      t = not_null(a_120);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_106 (ATerm))
{
  ATerm o_120 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_120);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          t = Nil_0(t);
          t = y_106(t);
        }
      }
    return(t);
  }
  t = o_120(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
  t_120 = t;
  s_120 :
  if(match_cons(t_120, sym__2))
    {
      u_120 = ATgetArgument(t_120, 0);
      v_120 = ATgetArgument(t_120, 1);
      {
        t = not_null(u_120);
        {
          ATerm r_4 (ATerm t)
          {
            t = not_null(v_120);
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
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_121 = NULL;
  a_121 = t;
  t = SSL_explode_string(not_null(a_121));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_121 = NULL;
  e_121 = t;
  t = SSL_is_string(not_null(e_121));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm v_27 = t;
              int w_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_27);
                }
              else
                {
                  t = v_27;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, s_4);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
              n_121 = t;
              m_121 :
              if(match_cons(n_121, sym_Path_1))
                {
                  o_121 = ATgetArgument(n_121, 0);
                  t = not_null(o_121);
                }
              else
                {
                  if(match_cons(n_121, sym_Var_1))
                    {
                      o_121 = ATgetArgument(n_121, 0);
                      {
                        t = not_null(o_121);
                        {
                          ATerm x_27 = t;
                          int y_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_27);
                            }
                          else
                            {
                              t = x_27;
                              {
                                ATerm t_4 (ATerm t)
                                {
                                  t = term_z_27;
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
                      if(match_cons(n_121, sym_Prefix_2))
                        {
                          o_121 = ATgetArgument(n_121, 0);
                          p_121 = ATgetArgument(n_121, 1);
                          {
                            ATerm w_121 = NULL,c_122 = NULL;
                            ATerm d_28;
                            d_28 = t;
                            {
                              ATerm b_122 = NULL;
                              t = not_null(o_121);
                              {
                                t = eval_config_0(t);
                                {
                                  b_122 = t;
                                  if(((w_121 != NULL) && (w_121 != b_122)))
                                    _fail(b_122);
                                  else
                                    w_121 = b_122;
                                }
                              }
                            }
                            t = d_28;
                            {
                              ATerm e_122 = NULL;
                              t = not_null(p_121);
                              {
                                t = eval_config_0(t);
                                {
                                  e_122 = t;
                                  if(((c_122 != NULL) && (c_122 != e_122)))
                                    _fail(e_122);
                                  else
                                    c_122 = e_122;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_121), not_null(c_122));
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
  ATerm v_122 = NULL;
  v_122 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(v_122));
    {
      t = table_get_0(t);
      {
        ATerm i_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_28;
              m_28 = t;
              {
                ATerm x_122 = NULL;
                ATerm y_122 = NULL;
                y_122 = t;
                if(((x_122 != NULL) && (x_122 != y_122)))
                  _fail(y_122);
                else
                  x_122 = y_122;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_28, not_null(v_122), not_null(x_122));
                  t = table_put_0(t);
                }
              }
              t = m_28;
            }
            LocalPopChoice(l_28);
          }
        else
          {
            t = i_28;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_123 (ATerm))
{
  ATerm q_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_28;
      u_28 = t;
      {
        ATerm c_123 = NULL;
        ATerm d_123 = NULL;
        t = term_v_28;
        {
          t = get_config_0(t);
          {
            d_123 = t;
            if(((c_123 != NULL) && (c_123 != d_123)))
              _fail(d_123);
            else
              c_123 = d_123;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_123), term_w_28);
          t = geq_0(t);
        }
      }
      t = u_28;
      t = m_123(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = q_28;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL;
  h_123 = t;
  g_123 :
  if(match_cons(h_123, sym__2))
    {
      i_123 = ATgetArgument(h_123, 0);
      j_123 = ATgetArgument(h_123, 1);
      t = SSL_WriteToTextFile(not_null(i_123), not_null(j_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL;
  r_123 = t;
  q_123 :
  if(match_cons(r_123, sym__2))
    {
      s_123 = ATgetArgument(r_123, 0);
      t_123 = ATgetArgument(r_123, 1);
      t = SSL_WriteToBinaryFile(not_null(s_123), not_null(t_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_124 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            ATerm c_124 = NULL,d_124 = NULL;
            c_124 = t;
            y_123 :
            if(match_cons(c_124, sym_Output_1))
              {
                d_124 = ATgetArgument(c_124, 0);
                if(((b_124 != NULL) && (b_124 != d_124)))
                  _fail(d_124);
                else
                  b_124 = d_124;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_4);
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
          {
            ATerm e_124 = NULL;
            t = term_a_29;
            {
              e_124 = t;
              if(((b_124 != NULL) && (b_124 != e_124)))
                _fail(e_124);
              else
                b_124 = e_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_4, _id);
  }
  t = x_28;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(b_124);
        return(t);
      }
      t = split_2(t, x_4, _id);
      return(t);
    }
    t = _2(t, _id, w_4);
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            ATerm z_4 (ATerm t)
            {
              ATerm f_124 = NULL;
              f_124 = t;
              a_124 :
              if(!(match_cons(f_124, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, z_4);
            return(t);
          }
          t = _2(t, y_4, WriteToBinaryFile_0);
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_121 (ATerm))
{
  ATerm l_124 = NULL,n_124 = NULL,p_124 = NULL,q_124 = NULL;
  ATerm d_29;
  d_29 = t;
  t = dtime_0(t);
  t = d_29;
  {
    t = t_121(t);
    {
      ATerm e_29;
      e_29 = t;
      {
        ATerm m_124 = NULL;
        t = dtime_0(t);
        {
          m_124 = t;
          if(((l_124 != NULL) && (l_124 != m_124)))
            _fail(m_124);
          else
            l_124 = m_124;
        }
      }
      t = e_29;
      {
        n_124 = t;
        k_124 :
        if(match_cons(n_124, sym__2))
          {
            p_124 = ATgetArgument(n_124, 0);
            q_124 = ATgetArgument(n_124, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_124)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_124))), not_null(q_124));
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
ATerm debug_1 (ATerm t, ATerm p_120 (ATerm))
{
  ATerm f_29;
  f_29 = t;
  {
    ATerm x_124 = NULL,z_124 = NULL;
    ATerm g_29;
    g_29 = t;
    {
      ATerm y_124 = NULL;
      t = p_120(t);
      {
        y_124 = t;
        if(((x_124 != NULL) && (x_124 != y_124)))
          _fail(y_124);
        else
          x_124 = y_124;
      }
    }
    t = g_29;
    {
      ATerm a_125 = NULL;
      a_125 = t;
      if(((z_124 != NULL) && (z_124 != a_125)))
        _fail(a_125);
      else
        z_124 = a_125;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_124)), not_null(x_124)));
        t = printnl_0(t);
      }
    }
  }
  t = f_29;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_125 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_125 = NULL;
      f_125 = t;
      {
        if(((e_125 != NULL) && (e_125 != f_125)))
          _fail(f_125);
        else
          e_125 = f_125;
        t = SSL_ReadFromFile(not_null(e_125));
      }
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm a_5 (ATerm t)
        {
          t = term_m_29;
          return(t);
        }
        t = debug_1(t, a_5);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_103 (ATerm), ATerm w_103 (ATerm))
{
  ATerm j_125 = NULL,l_125 = NULL;
  ATerm n_29;
  n_29 = t;
  {
    ATerm k_125 = NULL;
    t = v_103(t);
    {
      k_125 = t;
      if(((j_125 != NULL) && (j_125 != k_125)))
        _fail(k_125);
      else
        j_125 = k_125;
    }
  }
  t = n_29;
  {
    ATerm m_125 = NULL;
    t = w_103(t);
    {
      m_125 = t;
      if(((l_125 != NULL) && (l_125 != m_125)))
        _fail(m_125);
      else
        l_125 = m_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_125), not_null(l_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_125 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 (ATerm t)
        {
          ATerm z_125 = NULL,a_126 = NULL;
          z_125 = t;
          w_125 :
          if(match_cons(z_125, sym_Input_1))
            {
              a_126 = ATgetArgument(z_125, 0);
              if(((y_125 != NULL) && (y_125 != a_126)))
                _fail(a_126);
              else
                y_125 = a_126;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, b_5);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm b_126 = NULL;
          t = term_z_29;
          {
            b_126 = t;
            if(((y_125 != NULL) && (y_125 != b_126)))
              _fail(b_126);
            else
              y_125 = b_126;
          }
        }
      }
  }
  t = r_29;
  {
    ATerm c_5 (ATerm t)
    {
      t = not_null(y_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_5);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm f_126 = NULL;
    f_126 = t;
    e_126 :
    if(!(match_string(f_126, "-v")))
      {
        if(!(match_string(f_126, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_e_30;
    t = set_config_0(t);
    t = term_f_30;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_g_30;
    return(t);
  }
  t = Option_3(t, d_5, e_5, f_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm i_126 = NULL;
    i_126 = t;
    g_126 :
    if(!(match_string(i_126, "-k")))
      {
        if(!(match_string(i_126, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm h_30;
    h_30 = t;
    {
      ATerm j_126 = NULL;
      ATerm k_126 = NULL;
      t = string_to_int_0(t);
      {
        k_126 = t;
        if(((j_126 != NULL) && (j_126 != k_126)))
          _fail(k_126);
        else
          j_126 = k_126;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_30, not_null(j_126));
        t = set_config_0(t);
      }
    }
    t = h_30;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_j_30;
    return(t);
  }
  t = ArgOption_3(t, g_5, h_5, i_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_126 = NULL;
  n_126 = t;
  t = SSL_string_to_int(not_null(n_126));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm v_126 = NULL;
        v_126 = t;
        q_126 :
        if(!(match_string(v_126, "-S")))
          {
            if(!(match_string(v_126, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_n_30;
        t = set_config_0(t);
        t = term_o_30;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_s_30;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm t_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm w_126 = NULL;
              w_126 = t;
              r_126 :
              if(!(match_string(w_126, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              ATerm z_126 = NULL;
              ATerm a_31;
              a_31 = t;
              {
                ATerm x_126 = NULL;
                ATerm y_126 = NULL;
                t = string_to_int_0(t);
                {
                  y_126 = t;
                  if(((x_126 != NULL) && (x_126 != y_126)))
                    _fail(y_126);
                  else
                    x_126 = y_126;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_28, not_null(x_126));
                  t = set_config_0(t);
                }
              }
              t = a_31;
              {
                ATerm a_127 = NULL;
                a_127 = t;
                if(((z_126 != NULL) && (z_126 != a_127)))
                  _fail(a_127);
                else
                  z_126 = a_127;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_126));
              }
              return(t);
            }
            ATerm o_5 (ATerm t)
            {
              t = term_b_31;
              return(t);
            }
            t = ArgOption_3(t, m_5, n_5, o_5);
            LocalPopChoice(x_30);
          }
        else
          {
            t = t_30;
            {
              ATerm p_5 (ATerm t)
              {
                ATerm b_127 = NULL;
                b_127 = t;
                u_126 :
                if(!(match_string(b_127, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                t = term_d_31;
                t = set_config_0(t);
                t = term_e_31;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_f_31;
                return(t);
              }
              t = Option_3(t, p_5, q_5, r_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = g_31;
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_127 = NULL;
    h_127 = t;
    e_127 :
    if(!(match_string(h_127, "-o")))
      {
        if(!(match_string(h_127, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm l_127 = NULL;
    ATerm q_31;
    q_31 = t;
    {
      ATerm j_127 = NULL;
      ATerm k_127 = NULL;
      k_127 = t;
      if(((j_127 != NULL) && (j_127 != k_127)))
        _fail(k_127);
      else
        j_127 = k_127;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_31, not_null(j_127));
        t = set_config_0(t);
      }
    }
    t = q_31;
    {
      ATerm m_127 = NULL;
      m_127 = t;
      if(((l_127 != NULL) && (l_127 != m_127)))
        _fail(m_127);
      else
        l_127 = m_127;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_127));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_s_31;
    return(t);
  }
  t = ArgOption_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_5 (ATerm t)
        {
          ATerm q_127 = NULL;
          q_127 = t;
          p_127 :
          if(!(match_string(q_127, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_5 (ATerm t)
        {
          t = term_c_32;
          t = set_config_0(t);
          t = term_d_32;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_e_32;
          return(t);
        }
        t = Option_3(t, v_5, w_5, x_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL;
  y_127 = t;
  w_127 :
  if(match_string(y_127, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(y_127) == AT_LIST) && !(ATisEmpty(y_127))))
        {
          z_127 = ATgetFirst((ATermList) y_127);
          a_128 = (ATerm) ATgetNext((ATermList) y_127);
          x_127 :
          if(((ATgetType(a_128) == AT_LIST) && !(ATisEmpty(a_128))))
            {
              b_128 = ATgetFirst((ATermList) a_128);
              c_128 = (ATerm) ATgetNext((ATermList) a_128);
              {
                ATerm g_128 = NULL;
                ATerm f_32;
                f_32 = t;
                {
                  t = not_null(z_127);
                  t = l_0(t);
                }
                t = f_32;
                {
                  ATerm h_128 = NULL;
                  t = not_null(b_128);
                  {
                    t = n_0(t);
                    {
                      h_128 = t;
                      if(((g_128 != NULL) && (g_128 != h_128)))
                        _fail(h_128);
                      else
                        g_128 = h_128;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_128)), not_null(g_128));
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
  ATerm y_5 (ATerm t)
  {
    ATerm o_128 = NULL;
    o_128 = t;
    l_128 :
    if(!(match_string(o_128, "-i")))
      {
        if(!(match_string(o_128, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm r_128 = NULL;
    ATerm g_32;
    g_32 = t;
    {
      ATerm p_128 = NULL;
      ATerm q_128 = NULL;
      q_128 = t;
      if(((p_128 != NULL) && (p_128 != q_128)))
        _fail(q_128);
      else
        p_128 = q_128;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_32, not_null(p_128));
        t = set_config_0(t);
      }
    }
    t = g_32;
    {
      ATerm s_128 = NULL;
      s_128 = t;
      if(((r_128 != NULL) && (r_128 != s_128)))
        _fail(s_128);
      else
        r_128 = s_128;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_128));
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_m_32;
    return(t);
  }
  t = ArgOption_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = n_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATempty, term_t_32));
  {
    t = printnl_0(t);
    {
      t = term_v_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_128 = NULL;
  w_128 = t;
  t = SSL_TicksToSeconds(not_null(w_128));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL,d_129 = NULL;
  b_129 = t;
  a_129 :
  if(match_cons(b_129, sym__2))
    {
      c_129 = ATgetArgument(b_129, 0);
      d_129 = ATgetArgument(b_129, 1);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_129), not_null(d_129));
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = SSL_addr(not_null(c_129), not_null(d_129));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_110 (ATerm), ATerm y_110 (ATerm))
{
  ATerm w_32 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_110(t);
      LocalPopChoice(c_33);
    }
  else
    {
      t = w_32;
      {
        ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
        k_129 = t;
        j_129 :
        if(((ATgetType(k_129) == AT_LIST) && !(ATisEmpty(k_129))))
          {
            l_129 = ATgetFirst((ATermList) k_129);
            m_129 = (ATerm) ATgetNext((ATermList) k_129);
            {
              ATerm p_129 = NULL;
              ATerm q_129 = NULL;
              t = not_null(m_129);
              {
                t = foldr_2(t, x_110, y_110);
                {
                  q_129 = t;
                  if(((p_129 != NULL) && (p_129 != q_129)))
                    _fail(q_129);
                  else
                    p_129 = q_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_129), not_null(p_129));
                t = y_110(t);
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
ATerm crush_2 (ATerm t, ATerm v_109 (ATerm), ATerm w_109 (ATerm))
{
  ATerm x_129 = NULL;
  ATerm z_129 = NULL;
  x_129 = t;
  {
    ATerm a_130 = NULL;
    ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL;
    t = not_null(x_129);
    {
      a_130 = t;
      {
        t = SSL_explode_term(not_null(a_130));
        {
          c_130 = t;
          w_129 :
          if(match_cons(c_130, sym__2))
            {
              d_130 = ATgetArgument(c_130, 0);
              e_130 = ATgetArgument(c_130, 1);
              if(((z_129 != NULL) && (z_129 != e_130)))
                _fail(e_130);
              else
                z_129 = e_130;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_129);
      t = foldr_2(t, v_109, w_109);
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
    ATerm b_6 (ATerm t)
    {
      t = term_v_11;
      return(t);
    }
    t = crush_2(t, b_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL;
  k_130 = t;
  j_130 :
  if(match_cons(k_130, sym__2))
    {
      l_130 = ATgetArgument(k_130, 0);
      m_130 = ATgetArgument(k_130, 1);
      {
        ATerm d_33;
        d_33 = t;
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_130), not_null(m_130));
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(not_null(l_130), not_null(m_130));
            }
        }
        t = d_33;
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
  ATerm t_130 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL;
      u_130 = t;
      s_130 :
      if(match_cons(u_130, sym__2))
        {
          v_130 = ATgetArgument(u_130, 0);
          w_130 = ATgetArgument(u_130, 1);
          {
            if(((t_130 != NULL) && (t_130 != v_130)))
              _fail(v_130);
            else
              t_130 = v_130;
            if(((t_130 != NULL) && (t_130 != w_130)))
              _fail(w_130);
            else
              t_130 = w_130;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_123 (ATerm))
{
  ATerm n_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33;
      u_33 = t;
      {
        ATerm z_130 = NULL;
        ATerm a_131 = NULL;
        t = term_v_28;
        {
          t = get_config_0(t);
          {
            a_131 = t;
            if(((z_130 != NULL) && (z_130 != a_131)))
              _fail(a_131);
            else
              z_130 = a_131;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_130), term_v_12);
          t = geq_0(t);
        }
      }
      t = u_33;
      t = l_123(t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = n_33;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm e_131 = NULL,g_131 = NULL;
    ATerm c_34;
    c_34 = t;
    {
      ATerm f_131 = NULL;
      t = run_time_0(t);
      {
        f_131 = t;
        if(((e_131 != NULL) && (e_131 != f_131)))
          _fail(f_131);
        else
          e_131 = f_131;
      }
    }
    t = c_34;
    {
      ATerm h_131 = NULL;
      t = term_d_34;
      {
        t = get_config_0(t);
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), not_null(e_131)), term_e_34), not_null(g_131)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_6);
  {
    t = term_v_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_131 = NULL;
  o_131 = t;
  n_131 :
  if(match_cons(o_131, sym_Version_0))
    {
      ATerm q_131 = NULL,s_131 = NULL;
      ATerm g_34;
      g_34 = t;
      {
        ATerm r_131 = NULL;
        t = SSLgetAnnotations(not_null(o_131));
        {
          r_131 = t;
          if(((q_131 != NULL) && (q_131 != r_131)))
            _fail(r_131);
          else
            q_131 = r_131;
        }
      }
      t = g_34;
      {
        ATerm t_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_131));
        {
          t_131 = t;
          if(((s_131 != NULL) && (s_131 != t_131)))
            _fail(t_131);
          else
            s_131 = t_131;
        }
        t = not_null(s_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_121 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_34);
            }
          else
            {
              t = j_34;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, d_6);
  t = r_121(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_131 = NULL;
  z_131 = t;
  t = SSL_table_create(not_null(z_131));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_132 = NULL;
  d_132 = t;
  {
    ATerm l_34;
    l_34 = t;
    {
      t = term_m_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, not_null(d_132));
          t = table_put_0(t);
        }
      }
    }
    t = l_34;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_132 = NULL;
  i_132 = t;
  t = SSL_table_destroy(not_null(i_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_132 = NULL;
  m_132 = t;
  t = SSL_exit(not_null(m_132));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL;
  q_132 = t;
  p_132 :
  if(((ATgetType(q_132) == AT_LIST) && ATisEmpty(q_132)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_132) == AT_LIST) && !(ATisEmpty(q_132))))
        {
          r_132 = ATgetFirst((ATermList) q_132);
          s_132 = (ATerm) ATgetNext((ATermList) q_132);
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
  ATerm o_34;
  o_34 = t;
  {
    ATerm v_132 = NULL;
    ATerm y_132 = NULL;
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          ATerm w_132 = NULL;
          ATerm x_132 = NULL;
          x_132 = t;
          if(((w_132 != NULL) && (w_132 != x_132)))
            _fail(x_132);
          else
            w_132 = x_132;
          t = (ATerm) ATinsert(ATempty, not_null(w_132));
        }
      }
    {
      y_132 = t;
      if(((v_132 != NULL) && (v_132 != y_132)))
        _fail(y_132);
      else
        v_132 = y_132;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_29, not_null(v_132));
      t = printnl_0(t);
    }
  }
  t = o_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_125 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm b_133 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = Cons_2(t, j_106, b_133);
      }
    return(t);
  }
  t = b_133(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm j_133 = NULL,k_133 = NULL,l_133 = NULL;
  l_133 = t;
  i_133 :
  if(((ATgetType(l_133) == AT_LIST) && !(ATisEmpty(l_133))))
    {
      j_133 = ATgetFirst((ATermList) l_133);
      k_133 = (ATerm) ATgetNext((ATermList) l_133);
      {
        ATerm p_133 = NULL;
        t = not_null(k_133);
        {
          ATerm t_34;
          t_34 = t;
          {
            ATerm q_133 = NULL,s_133 = NULL,u_133 = NULL;
            ATerm u_34;
            u_34 = t;
            {
              ATerm r_133 = NULL;
              t = k_0(t);
              {
                r_133 = t;
                if(((q_133 != NULL) && (q_133 != r_133)))
                  _fail(r_133);
                else
                  q_133 = r_133;
              }
            }
            t = u_34;
            {
              ATerm t_133 = NULL;
              t = not_null(j_133);
              {
                t = i_0(t);
                {
                  t_133 = t;
                  if(((s_133 != NULL) && (s_133 != t_133)))
                    _fail(t_133);
                  else
                    s_133 = t_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_133)), not_null(s_133));
                {
                  u_133 = t;
                  if(((p_133 != NULL) && (p_133 != u_133)))
                    _fail(u_133);
                  else
                    p_133 = u_133;
                }
              }
            }
          }
          t = t_34;
          {
            ATerm e_6 (ATerm t)
            {
              t = not_null(p_133);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_133) == AT_LIST) && ATisEmpty(l_133)))
        {
          {
            t = term_d_30;
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
  ATerm f_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_125 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_97 (ATerm))
{
  ATerm f_134 = NULL,g_134 = NULL;
  f_134 = t;
  e_134 :
  if(match_cons(f_134, sym_Program_1))
    {
      g_134 = ATgetArgument(f_134, 0);
      {
        ATerm k_134 = NULL,m_134 = NULL;
        ATerm l_134 = NULL;
        t = SSLgetAnnotations(not_null(f_134));
        {
          l_134 = t;
          if(((k_134 != NULL) && (k_134 != l_134)))
            _fail(l_134);
          else
            k_134 = l_134;
        }
        {
          t = not_null(g_134);
          {
            ATerm o_134 = NULL;
            t = w_97(t);
            {
              m_134 = t;
              {
                ATerm p_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_134)), not_null(k_134));
                {
                  p_134 = t;
                  if(((o_134 != NULL) && (o_134 != p_134)))
                    _fail(p_134);
                  else
                    o_134 = p_134;
                }
                t = not_null(o_134);
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
  ATerm y_134 = NULL;
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_134 = NULL;
      t = term_d_34;
      {
        t = get_config_0(t);
        {
          z_134 = t;
          if(((y_134 != NULL) && (y_134 != z_134)))
            _fail(z_134);
          else
            y_134 = z_134;
        }
      }
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm g_6 (ATerm t)
        {
          ATerm h_6 (ATerm t)
          {
            ATerm a_135 = NULL;
            a_135 = t;
            if(((y_134 != NULL) && (y_134 != a_135)))
              _fail(a_135);
            else
              y_134 = a_135;
            return(t);
          }
          t = Program_1(t, h_6);
          return(t);
        }
        t = fetch_1(t, g_6);
      }
    }
  {
    t = term_x_34;
    {
      t = echo_0(t);
      {
        t = term_a_35;
        {
          t = table_get_0(t);
          {
            ATerm i_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_6);
            {
              ATerm j_6 (ATerm t)
              {
                ATerm b_135 = NULL;
                ATerm c_135 = NULL;
                c_135 = t;
                if(((b_135 != NULL) && (b_135 != c_135)))
                  _fail(c_135);
                else
                  b_135 = c_135;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_135)), term_b_35);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, j_6);
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
  ATerm c_35;
  c_35 = t;
  {
    ATerm h_135 = NULL;
    ATerm i_135 = NULL;
    i_135 = t;
    if(((h_135 != NULL) && (h_135 != i_135)))
      _fail(i_135);
    else
      h_135 = i_135;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATempty, not_null(h_135)));
      t = printnl_0(t);
    }
  }
  t = c_35;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_120 (ATerm))
{
  ATerm d_35;
  d_35 = t;
  {
    t = q_120(t);
    t = debug_0(t);
  }
  t = d_35;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_97 (ATerm))
{
  ATerm p_135 = NULL,r_135 = NULL;
  p_135 = t;
  o_135 :
  if(match_cons(p_135, sym_Undefined_1))
    {
      r_135 = ATgetArgument(p_135, 0);
      {
        ATerm u_135 = NULL,w_135 = NULL;
        ATerm v_135 = NULL;
        t = SSLgetAnnotations(not_null(p_135));
        {
          v_135 = t;
          if(((u_135 != NULL) && (u_135 != v_135)))
            _fail(v_135);
          else
            u_135 = v_135;
        }
        {
          t = not_null(r_135);
          {
            ATerm y_135 = NULL;
            t = x_97(t);
            {
              w_135 = t;
              {
                ATerm z_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_135)), not_null(u_135));
                {
                  z_135 = t;
                  if(((y_135 != NULL) && (y_135 != z_135)))
                    _fail(z_135);
                  else
                    y_135 = z_135;
                }
                t = not_null(y_135);
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
ATerm fetch_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm f_136 (ATerm t)
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_106, _id);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = Cons_2(t, _id, f_136);
      }
    return(t);
  }
  t = f_136(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_124 (ATerm))
{
  t = fetch_1(t, o_124);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_136 = NULL;
  k_136 = t;
  j_136 :
  if(match_cons(k_136, sym_Help_0))
    {
      ATerm m_136 = NULL,o_136 = NULL;
      ATerm g_35;
      g_35 = t;
      {
        ATerm n_136 = NULL;
        t = SSLgetAnnotations(not_null(k_136));
        {
          n_136 = t;
          if(((m_136 != NULL) && (m_136 != n_136)))
            _fail(n_136);
          else
            m_136 = n_136;
        }
      }
      t = g_35;
      {
        ATerm p_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_136));
        {
          p_136 = t;
          if(((o_136 != NULL) && (o_136 != p_136)))
            _fail(p_136);
          else
            o_136 = p_136;
        }
        t = not_null(o_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_103 (ATerm))
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_103(t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_136 = NULL,w_136 = NULL,y_136 = NULL;
  v_136 = t;
  u_136 :
  if(match_cons(v_136, sym__2))
    {
      w_136 = ATgetArgument(v_136, 0);
      y_136 = ATgetArgument(v_136, 1);
      t = SSL_table_get(not_null(w_136), not_null(y_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL;
  f_137 = t;
  e_137 :
  if(match_cons(f_137, sym__3))
    {
      g_137 = ATgetArgument(f_137, 0);
      h_137 = ATgetArgument(f_137, 1);
      i_137 = ATgetArgument(f_137, 2);
      {
        ATerm j_35;
        j_35 = t;
        {
          ATerm n_137 = NULL;
          ATerm o_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_137), not_null(h_137));
          {
            ATerm k_35 = t;
            int l_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_35);
              }
            else
              {
                t = k_35;
                t = (ATerm) ATempty;
              }
            {
              o_137 = t;
              if(((n_137 != NULL) && (n_137 != o_137)))
                _fail(o_137);
              else
                n_137 = o_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_137), not_null(h_137), (ATerm) ATinsert(CheckATermList(not_null(n_137)), not_null(i_137)));
            t = table_put_0(t);
          }
        }
        t = j_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_125 (ATerm))
{
  ATerm s_137 = NULL;
  ATerm t_137 = NULL;
  t = term_d_30;
  {
    t = t_125(t);
    {
      t_137 = t;
      if(((s_137 != NULL) && (s_137 != t_137)))
        _fail(t_137);
      else
        s_137 = t_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, not_null(s_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL;
  z_137 = t;
  y_137 :
  if(match_string(z_137, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_137) == AT_LIST) && !(ATisEmpty(z_137))))
        {
          a_138 = ATgetFirst((ATermList) z_137);
          b_138 = (ATerm) ATgetNext((ATermList) z_137);
          {
            ATerm f_138 = NULL;
            ATerm m_35;
            m_35 = t;
            {
              t = not_null(a_138);
              t = a_0(t);
            }
            t = m_35;
            {
              ATerm g_138 = NULL;
              t = term_d_30;
              {
                t = d_0(t);
                {
                  g_138 = t;
                  if(((f_138 != NULL) && (f_138 != g_138)))
                    _fail(g_138);
                  else
                    f_138 = g_138;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_138)), not_null(f_138));
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
  ATerm k_6 (ATerm t)
  {
    ATerm l_138 = NULL;
    l_138 = t;
    k_138 :
    if(!(match_string(l_138, "--help")))
      {
        if(!(match_string(l_138, "-h")))
          {
            if(!(match_string(l_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_o_35;
    {
      t = set_config_0(t);
      t = term_p_35;
    }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_q_35;
    return(t);
  }
  t = Option_3(t, k_6, l_6, m_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,r_138 = NULL;
  o_138 = t;
  n_138 :
  if(((ATgetType(o_138) == AT_LIST) && !(ATisEmpty(o_138))))
    {
      p_138 = ATgetFirst((ATermList) o_138);
      r_138 = (ATerm) ATgetNext((ATermList) o_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm b_139 = NULL,c_139 = NULL,d_139 = NULL;
  b_139 = t;
  a_139 :
  if(((ATgetType(b_139) == AT_LIST) && !(ATisEmpty(b_139))))
    {
      c_139 = ATgetFirst((ATermList) b_139);
      d_139 = (ATerm) ATgetNext((ATermList) b_139);
      {
        ATerm h_139 = NULL,j_139 = NULL;
        ATerm i_139 = NULL;
        t = SSLgetAnnotations(not_null(b_139));
        {
          i_139 = t;
          if(((h_139 != NULL) && (h_139 != i_139)))
            _fail(i_139);
          else
            h_139 = i_139;
        }
        {
          t = not_null(c_139);
          {
            ATerm l_139 = NULL;
            t = n_86(t);
            {
              j_139 = t;
              {
                t = not_null(d_139);
                {
                  ATerm n_139 = NULL;
                  t = o_86(t);
                  {
                    l_139 = t;
                    {
                      ATerm o_139 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_139)), not_null(j_139)), not_null(h_139));
                      {
                        o_139 = t;
                        if(((n_139 != NULL) && (n_139 != o_139)))
                          _fail(o_139);
                        else
                          n_139 = o_139;
                      }
                      t = not_null(n_139);
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
  ATerm y_139 = NULL;
  y_139 = t;
  x_139 :
  if(((ATgetType(y_139) == AT_LIST) && ATisEmpty(y_139)))
    {
      {
        ATerm a_140 = NULL,c_140 = NULL;
        ATerm r_35;
        r_35 = t;
        {
          ATerm b_140 = NULL;
          t = SSLgetAnnotations(not_null(y_139));
          {
            b_140 = t;
            if(((a_140 != NULL) && (a_140 != b_140)))
              _fail(b_140);
            else
              a_140 = b_140;
          }
        }
        t = r_35;
        {
          ATerm d_140 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_140));
          {
            d_140 = t;
            if(((c_140 != NULL) && (c_140 != d_140)))
              _fail(d_140);
            else
              c_140 = d_140;
          }
          t = not_null(c_140);
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
  ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL;
  j_140 = t;
  i_140 :
  if(match_cons(j_140, sym__2))
    {
      k_140 = ATgetArgument(j_140, 0);
      l_140 = ATgetArgument(j_140, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_28, not_null(k_140), not_null(l_140));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_125 (ATerm))
{
  ATerm t_35;
  t_35 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_35;
        t = r_125(t);
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        {
        }
      }
  }
  t = t_35;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm t_140 = NULL;
      ATerm x_35;
      x_35 = t;
      {
        ATerm r_140 = NULL;
        ATerm s_140 = NULL;
        s_140 = t;
        if(((r_140 != NULL) && (r_140 != s_140)))
          _fail(s_140);
        else
          r_140 = s_140;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_34, not_null(r_140));
          t = set_config_0(t);
        }
      }
      t = x_35;
      {
        ATerm u_140 = NULL;
        u_140 = t;
        if(((t_140 != NULL) && (t_140 != u_140)))
          _fail(u_140);
        else
          t_140 = u_140;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_140));
      }
      return(t);
    }
    ATerm o_6 (ATerm t)
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_36 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_36);
            }
          else
            {
              t = a_36;
              {
                t = r_125(t);
                t = Cons_2(t, _id, o_6);
              }
            }
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_6, o_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
  ATerm c_36;
  c_36 = t;
  {
    ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL,g_141 = NULL;
    d_141 = t;
    z_140 :
    if(match_cons(d_141, sym__3))
      {
        e_141 = ATgetArgument(d_141, 0);
        f_141 = ATgetArgument(d_141, 1);
        g_141 = ATgetArgument(d_141, 2);
        {
          if(((a_141 != NULL) && (a_141 != e_141)))
            _fail(e_141);
          else
            a_141 = e_141;
          {
            if(((b_141 != NULL) && (b_141 != f_141)))
              _fail(f_141);
            else
              b_141 = f_141;
            {
              if(((c_141 != NULL) && (c_141 != g_141)))
                _fail(g_141);
              else
                c_141 = g_141;
              t = SSL_table_put(not_null(a_141), not_null(b_141), not_null(c_141));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_125 (ATerm))
{
  ATerm j_141 = NULL;
  ATerm j_36;
  j_36 = t;
  {
    t = term_k_36;
    t = table_put_0(t);
  }
  t = j_36;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm l_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_125(t);
          LocalPopChoice(m_36);
        }
      else
        {
          t = l_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_6);
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36;
          p_36 = t;
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_35;
                t = get_config_0(t);
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                t = fetch_1(t, Help_0);
              }
          }
          t = p_36;
          {
            t = system_usage_0(t);
            {
              t = term_v_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          {
            ATerm s_36 = t;
            int t_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm r_6 (ATerm t)
                  {
                    ATerm k_141 = NULL;
                    k_141 = t;
                    if(((j_141 != NULL) && (j_141 != k_141)))
                      _fail(k_141);
                    else
                      j_141 = k_141;
                    return(t);
                  }
                  t = Undefined_1(t, r_6);
                  return(t);
                }
                t = fetch_1(t, q_6);
                {
                  ATerm s_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_141)), term_u_36);
                    return(t);
                  }
                  t = say_1(t, s_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_12;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(t_36);
              }
            else
              {
                t = s_36;
                {
                }
              }
          }
        }
      {
        ATerm v_36;
        v_36 = t;
        {
          t = term_y_34;
          t = table_destroy_0(t);
        }
        t = v_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm))
{
  t = parse_options_1(t, x_121);
  {
    t = store_options_0(t);
    {
      t = z_121(t);
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_121);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm y_36 = t;
              int z_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_122(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_36);
                }
              else
                {
                  t = y_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_122(t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_122);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_6, q_122, r_122, u_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      ATerm h_37;
      h_37 = t;
      {
        ATerm n_141 = NULL;
        ATerm o_141 = NULL;
        t = term_d_34;
        {
          t = get_config_0(t);
          {
            o_141 = t;
            if(((n_141 != NULL) && (n_141 != o_141)))
              _fail(o_141);
            else
              n_141 = o_141;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_26, (ATerm) ATinsert(ATempty, not_null(n_141)));
          t = printnl_0(t);
        }
      }
      t = h_37;
      return(t);
    }
    t = if_verbose2_1(t, w_6);
    return(t);
  }
  t = iowrap_4(t, i_122, j_122, k_122, v_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_122 (ATerm), ATerm h_122 (ATerm))
{
  t = iowrap_3(t, g_122, h_122, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_122 (ATerm))
{
  ATerm x_6 (ATerm t)
  {
    t = _2(t, _id, d_122);
    return(t);
  }
  t = iowrap_2(t, x_6, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, y_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
