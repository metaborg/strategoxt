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
ATerm term_c_35;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_a_30;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_t_11;
ATerm term_m_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Op_2, term_f_14, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_w_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_c_26);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_c_26);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_d_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_c_26);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, (ATerm) ATempty);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
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
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_100 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
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
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
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
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(k_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, a_110, b_0);
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
                      ATerm c_0 (ATerm t)
                      {
                        t = not_null(a_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_110, c_0);
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
                ATerm e_0 (ATerm t)
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = not_null(l_9);
                    return(t);
                  }
                  t = split_2(t, n_9, h_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm f_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = r_114(t, e_0, n_9, f_0);
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm m_0 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, j_0, m_0, _id);
                }
              }
              LocalPopChoice(l_6);
            }
          else
            {
              t = j_6;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm r_0 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, q_0, r_0, n_9);
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
  ATerm s_0 (ATerm t)
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
  t = free_vars_3(t, Add1_0, s_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_Scope_2))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      {
        ATerm z_9 = NULL;
        ATerm a_10 = NULL,c_10 = NULL;
        ATerm b_10 = NULL;
        t = not_null(w_9);
        {
          t = tvars_0(t);
          {
            b_10 = t;
            if(((a_10 != NULL) && (a_10 != b_10)))
              _fail(b_10);
            else
              a_10 = b_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(a_10));
          {
            t = isect_1(t, eq_0);
            {
              c_10 = t;
              {
                if(((z_9 != NULL) && (z_9 != c_10)))
                  _fail(c_10);
                else
                  z_9 = c_10;
                {
                  ATerm r_6 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm d_10 = NULL;
                      d_10 = t;
                      if(((v_9 != NULL) && (v_9 != d_10)))
                        _fail(d_10);
                      else
                        v_9 = d_10;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_9), not_null(w_9));
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
    ATerm t_0 (ATerm t)
    {
      t = topdown_1(t, d_100);
      return(t);
    }
    t = _all(t, t_0);
  }
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CleanupScope_0(t);
        t = try_1(t, FuseScope_0);
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
  t = topdown_1(t, u_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = repeat_2(t, Optimize_0, _id);
    return(t);
  }
  t = downup_1(t, v_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  ATerm b_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_10), not_null(p_10)));
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_10), not_null(u_10)));
    return(t);
  }
  q_10 = t;
  k_10 :
  if(match_cons(q_10, sym_Seq_2))
    {
      r_10 = ATgetArgument(q_10, 0);
      u_10 = ATgetArgument(q_10, 1);
      l_10 :
      if(match_cons(u_10, sym_Scope_2))
        {
          o_10 = ATgetArgument(u_10, 0);
          p_10 = ATgetArgument(u_10, 1);
          m_10 :
          if(match_cons(r_10, sym_Scope_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              t_10 = ATgetArgument(r_10, 1);
              {
                ATerm x_6 = t;
                int y_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_11(t);
                    LocalPopChoice(y_6);
                  }
                else
                  {
                    t = x_6;
                    t = c_11(t);
                  }
              }
            }
          else
            {
              t = b_11(t);
            }
        }
      else
        {
          n_10 :
          if(match_cons(r_10, sym_Scope_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              t_10 = ATgetArgument(r_10, 1);
              t = c_11(t);
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
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  j_11 = t;
  e_11 :
  if(match_cons(j_11, sym_Let_2))
    {
      k_11 = ATgetArgument(j_11, 0);
      q_11 = ATgetArgument(j_11, 1);
      f_11 :
      if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
        {
          l_11 = ATgetFirst((ATermList) k_11);
          p_11 = (ATerm) ATgetNext((ATermList) k_11);
          g_11 :
          if(match_cons(l_11, sym_SDef_3))
            {
              m_11 = ATgetArgument(l_11, 0);
              n_11 = ATgetArgument(l_11, 1);
              o_11 = ATgetArgument(l_11, 2);
              h_11 :
              if(((ATgetType(n_11) == AT_LIST) && ATisEmpty(n_11)))
                {
                  i_11 :
                  if(((ATgetType(p_11) == AT_LIST) && ATisEmpty(p_11)))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_z_6), not_null(m_11), (ATerm)ATempty, not_null(o_11))), not_null(q_11));
                    }
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
  ATerm v_11 (ATerm t)
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
        t = Cons_2(t, _id, v_11);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Let_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm n_12 = NULL,o_12 = NULL;
        ATerm d_13 = NULL;
        t = not_null(j_12);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
            p_12 = t;
            d_12 :
            if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
              {
                q_12 = ATgetFirst((ATermList) p_12);
                u_12 = (ATerm) ATgetNext((ATermList) p_12);
                e_12 :
                if(match_cons(q_12, sym_SDef_3))
                  {
                    r_12 = ATgetArgument(q_12, 0);
                    s_12 = ATgetArgument(q_12, 1);
                    t_12 = ATgetArgument(q_12, 2);
                    f_12 :
                    if(((ATgetType(s_12) == AT_LIST) && ATisEmpty(s_12)))
                      {
                        {
                          ATerm c_13 = NULL;
                          t = not_null(k_12);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
                              y_12 = t;
                              z_11 :
                              if(match_cons(y_12, sym_Call_2))
                                {
                                  z_12 = ATgetArgument(y_12, 0);
                                  b_13 = ATgetArgument(y_12, 1);
                                  a_12 :
                                  if(match_cons(z_12, sym_SVar_1))
                                    {
                                      a_13 = ATgetArgument(z_12, 0);
                                      b_12 :
                                      if(((ATgetType(b_13) == AT_LIST) && ATisEmpty(b_13)))
                                        {
                                          {
                                            if(((r_12 != NULL) && (r_12 != a_13)))
                                              _fail(a_13);
                                            else
                                              r_12 = a_13;
                                            t = not_null(t_12);
                                          }
                                        }
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
                              c_13 = t;
                              {
                                if(((n_12 != NULL) && (n_12 != c_13)))
                                  _fail(c_13);
                                else
                                  n_12 = c_13;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_12)), (ATerm) ATempty), not_null(n_12));
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
          t = at_suffix_1(t, w_0);
          {
            d_13 = t;
            if(((o_12 != NULL) && (o_12 != d_13)))
              _fail(d_13);
            else
              o_12 = d_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_12), not_null(n_12));
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  r_13 = t;
  l_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      u_13 = ATgetArgument(r_13, 1);
      m_13 :
      if(match_cons(s_13, sym_Build_1))
        {
          t_13 = ATgetArgument(s_13, 0);
          n_13 :
          if(match_cons(u_13, sym_Where_1))
            {
              v_13 = ATgetArgument(u_13, 0);
              o_13 :
              if(match_cons(v_13, sym_Prim_2))
                {
                  p_13 = ATgetArgument(v_13, 0);
                  q_13 = ATgetArgument(v_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_13), not_null(q_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(u_13, sym_Prim_2))
                {
                  v_13 = ATgetArgument(u_13, 0);
                  w_13 = ATgetArgument(u_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_13), not_null(w_13));
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  h_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      p_14 = ATgetArgument(m_14, 1);
      i_14 :
      if(match_cons(n_14, sym_Build_1))
        {
          o_14 = ATgetArgument(n_14, 0);
          j_14 :
          if(match_cons(p_14, sym_Where_1))
            {
              q_14 = ATgetArgument(p_14, 0);
              k_14 :
              if(match_cons(q_14, sym_Build_1))
                {
                  l_14 = ATgetArgument(q_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_14, sym_Build_1))
                {
                  q_14 = ATgetArgument(p_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_14));
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  g_15 = t;
  b_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      l_15 = ATgetArgument(g_15, 1);
      c_15 :
      if(match_cons(h_15, sym_Build_1))
        {
          i_15 = ATgetArgument(h_15, 0);
          d_15 :
          if(match_cons(i_15, sym_Op_2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              e_15 :
              if(match_cons(l_15, sym_Match_1))
                {
                  m_15 = ATgetArgument(l_15, 0);
                  f_15 :
                  if(match_cons(m_15, sym_Op_2))
                    {
                      n_15 = ATgetArgument(m_15, 0);
                      o_15 = ATgetArgument(m_15, 1);
                      {
                        ATerm r_15 = NULL,s_15 = NULL;
                        if(((j_15 != NULL) && (j_15 != n_15)))
                          _fail(n_15);
                        else
                          j_15 = n_15;
                        {
                          if(((r_15 != NULL) && (r_15 != o_15)))
                            _fail(o_15);
                          else
                            r_15 = o_15;
                          {
                            ATerm y_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(r_15));
                            {
                              ATerm y_0 (ATerm t)
                              {
                                ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
                                t_15 = t;
                                z_14 :
                                if(match_cons(t_15, sym__2))
                                  {
                                    u_15 = ATgetArgument(t_15, 0);
                                    v_15 = ATgetArgument(t_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, y_0);
                              {
                                y_15 = t;
                                if(((s_15 != NULL) && (s_15 != y_15)))
                                  _fail(y_15);
                                else
                                  s_15 = y_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_15), not_null(k_15))));
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  i_16 = t;
  d_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      n_16 = ATgetArgument(i_16, 1);
      e_16 :
      if(match_cons(j_16, sym_Build_1))
        {
          k_16 = ATgetArgument(j_16, 0);
          f_16 :
          if(match_cons(k_16, sym_Op_2))
            {
              l_16 = ATgetArgument(k_16, 0);
              m_16 = ATgetArgument(k_16, 1);
              g_16 :
              if(match_cons(n_16, sym_Match_1))
                {
                  o_16 = ATgetArgument(n_16, 0);
                  h_16 :
                  if(match_cons(o_16, sym_Op_2))
                    {
                      p_16 = ATgetArgument(o_16, 0);
                      q_16 = ATgetArgument(o_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(p_16));
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm r_17 (ATerm t)
  {
    ATerm o_17 = NULL;
    ATerm p_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(g_17));
    {
      t = BMF_0(t);
      {
        p_17 = t;
        if(((o_17 != NULL) && (o_17 != p_17)))
          _fail(p_17);
        else
          o_17 = p_17;
      }
    }
    t = not_null(o_17);
    return(t);
  }
  e_17 = t;
  a_17 :
  if(match_cons(e_17, sym_Seq_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      b_17 :
      if(match_cons(g_17, sym_Seq_2))
        {
          c_17 = ATgetArgument(g_17, 0);
          d_17 = ATgetArgument(g_17, 1);
          {
            ATerm w_7 = t;
            int b_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL;
                ATerm l_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(c_17));
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
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_17), not_null(d_17));
                LocalPopChoice(b_8);
              }
            else
              {
                t = w_7;
                t = r_17(t);
              }
          }
        }
      else
        {
          t = r_17(t);
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  v_17 :
  if(match_cons(z_17, sym_Seq_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      c_18 = ATgetArgument(z_17, 1);
      w_17 :
      if(match_cons(a_18, sym_Build_1))
        {
          b_18 = ATgetArgument(a_18, 0);
          x_17 :
          if(match_cons(c_18, sym_Seq_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              f_18 = ATgetArgument(c_18, 1);
              y_17 :
              if(match_cons(d_18, sym_Build_1))
                {
                  e_18 = ATgetArgument(d_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_18)), not_null(f_18));
                }
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  m_18 :
  if(match_cons(o_18, sym_Scope_2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      n_18 :
      if(match_cons(q_18, sym_Scope_2))
        {
          r_18 = ATgetArgument(q_18, 0);
          s_18 = ATgetArgument(q_18, 1);
          {
            ATerm w_18 = NULL;
            ATerm x_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(r_18));
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
                x_18 = t;
                if(((w_18 != NULL) && (w_18 != x_18)))
                  _fail(x_18);
                else
                  w_18 = x_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_18), not_null(s_18));
          }
        }
      else
        {
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
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_Var_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      t = not_null(d_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  j_19 = t;
  h_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      i_19 :
      if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
        {
          m_19 = ATgetFirst((ATermList) l_19);
          n_19 = (ATerm) ATgetNext((ATermList) l_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(n_19));
        }
      else
        {
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
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  v_19 = t;
  s_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      t_19 :
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          y_19 = ATgetFirst((ATermList) x_19);
          b_20 = (ATerm) ATgetNext((ATermList) x_19);
          u_19 :
          if(match_cons(y_19, sym__2))
            {
              z_19 = ATgetArgument(y_19, 0);
              a_20 = ATgetArgument(y_19, 1);
              {
                ATerm d_20 = NULL;
                if(((w_19 != NULL) && (w_19 != z_19)))
                  _fail(z_19);
                else
                  w_19 = z_19;
                {
                  if(((d_20 != NULL) && (d_20 != a_20)))
                    _fail(a_20);
                  else
                    d_20 = a_20;
                  t = not_null(d_20);
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
  ATerm j_20 = NULL;
  ATerm l_20 = NULL,m_20 = NULL;
  j_20 = t;
  {
    ATerm n_20 = NULL;
    t = not_null(j_20);
    {
      ATerm o_20 = NULL;
      t = b_100(t);
      {
        n_20 = t;
        {
          if(((l_20 != NULL) && (l_20 != n_20)))
            _fail(n_20);
          else
            l_20 = n_20;
          {
            t = c_100(t);
            {
              o_20 = t;
              if(((m_20 != NULL) && (m_20 != o_20)))
                _fail(o_20);
              else
                m_20 = o_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(m_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm s_20 (ATerm t)
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
        t = _all(t, s_20);
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym__2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      {
        ATerm c_21 = NULL;
        if(((c_21 != NULL) && (c_21 != z_20)))
          _fail(z_20);
        else
          c_21 = z_20;
      }
    }
  else
    {
      if(match_cons(x_20, sym__3))
        {
          y_20 = ATgetArgument(x_20, 0);
          z_20 = ATgetArgument(x_20, 1);
          a_21 = ATgetArgument(x_20, 2);
          {
            ATerm i_21 = NULL;
            ATerm j_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(z_20));
            {
              t = zip_1(t, _id);
              {
                j_21 = t;
                if(((i_21 != NULL) && (i_21 != j_21)))
                  _fail(j_21);
                else
                  i_21 = j_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(a_21));
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
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = subs_args_0(t);
  {
    p_21 = t;
    o_21 :
    if(match_cons(p_21, sym__2))
      {
        q_21 = ATgetArgument(p_21, 0);
        r_21 = ATgetArgument(p_21, 1);
        {
          t = not_null(r_21);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = not_null(q_21);
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
    {
      g_22 = ATgetFirst((ATermList) f_22);
      h_22 = (ATerm) ATgetNext((ATermList) f_22);
      {
        t = l_110(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm k_22 = NULL;
            k_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_22), not_null(k_22));
              t = k_110(t);
            }
            return(t);
          }
          t = fetch_1(t, b_1);
        }
        t = not_null(h_22);
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
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym__2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      {
        t = not_null(r_22);
        {
          ATerm w_22 (ATerm t)
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
                        t = not_null(s_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_110, c_1);
                      t = w_22(t);
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
                      t = Cons_2(t, _id, w_22);
                    }
                }
              }
            return(t);
          }
          t = w_22(t);
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
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  y_22 :
  if(match_cons(a_23, sym__2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      z_22 :
      if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
        {
          d_23 = ATgetFirst((ATermList) c_23);
          e_23 = (ATerm) ATgetNext((ATermList) c_23);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_23)), not_null(d_23)), not_null(e_23));
        }
      else
        {
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t_23 = t;
  r_23 :
  if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
    {
      u_23 = ATgetFirst((ATermList) t_23);
      x_23 = (ATerm) ATgetNext((ATermList) t_23);
      s_23 :
      if(match_cons(u_23, sym__2))
        {
          v_23 = ATgetArgument(u_23, 0);
          w_23 = ATgetArgument(u_23, 1);
          {
            ATerm b_24 = NULL,c_24 = NULL,i_24 = NULL,o_24 = NULL;
            ATerm v_8;
            v_8 = t;
            {
              ATerm d_24 = NULL;
              ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
              t = not_null(w_23);
              {
                d_24 = t;
                {
                  t = SSL_explode_term(not_null(d_24));
                  {
                    f_24 = t;
                    m_23 :
                    if(match_cons(f_24, sym__2))
                      {
                        g_24 = ATgetArgument(f_24, 0);
                        h_24 = ATgetArgument(f_24, 1);
                        {
                          if(((b_24 != NULL) && (b_24 != g_24)))
                            _fail(g_24);
                          else
                            b_24 = g_24;
                          if(((c_24 != NULL) && (c_24 != h_24)))
                            _fail(h_24);
                          else
                            c_24 = h_24;
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
                ATerm j_24 = NULL;
                ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
                t = not_null(v_23);
                {
                  j_24 = t;
                  {
                    t = SSL_explode_term(not_null(j_24));
                    {
                      l_24 = t;
                      p_23 :
                      if(match_cons(l_24, sym__2))
                        {
                          m_24 = ATgetArgument(l_24, 0);
                          n_24 = ATgetArgument(l_24, 1);
                          {
                            if(((b_24 != NULL) && (b_24 != m_24)))
                              _fail(m_24);
                            else
                              b_24 = m_24;
                            if(((i_24 != NULL) && (i_24 != n_24)))
                              _fail(n_24);
                            else
                              i_24 = n_24;
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
                ATerm p_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(c_24));
                {
                  t = zip_1(t, _id);
                  {
                    p_24 = t;
                    if(((o_24 != NULL) && (o_24 != p_24)))
                      _fail(p_24);
                    else
                      o_24 = p_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), not_null(x_23));
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
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  z_24 = t;
  x_24 :
  if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
    {
      a_25 = ATgetFirst((ATermList) z_24);
      d_25 = (ATerm) ATgetNext((ATermList) z_24);
      y_24 :
      if(match_cons(a_25, sym__2))
        {
          b_25 = ATgetArgument(a_25, 0);
          c_25 = ATgetArgument(a_25, 1);
          {
            ATerm f_25 = NULL;
            if(((b_25 != NULL) && (b_25 != c_25)))
              _fail(c_25);
            else
              b_25 = c_25;
            {
              if(((f_25 != NULL) && (f_25 != d_25)))
                _fail(d_25);
              else
                f_25 = d_25;
              t = not_null(f_25);
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
  ATerm h_25 (ATerm t)
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
          t = h_25(t);
        }
      }
    return(t);
  }
  t = h_25(t);
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
        ATerm j_25 = NULL;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_25));
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
  ATerm m_25 (ATerm t)
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
        t = _one(t, m_25);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm x_9;
        x_9 = t;
        {
          t = not_null(s_25);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm v_25 = NULL;
              v_25 = t;
              if(((r_25 != NULL) && (r_25 != v_25)))
                _fail(v_25);
              else
                r_25 = v_25;
              return(t);
            }
            t = oncetd_1(t, h_1);
          }
        }
        t = x_9;
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
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Var_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm y_9 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_26 = NULL,n_26 = NULL;
            ATerm m_26 = NULL;
            t = SSLgetAnnotations(not_null(h_26));
            {
              m_26 = t;
              if(((l_26 != NULL) && (l_26 != m_26)))
                _fail(m_26);
              else
                l_26 = m_26;
            }
            {
              t = not_null(i_26);
              {
                ATerm p_26 = NULL;
                t = p_0(t);
                {
                  n_26 = t;
                  {
                    ATerm q_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_26)), not_null(l_26));
                    {
                      q_26 = t;
                      if(((p_26 != NULL) && (p_26 != q_26)))
                        _fail(q_26);
                      else
                        p_26 = q_26;
                    }
                    t = not_null(p_26);
                  }
                }
              }
            }
            LocalPopChoice(e_10);
          }
        else
          {
            t = y_9;
            {
              ATerm t_26 = NULL,v_26 = NULL;
              ATerm u_26 = NULL;
              t = SSLgetAnnotations(not_null(h_26));
              {
                u_26 = t;
                if(((t_26 != NULL) && (t_26 != u_26)))
                  _fail(u_26);
                else
                  t_26 = u_26;
              }
              {
                t = not_null(i_26);
                {
                  ATerm x_26 = NULL;
                  t = p_0(t);
                  {
                    v_26 = t;
                    {
                      ATerm y_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_26)), not_null(t_26));
                      {
                        y_26 = t;
                        if(((x_26 != NULL) && (x_26 != y_26)))
                          _fail(y_26);
                        else
                          x_26 = y_26;
                      }
                      t = not_null(x_26);
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
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  y_28 = t;
  x_27 :
  if(match_cons(y_28, sym_Seq_2))
    {
      z_28 = ATgetArgument(y_28, 0);
      b_29 = ATgetArgument(y_28, 1);
      y_27 :
      if(match_cons(z_28, sym_Assign_1))
        {
          a_29 = ATgetArgument(z_28, 0);
          z_27 :
          if(match_cons(a_29, sym_Var_1))
            {
              r_28 = ATgetArgument(a_29, 0);
              a_28 :
              if(match_cons(b_29, sym_Seq_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  b_28 :
                  if(match_cons(c_29, sym_Build_1))
                    {
                      u_28 = ATgetArgument(c_29, 0);
                      c_28 :
                      if(match_cons(u_28, sym_Var_1))
                        {
                          v_28 = ATgetArgument(u_28, 0);
                          {
                            ATerm j_29 = NULL;
                            if(((r_28 != NULL) && (r_28 != v_28)))
                              _fail(v_28);
                            else
                              r_28 = v_28;
                            {
                              if(((j_29 != NULL) && (j_29 != d_29)))
                                _fail(d_29);
                              else
                                j_29 = d_29;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_28))), not_null(j_29));
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
          if(match_cons(z_28, sym_Build_1))
            {
              a_29 = ATgetArgument(z_28, 0);
              d_28 :
              if(match_cons(b_29, sym_Scope_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  e_28 :
                  if(match_cons(d_29, sym_Seq_2))
                    {
                      e_29 = ATgetArgument(d_29, 0);
                      h_29 = ATgetArgument(d_29, 1);
                      f_28 :
                      if(match_cons(e_29, sym_Assign_1))
                        {
                          f_29 = ATgetArgument(e_29, 0);
                          g_28 :
                          if(match_cons(f_29, sym_Var_1))
                            {
                              g_29 = ATgetArgument(f_29, 0);
                              {
                                ATerm f_10 = t;
                                int g_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_30 = NULL,o_30 = NULL;
                                    ATerm h_10;
                                    h_10 = t;
                                    {
                                      ATerm n_30 = NULL;
                                      t = not_null(a_29);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(c_29));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  n_30 = t;
                                                  if(((m_30 != NULL) && (m_30 != n_30)))
                                                    _fail(n_30);
                                                  else
                                                    m_30 = n_30;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = h_10;
                                    {
                                      ATerm p_30 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, not_null(a_29)), not_null(h_29));
                                      {
                                        t = substitute_2(t, IsVar_0, _id);
                                        {
                                          p_30 = t;
                                          if(((o_30 != NULL) && (o_30 != p_30)))
                                            _fail(p_30);
                                          else
                                            o_30 = p_30;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_30), not_null(o_30)));
                                    }
                                    LocalPopChoice(g_10);
                                  }
                                else
                                  {
                                    t = f_10;
                                    {
                                      ATerm u_30 = NULL,w_30 = NULL;
                                      ATerm i_10;
                                      i_10 = t;
                                      {
                                        ATerm v_30 = NULL;
                                        t = not_null(a_29);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(c_29));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    v_30 = t;
                                                    if(((u_30 != NULL) && (u_30 != v_30)))
                                                      _fail(v_30);
                                                    else
                                                      u_30 = v_30;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = i_10;
                                      {
                                        ATerm x_30 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, not_null(a_29)), not_null(h_29));
                                        {
                                          t = substitute_2(t, IsVar_0, _id);
                                          {
                                            x_30 = t;
                                            if(((w_30 != NULL) && (w_30 != x_30)))
                                              _fail(x_30);
                                            else
                                              w_30 = x_30;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_29)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_30), not_null(w_30)));
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
      if(match_cons(y_28, sym_Scope_2))
        {
          z_28 = ATgetArgument(y_28, 0);
          b_29 = ATgetArgument(y_28, 1);
          h_28 :
          if(match_cons(b_29, sym_Seq_2))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              i_28 :
              if(match_cons(c_29, sym_Assign_1))
                {
                  u_28 = ATgetArgument(c_29, 0);
                  j_28 :
                  if(match_cons(u_28, sym_Var_1))
                    {
                      v_28 = ATgetArgument(u_28, 0);
                      k_28 :
                      if(match_cons(d_29, sym_Seq_2))
                        {
                          e_29 = ATgetArgument(d_29, 0);
                          h_29 = ATgetArgument(d_29, 1);
                          l_28 :
                          if(match_cons(e_29, sym_Assign_2))
                            {
                              f_29 = ATgetArgument(e_29, 0);
                              s_28 = ATgetArgument(e_29, 1);
                              m_28 :
                              if(match_cons(f_29, sym_Var_1))
                                {
                                  g_29 = ATgetArgument(f_29, 0);
                                  n_28 :
                                  if(match_cons(s_28, sym_Var_1))
                                    {
                                      t_28 = ATgetArgument(s_28, 0);
                                      {
                                        ATerm n_29 = NULL,o_29 = NULL,q_29 = NULL;
                                        if(((v_28 != NULL) && (v_28 != t_28)))
                                          _fail(t_28);
                                        else
                                          v_28 = t_28;
                                        {
                                          if(((n_29 != NULL) && (n_29 != h_29)))
                                            _fail(h_29);
                                          else
                                            n_29 = h_29;
                                          {
                                            ATerm j_10;
                                            j_10 = t;
                                            {
                                              ATerm p_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(z_28));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          p_29 = t;
                                                          if(((o_29 != NULL) && (o_29 != p_29)))
                                                            _fail(p_29);
                                                          else
                                                            o_29 = p_29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = j_10;
                                            {
                                              ATerm r_29 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(n_29));
                                              {
                                                t = substitute_2(t, IsVar_0, _id);
                                                {
                                                  r_29 = t;
                                                  if(((q_29 != NULL) && (q_29 != r_29)))
                                                    _fail(r_29);
                                                  else
                                                    q_29 = r_29;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(q_29)));
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
                              if(match_cons(e_29, sym_Assign_1))
                                {
                                  f_29 = ATgetArgument(e_29, 0);
                                  o_28 :
                                  if(match_cons(f_29, sym_Var_1))
                                    {
                                      g_29 = ATgetArgument(f_29, 0);
                                      {
                                        ATerm w_29 = NULL,y_29 = NULL;
                                        ATerm v_10;
                                        v_10 = t;
                                        {
                                          ATerm x_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(z_28));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(g_29)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      x_29 = t;
                                                      if(((w_29 != NULL) && (w_29 != x_29)))
                                                        _fail(x_29);
                                                      else
                                                        w_29 = x_29;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = v_10;
                                        {
                                          ATerm z_29 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_29)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(h_29));
                                          {
                                            t = substitute_2(t, IsVar_0, _id);
                                            {
                                              z_29 = t;
                                              if(((y_29 != NULL) && (y_29 != z_29)))
                                                _fail(z_29);
                                              else
                                                y_29 = z_29;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_28))), not_null(y_29)));
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
                  if(match_cons(c_29, sym_Assign_2))
                    {
                      u_28 = ATgetArgument(c_29, 0);
                      w_28 = ATgetArgument(c_29, 1);
                      p_28 :
                      if(match_cons(u_28, sym_Var_1))
                        {
                          v_28 = ATgetArgument(u_28, 0);
                          q_28 :
                          if(match_cons(w_28, sym_Var_1))
                            {
                              x_28 = ATgetArgument(w_28, 0);
                              {
                                ATerm e_30 = NULL,g_30 = NULL;
                                ATerm w_10;
                                w_10 = t;
                                {
                                  ATerm f_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), (ATerm) ATinsert(ATempty, not_null(v_28)));
                                      {
                                        t = diff_0(t);
                                        {
                                          f_30 = t;
                                          if(((e_30 != NULL) && (e_30 != f_30)))
                                            _fail(f_30);
                                          else
                                            e_30 = f_30;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = w_10;
                                {
                                  ATerm h_30 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(v_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_28))), not_null(d_29));
                                  {
                                    t = substitute_2(t, IsVar_0, _id);
                                    {
                                      h_30 = t;
                                      if(((g_30 != NULL) && (g_30 != h_30)))
                                        _fail(h_30);
                                      else
                                        g_30 = h_30;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_30), not_null(g_30));
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  r_31 = t;
  p_31 :
  if(match_cons(r_31, sym_Seq_2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      q_31 :
      if(match_cons(t_31, sym_Let_2))
        {
          u_31 = ATgetArgument(t_31, 0);
          v_31 = ATgetArgument(t_31, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_31), not_null(v_31)));
        }
      else
        {
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
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_Cong_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,w_33 = NULL,y_33 = NULL,a_34 = NULL;
        ATerm x_10;
        x_10 = t;
        {
          ATerm c_33 = NULL;
          t = not_null(t_32);
          {
            ATerm f_33 = NULL;
            t = map_1(t, new_0);
            {
              c_33 = t;
              {
                if(((z_32 != NULL) && (z_32 != c_33)))
                  _fail(c_33);
                else
                  z_32 = c_33;
                {
                  t = not_null(z_32);
                  {
                    ATerm g_33 = NULL;
                    ATerm i_1 (ATerm t)
                    {
                      ATerm d_33 = NULL;
                      ATerm e_33 = NULL;
                      e_33 = t;
                      if(((d_33 != NULL) && (d_33 != e_33)))
                        _fail(e_33);
                      else
                        d_33 = e_33;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_33));
                      return(t);
                    }
                    t = map_1(t, i_1);
                    {
                      f_33 = t;
                      {
                        if(((w_32 != NULL) && (w_32 != f_33)))
                          _fail(f_33);
                        else
                          w_32 = f_33;
                        {
                          ATerm h_33 = NULL;
                          t = new_0(t);
                          {
                            g_33 = t;
                            {
                              if(((x_32 != NULL) && (x_32 != g_33)))
                                _fail(g_33);
                              else
                                x_32 = g_33;
                              {
                                t = not_null(t_32);
                                {
                                  ATerm k_33 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    h_33 = t;
                                    {
                                      if(((a_33 != NULL) && (a_33 != h_33)))
                                        _fail(h_33);
                                      else
                                        a_33 = h_33;
                                      {
                                        t = not_null(a_33);
                                        {
                                          ATerm l_33 = NULL,v_33 = NULL;
                                          ATerm j_1 (ATerm t)
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
                                          t = map_1(t, j_1);
                                          {
                                            k_33 = t;
                                            {
                                              if(((y_32 != NULL) && (y_32 != k_33)))
                                                _fail(k_33);
                                              else
                                                y_32 = k_33;
                                              {
                                                ATerm m_33 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(a_33));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    m_33 = t;
                                                    if(((l_33 != NULL) && (l_33 != m_33)))
                                                      _fail(m_33);
                                                    else
                                                      l_33 = m_33;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(t_32));
                                                  {
                                                    ATerm k_1 (ATerm t)
                                                    {
                                                      ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
                                                      n_33 = t;
                                                      k_32 :
                                                      if(match_cons(n_33, sym__2))
                                                        {
                                                          o_33 = ATgetArgument(n_33, 0);
                                                          r_33 = ATgetArgument(n_33, 1);
                                                          l_32 :
                                                          if(match_cons(o_33, sym__2))
                                                            {
                                                              p_33 = ATgetArgument(o_33, 0);
                                                              q_33 = ATgetArgument(o_33, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_33))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33)))));
                                                            }
                                                          else
                                                            {
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
                                                      v_33 = t;
                                                      if(((b_33 != NULL) && (b_33 != v_33)))
                                                        _fail(v_33);
                                                      else
                                                        b_33 = v_33;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_10;
        {
          ATerm y_10;
          y_10 = t;
          {
            ATerm x_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(a_33));
            {
              ATerm z_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  t = conc_more_lists_0(t);
                }
              {
                x_33 = t;
                if(((w_33 != NULL) && (w_33 != x_33)))
                  _fail(x_33);
                else
                  w_33 = x_33;
              }
            }
          }
          t = y_10;
          {
            ATerm d_11;
            d_11 = t;
            {
              ATerm z_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_32), not_null(w_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32))));
              {
                t = Mapp2_0(t);
                {
                  z_33 = t;
                  if(((y_33 != NULL) && (y_33 != z_33)))
                    _fail(z_33);
                  else
                    y_33 = z_33;
                }
              }
            }
            t = d_11;
            {
              ATerm b_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_32), not_null(y_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32))));
              {
                t = Bapp2_0(t);
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_33)), not_null(x_32)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_33)), not_null(a_34))));
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
  ATerm g_35 = NULL,h_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Build_1))
    {
      h_35 = ATgetArgument(g_35, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
            ATerm n_35 = NULL;
            ATerm r_35 = NULL;
            t = new_0(t);
            {
              n_35 = t;
              {
                if(((l_35 != NULL) && (l_35 != n_35)))
                  _fail(n_35);
                else
                  l_35 = n_35;
                {
                  t = not_null(h_35);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
                      o_35 = t;
                      v_34 :
                      if(match_cons(o_35, sym_Anno_2))
                        {
                          p_35 = ATgetArgument(o_35, 0);
                          q_35 = ATgetArgument(o_35, 1);
                          {
                            if(((j_35 != NULL) && (j_35 != p_35)))
                              _fail(p_35);
                            else
                              j_35 = p_35;
                            {
                              if(((k_35 != NULL) && (k_35 != q_35)))
                                _fail(q_35);
                              else
                                k_35 = q_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35));
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
                      r_35 = t;
                      if(((m_35 != NULL) && (m_35 != r_35)))
                        _fail(r_35);
                      else
                        m_35 = r_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_35)), not_null(j_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_35))));
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm u_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
                  ATerm w_35 = NULL;
                  ATerm z_35 = NULL;
                  t = new_0(t);
                  {
                    w_35 = t;
                    {
                      if(((u_35 != NULL) && (u_35 != w_35)))
                        _fail(w_35);
                      else
                        u_35 = w_35;
                      {
                        t = not_null(h_35);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm x_35 = NULL,y_35 = NULL;
                            x_35 = t;
                            z_34 :
                            if(match_cons(x_35, sym_RootApp_1))
                              {
                                y_35 = ATgetArgument(x_35, 0);
                                {
                                  if(((t_35 != NULL) && (t_35 != y_35)))
                                    _fail(y_35);
                                  else
                                    t_35 = y_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_35));
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
                            z_35 = t;
                            if(((v_35 != NULL) && (v_35 != z_35)))
                              _fail(z_35);
                            else
                              v_35 = z_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_35))));
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = u_11;
                  {
                    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
                    ATerm f_36 = NULL;
                    ATerm j_36 = NULL;
                    t = new_0(t);
                    {
                      f_36 = t;
                      {
                        if(((d_36 != NULL) && (d_36 != f_36)))
                          _fail(f_36);
                        else
                          d_36 = f_36;
                        {
                          t = not_null(h_35);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
                              g_36 = t;
                              d_35 :
                              if(match_cons(g_36, sym_App_2))
                                {
                                  h_36 = ATgetArgument(g_36, 0);
                                  i_36 = ATgetArgument(g_36, 1);
                                  {
                                    if(((b_36 != NULL) && (b_36 != h_36)))
                                      _fail(h_36);
                                    else
                                      b_36 = h_36;
                                    {
                                      if(((c_36 != NULL) && (c_36 != i_36)))
                                        _fail(i_36);
                                      else
                                        c_36 = i_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36));
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
                              j_36 = t;
                              if(((e_36 != NULL) && (e_36 != j_36)))
                                _fail(j_36);
                              else
                                e_36 = j_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_36), not_null(c_36), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_36))));
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(z_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  i_37 = t;
  f_37 :
  if(match_cons(i_37, sym__2))
    {
      j_37 = ATgetArgument(i_37, 0);
      m_37 = ATgetArgument(i_37, 1);
      g_37 :
      if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
        {
          k_37 = ATgetFirst((ATermList) j_37);
          l_37 = (ATerm) ATgetNext((ATermList) j_37);
          h_37 :
          if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
            {
              n_37 = ATgetFirst((ATermList) m_37);
              o_37 = (ATerm) ATgetNext((ATermList) m_37);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_37), not_null(n_37)), (ATerm) ATmakeAppl(sym__2, not_null(l_37), not_null(o_37)));
            }
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
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  v_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      w_37 :
      if(((ATgetType(z_37) == AT_LIST) && ATisEmpty(z_37)))
        {
          x_37 :
          if(((ATgetType(a_38) == AT_LIST) && ATisEmpty(a_38)))
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
  ATerm c_38 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          t = w_104(t);
          {
            t = _2(t, y_104, c_38);
            t = x_104(t);
          }
        }
      }
    return(t);
  }
  t = c_38(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm a_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  b_39 = t;
  u_38 :
  if(match_cons(b_39, sym_Call_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      e_39 = ATgetArgument(b_39, 1);
      v_38 :
      if(match_cons(c_39, sym_SVar_1))
        {
          d_39 = ATgetArgument(c_39, 0);
          w_38 :
          if(match_string(d_39, "Anno_Cong__"))
            {
              x_38 :
              if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
                {
                  f_39 = ATgetFirst((ATermList) e_39);
                  i_39 = (ATerm) ATgetNext((ATermList) e_39);
                  y_38 :
                  if(match_cons(f_39, sym_Cong_2))
                    {
                      g_39 = ATgetArgument(f_39, 0);
                      h_39 = ATgetArgument(f_39, 1);
                      z_38 :
                      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
                        {
                          j_39 = ATgetFirst((ATermList) i_39);
                          k_39 = (ATerm) ATgetNext((ATermList) i_39);
                          a_39 :
                          if(((ATgetType(k_39) == AT_LIST) && ATisEmpty(k_39)))
                            {
                              {
                                ATerm o_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,h_40 = NULL,i_40 = NULL,p_42 = NULL,r_42 = NULL,y_42 = NULL;
                                ATerm c_12;
                                c_12 = t;
                                {
                                  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(h_39)), not_null(j_39));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      j_40 = t;
                                      q_38 :
                                      if(((ATgetType(j_40) == AT_LIST) && !(ATisEmpty(j_40))))
                                        {
                                          k_40 = ATgetFirst((ATermList) j_40);
                                          l_40 = (ATerm) ATgetNext((ATermList) j_40);
                                          {
                                            ATerm t_40 = NULL;
                                            if(((o_39 != NULL) && (o_39 != k_40)))
                                              _fail(k_40);
                                            else
                                              o_39 = k_40;
                                            {
                                              if(((x_39 != NULL) && (x_39 != l_40)))
                                                _fail(l_40);
                                              else
                                                x_39 = l_40;
                                              {
                                                ATerm u_40 = NULL,v_40 = NULL,f_41 = NULL;
                                                ATerm o_1 (ATerm t)
                                                {
                                                  ATerm m_40 = NULL;
                                                  ATerm s_40 = NULL;
                                                  s_40 = t;
                                                  if(((m_40 != NULL) && (m_40 != s_40)))
                                                    _fail(s_40);
                                                  else
                                                    m_40 = s_40;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_40));
                                                  return(t);
                                                }
                                                t = map_1(t, o_1);
                                                {
                                                  t_40 = t;
                                                  {
                                                    if(((u_39 != NULL) && (u_39 != t_40)))
                                                      _fail(t_40);
                                                    else
                                                      u_39 = t_40;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(h_39)), not_null(j_39));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          u_40 = t;
                                                          p_38 :
                                                          if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
                                                            {
                                                              v_40 = ATgetFirst((ATermList) u_40);
                                                              f_41 = (ATerm) ATgetNext((ATermList) u_40);
                                                              {
                                                                ATerm i_41 = NULL;
                                                                if(((v_39 != NULL) && (v_39 != v_40)))
                                                                  _fail(v_40);
                                                                else
                                                                  v_39 = v_40;
                                                                {
                                                                  if(((h_40 != NULL) && (h_40 != f_41)))
                                                                    _fail(f_41);
                                                                  else
                                                                    h_40 = f_41;
                                                                  {
                                                                    ATerm j_41 = NULL,o_42 = NULL;
                                                                    ATerm p_1 (ATerm t)
                                                                    {
                                                                      ATerm g_41 = NULL;
                                                                      ATerm h_41 = NULL;
                                                                      h_41 = t;
                                                                      if(((g_41 != NULL) && (g_41 != h_41)))
                                                                        _fail(h_41);
                                                                      else
                                                                        g_41 = h_41;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_41));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, p_1);
                                                                    {
                                                                      i_41 = t;
                                                                      {
                                                                        if(((w_39 != NULL) && (w_39 != i_41)))
                                                                          _fail(i_41);
                                                                        else
                                                                          w_39 = i_41;
                                                                        {
                                                                          ATerm k_41 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(h_40));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              k_41 = t;
                                                                              if(((j_41 != NULL) && (j_41 != k_41)))
                                                                                _fail(k_41);
                                                                              else
                                                                                j_41 = k_41;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), (ATerm) ATinsert(CheckATermList(not_null(h_39)), not_null(j_39)));
                                                                            {
                                                                              ATerm q_1 (ATerm t)
                                                                              {
                                                                                ATerm l_41 = NULL,m_41 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                                                                                l_41 = t;
                                                                                m_38 :
                                                                                if(match_cons(l_41, sym__2))
                                                                                  {
                                                                                    m_41 = ATgetArgument(l_41, 0);
                                                                                    k_42 = ATgetArgument(l_41, 1);
                                                                                    n_38 :
                                                                                    if(match_cons(m_41, sym__2))
                                                                                      {
                                                                                        i_42 = ATgetArgument(m_41, 0);
                                                                                        j_42 = ATgetArgument(m_41, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_42)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                o_42 = t;
                                                                                if(((i_40 != NULL) && (i_40 != o_42)))
                                                                                  _fail(o_42);
                                                                                else
                                                                                  i_40 = o_42;
                                                                              }
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
                                t = c_12;
                                {
                                  ATerm g_12;
                                  g_12 = t;
                                  {
                                    ATerm q_42 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(h_40));
                                    {
                                      ATerm l_12 = t;
                                      int m_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = conc_two_lists_0(t);
                                          LocalPopChoice(m_12);
                                        }
                                      else
                                        {
                                          t = l_12;
                                          t = conc_more_lists_0(t);
                                        }
                                      {
                                        q_42 = t;
                                        if(((p_42 != NULL) && (p_42 != q_42)))
                                          _fail(q_42);
                                        else
                                          p_42 = q_42;
                                      }
                                    }
                                  }
                                  t = g_12;
                                  {
                                    ATerm v_12;
                                    v_12 = t;
                                    {
                                      ATerm s_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_39), not_null(u_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          s_42 = t;
                                          if(((r_42 != NULL) && (r_42 != s_42)))
                                            _fail(s_42);
                                          else
                                            r_42 = s_42;
                                        }
                                      }
                                    }
                                    t = v_12;
                                    {
                                      ATerm z_42 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_39), not_null(w_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_39))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          z_42 = t;
                                          if(((y_42 != NULL) && (y_42 != z_42)))
                                            _fail(z_42);
                                          else
                                            y_42 = z_42;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(p_42)), not_null(v_39)), not_null(o_39)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_40)), not_null(y_42))));
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
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_As_2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(j_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
        {
          t = not_null(k_44);
          {
            ATerm t_44 = NULL;
            t = s_90(t);
            {
              r_44 = t;
              {
                t = not_null(l_44);
                {
                  ATerm v_44 = NULL;
                  t = t_90(t);
                  {
                    t_44 = t;
                    {
                      ATerm w_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_44), not_null(t_44)), not_null(p_44));
                      {
                        w_44 = t;
                        if(((v_44 != NULL) && (v_44 != w_44)))
                          _fail(w_44);
                        else
                          v_44 = w_44;
                      }
                      t = not_null(v_44);
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
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym_Prim_2))
    {
      j_45 = ATgetArgument(i_45, 0);
      k_45 = ATgetArgument(i_45, 1);
      {
        ATerm o_45 = NULL,q_45 = NULL;
        ATerm p_45 = NULL;
        t = SSLgetAnnotations(not_null(i_45));
        {
          p_45 = t;
          if(((o_45 != NULL) && (o_45 != p_45)))
            _fail(p_45);
          else
            o_45 = p_45;
        }
        {
          t = not_null(j_45);
          {
            ATerm s_45 = NULL;
            t = p_86(t);
            {
              q_45 = t;
              {
                t = not_null(k_45);
                {
                  ATerm u_45 = NULL;
                  t = q_86(t);
                  {
                    s_45 = t;
                    {
                      ATerm v_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(q_45), not_null(s_45)), not_null(o_45));
                      {
                        v_45 = t;
                        if(((u_45 != NULL) && (u_45 != v_45)))
                          _fail(v_45);
                        else
                          u_45 = v_45;
                      }
                      t = not_null(u_45);
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym_Explode_2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      {
        ATerm n_46 = NULL,p_46 = NULL;
        ATerm o_46 = NULL;
        t = SSLgetAnnotations(not_null(h_46));
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
        {
          t = not_null(i_46);
          {
            ATerm r_46 = NULL;
            t = o_90(t);
            {
              p_46 = t;
              {
                t = not_null(j_46);
                {
                  ATerm t_46 = NULL;
                  t = p_90(t);
                  {
                    r_46 = t;
                    {
                      ATerm u_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(p_46), not_null(r_46)), not_null(n_46));
                      {
                        u_46 = t;
                        if(((t_46 != NULL) && (t_46 != u_46)))
                          _fail(u_46);
                        else
                          t_46 = u_46;
                      }
                      t = not_null(t_46);
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
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym_Op_2))
    {
      n_47 = ATgetArgument(m_47, 0);
      o_47 = ATgetArgument(m_47, 1);
      {
        ATerm s_47 = NULL,u_47 = NULL;
        ATerm t_47 = NULL;
        t = SSLgetAnnotations(not_null(m_47));
        {
          t_47 = t;
          if(((s_47 != NULL) && (s_47 != t_47)))
            _fail(t_47);
          else
            s_47 = t_47;
        }
        {
          t = not_null(n_47);
          {
            ATerm w_47 = NULL;
            t = t_88(t);
            {
              u_47 = t;
              {
                t = not_null(o_47);
                {
                  ATerm y_47 = NULL;
                  t = u_88(t);
                  {
                    w_47 = t;
                    {
                      ATerm z_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_47), not_null(w_47)), not_null(s_47));
                      {
                        z_47 = t;
                        if(((y_47 != NULL) && (y_47 != z_47)))
                          _fail(z_47);
                        else
                          y_47 = z_47;
                      }
                      t = not_null(y_47);
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
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_98(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
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
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm g_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, k_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
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
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, k_98);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm k_13 = t;
                          int x_13 = stack_ptr;
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
                              LocalPopChoice(x_13);
                            }
                          else
                            {
                              t = k_13;
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
  ATerm a_49 = NULL,b_49 = NULL;
  a_49 = t;
  z_48 :
  if(match_cons(a_49, sym_Match_1))
    {
      b_49 = ATgetArgument(a_49, 0);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
            ATerm k_49 = NULL;
            ATerm o_49 = NULL;
            t = new_0(t);
            {
              k_49 = t;
              {
                if(((f_49 != NULL) && (f_49 != k_49)))
                  _fail(k_49);
                else
                  f_49 = k_49;
                {
                  t = not_null(b_49);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
                      l_49 = t;
                      k_48 :
                      if(match_cons(l_49, sym_Anno_2))
                        {
                          m_49 = ATgetArgument(l_49, 0);
                          n_49 = ATgetArgument(l_49, 1);
                          {
                            if(((d_49 != NULL) && (d_49 != m_49)))
                              _fail(m_49);
                            else
                              d_49 = m_49;
                            {
                              if(((e_49 != NULL) && (e_49 != n_49)))
                                _fail(n_49);
                              else
                                e_49 = n_49;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_49)), not_null(d_49));
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
                      o_49 = t;
                      if(((g_49 != NULL) && (g_49 != o_49)))
                        _fail(o_49);
                      else
                        g_49 = o_49;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_49)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_49)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_49))))));
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
                  ATerm t_49 = NULL;
                  ATerm w_49 = NULL;
                  t = new_0(t);
                  {
                    t_49 = t;
                    {
                      if(((r_49 != NULL) && (r_49 != t_49)))
                        _fail(t_49);
                      else
                        r_49 = t_49;
                      {
                        t = not_null(b_49);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm u_49 = NULL,v_49 = NULL;
                            u_49 = t;
                            t_48 :
                            if(match_cons(u_49, sym_RootApp_1))
                              {
                                v_49 = ATgetArgument(u_49, 0);
                                {
                                  if(((q_49 != NULL) && (q_49 != v_49)))
                                    _fail(v_49);
                                  else
                                    q_49 = v_49;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_49));
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
                            w_49 = t;
                            if(((s_49 != NULL) && (s_49 != w_49)))
                              _fail(w_49);
                            else
                              s_49 = w_49;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_49)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_49))), not_null(q_49))));
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
                    ATerm k_50 = NULL;
                    ATerm r_50 = NULL;
                    t = new_0(t);
                    {
                      k_50 = t;
                      {
                        if(((a_50 != NULL) && (a_50 != k_50)))
                          _fail(k_50);
                        else
                          a_50 = k_50;
                        {
                          t = not_null(b_49);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm l_50 = NULL,p_50 = NULL,q_50 = NULL;
                              l_50 = t;
                              x_48 :
                              if(match_cons(l_50, sym_App_2))
                                {
                                  p_50 = ATgetArgument(l_50, 0);
                                  q_50 = ATgetArgument(l_50, 1);
                                  {
                                    if(((z_49 != NULL) && (z_49 != p_50)))
                                      _fail(p_50);
                                    else
                                      z_49 = p_50;
                                    {
                                      if(((y_49 != NULL) && (y_49 != q_50)))
                                        _fail(q_50);
                                      else
                                        y_49 = q_50;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_50));
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
                              r_50 = t;
                              if(((b_50 != NULL) && (b_50 != r_50)))
                                _fail(r_50);
                              else
                                b_50 = r_50;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_50))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_49)), not_null(z_49)))));
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
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(match_cons(s_51, sym_Cong_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      {
        ATerm x_51 = NULL;
        ATerm b_52 = NULL;
        t = not_null(u_51);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm y_51 = NULL,z_51 = NULL;
            z_51 = t;
            p_51 :
            if(match_cons(z_51, sym_Match_1))
              {
                y_51 = ATgetArgument(z_51, 0);
                t = not_null(y_51);
              }
            else
              {
                if(match_cons(z_51, sym_Id_0))
                  {
                    t = term_d_14;
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
            b_52 = t;
            if(((x_51 != NULL) && (x_51 != b_52)))
              _fail(b_52);
            else
              x_51 = b_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(t_51), not_null(x_51)));
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
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  h_52 :
  if(match_cons(j_52, sym_Scope_2))
    {
      k_52 = ATgetArgument(j_52, 0);
      l_52 = ATgetArgument(j_52, 1);
      i_52 :
      if(((ATgetType(k_52) == AT_LIST) && ATisEmpty(k_52)))
        {
          t = not_null(l_52);
        }
      else
        {
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
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  h_53 = t;
  u_52 :
  if(match_cons(h_53, sym_Where_1))
    {
      i_53 = ATgetArgument(h_53, 0);
      v_52 :
      if(match_cons(i_53, sym_Seq_2))
        {
          g_53 = ATgetArgument(i_53, 0);
          c_53 = ATgetArgument(i_53, 1);
          w_52 :
          if(match_cons(g_53, sym_Where_1))
            {
              b_53 = ATgetArgument(g_53, 0);
              x_52 :
              if(match_cons(c_53, sym_Seq_2))
                {
                  d_53 = ATgetArgument(c_53, 0);
                  f_53 = ATgetArgument(c_53, 1);
                  y_52 :
                  if(match_cons(d_53, sym_Build_1))
                    {
                      e_53 = ATgetArgument(d_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_53)), not_null(f_53))));
                    }
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
          if(match_cons(i_53, sym_Where_1))
            {
              g_53 = ATgetArgument(i_53, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(g_53));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(h_53, sym_Test_1))
        {
          i_53 = ATgetArgument(h_53, 0);
          z_52 :
          if(match_cons(i_53, sym_Test_1))
            {
              g_53 = ATgetArgument(i_53, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(g_53));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_53, sym_Not_1))
            {
              i_53 = ATgetArgument(h_53, 0);
              a_53 :
              if(match_cons(i_53, sym_Not_1))
                {
                  g_53 = ATgetArgument(i_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(g_53));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(h_53, sym_LChoice_2))
                {
                  i_53 = ATgetArgument(h_53, 0);
                  j_53 = ATgetArgument(h_53, 1);
                  {
                    if(((i_53 != NULL) && (i_53 != j_53)))
                      _fail(j_53);
                    else
                      i_53 = j_53;
                    t = not_null(i_53);
                  }
                }
              else
                {
                  if(match_cons(h_53, sym_Choice_2))
                    {
                      i_53 = ATgetArgument(h_53, 0);
                      j_53 = ATgetArgument(h_53, 1);
                      {
                        if(((i_53 != NULL) && (i_53 != j_53)))
                          _fail(j_53);
                        else
                          i_53 = j_53;
                        t = not_null(i_53);
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
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  g_54 = t;
  b_54 :
  if(match_cons(g_54, sym_LChoice_2))
    {
      h_54 = ATgetArgument(g_54, 0);
      k_54 = ATgetArgument(g_54, 1);
      c_54 :
      if(match_cons(h_54, sym_LChoice_2))
        {
          i_54 = ATgetArgument(h_54, 0);
          j_54 = ATgetArgument(h_54, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_54), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_54), not_null(k_54)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(g_54, sym_Seq_2))
        {
          h_54 = ATgetArgument(g_54, 0);
          k_54 = ATgetArgument(g_54, 1);
          d_54 :
          if(match_cons(h_54, sym_Seq_2))
            {
              i_54 = ATgetArgument(h_54, 0);
              j_54 = ATgetArgument(h_54, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_54), not_null(k_54)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_54, sym_Choice_2))
            {
              h_54 = ATgetArgument(g_54, 0);
              k_54 = ATgetArgument(g_54, 1);
              e_54 :
              if(match_cons(h_54, sym_Choice_2))
                {
                  i_54 = ATgetArgument(h_54, 0);
                  j_54 = ATgetArgument(h_54, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_54), not_null(k_54)));
                }
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  k_55 :
  if(match_cons(r_55, sym_Lets_2))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_55), not_null(t_55));
    }
  else
    {
      if(match_cons(r_55, sym_LChoices_1))
        {
          s_55 = ATgetArgument(r_55, 0);
          l_55 :
          if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
            {
              o_55 = ATgetFirst((ATermList) s_55);
              p_55 = (ATerm) ATgetNext((ATermList) s_55);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_55), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_55)));
            }
          else
            {
              if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
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
          if(match_cons(r_55, sym_Choices_1))
            {
              s_55 = ATgetArgument(r_55, 0);
              m_55 :
              if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                {
                  o_55 = ATgetFirst((ATermList) s_55);
                  p_55 = (ATerm) ATgetNext((ATermList) s_55);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_55), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_55)));
                }
              else
                {
                  if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
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
              if(match_cons(r_55, sym_Seqs_1))
                {
                  s_55 = ATgetArgument(r_55, 0);
                  n_55 :
                  if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                    {
                      o_55 = ATgetFirst((ATermList) s_55);
                      p_55 = (ATerm) ATgetNext((ATermList) s_55);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_55), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_55)));
                    }
                  else
                    {
                      if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
                        {
                          t = term_e_14;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(r_55, sym_DefaultVarDec_1))
                    {
                      s_55 = ATgetArgument(r_55, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14));
                    }
                  else
                    {
                      if(match_cons(r_55, sym_InfixApp_3))
                        {
                          s_55 = ATgetArgument(r_55, 0);
                          t_55 = ATgetArgument(r_55, 1);
                          q_55 = ATgetArgument(r_55, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Op_2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), not_null(s_55))));
                        }
                      else
                        {
                          if(match_cons(r_55, sym_BAM_3))
                            {
                              s_55 = ATgetArgument(r_55, 0);
                              t_55 = ATgetArgument(r_55, 1);
                              q_55 = ATgetArgument(r_55, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_55))), not_null(s_55)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_55))));
                            }
                          else
                            {
                              if(match_cons(r_55, sym_AM_2))
                                {
                                  s_55 = ATgetArgument(r_55, 0);
                                  t_55 = ATgetArgument(r_55, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_55), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_55)));
                                }
                              else
                                {
                                  if(match_cons(r_55, sym_MA_2))
                                    {
                                      s_55 = ATgetArgument(r_55, 0);
                                      t_55 = ATgetArgument(r_55, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_55)), not_null(t_55));
                                    }
                                  else
                                    {
                                      if(match_cons(r_55, sym_BA_2))
                                        {
                                          s_55 = ATgetArgument(r_55, 0);
                                          t_55 = ATgetArgument(r_55, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_55)), not_null(s_55));
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
  ATerm f_57 = NULL,g_57 = NULL;
  f_57 = t;
  d_57 :
  if(match_cons(f_57, sym_Where_1))
    {
      g_57 = ATgetArgument(f_57, 0);
      e_57 :
      if(match_cons(g_57, sym_Fail_0))
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
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  j_57 :
  if(match_cons(l_57, sym_LChoice_2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      k_57 :
      if(match_cons(n_57, sym_Fail_0))
        {
          t = not_null(m_57);
        }
      else
        {
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
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  t_57 = t;
  r_57 :
  if(match_cons(t_57, sym_LChoice_2))
    {
      u_57 = ATgetArgument(t_57, 0);
      v_57 = ATgetArgument(t_57, 1);
      s_57 :
      if(match_cons(u_57, sym_Fail_0))
        {
          t = not_null(v_57);
        }
      else
        {
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
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_Choice_2))
    {
      c_58 = ATgetArgument(b_58, 0);
      d_58 = ATgetArgument(b_58, 1);
      a_58 :
      if(match_cons(d_58, sym_Fail_0))
        {
          t = not_null(c_58);
        }
      else
        {
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  h_58 :
  if(match_cons(j_58, sym_Choice_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      i_58 :
      if(match_cons(k_58, sym_Fail_0))
        {
          t = not_null(l_58);
        }
      else
        {
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
  ATerm r_58 = NULL,s_58 = NULL,w_58 = NULL;
  r_58 = t;
  q_58 :
  if(match_cons(r_58, sym_Cong_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      w_58 = ATgetArgument(r_58, 1);
      {
        t = not_null(w_58);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm z_58 = NULL;
            z_58 = t;
            p_58 :
            if(!(match_cons(z_58, sym_Fail_0)))
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
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  e_59 = t;
  c_59 :
  if(match_cons(e_59, sym_Path_2))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      d_59 :
      if(match_cons(g_59, sym_Fail_0))
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
  ATerm m_59 = NULL,n_59 = NULL;
  m_59 = t;
  k_59 :
  if(match_cons(m_59, sym_One_1))
    {
      n_59 = ATgetArgument(m_59, 0);
      l_59 :
      if(match_cons(n_59, sym_Fail_0))
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
  ATerm s_59 = NULL,t_59 = NULL;
  s_59 = t;
  q_59 :
  if(match_cons(s_59, sym_Some_1))
    {
      t_59 = ATgetArgument(s_59, 0);
      r_59 :
      if(match_cons(t_59, sym_Fail_0))
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
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  y_59 = t;
  w_59 :
  if(match_cons(y_59, sym_Rec_2))
    {
      z_59 = ATgetArgument(y_59, 0);
      a_60 = ATgetArgument(y_59, 1);
      x_59 :
      if(match_cons(a_60, sym_Fail_0))
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
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL;
  g_60 = t;
  e_60 :
  if(match_cons(g_60, sym_Scope_2))
    {
      h_60 = ATgetArgument(g_60, 0);
      i_60 = ATgetArgument(g_60, 1);
      f_60 :
      if(match_cons(i_60, sym_Fail_0))
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
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  m_60 :
  if(match_cons(o_60, sym_Seq_2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
      n_60 :
      if(match_cons(p_60, sym_Fail_0))
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
  ATerm w_60 = NULL,x_60 = NULL;
  w_60 = t;
  u_60 :
  if(match_cons(w_60, sym_Not_1))
    {
      x_60 = ATgetArgument(w_60, 0);
      v_60 :
      if(match_cons(x_60, sym_Fail_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm c_61 = NULL,d_61 = NULL;
  c_61 = t;
  a_61 :
  if(match_cons(c_61, sym_Test_1))
    {
      d_61 = ATgetArgument(c_61, 0);
      b_61 :
      if(match_cons(d_61, sym_Fail_0))
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
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
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
                  t = F3_0(t);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  {
                    ATerm a_15 = t;
                    int p_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(p_15);
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm q_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = q_15;
                              {
                                ATerm x_15 = t;
                                int z_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(z_15);
                                  }
                                else
                                  {
                                    t = x_15;
                                    {
                                      ATerm a_16 = t;
                                      int b_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(b_16);
                                        }
                                      else
                                        {
                                          t = a_16;
                                          {
                                            ATerm c_16 = t;
                                            int r_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(r_16);
                                              }
                                            else
                                              {
                                                t = c_16;
                                                {
                                                  ATerm s_16 = t;
                                                  int t_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(z_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_16;
                                                                        {
                                                                          ATerm h_17 = t;
                                                                          int i_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(i_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_17;
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
  ATerm i_61 = NULL,j_61 = NULL;
  i_61 = t;
  g_61 :
  if(match_cons(i_61, sym_Match_1))
    {
      j_61 = ATgetArgument(i_61, 0);
      h_61 :
      if(match_cons(j_61, sym_Wld_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm o_61 = NULL,p_61 = NULL;
  o_61 = t;
  m_61 :
  if(match_cons(o_61, sym_Where_1))
    {
      p_61 = ATgetArgument(o_61, 0);
      n_61 :
      if(match_cons(p_61, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm u_61 = NULL,v_61 = NULL;
  u_61 = t;
  s_61 :
  if(match_cons(u_61, sym_All_1))
    {
      v_61 = ATgetArgument(u_61, 0);
      t_61 :
      if(match_cons(v_61, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  a_62 = t;
  y_61 :
  if(match_cons(a_62, sym_Rec_2))
    {
      b_62 = ATgetArgument(a_62, 0);
      c_62 = ATgetArgument(a_62, 1);
      z_61 :
      if(match_cons(c_62, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  i_62 = t;
  g_62 :
  if(match_cons(i_62, sym_Scope_2))
    {
      j_62 = ATgetArgument(i_62, 0);
      k_62 = ATgetArgument(i_62, 1);
      h_62 :
      if(match_cons(k_62, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  o_62 :
  if(match_cons(r_62, sym_LChoice_2))
    {
      s_62 = ATgetArgument(r_62, 0);
      t_62 = ATgetArgument(r_62, 1);
      p_62 :
      if(match_cons(s_62, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  z_62 :
  if(match_cons(b_63, sym_Seq_2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      a_63 :
      if(match_cons(d_63, sym_Id_0))
        {
          t = not_null(c_63);
        }
      else
        {
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  h_63 :
  if(match_cons(j_63, sym_Seq_2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      i_63 :
      if(match_cons(k_63, sym_Id_0))
        {
          t = not_null(l_63);
        }
      else
        {
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
  ATerm r_63 = NULL,s_63 = NULL;
  r_63 = t;
  p_63 :
  if(match_cons(r_63, sym_Not_1))
    {
      s_63 = ATgetArgument(r_63, 0);
      q_63 :
      if(match_cons(s_63, sym_Id_0))
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
  ATerm z_63 = NULL,a_64 = NULL;
  z_63 = t;
  x_63 :
  if(match_cons(z_63, sym_Test_1))
    {
      a_64 = ATgetArgument(z_63, 0);
      y_63 :
      if(match_cons(a_64, sym_Id_0))
        {
          t = term_e_14;
        }
      else
        {
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
  ATerm j_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = j_17;
      {
        ATerm n_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(q_17);
          }
        else
          {
            t = n_17;
            {
              ATerm s_17 = t;
              int t_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(t_17);
                }
              else
                {
                  t = s_17;
                  {
                    ATerm u_17 = t;
                    int g_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(g_18);
                      }
                    else
                      {
                        t = u_17;
                        {
                          ATerm h_18 = t;
                          int i_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
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
                                    t = I8_0(t);
                                    LocalPopChoice(k_18);
                                  }
                                else
                                  {
                                    t = j_18;
                                    {
                                      ATerm l_18 = t;
                                      int t_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(t_18);
                                        }
                                      else
                                        {
                                          t = l_18;
                                          {
                                            ATerm u_18 = t;
                                            int v_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(v_18);
                                              }
                                            else
                                              {
                                                t = u_18;
                                                {
                                                  ATerm y_18 = t;
                                                  int z_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(z_18);
                                                    }
                                                  else
                                                    {
                                                      t = y_18;
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
  ATerm a_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = a_19;
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  {
                    ATerm q_19 = t;
                    int r_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(r_19);
                      }
                    else
                      {
                        t = q_19;
                        {
                          ATerm c_20 = t;
                          int e_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(e_20);
                            }
                          else
                            {
                              t = c_20;
                              {
                                ATerm f_20 = t;
                                int g_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
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
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(i_20);
                                        }
                                      else
                                        {
                                          t = h_20;
                                          {
                                            ATerm k_20 = t;
                                            int p_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(p_20);
                                              }
                                            else
                                              {
                                                t = k_20;
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
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm v_20 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm h_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = h_21;
                                    {
                                      ATerm l_21 = t;
                                      int m_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(m_21);
                                        }
                                      else
                                        {
                                          t = l_21;
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
  ATerm d_64 (ATerm t)
  {
    ATerm n_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        t = d_64(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = n_21;
        t = e_116(t);
      }
    return(t);
  }
  t = d_64(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_116 (ATerm))
{
  t = repeat_2(t, g_116, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm f_100 (ATerm))
{
  ATerm e_64 (ATerm t)
  {
    t = f_100(t);
    {
      t = _all(t, e_64);
      t = f_100(t);
    }
    return(t);
  }
  t = e_64(t);
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
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
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
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym_SDef_3))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      p_64 = ATgetArgument(m_64, 2);
      {
        ATerm u_64 = NULL,w_64 = NULL;
        ATerm v_64 = NULL;
        t = SSLgetAnnotations(not_null(m_64));
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
        {
          t = not_null(n_64);
          {
            ATerm y_64 = NULL;
            t = d_88(t);
            {
              w_64 = t;
              {
                t = not_null(o_64);
                {
                  ATerm a_65 = NULL;
                  t = e_88(t);
                  {
                    y_64 = t;
                    {
                      t = not_null(p_64);
                      {
                        ATerm c_65 = NULL;
                        t = f_88(t);
                        {
                          a_65 = t;
                          {
                            ATerm d_65 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(w_64), not_null(y_64), not_null(a_65)), not_null(u_64));
                            {
                              d_65 = t;
                              if(((c_65 != NULL) && (c_65 != d_65)))
                                _fail(d_65);
                              else
                                c_65 = d_65;
                            }
                            t = not_null(c_65);
                          }
                        }
                      }
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
  ATerm x_65 = NULL,y_65 = NULL;
  x_65 = t;
  w_65 :
  if(match_cons(x_65, sym_Strategies_1))
    {
      y_65 = ATgetArgument(x_65, 0);
      {
        ATerm b_66 = NULL,d_66 = NULL;
        ATerm c_66 = NULL;
        t = SSLgetAnnotations(not_null(x_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
        {
          t = not_null(y_65);
          {
            ATerm f_66 = NULL;
            t = h_89(t);
            {
              d_66 = t;
              {
                ATerm g_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_66)), not_null(b_66));
                {
                  g_66 = t;
                  if(((f_66 != NULL) && (f_66 != g_66)))
                    _fail(g_66);
                  else
                    f_66 = g_66;
                }
                t = not_null(f_66);
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
  ATerm q_66 = NULL,r_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym_Specification_1))
    {
      r_66 = ATgetArgument(q_66, 0);
      {
        ATerm u_66 = NULL,w_66 = NULL;
        ATerm v_66 = NULL;
        t = SSLgetAnnotations(not_null(q_66));
        {
          v_66 = t;
          if(((u_66 != NULL) && (u_66 != v_66)))
            _fail(v_66);
          else
            u_66 = v_66;
        }
        {
          t = not_null(r_66);
          {
            ATerm y_66 = NULL;
            t = j_89(t);
            {
              w_66 = t;
              {
                ATerm z_66 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_66)), not_null(u_66));
                {
                  z_66 = t;
                  if(((y_66 != NULL) && (y_66 != z_66)))
                    _fail(z_66);
                  else
                    y_66 = z_66;
                }
                t = not_null(y_66);
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
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  k_67 = t;
  j_67 :
  if(match_cons(k_67, sym__2))
    {
      l_67 = ATgetArgument(k_67, 0);
      m_67 = ATgetArgument(k_67, 1);
      {
        ATerm q_67 = NULL,s_67 = NULL;
        ATerm r_67 = NULL;
        t = SSLgetAnnotations(not_null(k_67));
        {
          r_67 = t;
          if(((q_67 != NULL) && (q_67 != r_67)))
            _fail(r_67);
          else
            q_67 = r_67;
        }
        {
          t = not_null(l_67);
          {
            ATerm u_67 = NULL;
            t = e_85(t);
            {
              s_67 = t;
              {
                t = not_null(m_67);
                {
                  ATerm w_67 = NULL;
                  t = f_85(t);
                  {
                    u_67 = t;
                    {
                      ATerm x_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_67), not_null(u_67)), not_null(q_67));
                      {
                        x_67 = t;
                        if(((w_67 != NULL) && (w_67 != x_67)))
                          _fail(x_67);
                        else
                          w_67 = x_67;
                      }
                      t = not_null(w_67);
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
  ATerm f_68 = NULL;
  ATerm v_21;
  v_21 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm g_68 = NULL,h_68 = NULL;
      g_68 = t;
      e_68 :
      if(match_cons(g_68, sym_Program_1))
        {
          h_68 = ATgetArgument(g_68, 0);
          if(((f_68 != NULL) && (f_68 != h_68)))
            _fail(h_68);
          else
            f_68 = h_68;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_22), not_null(f_68)), term_b_22));
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
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  l_68 = t;
  k_68 :
  if(match_cons(l_68, sym__2))
    {
      m_68 = ATgetArgument(l_68, 0);
      n_68 = ATgetArgument(l_68, 1);
      {
        ATerm i_22;
        i_22 = t;
        t = SSL_printnl(not_null(m_68), not_null(n_68));
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
  ATerm s_68 = NULL;
  s_68 = t;
  t = SSL_implode_string(not_null(s_68));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = j_22;
      {
        ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
        g_69 = t;
        d_69 :
        if(((ATgetType(g_69) == AT_LIST) && !(ATisEmpty(g_69))))
          {
            h_69 = ATgetFirst((ATermList) g_69);
            i_69 = (ATerm) ATgetNext((ATermList) g_69);
            {
              t = not_null(h_69);
              {
                ATerm l_2 (ATerm t)
                {
                  t = not_null(i_69);
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
  ATerm c_70 = NULL;
  ATerm e_70 = NULL;
  c_70 = t;
  {
    ATerm j_70 = NULL;
    ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
    t = not_null(c_70);
    {
      j_70 = t;
      {
        t = SSL_explode_term(not_null(j_70));
        {
          l_70 = t;
          a_70 :
          if(match_cons(l_70, sym__2))
            {
              m_70 = ATgetArgument(l_70, 0);
              n_70 = ATgetArgument(l_70, 1);
              b_70 :
              if(match_string(m_70, ""))
                {
                  if(((e_70 != NULL) && (e_70 != n_70)))
                    _fail(n_70);
                  else
                    e_70 = n_70;
                }
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
      t = not_null(e_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_106 (ATerm))
{
  ATerm r_70 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_70);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          t = Nil_0(t);
          t = y_106(t);
        }
      }
    return(t);
  }
  t = r_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  t_70 :
  if(match_cons(u_70, sym__2))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      {
        t = not_null(v_70);
        {
          ATerm m_2 (ATerm t)
          {
            t = not_null(w_70);
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
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_22);
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
  ATerm b_71 = NULL;
  b_71 = t;
  t = SSL_explode_string(not_null(b_71));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_71 = NULL;
  g_71 = t;
  t = SSL_is_string(not_null(g_71));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_22 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = x_22;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, n_2);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            {
              ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
              p_71 = t;
              o_71 :
              if(match_cons(p_71, sym_Path_1))
                {
                  q_71 = ATgetArgument(p_71, 0);
                  t = not_null(q_71);
                }
              else
                {
                  if(match_cons(p_71, sym_Var_1))
                    {
                      q_71 = ATgetArgument(p_71, 0);
                      {
                        t = not_null(q_71);
                        {
                          ATerm k_23 = t;
                          int l_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_23);
                            }
                          else
                            {
                              t = k_23;
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  t = term_n_23;
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
                      if(match_cons(p_71, sym_Prefix_2))
                        {
                          q_71 = ATgetArgument(p_71, 0);
                          r_71 = ATgetArgument(p_71, 1);
                          {
                            ATerm w_71 = NULL,y_71 = NULL;
                            ATerm o_23;
                            o_23 = t;
                            {
                              ATerm x_71 = NULL;
                              t = not_null(q_71);
                              {
                                t = eval_config_0(t);
                                {
                                  x_71 = t;
                                  if(((w_71 != NULL) && (w_71 != x_71)))
                                    _fail(x_71);
                                  else
                                    w_71 = x_71;
                                }
                              }
                            }
                            t = o_23;
                            {
                              ATerm z_71 = NULL;
                              t = not_null(r_71);
                              {
                                t = eval_config_0(t);
                                {
                                  z_71 = t;
                                  if(((y_71 != NULL) && (y_71 != z_71)))
                                    _fail(z_71);
                                  else
                                    y_71 = z_71;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_71), not_null(y_71));
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
  ATerm k_72 = NULL;
  k_72 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(k_72));
    {
      t = table_get_0(t);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm a_24;
              a_24 = t;
              {
                ATerm m_72 = NULL;
                ATerm n_72 = NULL;
                n_72 = t;
                if(((m_72 != NULL) && (m_72 != n_72)))
                  _fail(n_72);
                else
                  m_72 = n_72;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(k_72), not_null(m_72));
                  t = table_put_0(t);
                }
              }
              t = a_24;
            }
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
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
  ATerm e_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24;
      q_24 = t;
      {
        ATerm r_72 = NULL;
        ATerm s_72 = NULL;
        t = term_r_24;
        {
          t = get_config_0(t);
          {
            s_72 = t;
            if(((r_72 != NULL) && (r_72 != s_72)))
              _fail(s_72);
            else
              r_72 = s_72;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_72), term_s_24);
          t = geq_0(t);
        }
      }
      t = q_24;
      t = m_123(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = e_24;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
  w_72 = t;
  v_72 :
  if(match_cons(w_72, sym__2))
    {
      x_72 = ATgetArgument(w_72, 0);
      y_72 = ATgetArgument(w_72, 1);
      t = SSL_WriteToTextFile(not_null(x_72), not_null(y_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  e_73 = t;
  d_73 :
  if(match_cons(e_73, sym__2))
    {
      f_73 = ATgetArgument(e_73, 0);
      g_73 = ATgetArgument(e_73, 1);
      t = SSL_WriteToBinaryFile(not_null(f_73), not_null(g_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_73 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm w_73 = NULL,x_73 = NULL;
            w_73 = t;
            l_73 :
            if(match_cons(w_73, sym_Output_1))
              {
                x_73 = ATgetArgument(w_73, 0);
                if(((v_73 != NULL) && (v_73 != x_73)))
                  _fail(x_73);
                else
                  v_73 = x_73;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, q_2);
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          {
            ATerm y_73 = NULL;
            t = term_w_24;
            {
              y_73 = t;
              if(((v_73 != NULL) && (v_73 != y_73)))
                _fail(y_73);
              else
                v_73 = y_73;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = t_24;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(v_73);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm e_25 = t;
      int g_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm z_73 = NULL;
              z_73 = t;
              u_73 :
              if(!(match_cons(z_73, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(g_25);
        }
      else
        {
          t = e_25;
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
  ATerm f_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  ATerm i_25;
  i_25 = t;
  t = dtime_0(t);
  t = i_25;
  {
    t = t_121(t);
    {
      ATerm k_25;
      k_25 = t;
      {
        ATerm g_74 = NULL;
        t = dtime_0(t);
        {
          g_74 = t;
          if(((f_74 != NULL) && (f_74 != g_74)))
            _fail(g_74);
          else
            f_74 = g_74;
        }
      }
      t = k_25;
      {
        h_74 = t;
        e_74 :
        if(match_cons(h_74, sym__2))
          {
            i_74 = ATgetArgument(h_74, 0);
            j_74 = ATgetArgument(h_74, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_74)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_74))), not_null(j_74));
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
  ATerm l_25;
  l_25 = t;
  {
    ATerm q_74 = NULL,s_74 = NULL;
    ATerm n_25;
    n_25 = t;
    {
      ATerm r_74 = NULL;
      t = p_120(t);
      {
        r_74 = t;
        if(((q_74 != NULL) && (q_74 != r_74)))
          _fail(r_74);
        else
          q_74 = r_74;
      }
    }
    t = n_25;
    {
      ATerm d_75 = NULL;
      d_75 = t;
      if(((s_74 != NULL) && (s_74 != d_75)))
        _fail(d_75);
      else
        s_74 = d_75;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_74)), not_null(q_74)));
        t = printnl_0(t);
      }
    }
  }
  t = l_25;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_75 = NULL;
  ATerm o_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_76 = NULL;
      m_76 = t;
      {
        if(((q_75 != NULL) && (q_75 != m_76)))
          _fail(m_76);
        else
          q_75 = m_76;
        t = SSL_ReadFromFile(not_null(q_75));
      }
      LocalPopChoice(t_25);
    }
  else
    {
      t = o_25;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_u_25;
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
  ATerm q_76 = NULL,t_77 = NULL;
  ATerm w_25;
  w_25 = t;
  {
    ATerm s_77 = NULL;
    t = v_103(t);
    {
      s_77 = t;
      if(((q_76 != NULL) && (q_76 != s_77)))
        _fail(s_77);
      else
        q_76 = s_77;
    }
  }
  t = w_25;
  {
    ATerm u_77 = NULL;
    t = w_103(t);
    {
      u_77 = t;
      if(((t_77 != NULL) && (t_77 != u_77)))
        _fail(u_77);
      else
        t_77 = u_77;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(t_77));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_78 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          ATerm b_78 = NULL,c_78 = NULL;
          b_78 = t;
          y_77 :
          if(match_cons(b_78, sym_Input_1))
            {
              c_78 = ATgetArgument(b_78, 0);
              if(((a_78 != NULL) && (a_78 != c_78)))
                _fail(c_78);
              else
                a_78 = c_78;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, w_2);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          ATerm d_78 = NULL;
          t = term_a_26;
          {
            d_78 = t;
            if(((a_78 != NULL) && (a_78 != d_78)))
              _fail(d_78);
            else
              a_78 = d_78;
          }
        }
      }
  }
  t = x_25;
  {
    ATerm x_2 (ATerm t)
    {
      t = not_null(a_78);
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
    ATerm h_78 = NULL;
    h_78 = t;
    g_78 :
    if(!(match_string(h_78, "-v")))
      {
        if(!(match_string(h_78, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_d_26;
    t = set_config_0(t);
    t = term_e_26;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm k_78 = NULL;
    k_78 = t;
    i_78 :
    if(!(match_string(k_78, "-k")))
      {
        if(!(match_string(k_78, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm j_26;
    j_26 = t;
    {
      ATerm l_78 = NULL;
      ATerm m_78 = NULL;
      t = string_to_int_0(t);
      {
        m_78 = t;
        if(((l_78 != NULL) && (l_78 != m_78)))
          _fail(m_78);
        else
          l_78 = m_78;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(l_78));
        t = set_config_0(t);
      }
    }
    t = j_26;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_78 = NULL;
  p_78 = t;
  t = SSL_string_to_int(not_null(p_78));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm h_79 = NULL;
        h_79 = t;
        s_78 :
        if(!(match_string(h_79, "-S")))
          {
            if(!(match_string(h_79, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_z_26;
        t = set_config_0(t);
        t = term_a_27;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_b_27;
        return(t);
      }
      t = Option_3(t, e_3, f_3, g_3);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm i_79 = NULL;
              i_79 = t;
              t_78 :
              if(!(match_string(i_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm o_79 = NULL;
              ATerm e_27;
              e_27 = t;
              {
                ATerm m_79 = NULL;
                ATerm n_79 = NULL;
                t = string_to_int_0(t);
                {
                  n_79 = t;
                  if(((m_79 != NULL) && (m_79 != n_79)))
                    _fail(n_79);
                  else
                    m_79 = n_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_24, not_null(m_79));
                  t = set_config_0(t);
                }
              }
              t = e_27;
              {
                ATerm p_79 = NULL;
                p_79 = t;
                if(((o_79 != NULL) && (o_79 != p_79)))
                  _fail(p_79);
                else
                  o_79 = p_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_79));
              }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_f_27;
              return(t);
            }
            t = ArgOption_3(t, h_3, i_3, k_3);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm q_79 = NULL;
                q_79 = t;
                g_79 :
                if(!(match_string(q_79, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_h_27;
                t = set_config_0(t);
                t = term_i_27;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_j_27;
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
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
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
    ATerm w_79 = NULL;
    w_79 = t;
    t_79 :
    if(!(match_string(w_79, "-o")))
      {
        if(!(match_string(w_79, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm z_79 = NULL;
    ATerm o_27;
    o_27 = t;
    {
      ATerm x_79 = NULL;
      ATerm y_79 = NULL;
      y_79 = t;
      if(((x_79 != NULL) && (x_79 != y_79)))
        _fail(y_79);
      else
        x_79 = y_79;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_27, not_null(x_79));
        t = set_config_0(t);
      }
    }
    t = o_27;
    {
      ATerm b_80 = NULL;
      b_80 = t;
      if(((z_79 != NULL) && (z_79 != b_80)))
        _fail(b_80);
      else
        z_79 = b_80;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_79));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_q_27;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm y_82 = NULL;
          y_82 = t;
          x_82 :
          if(!(match_string(y_82, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_u_27;
          t = set_config_0(t);
          t = term_v_27;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_w_27;
          return(t);
        }
        t = Option_3(t, r_3, s_3, t_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL;
  e_83 = t;
  c_83 :
  if(match_string(e_83, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(e_83) == AT_LIST) && !(ATisEmpty(e_83))))
        {
          f_83 = ATgetFirst((ATermList) e_83);
          g_83 = (ATerm) ATgetNext((ATermList) e_83);
          d_83 :
          if(((ATgetType(g_83) == AT_LIST) && !(ATisEmpty(g_83))))
            {
              h_83 = ATgetFirst((ATermList) g_83);
              i_83 = (ATerm) ATgetNext((ATermList) g_83);
              {
                ATerm m_83 = NULL;
                ATerm i_29;
                i_29 = t;
                {
                  t = not_null(f_83);
                  t = l_0(t);
                }
                t = i_29;
                {
                  ATerm n_83 = NULL;
                  t = not_null(h_83);
                  {
                    t = n_0(t);
                    {
                      n_83 = t;
                      if(((m_83 != NULL) && (m_83 != n_83)))
                        _fail(n_83);
                      else
                        m_83 = n_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_83)), not_null(m_83));
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
    ATerm u_83 = NULL;
    u_83 = t;
    r_83 :
    if(!(match_string(u_83, "-i")))
      {
        if(!(match_string(u_83, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm x_83 = NULL;
    ATerm k_29;
    k_29 = t;
    {
      ATerm v_83 = NULL;
      ATerm w_83 = NULL;
      w_83 = t;
      if(((v_83 != NULL) && (v_83 != w_83)))
        _fail(w_83);
      else
        v_83 = w_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_29, not_null(v_83));
        t = set_config_0(t);
      }
    }
    t = k_29;
    {
      ATerm y_83 = NULL;
      y_83 = t;
      if(((x_83 != NULL) && (x_83 != y_83)))
        _fail(y_83);
      else
        x_83 = y_83;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_83));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_m_29;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
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
      t = term_d_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_84 = NULL;
  c_84 = t;
  t = SSL_TicksToSeconds(not_null(c_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
  h_84 = t;
  g_84 :
  if(match_cons(h_84, sym__2))
    {
      i_84 = ATgetArgument(h_84, 0);
      j_84 = ATgetArgument(h_84, 1);
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_84), not_null(j_84));
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            t = SSL_addr(not_null(i_84), not_null(j_84));
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
  ATerm d_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_110(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = d_30;
      {
        ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
        q_84 = t;
        p_84 :
        if(((ATgetType(q_84) == AT_LIST) && !(ATisEmpty(q_84))))
          {
            r_84 = ATgetFirst((ATermList) q_84);
            s_84 = (ATerm) ATgetNext((ATermList) q_84);
            {
              ATerm v_84 = NULL;
              ATerm w_84 = NULL;
              t = not_null(s_84);
              {
                t = foldr_2(t, x_110, y_110);
                {
                  w_84 = t;
                  if(((v_84 != NULL) && (v_84 != w_84)))
                    _fail(w_84);
                  else
                    v_84 = w_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_84), not_null(v_84));
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
  ATerm d_85 = NULL;
  ATerm h_85 = NULL;
  d_85 = t;
  {
    ATerm i_85 = NULL;
    ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
    t = not_null(d_85);
    {
      i_85 = t;
      {
        t = SSL_explode_term(not_null(i_85));
        {
          k_85 = t;
          c_85 :
          if(match_cons(k_85, sym__2))
            {
              l_85 = ATgetArgument(k_85, 0);
              m_85 = ATgetArgument(k_85, 1);
              if(((h_85 != NULL) && (h_85 != m_85)))
                _fail(m_85);
              else
                h_85 = m_85;
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
      t = term_w_26;
      return(t);
    }
    t = crush_2(t, a_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  r_85 :
  if(match_cons(s_85, sym__2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      {
        ATerm j_30;
        j_30 = t;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_85), not_null(u_85));
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              t = SSL_gtr(not_null(t_85), not_null(u_85));
            }
        }
        t = j_30;
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
  ATerm a_86 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
      b_86 = t;
      z_85 :
      if(match_cons(b_86, sym__2))
        {
          c_86 = ATgetArgument(b_86, 0);
          d_86 = ATgetArgument(b_86, 1);
          {
            if(((a_86 != NULL) && (a_86 != c_86)))
              _fail(c_86);
            else
              a_86 = c_86;
            if(((a_86 != NULL) && (a_86 != d_86)))
              _fail(d_86);
            else
              a_86 = d_86;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_30);
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
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30;
      y_30 = t;
      {
        ATerm g_86 = NULL;
        ATerm h_86 = NULL;
        t = term_r_24;
        {
          t = get_config_0(t);
          {
            h_86 = t;
            if(((g_86 != NULL) && (g_86 != h_86)))
              _fail(h_86);
            else
              g_86 = h_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_86), term_d_22);
          t = geq_0(t);
        }
      }
      t = y_30;
      t = l_123(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm l_86 = NULL,r_86 = NULL;
    ATerm z_30;
    z_30 = t;
    {
      ATerm m_86 = NULL;
      t = run_time_0(t);
      {
        m_86 = t;
        if(((l_86 != NULL) && (l_86 != m_86)))
          _fail(m_86);
        else
          l_86 = m_86;
      }
    }
    t = z_30;
    {
      ATerm s_86 = NULL;
      t = term_a_31;
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
        t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_31), not_null(l_86)), term_b_31), not_null(r_86)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_4);
  {
    t = term_w_26;
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
      ATerm d_87 = NULL,f_87 = NULL;
      ATerm d_31;
      d_31 = t;
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
      t = d_31;
      {
        ATerm g_87 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_87));
        {
          g_87 = t;
          if(((f_87 != NULL) && (f_87 != g_87)))
            _fail(g_87);
          else
            f_87 = g_87;
        }
        t = not_null(f_87);
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
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
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
  ATerm l_87 = NULL;
  l_87 = t;
  t = SSL_table_create(not_null(l_87));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_87 = NULL;
  p_87 = t;
  {
    ATerm i_31;
    i_31 = t;
    {
      t = term_j_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, not_null(p_87));
          t = table_put_0(t);
        }
      }
    }
    t = i_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_87 = NULL;
  t_87 = t;
  t = SSL_table_destroy(not_null(t_87));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_87 = NULL;
  x_87 = t;
  t = SSL_exit(not_null(x_87));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,g_88 = NULL;
  b_88 = t;
  a_88 :
  if(((ATgetType(b_88) == AT_LIST) && ATisEmpty(b_88)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_88) == AT_LIST) && !(ATisEmpty(b_88))))
        {
          c_88 = ATgetFirst((ATermList) b_88);
          g_88 = (ATerm) ATgetNext((ATermList) b_88);
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
  ATerm l_31;
  l_31 = t;
  {
    ATerm j_88 = NULL;
    ATerm m_88 = NULL;
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm k_88 = NULL;
          ATerm l_88 = NULL;
          l_88 = t;
          if(((k_88 != NULL) && (k_88 != l_88)))
            _fail(l_88);
          else
            k_88 = l_88;
          t = (ATerm) ATinsert(ATempty, not_null(k_88));
        }
      }
    {
      m_88 = t;
      if(((j_88 != NULL) && (j_88 != m_88)))
        _fail(m_88);
      else
        j_88 = m_88;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_24, not_null(j_88));
      t = printnl_0(t);
    }
  }
  t = l_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_125 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm p_88 (ATerm t)
  {
    ATerm o_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = o_31;
        t = Cons_2(t, j_106, p_88);
      }
    return(t);
  }
  t = p_88(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  a_89 = t;
  x_88 :
  if(((ATgetType(a_89) == AT_LIST) && !(ATisEmpty(a_89))))
    {
      y_88 = ATgetFirst((ATermList) a_89);
      z_88 = (ATerm) ATgetNext((ATermList) a_89);
      {
        ATerm d_89 = NULL;
        t = not_null(z_88);
        {
          ATerm x_31;
          x_31 = t;
          {
            ATerm e_89 = NULL,g_89 = NULL,k_89 = NULL;
            ATerm y_31;
            y_31 = t;
            {
              ATerm f_89 = NULL;
              t = k_0(t);
              {
                f_89 = t;
                if(((e_89 != NULL) && (e_89 != f_89)))
                  _fail(f_89);
                else
                  e_89 = f_89;
              }
            }
            t = y_31;
            {
              ATerm i_89 = NULL;
              t = not_null(y_88);
              {
                t = i_0(t);
                {
                  i_89 = t;
                  if(((g_89 != NULL) && (g_89 != i_89)))
                    _fail(i_89);
                  else
                    g_89 = i_89;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_89)), not_null(g_89));
                {
                  k_89 = t;
                  if(((d_89 != NULL) && (d_89 != k_89)))
                    _fail(k_89);
                  else
                    d_89 = k_89;
                }
              }
            }
          }
          t = x_31;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(d_89);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_89) == AT_LIST) && ATisEmpty(a_89)))
        {
          {
            t = term_c_26;
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
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym_Program_1))
    {
      w_89 = ATgetArgument(v_89, 0);
      {
        ATerm z_89 = NULL,b_90 = NULL;
        ATerm a_90 = NULL;
        t = SSLgetAnnotations(not_null(v_89));
        {
          a_90 = t;
          if(((z_89 != NULL) && (z_89 != a_90)))
            _fail(a_90);
          else
            z_89 = a_90;
        }
        {
          t = not_null(w_89);
          {
            ATerm e_90 = NULL;
            t = w_97(t);
            {
              b_90 = t;
              {
                ATerm f_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_90)), not_null(z_89));
                {
                  f_90 = t;
                  if(((e_90 != NULL) && (e_90 != f_90)))
                    _fail(f_90);
                  else
                    e_90 = f_90;
                }
                t = not_null(e_90);
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
  ATerm n_90 = NULL;
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_90 = NULL;
      t = term_a_31;
      {
        t = get_config_0(t);
        {
          q_90 = t;
          if(((n_90 != NULL) && (n_90 != q_90)))
            _fail(q_90);
          else
            n_90 = q_90;
        }
      }
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm r_90 = NULL;
            r_90 = t;
            if(((n_90 != NULL) && (n_90 != r_90)))
              _fail(r_90);
            else
              n_90 = r_90;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = fetch_1(t, f_4);
      }
    }
  {
    t = term_b_32;
    {
      t = echo_0(t);
      {
        t = term_e_32;
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
                ATerm u_90 = NULL;
                ATerm v_90 = NULL;
                v_90 = t;
                if(((u_90 != NULL) && (u_90 != v_90)))
                  _fail(v_90);
                else
                  u_90 = v_90;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_90)), term_f_32);
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
  ATerm g_32;
  g_32 = t;
  {
    ATerm a_91 = NULL;
    ATerm b_91 = NULL;
    b_91 = t;
    if(((a_91 != NULL) && (a_91 != b_91)))
      _fail(b_91);
    else
      a_91 = b_91;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, not_null(a_91)));
      t = printnl_0(t);
    }
  }
  t = g_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_120 (ATerm))
{
  ATerm h_32;
  h_32 = t;
  {
    t = q_120(t);
    t = debug_0(t);
  }
  t = h_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_97 (ATerm))
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  h_91 :
  if(match_cons(i_91, sym_Undefined_1))
    {
      j_91 = ATgetArgument(i_91, 0);
      {
        ATerm m_91 = NULL,o_91 = NULL;
        ATerm n_91 = NULL;
        t = SSLgetAnnotations(not_null(i_91));
        {
          n_91 = t;
          if(((m_91 != NULL) && (m_91 != n_91)))
            _fail(n_91);
          else
            m_91 = n_91;
        }
        {
          t = not_null(j_91);
          {
            ATerm q_91 = NULL;
            t = x_97(t);
            {
              o_91 = t;
              {
                ATerm r_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_91)), not_null(m_91));
                {
                  r_91 = t;
                  if(((q_91 != NULL) && (q_91 != r_91)))
                    _fail(r_91);
                  else
                    q_91 = r_91;
                }
                t = not_null(q_91);
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
  ATerm w_91 (ATerm t)
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_106, _id);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = Cons_2(t, _id, w_91);
      }
    return(t);
  }
  t = w_91(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_124 (ATerm))
{
  t = fetch_1(t, o_124);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_92 = NULL;
  b_92 = t;
  a_92 :
  if(match_cons(b_92, sym_Help_0))
    {
      ATerm d_92 = NULL,f_92 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm e_92 = NULL;
        t = SSLgetAnnotations(not_null(b_92));
        {
          e_92 = t;
          if(((d_92 != NULL) && (d_92 != e_92)))
            _fail(e_92);
          else
            d_92 = e_92;
        }
      }
      t = m_32;
      {
        ATerm g_92 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_92));
        {
          g_92 = t;
          if(((f_92 != NULL) && (f_92 != g_92)))
            _fail(g_92);
          else
            f_92 = g_92;
        }
        t = not_null(f_92);
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
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_103(t);
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  l_92 :
  if(match_cons(m_92, sym__2))
    {
      n_92 = ATgetArgument(m_92, 0);
      o_92 = ATgetArgument(m_92, 1);
      t = SSL_table_get(not_null(n_92), not_null(o_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  v_92 = t;
  u_92 :
  if(match_cons(v_92, sym__3))
    {
      w_92 = ATgetArgument(v_92, 0);
      x_92 = ATgetArgument(v_92, 1);
      y_92 = ATgetArgument(v_92, 2);
      {
        ATerm p_32;
        p_32 = t;
        {
          ATerm c_93 = NULL;
          ATerm d_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_92), not_null(x_92));
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
                t = (ATerm) ATempty;
              }
            {
              d_93 = t;
              if(((c_93 != NULL) && (c_93 != d_93)))
                _fail(d_93);
              else
                c_93 = d_93;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_92), not_null(x_92), (ATerm) ATinsert(CheckATermList(not_null(c_93)), not_null(y_92)));
            t = table_put_0(t);
          }
        }
        t = p_32;
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
  ATerm h_93 = NULL;
  ATerm i_93 = NULL;
  t = term_c_26;
  {
    t = t_125(t);
    {
      i_93 = t;
      if(((h_93 != NULL) && (h_93 != i_93)))
        _fail(i_93);
      else
        h_93 = i_93;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, not_null(h_93));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_string(o_93, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_93) == AT_LIST) && !(ATisEmpty(o_93))))
        {
          p_93 = ATgetFirst((ATermList) o_93);
          q_93 = (ATerm) ATgetNext((ATermList) o_93);
          {
            ATerm t_93 = NULL;
            ATerm s_33;
            s_33 = t;
            {
              t = not_null(p_93);
              t = a_0(t);
            }
            t = s_33;
            {
              ATerm u_93 = NULL;
              t = term_c_26;
              {
                t = d_0(t);
                {
                  u_93 = t;
                  if(((t_93 != NULL) && (t_93 != u_93)))
                    _fail(u_93);
                  else
                    t_93 = u_93;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_93)), not_null(t_93));
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
    ATerm z_93 = NULL;
    z_93 = t;
    y_93 :
    if(!(match_string(z_93, "--help")))
      {
        if(!(match_string(z_93, "-h")))
          {
            if(!(match_string(z_93, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_u_33;
    {
      t = set_config_0(t);
      t = term_c_34;
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_d_34;
    return(t);
  }
  t = Option_3(t, j_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(((ATgetType(c_94) == AT_LIST) && !(ATisEmpty(c_94))))
    {
      d_94 = ATgetFirst((ATermList) c_94);
      e_94 = (ATerm) ATgetNext((ATermList) c_94);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_94)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_94)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
  o_94 = t;
  n_94 :
  if(((ATgetType(o_94) == AT_LIST) && !(ATisEmpty(o_94))))
    {
      p_94 = ATgetFirst((ATermList) o_94);
      q_94 = (ATerm) ATgetNext((ATermList) o_94);
      {
        ATerm u_94 = NULL,w_94 = NULL;
        ATerm v_94 = NULL;
        t = SSLgetAnnotations(not_null(o_94));
        {
          v_94 = t;
          if(((u_94 != NULL) && (u_94 != v_94)))
            _fail(v_94);
          else
            u_94 = v_94;
        }
        {
          t = not_null(p_94);
          {
            ATerm y_94 = NULL;
            t = n_86(t);
            {
              w_94 = t;
              {
                t = not_null(q_94);
                {
                  ATerm a_95 = NULL;
                  t = o_86(t);
                  {
                    y_94 = t;
                    {
                      ATerm b_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_94)), not_null(w_94)), not_null(u_94));
                      {
                        b_95 = t;
                        if(((a_95 != NULL) && (a_95 != b_95)))
                          _fail(b_95);
                        else
                          a_95 = b_95;
                      }
                      t = not_null(a_95);
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
  ATerm l_95 = NULL;
  l_95 = t;
  k_95 :
  if(((ATgetType(l_95) == AT_LIST) && ATisEmpty(l_95)))
    {
      {
        ATerm n_95 = NULL,p_95 = NULL;
        ATerm e_34;
        e_34 = t;
        {
          ATerm o_95 = NULL;
          t = SSLgetAnnotations(not_null(l_95));
          {
            o_95 = t;
            if(((n_95 != NULL) && (n_95 != o_95)))
              _fail(o_95);
            else
              n_95 = o_95;
          }
        }
        t = e_34;
        {
          ATerm q_95 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_95));
          {
            q_95 = t;
            if(((p_95 != NULL) && (p_95 != q_95)))
              _fail(q_95);
            else
              p_95 = q_95;
          }
          t = not_null(p_95);
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
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL;
  w_95 = t;
  v_95 :
  if(match_cons(w_95, sym__2))
    {
      x_95 = ATgetArgument(w_95, 0);
      y_95 = ATgetArgument(w_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_23, not_null(x_95), not_null(y_95));
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
  ATerm f_34;
  f_34 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_34;
        t = r_125(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
        }
      }
  }
  t = f_34;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm g_96 = NULL;
      ATerm j_34;
      j_34 = t;
      {
        ATerm e_96 = NULL;
        ATerm f_96 = NULL;
        f_96 = t;
        if(((e_96 != NULL) && (e_96 != f_96)))
          _fail(f_96);
        else
          e_96 = f_96;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, not_null(e_96));
          t = set_config_0(t);
        }
      }
      t = j_34;
      {
        ATerm h_96 = NULL;
        h_96 = t;
        if(((g_96 != NULL) && (g_96 != h_96)))
          _fail(h_96);
        else
          g_96 = h_96;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_96));
      }
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              {
                t = r_125(t);
                t = Cons_2(t, _id, o_4);
              }
            }
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
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
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
  ATerm o_34;
  o_34 = t;
  {
    ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
    q_96 = t;
    m_96 :
    if(match_cons(q_96, sym__3))
      {
        r_96 = ATgetArgument(q_96, 0);
        s_96 = ATgetArgument(q_96, 1);
        t_96 = ATgetArgument(q_96, 2);
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
            {
              if(((p_96 != NULL) && (p_96 != t_96)))
                _fail(t_96);
              else
                p_96 = t_96;
              t = SSL_table_put(not_null(n_96), not_null(o_96), not_null(p_96));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_125 (ATerm))
{
  ATerm w_96 = NULL;
  ATerm p_34;
  p_34 = t;
  {
    t = term_q_34;
    t = table_put_0(t);
  }
  t = p_34;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm r_34 = t;
      int s_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_125(t);
          LocalPopChoice(s_34);
        }
      else
        {
          t = r_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_4);
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_34;
          w_34 = t;
          {
            ATerm x_34 = t;
            int y_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_33;
                t = get_config_0(t);
                LocalPopChoice(y_34);
              }
            else
              {
                t = x_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = w_34;
          {
            t = system_usage_0(t);
            {
              t = term_w_26;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm a_35 = t;
            int b_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm x_96 = NULL;
                    x_96 = t;
                    if(((w_96 != NULL) && (w_96 != x_96)))
                      _fail(x_96);
                    else
                      w_96 = x_96;
                    return(t);
                  }
                  t = Undefined_1(t, u_4);
                  return(t);
                }
                t = fetch_1(t, t_4);
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_96)), term_c_35);
                    return(t);
                  }
                  t = say_1(t, v_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_35);
              }
            else
              {
                t = a_35;
                {
                }
              }
          }
        }
      {
        ATerm e_35;
        e_35 = t;
        {
          t = term_c_32;
          t = table_destroy_0(t);
        }
        t = e_35;
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
        ATerm i_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_121);
            LocalPopChoice(s_35);
          }
        else
          {
            t = i_35;
            {
              ATerm a_36 = t;
              int k_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_122(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_36);
                }
              else
                {
                  t = a_36;
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
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_122(t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
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
      ATerm n_36;
      n_36 = t;
      {
        ATerm a_97 = NULL;
        ATerm b_97 = NULL;
        t = term_a_31;
        {
          t = get_config_0(t);
          {
            b_97 = t;
            if(((a_97 != NULL) && (a_97 != b_97)))
              _fail(b_97);
            else
              a_97 = b_97;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_22, (ATerm) ATinsert(ATempty, not_null(a_97)));
          t = printnl_0(t);
        }
      }
      t = n_36;
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
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
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
  t = optimize2_comp_0(t);
  return(t);
}
