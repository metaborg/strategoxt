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
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_BuildDefault_1;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_CallNoArgs_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
Symbol sym_Anno_2;
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Script_1 = ATmakeSymbol("Script", 1, ATfalse);
  ATprotectSymbol(sym_Script_1);
  sym_Command_1 = ATmakeSymbol("Command", 1, ATfalse);
  ATprotectSymbol(sym_Command_1);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Star_0 = ATmakeSymbol("Star", 0, ATfalse);
  ATprotectSymbol(sym_Star_0);
  sym_StarStar_0 = ATmakeSymbol("StarStar", 0, ATfalse);
  ATprotectSymbol(sym_StarStar_0);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_z_34;
ATerm term_i_33;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_g_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_z_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_l_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_r_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_i_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_l_13;
ATerm term_s_11;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Op_2, term_w_13, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_13);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_h_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_p_20);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_p_20);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_p_20);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_p_20);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_p_20);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__3, term_h_30, term_i_30, (ATerm) ATempty);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm isect_1 (ATerm, ATerm d_117 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm o_96 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm j_117 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm));
ATerm crush_3 (ATerm, ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm));
ATerm free_vars_3 (ATerm, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_109 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
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
ATerm SubsVar_2 (ATerm, ATerm h_109 (ATerm), ATerm i_109 (ATerm));
ATerm alltd_1 (ATerm, ATerm b_111 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm s_108 (ATerm), ATerm t_108 (ATerm));
ATerm substitute_1 (ATerm, ATerm u_108 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_117 (ATerm), ATerm o_117 (ATerm));
ATerm diff_1 (ATerm, ATerm f_117 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_126 (ATerm), ATerm h_126 (ATerm));
ATerm for_3 (ATerm, ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm n_110 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm));
ATerm zip_1 (ATerm, ATerm a_114 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm w_94 (ATerm), ATerm x_94 (ATerm));
ATerm Prim_2 (ATerm, ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm Explode_2 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm Op_2 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_107 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm r_125 (ATerm));
ATerm downup_1 (ATerm, ATerm l_109 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm));
ATerm Strategies_1 (ATerm, ATerm l_93 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_93 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm n_107 (ATerm));
ATerm _2 (ATerm, ATerm y_91 (ATerm), ATerm z_91 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_115 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_132 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm c_131 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_134 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_130 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_112 (ATerm), ATerm w_112 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_119 (ATerm), ATerm x_119 (ATerm));
ATerm crush_2 (ATerm, ATerm u_117 (ATerm), ATerm v_117 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_132 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_135 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_137 (ATerm));
ATerm map_1 (ATerm, ATerm k_115 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_137 (ATerm));
ATerm Program_1 (ATerm, ATerm h_107 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_115 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_136 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_112 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_137 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_137 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_137 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm h_135 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_134 (ATerm), ATerm m_134 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_134 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm isect_1 (ATerm t, ATerm d_117 (ATerm))
{
  ATerm d_4 = NULL,e_4 = NULL,p_4 = NULL;
  d_4 = t;
  c_4 :
  if(match_cons(d_4, sym__2))
    {
      e_4 = ATgetArgument(d_4, 0);
      p_4 = ATgetArgument(d_4, 1);
      {
        t = not_null(e_4);
        {
          ATerm a_5 (ATerm t)
          {
            ATerm w_5 = t;
            int x_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
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
                      ATerm e_6;
                      e_6 = t;
                      {
                        ATerm c_0 (ATerm t)
                        {
                          t = not_null(p_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, d_117, c_0);
                      }
                      t = e_6;
                      t = Cons_2(t, _id, a_5);
                      ;
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = y_5;
                      {
                        ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
                        v_4 = t;
                        o_3 :
                        if(((ATgetType(v_4) == AT_LIST) && !(ATisEmpty(v_4))))
                          {
                            w_4 = ATgetFirst((ATermList) v_4);
                            x_4 = (ATerm) ATgetNext((ATermList) v_4);
                            {
                              t = not_null(x_4);
                              t = a_5(t);
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
          t = a_5(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm o_96 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym_DynamicRules_1))
    {
      i_5 = ATgetArgument(h_5, 0);
      {
        ATerm l_5 = NULL,n_5 = NULL;
        ATerm m_5 = NULL;
        t = SSLgetAnnotations(not_null(h_5));
        {
          m_5 = t;
          if(((l_5 != NULL) && (l_5 != m_5)))
            _fail(m_5);
          else
            l_5 = m_5;
        }
        {
          t = not_null(i_5);
          {
            ATerm p_5 = NULL;
            t = o_96(t);
            {
              n_5 = t;
              {
                ATerm q_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(n_5)), not_null(l_5));
                {
                  q_5 = t;
                  if(((p_5 != NULL) && (p_5 != q_5)))
                    _fail(q_5);
                  else
                    p_5 = q_5;
                }
                t = not_null(p_5);
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
ATerm Scope_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_Scope_2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      {
        ATerm h_6 = NULL,j_6 = NULL;
        ATerm i_6 = NULL;
        t = SSLgetAnnotations(not_null(b_6));
        {
          i_6 = t;
          if(((h_6 != NULL) && (h_6 != i_6)))
            _fail(i_6);
          else
            h_6 = i_6;
        }
        {
          t = not_null(c_6);
          {
            ATerm l_6 = NULL;
            t = r_97(t);
            {
              j_6 = t;
              {
                t = not_null(d_6);
                {
                  ATerm n_6 = NULL;
                  t = s_97(t);
                  {
                    l_6 = t;
                    {
                      ATerm o_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_6), not_null(l_6)), not_null(h_6));
                      {
                        o_6 = t;
                        if(((n_6 != NULL) && (n_6 != o_6)))
                          _fail(o_6);
                        else
                          n_6 = o_6;
                      }
                      t = not_null(n_6);
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
ATerm tboundin_3 (ATerm t, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm))
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_108, k_108);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = DynamicRules_1(t, k_108);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_DynamicRules_1))
    {
      x_6 = ATgetArgument(w_6, 0);
      {
        t = not_null(x_6);
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
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  c_7 :
  if(match_cons(h_7, sym_LRule_1))
    {
      i_7 = ATgetArgument(h_7, 0);
      d_7 :
      if(match_cons(i_7, sym_Rule_3))
        {
          e_7 = ATgetArgument(i_7, 0);
          f_7 = ATgetArgument(i_7, 1);
          g_7 = ATgetArgument(i_7, 2);
          {
            t = not_null(e_7);
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
      if(match_cons(h_7, sym_Scope_2))
        {
          i_7 = ATgetArgument(h_7, 0);
          j_7 = ATgetArgument(h_7, 1);
          t = not_null(i_7);
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
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Var_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(u_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_117 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym__2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        t = not_null(a_8);
        {
          ATerm f_8 (ATerm t)
          {
            ATerm k_6 = t;
            int m_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_8);
                ;
                LocalPopChoice(m_6);
              }
            else
              {
                t = k_6;
                {
                  ATerm p_6 = t;
                  int q_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(b_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_117, e_0);
                      t = f_8(t);
                      ;
                      LocalPopChoice(q_6);
                    }
                  else
                    {
                      t = p_6;
                      t = Cons_2(t, _id, f_8);
                    }
                }
              }
            return(t);
          }
          t = f_8(t);
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
ATerm foldr_3 (ATerm t, ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm))
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_119(t);
      ;
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      {
        ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
        k_8 = t;
        j_8 :
        if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
          {
            l_8 = ATgetFirst((ATermList) k_8);
            m_8 = (ATerm) ATgetNext((ATermList) k_8);
            {
              ATerm p_8 = NULL,r_8 = NULL;
              ATerm t_6;
              t_6 = t;
              {
                ATerm q_8 = NULL;
                t = not_null(l_8);
                {
                  t = a_120(t);
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                }
              }
              t = t_6;
              {
                ATerm s_8 = NULL;
                t = not_null(m_8);
                {
                  t = foldr_3(t, y_119, z_119, a_120);
                  {
                    s_8 = t;
                    if(((r_8 != NULL) && (r_8 != s_8)))
                      _fail(s_8);
                    else
                      r_8 = s_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), not_null(r_8));
                  t = z_119(t);
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
ATerm crush_3 (ATerm t, ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm y_117 (ATerm))
{
  ATerm a_9 = NULL;
  ATerm c_9 = NULL;
  a_9 = t;
  {
    ATerm d_9 = NULL;
    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
    t = not_null(a_9);
    {
      d_9 = t;
      {
        t = SSL_explode_term(not_null(d_9));
        {
          f_9 = t;
          z_8 :
          if(match_cons(f_9, sym__2))
            {
              g_9 = ATgetArgument(f_9, 0);
              h_9 = ATgetArgument(f_9, 1);
              if(((c_9 != NULL) && (c_9 != h_9)))
                _fail(h_9);
              else
                c_9 = h_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_9);
      t = foldr_3(t, w_117, x_117, y_117);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_9 (ATerm t)
  {
    ATerm u_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_124(t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = u_6;
        {
          ATerm z_6 = t;
          int a_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL;
              ATerm b_7;
              b_7 = t;
              {
                ATerm n_9 = NULL;
                t = b_124(t);
                {
                  n_9 = t;
                  if(((m_9 != NULL) && (m_9 != n_9)))
                    _fail(n_9);
                  else
                    m_9 = n_9;
                }
              }
              t = b_7;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm j_0 (ATerm t)
                  {
                    t = not_null(m_9);
                    return(t);
                  }
                  t = split_2(t, o_9, j_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm h_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_124(t, f_0, o_9, h_0);
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, l_0, union_0, _id);
                }
              }
              ;
              LocalPopChoice(a_7);
            }
          else
            {
              t = z_6;
              {
                ATerm o_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_0, union_0, o_9);
              }
            }
        }
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_Scope_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL,d_10 = NULL;
        ATerm c_10 = NULL;
        t = not_null(x_9);
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(b_10));
          {
            t = isect_0(t);
            {
              d_10 = t;
              {
                if(((a_10 != NULL) && (a_10 != d_10)))
                  _fail(d_10);
                else
                  a_10 = d_10;
                {
                  ATerm m_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm e_10 = NULL;
                      e_10 = t;
                      if(((w_9 != NULL) && (w_9 != e_10)))
                        _fail(e_10);
                      else
                        w_9 = e_10;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = m_7;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_10), not_null(x_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_109 (ATerm))
{
  t = j_109(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1(t, j_109);
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
                ATerm n_7 = t;
                int o_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_11(t);
                    ;
                    LocalPopChoice(o_7);
                  }
                else
                  {
                    t = n_7;
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
ATerm BuildPrim_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  m_11 = t;
  g_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      p_11 = ATgetArgument(m_11, 1);
      h_11 :
      if(match_cons(n_11, sym_Build_1))
        {
          o_11 = ATgetArgument(n_11, 0);
          i_11 :
          if(match_cons(p_11, sym_Where_1))
            {
              q_11 = ATgetArgument(p_11, 0);
              j_11 :
              if(match_cons(q_11, sym_Prim_2))
                {
                  k_11 = ATgetArgument(q_11, 0);
                  l_11 = ATgetArgument(q_11, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_11), not_null(l_11));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_11, sym_Prim_2))
                {
                  q_11 = ATgetArgument(p_11, 0);
                  r_11 = ATgetArgument(p_11, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_11), not_null(r_11));
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
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  h_12 = t;
  c_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      k_12 = ATgetArgument(h_12, 1);
      d_12 :
      if(match_cons(i_12, sym_Build_1))
        {
          j_12 = ATgetArgument(i_12, 0);
          e_12 :
          if(match_cons(k_12, sym_Where_1))
            {
              l_12 = ATgetArgument(k_12, 0);
              f_12 :
              if(match_cons(l_12, sym_Build_1))
                {
                  g_12 = ATgetArgument(l_12, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_12));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_12, sym_Build_1))
                {
                  l_12 = ATgetArgument(k_12, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_12));
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
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  b_13 = t;
  w_12 :
  if(match_cons(b_13, sym__2))
    {
      c_13 = ATgetArgument(b_13, 0);
      g_13 = ATgetArgument(b_13, 1);
      x_12 :
      if(match_cons(c_13, sym_Build_1))
        {
          d_13 = ATgetArgument(c_13, 0);
          y_12 :
          if(match_cons(d_13, sym_Op_2))
            {
              e_13 = ATgetArgument(d_13, 0);
              f_13 = ATgetArgument(d_13, 1);
              z_12 :
              if(match_cons(g_13, sym_Match_1))
                {
                  h_13 = ATgetArgument(g_13, 0);
                  a_13 :
                  if(match_cons(h_13, sym_Op_2))
                    {
                      i_13 = ATgetArgument(h_13, 0);
                      j_13 = ATgetArgument(h_13, 1);
                      {
                        ATerm m_13 = NULL,n_13 = NULL;
                        if(((e_13 != NULL) && (e_13 != i_13)))
                          _fail(i_13);
                        else
                          e_13 = i_13;
                        {
                          if(((m_13 != NULL) && (m_13 != j_13)))
                            _fail(j_13);
                          else
                            m_13 = j_13;
                          {
                            ATerm t_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(m_13));
                            {
                              ATerm v_0 (ATerm t)
                              {
                                ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
                                o_13 = t;
                                u_12 :
                                if(match_cons(o_13, sym__2))
                                  {
                                    p_13 = ATgetArgument(o_13, 0);
                                    q_13 = ATgetArgument(o_13, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_13)), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_13)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, v_0);
                              {
                                t_13 = t;
                                if(((n_13 != NULL) && (n_13 != t_13)))
                                  _fail(t_13);
                                else
                                  n_13 = t_13;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_13)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_13), not_null(f_13))));
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  d_14 = t;
  y_13 :
  if(match_cons(d_14, sym__2))
    {
      e_14 = ATgetArgument(d_14, 0);
      i_14 = ATgetArgument(d_14, 1);
      z_13 :
      if(match_cons(e_14, sym_Build_1))
        {
          f_14 = ATgetArgument(e_14, 0);
          a_14 :
          if(match_cons(f_14, sym_Op_2))
            {
              g_14 = ATgetArgument(f_14, 0);
              h_14 = ATgetArgument(f_14, 1);
              b_14 :
              if(match_cons(i_14, sym_Match_1))
                {
                  j_14 = ATgetArgument(i_14, 0);
                  c_14 :
                  if(match_cons(j_14, sym_Op_2))
                    {
                      k_14 = ATgetArgument(j_14, 0);
                      l_14 = ATgetArgument(j_14, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(k_14));
                        {
                          ATerm p_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = p_7;
                            }
                        }
                        t = term_q_7;
                      }
                    }
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
  ATerm r_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = r_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
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
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  ATerm m_15 (ATerm t)
  {
    ATerm j_15 = NULL;
    ATerm k_15 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(b_15));
    {
      t = BMF_0(t);
      {
        k_15 = t;
        if(((j_15 != NULL) && (j_15 != k_15)))
          _fail(k_15);
        else
          j_15 = k_15;
      }
    }
    t = not_null(j_15);
    return(t);
  }
  z_14 = t;
  v_14 :
  if(match_cons(z_14, sym_Seq_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      w_14 :
      if(match_cons(b_15, sym_Seq_2))
        {
          x_14 = ATgetArgument(b_15, 0);
          y_14 = ATgetArgument(b_15, 1);
          {
            ATerm e_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_15 = NULL;
                ATerm g_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(x_14));
                {
                  t = BMF_0(t);
                  {
                    g_15 = t;
                    if(((f_15 != NULL) && (f_15 != g_15)))
                      _fail(g_15);
                    else
                      f_15 = g_15;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_15), not_null(y_14));
                ;
                LocalPopChoice(g_8);
              }
            else
              {
                t = e_8;
                t = m_15(t);
              }
          }
        }
      else
        {
          t = m_15(t);
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  u_15 = t;
  q_15 :
  if(match_cons(u_15, sym_Seq_2))
    {
      v_15 = ATgetArgument(u_15, 0);
      x_15 = ATgetArgument(u_15, 1);
      r_15 :
      if(match_cons(v_15, sym_Build_1))
        {
          w_15 = ATgetArgument(v_15, 0);
          s_15 :
          if(match_cons(x_15, sym_Seq_2))
            {
              y_15 = ATgetArgument(x_15, 0);
              a_16 = ATgetArgument(x_15, 1);
              t_15 :
              if(match_cons(y_15, sym_Build_1))
                {
                  z_15 = ATgetArgument(y_15, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_15)), not_null(a_16));
                }
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
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  j_16 = t;
  h_16 :
  if(match_cons(j_16, sym_Scope_2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      i_16 :
      if(match_cons(l_16, sym_Scope_2))
        {
          m_16 = ATgetArgument(l_16, 0);
          n_16 = ATgetArgument(l_16, 1);
          {
            ATerm r_16 = NULL;
            ATerm s_16 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(m_16));
            {
              t = conc_0(t);
              {
                s_16 = t;
                if(((r_16 != NULL) && (r_16 != s_16)))
                  _fail(s_16);
                else
                  r_16 = s_16;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_16), not_null(n_16));
          }
        }
      else
        {
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
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_Var_1))
    {
      y_16 = ATgetArgument(x_16, 0);
      t = not_null(y_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  e_17 = t;
  c_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      d_17 :
      if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
        {
          h_17 = ATgetFirst((ATermList) g_17);
          i_17 = (ATerm) ATgetNext((ATermList) g_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(i_17));
        }
      else
        {
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
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  q_17 = t;
  n_17 :
  if(match_cons(q_17, sym__2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      o_17 :
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          t_17 = ATgetFirst((ATermList) s_17);
          w_17 = (ATerm) ATgetNext((ATermList) s_17);
          p_17 :
          if(match_cons(t_17, sym__2))
            {
              u_17 = ATgetArgument(t_17, 0);
              v_17 = ATgetArgument(t_17, 1);
              {
                ATerm y_17 = NULL;
                if(((r_17 != NULL) && (r_17 != u_17)))
                  _fail(u_17);
                else
                  r_17 = u_17;
                {
                  if(((y_17 != NULL) && (y_17 != v_17)))
                    _fail(v_17);
                  else
                    y_17 = v_17;
                  t = not_null(y_17);
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
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm h_109 (ATerm), ATerm i_109 (ATerm))
{
  ATerm e_18 = NULL;
  ATerm g_18 = NULL,h_18 = NULL;
  e_18 = t;
  {
    ATerm i_18 = NULL;
    t = not_null(e_18);
    {
      ATerm j_18 = NULL;
      t = h_109(t);
      {
        i_18 = t;
        {
          if(((g_18 != NULL) && (g_18 != i_18)))
            _fail(i_18);
          else
            g_18 = i_18;
          {
            t = i_109(t);
            {
              j_18 = t;
              if(((h_18 != NULL) && (h_18 != j_18)))
                _fail(j_18);
              else
                h_18 = j_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(h_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm b_111 (ATerm))
{
  ATerm n_18 (ATerm t)
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_111(t);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = _all(t, n_18);
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        ATerm x_18 = NULL;
        if(((x_18 != NULL) && (x_18 != u_18)))
          _fail(u_18);
        else
          x_18 = u_18;
      }
    }
  else
    {
      if(match_cons(s_18, sym__3))
        {
          t_18 = ATgetArgument(s_18, 0);
          u_18 = ATgetArgument(s_18, 1);
          v_18 = ATgetArgument(s_18, 2);
          {
            ATerm d_19 = NULL;
            ATerm e_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(u_18));
            {
              t = zip_1(t, _id);
              {
                e_19 = t;
                if(((d_19 != NULL) && (d_19 != e_19)))
                  _fail(e_19);
                else
                  d_19 = e_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(v_18));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm s_108 (ATerm), ATerm t_108 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  t = subs_args_0(t);
  {
    k_19 = t;
    j_19 :
    if(match_cons(k_19, sym__2))
      {
        l_19 = ATgetArgument(k_19, 0);
        m_19 = ATgetArgument(k_19, 1);
        {
          t = not_null(m_19);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = not_null(l_19);
                return(t);
              }
              t = SubsVar_2(t, s_108, x_0);
              t = t_108(t);
              return(t);
            }
            t = alltd_1(t, w_0);
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
ATerm substitute_1 (ATerm t, ATerm u_108 (ATerm))
{
  t = substitute_2(t, u_108, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      if(((t_19 != NULL) && (t_19 != u_19)))
        _fail(u_19);
      else
        t_19 = u_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_117 (ATerm), ATerm o_117 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  z_19 :
  if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
    {
      b_20 = ATgetFirst((ATermList) a_20);
      c_20 = (ATerm) ATgetNext((ATermList) a_20);
      {
        t = o_117(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm f_20 = NULL;
            f_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(f_20));
              t = n_117(t);
            }
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(c_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        t = not_null(m_20);
        {
          ATerm r_20 (ATerm t)
          {
            ATerm t_8 = t;
            int u_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(n_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_117, z_0);
                      t = r_20(t);
                      ;
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = v_8;
                      t = Cons_2(t, _id, r_20);
                    }
                }
              }
            return(t);
          }
          t = r_20(t);
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  t_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      u_20 :
      if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
        {
          y_20 = ATgetFirst((ATermList) x_20);
          z_20 = (ATerm) ATgetNext((ATermList) x_20);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_20)), not_null(y_20)), not_null(z_20));
        }
      else
        {
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
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  o_21 = t;
  m_21 :
  if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
    {
      p_21 = ATgetFirst((ATermList) o_21);
      s_21 = (ATerm) ATgetNext((ATermList) o_21);
      n_21 :
      if(match_cons(p_21, sym__2))
        {
          q_21 = ATgetArgument(p_21, 0);
          r_21 = ATgetArgument(p_21, 1);
          {
            ATerm w_21 = NULL,x_21 = NULL,d_22 = NULL,j_22 = NULL;
            ATerm x_8;
            x_8 = t;
            {
              ATerm y_21 = NULL;
              ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
              t = not_null(r_21);
              {
                y_21 = t;
                {
                  t = SSL_explode_term(not_null(y_21));
                  {
                    a_22 = t;
                    h_21 :
                    if(match_cons(a_22, sym__2))
                      {
                        b_22 = ATgetArgument(a_22, 0);
                        c_22 = ATgetArgument(a_22, 1);
                        {
                          if(((w_21 != NULL) && (w_21 != b_22)))
                            _fail(b_22);
                          else
                            w_21 = b_22;
                          if(((x_21 != NULL) && (x_21 != c_22)))
                            _fail(c_22);
                          else
                            x_21 = c_22;
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
            t = x_8;
            {
              ATerm y_8;
              y_8 = t;
              {
                ATerm e_22 = NULL;
                ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
                t = not_null(q_21);
                {
                  e_22 = t;
                  {
                    t = SSL_explode_term(not_null(e_22));
                    {
                      g_22 = t;
                      k_21 :
                      if(match_cons(g_22, sym__2))
                        {
                          h_22 = ATgetArgument(g_22, 0);
                          i_22 = ATgetArgument(g_22, 1);
                          {
                            if(((w_21 != NULL) && (w_21 != h_22)))
                              _fail(h_22);
                            else
                              w_21 = h_22;
                            if(((d_22 != NULL) && (d_22 != i_22)))
                              _fail(i_22);
                            else
                              d_22 = i_22;
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
              t = y_8;
              {
                ATerm k_22 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(x_21));
                {
                  t = zip_1(t, _id);
                  {
                    k_22 = t;
                    if(((j_22 != NULL) && (j_22 != k_22)))
                      _fail(k_22);
                    else
                      j_22 = k_22;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(s_21));
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
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  u_22 = t;
  s_22 :
  if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
    {
      v_22 = ATgetFirst((ATermList) u_22);
      y_22 = (ATerm) ATgetNext((ATermList) u_22);
      t_22 :
      if(match_cons(v_22, sym__2))
        {
          w_22 = ATgetArgument(v_22, 0);
          x_22 = ATgetArgument(v_22, 1);
          {
            ATerm a_23 = NULL;
            if(((w_22 != NULL) && (w_22 != x_22)))
              _fail(x_22);
            else
              w_22 = x_22;
            {
              if(((a_23 != NULL) && (a_23 != y_22)))
                _fail(y_22);
              else
                a_23 = y_22;
              t = not_null(a_23);
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
ATerm while_not_2 (ATerm t, ATerm g_126 (ATerm), ATerm h_126 (ATerm))
{
  ATerm c_23 (ATerm t)
  {
    ATerm b_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_126(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = b_9;
        {
          t = h_126(t);
          t = c_23(t);
        }
      }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm))
{
  t = j_126(t);
  t = while_not_2(t, k_126, l_126);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm e_23 = NULL;
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_23));
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, d_1);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, a_1, b_1, c_1);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm h_23 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110(t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = _one(t, h_23);
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm t_9;
        t_9 = t;
        {
          t = not_null(n_23);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm q_23 = NULL;
              q_23 = t;
              if(((m_23 != NULL) && (m_23 != q_23)))
                _fail(q_23);
              else
                m_23 = q_23;
              return(t);
            }
            t = oncetd_1(t, e_1);
          }
        }
        t = t_9;
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
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Var_1))
    {
      h_24 = ATgetArgument(g_24, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_24 = NULL,m_24 = NULL;
            ATerm l_24 = NULL;
            t = SSLgetAnnotations(not_null(g_24));
            {
              l_24 = t;
              if(((k_24 != NULL) && (k_24 != l_24)))
                _fail(l_24);
              else
                k_24 = l_24;
            }
            {
              t = not_null(h_24);
              {
                ATerm o_24 = NULL;
                t = p_0(t);
                {
                  m_24 = t;
                  {
                    ATerm p_24 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_24)), not_null(k_24));
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
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_24 = NULL,u_24 = NULL;
                  ATerm t_24 = NULL;
                  t = SSLgetAnnotations(not_null(g_24));
                  {
                    t_24 = t;
                    if(((s_24 != NULL) && (s_24 != t_24)))
                      _fail(t_24);
                    else
                      s_24 = t_24;
                  }
                  {
                    t = not_null(h_24);
                    {
                      ATerm w_24 = NULL;
                      t = p_0(t);
                      {
                        u_24 = t;
                        {
                          ATerm x_24 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), not_null(s_24));
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
                    }
                  }
                  ;
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm a_25 = NULL,c_25 = NULL;
                    ATerm b_25 = NULL;
                    t = SSLgetAnnotations(not_null(g_24));
                    {
                      b_25 = t;
                      if(((a_25 != NULL) && (a_25 != b_25)))
                        _fail(b_25);
                      else
                        a_25 = b_25;
                    }
                    {
                      t = not_null(h_24);
                      {
                        ATerm e_25 = NULL;
                        t = p_0(t);
                        {
                          c_25 = t;
                          {
                            ATerm f_25 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_25)), not_null(a_25));
                            {
                              f_25 = t;
                              if(((e_25 != NULL) && (e_25 != f_25)))
                                _fail(f_25);
                              else
                                e_25 = f_25;
                            }
                            t = not_null(e_25);
                          }
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
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  j_27 = t;
  i_26 :
  if(match_cons(j_27, sym_Seq_2))
    {
      k_27 = ATgetArgument(j_27, 0);
      m_27 = ATgetArgument(j_27, 1);
      j_26 :
      if(match_cons(k_27, sym_Assign_1))
        {
          l_27 = ATgetArgument(k_27, 0);
          k_26 :
          if(match_cons(l_27, sym_Var_1))
            {
              c_27 = ATgetArgument(l_27, 0);
              l_26 :
              if(match_cons(m_27, sym_Seq_2))
                {
                  n_27 = ATgetArgument(m_27, 0);
                  o_27 = ATgetArgument(m_27, 1);
                  m_26 :
                  if(match_cons(n_27, sym_Build_1))
                    {
                      f_27 = ATgetArgument(n_27, 0);
                      n_26 :
                      if(match_cons(f_27, sym_Var_1))
                        {
                          g_27 = ATgetArgument(f_27, 0);
                          {
                            ATerm u_27 = NULL;
                            if(((c_27 != NULL) && (c_27 != g_27)))
                              _fail(g_27);
                            else
                              c_27 = g_27;
                            {
                              if(((u_27 != NULL) && (u_27 != o_27)))
                                _fail(o_27);
                              else
                                u_27 = o_27;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_27))), not_null(u_27));
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
          if(match_cons(k_27, sym_Build_1))
            {
              l_27 = ATgetArgument(k_27, 0);
              o_26 :
              if(match_cons(m_27, sym_Scope_2))
                {
                  n_27 = ATgetArgument(m_27, 0);
                  o_27 = ATgetArgument(m_27, 1);
                  p_26 :
                  if(match_cons(o_27, sym_Seq_2))
                    {
                      p_27 = ATgetArgument(o_27, 0);
                      s_27 = ATgetArgument(o_27, 1);
                      q_26 :
                      if(match_cons(p_27, sym_Assign_1))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          r_26 :
                          if(match_cons(q_27, sym_Var_1))
                            {
                              r_27 = ATgetArgument(q_27, 0);
                              {
                                ATerm h_10 = t;
                                int i_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_28 = NULL,z_28 = NULL;
                                    ATerm j_10;
                                    j_10 = t;
                                    {
                                      ATerm y_28 = NULL;
                                      t = not_null(l_27);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(n_27));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), (ATerm) ATinsert(ATempty, not_null(r_27)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  y_28 = t;
                                                  if(((x_28 != NULL) && (x_28 != y_28)))
                                                    _fail(y_28);
                                                  else
                                                    x_28 = y_28;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = j_10;
                                    {
                                      ATerm a_29 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_27)), (ATerm)ATinsert(ATempty, not_null(l_27)), not_null(s_27));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          a_29 = t;
                                          if(((z_28 != NULL) && (z_28 != a_29)))
                                            _fail(a_29);
                                          else
                                            z_28 = a_29;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_28), not_null(z_28)));
                                    }
                                    ;
                                    LocalPopChoice(i_10);
                                  }
                                else
                                  {
                                    t = h_10;
                                    {
                                      ATerm f_29 = NULL,h_29 = NULL;
                                      ATerm k_10;
                                      k_10 = t;
                                      {
                                        ATerm g_29 = NULL;
                                        t = not_null(l_27);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(n_27));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), (ATerm) ATinsert(ATempty, not_null(r_27)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    g_29 = t;
                                                    if(((f_29 != NULL) && (f_29 != g_29)))
                                                      _fail(g_29);
                                                    else
                                                      f_29 = g_29;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = k_10;
                                      {
                                        ATerm i_29 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_27)), (ATerm)ATinsert(ATempty, not_null(l_27)), not_null(s_27));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            i_29 = t;
                                            if(((h_29 != NULL) && (h_29 != i_29)))
                                              _fail(i_29);
                                            else
                                              h_29 = i_29;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_29), not_null(h_29)));
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
      if(match_cons(j_27, sym_Scope_2))
        {
          k_27 = ATgetArgument(j_27, 0);
          m_27 = ATgetArgument(j_27, 1);
          s_26 :
          if(match_cons(m_27, sym_Seq_2))
            {
              n_27 = ATgetArgument(m_27, 0);
              o_27 = ATgetArgument(m_27, 1);
              t_26 :
              if(match_cons(n_27, sym_Assign_1))
                {
                  f_27 = ATgetArgument(n_27, 0);
                  u_26 :
                  if(match_cons(f_27, sym_Var_1))
                    {
                      g_27 = ATgetArgument(f_27, 0);
                      v_26 :
                      if(match_cons(o_27, sym_Seq_2))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          s_27 = ATgetArgument(o_27, 1);
                          w_26 :
                          if(match_cons(p_27, sym_Assign_2))
                            {
                              q_27 = ATgetArgument(p_27, 0);
                              d_27 = ATgetArgument(p_27, 1);
                              x_26 :
                              if(match_cons(q_27, sym_Var_1))
                                {
                                  r_27 = ATgetArgument(q_27, 0);
                                  y_26 :
                                  if(match_cons(d_27, sym_Var_1))
                                    {
                                      e_27 = ATgetArgument(d_27, 0);
                                      {
                                        ATerm y_27 = NULL,z_27 = NULL,b_28 = NULL;
                                        if(((g_27 != NULL) && (g_27 != e_27)))
                                          _fail(e_27);
                                        else
                                          g_27 = e_27;
                                        {
                                          if(((y_27 != NULL) && (y_27 != s_27)))
                                            _fail(s_27);
                                          else
                                            y_27 = s_27;
                                          {
                                            ATerm w_10;
                                            w_10 = t;
                                            {
                                              ATerm a_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(k_27));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(k_27));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), (ATerm) ATinsert(ATempty, not_null(r_27)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          a_28 = t;
                                                          if(((z_27 != NULL) && (z_27 != a_28)))
                                                            _fail(a_28);
                                                          else
                                                            z_27 = a_28;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = w_10;
                                            {
                                              ATerm c_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27))), not_null(y_27));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  c_28 = t;
                                                  if(((b_28 != NULL) && (b_28 != c_28)))
                                                    _fail(c_28);
                                                  else
                                                    b_28 = c_28;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27))), not_null(b_28)));
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
                              if(match_cons(p_27, sym_Assign_1))
                                {
                                  q_27 = ATgetArgument(p_27, 0);
                                  z_26 :
                                  if(match_cons(q_27, sym_Var_1))
                                    {
                                      r_27 = ATgetArgument(q_27, 0);
                                      {
                                        ATerm h_28 = NULL,j_28 = NULL;
                                        ATerm x_10;
                                        x_10 = t;
                                        {
                                          ATerm i_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(k_27));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(k_27));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), (ATerm) ATinsert(ATempty, not_null(r_27)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      i_28 = t;
                                                      if(((h_28 != NULL) && (h_28 != i_28)))
                                                        _fail(i_28);
                                                      else
                                                        h_28 = i_28;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = x_10;
                                        {
                                          ATerm k_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(r_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27))), not_null(s_27));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              k_28 = t;
                                              if(((j_28 != NULL) && (j_28 != k_28)))
                                                _fail(k_28);
                                              else
                                                j_28 = k_28;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27))), not_null(j_28)));
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
                  if(match_cons(n_27, sym_Assign_2))
                    {
                      f_27 = ATgetArgument(n_27, 0);
                      h_27 = ATgetArgument(n_27, 1);
                      a_27 :
                      if(match_cons(f_27, sym_Var_1))
                        {
                          g_27 = ATgetArgument(f_27, 0);
                          b_27 :
                          if(match_cons(h_27, sym_Var_1))
                            {
                              i_27 = ATgetArgument(h_27, 0);
                              {
                                ATerm p_28 = NULL,r_28 = NULL;
                                ATerm y_10;
                                y_10 = t;
                                {
                                  ATerm q_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(k_27));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), (ATerm) ATinsert(ATempty, not_null(g_27)));
                                      {
                                        t = diff_0(t);
                                        {
                                          q_28 = t;
                                          if(((p_28 != NULL) && (p_28 != q_28)))
                                            _fail(q_28);
                                          else
                                            p_28 = q_28;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = y_10;
                                {
                                  ATerm s_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(g_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_27))), not_null(o_27));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      s_28 = t;
                                      if(((r_28 != NULL) && (r_28 != s_28)))
                                        _fail(s_28);
                                      else
                                        r_28 = s_28;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_28), not_null(r_28));
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
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  c_30 = t;
  a_30 :
  if(match_cons(c_30, sym_Seq_2))
    {
      d_30 = ATgetArgument(c_30, 0);
      e_30 = ATgetArgument(c_30, 1);
      b_30 :
      if(match_cons(e_30, sym_Let_2))
        {
          f_30 = ATgetArgument(e_30, 0);
          g_30 = ATgetArgument(e_30, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_30), not_null(g_30)));
        }
      else
        {
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
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym_Cong_2))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      {
        ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,h_32 = NULL,j_32 = NULL,l_32 = NULL;
        ATerm z_10;
        z_10 = t;
        {
          ATerm n_31 = NULL;
          t = not_null(e_31);
          {
            ATerm q_31 = NULL;
            t = map_1(t, new_0);
            {
              n_31 = t;
              {
                if(((k_31 != NULL) && (k_31 != n_31)))
                  _fail(n_31);
                else
                  k_31 = n_31;
                {
                  t = not_null(k_31);
                  {
                    ATerm r_31 = NULL;
                    ATerm f_1 (ATerm t)
                    {
                      ATerm o_31 = NULL;
                      ATerm p_31 = NULL;
                      p_31 = t;
                      if(((o_31 != NULL) && (o_31 != p_31)))
                        _fail(p_31);
                      else
                        o_31 = p_31;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_31));
                      return(t);
                    }
                    t = map_1(t, f_1);
                    {
                      q_31 = t;
                      {
                        if(((h_31 != NULL) && (h_31 != q_31)))
                          _fail(q_31);
                        else
                          h_31 = q_31;
                        {
                          ATerm s_31 = NULL;
                          t = new_0(t);
                          {
                            r_31 = t;
                            {
                              if(((i_31 != NULL) && (i_31 != r_31)))
                                _fail(r_31);
                              else
                                i_31 = r_31;
                              {
                                t = not_null(e_31);
                                {
                                  ATerm v_31 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    s_31 = t;
                                    {
                                      if(((l_31 != NULL) && (l_31 != s_31)))
                                        _fail(s_31);
                                      else
                                        l_31 = s_31;
                                      {
                                        t = not_null(l_31);
                                        {
                                          ATerm w_31 = NULL,g_32 = NULL;
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm t_31 = NULL;
                                            ATerm u_31 = NULL;
                                            u_31 = t;
                                            if(((t_31 != NULL) && (t_31 != u_31)))
                                              _fail(u_31);
                                            else
                                              t_31 = u_31;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31));
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            v_31 = t;
                                            {
                                              if(((j_31 != NULL) && (j_31 != v_31)))
                                                _fail(v_31);
                                              else
                                                j_31 = v_31;
                                              {
                                                ATerm x_31 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), not_null(l_31));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    x_31 = t;
                                                    if(((w_31 != NULL) && (w_31 != x_31)))
                                                      _fail(x_31);
                                                    else
                                                      w_31 = x_31;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(e_31));
                                                  {
                                                    ATerm h_1 (ATerm t)
                                                    {
                                                      ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
                                                      y_31 = t;
                                                      v_30 :
                                                      if(match_cons(y_31, sym__2))
                                                        {
                                                          z_31 = ATgetArgument(y_31, 0);
                                                          c_32 = ATgetArgument(y_31, 1);
                                                          w_30 :
                                                          if(match_cons(z_31, sym__2))
                                                            {
                                                              a_32 = ATgetArgument(z_31, 0);
                                                              b_32 = ATgetArgument(z_31, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_32))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_32)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, h_1);
                                                    {
                                                      g_32 = t;
                                                      if(((m_31 != NULL) && (m_31 != g_32)))
                                                        _fail(g_32);
                                                      else
                                                        m_31 = g_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_10;
        {
          ATerm a_11;
          a_11 = t;
          {
            ATerm i_32 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), not_null(l_31));
            {
              t = conc_0(t);
              {
                i_32 = t;
                if(((h_32 != NULL) && (h_32 != i_32)))
                  _fail(i_32);
                else
                  h_32 = i_32;
              }
            }
          }
          t = a_11;
          {
            ATerm b_11;
            b_11 = t;
            {
              ATerm k_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_31), not_null(h_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))));
              {
                t = Mapp2_0(t);
                {
                  k_32 = t;
                  if(((j_32 != NULL) && (j_32 != k_32)))
                    _fail(k_32);
                  else
                    j_32 = k_32;
                }
              }
            }
            t = b_11;
            {
              ATerm m_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_31), not_null(j_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))));
              {
                t = Bapp2_0(t);
                {
                  m_32 = t;
                  if(((l_32 != NULL) && (l_32 != m_32)))
                    _fail(m_32);
                  else
                    l_32 = m_32;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_32)), not_null(i_31)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_31)), not_null(l_32))));
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
  ATerm r_33 = NULL,s_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_Build_1))
    {
      s_33 = ATgetArgument(r_33, 0);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
            ATerm y_33 = NULL;
            ATerm c_34 = NULL;
            t = new_0(t);
            {
              y_33 = t;
              {
                if(((w_33 != NULL) && (w_33 != y_33)))
                  _fail(y_33);
                else
                  w_33 = y_33;
                {
                  t = not_null(s_33);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
                      z_33 = t;
                      g_33 :
                      if(match_cons(z_33, sym_Anno_2))
                        {
                          a_34 = ATgetArgument(z_33, 0);
                          b_34 = ATgetArgument(z_33, 1);
                          {
                            if(((u_33 != NULL) && (u_33 != a_34)))
                              _fail(a_34);
                            else
                              u_33 = a_34;
                            {
                              if(((v_33 != NULL) && (v_33 != b_34)))
                                _fail(b_34);
                              else
                                v_33 = b_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, i_1);
                    {
                      c_34 = t;
                      if(((x_33 != NULL) && (x_33 != c_34)))
                        _fail(c_34);
                      else
                        x_33 = c_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), not_null(u_33))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_33))));
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm t_11 = t;
              int u_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
                  ATerm h_34 = NULL;
                  ATerm k_34 = NULL;
                  t = new_0(t);
                  {
                    h_34 = t;
                    {
                      if(((f_34 != NULL) && (f_34 != h_34)))
                        _fail(h_34);
                      else
                        f_34 = h_34;
                      {
                        t = not_null(s_33);
                        {
                          ATerm j_1 (ATerm t)
                          {
                            ATerm i_34 = NULL,j_34 = NULL;
                            i_34 = t;
                            k_33 :
                            if(match_cons(i_34, sym_RootApp_1))
                              {
                                j_34 = ATgetArgument(i_34, 0);
                                {
                                  if(((e_34 != NULL) && (e_34 != j_34)))
                                    _fail(j_34);
                                  else
                                    e_34 = j_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34));
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
                            k_34 = t;
                            if(((g_34 != NULL) && (g_34 != k_34)))
                              _fail(k_34);
                            else
                              g_34 = k_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_34))));
                  ;
                  LocalPopChoice(u_11);
                }
              else
                {
                  t = t_11;
                  {
                    ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
                    ATerm q_34 = NULL;
                    ATerm u_34 = NULL;
                    t = new_0(t);
                    {
                      q_34 = t;
                      {
                        if(((o_34 != NULL) && (o_34 != q_34)))
                          _fail(q_34);
                        else
                          o_34 = q_34;
                        {
                          t = not_null(s_33);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
                              r_34 = t;
                              o_33 :
                              if(match_cons(r_34, sym_App_2))
                                {
                                  s_34 = ATgetArgument(r_34, 0);
                                  t_34 = ATgetArgument(r_34, 1);
                                  {
                                    if(((m_34 != NULL) && (m_34 != s_34)))
                                      _fail(s_34);
                                    else
                                      m_34 = s_34;
                                    {
                                      if(((n_34 != NULL) && (n_34 != t_34)))
                                        _fail(t_34);
                                      else
                                        n_34 = t_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34));
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
                              u_34 = t;
                              if(((p_34 != NULL) && (p_34 != u_34)))
                                _fail(u_34);
                              else
                                p_34 = u_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_34), not_null(n_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_34))));
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym__2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_35)), not_null(k_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  t_35 = t;
  q_35 :
  if(match_cons(t_35, sym__2))
    {
      u_35 = ATgetArgument(t_35, 0);
      x_35 = ATgetArgument(t_35, 1);
      r_35 :
      if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
        {
          v_35 = ATgetFirst((ATermList) u_35);
          w_35 = (ATerm) ATgetNext((ATermList) u_35);
          s_35 :
          if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
            {
              y_35 = ATgetFirst((ATermList) x_35);
              z_35 = (ATerm) ATgetNext((ATermList) x_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_35), not_null(y_35)), (ATerm) ATmakeAppl(sym__2, not_null(w_35), not_null(z_35)));
            }
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
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  g_36 :
  if(match_cons(j_36, sym__2))
    {
      k_36 = ATgetArgument(j_36, 0);
      l_36 = ATgetArgument(j_36, 1);
      h_36 :
      if(((ATgetType(k_36) == AT_LIST) && ATisEmpty(k_36)))
        {
          i_36 :
          if(((ATgetType(l_36) == AT_LIST) && ATisEmpty(l_36)))
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
ATerm genzip_4 (ATerm t, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_113(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          t = w_113(t);
          {
            t = _2(t, y_113, n_36);
            t = x_113(t);
          }
        }
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm a_114 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, a_114);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  m_37 = t;
  f_37 :
  if(match_cons(m_37, sym_Call_2))
    {
      n_37 = ATgetArgument(m_37, 0);
      p_37 = ATgetArgument(m_37, 1);
      g_37 :
      if(match_cons(n_37, sym_SVar_1))
        {
          o_37 = ATgetArgument(n_37, 0);
          h_37 :
          if(match_string(o_37, "Anno_Cong__"))
            {
              i_37 :
              if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
                {
                  q_37 = ATgetFirst((ATermList) p_37);
                  t_37 = (ATerm) ATgetNext((ATermList) p_37);
                  j_37 :
                  if(match_cons(q_37, sym_Cong_2))
                    {
                      r_37 = ATgetArgument(q_37, 0);
                      s_37 = ATgetArgument(q_37, 1);
                      k_37 :
                      if(((ATgetType(t_37) == AT_LIST) && !(ATisEmpty(t_37))))
                        {
                          u_37 = ATgetFirst((ATermList) t_37);
                          v_37 = (ATerm) ATgetNext((ATermList) t_37);
                          l_37 :
                          if(((ATgetType(v_37) == AT_LIST) && ATisEmpty(v_37)))
                            {
                              {
                                ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,d_39 = NULL,f_39 = NULL,h_39 = NULL;
                                ATerm x_11;
                                x_11 = t;
                                {
                                  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(s_37)), not_null(u_37));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      g_38 = t;
                                      b_37 :
                                      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
                                        {
                                          h_38 = ATgetFirst((ATermList) g_38);
                                          i_38 = (ATerm) ATgetNext((ATermList) g_38);
                                          {
                                            ATerm l_38 = NULL;
                                            if(((z_37 != NULL) && (z_37 != h_38)))
                                              _fail(h_38);
                                            else
                                              z_37 = h_38;
                                            {
                                              if(((d_38 != NULL) && (d_38 != i_38)))
                                                _fail(i_38);
                                              else
                                                d_38 = i_38;
                                              {
                                                ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
                                                ATerm l_1 (ATerm t)
                                                {
                                                  ATerm j_38 = NULL;
                                                  ATerm k_38 = NULL;
                                                  k_38 = t;
                                                  if(((j_38 != NULL) && (j_38 != k_38)))
                                                    _fail(k_38);
                                                  else
                                                    j_38 = k_38;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_38));
                                                  return(t);
                                                }
                                                t = map_1(t, l_1);
                                                {
                                                  l_38 = t;
                                                  {
                                                    if(((a_38 != NULL) && (a_38 != l_38)))
                                                      _fail(l_38);
                                                    else
                                                      a_38 = l_38;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(s_37)), not_null(u_37));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          m_38 = t;
                                                          a_37 :
                                                          if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
                                                            {
                                                              n_38 = ATgetFirst((ATermList) m_38);
                                                              o_38 = (ATerm) ATgetNext((ATermList) m_38);
                                                              {
                                                                ATerm r_38 = NULL;
                                                                if(((b_38 != NULL) && (b_38 != n_38)))
                                                                  _fail(n_38);
                                                                else
                                                                  b_38 = n_38;
                                                                {
                                                                  if(((e_38 != NULL) && (e_38 != o_38)))
                                                                    _fail(o_38);
                                                                  else
                                                                    e_38 = o_38;
                                                                  {
                                                                    ATerm s_38 = NULL,c_39 = NULL;
                                                                    ATerm m_1 (ATerm t)
                                                                    {
                                                                      ATerm p_38 = NULL;
                                                                      ATerm q_38 = NULL;
                                                                      q_38 = t;
                                                                      if(((p_38 != NULL) && (p_38 != q_38)))
                                                                        _fail(q_38);
                                                                      else
                                                                        p_38 = q_38;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_38));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, m_1);
                                                                    {
                                                                      r_38 = t;
                                                                      {
                                                                        if(((c_38 != NULL) && (c_38 != r_38)))
                                                                          _fail(r_38);
                                                                        else
                                                                          c_38 = r_38;
                                                                        {
                                                                          ATerm t_38 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(e_38));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              t_38 = t;
                                                                              if(((s_38 != NULL) && (s_38 != t_38)))
                                                                                _fail(t_38);
                                                                              else
                                                                                s_38 = t_38;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_38), (ATerm) ATinsert(CheckATermList(not_null(s_37)), not_null(u_37)));
                                                                            {
                                                                              ATerm n_1 (ATerm t)
                                                                              {
                                                                                ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
                                                                                u_38 = t;
                                                                                x_36 :
                                                                                if(match_cons(u_38, sym__2))
                                                                                  {
                                                                                    v_38 = ATgetArgument(u_38, 0);
                                                                                    y_38 = ATgetArgument(u_38, 1);
                                                                                    y_36 :
                                                                                    if(match_cons(v_38, sym__2))
                                                                                      {
                                                                                        w_38 = ATgetArgument(v_38, 0);
                                                                                        x_38 = ATgetArgument(v_38, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_38))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_38)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, n_1);
                                                                              {
                                                                                c_39 = t;
                                                                                if(((f_38 != NULL) && (f_38 != c_39)))
                                                                                  _fail(c_39);
                                                                                else
                                                                                  f_38 = c_39;
                                                                              }
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
                                t = x_11;
                                {
                                  ATerm y_11;
                                  y_11 = t;
                                  {
                                    ATerm e_39 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(e_38));
                                    {
                                      t = conc_0(t);
                                      {
                                        e_39 = t;
                                        if(((d_39 != NULL) && (d_39 != e_39)))
                                          _fail(e_39);
                                        else
                                          d_39 = e_39;
                                      }
                                    }
                                  }
                                  t = y_11;
                                  {
                                    ATerm z_11;
                                    z_11 = t;
                                    {
                                      ATerm g_39 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_37), not_null(a_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_37))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          g_39 = t;
                                          if(((f_39 != NULL) && (f_39 != g_39)))
                                            _fail(g_39);
                                          else
                                            f_39 = g_39;
                                        }
                                      }
                                    }
                                    t = z_11;
                                    {
                                      ATerm i_39 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_37), not_null(c_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_38))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          i_39 = t;
                                          if(((h_39 != NULL) && (h_39 != i_39)))
                                            _fail(i_39);
                                          else
                                            h_39 = i_39;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(d_39)), not_null(b_38)), not_null(z_37)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(f_38)), not_null(h_39))));
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
ATerm As_2 (ATerm t, ATerm w_94 (ATerm), ATerm x_94 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym_As_2))
    {
      d_40 = ATgetArgument(c_40, 0);
      e_40 = ATgetArgument(c_40, 1);
      {
        ATerm i_40 = NULL,k_40 = NULL;
        ATerm j_40 = NULL;
        t = SSLgetAnnotations(not_null(c_40));
        {
          j_40 = t;
          if(((i_40 != NULL) && (i_40 != j_40)))
            _fail(j_40);
          else
            i_40 = j_40;
        }
        {
          t = not_null(d_40);
          {
            ATerm m_40 = NULL;
            t = w_94(t);
            {
              k_40 = t;
              {
                t = not_null(e_40);
                {
                  ATerm o_40 = NULL;
                  t = x_94(t);
                  {
                    m_40 = t;
                    {
                      ATerm p_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(k_40), not_null(m_40)), not_null(i_40));
                      {
                        p_40 = t;
                        if(((o_40 != NULL) && (o_40 != p_40)))
                          _fail(p_40);
                        else
                          o_40 = p_40;
                      }
                      t = not_null(o_40);
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
ATerm Prim_2 (ATerm t, ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_Prim_2))
    {
      c_41 = ATgetArgument(b_41, 0);
      d_41 = ATgetArgument(b_41, 1);
      {
        ATerm h_41 = NULL,j_41 = NULL;
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
        {
          t = not_null(c_41);
          {
            ATerm l_41 = NULL;
            t = l_98(t);
            {
              j_41 = t;
              {
                t = not_null(d_41);
                {
                  ATerm n_41 = NULL;
                  t = m_98(t);
                  {
                    l_41 = t;
                    {
                      ATerm o_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_41), not_null(l_41)), not_null(h_41));
                      {
                        o_41 = t;
                        if(((n_41 != NULL) && (n_41 != o_41)))
                          _fail(o_41);
                        else
                          n_41 = o_41;
                      }
                      t = not_null(n_41);
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
ATerm Explode_2 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Explode_2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        ATerm g_42 = NULL,i_42 = NULL;
        ATerm h_42 = NULL;
        t = SSLgetAnnotations(not_null(a_42));
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
        {
          t = not_null(b_42);
          {
            ATerm k_42 = NULL;
            t = p_94(t);
            {
              i_42 = t;
              {
                t = not_null(c_42);
                {
                  ATerm m_42 = NULL;
                  t = q_94(t);
                  {
                    k_42 = t;
                    {
                      ATerm n_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_42), not_null(k_42)), not_null(g_42));
                      {
                        n_42 = t;
                        if(((m_42 != NULL) && (m_42 != n_42)))
                          _fail(n_42);
                        else
                          m_42 = n_42;
                      }
                      t = not_null(m_42);
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
ATerm Op_2 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm n_43 = NULL,o_43 = NULL,u_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Op_2))
    {
      o_43 = ATgetArgument(n_43, 0);
      u_43 = ATgetArgument(n_43, 1);
      {
        ATerm h_44 = NULL,j_44 = NULL;
        ATerm i_44 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
        }
        {
          t = not_null(o_43);
          {
            ATerm l_44 = NULL;
            t = n_94(t);
            {
              j_44 = t;
              {
                t = not_null(u_43);
                {
                  ATerm n_44 = NULL;
                  t = o_94(t);
                  {
                    l_44 = t;
                    {
                      ATerm o_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_44), not_null(l_44)), not_null(h_44));
                      {
                        o_44 = t;
                        if(((n_44 != NULL) && (n_44 != o_44)))
                          _fail(o_44);
                        else
                          n_44 = o_44;
                      }
                      t = not_null(n_44);
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
ATerm pat_td_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_107(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, q_107);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm o_12 = t;
              int p_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, q_107);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  ;
                  LocalPopChoice(p_12);
                }
              else
                {
                  t = o_12;
                  {
                    ATerm q_12 = t;
                    int r_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          t = pat_td_1(t, q_107);
                          return(t);
                        }
                        t = Explode_2(t, r_1, _id);
                        ;
                        LocalPopChoice(r_12);
                      }
                    else
                      {
                        t = q_12;
                        {
                          ATerm s_12 = t;
                          int t_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_1 (ATerm t)
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = pat_td_1(t, q_107);
                                  return(t);
                                }
                                t = fetch_1(t, t_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, s_1);
                              ;
                              LocalPopChoice(t_12);
                            }
                          else
                            {
                              t = s_12;
                              {
                                ATerm u_1 (ATerm t)
                                {
                                  t = pat_td_1(t, q_107);
                                  return(t);
                                }
                                t = As_2(t, _id, u_1);
                              }
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
  ATerm k_46 = NULL,n_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_Match_1))
    {
      n_46 = ATgetArgument(k_46, 0);
      {
        ATerm v_12 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,v_46 = NULL;
            ATerm w_46 = NULL;
            ATerm l_47 = NULL;
            t = new_0(t);
            {
              w_46 = t;
              {
                if(((s_46 != NULL) && (s_46 != w_46)))
                  _fail(w_46);
                else
                  s_46 = w_46;
                {
                  t = not_null(n_46);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm f_47 = NULL,j_47 = NULL,k_47 = NULL;
                      f_47 = t;
                      u_45 :
                      if(match_cons(f_47, sym_Anno_2))
                        {
                          j_47 = ATgetArgument(f_47, 0);
                          k_47 = ATgetArgument(f_47, 1);
                          {
                            if(((q_46 != NULL) && (q_46 != j_47)))
                              _fail(j_47);
                            else
                              q_46 = j_47;
                            {
                              if(((r_46 != NULL) && (r_46 != k_47)))
                                _fail(k_47);
                              else
                                r_46 = k_47;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_46)), not_null(q_46));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, v_1);
                    {
                      l_47 = t;
                      if(((v_46 != NULL) && (v_46 != l_47)))
                        _fail(l_47);
                      else
                        v_46 = l_47;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_46)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_46)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_46))))));
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = v_12;
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
                  ATerm q_47 = NULL;
                  ATerm t_47 = NULL;
                  t = new_0(t);
                  {
                    q_47 = t;
                    {
                      if(((o_47 != NULL) && (o_47 != q_47)))
                        _fail(q_47);
                      else
                        o_47 = q_47;
                      {
                        t = not_null(n_46);
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm r_47 = NULL,s_47 = NULL;
                            r_47 = t;
                            d_46 :
                            if(match_cons(r_47, sym_RootApp_1))
                              {
                                s_47 = ATgetArgument(r_47, 0);
                                {
                                  if(((n_47 != NULL) && (n_47 != s_47)))
                                    _fail(s_47);
                                  else
                                    n_47 = s_47;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_47));
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
                            t_47 = t;
                            if(((p_47 != NULL) && (p_47 != t_47)))
                              _fail(t_47);
                            else
                              p_47 = t_47;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_47))), not_null(n_47))));
                  ;
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                  {
                    ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
                    ATerm b_48 = NULL;
                    ATerm f_48 = NULL;
                    t = new_0(t);
                    {
                      b_48 = t;
                      {
                        if(((z_47 != NULL) && (z_47 != b_48)))
                          _fail(b_48);
                        else
                          z_47 = b_48;
                        {
                          t = not_null(n_46);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
                              c_48 = t;
                              h_46 :
                              if(match_cons(c_48, sym_App_2))
                                {
                                  d_48 = ATgetArgument(c_48, 0);
                                  e_48 = ATgetArgument(c_48, 1);
                                  {
                                    if(((y_47 != NULL) && (y_47 != d_48)))
                                      _fail(d_48);
                                    else
                                      y_47 = d_48;
                                    {
                                      if(((x_47 != NULL) && (x_47 != e_48)))
                                        _fail(e_48);
                                      else
                                        x_47 = e_48;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_47));
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
                              f_48 = t;
                              if(((a_48 != NULL) && (a_48 != f_48)))
                                _fail(f_48);
                              else
                                a_48 = f_48;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_48)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_47))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_47)), not_null(y_47)))));
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
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym_Cong_2))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      {
        ATerm d_49 = NULL;
        ATerm h_49 = NULL;
        t = not_null(a_49);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm e_49 = NULL,f_49 = NULL;
            f_49 = t;
            v_48 :
            if(match_cons(f_49, sym_Match_1))
              {
                e_49 = ATgetArgument(f_49, 0);
                t = not_null(e_49);
              }
            else
              {
                if(match_cons(f_49, sym_Id_0))
                  {
                    t = term_u_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, y_1);
          {
            h_49 = t;
            if(((d_49 != NULL) && (d_49 != h_49)))
              _fail(h_49);
            else
              d_49 = h_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_48), not_null(d_49)));
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  n_49 :
  if(match_cons(p_49, sym_Scope_2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      o_49 :
      if(((ATgetType(q_49) == AT_LIST) && ATisEmpty(q_49)))
        {
          t = not_null(r_49);
        }
      else
        {
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
  ATerm l_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  a_50 :
  if(match_cons(t_50, sym_Where_1))
    {
      u_50 = ATgetArgument(t_50, 0);
      b_50 :
      if(match_cons(u_50, sym_Seq_2))
        {
          s_50 = ATgetArgument(u_50, 0);
          o_50 = ATgetArgument(u_50, 1);
          g_50 :
          if(match_cons(s_50, sym_Where_1))
            {
              l_50 = ATgetArgument(s_50, 0);
              h_50 :
              if(match_cons(o_50, sym_Seq_2))
                {
                  p_50 = ATgetArgument(o_50, 0);
                  r_50 = ATgetArgument(o_50, 1);
                  i_50 :
                  if(match_cons(p_50, sym_Build_1))
                    {
                      q_50 = ATgetArgument(p_50, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_50)), not_null(r_50))));
                    }
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
          if(match_cons(u_50, sym_Where_1))
            {
              s_50 = ATgetArgument(u_50, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_50));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(t_50, sym_Test_1))
        {
          u_50 = ATgetArgument(t_50, 0);
          j_50 :
          if(match_cons(u_50, sym_Test_1))
            {
              s_50 = ATgetArgument(u_50, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_50));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(t_50, sym_Not_1))
            {
              u_50 = ATgetArgument(t_50, 0);
              k_50 :
              if(match_cons(u_50, sym_Not_1))
                {
                  s_50 = ATgetArgument(u_50, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_50));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(t_50, sym_LChoice_2))
                {
                  u_50 = ATgetArgument(t_50, 0);
                  v_50 = ATgetArgument(t_50, 1);
                  {
                    if(((u_50 != NULL) && (u_50 != v_50)))
                      _fail(v_50);
                    else
                      u_50 = v_50;
                    t = not_null(u_50);
                  }
                }
              else
                {
                  if(match_cons(t_50, sym_Choice_2))
                    {
                      u_50 = ATgetArgument(t_50, 0);
                      v_50 = ATgetArgument(t_50, 1);
                      {
                        if(((u_50 != NULL) && (u_50 != v_50)))
                          _fail(v_50);
                        else
                          u_50 = v_50;
                        t = not_null(u_50);
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
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,z_51 = NULL,a_52 = NULL;
  r_51 = t;
  n_51 :
  if(match_cons(r_51, sym_LChoice_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      a_52 = ATgetArgument(r_51, 1);
      o_51 :
      if(match_cons(s_51, sym_LChoice_2))
        {
          t_51 = ATgetArgument(s_51, 0);
          z_51 = ATgetArgument(s_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_51), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_51), not_null(a_52)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(r_51, sym_Seq_2))
        {
          s_51 = ATgetArgument(r_51, 0);
          a_52 = ATgetArgument(r_51, 1);
          p_51 :
          if(match_cons(s_51, sym_Seq_2))
            {
              t_51 = ATgetArgument(s_51, 0);
              z_51 = ATgetArgument(s_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_51), not_null(a_52)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(r_51, sym_Choice_2))
            {
              s_51 = ATgetArgument(r_51, 0);
              a_52 = ATgetArgument(r_51, 1);
              q_51 :
              if(match_cons(s_51, sym_Choice_2))
                {
                  t_51 = ATgetArgument(s_51, 0);
                  z_51 = ATgetArgument(s_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_51), (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_51), not_null(a_52)));
                }
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
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  o_53 :
  if(match_cons(v_53, sym_Lets_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_53), not_null(x_53));
    }
  else
    {
      if(match_cons(v_53, sym_LChoices_1))
        {
          w_53 = ATgetArgument(v_53, 0);
          p_53 :
          if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
            {
              s_53 = ATgetFirst((ATermList) w_53);
              t_53 = (ATerm) ATgetNext((ATermList) w_53);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_53), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_53)));
            }
          else
            {
              if(((ATgetType(w_53) == AT_LIST) && ATisEmpty(w_53)))
                {
                  t = term_q_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(v_53, sym_Choices_1))
            {
              w_53 = ATgetArgument(v_53, 0);
              q_53 :
              if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
                {
                  s_53 = ATgetFirst((ATermList) w_53);
                  t_53 = (ATerm) ATgetNext((ATermList) w_53);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_53), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_53)));
                }
              else
                {
                  if(((ATgetType(w_53) == AT_LIST) && ATisEmpty(w_53)))
                    {
                      t = term_q_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(v_53, sym_Seqs_1))
                {
                  w_53 = ATgetArgument(v_53, 0);
                  r_53 :
                  if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
                    {
                      s_53 = ATgetFirst((ATermList) w_53);
                      t_53 = (ATerm) ATgetNext((ATermList) w_53);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_53), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_53)));
                    }
                  else
                    {
                      if(((ATgetType(w_53) == AT_LIST) && ATisEmpty(w_53)))
                        {
                          t = term_v_13;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(v_53, sym_DefaultVarDec_1))
                    {
                      w_53 = ATgetArgument(v_53, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_53), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14));
                    }
                  else
                    {
                      if(match_cons(v_53, sym_InfixApp_3))
                        {
                          w_53 = ATgetArgument(v_53, 0);
                          x_53 = ATgetArgument(v_53, 1);
                          u_53 = ATgetArgument(v_53, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_53), (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_53)), not_null(w_53))));
                        }
                      else
                        {
                          if(match_cons(v_53, sym_BAM_3))
                            {
                              w_53 = ATgetArgument(v_53, 0);
                              x_53 = ATgetArgument(v_53, 1);
                              u_53 = ATgetArgument(v_53, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(u_53))), not_null(w_53)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_53))));
                            }
                          else
                            {
                              if(match_cons(v_53, sym_AM_2))
                                {
                                  w_53 = ATgetArgument(v_53, 0);
                                  x_53 = ATgetArgument(v_53, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_53), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_53)));
                                }
                              else
                                {
                                  if(match_cons(v_53, sym_MA_2))
                                    {
                                      w_53 = ATgetArgument(v_53, 0);
                                      x_53 = ATgetArgument(v_53, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_53)), not_null(x_53));
                                    }
                                  else
                                    {
                                      if(match_cons(v_53, sym_BA_2))
                                        {
                                          w_53 = ATgetArgument(v_53, 0);
                                          x_53 = ATgetArgument(v_53, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_53)), not_null(w_53));
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
  ATerm r_55 = NULL,s_55 = NULL;
  r_55 = t;
  p_55 :
  if(match_cons(r_55, sym_Where_1))
    {
      s_55 = ATgetArgument(r_55, 0);
      q_55 :
      if(match_cons(s_55, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  v_55 :
  if(match_cons(x_55, sym_LChoice_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      w_55 :
      if(match_cons(z_55, sym_Fail_0))
        {
          t = not_null(y_55);
        }
      else
        {
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_LChoice_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(match_cons(g_56, sym_Fail_0))
        {
          t = not_null(h_56);
        }
      else
        {
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
  ATerm o_56 = NULL,p_56 = NULL,s_56 = NULL;
  o_56 = t;
  m_56 :
  if(match_cons(o_56, sym_Choice_2))
    {
      p_56 = ATgetArgument(o_56, 0);
      s_56 = ATgetArgument(o_56, 1);
      n_56 :
      if(match_cons(s_56, sym_Fail_0))
        {
          t = not_null(p_56);
        }
      else
        {
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
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  w_56 :
  if(match_cons(y_56, sym_Choice_2))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      x_56 :
      if(match_cons(z_56, sym_Fail_0))
        {
          t = not_null(a_57);
        }
      else
        {
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
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  f_57 :
  if(match_cons(g_57, sym_Cong_2))
    {
      h_57 = ATgetArgument(g_57, 0);
      i_57 = ATgetArgument(g_57, 1);
      {
        t = not_null(i_57);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm l_57 = NULL;
            l_57 = t;
            e_57 :
            if(!(match_cons(l_57, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_1);
        }
        t = term_q_7;
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
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL;
  s_57 = t;
  o_57 :
  if(match_cons(s_57, sym_Path_2))
    {
      t_57 = ATgetArgument(s_57, 0);
      u_57 = ATgetArgument(s_57, 1);
      p_57 :
      if(match_cons(u_57, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm b_58 = NULL,c_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_One_1))
    {
      c_58 = ATgetArgument(b_58, 0);
      a_58 :
      if(match_cons(c_58, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  f_58 :
  if(match_cons(h_58, sym_Some_1))
    {
      i_58 = ATgetArgument(h_58, 0);
      g_58 :
      if(match_cons(i_58, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  o_58 :
  if(match_cons(q_58, sym_Rec_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      p_58 :
      if(match_cons(s_58, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  y_58 = t;
  w_58 :
  if(match_cons(y_58, sym_Scope_2))
    {
      z_58 = ATgetArgument(y_58, 0);
      a_59 = ATgetArgument(y_58, 1);
      x_58 :
      if(match_cons(a_59, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  e_59 :
  if(match_cons(g_59, sym_Seq_2))
    {
      h_59 = ATgetArgument(g_59, 0);
      i_59 = ATgetArgument(g_59, 1);
      f_59 :
      if(match_cons(h_59, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm o_59 = NULL,p_59 = NULL;
  o_59 = t;
  m_59 :
  if(match_cons(o_59, sym_Not_1))
    {
      p_59 = ATgetArgument(o_59, 0);
      n_59 :
      if(match_cons(p_59, sym_Fail_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm u_59 = NULL,c_60 = NULL;
  u_59 = t;
  s_59 :
  if(match_cons(u_59, sym_Test_1))
    {
      c_60 = ATgetArgument(u_59, 0);
      t_59 :
      if(match_cons(c_60, sym_Fail_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
                  {
                    ATerm u_14 = t;
                    int c_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(c_15);
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm d_15 = t;
                          int e_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(e_15);
                            }
                          else
                            {
                              t = d_15;
                              {
                                ATerm h_15 = t;
                                int i_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(i_15);
                                  }
                                else
                                  {
                                    t = h_15;
                                    {
                                      ATerm l_15 = t;
                                      int n_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(n_15);
                                        }
                                      else
                                        {
                                          t = l_15;
                                          {
                                            ATerm o_15 = t;
                                            int p_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(p_15);
                                              }
                                            else
                                              {
                                                t = o_15;
                                                {
                                                  ATerm b_16 = t;
                                                  int c_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(c_16);
                                                    }
                                                  else
                                                    {
                                                      t = b_16;
                                                      {
                                                        ATerm d_16 = t;
                                                        int e_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(e_16);
                                                          }
                                                        else
                                                          {
                                                            t = d_16;
                                                            {
                                                              ATerm f_16 = t;
                                                              int g_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_16);
                                                                }
                                                              else
                                                                {
                                                                  t = f_16;
                                                                  {
                                                                    ATerm o_16 = t;
                                                                    int p_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(p_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_16;
                                                                        {
                                                                          ATerm q_16 = t;
                                                                          int t_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(t_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_16;
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
  ATerm h_60 = NULL,i_60 = NULL;
  h_60 = t;
  f_60 :
  if(match_cons(h_60, sym_Match_1))
    {
      i_60 = ATgetArgument(h_60, 0);
      g_60 :
      if(match_cons(i_60, sym_Wld_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm n_60 = NULL,o_60 = NULL;
  n_60 = t;
  l_60 :
  if(match_cons(n_60, sym_Where_1))
    {
      o_60 = ATgetArgument(n_60, 0);
      m_60 :
      if(match_cons(o_60, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm t_60 = NULL,u_60 = NULL;
  t_60 = t;
  r_60 :
  if(match_cons(t_60, sym_All_1))
    {
      u_60 = ATgetArgument(t_60, 0);
      s_60 :
      if(match_cons(u_60, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  x_60 :
  if(match_cons(z_60, sym_Rec_2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      y_60 :
      if(match_cons(b_61, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  h_61 = t;
  f_61 :
  if(match_cons(h_61, sym_Scope_2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      g_61 :
      if(match_cons(j_61, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  p_61 = t;
  n_61 :
  if(match_cons(p_61, sym_LChoice_2))
    {
      q_61 = ATgetArgument(p_61, 0);
      r_61 = ATgetArgument(p_61, 1);
      o_61 :
      if(match_cons(q_61, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  x_61 = t;
  v_61 :
  if(match_cons(x_61, sym_Seq_2))
    {
      y_61 = ATgetArgument(x_61, 0);
      z_61 = ATgetArgument(x_61, 1);
      w_61 :
      if(match_cons(z_61, sym_Id_0))
        {
          t = not_null(y_61);
        }
      else
        {
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
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  e_62 :
  if(match_cons(g_62, sym_Seq_2))
    {
      h_62 = ATgetArgument(g_62, 0);
      i_62 = ATgetArgument(g_62, 1);
      f_62 :
      if(match_cons(h_62, sym_Id_0))
        {
          t = not_null(i_62);
        }
      else
        {
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
  ATerm o_62 = NULL,p_62 = NULL;
  o_62 = t;
  m_62 :
  if(match_cons(o_62, sym_Not_1))
    {
      p_62 = ATgetArgument(o_62, 0);
      n_62 :
      if(match_cons(p_62, sym_Id_0))
        {
          t = term_q_7;
        }
      else
        {
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
  ATerm u_62 = NULL,v_62 = NULL;
  u_62 = t;
  s_62 :
  if(match_cons(u_62, sym_Test_1))
    {
      v_62 = ATgetArgument(u_62, 0);
      t_62 :
      if(match_cons(v_62, sym_Id_0))
        {
          t = term_v_13;
        }
      else
        {
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm b_17 = t;
              int j_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(j_17);
                }
              else
                {
                  t = b_17;
                  {
                    ATerm k_17 = t;
                    int l_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(l_17);
                      }
                    else
                      {
                        t = k_17;
                        {
                          ATerm m_17 = t;
                          int x_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(x_17);
                            }
                          else
                            {
                              t = m_17;
                              {
                                ATerm z_17 = t;
                                int a_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(a_18);
                                  }
                                else
                                  {
                                    t = z_17;
                                    {
                                      ATerm b_18 = t;
                                      int c_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(c_18);
                                        }
                                      else
                                        {
                                          t = b_18;
                                          {
                                            ATerm d_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = d_18;
                                                {
                                                  ATerm k_18 = t;
                                                  int l_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(l_18);
                                                    }
                                                  else
                                                    {
                                                      t = k_18;
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
  ATerm m_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = m_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm w_18 = t;
              int y_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = w_18;
                  {
                    ATerm z_18 = t;
                    int a_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(a_19);
                      }
                    else
                      {
                        t = z_18;
                        {
                          ATerm b_19 = t;
                          int c_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(c_19);
                            }
                          else
                            {
                              t = b_19;
                              {
                                ATerm f_19 = t;
                                int g_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
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
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(i_19);
                                        }
                                      else
                                        {
                                          t = h_19;
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
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
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm x_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  ;
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = x_19;
                  {
                    ATerm d_20 = t;
                    int e_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        ;
                        LocalPopChoice(e_20);
                      }
                    else
                      {
                        t = d_20;
                        {
                          ATerm g_20 = t;
                          int h_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              ;
                              LocalPopChoice(h_20);
                            }
                          else
                            {
                              t = g_20;
                              t = BuildMatch_0(t);
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
ATerm repeat_1 (ATerm t, ATerm r_125 (ATerm))
{
  ATerm x_62 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = r_125(t);
      t = x_62(t);
      return(t);
    }
    t = try_1(t, a_2);
    return(t);
  }
  t = x_62(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm l_109 (ATerm))
{
  t = l_109(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = downup_1(t, l_109);
      return(t);
    }
    t = _all(t, b_2);
    t = l_109(t);
  }
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, d_2);
    return(t);
  }
  t = downup_1(t, c_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm))
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym_SDef_3))
    {
      g_63 = ATgetArgument(f_63, 0);
      h_63 = ATgetArgument(f_63, 1);
      i_63 = ATgetArgument(f_63, 2);
      {
        ATerm n_63 = NULL,p_63 = NULL;
        ATerm o_63 = NULL;
        t = SSLgetAnnotations(not_null(f_63));
        {
          o_63 = t;
          if(((n_63 != NULL) && (n_63 != o_63)))
            _fail(o_63);
          else
            n_63 = o_63;
        }
        {
          t = not_null(g_63);
          {
            ATerm r_63 = NULL;
            t = w_99(t);
            {
              p_63 = t;
              {
                t = not_null(h_63);
                {
                  ATerm t_63 = NULL;
                  t = x_99(t);
                  {
                    r_63 = t;
                    {
                      t = not_null(i_63);
                      {
                        ATerm v_63 = NULL;
                        t = y_99(t);
                        {
                          t_63 = t;
                          {
                            ATerm w_63 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(p_63), not_null(r_63), not_null(t_63)), not_null(n_63));
                            {
                              w_63 = t;
                              if(((v_63 != NULL) && (v_63 != w_63)))
                                _fail(w_63);
                              else
                                v_63 = w_63;
                            }
                            t = not_null(v_63);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Strategies_1))
    {
      j_64 = ATgetArgument(i_64, 0);
      {
        ATerm m_64 = NULL,o_64 = NULL;
        ATerm n_64 = NULL;
        t = SSLgetAnnotations(not_null(i_64));
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
        {
          t = not_null(j_64);
          {
            ATerm q_64 = NULL;
            t = l_93(t);
            {
              o_64 = t;
              {
                ATerm r_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_64)), not_null(m_64));
                {
                  r_64 = t;
                  if(((q_64 != NULL) && (q_64 != r_64)))
                    _fail(r_64);
                  else
                    q_64 = r_64;
                }
                t = not_null(q_64);
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
ATerm Specification_1 (ATerm t, ATerm q_93 (ATerm))
{
  ATerm b_65 = NULL,c_65 = NULL;
  b_65 = t;
  a_65 :
  if(match_cons(b_65, sym_Specification_1))
    {
      c_65 = ATgetArgument(b_65, 0);
      {
        ATerm f_65 = NULL,h_65 = NULL;
        ATerm g_65 = NULL;
        t = SSLgetAnnotations(not_null(b_65));
        {
          g_65 = t;
          if(((f_65 != NULL) && (f_65 != g_65)))
            _fail(g_65);
          else
            f_65 = g_65;
        }
        {
          t = not_null(c_65);
          {
            ATerm j_65 = NULL;
            t = q_93(t);
            {
              h_65 = t;
              {
                ATerm k_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_65)), not_null(f_65));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm n_107 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, n_107);
            return(t);
          }
          t = map_1(t, i_2);
          return(t);
        }
        t = Strategies_1(t, h_2);
        return(t);
      }
      t = Cons_2(t, g_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_2);
    return(t);
  }
  t = Specification_1(t, e_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm y_91 (ATerm), ATerm z_91 (ATerm))
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  u_65 :
  if(match_cons(v_65, sym__2))
    {
      w_65 = ATgetArgument(v_65, 0);
      x_65 = ATgetArgument(v_65, 1);
      {
        ATerm b_66 = NULL,d_66 = NULL;
        ATerm c_66 = NULL;
        t = SSLgetAnnotations(not_null(v_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
        {
          t = not_null(w_65);
          {
            ATerm f_66 = NULL;
            t = y_91(t);
            {
              d_66 = t;
              {
                t = not_null(x_65);
                {
                  ATerm h_66 = NULL;
                  t = z_91(t);
                  {
                    f_66 = t;
                    {
                      ATerm i_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_66), not_null(f_66)), not_null(b_66));
                      {
                        i_66 = t;
                        if(((h_66 != NULL) && (h_66 != i_66)))
                          _fail(i_66);
                        else
                          h_66 = i_66;
                      }
                      t = not_null(h_66);
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
  ATerm o_20;
  o_20 = t;
  {
    ATerm s_66 = NULL;
    ATerm t_66 = NULL;
    t = term_p_20;
    {
      t = whoami_0(t);
      {
        t_66 = t;
        if(((s_66 != NULL) && (s_66 != t_66)))
          _fail(t_66);
        else
          s_66 = t_66;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_21), not_null(s_66)), term_s_20));
      {
        t = printnl_0(t);
        {
          t = term_b_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  w_66 :
  if(match_cons(x_66, sym__2))
    {
      y_66 = ATgetArgument(x_66, 0);
      z_66 = ATgetArgument(x_66, 1);
      {
        ATerm c_21;
        c_21 = t;
        t = SSL_printnl(not_null(y_66), not_null(z_66));
        t = c_21;
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
  ATerm e_67 = NULL;
  e_67 = t;
  t = SSL_implode_string(not_null(e_67));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
        j_67 = t;
        i_67 :
        if(((ATgetType(j_67) == AT_LIST) && !(ATisEmpty(j_67))))
          {
            k_67 = ATgetFirst((ATermList) j_67);
            l_67 = (ATerm) ATgetNext((ATermList) j_67);
            {
              t = not_null(k_67);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(l_67);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_2);
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
  ATerm v_67 = NULL;
  ATerm x_67 = NULL;
  v_67 = t;
  {
    ATerm y_67 = NULL;
    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
    t = not_null(v_67);
    {
      y_67 = t;
      {
        t = SSL_explode_term(not_null(y_67));
        {
          a_68 = t;
          t_67 :
          if(match_cons(a_68, sym__2))
            {
              b_68 = ATgetArgument(a_68, 0);
              c_68 = ATgetArgument(a_68, 1);
              u_67 :
              if(match_string(b_68, ""))
                {
                  if(((x_67 != NULL) && (x_67 != c_68)))
                    _fail(c_68);
                  else
                    x_67 = c_68;
                }
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
      t = not_null(x_67);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_115 (ATerm))
{
  ATerm g_68 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_68);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          t = Nil_0(t);
          t = z_115(t);
        }
      }
    return(t);
  }
  t = g_68(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
  j_68 = t;
  i_68 :
  if(match_cons(j_68, sym__2))
    {
      k_68 = ATgetArgument(j_68, 0);
      l_68 = ATgetArgument(j_68, 1);
      {
        t = not_null(k_68);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(l_68);
            return(t);
          }
          t = at_end_1(t, k_2);
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
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  t = SSL_explode_string(not_null(q_68));
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
ATerm eval_config_0 (ATerm t)
{
  ATerm l_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = l_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_2);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
              z_68 = t;
              y_68 :
              if(match_cons(z_68, sym_Path_1))
                {
                  a_69 = ATgetArgument(z_68, 0);
                  t = not_null(a_69);
                }
              else
                {
                  if(match_cons(z_68, sym_Var_1))
                    {
                      a_69 = ATgetArgument(z_68, 0);
                      {
                        t = not_null(a_69);
                        {
                          ATerm z_21 = t;
                          int f_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_22);
                            }
                          else
                            {
                              t = z_21;
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_l_22;
                                  return(t);
                                }
                                t = debug_1(t, m_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_68, sym_Prefix_2))
                        {
                          a_69 = ATgetArgument(z_68, 0);
                          b_69 = ATgetArgument(z_68, 1);
                          {
                            ATerm g_69 = NULL,i_69 = NULL;
                            ATerm m_22;
                            m_22 = t;
                            {
                              ATerm h_69 = NULL;
                              t = not_null(a_69);
                              {
                                t = eval_config_0(t);
                                {
                                  h_69 = t;
                                  if(((g_69 != NULL) && (g_69 != h_69)))
                                    _fail(h_69);
                                  else
                                    g_69 = h_69;
                                }
                              }
                            }
                            t = m_22;
                            {
                              ATerm j_69 = NULL;
                              t = not_null(b_69);
                              {
                                t = eval_config_0(t);
                                {
                                  j_69 = t;
                                  if(((i_69 != NULL) && (i_69 != j_69)))
                                    _fail(j_69);
                                  else
                                    i_69 = j_69;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_69), not_null(i_69));
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
  ATerm r_69 = NULL;
  r_69 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_22, not_null(r_69));
    {
      t = table_get_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_22;
            o_22 = t;
            {
              ATerm t_69 = NULL;
              ATerm u_69 = NULL;
              u_69 = t;
              if(((t_69 != NULL) && (t_69 != u_69)))
                _fail(u_69);
              else
                t_69 = u_69;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_22, not_null(r_69), not_null(t_69));
                t = table_put_0(t);
              }
            }
            t = o_22;
          }
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_132 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_22;
    p_22 = t;
    {
      ATerm y_69 = NULL;
      ATerm z_69 = NULL;
      t = term_q_22;
      {
        t = get_config_0(t);
        {
          z_69 = t;
          if(((y_69 != NULL) && (y_69 != z_69)))
            _fail(z_69);
          else
            y_69 = z_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_69), term_r_22);
        t = geq_0(t);
      }
    }
    t = p_22;
    t = g_132(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  f_70 = t;
  d_70 :
  if(match_cons(f_70, sym__2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      e_70 :
      if(match_cons(h_70, sym_Stream_1))
        {
          i_70 = ATgetArgument(h_70, 0);
          {
            ATerm l_70 = NULL;
            t = SSL_fputc(not_null(g_70), not_null(i_70));
            {
              ATerm m_70 = NULL;
              m_70 = t;
              if(((l_70 != NULL) && (l_70 != m_70)))
                _fail(m_70);
              else
                l_70 = m_70;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_70));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  t_70 = t;
  r_70 :
  if(match_cons(t_70, sym__2))
    {
      u_70 = ATgetArgument(t_70, 0);
      w_70 = ATgetArgument(t_70, 1);
      s_70 :
      if(match_cons(u_70, sym_Stream_1))
        {
          v_70 = ATgetArgument(u_70, 0);
          {
            ATerm z_70 = NULL;
            t = SSL_write_term_to_stream_text(not_null(v_70), not_null(w_70));
            {
              ATerm a_71 = NULL;
              a_71 = t;
              if(((z_70 != NULL) && (z_70 != a_71)))
                _fail(a_71);
              else
                z_70 = a_71;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_70));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm e_71 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm l_71 = NULL;
      l_71 = t;
      if(((e_71 != NULL) && (e_71 != l_71)))
        _fail(l_71);
      else
        e_71 = l_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(e_71));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL;
  r_71 = t;
  p_71 :
  if(match_cons(r_71, sym__2))
    {
      s_71 = ATgetArgument(r_71, 0);
      u_71 = ATgetArgument(r_71, 1);
      q_71 :
      if(match_cons(s_71, sym_Stream_1))
        {
          t_71 = ATgetArgument(s_71, 0);
          {
            ATerm x_71 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(t_71), not_null(u_71));
            {
              ATerm y_71 = NULL;
              y_71 = t;
              if(((x_71 != NULL) && (x_71 != y_71)))
                _fail(y_71);
              else
                x_71 = y_71;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_71));
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
ATerm WriteToFile_1 (ATerm t, ATerm c_131 (ATerm))
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
  f_72 = t;
  e_72 :
  if(match_cons(f_72, sym__2))
    {
      g_72 = ATgetArgument(f_72, 0);
      h_72 = ATgetArgument(f_72, 1);
      {
        ATerm k_72 = NULL,m_72 = NULL;
        t = not_null(g_72);
        {
          ATerm l_72 = NULL;
          l_72 = t;
          if(((k_72 != NULL) && (k_72 != l_72)))
            _fail(l_72);
          else
            k_72 = l_72;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_72), term_b_23);
            {
              t = open_stream_0(t);
              {
                ATerm n_72 = NULL;
                n_72 = t;
                if(((m_72 != NULL) && (m_72 != n_72)))
                  _fail(n_72);
                else
                  m_72 = n_72;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_72), not_null(h_72));
                  {
                    t = c_131(t);
                    {
                      t = fclose_0(t);
                      t = not_null(h_72);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_72 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm w_72 = NULL,x_72 = NULL;
            w_72 = t;
            s_72 :
            if(match_cons(w_72, sym_Output_1))
              {
                x_72 = ATgetArgument(w_72, 0);
                if(((v_72 != NULL) && (v_72 != x_72)))
                  _fail(x_72);
                else
                  v_72 = x_72;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_2);
          ;
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm y_72 = NULL;
            t = term_i_23;
            {
              y_72 = t;
              if(((v_72 != NULL) && (v_72 != y_72)))
                _fail(y_72);
              else
                v_72 = y_72;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_2, _id);
  }
  t = d_23;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(v_72);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, s_2);
    {
      ATerm j_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm z_72 = NULL;
              z_72 = t;
              u_72 :
              if(!(match_cons(z_72, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(o_23);
        }
      else
        {
          t = j_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_134 (ATerm))
{
  ATerm f_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  ATerm p_23;
  p_23 = t;
  t = dtime_0(t);
  t = p_23;
  {
    t = e_134(t);
    {
      ATerm r_23;
      r_23 = t;
      {
        ATerm g_73 = NULL;
        t = dtime_0(t);
        {
          g_73 = t;
          if(((f_73 != NULL) && (f_73 != g_73)))
            _fail(g_73);
          else
            f_73 = g_73;
        }
      }
      t = r_23;
      {
        h_73 = t;
        e_73 :
        if(match_cons(h_73, sym__2))
          {
            i_73 = ATgetArgument(h_73, 0);
            j_73 = ATgetArgument(h_73, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_73)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_73))), not_null(j_73));
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
ATerm fclose_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL;
  ATerm y_73 (ATerm t)
  {
    t = SSL_fclose(not_null(s_73));
    return(t);
  }
  s_73 = t;
  q_73 :
  if(match_cons(s_73, sym_Stream_1))
    {
      r_73 = ATgetArgument(s_73, 0);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(r_73));
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = y_73(t);
          }
      }
    }
  else
    {
      t = y_73(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  b_74 = t;
  a_74 :
  if(match_cons(b_74, sym_Stream_1))
    {
      c_74 = ATgetArgument(b_74, 0);
      t = SSL_read_term_from_stream(not_null(c_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_130 (ATerm))
{
  ATerm u_23;
  u_23 = t;
  {
    ATerm h_74 = NULL,j_74 = NULL;
    ATerm v_23;
    v_23 = t;
    {
      ATerm i_74 = NULL;
      t = o_130(t);
      {
        i_74 = t;
        if(((h_74 != NULL) && (h_74 != i_74)))
          _fail(i_74);
        else
          h_74 = i_74;
      }
    }
    t = v_23;
    {
      ATerm k_74 = NULL;
      k_74 = t;
      if(((j_74 != NULL) && (j_74 != k_74)))
        _fail(k_74);
      else
        j_74 = k_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_74)), not_null(h_74)));
        t = printnl_0(t);
      }
    }
  }
  t = u_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
  z_74 = t;
  y_74 :
  if(match_cons(z_74, sym__2))
    {
      a_75 = ATgetArgument(z_74, 0);
      b_75 = ATgetArgument(z_74, 1);
      {
        ATerm e_75 = NULL;
        t = SSL_fopen(not_null(a_75), not_null(b_75));
        {
          ATerm f_75 = NULL;
          f_75 = t;
          if(((e_75 != NULL) && (e_75 != f_75)))
            _fail(f_75);
          else
            e_75 = f_75;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_75));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_75 = NULL;
  j_75 = t;
  t = SSL_is_string(not_null(j_75));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm n_75 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm o_75 = NULL;
    o_75 = t;
    if(((n_75 != NULL) && (n_75 != o_75)))
      _fail(o_75);
    else
      n_75 = o_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_75));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm r_75 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm s_75 = NULL;
    s_75 = t;
    if(((r_75 != NULL) && (r_75 != s_75)))
      _fail(s_75);
    else
      r_75 = s_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_75));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm v_75 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm y_75 = NULL;
    y_75 = t;
    if(((v_75 != NULL) && (v_75 != y_75)))
      _fail(y_75);
    else
      v_75 = y_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_75));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm e_76 = NULL;
  e_76 = t;
  d_76 :
  if(match_cons(e_76, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(e_76, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(e_76, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_76 = NULL;
  ATerm v_76 = NULL,w_76 = NULL;
  t_76 = t;
  {
    ATerm x_76 = NULL;
    ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
    t = not_null(t_76);
    {
      x_76 = t;
      {
        t = SSL_explode_term(not_null(x_76));
        {
          a_77 = t;
          q_76 :
          if(match_cons(a_77, sym__2))
            {
              b_77 = ATgetArgument(a_77, 0);
              c_77 = ATgetArgument(a_77, 1);
              r_76 :
              if(match_string(b_77, ""))
                {
                  s_76 :
                  if(((ATgetType(c_77) == AT_LIST) && !(ATisEmpty(c_77))))
                    {
                      d_77 = ATgetFirst((ATermList) c_77);
                      e_77 = (ATerm) ATgetNext((ATermList) c_77);
                      {
                        if(((w_76 != NULL) && (w_76 != d_77)))
                          _fail(d_77);
                        else
                          w_76 = d_77;
                        if(((v_76 != NULL) && (v_76 != e_77)))
                          _fail(e_77);
                        else
                          v_76 = e_77;
                      }
                    }
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
    t = not_null(w_76);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,u_77 = NULL;
  m_77 = t;
  l_77 :
  if(match_cons(m_77, sym__2))
    {
      n_77 = ATgetArgument(m_77, 0);
      u_77 = ATgetArgument(m_77, 1);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm y_23 = t;
              int z_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm v_77 = NULL,w_77 = NULL;
                    v_77 = t;
                    k_77 :
                    if(match_cons(v_77, sym_Path_1))
                      {
                        w_77 = ATgetArgument(v_77, 0);
                        t = not_null(w_77);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(z_23);
                }
              else
                {
                  t = y_23;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_78 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_78 = NULL;
      ATerm e_78 = NULL;
      e_78 = t;
      if(((d_78 != NULL) && (d_78 != e_78)))
        _fail(e_78);
      else
        d_78 = e_78;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_78), term_c_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_d_24;
          return(t);
        }
        t = debug_1(t, x_2);
        _fail(t);
      }
    }
  {
    ATerm e_24;
    e_24 = t;
    {
      ATerm g_78 = NULL;
      t = read_from_stream_0(t);
      {
        g_78 = t;
        if(((f_78 != NULL) && (f_78 != g_78)))
          _fail(g_78);
        else
          f_78 = g_78;
      }
    }
    t = e_24;
    {
      t = fclose_0(t);
      t = not_null(f_78);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_112 (ATerm), ATerm w_112 (ATerm))
{
  ATerm l_78 = NULL,n_78 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm m_78 = NULL;
    t = v_112(t);
    {
      m_78 = t;
      if(((l_78 != NULL) && (l_78 != m_78)))
        _fail(m_78);
      else
        l_78 = m_78;
    }
  }
  t = i_24;
  {
    ATerm o_78 = NULL;
    t = w_112(t);
    {
      o_78 = t;
      if(((n_78 != NULL) && (n_78 != o_78)))
        _fail(o_78);
      else
        n_78 = o_78;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_78), not_null(n_78));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_78 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm n_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 (ATerm t)
        {
          ATerm v_78 = NULL,w_78 = NULL;
          v_78 = t;
          s_78 :
          if(match_cons(v_78, sym_Input_1))
            {
              w_78 = ATgetArgument(v_78, 0);
              if(((u_78 != NULL) && (u_78 != w_78)))
                _fail(w_78);
              else
                u_78 = w_78;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_2);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = n_24;
        {
          ATerm x_78 = NULL;
          t = term_r_24;
          {
            x_78 = t;
            if(((u_78 != NULL) && (u_78 != x_78)))
              _fail(x_78);
            else
              u_78 = x_78;
          }
        }
      }
  }
  t = j_24;
  {
    ATerm z_2 (ATerm t)
    {
      t = not_null(u_78);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm c_79 = NULL;
    c_79 = t;
    a_79 :
    if(!(match_string(c_79, "-k")))
      {
        if(!(match_string(c_79, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm v_24;
    v_24 = t;
    {
      ATerm d_79 = NULL;
      ATerm e_79 = NULL;
      t = string_to_int_0(t);
      {
        e_79 = t;
        if(((d_79 != NULL) && (d_79 != e_79)))
          _fail(e_79);
        else
          d_79 = e_79;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(d_79));
        t = set_config_0(t);
      }
    }
    t = v_24;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_z_24;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_79 = NULL;
  h_79 = t;
  t = SSL_string_to_int(not_null(h_79));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm p_79 = NULL;
        p_79 = t;
        k_79 :
        if(!(match_string(p_79, "-S")))
          {
            if(!(match_string(p_79, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_i_25;
        t = set_config_0(t);
        t = term_j_25;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_k_25;
        return(t);
      }
      t = Option_3(t, d_3, e_3, f_3);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = d_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm q_79 = NULL;
              q_79 = t;
              l_79 :
              if(!(match_string(q_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm t_79 = NULL;
              ATerm n_25;
              n_25 = t;
              {
                ATerm r_79 = NULL;
                ATerm s_79 = NULL;
                t = string_to_int_0(t);
                {
                  s_79 = t;
                  if(((r_79 != NULL) && (r_79 != s_79)))
                    _fail(s_79);
                  else
                    r_79 = s_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(r_79));
                  t = set_config_0(t);
                }
              }
              t = n_25;
              {
                ATerm u_79 = NULL;
                u_79 = t;
                if(((t_79 != NULL) && (t_79 != u_79)))
                  _fail(u_79);
                else
                  t_79 = u_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_79));
              }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_o_25;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, i_3);
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm v_79 = NULL;
                v_79 = t;
                o_79 :
                if(!(match_string(v_79, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_q_25;
                t = set_config_0(t);
                t = term_r_25;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_s_25;
                return(t);
              }
              t = Option_3(t, j_3, k_3, l_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm b_80 = NULL;
    b_80 = t;
    y_79 :
    if(!(match_string(b_80, "-o")))
      {
        if(!(match_string(b_80, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm j_80 = NULL;
    ATerm v_25;
    v_25 = t;
    {
      ATerm c_80 = NULL;
      ATerm d_80 = NULL;
      d_80 = t;
      if(((c_80 != NULL) && (c_80 != d_80)))
        _fail(d_80);
      else
        c_80 = d_80;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(c_80));
        t = set_config_0(t);
      }
    }
    t = v_25;
    {
      ATerm k_80 = NULL;
      k_80 = t;
      if(((j_80 != NULL) && (j_80 != k_80)))
        _fail(k_80);
      else
        j_80 = k_80;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_80));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, p_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm o_80 = NULL;
          o_80 = t;
          n_80 :
          if(!(match_string(o_80, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_b_26;
          t = set_config_0(t);
          t = term_c_26;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_d_26;
          return(t);
        }
        t = Option_3(t, q_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  y_80 = t;
  w_80 :
  if(match_string(y_80, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
        {
          z_80 = ATgetFirst((ATermList) y_80);
          a_81 = (ATerm) ATgetNext((ATermList) y_80);
          x_80 :
          if(((ATgetType(a_81) == AT_LIST) && !(ATisEmpty(a_81))))
            {
              b_81 = ATgetFirst((ATermList) a_81);
              c_81 = (ATerm) ATgetNext((ATermList) a_81);
              {
                ATerm g_81 = NULL;
                ATerm e_26;
                e_26 = t;
                {
                  t = not_null(z_80);
                  t = k_0(t);
                }
                t = e_26;
                {
                  ATerm h_81 = NULL;
                  t = not_null(b_81);
                  {
                    t = m_0(t);
                    {
                      h_81 = t;
                      if(((g_81 != NULL) && (g_81 != h_81)))
                        _fail(h_81);
                      else
                        g_81 = h_81;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_81)), not_null(g_81));
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
  ATerm t_3 (ATerm t)
  {
    ATerm o_81 = NULL;
    o_81 = t;
    l_81 :
    if(!(match_string(o_81, "-i")))
      {
        if(!(match_string(o_81, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm b_82 = NULL;
    ATerm f_26;
    f_26 = t;
    {
      ATerm p_81 = NULL;
      ATerm a_82 = NULL;
      a_82 = t;
      if(((p_81 != NULL) && (p_81 != a_82)))
        _fail(a_82);
      else
        p_81 = a_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_26, not_null(p_81));
        t = set_config_0(t);
      }
    }
    t = f_26;
    {
      ATerm l_82 = NULL;
      l_82 = t;
      if(((b_82 != NULL) && (b_82 != l_82)))
        _fail(l_82);
      else
        b_82 = l_82;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_82));
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = t_27;
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm k_83 = NULL;
  t = report_run_time_0(t);
  {
    ATerm l_83 = NULL;
    t = term_p_20;
    {
      t = whoami_0(t);
      {
        l_83 = t;
        if(((k_83 != NULL) && (k_83 != l_83)))
          _fail(l_83);
        else
          k_83 = l_83;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_28), not_null(k_83)));
      {
        t = printnl_0(t);
        {
          t = term_b_21;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  t = SSL_TicksToSeconds(not_null(p_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL;
  u_84 = t;
  t_84 :
  if(match_cons(u_84, sym__2))
    {
      v_84 = ATgetArgument(u_84, 0);
      w_84 = ATgetArgument(u_84, 1);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_84), not_null(w_84));
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            t = SSL_addr(not_null(v_84), not_null(w_84));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_119 (ATerm), ATerm x_119 (ATerm))
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_119(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
        d_85 = t;
        c_85 :
        if(((ATgetType(d_85) == AT_LIST) && !(ATisEmpty(d_85))))
          {
            e_85 = ATgetFirst((ATermList) d_85);
            f_85 = (ATerm) ATgetNext((ATermList) d_85);
            {
              ATerm i_85 = NULL;
              ATerm j_85 = NULL;
              t = not_null(f_85);
              {
                t = foldr_2(t, w_119, x_119);
                {
                  j_85 = t;
                  if(((i_85 != NULL) && (i_85 != j_85)))
                    _fail(j_85);
                  else
                    i_85 = j_85;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_85), not_null(i_85));
                t = x_119(t);
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
ATerm crush_2 (ATerm t, ATerm u_117 (ATerm), ATerm v_117 (ATerm))
{
  ATerm q_85 = NULL;
  ATerm s_85 = NULL;
  q_85 = t;
  {
    ATerm t_85 = NULL;
    ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
    t = not_null(q_85);
    {
      t_85 = t;
      {
        t = SSL_explode_term(not_null(t_85));
        {
          v_85 = t;
          p_85 :
          if(match_cons(v_85, sym__2))
            {
              w_85 = ATgetArgument(v_85, 0);
              x_85 = ATgetArgument(v_85, 1);
              if(((s_85 != NULL) && (s_85 != x_85)))
                _fail(x_85);
              else
                s_85 = x_85;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_85);
      t = foldr_2(t, u_117, v_117);
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
    ATerm w_3 (ATerm t)
    {
      t = term_h_25;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  c_86 :
  if(match_cons(g_86, sym__2))
    {
      h_86 = ATgetArgument(g_86, 0);
      i_86 = ATgetArgument(g_86, 1);
      {
        ATerm n_28;
        n_28 = t;
        {
          ATerm o_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_86), not_null(i_86));
              ;
              LocalPopChoice(t_28);
            }
          else
            {
              t = o_28;
              t = SSL_gtr(not_null(h_86), not_null(i_86));
            }
        }
        t = n_28;
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
  ATerm o_86 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
      p_86 = t;
      n_86 :
      if(match_cons(p_86, sym__2))
        {
          q_86 = ATgetArgument(p_86, 0);
          r_86 = ATgetArgument(p_86, 1);
          {
            if(((o_86 != NULL) && (o_86 != q_86)))
              _fail(q_86);
            else
              o_86 = q_86;
            if(((o_86 != NULL) && (o_86 != r_86)))
              _fail(r_86);
            else
              o_86 = r_86;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_132 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm w_28;
    w_28 = t;
    {
      ATerm v_86 = NULL;
      ATerm h_87 = NULL;
      t = term_q_22;
      {
        t = get_config_0(t);
        {
          h_87 = t;
          if(((v_86 != NULL) && (v_86 != h_87)))
            _fail(h_87);
          else
            v_86 = h_87;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_86), term_b_21);
        t = geq_0(t);
      }
    }
    t = w_28;
    t = f_132(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm t_89 = NULL,v_89 = NULL;
    ATerm b_29;
    b_29 = t;
    {
      ATerm u_89 = NULL;
      t = run_time_0(t);
      {
        u_89 = t;
        if(((t_89 != NULL) && (t_89 != u_89)))
          _fail(u_89);
        else
          t_89 = u_89;
      }
    }
    t = b_29;
    {
      ATerm w_89 = NULL;
      t = term_p_20;
      {
        t = whoami_0(t);
        {
          w_89 = t;
          if(((v_89 != NULL) && (v_89 != w_89)))
            _fail(w_89);
          else
            v_89 = w_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_29), not_null(t_89)), term_c_29), not_null(v_89)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_90 = NULL;
  d_90 = t;
  c_90 :
  if(match_cons(d_90, sym_Version_0))
    {
      ATerm f_90 = NULL,h_90 = NULL;
      ATerm e_29;
      e_29 = t;
      {
        ATerm g_90 = NULL;
        t = SSLgetAnnotations(not_null(d_90));
        {
          g_90 = t;
          if(((f_90 != NULL) && (f_90 != g_90)))
            _fail(g_90);
          else
            f_90 = g_90;
        }
      }
      t = e_29;
      {
        ATerm i_90 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_90));
        {
          i_90 = t;
          if(((h_90 != NULL) && (h_90 != i_90)))
            _fail(i_90);
          else
            h_90 = i_90;
        }
        t = not_null(h_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_135 (ATerm))
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_29;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              {
                ATerm o_29 = t;
                int p_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(p_29);
                  }
                else
                  {
                    t = o_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, z_3);
      }
    }
  t = c_135(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_90 = NULL;
  n_90 = t;
  t = SSL_table_create(not_null(n_90));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_90 = NULL;
  r_90 = t;
  {
    ATerm q_29;
    q_29 = t;
    {
      t = term_r_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_29, term_s_29, not_null(r_90));
          t = table_put_0(t);
        }
      }
    }
    t = q_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_90 = NULL;
  v_90 = t;
  t = SSL_table_destroy(not_null(v_90));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_90 = NULL;
  z_90 = t;
  t = SSL_exit(not_null(z_90));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_137 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_115 (ATerm))
{
  ATerm c_91 (ATerm t)
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = Cons_2(t, k_115, c_91);
      }
    return(t);
  }
  t = c_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
  l_91 = t;
  i_91 :
  if(((ATgetType(l_91) == AT_LIST) && !(ATisEmpty(l_91))))
    {
      j_91 = ATgetFirst((ATermList) l_91);
      k_91 = (ATerm) ATgetNext((ATermList) l_91);
      {
        ATerm o_91 = NULL;
        t = not_null(k_91);
        {
          ATerm v_29;
          v_29 = t;
          {
            ATerm p_91 = NULL,r_91 = NULL,t_91 = NULL;
            ATerm w_29;
            w_29 = t;
            {
              ATerm q_91 = NULL;
              t = i_0(t);
              {
                q_91 = t;
                if(((p_91 != NULL) && (p_91 != q_91)))
                  _fail(q_91);
                else
                  p_91 = q_91;
              }
            }
            t = w_29;
            {
              ATerm s_91 = NULL;
              t = not_null(j_91);
              {
                t = g_0(t);
                {
                  s_91 = t;
                  if(((r_91 != NULL) && (r_91 != s_91)))
                    _fail(s_91);
                  else
                    r_91 = s_91;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_91)), not_null(r_91));
                {
                  t_91 = t;
                  if(((o_91 != NULL) && (o_91 != t_91)))
                    _fail(t_91);
                  else
                    o_91 = t_91;
                }
              }
            }
          }
          t = v_29;
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(o_91);
              return(t);
            }
            t = reverse_acc_2(t, g_0, a_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_91) == AT_LIST) && ATisEmpty(l_91)))
        {
          {
            t = term_p_20;
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_137 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm g_92 = NULL,h_92 = NULL;
  g_92 = t;
  f_92 :
  if(match_cons(g_92, sym_Program_1))
    {
      h_92 = ATgetArgument(g_92, 0);
      {
        ATerm k_92 = NULL,m_92 = NULL;
        ATerm l_92 = NULL;
        t = SSLgetAnnotations(not_null(g_92));
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
        {
          t = not_null(h_92);
          {
            ATerm o_92 = NULL;
            t = h_107(t);
            {
              m_92 = t;
              {
                ATerm p_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_92)), not_null(k_92));
                {
                  p_92 = t;
                  if(((o_92 != NULL) && (o_92 != p_92)))
                    _fail(p_92);
                  else
                    o_92 = p_92;
                }
                t = not_null(o_92);
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm y_92 = NULL;
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_92 = NULL;
      t = term_e_28;
      {
        t = get_config_0(t);
        {
          z_92 = t;
          if(((y_92 != NULL) && (y_92 != z_92)))
            _fail(z_92);
          else
            y_92 = z_92;
        }
      }
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm a_93 = NULL;
            a_93 = t;
            if(((y_92 != NULL) && (y_92 != a_93)))
              _fail(a_93);
            else
              y_92 = a_93;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = option_defined_1(t, f_4);
      }
    }
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        t = not_null(y_92);
        return(t);
      }
      t = short_description_1(t, i_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_4);
    {
      t = term_z_29;
      {
        t = echo_0(t);
        {
          t = term_j_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm b_93 = NULL;
                  ATerm c_93 = NULL;
                  c_93 = t;
                  if(((b_93 != NULL) && (b_93 != c_93)))
                    _fail(c_93);
                  else
                    b_93 = c_93;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_93)), term_k_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_4);
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm d_93 = NULL;
                    ATerm e_93 = NULL;
                    ATerm l_4 (ATerm t)
                    {
                      t = not_null(y_92);
                      return(t);
                    }
                    t = long_description_1(t, l_4);
                    {
                      e_93 = t;
                      if(((d_93 != NULL) && (d_93 != e_93)))
                        _fail(e_93);
                      else
                        d_93 = e_93;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_93)), term_l_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_4);
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
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  r_93 :
  if(match_cons(s_93, sym_Undefined_1))
    {
      t_93 = ATgetArgument(s_93, 0);
      {
        ATerm w_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(s_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        {
          t = not_null(t_93);
          {
            ATerm a_94 = NULL;
            t = i_107(t);
            {
              y_93 = t;
              {
                ATerm b_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_93)), not_null(w_93));
                {
                  b_94 = t;
                  if(((a_94 != NULL) && (a_94 != b_94)))
                    _fail(b_94);
                  else
                    a_94 = b_94;
                }
                t = not_null(a_94);
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
ATerm fetch_1 (ATerm t, ATerm t_115 (ATerm))
{
  ATerm g_94 (ATerm t)
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_115, _id);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = Cons_2(t, _id, g_94);
      }
    return(t);
  }
  t = g_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_136 (ATerm))
{
  t = fetch_1(t, c_136);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  i_94 = t;
  h_94 :
  if(((ATgetType(i_94) == AT_LIST) && ATisEmpty(i_94)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_94) == AT_LIST) && !(ATisEmpty(i_94))))
        {
          j_94 = ATgetFirst((ATermList) i_94);
          k_94 = (ATerm) ATgetNext((ATermList) i_94);
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
  ATerm q_30;
  q_30 = t;
  {
    ATerm r_94 = NULL;
    ATerm u_94 = NULL;
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm s_94 = NULL;
          ATerm t_94 = NULL;
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
          t = (ATerm) ATinsert(ATempty, not_null(s_94));
        }
      }
    {
      u_94 = t;
      if(((r_94 != NULL) && (r_94 != u_94)))
        _fail(u_94);
      else
        r_94 = u_94;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_23, not_null(r_94));
      t = printnl_0(t);
    }
  }
  t = q_30;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_e_28;
  {
    t = get_config_0(t);
    t = echo_0(t);
  }
  return(t);
}
ATerm override_system_about_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_95 = NULL;
  d_95 = t;
  c_95 :
  if(match_cons(d_95, sym_Help_0))
    {
      ATerm f_95 = NULL,h_95 = NULL;
      ATerm x_30;
      x_30 = t;
      {
        ATerm g_95 = NULL;
        t = SSLgetAnnotations(not_null(d_95));
        {
          g_95 = t;
          if(((f_95 != NULL) && (f_95 != g_95)))
            _fail(g_95);
          else
            f_95 = g_95;
        }
      }
      t = x_30;
      {
        ATerm i_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_95));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_112 (ATerm))
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_112(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm a_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm o_95 = NULL;
        o_95 = t;
        m_95 :
        if(!(match_string(o_95, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_d_32;
        t = set_config_0(t);
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_e_32;
        return(t);
      }
      t = Option_3(t, m_4, n_4, o_4);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = a_31;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm p_95 = NULL;
          p_95 = t;
          n_95 :
          if(!(match_string(p_95, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_d_32;
          {
            t = set_config_0(t);
            {
              t = term_n_32;
              t = set_config_0(t);
            }
          }
          t = term_o_32;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_p_32;
          return(t);
        }
        t = Option_3(t, q_4, r_4, s_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym__2))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      t = SSL_table_get(not_null(t_95), not_null(u_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  b_96 = t;
  a_96 :
  if(match_cons(b_96, sym__3))
    {
      c_96 = ATgetArgument(b_96, 0);
      d_96 = ATgetArgument(b_96, 1);
      e_96 = ATgetArgument(b_96, 2);
      {
        ATerm q_32;
        q_32 = t;
        {
          ATerm i_96 = NULL;
          ATerm j_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_96), not_null(d_96));
          {
            ATerm r_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_32);
              }
            else
              {
                t = r_32;
                t = (ATerm) ATempty;
              }
            {
              j_96 = t;
              if(((i_96 != NULL) && (i_96 != j_96)))
                _fail(j_96);
              else
                i_96 = j_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_96), not_null(d_96), (ATerm) ATinsert(CheckATermList(not_null(i_96)), not_null(e_96)));
            t = table_put_0(t);
          }
        }
        t = q_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_137 (ATerm))
{
  ATerm n_96 = NULL;
  ATerm p_96 = NULL;
  t = term_p_20;
  {
    t = h_137(t);
    {
      p_96 = t;
      if(((n_96 != NULL) && (n_96 != p_96)))
        _fail(p_96);
      else
        n_96 = p_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_30, term_i_30, not_null(n_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL;
  v_96 = t;
  u_96 :
  if(match_string(v_96, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_96) == AT_LIST) && !(ATisEmpty(v_96))))
        {
          w_96 = ATgetFirst((ATermList) v_96);
          x_96 = (ATerm) ATgetNext((ATermList) v_96);
          {
            ATerm a_97 = NULL;
            ATerm t_32;
            t_32 = t;
            {
              t = not_null(w_96);
              t = a_0(t);
            }
            t = t_32;
            {
              ATerm b_97 = NULL;
              t = term_p_20;
              {
                t = b_0(t);
                {
                  b_97 = t;
                  if(((a_97 != NULL) && (a_97 != b_97)))
                    _fail(b_97);
                  else
                    a_97 = b_97;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_96)), not_null(a_97));
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
    ATerm g_97 = NULL;
    g_97 = t;
    f_97 :
    if(!(match_string(g_97, "--help")))
      {
        if(!(match_string(g_97, "-h")))
          {
            if(!(match_string(g_97, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_u_32;
    {
      t = set_config_0(t);
      t = term_v_32;
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_w_32;
    return(t);
  }
  t = Option_3(t, t_4, u_4, y_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
  j_97 = t;
  i_97 :
  if(((ATgetType(j_97) == AT_LIST) && !(ATisEmpty(j_97))))
    {
      k_97 = ATgetFirst((ATermList) j_97);
      l_97 = (ATerm) ATgetNext((ATermList) j_97);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
  x_97 = t;
  w_97 :
  if(((ATgetType(x_97) == AT_LIST) && !(ATisEmpty(x_97))))
    {
      y_97 = ATgetFirst((ATermList) x_97);
      z_97 = (ATerm) ATgetNext((ATermList) x_97);
      {
        ATerm d_98 = NULL,f_98 = NULL;
        ATerm e_98 = NULL;
        t = SSLgetAnnotations(not_null(x_97));
        {
          e_98 = t;
          if(((d_98 != NULL) && (d_98 != e_98)))
            _fail(e_98);
          else
            d_98 = e_98;
        }
        {
          t = not_null(y_97);
          {
            ATerm h_98 = NULL;
            t = h_93(t);
            {
              f_98 = t;
              {
                t = not_null(z_97);
                {
                  ATerm j_98 = NULL;
                  t = i_93(t);
                  {
                    h_98 = t;
                    {
                      ATerm k_98 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_98)), not_null(f_98)), not_null(d_98));
                      {
                        k_98 = t;
                        if(((j_98 != NULL) && (j_98 != k_98)))
                          _fail(k_98);
                        else
                          j_98 = k_98;
                      }
                      t = not_null(j_98);
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
  ATerm w_98 = NULL;
  w_98 = t;
  v_98 :
  if(((ATgetType(w_98) == AT_LIST) && ATisEmpty(w_98)))
    {
      {
        ATerm y_98 = NULL,a_99 = NULL;
        ATerm x_32;
        x_32 = t;
        {
          ATerm z_98 = NULL;
          t = SSLgetAnnotations(not_null(w_98));
          {
            z_98 = t;
            if(((y_98 != NULL) && (y_98 != z_98)))
              _fail(z_98);
            else
              y_98 = z_98;
          }
        }
        t = x_32;
        {
          ATerm b_99 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_98));
          {
            b_99 = t;
            if(((a_99 != NULL) && (a_99 != b_99)))
              _fail(b_99);
            else
              a_99 = b_99;
          }
          t = not_null(a_99);
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
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym__2))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_22, not_null(i_99), not_null(j_99));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_137 (ATerm))
{
  ATerm y_32;
  y_32 = t;
  {
    ATerm z_4 (ATerm t)
    {
      t = term_z_32;
      t = f_137(t);
      return(t);
    }
    t = try_1(t, z_4);
  }
  t = y_32;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm r_99 = NULL;
      ATerm a_33;
      a_33 = t;
      {
        ATerm p_99 = NULL;
        ATerm q_99 = NULL;
        q_99 = t;
        if(((p_99 != NULL) && (p_99 != q_99)))
          _fail(q_99);
        else
          p_99 = q_99;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(p_99));
          t = set_config_0(t);
        }
      }
      t = a_33;
      {
        ATerm s_99 = NULL;
        s_99 = t;
        if(((r_99 != NULL) && (r_99 != s_99)))
          _fail(s_99);
        else
          r_99 = s_99;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_99));
      }
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              {
                t = f_137(t);
                t = Cons_2(t, _id, c_5);
              }
            }
          ;
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_5, c_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  ATerm f_33;
  f_33 = t;
  {
    ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
    e_100 = t;
    a_100 :
    if(match_cons(e_100, sym__3))
      {
        f_100 = ATgetArgument(e_100, 0);
        g_100 = ATgetArgument(e_100, 1);
        h_100 = ATgetArgument(e_100, 2);
        {
          if(((b_100 != NULL) && (b_100 != f_100)))
            _fail(f_100);
          else
            b_100 = f_100;
          {
            if(((c_100 != NULL) && (c_100 != g_100)))
              _fail(g_100);
            else
              c_100 = g_100;
            {
              if(((d_100 != NULL) && (d_100 != h_100)))
                _fail(h_100);
              else
                d_100 = h_100;
              t = SSL_table_put(not_null(b_100), not_null(c_100), not_null(d_100));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_137 (ATerm))
{
  ATerm k_100 = NULL;
  ATerm h_33;
  h_33 = t;
  {
    t = term_i_33;
    t = table_put_0(t);
  }
  t = h_33;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm j_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_137(t);
          ;
          LocalPopChoice(l_33);
        }
      else
        {
          t = j_33;
          {
            ATerm m_33 = t;
            int n_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(n_33);
              }
            else
              {
                t = m_33;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, d_5);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm p_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_34;
            d_34 = t;
            {
              ATerm l_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = l_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_34;
            {
              t = system_usage_0(t);
              {
                t = term_h_25;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = p_33;
            {
              ATerm w_34 = t;
              int x_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_34;
                  y_34 = t;
                  {
                    t = term_g_31;
                    t = get_config_0(t);
                  }
                  t = y_34;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_25;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(x_34);
                }
              else
                {
                  t = w_34;
                  {
                    ATerm f_5 (ATerm t)
                    {
                      ATerm j_5 (ATerm t)
                      {
                        ATerm l_100 = NULL;
                        l_100 = t;
                        if(((k_100 != NULL) && (k_100 != l_100)))
                          _fail(l_100);
                        else
                          k_100 = l_100;
                        return(t);
                      }
                      t = Undefined_1(t, j_5);
                      return(t);
                    }
                    t = option_defined_1(t, f_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_100)), term_z_34));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_b_21;
                            t = exit_0(t);
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
      t = try_1(t, e_5);
      {
        ATerm a_35;
        a_35 = t;
        {
          t = term_h_30;
          t = table_destroy_0(t);
        }
        t = a_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm h_135 (ATerm))
{
  t = parse_options_1(t, e_135);
  {
    t = store_options_0(t);
    {
      t = g_135(t);
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_135);
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            {
              ATerm d_35 = t;
              int e_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_135(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_35);
                }
              else
                {
                  t = d_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_134(t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_134);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_5, v_134, w_134, o_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm h_35;
      h_35 = t;
      {
        ATerm o_100 = NULL;
        ATerm p_100 = NULL;
        t = term_e_28;
        {
          t = get_config_0(t);
          {
            p_100 = t;
            if(((o_100 != NULL) && (o_100 != p_100)))
              _fail(p_100);
            else
              o_100 = p_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATempty, not_null(o_100)));
          t = printnl_0(t);
        }
      }
      t = h_35;
      return(t);
    }
    t = if_verbose2_1(t, s_5);
    return(t);
  }
  t = iowrap_4(t, n_134, o_134, p_134, r_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_134 (ATerm), ATerm m_134 (ATerm))
{
  t = iowrap_3(t, l_134, m_134, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_134 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    t = _2(t, _id, i_134);
    return(t);
  }
  t = iowrap_2(t, t_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, v_5);
    return(t);
  }
  t = iowrap_1(t, u_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
