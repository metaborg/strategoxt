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
ATerm term_g_35;
ATerm term_u_34;
ATerm term_m_34;
ATerm term_h_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_y_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_w_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_x_11;
ATerm term_m_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Op_2, term_j_14, (ATerm) ATempty);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_x_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_g_26);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_g_26);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_h_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_g_26);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, (ATerm) ATempty);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm isect_1 (ATerm, ATerm a_110 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm d_90 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm g_110 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm));
ATerm crush_3 (ATerm, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm));
ATerm free_vars_3 (ATerm, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_100 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm c_107 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm b_100 (ATerm), ATerm c_100 (ATerm));
ATerm alltd_1 (ATerm, ATerm h_102 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm));
ATerm substitute_1 (ATerm, ATerm o_99 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm diff_1 (ATerm, ATerm c_110 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_116 (ATerm), ATerm v_116 (ATerm));
ATerm for_3 (ATerm, ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm t_101 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm d_116 (ATerm), ATerm e_116 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_116 (ATerm));
ATerm downup_1 (ATerm, ATerm f_100 (ATerm));
ATerm simplify_widen_0 (ATerm);
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
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = repeat_2(t, Optimize_0, _id);
    return(t);
  }
  t = downup_1(t, b_0);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm a_110 (ATerm))
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
          ATerm x_4 (ATerm t)
          {
            ATerm g_5 = t;
            int i_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(i_5);
              }
            else
              {
                t = g_5;
                {
                  ATerm j_5 = t;
                  int n_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_5;
                      q_5 = t;
                      {
                        ATerm c_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, a_110, c_0);
                      }
                      t = q_5;
                      t = Cons_2(t, _id, x_4);
                      LocalPopChoice(n_5);
                    }
                  else
                    {
                      t = j_5;
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
                              t = x_4(t);
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
          t = x_4(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm f_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_DynamicRules_1))
    {
      h_5 = ATgetArgument(f_5, 0);
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm l_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm o_5 = NULL;
            t = d_90(t);
            {
              m_5 = t;
              {
                ATerm p_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(m_5)), not_null(k_5));
                {
                  p_5 = t;
                  if(((o_5 != NULL) && (o_5 != p_5)))
                    _fail(p_5);
                  else
                    o_5 = p_5;
                }
                t = not_null(o_5);
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
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Scope_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm k_6 = NULL;
            t = x_86(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = y_86(t);
                  {
                    k_6 = t;
                    {
                      ATerm n_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_6), not_null(k_6)), not_null(g_6));
                      {
                        n_6 = t;
                        if(((m_6 != NULL) && (m_6 != n_6)))
                          _fail(n_6);
                        else
                          m_6 = n_6;
                      }
                      t = not_null(m_6);
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
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, g_99, e_99);
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      t = DynamicRules_1(t, e_99);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_DynamicRules_1))
    {
      w_6 = ATgetArgument(v_6, 0);
      {
        t = not_null(w_6);
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
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  b_7 :
  if(match_cons(g_7, sym_LRule_1))
    {
      h_7 = ATgetArgument(g_7, 0);
      c_7 :
      if(match_cons(h_7, sym_Rule_3))
        {
          d_7 = ATgetArgument(h_7, 0);
          e_7 = ATgetArgument(h_7, 1);
          f_7 = ATgetArgument(h_7, 2);
          {
            t = not_null(d_7);
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
      if(match_cons(g_7, sym_Scope_2))
        {
          h_7 = ATgetArgument(g_7, 0);
          i_7 = ATgetArgument(g_7, 1);
          t = not_null(h_7);
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
  ATerm s_7 = NULL,t_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Var_1))
    {
      t_7 = ATgetArgument(s_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(t_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_110 (ATerm))
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        t = not_null(z_7);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm t_5 = t;
            int u_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_8);
                LocalPopChoice(u_5);
              }
            else
              {
                t = t_5;
                {
                  ATerm v_5 = t;
                  int w_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(a_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_110, e_0);
                      t = e_8(t);
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = Cons_2(t, _id, e_8);
                    }
                }
              }
            return(t);
          }
          t = e_8(t);
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
ATerm foldr_3 (ATerm t, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm))
{
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_110(t);
      LocalPopChoice(y_5);
    }
  else
    {
      t = x_5;
      {
        ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
        j_8 = t;
        i_8 :
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            k_8 = ATgetFirst((ATermList) j_8);
            l_8 = (ATerm) ATgetNext((ATermList) j_8);
            {
              ATerm o_8 = NULL,q_8 = NULL;
              ATerm d_6;
              d_6 = t;
              {
                ATerm p_8 = NULL;
                t = not_null(k_8);
                {
                  t = b_111(t);
                  {
                    p_8 = t;
                    if(((o_8 != NULL) && (o_8 != p_8)))
                      _fail(p_8);
                    else
                      o_8 = p_8;
                  }
                }
              }
              t = d_6;
              {
                ATerm r_8 = NULL;
                t = not_null(l_8);
                {
                  t = foldr_3(t, z_110, a_111, b_111);
                  {
                    r_8 = t;
                    if(((q_8 != NULL) && (q_8 != r_8)))
                      _fail(r_8);
                    else
                      q_8 = r_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(q_8));
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
  ATerm z_8 = NULL;
  ATerm b_9 = NULL;
  z_8 = t;
  {
    ATerm c_9 = NULL;
    ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
    t = not_null(z_8);
    {
      c_9 = t;
      {
        t = SSL_explode_term(not_null(c_9));
        {
          e_9 = t;
          y_8 :
          if(match_cons(e_9, sym__2))
            {
              f_9 = ATgetArgument(e_9, 0);
              g_9 = ATgetArgument(e_9, 1);
              if(((b_9 != NULL) && (b_9 != g_9)))
                _fail(g_9);
              else
                b_9 = g_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_9);
      t = foldr_3(t, x_109, y_109, z_109);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_9 (ATerm t)
  {
    ATerm e_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        LocalPopChoice(f_6);
      }
    else
      {
        t = e_6;
        {
          ATerm j_6 = t;
          int l_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_9 = NULL;
              ATerm o_6;
              o_6 = t;
              {
                ATerm m_9 = NULL;
                t = q_114(t);
                {
                  m_9 = t;
                  if(((l_9 != NULL) && (l_9 != m_9)))
                    _fail(m_9);
                  else
                    l_9 = m_9;
                }
              }
              t = o_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = not_null(l_9);
                    return(t);
                  }
                  t = split_2(t, n_9, j_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm h_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = r_114(t, f_0, n_9, h_0);
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm q_0 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, m_0, q_0, _id);
                }
              }
              LocalPopChoice(l_6);
            }
          else
            {
              t = j_6;
              {
                ATerm r_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm s_0 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, r_0, s_0, n_9);
              }
            }
        }
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, t_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  v_9 = t;
  t_9 :
  if(match_cons(v_9, sym_Scope_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      u_9 :
      if(match_cons(x_9, sym_Seq_2))
        {
          y_9 = ATgetArgument(x_9, 0);
          z_9 = ATgetArgument(x_9, 1);
          {
            ATerm d_10 = NULL,e_10 = NULL;
            ATerm f_10 = NULL,h_10 = NULL;
            ATerm g_10 = NULL;
            t = not_null(y_9);
            {
              t = tvars_0(t);
              {
                g_10 = t;
                if(((f_10 != NULL) && (f_10 != g_10)))
                  _fail(g_10);
                else
                  f_10 = g_10;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), not_null(w_9));
              {
                ATerm i_10 = NULL;
                t = isect_1(t, eq_0);
                {
                  h_10 = t;
                  {
                    if(((d_10 != NULL) && (d_10 != h_10)))
                      _fail(h_10);
                    else
                      d_10 = h_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(d_10));
                      {
                        t = diff_0(t);
                        {
                          i_10 = t;
                          {
                            if(((e_10 != NULL) && (e_10 != i_10)))
                              _fail(i_10);
                            else
                              e_10 = i_10;
                            {
                              ATerm r_6 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = r_6;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_10), not_null(z_9))));
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
    ATerm u_0 (ATerm t)
    {
      t = topdown_1(t, d_100);
      return(t);
    }
    t = _all(t, u_0);
  }
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NarrowScope_0(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, v_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  ATerm g_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_10), not_null(u_10)));
    return(t);
  }
  ATerm h_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_10), not_null(z_10)));
    return(t);
  }
  v_10 = t;
  p_10 :
  if(match_cons(v_10, sym_Seq_2))
    {
      w_10 = ATgetArgument(v_10, 0);
      z_10 = ATgetArgument(v_10, 1);
      q_10 :
      if(match_cons(z_10, sym_Scope_2))
        {
          t_10 = ATgetArgument(z_10, 0);
          u_10 = ATgetArgument(z_10, 1);
          r_10 :
          if(match_cons(w_10, sym_Scope_2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              {
                ATerm x_6 = t;
                int y_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_11(t);
                    LocalPopChoice(y_6);
                  }
                else
                  {
                    t = x_6;
                    t = h_11(t);
                  }
              }
            }
          else
            {
              t = g_11(t);
            }
        }
      else
        {
          s_10 :
          if(match_cons(w_10, sym_Scope_2))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              t = h_11(t);
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  o_11 = t;
  j_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      v_11 = ATgetArgument(o_11, 1);
      k_11 :
      if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
        {
          q_11 = ATgetFirst((ATermList) p_11);
          u_11 = (ATerm) ATgetNext((ATermList) p_11);
          l_11 :
          if(match_cons(q_11, sym_SDef_3))
            {
              r_11 = ATgetArgument(q_11, 0);
              s_11 = ATgetArgument(q_11, 1);
              t_11 = ATgetArgument(q_11, 2);
              m_11 :
              if(((ATgetType(s_11) == AT_LIST) && ATisEmpty(s_11)))
                {
                  n_11 :
                  if(((ATgetType(u_11) == AT_LIST) && ATisEmpty(u_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_z_6), not_null(r_11), (ATerm)ATempty, not_null(t_11))), not_null(v_11));
                    }
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
ATerm at_suffix_1 (ATerm t, ATerm c_107 (ATerm))
{
  ATerm a_12 (ATerm t)
  {
    ATerm a_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_107(t);
        LocalPopChoice(j_7);
      }
    else
      {
        t = a_7;
        t = Cons_2(t, _id, a_12);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Let_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      {
        ATerm s_12 = NULL,t_12 = NULL;
        ATerm i_13 = NULL;
        t = not_null(o_12);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
            u_12 = t;
            i_12 :
            if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
              {
                v_12 = ATgetFirst((ATermList) u_12);
                z_12 = (ATerm) ATgetNext((ATermList) u_12);
                j_12 :
                if(match_cons(v_12, sym_SDef_3))
                  {
                    w_12 = ATgetArgument(v_12, 0);
                    x_12 = ATgetArgument(v_12, 1);
                    y_12 = ATgetArgument(v_12, 2);
                    k_12 :
                    if(((ATgetType(x_12) == AT_LIST) && ATisEmpty(x_12)))
                      {
                        {
                          ATerm h_13 = NULL;
                          t = not_null(p_12);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
                              d_13 = t;
                              e_12 :
                              if(match_cons(d_13, sym_Call_2))
                                {
                                  e_13 = ATgetArgument(d_13, 0);
                                  g_13 = ATgetArgument(d_13, 1);
                                  f_12 :
                                  if(match_cons(e_13, sym_SVar_1))
                                    {
                                      f_13 = ATgetArgument(e_13, 0);
                                      g_12 :
                                      if(((ATgetType(g_13) == AT_LIST) && ATisEmpty(g_13)))
                                        {
                                          {
                                            if(((w_12 != NULL) && (w_12 != f_13)))
                                              _fail(f_13);
                                            else
                                              w_12 = f_13;
                                            t = not_null(y_12);
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
                            t = oncetd_1(t, x_0);
                            {
                              h_13 = t;
                              {
                                if(((s_12 != NULL) && (s_12 != h_13)))
                                  _fail(h_13);
                                else
                                  s_12 = h_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_12)), (ATerm) ATempty), not_null(s_12));
                                  {
                                    ATerm k_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_subterm_0(t);
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
                          t = not_null(z_12);
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
          t = at_suffix_1(t, w_0);
          {
            i_13 = t;
            if(((t_12 != NULL) && (t_12 != i_13)))
              _fail(i_13);
            else
              t_12 = i_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_12), not_null(s_12));
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
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  w_13 = t;
  q_13 :
  if(match_cons(w_13, sym__2))
    {
      x_13 = ATgetArgument(w_13, 0);
      z_13 = ATgetArgument(w_13, 1);
      r_13 :
      if(match_cons(x_13, sym_Build_1))
        {
          y_13 = ATgetArgument(x_13, 0);
          s_13 :
          if(match_cons(z_13, sym_Where_1))
            {
              a_14 = ATgetArgument(z_13, 0);
              t_13 :
              if(match_cons(a_14, sym_Prim_2))
                {
                  u_13 = ATgetArgument(a_14, 0);
                  v_13 = ATgetArgument(a_14, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_13), not_null(v_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(z_13, sym_Prim_2))
                {
                  a_14 = ATgetArgument(z_13, 0);
                  b_14 = ATgetArgument(z_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_14), not_null(b_14));
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
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  r_14 = t;
  m_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      u_14 = ATgetArgument(r_14, 1);
      n_14 :
      if(match_cons(s_14, sym_Build_1))
        {
          t_14 = ATgetArgument(s_14, 0);
          o_14 :
          if(match_cons(u_14, sym_Where_1))
            {
              v_14 = ATgetArgument(u_14, 0);
              p_14 :
              if(match_cons(v_14, sym_Build_1))
                {
                  q_14 = ATgetArgument(v_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(u_14, sym_Build_1))
                {
                  v_14 = ATgetArgument(u_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_14));
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
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  l_15 = t;
  g_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      q_15 = ATgetArgument(l_15, 1);
      h_15 :
      if(match_cons(m_15, sym_Build_1))
        {
          n_15 = ATgetArgument(m_15, 0);
          i_15 :
          if(match_cons(n_15, sym_Op_2))
            {
              o_15 = ATgetArgument(n_15, 0);
              p_15 = ATgetArgument(n_15, 1);
              j_15 :
              if(match_cons(q_15, sym_Match_1))
                {
                  r_15 = ATgetArgument(q_15, 0);
                  k_15 :
                  if(match_cons(r_15, sym_Op_2))
                    {
                      s_15 = ATgetArgument(r_15, 0);
                      t_15 = ATgetArgument(r_15, 1);
                      {
                        ATerm w_15 = NULL,x_15 = NULL;
                        if(((o_15 != NULL) && (o_15 != s_15)))
                          _fail(s_15);
                        else
                          o_15 = s_15;
                        {
                          if(((w_15 != NULL) && (w_15 != t_15)))
                            _fail(t_15);
                          else
                            w_15 = t_15;
                          {
                            ATerm d_16 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(w_15));
                            {
                              ATerm y_0 (ATerm t)
                              {
                                ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
                                y_15 = t;
                                e_15 :
                                if(match_cons(y_15, sym__2))
                                  {
                                    z_15 = ATgetArgument(y_15, 0);
                                    a_16 = ATgetArgument(y_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_16)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, y_0);
                              {
                                d_16 = t;
                                if(((x_15 != NULL) && (x_15 != d_16)))
                                  _fail(d_16);
                                else
                                  x_15 = d_16;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_15), not_null(p_15))));
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
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  n_16 = t;
  i_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      s_16 = ATgetArgument(n_16, 1);
      j_16 :
      if(match_cons(o_16, sym_Build_1))
        {
          p_16 = ATgetArgument(o_16, 0);
          k_16 :
          if(match_cons(p_16, sym_Op_2))
            {
              q_16 = ATgetArgument(p_16, 0);
              r_16 = ATgetArgument(p_16, 1);
              l_16 :
              if(match_cons(s_16, sym_Match_1))
                {
                  t_16 = ATgetArgument(s_16, 0);
                  m_16 :
                  if(match_cons(t_16, sym_Op_2))
                    {
                      u_16 = ATgetArgument(t_16, 0);
                      v_16 = ATgetArgument(t_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(u_16));
                        {
                          ATerm l_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = l_7;
                            }
                        }
                        t = term_m_7;
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
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
            t = BuildMatchFusion_0(t);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm u_7 = t;
              int v_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(v_7);
                }
              else
                {
                  t = u_7;
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
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  ATerm w_17 (ATerm t)
  {
    ATerm t_17 = NULL;
    ATerm u_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(l_17));
    {
      t = BMF_0(t);
      {
        u_17 = t;
        if(((t_17 != NULL) && (t_17 != u_17)))
          _fail(u_17);
        else
          t_17 = u_17;
      }
    }
    t = not_null(t_17);
    return(t);
  }
  j_17 = t;
  f_17 :
  if(match_cons(j_17, sym_Seq_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      g_17 :
      if(match_cons(l_17, sym_Seq_2))
        {
          h_17 = ATgetArgument(l_17, 0);
          i_17 = ATgetArgument(l_17, 1);
          {
            ATerm w_7 = t;
            int b_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_17 = NULL;
                ATerm q_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(h_17));
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
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_17), not_null(i_17));
                LocalPopChoice(b_8);
              }
            else
              {
                t = w_7;
                t = w_17(t);
              }
          }
        }
      else
        {
          t = w_17(t);
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  e_18 = t;
  a_18 :
  if(match_cons(e_18, sym_Seq_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      h_18 = ATgetArgument(e_18, 1);
      b_18 :
      if(match_cons(f_18, sym_Build_1))
        {
          g_18 = ATgetArgument(f_18, 0);
          c_18 :
          if(match_cons(h_18, sym_Seq_2))
            {
              i_18 = ATgetArgument(h_18, 0);
              k_18 = ATgetArgument(h_18, 1);
              d_18 :
              if(match_cons(i_18, sym_Build_1))
                {
                  j_18 = ATgetArgument(i_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_18)), not_null(k_18));
                }
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
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  t_18 = t;
  r_18 :
  if(match_cons(t_18, sym_Scope_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      s_18 :
      if(match_cons(v_18, sym_Scope_2))
        {
          w_18 = ATgetArgument(v_18, 0);
          x_18 = ATgetArgument(v_18, 1);
          {
            ATerm b_19 = NULL;
            ATerm c_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(w_18));
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = conc_more_lists_0(t);
                }
              {
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_19), not_null(x_18));
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
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Var_1))
    {
      i_19 = ATgetArgument(h_19, 0);
      t = not_null(i_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  o_19 = t;
  m_19 :
  if(match_cons(o_19, sym__2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      n_19 :
      if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
        {
          r_19 = ATgetFirst((ATermList) q_19);
          s_19 = (ATerm) ATgetNext((ATermList) q_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), not_null(s_19));
        }
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  a_20 = t;
  x_19 :
  if(match_cons(a_20, sym__2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      y_19 :
      if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
        {
          d_20 = ATgetFirst((ATermList) c_20);
          g_20 = (ATerm) ATgetNext((ATermList) c_20);
          z_19 :
          if(match_cons(d_20, sym__2))
            {
              e_20 = ATgetArgument(d_20, 0);
              f_20 = ATgetArgument(d_20, 1);
              {
                ATerm i_20 = NULL;
                if(((b_20 != NULL) && (b_20 != e_20)))
                  _fail(e_20);
                else
                  b_20 = e_20;
                {
                  if(((i_20 != NULL) && (i_20 != f_20)))
                    _fail(f_20);
                  else
                    i_20 = f_20;
                  t = not_null(i_20);
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
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm b_100 (ATerm), ATerm c_100 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm q_20 = NULL,r_20 = NULL;
  o_20 = t;
  {
    ATerm s_20 = NULL;
    t = not_null(o_20);
    {
      ATerm t_20 = NULL;
      t = b_100(t);
      {
        s_20 = t;
        {
          if(((q_20 != NULL) && (q_20 != s_20)))
            _fail(s_20);
          else
            q_20 = s_20;
          {
            t = c_100(t);
            {
              t_20 = t;
              if(((r_20 != NULL) && (r_20 != t_20)))
                _fail(t_20);
              else
                r_20 = t_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(r_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm x_20 (ATerm t)
  {
    ATerm h_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_102(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = h_8;
        t = _all(t, x_20);
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        ATerm h_21 = NULL;
        if(((h_21 != NULL) && (h_21 != e_21)))
          _fail(e_21);
        else
          h_21 = e_21;
      }
    }
  else
    {
      if(match_cons(c_21, sym__3))
        {
          d_21 = ATgetArgument(c_21, 0);
          e_21 = ATgetArgument(c_21, 1);
          f_21 = ATgetArgument(c_21, 2);
          {
            ATerm n_21 = NULL;
            ATerm o_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(e_21));
            {
              t = zip_1(t, _id);
              {
                o_21 = t;
                if(((n_21 != NULL) && (n_21 != o_21)))
                  _fail(o_21);
                else
                  n_21 = o_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), not_null(f_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  t = subs_args_0(t);
  {
    u_21 = t;
    t_21 :
    if(match_cons(u_21, sym__2))
      {
        v_21 = ATgetArgument(u_21, 0);
        w_21 = ATgetArgument(u_21, 1);
        {
          t = not_null(w_21);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = not_null(v_21);
                return(t);
              }
              t = SubsVar_2(t, m_99, a_1);
              t = n_99(t);
              return(t);
            }
            t = alltd_1(t, z_0);
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
ATerm substitute_1 (ATerm t, ATerm o_99 (ATerm))
{
  t = substitute_2(t, o_99, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_2(t, IsVar_0, _id);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
    {
      l_22 = ATgetFirst((ATermList) k_22);
      m_22 = (ATerm) ATgetNext((ATermList) k_22);
      {
        t = l_110(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm p_22 = NULL;
            p_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(p_22));
              t = k_110(t);
            }
            return(t);
          }
          t = fetch_1(t, b_1);
        }
        t = not_null(m_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        t = not_null(w_22);
        {
          ATerm b_23 (ATerm t)
          {
            ATerm n_8 = t;
            int s_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_8);
              }
            else
              {
                t = n_8;
                {
                  ATerm t_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_1 (ATerm t)
                      {
                        t = not_null(x_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_110, c_1);
                      t = b_23(t);
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
                      t = Cons_2(t, _id, b_23);
                    }
                }
              }
            return(t);
          }
          t = b_23(t);
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
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  d_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      e_23 :
      if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
        {
          i_23 = ATgetFirst((ATermList) h_23);
          j_23 = (ATerm) ATgetNext((ATermList) h_23);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_23)), not_null(i_23)), not_null(j_23));
        }
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
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  w_23 :
  if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
    {
      z_23 = ATgetFirst((ATermList) y_23);
      c_24 = (ATerm) ATgetNext((ATermList) y_23);
      x_23 :
      if(match_cons(z_23, sym__2))
        {
          a_24 = ATgetArgument(z_23, 0);
          b_24 = ATgetArgument(z_23, 1);
          {
            ATerm g_24 = NULL,h_24 = NULL,n_24 = NULL,t_24 = NULL;
            ATerm v_8;
            v_8 = t;
            {
              ATerm i_24 = NULL;
              ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
              t = not_null(b_24);
              {
                i_24 = t;
                {
                  t = SSL_explode_term(not_null(i_24));
                  {
                    k_24 = t;
                    r_23 :
                    if(match_cons(k_24, sym__2))
                      {
                        l_24 = ATgetArgument(k_24, 0);
                        m_24 = ATgetArgument(k_24, 1);
                        {
                          if(((g_24 != NULL) && (g_24 != l_24)))
                            _fail(l_24);
                          else
                            g_24 = l_24;
                          if(((h_24 != NULL) && (h_24 != m_24)))
                            _fail(m_24);
                          else
                            h_24 = m_24;
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
            t = v_8;
            {
              ATerm w_8;
              w_8 = t;
              {
                ATerm o_24 = NULL;
                ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
                t = not_null(a_24);
                {
                  o_24 = t;
                  {
                    t = SSL_explode_term(not_null(o_24));
                    {
                      q_24 = t;
                      u_23 :
                      if(match_cons(q_24, sym__2))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          s_24 = ATgetArgument(q_24, 1);
                          {
                            if(((g_24 != NULL) && (g_24 != r_24)))
                              _fail(r_24);
                            else
                              g_24 = r_24;
                            if(((n_24 != NULL) && (n_24 != s_24)))
                              _fail(s_24);
                            else
                              n_24 = s_24;
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
              t = w_8;
              {
                ATerm u_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(h_24));
                {
                  t = zip_1(t, _id);
                  {
                    u_24 = t;
                    if(((t_24 != NULL) && (t_24 != u_24)))
                      _fail(u_24);
                    else
                      t_24 = u_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_24), not_null(c_24));
                  {
                    ATerm x_8 = t;
                    int a_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(a_9);
                      }
                    else
                      {
                        t = x_8;
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  c_25 :
  if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
    {
      f_25 = ATgetFirst((ATermList) e_25);
      i_25 = (ATerm) ATgetNext((ATermList) e_25);
      d_25 :
      if(match_cons(f_25, sym__2))
        {
          g_25 = ATgetArgument(f_25, 0);
          h_25 = ATgetArgument(f_25, 1);
          {
            ATerm k_25 = NULL;
            if(((g_25 != NULL) && (g_25 != h_25)))
              _fail(h_25);
            else
              g_25 = h_25;
            {
              if(((k_25 != NULL) && (k_25 != i_25)))
                _fail(i_25);
              else
                k_25 = i_25;
              t = not_null(k_25);
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
  ATerm m_25 (ATerm t)
  {
    ATerm d_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_116(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = d_9;
        {
          t = v_116(t);
          t = m_25(t);
        }
      }
    return(t);
  }
  t = m_25(t);
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm o_25 = NULL;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_25));
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm k_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, g_1);
            LocalPopChoice(o_9);
          }
        else
          {
            t = k_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_1, e_1, f_1);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm r_25 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = _one(t, r_25);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm a_10;
        a_10 = t;
        {
          t = not_null(x_25);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm a_26 = NULL;
              a_26 = t;
              if(((w_25 != NULL) && (w_25 != a_26)))
                _fail(a_26);
              else
                w_25 = a_26;
              return(t);
            }
            t = oncetd_1(t, h_1);
          }
        }
        t = a_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_Var_1))
    {
      n_26 = ATgetArgument(m_26, 0);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_26 = NULL,s_26 = NULL;
            ATerm r_26 = NULL;
            t = SSLgetAnnotations(not_null(m_26));
            {
              r_26 = t;
              if(((q_26 != NULL) && (q_26 != r_26)))
                _fail(r_26);
              else
                q_26 = r_26;
            }
            {
              t = not_null(n_26);
              {
                ATerm u_26 = NULL;
                t = p_0(t);
                {
                  s_26 = t;
                  {
                    ATerm v_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_26)), not_null(q_26));
                    {
                      v_26 = t;
                      if(((u_26 != NULL) && (u_26 != v_26)))
                        _fail(v_26);
                      else
                        u_26 = v_26;
                    }
                    t = not_null(u_26);
                  }
                }
              }
            }
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm y_26 = NULL,a_27 = NULL;
              ATerm z_26 = NULL;
              t = SSLgetAnnotations(not_null(m_26));
              {
                z_26 = t;
                if(((y_26 != NULL) && (y_26 != z_26)))
                  _fail(z_26);
                else
                  y_26 = z_26;
              }
              {
                t = not_null(n_26);
                {
                  ATerm c_27 = NULL;
                  t = p_0(t);
                  {
                    a_27 = t;
                    {
                      ATerm d_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_27)), not_null(y_26));
                      {
                        d_27 = t;
                        if(((c_27 != NULL) && (c_27 != d_27)))
                          _fail(d_27);
                        else
                          c_27 = d_27;
                      }
                      t = not_null(c_27);
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  d_29 = t;
  c_28 :
  if(match_cons(d_29, sym_Seq_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      g_29 = ATgetArgument(d_29, 1);
      d_28 :
      if(match_cons(e_29, sym_Assign_1))
        {
          f_29 = ATgetArgument(e_29, 0);
          e_28 :
          if(match_cons(f_29, sym_Var_1))
            {
              w_28 = ATgetArgument(f_29, 0);
              f_28 :
              if(match_cons(g_29, sym_Seq_2))
                {
                  h_29 = ATgetArgument(g_29, 0);
                  i_29 = ATgetArgument(g_29, 1);
                  g_28 :
                  if(match_cons(h_29, sym_Build_1))
                    {
                      z_28 = ATgetArgument(h_29, 0);
                      h_28 :
                      if(match_cons(z_28, sym_Var_1))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          {
                            ATerm o_29 = NULL;
                            if(((w_28 != NULL) && (w_28 != a_29)))
                              _fail(a_29);
                            else
                              w_28 = a_29;
                            {
                              if(((o_29 != NULL) && (o_29 != i_29)))
                                _fail(i_29);
                              else
                                o_29 = i_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_28))), not_null(o_29));
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
          if(match_cons(e_29, sym_Build_1))
            {
              f_29 = ATgetArgument(e_29, 0);
              i_28 :
              if(match_cons(g_29, sym_Scope_2))
                {
                  h_29 = ATgetArgument(g_29, 0);
                  i_29 = ATgetArgument(g_29, 1);
                  j_28 :
                  if(match_cons(i_29, sym_Seq_2))
                    {
                      j_29 = ATgetArgument(i_29, 0);
                      m_29 = ATgetArgument(i_29, 1);
                      k_28 :
                      if(match_cons(j_29, sym_Assign_1))
                        {
                          k_29 = ATgetArgument(j_29, 0);
                          l_28 :
                          if(match_cons(k_29, sym_Var_1))
                            {
                              l_29 = ATgetArgument(k_29, 0);
                              {
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_30 = NULL,t_30 = NULL;
                                    ATerm l_10;
                                    l_10 = t;
                                    {
                                      ATerm s_30 = NULL;
                                      t = not_null(f_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(h_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  s_30 = t;
                                                  if(((r_30 != NULL) && (r_30 != s_30)))
                                                    _fail(s_30);
                                                  else
                                                    r_30 = s_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = l_10;
                                    {
                                      ATerm u_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, not_null(f_29)), not_null(m_29));
                                      {
                                        t = substitute_2(t, IsVar_0, _id);
                                        {
                                          u_30 = t;
                                          if(((t_30 != NULL) && (t_30 != u_30)))
                                            _fail(u_30);
                                          else
                                            t_30 = u_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_30), not_null(t_30)));
                                    }
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm z_30 = NULL,b_31 = NULL;
                                      ATerm m_10;
                                      m_10 = t;
                                      {
                                        ATerm a_31 = NULL;
                                        t = not_null(f_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(h_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    a_31 = t;
                                                    if(((z_30 != NULL) && (z_30 != a_31)))
                                                      _fail(a_31);
                                                    else
                                                      z_30 = a_31;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = m_10;
                                      {
                                        ATerm c_31 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, not_null(f_29)), not_null(m_29));
                                        {
                                          t = substitute_2(t, IsVar_0, _id);
                                          {
                                            c_31 = t;
                                            if(((b_31 != NULL) && (b_31 != c_31)))
                                              _fail(c_31);
                                            else
                                              b_31 = c_31;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_30), not_null(b_31)));
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
      if(match_cons(d_29, sym_Scope_2))
        {
          e_29 = ATgetArgument(d_29, 0);
          g_29 = ATgetArgument(d_29, 1);
          m_28 :
          if(match_cons(g_29, sym_Seq_2))
            {
              h_29 = ATgetArgument(g_29, 0);
              i_29 = ATgetArgument(g_29, 1);
              n_28 :
              if(match_cons(h_29, sym_Assign_1))
                {
                  z_28 = ATgetArgument(h_29, 0);
                  o_28 :
                  if(match_cons(z_28, sym_Var_1))
                    {
                      a_29 = ATgetArgument(z_28, 0);
                      p_28 :
                      if(match_cons(i_29, sym_Seq_2))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          m_29 = ATgetArgument(i_29, 1);
                          q_28 :
                          if(match_cons(j_29, sym_Assign_2))
                            {
                              k_29 = ATgetArgument(j_29, 0);
                              x_28 = ATgetArgument(j_29, 1);
                              r_28 :
                              if(match_cons(k_29, sym_Var_1))
                                {
                                  l_29 = ATgetArgument(k_29, 0);
                                  s_28 :
                                  if(match_cons(x_28, sym_Var_1))
                                    {
                                      y_28 = ATgetArgument(x_28, 0);
                                      {
                                        ATerm s_29 = NULL,t_29 = NULL,v_29 = NULL;
                                        if(((a_29 != NULL) && (a_29 != y_28)))
                                          _fail(y_28);
                                        else
                                          a_29 = y_28;
                                        {
                                          if(((s_29 != NULL) && (s_29 != m_29)))
                                            _fail(m_29);
                                          else
                                            s_29 = m_29;
                                          {
                                            ATerm n_10;
                                            n_10 = t;
                                            {
                                              ATerm u_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(e_29));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          u_29 = t;
                                                          if(((t_29 != NULL) && (t_29 != u_29)))
                                                            _fail(u_29);
                                                          else
                                                            t_29 = u_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = n_10;
                                            {
                                              ATerm w_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(s_29));
                                              {
                                                t = substitute_2(t, IsVar_0, _id);
                                                {
                                                  w_29 = t;
                                                  if(((v_29 != NULL) && (v_29 != w_29)))
                                                    _fail(w_29);
                                                  else
                                                    v_29 = w_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(v_29)));
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
                              if(match_cons(j_29, sym_Assign_1))
                                {
                                  k_29 = ATgetArgument(j_29, 0);
                                  t_28 :
                                  if(match_cons(k_29, sym_Var_1))
                                    {
                                      l_29 = ATgetArgument(k_29, 0);
                                      {
                                        ATerm b_30 = NULL,d_30 = NULL;
                                        ATerm o_10;
                                        o_10 = t;
                                        {
                                          ATerm c_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(e_29));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(l_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      c_30 = t;
                                                      if(((b_30 != NULL) && (b_30 != c_30)))
                                                        _fail(c_30);
                                                      else
                                                        b_30 = c_30;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = o_10;
                                        {
                                          ATerm e_30 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(m_29));
                                          {
                                            t = substitute_2(t, IsVar_0, _id);
                                            {
                                              e_30 = t;
                                              if(((d_30 != NULL) && (d_30 != e_30)))
                                                _fail(e_30);
                                              else
                                                d_30 = e_30;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_29))), not_null(d_30)));
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
                  if(match_cons(h_29, sym_Assign_2))
                    {
                      z_28 = ATgetArgument(h_29, 0);
                      b_29 = ATgetArgument(h_29, 1);
                      u_28 :
                      if(match_cons(z_28, sym_Var_1))
                        {
                          a_29 = ATgetArgument(z_28, 0);
                          v_28 :
                          if(match_cons(b_29, sym_Var_1))
                            {
                              c_29 = ATgetArgument(b_29, 0);
                              {
                                ATerm j_30 = NULL,l_30 = NULL;
                                ATerm a_11;
                                a_11 = t;
                                {
                                  ATerm k_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(e_29));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATinsert(ATempty, not_null(a_29)));
                                      {
                                        t = diff_0(t);
                                        {
                                          k_30 = t;
                                          if(((j_30 != NULL) && (j_30 != k_30)))
                                            _fail(k_30);
                                          else
                                            j_30 = k_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = a_11;
                                {
                                  ATerm m_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_29))), not_null(i_29));
                                  {
                                    t = substitute_2(t, IsVar_0, _id);
                                    {
                                      m_30 = t;
                                      if(((l_30 != NULL) && (l_30 != m_30)))
                                        _fail(m_30);
                                      else
                                        l_30 = m_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_30), not_null(l_30));
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  w_31 = t;
  u_31 :
  if(match_cons(w_31, sym_Seq_2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      v_31 :
      if(match_cons(y_31, sym_Let_2))
        {
          z_31 = ATgetArgument(y_31, 0);
          a_32 = ATgetArgument(y_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_31), not_null(a_32)));
        }
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
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Cong_2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,b_34 = NULL,d_34 = NULL,f_34 = NULL;
        ATerm b_11;
        b_11 = t;
        {
          ATerm h_33 = NULL;
          t = not_null(y_32);
          {
            ATerm k_33 = NULL;
            t = map_1(t, new_0);
            {
              h_33 = t;
              {
                if(((e_33 != NULL) && (e_33 != h_33)))
                  _fail(h_33);
                else
                  e_33 = h_33;
                {
                  t = not_null(e_33);
                  {
                    ATerm l_33 = NULL;
                    ATerm i_1 (ATerm t)
                    {
                      ATerm i_33 = NULL;
                      ATerm j_33 = NULL;
                      j_33 = t;
                      if(((i_33 != NULL) && (i_33 != j_33)))
                        _fail(j_33);
                      else
                        i_33 = j_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_33));
                      return(t);
                    }
                    t = map_1(t, i_1);
                    {
                      k_33 = t;
                      {
                        if(((b_33 != NULL) && (b_33 != k_33)))
                          _fail(k_33);
                        else
                          b_33 = k_33;
                        {
                          ATerm m_33 = NULL;
                          t = new_0(t);
                          {
                            l_33 = t;
                            {
                              if(((c_33 != NULL) && (c_33 != l_33)))
                                _fail(l_33);
                              else
                                c_33 = l_33;
                              {
                                t = not_null(y_32);
                                {
                                  ATerm p_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    m_33 = t;
                                    {
                                      if(((f_33 != NULL) && (f_33 != m_33)))
                                        _fail(m_33);
                                      else
                                        f_33 = m_33;
                                      {
                                        t = not_null(f_33);
                                        {
                                          ATerm q_33 = NULL,a_34 = NULL;
                                          ATerm j_1 (ATerm t)
                                          {
                                            ATerm n_33 = NULL;
                                            ATerm o_33 = NULL;
                                            o_33 = t;
                                            if(((n_33 != NULL) && (n_33 != o_33)))
                                              _fail(o_33);
                                            else
                                              n_33 = o_33;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33));
                                            return(t);
                                          }
                                          t = map_1(t, j_1);
                                          {
                                            p_33 = t;
                                            {
                                              if(((d_33 != NULL) && (d_33 != p_33)))
                                                _fail(p_33);
                                              else
                                                d_33 = p_33;
                                              {
                                                ATerm r_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(f_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    r_33 = t;
                                                    if(((q_33 != NULL) && (q_33 != r_33)))
                                                      _fail(r_33);
                                                    else
                                                      q_33 = r_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(y_32));
                                                  {
                                                    ATerm k_1 (ATerm t)
                                                    {
                                                      ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
                                                      s_33 = t;
                                                      p_32 :
                                                      if(match_cons(s_33, sym__2))
                                                        {
                                                          t_33 = ATgetArgument(s_33, 0);
                                                          w_33 = ATgetArgument(s_33, 1);
                                                          q_32 :
                                                          if(match_cons(t_33, sym__2))
                                                            {
                                                              u_33 = ATgetArgument(t_33, 0);
                                                              v_33 = ATgetArgument(t_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_33)))));
                                                            }
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
                                                    t = zip_1(t, k_1);
                                                    {
                                                      a_34 = t;
                                                      if(((g_33 != NULL) && (g_33 != a_34)))
                                                        _fail(a_34);
                                                      else
                                                        g_33 = a_34;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = b_11;
        {
          ATerm c_11;
          c_11 = t;
          {
            ATerm c_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(f_33));
            {
              ATerm d_11 = t;
              int e_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = d_11;
                  t = conc_more_lists_0(t);
                }
              {
                c_34 = t;
                if(((b_34 != NULL) && (b_34 != c_34)))
                  _fail(c_34);
                else
                  b_34 = c_34;
              }
            }
          }
          t = c_11;
          {
            ATerm f_11;
            f_11 = t;
            {
              ATerm e_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_32), not_null(b_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33))));
              {
                t = Mapp2_0(t);
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
              }
            }
            t = f_11;
            {
              ATerm g_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_32), not_null(d_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33))));
              {
                t = Bapp2_0(t);
                {
                  g_34 = t;
                  if(((f_34 != NULL) && (f_34 != g_34)))
                    _fail(g_34);
                  else
                    f_34 = g_34;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(b_34)), not_null(c_33)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(g_33)), not_null(f_34))));
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
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_cons(l_35, sym_Build_1))
    {
      m_35 = ATgetArgument(l_35, 0);
      {
        ATerm i_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
            ATerm s_35 = NULL;
            ATerm w_35 = NULL;
            t = new_0(t);
            {
              s_35 = t;
              {
                if(((q_35 != NULL) && (q_35 != s_35)))
                  _fail(s_35);
                else
                  q_35 = s_35;
                {
                  t = not_null(m_35);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
                      t_35 = t;
                      a_35 :
                      if(match_cons(t_35, sym_Anno_2))
                        {
                          u_35 = ATgetArgument(t_35, 0);
                          v_35 = ATgetArgument(t_35, 1);
                          {
                            if(((o_35 != NULL) && (o_35 != u_35)))
                              _fail(u_35);
                            else
                              o_35 = u_35;
                            {
                              if(((p_35 != NULL) && (p_35 != v_35)))
                                _fail(v_35);
                              else
                                p_35 = v_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35));
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
                      w_35 = t;
                      if(((r_35 != NULL) && (r_35 != w_35)))
                        _fail(w_35);
                      else
                        r_35 = w_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_35)), not_null(o_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_35))));
            LocalPopChoice(w_11);
          }
        else
          {
            t = i_11;
            {
              ATerm y_11 = t;
              int z_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
                  ATerm b_36 = NULL;
                  ATerm e_36 = NULL;
                  t = new_0(t);
                  {
                    b_36 = t;
                    {
                      if(((z_35 != NULL) && (z_35 != b_36)))
                        _fail(b_36);
                      else
                        z_35 = b_36;
                      {
                        t = not_null(m_35);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm c_36 = NULL,d_36 = NULL;
                            c_36 = t;
                            e_35 :
                            if(match_cons(c_36, sym_RootApp_1))
                              {
                                d_36 = ATgetArgument(c_36, 0);
                                {
                                  if(((y_35 != NULL) && (y_35 != d_36)))
                                    _fail(d_36);
                                  else
                                    y_35 = d_36;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35));
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
                            e_36 = t;
                            if(((a_36 != NULL) && (a_36 != e_36)))
                              _fail(e_36);
                            else
                              a_36 = e_36;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_36))));
                  LocalPopChoice(z_11);
                }
              else
                {
                  t = y_11;
                  {
                    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
                    ATerm k_36 = NULL;
                    ATerm o_36 = NULL;
                    t = new_0(t);
                    {
                      k_36 = t;
                      {
                        if(((i_36 != NULL) && (i_36 != k_36)))
                          _fail(k_36);
                        else
                          i_36 = k_36;
                        {
                          t = not_null(m_35);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
                              l_36 = t;
                              i_35 :
                              if(match_cons(l_36, sym_App_2))
                                {
                                  m_36 = ATgetArgument(l_36, 0);
                                  n_36 = ATgetArgument(l_36, 1);
                                  {
                                    if(((g_36 != NULL) && (g_36 != m_36)))
                                      _fail(m_36);
                                    else
                                      g_36 = m_36;
                                    {
                                      if(((h_36 != NULL) && (h_36 != n_36)))
                                        _fail(n_36);
                                      else
                                        h_36 = n_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_36));
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
                              o_36 = t;
                              if(((j_36 != NULL) && (j_36 != o_36)))
                                _fail(o_36);
                              else
                                j_36 = o_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_36), not_null(h_36), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_36))));
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
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_37)), not_null(e_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  n_37 = t;
  k_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      r_37 = ATgetArgument(n_37, 1);
      l_37 :
      if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
        {
          p_37 = ATgetFirst((ATermList) o_37);
          q_37 = (ATerm) ATgetNext((ATermList) o_37);
          m_37 :
          if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
            {
              s_37 = ATgetFirst((ATermList) r_37);
              t_37 = (ATerm) ATgetNext((ATermList) r_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_37), not_null(s_37)), (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(t_37)));
            }
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
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  a_38 :
  if(match_cons(d_38, sym__2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      b_38 :
      if(((ATgetType(e_38) == AT_LIST) && ATisEmpty(e_38)))
        {
          c_38 :
          if(((ATgetType(f_38) == AT_LIST) && ATisEmpty(f_38)))
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
ATerm genzip_4 (ATerm t, ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm))
{
  ATerm h_38 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        {
          t = w_104(t);
          {
            t = _2(t, y_104, h_38);
            t = x_104(t);
          }
        }
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm a_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,u_39 = NULL;
  g_39 = t;
  z_38 :
  if(match_cons(g_39, sym_Call_2))
    {
      h_39 = ATgetArgument(g_39, 0);
      j_39 = ATgetArgument(g_39, 1);
      a_39 :
      if(match_cons(h_39, sym_SVar_1))
        {
          i_39 = ATgetArgument(h_39, 0);
          b_39 :
          if(match_string(i_39, "Anno_Cong__"))
            {
              c_39 :
              if(((ATgetType(j_39) == AT_LIST) && !(ATisEmpty(j_39))))
                {
                  k_39 = ATgetFirst((ATermList) j_39);
                  n_39 = (ATerm) ATgetNext((ATermList) j_39);
                  d_39 :
                  if(match_cons(k_39, sym_Cong_2))
                    {
                      l_39 = ATgetArgument(k_39, 0);
                      m_39 = ATgetArgument(k_39, 1);
                      e_39 :
                      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
                        {
                          o_39 = ATgetFirst((ATermList) n_39);
                          u_39 = (ATerm) ATgetNext((ATermList) n_39);
                          f_39 :
                          if(((ATgetType(u_39) == AT_LIST) && ATisEmpty(u_39)))
                            {
                              {
                                ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,s_40 = NULL,z_42 = NULL,b_43 = NULL,d_43 = NULL;
                                ATerm d_12;
                                d_12 = t;
                                {
                                  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(o_39));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      t_40 = t;
                                      v_38 :
                                      if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
                                        {
                                          u_40 = ATgetFirst((ATermList) t_40);
                                          v_40 = (ATerm) ATgetNext((ATermList) t_40);
                                          {
                                            ATerm h_41 = NULL;
                                            if(((h_40 != NULL) && (h_40 != u_40)))
                                              _fail(u_40);
                                            else
                                              h_40 = u_40;
                                            {
                                              if(((l_40 != NULL) && (l_40 != v_40)))
                                                _fail(v_40);
                                              else
                                                l_40 = v_40;
                                              {
                                                ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
                                                ATerm o_1 (ATerm t)
                                                {
                                                  ATerm f_41 = NULL;
                                                  ATerm g_41 = NULL;
                                                  g_41 = t;
                                                  if(((f_41 != NULL) && (f_41 != g_41)))
                                                    _fail(g_41);
                                                  else
                                                    f_41 = g_41;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_41));
                                                  return(t);
                                                }
                                                t = map_1(t, o_1);
                                                {
                                                  h_41 = t;
                                                  {
                                                    if(((i_40 != NULL) && (i_40 != h_41)))
                                                      _fail(h_41);
                                                    else
                                                      i_40 = h_41;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(o_39));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          i_41 = t;
                                                          u_38 :
                                                          if(((ATgetType(i_41) == AT_LIST) && !(ATisEmpty(i_41))))
                                                            {
                                                              j_41 = ATgetFirst((ATermList) i_41);
                                                              k_41 = (ATerm) ATgetNext((ATermList) i_41);
                                                              {
                                                                ATerm i_42 = NULL;
                                                                if(((j_40 != NULL) && (j_40 != j_41)))
                                                                  _fail(j_41);
                                                                else
                                                                  j_40 = j_41;
                                                                {
                                                                  if(((m_40 != NULL) && (m_40 != k_41)))
                                                                    _fail(k_41);
                                                                  else
                                                                    m_40 = k_41;
                                                                  {
                                                                    ATerm j_42 = NULL,y_42 = NULL;
                                                                    ATerm p_1 (ATerm t)
                                                                    {
                                                                      ATerm l_41 = NULL;
                                                                      ATerm m_41 = NULL;
                                                                      m_41 = t;
                                                                      if(((l_41 != NULL) && (l_41 != m_41)))
                                                                        _fail(m_41);
                                                                      else
                                                                        l_41 = m_41;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_41));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, p_1);
                                                                    {
                                                                      i_42 = t;
                                                                      {
                                                                        if(((k_40 != NULL) && (k_40 != i_42)))
                                                                          _fail(i_42);
                                                                        else
                                                                          k_40 = i_42;
                                                                        {
                                                                          ATerm k_42 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), not_null(m_40));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              k_42 = t;
                                                                              if(((j_42 != NULL) && (j_42 != k_42)))
                                                                                _fail(k_42);
                                                                              else
                                                                                j_42 = k_42;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_42), (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(o_39)));
                                                                            {
                                                                              ATerm q_1 (ATerm t)
                                                                              {
                                                                                ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
                                                                                l_42 = t;
                                                                                r_38 :
                                                                                if(match_cons(l_42, sym__2))
                                                                                  {
                                                                                    m_42 = ATgetArgument(l_42, 0);
                                                                                    p_42 = ATgetArgument(l_42, 1);
                                                                                    s_38 :
                                                                                    if(match_cons(m_42, sym__2))
                                                                                      {
                                                                                        n_42 = ATgetArgument(m_42, 0);
                                                                                        o_42 = ATgetArgument(m_42, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_42)))));
                                                                                      }
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
                                                                              t = zip_1(t, q_1);
                                                                              {
                                                                                y_42 = t;
                                                                                if(((s_40 != NULL) && (s_40 != y_42)))
                                                                                  _fail(y_42);
                                                                                else
                                                                                  s_40 = y_42;
                                                                              }
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
                                t = d_12;
                                {
                                  ATerm h_12;
                                  h_12 = t;
                                  {
                                    ATerm a_43 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), not_null(m_40));
                                    {
                                      ATerm l_12 = t;
                                      int q_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(q_12);
                                        }
                                      else
                                        {
                                          t = l_12;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        a_43 = t;
                                        if(((z_42 != NULL) && (z_42 != a_43)))
                                          _fail(a_43);
                                        else
                                          z_42 = a_43;
                                      }
                                    }
                                  }
                                  t = h_12;
                                  {
                                    ATerm r_12;
                                    r_12 = t;
                                    {
                                      ATerm c_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_39), not_null(i_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_40))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          c_43 = t;
                                          if(((b_43 != NULL) && (b_43 != c_43)))
                                            _fail(c_43);
                                          else
                                            b_43 = c_43;
                                        }
                                      }
                                    }
                                    t = r_12;
                                    {
                                      ATerm e_43 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_39), not_null(k_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          e_43 = t;
                                          if(((d_43 != NULL) && (d_43 != e_43)))
                                            _fail(e_43);
                                          else
                                            d_43 = e_43;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(z_42)), not_null(j_40)), not_null(h_40)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_40)), not_null(d_43))));
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
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_As_2))
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
            t = s_90(t);
            {
              w_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm a_45 = NULL;
                  t = t_90(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(w_44), not_null(y_44)), not_null(u_44));
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
ATerm Prim_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym_Prim_2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        ATerm t_45 = NULL,v_45 = NULL;
        ATerm u_45 = NULL;
        t = SSLgetAnnotations(not_null(n_45));
        {
          u_45 = t;
          if(((t_45 != NULL) && (t_45 != u_45)))
            _fail(u_45);
          else
            t_45 = u_45;
        }
        {
          t = not_null(o_45);
          {
            ATerm x_45 = NULL;
            t = p_86(t);
            {
              v_45 = t;
              {
                t = not_null(p_45);
                {
                  ATerm z_45 = NULL;
                  t = q_86(t);
                  {
                    x_45 = t;
                    {
                      ATerm a_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_45), not_null(x_45)), not_null(t_45));
                      {
                        a_46 = t;
                        if(((z_45 != NULL) && (z_45 != a_46)))
                          _fail(a_46);
                        else
                          z_45 = a_46;
                      }
                      t = not_null(z_45);
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
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_Explode_2))
    {
      n_46 = ATgetArgument(m_46, 0);
      o_46 = ATgetArgument(m_46, 1);
      {
        ATerm s_46 = NULL,u_46 = NULL;
        ATerm t_46 = NULL;
        t = SSLgetAnnotations(not_null(m_46));
        {
          t_46 = t;
          if(((s_46 != NULL) && (s_46 != t_46)))
            _fail(t_46);
          else
            s_46 = t_46;
        }
        {
          t = not_null(n_46);
          {
            ATerm w_46 = NULL;
            t = o_90(t);
            {
              u_46 = t;
              {
                t = not_null(o_46);
                {
                  ATerm y_46 = NULL;
                  t = p_90(t);
                  {
                    w_46 = t;
                    {
                      ATerm d_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(u_46), not_null(w_46)), not_null(s_46));
                      {
                        d_47 = t;
                        if(((y_46 != NULL) && (y_46 != d_47)))
                          _fail(d_47);
                        else
                          y_46 = d_47;
                      }
                      t = not_null(y_46);
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
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  q_47 :
  if(match_cons(r_47, sym_Op_2))
    {
      s_47 = ATgetArgument(r_47, 0);
      t_47 = ATgetArgument(r_47, 1);
      {
        ATerm x_47 = NULL,z_47 = NULL;
        ATerm y_47 = NULL;
        t = SSLgetAnnotations(not_null(r_47));
        {
          y_47 = t;
          if(((x_47 != NULL) && (x_47 != y_47)))
            _fail(y_47);
          else
            x_47 = y_47;
        }
        {
          t = not_null(s_47);
          {
            ATerm b_48 = NULL;
            t = t_88(t);
            {
              z_47 = t;
              {
                t = not_null(t_47);
                {
                  ATerm d_48 = NULL;
                  t = u_88(t);
                  {
                    b_48 = t;
                    {
                      ATerm e_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_47), not_null(b_48)), not_null(x_47));
                      {
                        e_48 = t;
                        if(((d_48 != NULL) && (d_48 != e_48)))
                          _fail(e_48);
                        else
                          d_48 = e_48;
                      }
                      t = not_null(d_48);
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_98(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm c_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = pat_td_1(t, k_98);
                return(t);
              }
              t = fetch_1(t, s_1);
              return(t);
            }
            t = Op_2(t, _id, r_1);
            LocalPopChoice(j_13);
          }
        else
          {
            t = c_13;
            {
              ATerm k_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, k_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm m_13 = t;
                    int n_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, k_98);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
                        LocalPopChoice(n_13);
                      }
                    else
                      {
                        t = m_13;
                        {
                          ATerm o_13 = t;
                          int p_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, k_98);
                                  return(t);
                                }
                                t = fetch_1(t, w_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, v_1);
                              LocalPopChoice(p_13);
                            }
                          else
                            {
                              t = o_13;
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, k_98);
                                  return(t);
                                }
                                t = As_2(t, _id, x_1);
                              }
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
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Match_1))
    {
      g_49 = ATgetArgument(f_49, 0);
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
            ATerm p_49 = NULL;
            ATerm t_49 = NULL;
            t = new_0(t);
            {
              p_49 = t;
              {
                if(((n_49 != NULL) && (n_49 != p_49)))
                  _fail(p_49);
                else
                  n_49 = p_49;
                {
                  t = not_null(g_49);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
                      q_49 = t;
                      u_48 :
                      if(match_cons(q_49, sym_Anno_2))
                        {
                          r_49 = ATgetArgument(q_49, 0);
                          s_49 = ATgetArgument(q_49, 1);
                          {
                            if(((l_49 != NULL) && (l_49 != r_49)))
                              _fail(r_49);
                            else
                              l_49 = r_49;
                            {
                              if(((m_49 != NULL) && (m_49 != s_49)))
                                _fail(s_49);
                              else
                                m_49 = s_49;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_49)), not_null(l_49));
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
                      t_49 = t;
                      if(((o_49 != NULL) && (o_49 != t_49)))
                        _fail(t_49);
                      else
                        o_49 = t_49;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_49)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_49)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_49))))));
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
                  ATerm y_49 = NULL;
                  ATerm b_50 = NULL;
                  t = new_0(t);
                  {
                    y_49 = t;
                    {
                      if(((w_49 != NULL) && (w_49 != y_49)))
                        _fail(y_49);
                      else
                        w_49 = y_49;
                      {
                        t = not_null(g_49);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm z_49 = NULL,a_50 = NULL;
                            z_49 = t;
                            y_48 :
                            if(match_cons(z_49, sym_RootApp_1))
                              {
                                a_50 = ATgetArgument(z_49, 0);
                                {
                                  if(((v_49 != NULL) && (v_49 != a_50)))
                                    _fail(a_50);
                                  else
                                    v_49 = a_50;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_49));
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
                            b_50 = t;
                            if(((x_49 != NULL) && (x_49 != b_50)))
                              _fail(b_50);
                            else
                              x_49 = b_50;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_49))), not_null(v_49))));
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm l_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
                    ATerm s_50 = NULL;
                    ATerm w_50 = NULL;
                    t = new_0(t);
                    {
                      s_50 = t;
                      {
                        if(((q_50 != NULL) && (q_50 != s_50)))
                          _fail(s_50);
                        else
                          q_50 = s_50;
                        {
                          t = not_null(g_49);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
                              t_50 = t;
                              c_49 :
                              if(match_cons(t_50, sym_App_2))
                                {
                                  u_50 = ATgetArgument(t_50, 0);
                                  v_50 = ATgetArgument(t_50, 1);
                                  {
                                    if(((p_50 != NULL) && (p_50 != u_50)))
                                      _fail(u_50);
                                    else
                                      p_50 = u_50;
                                    {
                                      if(((l_50 != NULL) && (l_50 != v_50)))
                                        _fail(v_50);
                                      else
                                        l_50 = v_50;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_50));
                                    }
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
                              w_50 = t;
                              if(((r_50 != NULL) && (r_50 != w_50)))
                                _fail(w_50);
                              else
                                r_50 = w_50;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_50))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_50)), not_null(p_50)))));
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
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_Cong_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm c_52 = NULL;
        ATerm g_52 = NULL;
        t = not_null(z_51);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm d_52 = NULL,e_52 = NULL;
            e_52 = t;
            u_51 :
            if(match_cons(e_52, sym_Match_1))
              {
                d_52 = ATgetArgument(e_52, 0);
                t = not_null(d_52);
              }
            else
              {
                if(match_cons(e_52, sym_Id_0))
                  {
                    t = term_h_14;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, b_2);
          {
            g_52 = t;
            if(((c_52 != NULL) && (c_52 != g_52)))
              _fail(g_52);
            else
              c_52 = g_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_51), not_null(c_52)));
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
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
  o_52 = t;
  m_52 :
  if(match_cons(o_52, sym_Scope_2))
    {
      p_52 = ATgetArgument(o_52, 0);
      q_52 = ATgetArgument(o_52, 1);
      n_52 :
      if(((ATgetType(p_52) == AT_LIST) && ATisEmpty(p_52)))
        {
          t = not_null(q_52);
        }
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
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  z_52 :
  if(match_cons(m_53, sym_Where_1))
    {
      n_53 = ATgetArgument(m_53, 0);
      a_53 :
      if(match_cons(n_53, sym_Seq_2))
        {
          l_53 = ATgetArgument(n_53, 0);
          h_53 = ATgetArgument(n_53, 1);
          b_53 :
          if(match_cons(l_53, sym_Where_1))
            {
              g_53 = ATgetArgument(l_53, 0);
              c_53 :
              if(match_cons(h_53, sym_Seq_2))
                {
                  i_53 = ATgetArgument(h_53, 0);
                  k_53 = ATgetArgument(h_53, 1);
                  d_53 :
                  if(match_cons(i_53, sym_Build_1))
                    {
                      j_53 = ATgetArgument(i_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_53)), not_null(k_53))));
                    }
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
          if(match_cons(n_53, sym_Where_1))
            {
              l_53 = ATgetArgument(n_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(m_53, sym_Test_1))
        {
          n_53 = ATgetArgument(m_53, 0);
          e_53 :
          if(match_cons(n_53, sym_Test_1))
            {
              l_53 = ATgetArgument(n_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_53, sym_Not_1))
            {
              n_53 = ATgetArgument(m_53, 0);
              f_53 :
              if(match_cons(n_53, sym_Not_1))
                {
                  l_53 = ATgetArgument(n_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(m_53, sym_LChoice_2))
                {
                  n_53 = ATgetArgument(m_53, 0);
                  o_53 = ATgetArgument(m_53, 1);
                  {
                    if(((n_53 != NULL) && (n_53 != o_53)))
                      _fail(o_53);
                    else
                      n_53 = o_53;
                    t = not_null(n_53);
                  }
                }
              else
                {
                  if(match_cons(m_53, sym_Choice_2))
                    {
                      n_53 = ATgetArgument(m_53, 0);
                      o_53 = ATgetArgument(m_53, 1);
                      {
                        if(((n_53 != NULL) && (n_53 != o_53)))
                          _fail(o_53);
                        else
                          n_53 = o_53;
                        t = not_null(n_53);
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
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  l_54 = t;
  h_54 :
  if(match_cons(l_54, sym_LChoice_2))
    {
      m_54 = ATgetArgument(l_54, 0);
      p_54 = ATgetArgument(l_54, 1);
      i_54 :
      if(match_cons(m_54, sym_LChoice_2))
        {
          n_54 = ATgetArgument(m_54, 0);
          o_54 = ATgetArgument(m_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_54), not_null(p_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(l_54, sym_Seq_2))
        {
          m_54 = ATgetArgument(l_54, 0);
          p_54 = ATgetArgument(l_54, 1);
          j_54 :
          if(match_cons(m_54, sym_Seq_2))
            {
              n_54 = ATgetArgument(m_54, 0);
              o_54 = ATgetArgument(m_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(p_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_54, sym_Choice_2))
            {
              m_54 = ATgetArgument(l_54, 0);
              p_54 = ATgetArgument(l_54, 1);
              k_54 :
              if(match_cons(m_54, sym_Choice_2))
                {
                  n_54 = ATgetArgument(m_54, 0);
                  o_54 = ATgetArgument(m_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_54), not_null(p_54)));
                }
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
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  p_55 :
  if(match_cons(w_55, sym_Lets_2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_55), not_null(y_55));
    }
  else
    {
      if(match_cons(w_55, sym_LChoices_1))
        {
          x_55 = ATgetArgument(w_55, 0);
          q_55 :
          if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
            {
              t_55 = ATgetFirst((ATermList) x_55);
              u_55 = (ATerm) ATgetNext((ATermList) x_55);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_55)));
            }
          else
            {
              if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
                {
                  t = term_m_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_55, sym_Choices_1))
            {
              x_55 = ATgetArgument(w_55, 0);
              r_55 :
              if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
                {
                  t_55 = ATgetFirst((ATermList) x_55);
                  u_55 = (ATerm) ATgetNext((ATermList) x_55);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_55)));
                }
              else
                {
                  if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
                    {
                      t = term_m_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_55, sym_Seqs_1))
                {
                  x_55 = ATgetArgument(w_55, 0);
                  s_55 :
                  if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
                    {
                      t_55 = ATgetFirst((ATermList) x_55);
                      u_55 = (ATerm) ATgetNext((ATermList) x_55);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_55)));
                    }
                  else
                    {
                      if(((ATgetType(x_55) == AT_LIST) && ATisEmpty(x_55)))
                        {
                          t = term_i_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_55, sym_DefaultVarDec_1))
                    {
                      x_55 = ATgetArgument(w_55, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_14), term_l_14));
                    }
                  else
                    {
                      if(match_cons(w_55, sym_InfixApp_3))
                        {
                          x_55 = ATgetArgument(w_55, 0);
                          y_55 = ATgetArgument(w_55, 1);
                          v_55 = ATgetArgument(w_55, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_55), (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_55)), not_null(x_55))));
                        }
                      else
                        {
                          if(match_cons(w_55, sym_BAM_3))
                            {
                              x_55 = ATgetArgument(w_55, 0);
                              y_55 = ATgetArgument(w_55, 1);
                              v_55 = ATgetArgument(w_55, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_55))), not_null(x_55)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_55))));
                            }
                          else
                            {
                              if(match_cons(w_55, sym_AM_2))
                                {
                                  x_55 = ATgetArgument(w_55, 0);
                                  y_55 = ATgetArgument(w_55, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_55)));
                                }
                              else
                                {
                                  if(match_cons(w_55, sym_MA_2))
                                    {
                                      x_55 = ATgetArgument(w_55, 0);
                                      y_55 = ATgetArgument(w_55, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_55)), not_null(y_55));
                                    }
                                  else
                                    {
                                      if(match_cons(w_55, sym_BA_2))
                                        {
                                          x_55 = ATgetArgument(w_55, 0);
                                          y_55 = ATgetArgument(w_55, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_55)), not_null(x_55));
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
  ATerm k_57 = NULL,l_57 = NULL;
  k_57 = t;
  i_57 :
  if(match_cons(k_57, sym_Where_1))
    {
      l_57 = ATgetArgument(k_57, 0);
      j_57 :
      if(match_cons(l_57, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  o_57 :
  if(match_cons(q_57, sym_LChoice_2))
    {
      r_57 = ATgetArgument(q_57, 0);
      s_57 = ATgetArgument(q_57, 1);
      p_57 :
      if(match_cons(s_57, sym_Fail_0))
        {
          t = not_null(r_57);
        }
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
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  w_57 :
  if(match_cons(y_57, sym_LChoice_2))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      x_57 :
      if(match_cons(z_57, sym_Fail_0))
        {
          t = not_null(a_58);
        }
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
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  e_58 :
  if(match_cons(g_58, sym_Choice_2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      f_58 :
      if(match_cons(i_58, sym_Fail_0))
        {
          t = not_null(h_58);
        }
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
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
  o_58 = t;
  m_58 :
  if(match_cons(o_58, sym_Choice_2))
    {
      p_58 = ATgetArgument(o_58, 0);
      q_58 = ATgetArgument(o_58, 1);
      n_58 :
      if(match_cons(p_58, sym_Fail_0))
        {
          t = not_null(q_58);
        }
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
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  y_58 :
  if(match_cons(z_58, sym_Cong_2))
    {
      a_59 = ATgetArgument(z_58, 0);
      b_59 = ATgetArgument(z_58, 1);
      {
        t = not_null(b_59);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm e_59 = NULL;
            e_59 = t;
            x_58 :
            if(!(match_cons(e_59, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, c_2);
        }
        t = term_m_7;
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
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  j_59 = t;
  h_59 :
  if(match_cons(j_59, sym_Path_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      i_59 :
      if(match_cons(l_59, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm r_59 = NULL,s_59 = NULL;
  r_59 = t;
  p_59 :
  if(match_cons(r_59, sym_One_1))
    {
      s_59 = ATgetArgument(r_59, 0);
      q_59 :
      if(match_cons(s_59, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm x_59 = NULL,y_59 = NULL;
  x_59 = t;
  v_59 :
  if(match_cons(x_59, sym_Some_1))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 :
      if(match_cons(y_59, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  b_60 :
  if(match_cons(d_60, sym_Rec_2))
    {
      e_60 = ATgetArgument(d_60, 0);
      f_60 = ATgetArgument(d_60, 1);
      c_60 :
      if(match_cons(f_60, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
  l_60 = t;
  j_60 :
  if(match_cons(l_60, sym_Scope_2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      k_60 :
      if(match_cons(n_60, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  r_60 :
  if(match_cons(t_60, sym_Seq_2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      s_60 :
      if(match_cons(u_60, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm b_61 = NULL,c_61 = NULL;
  b_61 = t;
  z_60 :
  if(match_cons(b_61, sym_Not_1))
    {
      c_61 = ATgetArgument(b_61, 0);
      a_61 :
      if(match_cons(c_61, sym_Fail_0))
        {
          t = term_i_14;
        }
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
  ATerm h_61 = NULL,i_61 = NULL;
  h_61 = t;
  f_61 :
  if(match_cons(h_61, sym_Test_1))
    {
      i_61 = ATgetArgument(h_61, 0);
      g_61 :
      if(match_cons(i_61, sym_Fail_0))
        {
          t = term_m_7;
        }
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
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  {
                    ATerm d_15 = t;
                    int f_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(f_15);
                      }
                    else
                      {
                        t = d_15;
                        {
                          ATerm u_15 = t;
                          int v_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(v_15);
                            }
                          else
                            {
                              t = u_15;
                              {
                                ATerm b_16 = t;
                                int c_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(c_16);
                                  }
                                else
                                  {
                                    t = b_16;
                                    {
                                      ATerm e_16 = t;
                                      int f_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(f_16);
                                        }
                                      else
                                        {
                                          t = e_16;
                                          {
                                            ATerm g_16 = t;
                                            int h_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(h_16);
                                              }
                                            else
                                              {
                                                t = g_16;
                                                {
                                                  ATerm w_16 = t;
                                                  int x_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
                                                            LocalPopChoice(z_16);
                                                          }
                                                        else
                                                          {
                                                            t = y_16;
                                                            {
                                                              ATerm a_17 = t;
                                                              int b_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(b_17);
                                                                }
                                                              else
                                                                {
                                                                  t = a_17;
                                                                  {
                                                                    ATerm c_17 = t;
                                                                    int d_17 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(d_17);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_17;
                                                                        {
                                                                          ATerm e_17 = t;
                                                                          int m_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(m_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_17;
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
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  l_61 :
  if(match_cons(n_61, sym_Match_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      m_61 :
      if(match_cons(o_61, sym_Wld_0))
        {
          t = term_i_14;
        }
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
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_Where_1))
    {
      u_61 = ATgetArgument(t_61, 0);
      s_61 :
      if(match_cons(u_61, sym_Id_0))
        {
          t = term_i_14;
        }
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
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_All_1))
    {
      a_62 = ATgetArgument(z_61, 0);
      y_61 :
      if(match_cons(a_62, sym_Id_0))
        {
          t = term_i_14;
        }
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
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  d_62 :
  if(match_cons(f_62, sym_Rec_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      e_62 :
      if(match_cons(h_62, sym_Id_0))
        {
          t = term_i_14;
        }
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
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  n_62 = t;
  l_62 :
  if(match_cons(n_62, sym_Scope_2))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      m_62 :
      if(match_cons(p_62, sym_Id_0))
        {
          t = term_i_14;
        }
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
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  u_62 :
  if(match_cons(y_62, sym_LChoice_2))
    {
      z_62 = ATgetArgument(y_62, 0);
      a_63 = ATgetArgument(y_62, 1);
      x_62 :
      if(match_cons(z_62, sym_Id_0))
        {
          t = term_i_14;
        }
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
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
  g_63 = t;
  e_63 :
  if(match_cons(g_63, sym_Seq_2))
    {
      h_63 = ATgetArgument(g_63, 0);
      i_63 = ATgetArgument(g_63, 1);
      f_63 :
      if(match_cons(i_63, sym_Id_0))
        {
          t = not_null(h_63);
        }
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
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  m_63 :
  if(match_cons(o_63, sym_Seq_2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      n_63 :
      if(match_cons(p_63, sym_Id_0))
        {
          t = not_null(q_63);
        }
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
  ATerm y_63 = NULL,z_63 = NULL;
  y_63 = t;
  u_63 :
  if(match_cons(y_63, sym_Not_1))
    {
      z_63 = ATgetArgument(y_63, 0);
      x_63 :
      if(match_cons(z_63, sym_Id_0))
        {
          t = term_m_7;
        }
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
  ATerm f_64 = NULL,g_64 = NULL;
  f_64 = t;
  d_64 :
  if(match_cons(f_64, sym_Test_1))
    {
      g_64 = ATgetArgument(f_64, 0);
      e_64 :
      if(match_cons(g_64, sym_Id_0))
        {
          t = term_i_14;
        }
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
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm v_17 = t;
              int x_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(x_17);
                }
              else
                {
                  t = v_17;
                  {
                    ATerm y_17 = t;
                    int z_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(z_17);
                      }
                    else
                      {
                        t = y_17;
                        {
                          ATerm l_18 = t;
                          int m_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(m_18);
                            }
                          else
                            {
                              t = l_18;
                              {
                                ATerm n_18 = t;
                                int o_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(o_18);
                                  }
                                else
                                  {
                                    t = n_18;
                                    {
                                      ATerm p_18 = t;
                                      int q_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(q_18);
                                        }
                                      else
                                        {
                                          t = p_18;
                                          {
                                            ATerm y_18 = t;
                                            int z_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(z_18);
                                              }
                                            else
                                              {
                                                t = y_18;
                                                {
                                                  ATerm a_19 = t;
                                                  int d_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(d_19);
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
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = l_19;
                  {
                    ATerm u_19 = t;
                    int v_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(v_19);
                      }
                    else
                      {
                        t = u_19;
                        {
                          ATerm w_19 = t;
                          int h_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(h_20);
                            }
                          else
                            {
                              t = w_19;
                              {
                                ATerm j_20 = t;
                                int k_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(k_20);
                                  }
                                else
                                  {
                                    t = j_20;
                                    {
                                      ATerm l_20 = t;
                                      int m_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
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
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm w_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = w_20;
            {
              ATerm z_20 = t;
              int a_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = z_20;
                  {
                    ATerm g_21 = t;
                    int i_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(i_21);
                      }
                    else
                      {
                        t = g_21;
                        {
                          ATerm j_21 = t;
                          int k_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
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
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(m_21);
                                  }
                                else
                                  {
                                    t = l_21;
                                    {
                                      ATerm p_21 = t;
                                      int q_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(q_21);
                                        }
                                      else
                                        {
                                          t = p_21;
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
ATerm repeat_2 (ATerm t, ATerm d_116 (ATerm), ATerm e_116 (ATerm))
{
  ATerm i_64 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        t = i_64(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = e_116(t);
      }
    return(t);
  }
  t = i_64(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_116 (ATerm))
{
  t = repeat_2(t, g_116, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm f_100 (ATerm))
{
  ATerm j_64 (ATerm t)
  {
    t = f_100(t);
    {
      t = _all(t, j_64);
      t = f_100(t);
    }
    return(t);
  }
  t = j_64(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm x_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(y_21);
        }
      else
        {
          t = x_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_2(t, e_2, _id);
    return(t);
  }
  t = downup_1(t, d_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  r_64 = t;
  q_64 :
  if(match_cons(r_64, sym_SDef_3))
    {
      s_64 = ATgetArgument(r_64, 0);
      t_64 = ATgetArgument(r_64, 1);
      u_64 = ATgetArgument(r_64, 2);
      {
        ATerm z_64 = NULL,b_65 = NULL;
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(r_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        {
          t = not_null(s_64);
          {
            ATerm d_65 = NULL;
            t = d_88(t);
            {
              b_65 = t;
              {
                t = not_null(t_64);
                {
                  ATerm f_65 = NULL;
                  t = e_88(t);
                  {
                    d_65 = t;
                    {
                      t = not_null(u_64);
                      {
                        ATerm j_65 = NULL;
                        t = f_88(t);
                        {
                          f_65 = t;
                          {
                            ATerm k_65 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(b_65), not_null(d_65), not_null(f_65)), not_null(z_64));
                            {
                              k_65 = t;
                              if(((j_65 != NULL) && (j_65 != k_65)))
                                _fail(k_65);
                              else
                                j_65 = k_65;
                            }
                            t = not_null(j_65);
                          }
                        }
                      }
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
  ATerm c_66 = NULL,d_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym_Strategies_1))
    {
      d_66 = ATgetArgument(c_66, 0);
      {
        ATerm g_66 = NULL,i_66 = NULL;
        ATerm h_66 = NULL;
        t = SSLgetAnnotations(not_null(c_66));
        {
          h_66 = t;
          if(((g_66 != NULL) && (g_66 != h_66)))
            _fail(h_66);
          else
            g_66 = h_66;
        }
        {
          t = not_null(d_66);
          {
            ATerm k_66 = NULL;
            t = h_89(t);
            {
              i_66 = t;
              {
                ATerm l_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_66)), not_null(g_66));
                {
                  l_66 = t;
                  if(((k_66 != NULL) && (k_66 != l_66)))
                    _fail(l_66);
                  else
                    k_66 = l_66;
                }
                t = not_null(k_66);
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
  ATerm v_66 = NULL,w_66 = NULL;
  v_66 = t;
  u_66 :
  if(match_cons(v_66, sym_Specification_1))
    {
      w_66 = ATgetArgument(v_66, 0);
      {
        ATerm z_66 = NULL,b_67 = NULL;
        ATerm a_67 = NULL;
        t = SSLgetAnnotations(not_null(v_66));
        {
          a_67 = t;
          if(((z_66 != NULL) && (z_66 != a_67)))
            _fail(a_67);
          else
            z_66 = a_67;
        }
        {
          t = not_null(w_66);
          {
            ATerm d_67 = NULL;
            t = j_89(t);
            {
              b_67 = t;
              {
                ATerm e_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_67)), not_null(z_66));
                {
                  e_67 = t;
                  if(((d_67 != NULL) && (d_67 != e_67)))
                    _fail(e_67);
                  else
                    d_67 = e_67;
                }
                t = not_null(d_67);
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
            t = SDef_3(t, _id, _id, h_98);
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
ATerm _2 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  o_67 :
  if(match_cons(p_67, sym__2))
    {
      q_67 = ATgetArgument(p_67, 0);
      r_67 = ATgetArgument(p_67, 1);
      {
        ATerm v_67 = NULL,x_67 = NULL;
        ATerm w_67 = NULL;
        t = SSLgetAnnotations(not_null(p_67));
        {
          w_67 = t;
          if(((v_67 != NULL) && (v_67 != w_67)))
            _fail(w_67);
          else
            v_67 = w_67;
        }
        {
          t = not_null(q_67);
          {
            ATerm z_67 = NULL;
            t = e_85(t);
            {
              x_67 = t;
              {
                t = not_null(r_67);
                {
                  ATerm b_68 = NULL;
                  t = f_85(t);
                  {
                    z_67 = t;
                    {
                      ATerm c_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_67), not_null(z_67)), not_null(v_67));
                      {
                        c_68 = t;
                        if(((b_68 != NULL) && (b_68 != c_68)))
                          _fail(c_68);
                        else
                          b_68 = c_68;
                      }
                      t = not_null(b_68);
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
  ATerm k_68 = NULL;
  ATerm z_21;
  z_21 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm l_68 = NULL,m_68 = NULL;
      l_68 = t;
      j_68 :
      if(match_cons(l_68, sym_Program_1))
        {
          m_68 = ATgetArgument(l_68, 0);
          if(((k_68 != NULL) && (k_68 != m_68)))
            _fail(m_68);
          else
            k_68 = m_68;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), not_null(k_68)), term_f_22));
      {
        t = printnl_0(t);
        {
          t = term_h_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  p_68 :
  if(match_cons(q_68, sym__2))
    {
      r_68 = ATgetArgument(q_68, 0);
      s_68 = ATgetArgument(q_68, 1);
      {
        ATerm i_22;
        i_22 = t;
        t = SSL_printnl(not_null(r_68), not_null(s_68));
        t = i_22;
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
  ATerm g_69 = NULL;
  g_69 = t;
  t = SSL_implode_string(not_null(g_69));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm l_69 = NULL,m_69 = NULL,x_69 = NULL;
        l_69 = t;
        k_69 :
        if(((ATgetType(l_69) == AT_LIST) && !(ATisEmpty(l_69))))
          {
            m_69 = ATgetFirst((ATermList) l_69);
            x_69 = (ATerm) ATgetNext((ATermList) l_69);
            {
              t = not_null(m_69);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(x_69);
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
  ATerm l_70 = NULL;
  ATerm n_70 = NULL;
  l_70 = t;
  {
    ATerm o_70 = NULL;
    ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
    t = not_null(l_70);
    {
      o_70 = t;
      {
        t = SSL_explode_term(not_null(o_70));
        {
          q_70 = t;
          j_70 :
          if(match_cons(q_70, sym__2))
            {
              r_70 = ATgetArgument(q_70, 0);
              s_70 = ATgetArgument(q_70, 1);
              k_70 :
              if(match_string(r_70, ""))
                {
                  if(((n_70 != NULL) && (n_70 != s_70)))
                    _fail(s_70);
                  else
                    n_70 = s_70;
                }
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
      t = not_null(n_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_106 (ATerm))
{
  ATerm w_70 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_70);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          t = Nil_0(t);
          t = y_106(t);
        }
      }
    return(t);
  }
  t = w_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  y_70 :
  if(match_cons(z_70, sym__2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      {
        t = not_null(a_71);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(b_71);
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
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_71 = NULL;
  h_71 = t;
  t = SSL_explode_string(not_null(h_71));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_71 = NULL;
  l_71 = t;
  t = SSL_is_string(not_null(l_71));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = a_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = m_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_2);
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            {
              ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
              u_71 = t;
              t_71 :
              if(match_cons(u_71, sym_Path_1))
                {
                  v_71 = ATgetArgument(u_71, 0);
                  t = not_null(v_71);
                }
              else
                {
                  if(match_cons(u_71, sym_Var_1))
                    {
                      v_71 = ATgetArgument(u_71, 0);
                      {
                        t = not_null(v_71);
                        {
                          ATerm o_23 = t;
                          int p_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_23);
                            }
                          else
                            {
                              t = o_23;
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = term_q_23;
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
                      if(match_cons(u_71, sym_Prefix_2))
                        {
                          v_71 = ATgetArgument(u_71, 0);
                          w_71 = ATgetArgument(u_71, 1);
                          {
                            ATerm b_72 = NULL,g_72 = NULL;
                            ATerm s_23;
                            s_23 = t;
                            {
                              ATerm f_72 = NULL;
                              t = not_null(v_71);
                              {
                                t = eval_config_0(t);
                                {
                                  f_72 = t;
                                  if(((b_72 != NULL) && (b_72 != f_72)))
                                    _fail(f_72);
                                  else
                                    b_72 = f_72;
                                }
                              }
                            }
                            t = s_23;
                            {
                              ATerm h_72 = NULL;
                              t = not_null(w_71);
                              {
                                t = eval_config_0(t);
                                {
                                  h_72 = t;
                                  if(((g_72 != NULL) && (g_72 != h_72)))
                                    _fail(h_72);
                                  else
                                    g_72 = h_72;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_72), not_null(g_72));
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
  ATerm p_72 = NULL;
  p_72 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_23, not_null(p_72));
    {
      t = table_get_0(t);
      {
        ATerm v_23 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_24;
              e_24 = t;
              {
                ATerm r_72 = NULL;
                ATerm s_72 = NULL;
                s_72 = t;
                if(((r_72 != NULL) && (r_72 != s_72)))
                  _fail(s_72);
                else
                  r_72 = s_72;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_23, not_null(p_72), not_null(r_72));
                  t = table_put_0(t);
                }
              }
              t = e_24;
            }
            LocalPopChoice(d_24);
          }
        else
          {
            t = v_23;
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
  ATerm f_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm w_72 = NULL;
        ATerm x_72 = NULL;
        t = term_v_24;
        {
          t = get_config_0(t);
          {
            x_72 = t;
            if(((w_72 != NULL) && (w_72 != x_72)))
              _fail(x_72);
            else
              w_72 = x_72;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_72), term_w_24);
          t = geq_0(t);
        }
      }
      t = p_24;
      t = m_123(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = f_24;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_cons(b_73, sym__2))
    {
      c_73 = ATgetArgument(b_73, 0);
      d_73 = ATgetArgument(b_73, 1);
      t = SSL_WriteToTextFile(not_null(c_73), not_null(d_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
  j_73 = t;
  i_73 :
  if(match_cons(j_73, sym__2))
    {
      k_73 = ATgetArgument(j_73, 0);
      l_73 = ATgetArgument(j_73, 1);
      t = SSL_WriteToBinaryFile(not_null(k_73), not_null(l_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_74 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm y_24 = t;
      int z_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm b_74 = NULL,c_74 = NULL;
            b_74 = t;
            x_73 :
            if(match_cons(b_74, sym_Output_1))
              {
                c_74 = ATgetArgument(b_74, 0);
                if(((a_74 != NULL) && (a_74 != c_74)))
                  _fail(c_74);
                else
                  a_74 = c_74;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_2);
          LocalPopChoice(z_24);
        }
      else
        {
          t = y_24;
          {
            ATerm d_74 = NULL;
            t = term_a_25;
            {
              d_74 = t;
              if(((a_74 != NULL) && (a_74 != d_74)))
                _fail(d_74);
              else
                a_74 = d_74;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = x_24;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(a_74);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm b_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm e_74 = NULL;
              e_74 = t;
              z_73 :
              if(!(match_cons(e_74, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(j_25);
        }
      else
        {
          t = b_25;
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
  ATerm k_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
  ATerm l_25;
  l_25 = t;
  t = dtime_0(t);
  t = l_25;
  {
    t = t_121(t);
    {
      ATerm n_25;
      n_25 = t;
      {
        ATerm l_74 = NULL;
        t = dtime_0(t);
        {
          l_74 = t;
          if(((k_74 != NULL) && (k_74 != l_74)))
            _fail(l_74);
          else
            k_74 = l_74;
        }
      }
      t = n_25;
      {
        m_74 = t;
        j_74 :
        if(match_cons(m_74, sym__2))
          {
            n_74 = ATgetArgument(m_74, 0);
            o_74 = ATgetArgument(m_74, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_74)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_74))), not_null(o_74));
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
  ATerm p_25;
  p_25 = t;
  {
    ATerm o_75 = NULL,q_75 = NULL;
    ATerm q_25;
    q_25 = t;
    {
      ATerm p_75 = NULL;
      t = p_120(t);
      {
        p_75 = t;
        if(((o_75 != NULL) && (o_75 != p_75)))
          _fail(p_75);
        else
          o_75 = p_75;
      }
    }
    t = q_25;
    {
      ATerm j_76 = NULL;
      j_76 = t;
      if(((q_75 != NULL) && (q_75 != j_76)))
        _fail(j_76);
      else
        q_75 = j_76;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_75)), not_null(o_75)));
        t = printnl_0(t);
      }
    }
  }
  t = p_25;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_77 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_77 = NULL;
      u_77 = t;
      {
        if(((t_77 != NULL) && (t_77 != u_77)))
          _fail(u_77);
        else
          t_77 = u_77;
        t = SSL_ReadFromFile(not_null(t_77));
      }
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_y_25;
          return(t);
        }
        t = debug_1(t, v_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_103 (ATerm), ATerm w_103 (ATerm))
{
  ATerm y_77 = NULL,a_78 = NULL;
  ATerm z_25;
  z_25 = t;
  {
    ATerm z_77 = NULL;
    t = v_103(t);
    {
      z_77 = t;
      if(((y_77 != NULL) && (y_77 != z_77)))
        _fail(z_77);
      else
        y_77 = z_77;
    }
  }
  t = z_25;
  {
    ATerm b_78 = NULL;
    t = w_103(t);
    {
      b_78 = t;
      if(((a_78 != NULL) && (a_78 != b_78)))
        _fail(b_78);
      else
        a_78 = b_78;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_77), not_null(a_78));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_78 = NULL;
  ATerm b_26;
  b_26 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          ATerm i_78 = NULL,j_78 = NULL;
          i_78 = t;
          f_78 :
          if(match_cons(i_78, sym_Input_1))
            {
              j_78 = ATgetArgument(i_78, 0);
              if(((h_78 != NULL) && (h_78 != j_78)))
                _fail(j_78);
              else
                h_78 = j_78;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, w_2);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm k_78 = NULL;
          t = term_e_26;
          {
            k_78 = t;
            if(((h_78 != NULL) && (h_78 != k_78)))
              _fail(k_78);
            else
              h_78 = k_78;
          }
        }
      }
  }
  t = b_26;
  {
    ATerm x_2 (ATerm t)
    {
      t = not_null(h_78);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm o_78 = NULL;
    o_78 = t;
    n_78 :
    if(!(match_string(o_78, "-v")))
      {
        if(!(match_string(o_78, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_h_26;
    t = set_config_0(t);
    t = term_i_26;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_78 = NULL;
    r_78 = t;
    p_78 :
    if(!(match_string(r_78, "-k")))
      {
        if(!(match_string(r_78, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm k_26;
    k_26 = t;
    {
      ATerm s_78 = NULL;
      ATerm t_78 = NULL;
      t = string_to_int_0(t);
      {
        t_78 = t;
        if(((s_78 != NULL) && (s_78 != t_78)))
          _fail(t_78);
        else
          s_78 = t_78;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_26, not_null(s_78));
        t = set_config_0(t);
      }
    }
    t = k_26;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_79 = NULL;
  g_79 = t;
  t = SSL_string_to_int(not_null(g_79));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm r_79 = NULL;
        r_79 = t;
        m_79 :
        if(!(match_string(r_79, "-S")))
          {
            if(!(match_string(r_79, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_b_27;
        t = set_config_0(t);
        t = term_e_27;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_f_27;
        return(t);
      }
      t = Option_3(t, e_3, f_3, g_3);
      LocalPopChoice(w_26);
    }
  else
    {
      t = t_26;
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm s_79 = NULL;
              s_79 = t;
              n_79 :
              if(!(match_string(s_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm v_79 = NULL;
              ATerm i_27;
              i_27 = t;
              {
                ATerm t_79 = NULL;
                ATerm u_79 = NULL;
                t = string_to_int_0(t);
                {
                  u_79 = t;
                  if(((t_79 != NULL) && (t_79 != u_79)))
                    _fail(u_79);
                  else
                    t_79 = u_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_24, not_null(t_79));
                  t = set_config_0(t);
                }
              }
              t = i_27;
              {
                ATerm w_79 = NULL;
                w_79 = t;
                if(((v_79 != NULL) && (v_79 != w_79)))
                  _fail(w_79);
                else
                  v_79 = w_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_79));
              }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, k_3);
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm x_79 = NULL;
                x_79 = t;
                q_79 :
                if(!(match_string(x_79, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_l_27;
                t = set_config_0(t);
                t = term_m_27;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_n_27;
                return(t);
              }
              t = Option_3(t, l_3, m_3, n_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm x_82 = NULL;
    x_82 = t;
    b_80 :
    if(!(match_string(x_82, "-o")))
      {
        if(!(match_string(x_82, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm a_83 = NULL;
    ATerm s_27;
    s_27 = t;
    {
      ATerm y_82 = NULL;
      ATerm z_82 = NULL;
      z_82 = t;
      if(((y_82 != NULL) && (y_82 != z_82)))
        _fail(z_82);
      else
        y_82 = z_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_27, not_null(y_82));
        t = set_config_0(t);
      }
    }
    t = s_27;
    {
      ATerm b_83 = NULL;
      b_83 = t;
      if(((a_83 != NULL) && (a_83 != b_83)))
        _fail(b_83);
      else
        a_83 = b_83;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_83));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_u_27;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm f_83 = NULL;
          f_83 = t;
          e_83 :
          if(!(match_string(f_83, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_y_27;
          t = set_config_0(t);
          t = term_z_27;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_a_28;
          return(t);
        }
        t = Option_3(t, r_3, s_3, t_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  l_83 = t;
  j_83 :
  if(match_string(l_83, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(l_83) == AT_LIST) && !(ATisEmpty(l_83))))
        {
          m_83 = ATgetFirst((ATermList) l_83);
          n_83 = (ATerm) ATgetNext((ATermList) l_83);
          k_83 :
          if(((ATgetType(n_83) == AT_LIST) && !(ATisEmpty(n_83))))
            {
              o_83 = ATgetFirst((ATermList) n_83);
              p_83 = (ATerm) ATgetNext((ATermList) n_83);
              {
                ATerm t_83 = NULL;
                ATerm b_28;
                b_28 = t;
                {
                  t = not_null(m_83);
                  t = l_0(t);
                }
                t = b_28;
                {
                  ATerm u_83 = NULL;
                  t = not_null(o_83);
                  {
                    t = n_0(t);
                    {
                      u_83 = t;
                      if(((t_83 != NULL) && (t_83 != u_83)))
                        _fail(u_83);
                      else
                        t_83 = u_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_83)), not_null(t_83));
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
  ATerm u_3 (ATerm t)
  {
    ATerm b_84 = NULL;
    b_84 = t;
    y_83 :
    if(!(match_string(b_84, "-i")))
      {
        if(!(match_string(b_84, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm e_84 = NULL;
    ATerm n_29;
    n_29 = t;
    {
      ATerm c_84 = NULL;
      ATerm d_84 = NULL;
      d_84 = t;
      if(((c_84 != NULL) && (c_84 != d_84)))
        _fail(d_84);
      else
        c_84 = d_84;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_29, not_null(c_84));
        t = set_config_0(t);
      }
    }
    t = n_29;
    {
      ATerm f_84 = NULL;
      f_84 = t;
      if(((e_84 != NULL) && (e_84 != f_84)))
        _fail(f_84);
      else
        e_84 = f_84;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_84));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = r_29;
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, term_a_30));
  {
    t = printnl_0(t);
    {
      t = term_h_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  t = SSL_TicksToSeconds(not_null(j_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym__2))
    {
      p_84 = ATgetArgument(o_84, 0);
      q_84 = ATgetArgument(o_84, 1);
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_84), not_null(q_84));
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            t = SSL_addr(not_null(p_84), not_null(q_84));
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
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_110(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
        x_84 = t;
        w_84 :
        if(((ATgetType(x_84) == AT_LIST) && !(ATisEmpty(x_84))))
          {
            y_84 = ATgetFirst((ATermList) x_84);
            z_84 = (ATerm) ATgetNext((ATermList) x_84);
            {
              ATerm c_85 = NULL;
              ATerm d_85 = NULL;
              t = not_null(z_84);
              {
                t = foldr_2(t, x_110, y_110);
                {
                  d_85 = t;
                  if(((c_85 != NULL) && (c_85 != d_85)))
                    _fail(d_85);
                  else
                    c_85 = d_85;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_84), not_null(c_85));
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
  ATerm m_85 = NULL;
  ATerm o_85 = NULL;
  m_85 = t;
  {
    ATerm p_85 = NULL;
    ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
    t = not_null(m_85);
    {
      p_85 = t;
      {
        t = SSL_explode_term(not_null(p_85));
        {
          r_85 = t;
          l_85 :
          if(match_cons(r_85, sym__2))
            {
              s_85 = ATgetArgument(r_85, 0);
              t_85 = ATgetArgument(r_85, 1);
              if(((o_85 != NULL) && (o_85 != t_85)))
                _fail(t_85);
              else
                o_85 = t_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_85);
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
    ATerm a_4 (ATerm t)
    {
      t = term_x_26;
      return(t);
    }
    t = crush_2(t, a_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  y_85 :
  if(match_cons(z_85, sym__2))
    {
      a_86 = ATgetArgument(z_85, 0);
      b_86 = ATgetArgument(z_85, 1);
      {
        ATerm n_30;
        n_30 = t;
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_86), not_null(b_86));
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              t = SSL_gtr(not_null(a_86), not_null(b_86));
            }
        }
        t = n_30;
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
  ATerm h_86 = NULL;
  ATerm q_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
      i_86 = t;
      g_86 :
      if(match_cons(i_86, sym__2))
        {
          j_86 = ATgetArgument(i_86, 0);
          k_86 = ATgetArgument(i_86, 1);
          {
            if(((h_86 != NULL) && (h_86 != j_86)))
              _fail(j_86);
            else
              h_86 = j_86;
            if(((h_86 != NULL) && (h_86 != k_86)))
              _fail(k_86);
            else
              h_86 = k_86;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_30);
    }
  else
    {
      t = q_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_123 (ATerm))
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30;
      y_30 = t;
      {
        ATerm r_86 = NULL;
        ATerm s_86 = NULL;
        t = term_v_24;
        {
          t = get_config_0(t);
          {
            s_86 = t;
            if(((r_86 != NULL) && (r_86 != s_86)))
              _fail(s_86);
            else
              r_86 = s_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_86), term_h_22);
          t = geq_0(t);
        }
      }
      t = y_30;
      t = l_123(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm w_86 = NULL,a_87 = NULL;
    ATerm d_31;
    d_31 = t;
    {
      ATerm z_86 = NULL;
      t = run_time_0(t);
      {
        z_86 = t;
        if(((w_86 != NULL) && (w_86 != z_86)))
          _fail(z_86);
        else
          w_86 = z_86;
      }
    }
    t = d_31;
    {
      ATerm b_87 = NULL;
      t = term_e_31;
      {
        t = get_config_0(t);
        {
          b_87 = t;
          if(((a_87 != NULL) && (a_87 != b_87)))
            _fail(b_87);
          else
            a_87 = b_87;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), not_null(w_86)), term_f_31), not_null(a_87)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_4);
  {
    t = term_x_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym_Version_0))
    {
      ATerm k_87 = NULL,m_87 = NULL;
      ATerm h_31;
      h_31 = t;
      {
        ATerm l_87 = NULL;
        t = SSLgetAnnotations(not_null(i_87));
        {
          l_87 = t;
          if(((k_87 != NULL) && (k_87 != l_87)))
            _fail(l_87);
          else
            k_87 = l_87;
        }
      }
      t = h_31;
      {
        ATerm n_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_87));
        {
          n_87 = t;
          if(((m_87 != NULL) && (m_87 != n_87)))
            _fail(n_87);
          else
            m_87 = n_87;
        }
        t = not_null(m_87);
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
  ATerm c_4 (ATerm t)
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_4);
  t = r_121(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_87 = NULL;
  s_87 = t;
  t = SSL_table_create(not_null(s_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_87 = NULL;
  w_87 = t;
  {
    ATerm m_31;
    m_31 = t;
    {
      t = term_n_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_31, term_o_31, not_null(w_87));
          t = table_put_0(t);
        }
      }
    }
    t = m_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_88 = NULL;
  a_88 = t;
  t = SSL_table_destroy(not_null(a_88));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_88 = NULL;
  h_88 = t;
  t = SSL_exit(not_null(h_88));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
  l_88 = t;
  k_88 :
  if(((ATgetType(l_88) == AT_LIST) && ATisEmpty(l_88)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_88) == AT_LIST) && !(ATisEmpty(l_88))))
        {
          m_88 = ATgetFirst((ATermList) l_88);
          n_88 = (ATerm) ATgetNext((ATermList) l_88);
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
  ATerm p_31;
  p_31 = t;
  {
    ATerm q_88 = NULL;
    ATerm v_88 = NULL;
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm r_88 = NULL;
          ATerm s_88 = NULL;
          s_88 = t;
          if(((r_88 != NULL) && (r_88 != s_88)))
            _fail(s_88);
          else
            r_88 = s_88;
          t = (ATerm) ATinsert(ATempty, not_null(r_88));
        }
      }
    {
      v_88 = t;
      if(((q_88 != NULL) && (q_88 != v_88)))
        _fail(v_88);
      else
        q_88 = v_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_25, not_null(q_88));
      t = printnl_0(t);
    }
  }
  t = p_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_125 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm y_88 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = Cons_2(t, j_106, y_88);
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm f_89 = NULL,g_89 = NULL,i_89 = NULL;
  i_89 = t;
  e_89 :
  if(((ATgetType(i_89) == AT_LIST) && !(ATisEmpty(i_89))))
    {
      f_89 = ATgetFirst((ATermList) i_89);
      g_89 = (ATerm) ATgetNext((ATermList) i_89);
      {
        ATerm m_89 = NULL;
        t = not_null(g_89);
        {
          ATerm b_32;
          b_32 = t;
          {
            ATerm n_89 = NULL,p_89 = NULL,r_89 = NULL;
            ATerm c_32;
            c_32 = t;
            {
              ATerm o_89 = NULL;
              t = k_0(t);
              {
                o_89 = t;
                if(((n_89 != NULL) && (n_89 != o_89)))
                  _fail(o_89);
                else
                  n_89 = o_89;
              }
            }
            t = c_32;
            {
              ATerm q_89 = NULL;
              t = not_null(f_89);
              {
                t = i_0(t);
                {
                  q_89 = t;
                  if(((p_89 != NULL) && (p_89 != q_89)))
                    _fail(q_89);
                  else
                    p_89 = q_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_89)), not_null(p_89));
                {
                  r_89 = t;
                  if(((m_89 != NULL) && (m_89 != r_89)))
                    _fail(r_89);
                  else
                    m_89 = r_89;
                }
              }
            }
          }
          t = b_32;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(m_89);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_89) == AT_LIST) && ATisEmpty(i_89)))
        {
          {
            t = term_g_26;
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
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_125 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_97 (ATerm))
{
  ATerm c_90 = NULL,e_90 = NULL;
  c_90 = t;
  b_90 :
  if(match_cons(c_90, sym_Program_1))
    {
      e_90 = ATgetArgument(c_90, 0);
      {
        ATerm h_90 = NULL,j_90 = NULL;
        ATerm i_90 = NULL;
        t = SSLgetAnnotations(not_null(c_90));
        {
          i_90 = t;
          if(((h_90 != NULL) && (h_90 != i_90)))
            _fail(i_90);
          else
            h_90 = i_90;
        }
        {
          t = not_null(e_90);
          {
            ATerm l_90 = NULL;
            t = w_97(t);
            {
              j_90 = t;
              {
                ATerm m_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_90)), not_null(h_90));
                {
                  m_90 = t;
                  if(((l_90 != NULL) && (l_90 != m_90)))
                    _fail(m_90);
                  else
                    l_90 = m_90;
                }
                t = not_null(l_90);
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
  ATerm y_90 = NULL;
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_90 = NULL;
      t = term_e_31;
      {
        t = get_config_0(t);
        {
          z_90 = t;
          if(((y_90 != NULL) && (y_90 != z_90)))
            _fail(z_90);
          else
            y_90 = z_90;
        }
      }
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm a_91 = NULL;
            a_91 = t;
            if(((y_90 != NULL) && (y_90 != a_91)))
              _fail(a_91);
            else
              y_90 = a_91;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = fetch_1(t, f_4);
      }
    }
  {
    t = term_f_32;
    {
      t = echo_0(t);
      {
        t = term_i_32;
        {
          t = table_get_0(t);
          {
            ATerm h_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_4);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm b_91 = NULL;
                ATerm c_91 = NULL;
                c_91 = t;
                if(((b_91 != NULL) && (b_91 != c_91)))
                  _fail(c_91);
                else
                  b_91 = c_91;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_j_32);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_4);
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
  ATerm k_32;
  k_32 = t;
  {
    ATerm h_91 = NULL;
    ATerm i_91 = NULL;
    i_91 = t;
    if(((h_91 != NULL) && (h_91 != i_91)))
      _fail(i_91);
    else
      h_91 = i_91;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, not_null(h_91)));
      t = printnl_0(t);
    }
  }
  t = k_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_120 (ATerm))
{
  ATerm l_32;
  l_32 = t;
  {
    t = q_120(t);
    t = debug_0(t);
  }
  t = l_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_97 (ATerm))
{
  ATerm p_91 = NULL,q_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_cons(p_91, sym_Undefined_1))
    {
      q_91 = ATgetArgument(p_91, 0);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(p_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(q_91);
          {
            ATerm x_91 = NULL;
            t = x_97(t);
            {
              v_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_91)), not_null(t_91));
                {
                  y_91 = t;
                  if(((x_91 != NULL) && (x_91 != y_91)))
                    _fail(y_91);
                  else
                    x_91 = y_91;
                }
                t = not_null(x_91);
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
  ATerm d_92 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_106, _id);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = Cons_2(t, _id, d_92);
      }
    return(t);
  }
  t = d_92(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_124 (ATerm))
{
  t = fetch_1(t, o_124);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  h_92 :
  if(match_cons(i_92, sym_Help_0))
    {
      ATerm k_92 = NULL,m_92 = NULL;
      ATerm o_32;
      o_32 = t;
      {
        ATerm l_92 = NULL;
        t = SSLgetAnnotations(not_null(i_92));
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
      }
      t = o_32;
      {
        ATerm n_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_92));
        {
          n_92 = t;
          if(((m_92 != NULL) && (m_92 != n_92)))
            _fail(n_92);
          else
            m_92 = n_92;
        }
        t = not_null(m_92);
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
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_103(t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  s_92 :
  if(match_cons(t_92, sym__2))
    {
      u_92 = ATgetArgument(t_92, 0);
      v_92 = ATgetArgument(t_92, 1);
      t = SSL_table_get(not_null(u_92), not_null(v_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym__3))
    {
      d_93 = ATgetArgument(c_93, 0);
      e_93 = ATgetArgument(c_93, 1);
      f_93 = ATgetArgument(c_93, 2);
      {
        ATerm t_32;
        t_32 = t;
        {
          ATerm j_93 = NULL;
          ATerm k_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_93), not_null(e_93));
          {
            ATerm u_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_32);
              }
            else
              {
                t = u_32;
                t = (ATerm) ATempty;
              }
            {
              k_93 = t;
              if(((j_93 != NULL) && (j_93 != k_93)))
                _fail(k_93);
              else
                j_93 = k_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_93), not_null(e_93), (ATerm) ATinsert(CheckATermList(not_null(j_93)), not_null(f_93)));
            t = table_put_0(t);
          }
        }
        t = t_32;
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
  ATerm o_93 = NULL;
  ATerm p_93 = NULL;
  t = term_g_26;
  {
    t = t_125(t);
    {
      p_93 = t;
      if(((o_93 != NULL) && (o_93 != p_93)))
        _fail(p_93);
      else
        o_93 = p_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, not_null(o_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_string(v_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_93) == AT_LIST) && !(ATisEmpty(v_93))))
        {
          w_93 = ATgetFirst((ATermList) v_93);
          x_93 = (ATerm) ATgetNext((ATermList) v_93);
          {
            ATerm a_94 = NULL;
            ATerm a_33;
            a_33 = t;
            {
              t = not_null(w_93);
              t = a_0(t);
            }
            t = a_33;
            {
              ATerm b_94 = NULL;
              t = term_g_26;
              {
                t = d_0(t);
                {
                  b_94 = t;
                  if(((a_94 != NULL) && (a_94 != b_94)))
                    _fail(b_94);
                  else
                    a_94 = b_94;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_93)), not_null(a_94));
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
  ATerm j_4 (ATerm t)
  {
    ATerm g_94 = NULL;
    g_94 = t;
    f_94 :
    if(!(match_string(g_94, "--help")))
      {
        if(!(match_string(g_94, "-h")))
          {
            if(!(match_string(g_94, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_y_33;
    {
      t = set_config_0(t);
      t = term_z_33;
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_h_34;
    return(t);
  }
  t = Option_3(t, j_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
  j_94 = t;
  i_94 :
  if(((ATgetType(j_94) == AT_LIST) && !(ATisEmpty(j_94))))
    {
      k_94 = ATgetFirst((ATermList) j_94);
      l_94 = (ATerm) ATgetNext((ATermList) j_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  u_94 :
  if(((ATgetType(v_94) == AT_LIST) && !(ATisEmpty(v_94))))
    {
      w_94 = ATgetFirst((ATermList) v_94);
      x_94 = (ATerm) ATgetNext((ATermList) v_94);
      {
        ATerm b_95 = NULL,d_95 = NULL;
        ATerm c_95 = NULL;
        t = SSLgetAnnotations(not_null(v_94));
        {
          c_95 = t;
          if(((b_95 != NULL) && (b_95 != c_95)))
            _fail(c_95);
          else
            b_95 = c_95;
        }
        {
          t = not_null(w_94);
          {
            ATerm f_95 = NULL;
            t = n_86(t);
            {
              d_95 = t;
              {
                t = not_null(x_94);
                {
                  ATerm h_95 = NULL;
                  t = o_86(t);
                  {
                    f_95 = t;
                    {
                      ATerm i_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_95)), not_null(d_95)), not_null(b_95));
                      {
                        i_95 = t;
                        if(((h_95 != NULL) && (h_95 != i_95)))
                          _fail(i_95);
                        else
                          h_95 = i_95;
                      }
                      t = not_null(h_95);
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
  ATerm s_95 = NULL;
  s_95 = t;
  r_95 :
  if(((ATgetType(s_95) == AT_LIST) && ATisEmpty(s_95)))
    {
      {
        ATerm u_95 = NULL,w_95 = NULL;
        ATerm i_34;
        i_34 = t;
        {
          ATerm v_95 = NULL;
          t = SSLgetAnnotations(not_null(s_95));
          {
            v_95 = t;
            if(((u_95 != NULL) && (u_95 != v_95)))
              _fail(v_95);
            else
              u_95 = v_95;
          }
        }
        t = i_34;
        {
          ATerm x_95 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_95));
          {
            x_95 = t;
            if(((w_95 != NULL) && (w_95 != x_95)))
              _fail(x_95);
            else
              w_95 = x_95;
          }
          t = not_null(w_95);
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
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
  d_96 = t;
  c_96 :
  if(match_cons(d_96, sym__2))
    {
      e_96 = ATgetArgument(d_96, 0);
      f_96 = ATgetArgument(d_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_23, not_null(e_96), not_null(f_96));
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
  ATerm j_34;
  j_34 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_34;
        t = r_125(t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        {
        }
      }
  }
  t = j_34;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm n_96 = NULL;
      ATerm n_34;
      n_34 = t;
      {
        ATerm l_96 = NULL;
        ATerm m_96 = NULL;
        m_96 = t;
        if(((l_96 != NULL) && (l_96 != m_96)))
          _fail(m_96);
        else
          l_96 = m_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(l_96));
          t = set_config_0(t);
        }
      }
      t = n_34;
      {
        ATerm o_96 = NULL;
        o_96 = t;
        if(((n_96 != NULL) && (n_96 != o_96)))
          _fail(o_96);
        else
          n_96 = o_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_96));
      }
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm o_34 = t;
      int p_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              {
                t = r_125(t);
                t = Cons_2(t, _id, o_4);
              }
            }
          LocalPopChoice(p_34);
        }
      else
        {
          t = o_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_4, o_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
  ATerm s_34;
  s_34 = t;
  {
    ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
    x_96 = t;
    t_96 :
    if(match_cons(x_96, sym__3))
      {
        y_96 = ATgetArgument(x_96, 0);
        z_96 = ATgetArgument(x_96, 1);
        a_97 = ATgetArgument(x_96, 2);
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
            {
              if(((w_96 != NULL) && (w_96 != a_97)))
                _fail(a_97);
              else
                w_96 = a_97;
              t = SSL_table_put(not_null(u_96), not_null(v_96), not_null(w_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_125 (ATerm))
{
  ATerm d_97 = NULL;
  ATerm t_34;
  t_34 = t;
  {
    t = term_u_34;
    t = table_put_0(t);
  }
  t = t_34;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm v_34 = t;
      int w_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_125(t);
          LocalPopChoice(w_34);
        }
      else
        {
          t = v_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_4);
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_34;
          z_34 = t;
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_33;
                t = get_config_0(t);
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                t = fetch_1(t, Help_0);
              }
          }
          t = z_34;
          {
            t = system_usage_0(t);
            {
              t = term_x_26;
              t = exit_0(t);
            }
          }
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          {
            ATerm d_35 = t;
            int f_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm e_97 = NULL;
                    e_97 = t;
                    if(((d_97 != NULL) && (d_97 != e_97)))
                      _fail(e_97);
                    else
                      d_97 = e_97;
                    return(t);
                  }
                  t = Undefined_1(t, u_4);
                  return(t);
                }
                t = fetch_1(t, t_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_97)), term_g_35);
                    return(t);
                  }
                  t = say_1(t, v_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(f_35);
              }
            else
              {
                t = d_35;
                {
                }
              }
          }
        }
      {
        ATerm h_35;
        h_35 = t;
        {
          t = term_g_32;
          t = table_destroy_0(t);
        }
        t = h_35;
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
        ATerm j_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_121);
            LocalPopChoice(n_35);
          }
        else
          {
            t = j_35;
            {
              ATerm x_35 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_122(t);
                  t = report_success_0(t);
                  LocalPopChoice(f_36);
                }
              else
                {
                  t = x_35;
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
  ATerm w_4 (ATerm t)
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_122(t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_122);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_4, q_122, r_122, y_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm r_36;
      r_36 = t;
      {
        ATerm h_97 = NULL;
        ATerm i_97 = NULL;
        t = term_e_31;
        {
          t = get_config_0(t);
          {
            i_97 = t;
            if(((h_97 != NULL) && (h_97 != i_97)))
              _fail(i_97);
            else
              h_97 = i_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, not_null(h_97)));
          t = printnl_0(t);
        }
      }
      t = r_36;
      return(t);
    }
    t = if_verbose2_1(t, a_5);
    return(t);
  }
  t = iowrap_4(t, i_122, j_122, k_122, z_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_122 (ATerm), ATerm h_122 (ATerm))
{
  t = iowrap_3(t, g_122, h_122, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_122 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = _2(t, _id, d_122);
    return(t);
  }
  t = iowrap_2(t, b_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
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
    t = apply_to_bodies_1(t, d_5);
    return(t);
  }
  t = iowrap_1(t, c_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
