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
ATerm term_t_37;
ATerm term_g_37;
ATerm term_r_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_c_27;
ATerm term_v_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_l_25;
ATerm term_m_24;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_y_17;
ATerm term_k_16;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_d_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
void init_constant_terms (void)
{
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Op_2, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_q_12);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_12);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_b_26);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_b_26);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_l_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_l_35, term_b_26);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_b_26);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_b_26);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__3, term_k_33, term_l_33, (ATerm) ATempty);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm j_108 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm Let_2 (ATerm, ATerm f_97 (ATerm), ATerm g_97 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_97 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm f_108 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm m_96 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm tboundin_3 (ATerm, ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm diff_1 (ATerm, ATerm b_117 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_126 (ATerm), ATerm d_126 (ATerm));
ATerm for_3 (ATerm, ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm e_122 (ATerm), ATerm f_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm y_121 (ATerm), ATerm z_121 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_122 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm c_123 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm m_122 (ATerm));
ATerm rename_4 (ATerm, ATerm t_121 (ATerm, ATerm (ATerm)), ATerm u_121 (ATerm), ATerm v_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm j_101 (ATerm));
ATerm Call_2 (ATerm, ATerm h_97 (ATerm), ATerm i_97 (ATerm));
ATerm Str_1 (ATerm, ATerm v_0 (ATerm));
ATerm Real_1 (ATerm, ATerm u_0 (ATerm));
ATerm Int_1 (ATerm, ATerm s_0 (ATerm));
ATerm Var_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm i_115 (ATerm));
ATerm Build_1 (ATerm, ATerm n_97 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_121 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm m_137 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm f_114 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm n_116 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_121 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm Row_3 (ATerm, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_121 (ATerm));
ATerm restore_always_2 (ATerm, ATerm m_112 (ATerm), ATerm n_112 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_120 (ATerm));
ATerm scope_2 (ATerm, ATerm b_121 (ATerm), ATerm c_121 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm w_113 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm Prim_2 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm Explode_2 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm Op_2 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm));
ATerm pat_td_1 (ATerm, ATerm m_107 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm));
ATerm crush_3 (ATerm, ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm));
ATerm collect_om_1 (ATerm, ATerm q_118 (ATerm));
ATerm collect_1 (ATerm, ATerm r_118 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_117 (ATerm), ATerm k_117 (ATerm));
ATerm union_1 (ATerm, ATerm f_117 (ATerm));
ATerm unions_1 (ATerm, ATerm h_117 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm b_114 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm d_118 (ATerm), ATerm e_118 (ATerm));
ATerm collect_split_2 (ATerm, ATerm e_119 (ATerm), ATerm f_119 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm k_107 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm c_114 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_109 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm n_125 (ATerm));
ATerm downup_1 (ATerm, ATerm h_109 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm));
ATerm Strategies_1 (ATerm, ATerm j_93 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_93 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm j_107 (ATerm));
ATerm _2 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_115 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_132 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm y_130 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_134 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_130 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_112 (ATerm), ATerm s_112 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_119 (ATerm), ATerm t_119 (ATerm));
ATerm crush_2 (ATerm, ATerm q_117 (ATerm), ATerm r_117 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_132 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_134 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_136 (ATerm));
ATerm map_1 (ATerm, ATerm g_115 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_136 (ATerm));
ATerm Program_1 (ATerm, ATerm d_107 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_115 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_135 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_111 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_137 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_93 (ATerm), ATerm g_93 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_137 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_137 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm l_134 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_134 (ATerm), ATerm i_134 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_134 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,q_4 = NULL;
  l_4 = t;
  k_4 :
  if(((ATgetType(l_4) == AT_LIST) && !(ATisEmpty(l_4))))
    {
      m_4 = ATgetFirst((ATermList) l_4);
      q_4 = (ATerm) ATgetNext((ATermList) l_4);
      t = not_null(m_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm j_108 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, j_108);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
            k_8 = t;
            i_7 :
            if(match_cons(k_8, sym__2))
              {
                l_8 = ATgetArgument(k_8, 0);
                s_8 = ATgetArgument(k_8, 1);
                j_7 :
                if(match_cons(l_8, sym_SDef_3))
                  {
                    m_8 = ATgetArgument(l_8, 0);
                    q_8 = ATgetArgument(l_8, 1);
                    r_8 = ATgetArgument(l_8, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_8), not_null(q_8), not_null(r_8));
                  }
                else
                  {
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
      t = Let_2(t, c_0, _id);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, j_108);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
                  w_8 = t;
                  y_7 :
                  if(match_cons(w_8, sym__2))
                    {
                      x_8 = ATgetArgument(w_8, 0);
                      a_9 = ATgetArgument(w_8, 1);
                      z_7 :
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
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm j_0 (ATerm t)
              {
                t = j_108(t);
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
ATerm Rec_2 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm))
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
            t = c_98(t);
            {
              u_9 = t;
              {
                t = not_null(o_9);
                {
                  ATerm y_9 = NULL;
                  t = d_98(t);
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
ATerm Let_2 (ATerm t, ATerm f_97 (ATerm), ATerm g_97 (ATerm))
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
            t = f_97(t);
            {
              t_10 = t;
              {
                t = not_null(n_10);
                {
                  ATerm x_10 = NULL;
                  t = g_97(t);
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
ATerm sboundin_3 (ATerm t, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm))
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, k_108, k_108);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, m_108, m_108, k_108);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = Rec_2(t, m_108, k_108);
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
          ATerm l_0 (ATerm t)
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
          t = map_1(t, l_0);
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
          ATerm o_0 (ATerm t)
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
          t = map_1(t, o_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm e_97 (ATerm))
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
            t = e_97(t);
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
  ATerm t_0 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, t_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm f_108 (ATerm))
{
  t = Scope_2(t, f_108, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_96 (ATerm))
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
            t = m_96(t);
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
ATerm Scope_2 (ATerm t, ATerm p_97 (ATerm), ATerm q_97 (ATerm))
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
            t = p_97(t);
            {
              v_14 = t;
              {
                t = not_null(p_14);
                {
                  ATerm z_14 = NULL;
                  t = q_97(t);
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
ATerm tboundin_3 (ATerm t, ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm))
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, i_108, g_108);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      t = DynamicRules_1(t, g_108);
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
ATerm diff_1 (ATerm t, ATerm b_117 (ATerm))
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
            ATerm c_8 = t;
            int d_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(d_8);
              }
            else
              {
                t = c_8;
                {
                  ATerm e_8 = t;
                  int f_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(w_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_117, w_0);
                      t = a_16(t);
                      ;
                      LocalPopChoice(f_8);
                    }
                  else
                    {
                      t = e_8;
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
            ATerm g_8;
            g_8 = t;
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
            t = g_8;
            {
              ATerm h_8;
              h_8 = t;
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
              t = h_8;
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
ATerm while_not_2 (ATerm t, ATerm c_126 (ATerm), ATerm d_126 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_126(t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          t = d_126(t);
          t = l_18(t);
        }
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm))
{
  t = f_126(t);
  t = while_not_2(t, g_126, h_126);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
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
        ATerm p_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm u_8 = t;
              int v_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(v_8);
                }
              else
                {
                  t = u_8;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, b_1);
            ;
            LocalPopChoice(t_8);
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
      t = n_8;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_18 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_123(t);
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_18 = NULL;
              ATerm f_9;
              f_9 = t;
              {
                ATerm s_18 = NULL;
                t = x_123(t);
                {
                  s_18 = t;
                  if(((r_18 != NULL) && (r_18 != s_18)))
                    _fail(s_18);
                  else
                    r_18 = s_18;
                }
              }
              t = f_9;
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
                t = y_123(t, c_1, t_18, d_1);
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
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              {
                ATerm g_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, g_1, union_0, t_18);
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
  ATerm h_1 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, h_1, tboundin_3);
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
ATerm DistBinding_2 (ATerm t, ATerm e_122 (ATerm), ATerm f_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
          ATerm i_1 (ATerm t)
          {
            ATerm x_19 = NULL;
            x_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(t_19));
              t = e_122(t);
            }
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            ATerm z_19 = NULL;
            z_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(s_19));
              t = e_122(t);
            }
            return(t);
          }
          t = f_122(t, i_1, j_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm y_121 (ATerm), ATerm z_121 (ATerm, ATerm (ATerm)))
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
        ATerm i_9;
        i_9 = t;
        {
          ATerm t_20 = NULL;
          t = not_null(m_20);
          {
            ATerm u_20 = NULL;
            t = y_121(t);
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
                            t = conc_0(t);
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
        t = i_9;
        {
          ATerm z_20 = NULL;
          t = not_null(m_20);
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(r_20);
              return(t);
            }
            t = z_121(t, k_1);
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_122 (ATerm, ATerm (ATerm)))
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
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(k_22);
              return(t);
            }
            t = split_2(t, _id, m_1);
            t = lookup_0(t);
            return(t);
          }
          t = j_122(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm c_123 (ATerm))
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
          ATerm n_1 (ATerm t)
          {
            ATerm w_22 = NULL;
            w_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(t_22));
              t = c_123(t);
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
ATerm env_alltd_1 (ATerm t, ATerm m_122 (ATerm))
{
  ATerm a_23 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_122(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = all_dist_1(t, a_23);
      }
    return(t);
  }
  t = a_23(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm t_121 (ATerm, ATerm (ATerm)), ATerm u_121 (ATerm), ATerm v_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_121 (ATerm, ATerm (ATerm)))
{
  ATerm c_23 = NULL;
  c_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), (ATerm) ATempty);
    {
      ATerm f_23 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm r_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, t_121);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = r_9;
              {
                t = RnBinding_2(t, u_121, w_121);
                t = DistBinding_2(t, f_23, v_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, o_1);
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
ATerm Seqs_1 (ATerm t, ATerm j_101 (ATerm))
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
            t = j_101(t);
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
ATerm Call_2 (ATerm t, ATerm h_97 (ATerm), ATerm i_97 (ATerm))
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
            t = h_97(t);
            {
              p_24 = t;
              {
                t = not_null(j_24);
                {
                  ATerm t_24 = NULL;
                  t = i_97(t);
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
ATerm Str_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Str_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm x_9 = t;
        int a_10 = stack_ptr;
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
                t = v_0(t);
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
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = x_9;
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
                  t = v_0(t);
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
ATerm Real_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Real_1))
    {
      t_26 = ATgetArgument(s_26, 0);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
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
                t = u_0(t);
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
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
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
                  t = u_0(t);
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
ATerm Int_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Int_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
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
                t = s_0(t);
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
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
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
                  t = s_0(t);
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
ATerm Var_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym_Var_1))
    {
      p_29 = ATgetArgument(o_29, 0);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_29 = NULL,u_29 = NULL;
            ATerm t_29 = NULL;
            t = SSLgetAnnotations(not_null(o_29));
            {
              t_29 = t;
              if(((s_29 != NULL) && (s_29 != t_29)))
                _fail(t_29);
              else
                s_29 = t_29;
            }
            {
              t = not_null(p_29);
              {
                ATerm w_29 = NULL;
                t = r_0(t);
                {
                  u_29 = t;
                  {
                    ATerm x_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_29)), not_null(s_29));
                    {
                      x_29 = t;
                      if(((w_29 != NULL) && (w_29 != x_29)))
                        _fail(x_29);
                      else
                        w_29 = x_29;
                    }
                    t = not_null(w_29);
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
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_30 = NULL,c_30 = NULL;
                  ATerm b_30 = NULL;
                  t = SSLgetAnnotations(not_null(o_29));
                  {
                    b_30 = t;
                    if(((a_30 != NULL) && (a_30 != b_30)))
                      _fail(b_30);
                    else
                      a_30 = b_30;
                  }
                  {
                    t = not_null(p_29);
                    {
                      ATerm e_30 = NULL;
                      t = r_0(t);
                      {
                        c_30 = t;
                        {
                          ATerm f_30 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_30)), not_null(a_30));
                          {
                            f_30 = t;
                            if(((e_30 != NULL) && (e_30 != f_30)))
                              _fail(f_30);
                            else
                              e_30 = f_30;
                          }
                          t = not_null(e_30);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm i_30 = NULL,k_30 = NULL;
                    ATerm j_30 = NULL;
                    t = SSLgetAnnotations(not_null(o_29));
                    {
                      j_30 = t;
                      if(((i_30 != NULL) && (i_30 != j_30)))
                        _fail(j_30);
                      else
                        i_30 = j_30;
                    }
                    {
                      t = not_null(p_29);
                      {
                        ATerm m_30 = NULL;
                        t = r_0(t);
                        {
                          k_30 = t;
                          {
                            ATerm n_30 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(i_30));
                            {
                              n_30 = t;
                              if(((m_30 != NULL) && (m_30 != n_30)))
                                _fail(n_30);
                              else
                                m_30 = n_30;
                            }
                            t = not_null(m_30);
                          }
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
ATerm list_1 (ATerm t, ATerm i_115 (ATerm))
{
  ATerm a_31 (ATerm t)
  {
    ATerm j_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = j_10;
        t = Cons_2(t, i_115, a_31);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_97 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Build_1))
    {
      h_31 = ATgetArgument(g_31, 0);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(g_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(h_31);
          {
            ATerm o_31 = NULL;
            t = n_97(t);
            {
              m_31 = t;
              {
                ATerm p_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(m_31)), not_null(k_31));
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
                t = not_null(o_31);
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
  ATerm y_31 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Fail_0))
    {
      ATerm a_32 = NULL,c_32 = NULL;
      ATerm p_10;
      p_10 = t;
      {
        ATerm b_32 = NULL;
        t = SSLgetAnnotations(not_null(y_31));
        {
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
        }
      }
      t = p_10;
      {
        ATerm d_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(a_32));
        {
          d_32 = t;
          if(((c_32 != NULL) && (c_32 != d_32)))
            _fail(d_32);
          else
            c_32 = d_32;
        }
        t = not_null(c_32);
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
  ATerm l_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Id_0))
    {
      ATerm n_32 = NULL,p_32 = NULL;
      ATerm q_10;
      q_10 = t;
      {
        ATerm o_32 = NULL;
        t = SSLgetAnnotations(not_null(l_32));
        {
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
        }
      }
      t = q_10;
      {
        ATerm q_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(n_32));
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
        t = not_null(p_32);
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
  ATerm u_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = u_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                    ATerm d_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm j_11 = t;
                          int k_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              ;
                              LocalPopChoice(k_11);
                            }
                          else
                            {
                              t = j_11;
                              {
                                ATerm l_11 = t;
                                int m_11 = stack_ptr;
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
                                    LocalPopChoice(m_11);
                                  }
                                else
                                  {
                                    t = l_11;
                                    {
                                      ATerm n_11 = t;
                                      int u_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          ;
                                          LocalPopChoice(u_11);
                                        }
                                      else
                                        {
                                          t = n_11;
                                          {
                                            ATerm v_11 = t;
                                            int w_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                ;
                                                LocalPopChoice(w_11);
                                              }
                                            else
                                              {
                                                t = v_11;
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
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm a_12 = t;
                          int b_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              ;
                              LocalPopChoice(b_12);
                            }
                          else
                            {
                              t = a_12;
                              {
                                ATerm c_12 = t;
                                int d_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    ;
                                    LocalPopChoice(d_12);
                                  }
                                else
                                  {
                                    t = c_12;
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
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Row_2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      {
        ATerm e_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_33 = NULL;
            ATerm f_33 = NULL;
            t = not_null(b_33);
            {
              ATerm l_12 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_12;
                }
              {
                t = new_0(t);
                {
                  f_33 = t;
                  if(((e_33 != NULL) && (e_33 != f_33)))
                    _fail(f_33);
                  else
                    e_33 = f_33;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_33), (ATerm)ATempty, not_null(b_33))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(a_33), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_33)), (ATerm) ATempty)));
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = e_12;
            {
              t = not_null(b_33);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(a_33), not_null(b_33)));
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_Matrix_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      {
        ATerm u_33 = NULL,v_33 = NULL;
        ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
        t = not_null(r_33);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              w_33 = t;
              n_33 :
              if(match_cons(w_33, sym__2))
                {
                  x_33 = ATgetArgument(w_33, 0);
                  y_33 = ATgetArgument(w_33, 1);
                  {
                    if(((u_33 != NULL) && (u_33 != x_33)))
                      _fail(x_33);
                    else
                      u_33 = x_33;
                    if(((v_33 != NULL) && (v_33 != y_33)))
                      _fail(y_33);
                    else
                      v_33 = y_33;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_33), (ATerm) ATmakeAppl(sym_Let_2, not_null(u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_q_12))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(v_33)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_121 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
        ATerm r_12;
        r_12 = t;
        {
          ATerm o_34 = NULL;
          ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
          t = d_121(t);
          {
            o_34 = t;
            {
              if(((l_34 != NULL) && (l_34 != o_34)))
                _fail(o_34);
              else
                l_34 = o_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), not_null(h_34), not_null(i_34));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_12 = t;
                    int t_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), term_u_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(t_12);
                      }
                    else
                      {
                        t = s_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_34 = t;
                      e_34 :
                      if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
                        {
                          q_34 = ATgetFirst((ATermList) p_34);
                          r_34 = (ATerm) ATgetNext((ATermList) p_34);
                          {
                            if(((m_34 != NULL) && (m_34 != q_34)))
                              _fail(q_34);
                            else
                              m_34 = q_34;
                            {
                              if(((n_34 != NULL) && (n_34 != r_34)))
                                _fail(r_34);
                              else
                                n_34 = r_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), term_u_12, (ATerm) ATinsert(CheckATermList(not_null(n_34)), (ATerm) ATinsert(CheckATermList(not_null(m_34)), not_null(h_34))));
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
        t = r_12;
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
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  a_35 = t;
  w_34 :
  if(match_cons(a_35, sym_Row_3))
    {
      b_35 = ATgetArgument(a_35, 0);
      g_35 = ATgetArgument(a_35, 1);
      h_35 = ATgetArgument(a_35, 2);
      x_34 :
      if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
        {
          c_35 = ATgetFirst((ATermList) b_35);
          f_35 = (ATerm) ATgetNext((ATermList) b_35);
          y_34 :
          if(match_cons(c_35, sym_As_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              e_35 = ATgetArgument(c_35, 1);
              z_34 :
              if(match_cons(e_35, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(f_35), not_null(g_35), not_null(h_35));
                }
              else
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
  ATerm n_35 = NULL;
  t = filter_1(t, WildPat_0);
  {
    n_35 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(n_35));
  }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Wld_0))
    {
      ATerm o_36 = NULL;
      ATerm s_36 = NULL;
      t = q_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm p_36 = NULL,q_36 = NULL;
          p_36 = t;
          w_35 :
          if(match_cons(p_36, sym_Var_1))
            {
              q_36 = ATgetArgument(p_36, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_36)), term_v_12);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, t_1);
        {
          s_36 = t;
          if(((o_36 != NULL) && (o_36 != s_36)))
            _fail(s_36);
          else
            o_36 = s_36;
        }
      }
      t = not_null(o_36);
    }
  else
    {
      if(match_cons(l_36, sym_Int_1))
        {
          m_36 = ATgetArgument(l_36, 0);
          {
            ATerm u_36 = NULL,v_36 = NULL;
            t = p_0(t);
            {
              u_36 = t;
              a_36 :
              if(match_cons(u_36, sym_Int_1))
                {
                  v_36 = ATgetArgument(u_36, 0);
                  {
                    ATerm w_36 = NULL;
                    if(((m_36 != NULL) && (m_36 != v_36)))
                      _fail(v_36);
                    else
                      m_36 = v_36;
                    {
                      t = q_0(t);
                      {
                        w_36 = t;
                        z_35 :
                        if(((ATgetType(w_36) == AT_LIST) && ATisEmpty(w_36)))
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
          if(match_cons(l_36, sym_Real_1))
            {
              m_36 = ATgetArgument(l_36, 0);
              {
                ATerm y_36 = NULL,z_36 = NULL;
                t = p_0(t);
                {
                  y_36 = t;
                  d_36 :
                  if(match_cons(y_36, sym_Real_1))
                    {
                      z_36 = ATgetArgument(y_36, 0);
                      {
                        ATerm a_37 = NULL;
                        if(((m_36 != NULL) && (m_36 != z_36)))
                          _fail(z_36);
                        else
                          m_36 = z_36;
                        {
                          t = q_0(t);
                          {
                            a_37 = t;
                            c_36 :
                            if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
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
              if(match_cons(l_36, sym_Str_1))
                {
                  m_36 = ATgetArgument(l_36, 0);
                  {
                    ATerm o_38 = NULL,p_38 = NULL;
                    t = p_0(t);
                    {
                      o_38 = t;
                      g_36 :
                      if(match_cons(o_38, sym_Str_1))
                        {
                          p_38 = ATgetArgument(o_38, 0);
                          {
                            ATerm q_38 = NULL;
                            if(((m_36 != NULL) && (m_36 != p_38)))
                              _fail(p_38);
                            else
                              m_36 = p_38;
                            {
                              t = q_0(t);
                              {
                                q_38 = t;
                                f_36 :
                                if(((ATgetType(q_38) == AT_LIST) && ATisEmpty(q_38)))
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
                  if(match_cons(l_36, sym_Op_2))
                    {
                      m_36 = ATgetArgument(l_36, 0);
                      n_36 = ATgetArgument(l_36, 1);
                      {
                        ATerm d_39 = NULL;
                        ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
                        t = p_0(t);
                        {
                          e_39 = t;
                          j_36 :
                          if(match_cons(e_39, sym_Fun_2))
                            {
                              f_39 = ATgetArgument(e_39, 0);
                              g_39 = ATgetArgument(e_39, 1);
                              {
                                ATerm h_39 = NULL;
                                if(((m_36 != NULL) && (m_36 != f_39)))
                                  _fail(f_39);
                                else
                                  m_36 = f_39;
                                {
                                  if(((d_39 != NULL) && (d_39 != g_39)))
                                    _fail(g_39);
                                  else
                                    d_39 = g_39;
                                  {
                                    ATerm i_39 = NULL;
                                    t = not_null(n_36);
                                    {
                                      t = length_0(t);
                                      {
                                        i_39 = t;
                                        if(((h_39 != NULL) && (h_39 != i_39)))
                                          _fail(i_39);
                                        else
                                          h_39 = i_39;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_39), not_null(d_39));
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
                        t = not_null(n_36);
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
ATerm ConsTransition_1 (ATerm t, ATerm m_137 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  t_40 = t;
  q_40 :
  if(match_cons(t_40, sym_Row_3))
    {
      u_40 = ATgetArgument(t_40, 0);
      z_40 = ATgetArgument(t_40, 1);
      a_41 = ATgetArgument(t_40, 2);
      r_40 :
      if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
        {
          v_40 = ATgetFirst((ATermList) u_40);
          y_40 = (ATerm) ATgetNext((ATermList) u_40);
          s_40 :
          if(match_cons(v_40, sym_As_2))
            {
              w_40 = ATgetArgument(v_40, 0);
              x_40 = ATgetArgument(v_40, 1);
              {
                ATerm f_41 = NULL,h_41 = NULL;
                ATerm w_12;
                w_12 = t;
                {
                  ATerm g_41 = NULL;
                  t = not_null(x_40);
                  {
                    t = m_137(t);
                    {
                      g_41 = t;
                      if(((f_41 != NULL) && (f_41 != g_41)))
                        _fail(g_41);
                      else
                        f_41 = g_41;
                    }
                  }
                }
                t = w_12;
                {
                  ATerm i_41 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_41), not_null(z_40));
                  {
                    t = conc_0(t);
                    {
                      i_41 = t;
                      if(((h_41 != NULL) && (h_41 != i_41)))
                        _fail(i_41);
                      else
                        h_41 = i_41;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(y_40), not_null(h_41), not_null(a_41));
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
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  q_41 = t;
  o_41 :
  if(match_cons(q_41, sym__2))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      p_41 :
      if(match_cons(s_41, sym__2))
        {
          t_41 = ATgetArgument(s_41, 0);
          u_41 = ATgetArgument(s_41, 1);
          {
            ATerm y_41 = NULL;
            ATerm z_41 = NULL;
            t = not_null(r_41);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(t_41);
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = not_null(u_41);
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
                z_41 = t;
                if(((y_41 != NULL) && (y_41 != z_41)))
                  _fail(z_41);
                else
                  y_41 = z_41;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(t_41), not_null(u_41), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(y_41)));
          }
        }
      else
        {
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
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  f_42 = t;
  d_42 :
  if(match_cons(f_42, sym__2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      e_42 :
      if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
        {
          i_42 = ATgetFirst((ATermList) h_42);
          j_42 = (ATerm) ATgetNext((ATermList) h_42);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_42), not_null(i_42)), (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(j_42)));
        }
      else
        {
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
  ATerm w_42 = NULL,x_42 = NULL,h_43 = NULL;
  w_42 = t;
  u_42 :
  if(match_cons(w_42, sym__2))
    {
      x_42 = ATgetArgument(w_42, 0);
      h_43 = ATgetArgument(w_42, 1);
      v_42 :
      if(((ATgetType(h_43) == AT_LIST) && ATisEmpty(h_43)))
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
ATerm rzip_1 (ATerm t, ATerm f_114 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, f_114);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  m_43 :
  if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
    {
      t_43 = ATgetFirst((ATermList) s_43);
      u_43 = (ATerm) ATgetNext((ATermList) s_43);
      {
        ATerm g_44 = NULL;
        ATerm i_44 = NULL;
        t = not_null(u_43);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm x_12 = t;
            if((PushChoice() == 0))
              {
                ATerm h_44 = NULL;
                h_44 = t;
                if(((t_43 != NULL) && (t_43 != h_44)))
                  _fail(h_44);
                else
                  t_43 = h_44;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_12;
              }
            return(t);
          }
          t = filter_1(t, y_1);
          {
            i_44 = t;
            if(((g_44 != NULL) && (g_44 != i_44)))
              _fail(i_44);
            else
              g_44 = i_44;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_44)), not_null(t_43));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm n_116 (ATerm))
{
  ATerm m_44 (ATerm t)
  {
    t = n_116(t);
    {
      ATerm y_12 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = y_12;
          t = Cons_2(t, _id, m_44);
        }
    }
    return(t);
  }
  t = m_44(t);
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
    ATerm l_45 = NULL,m_45 = NULL,l_46 = NULL,m_46 = NULL;
    l_45 = t;
    j_45 :
    if(match_cons(l_45, sym_As_2))
      {
        m_45 = ATgetArgument(l_45, 0);
        m_46 = ATgetArgument(l_45, 1);
        k_45 :
        if(match_cons(m_45, sym_Off_1))
          {
            l_46 = ATgetArgument(m_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_46));
          }
        else
          {
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
    t = term_q_12;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  a_47 = t;
  w_46 :
  if(match_cons(a_47, sym_Row_3))
    {
      b_47 = ATgetArgument(a_47, 0);
      j_47 = ATgetArgument(a_47, 1);
      k_47 = ATgetArgument(a_47, 2);
      x_46 :
      if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
        {
          c_47 = ATgetFirst((ATermList) b_47);
          i_47 = (ATerm) ATgetNext((ATermList) b_47);
          y_46 :
          if(match_cons(c_47, sym_As_2))
            {
              d_47 = ATgetArgument(c_47, 0);
              f_47 = ATgetArgument(c_47, 1);
              z_46 :
              if(match_cons(f_47, sym_Str_1))
                {
                  g_47 = ATgetArgument(f_47, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(g_47)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(f_47, sym_Real_1))
                    {
                      g_47 = ATgetArgument(f_47, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(g_47)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(f_47, sym_Int_1))
                        {
                          g_47 = ATgetArgument(f_47, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(g_47)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(f_47, sym_Op_2))
                            {
                              g_47 = ATgetArgument(f_47, 0);
                              h_47 = ATgetArgument(f_47, 1);
                              {
                                ATerm q_47 = NULL,s_47 = NULL;
                                ATerm h_13;
                                h_13 = t;
                                {
                                  ATerm r_47 = NULL;
                                  t = not_null(h_47);
                                  {
                                    t = length_0(t);
                                    {
                                      r_47 = t;
                                      if(((q_47 != NULL) && (q_47 != r_47)))
                                        _fail(r_47);
                                      else
                                        q_47 = r_47;
                                    }
                                  }
                                }
                                t = h_13;
                                {
                                  ATerm v_47 = NULL;
                                  t = not_null(h_47);
                                  {
                                    t = offsets_0(t);
                                    {
                                      v_47 = t;
                                      if(((s_47 != NULL) && (s_47 != v_47)))
                                        _fail(v_47);
                                      else
                                        s_47 = v_47;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(g_47), not_null(q_47)), not_null(s_47));
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
ATerm filter_1 (ATerm t, ATerm h_121 (ATerm))
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
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
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, h_121);
              return(t);
            }
            t = Cons_2(t, h_121, d_2);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
              e_48 = t;
              d_48 :
              if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
                {
                  f_48 = ATgetFirst((ATermList) e_48);
                  g_48 = (ATerm) ATgetNext((ATermList) e_48);
                  {
                    t = not_null(g_48);
                    t = filter_1(t, h_121);
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
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
      q_48 = t;
      k_48 :
      if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
        {
          r_48 = ATgetFirst((ATermList) q_48);
          a_49 = (ATerm) ATgetNext((ATermList) q_48);
          l_48 :
          if(match_cons(r_48, sym_Row_3))
            {
              s_48 = ATgetArgument(r_48, 0);
              y_48 = ATgetArgument(r_48, 1);
              z_48 = ATgetArgument(r_48, 2);
              m_48 :
              if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
                {
                  t_48 = ATgetFirst((ATermList) s_48);
                  x_48 = (ATerm) ATgetNext((ATermList) s_48);
                  n_48 :
                  if(match_cons(t_48, sym_As_2))
                    {
                      u_48 = ATgetArgument(t_48, 0);
                      w_48 = ATgetArgument(t_48, 1);
                      o_48 :
                      if(match_cons(u_48, sym_Off_1))
                        {
                          v_48 = ATgetArgument(u_48, 0);
                          t = not_null(v_48);
                        }
                      else
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
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        t = explode_string_0(t);
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_49 (ATerm t)
              {
                ATerm v_13 = t;
                int w_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, e_49);
                    ;
                    LocalPopChoice(w_13);
                  }
                else
                  {
                    t = v_13;
                    {
                      ATerm e_2 (ATerm t)
                      {
                        ATerm c_49 = NULL;
                        c_49 = t;
                        p_48 :
                        if(!(match_int(c_49, 47)))
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
              t = e_49(t);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
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
  ATerm m_49 = NULL,n_49 = NULL;
  m_49 = t;
  l_49 :
  if(match_cons(m_49, sym_Matrix_1))
    {
      n_49 = ATgetArgument(m_49, 0);
      {
        ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
        ATerm u_49 = NULL;
        t = not_null(n_49);
        {
          ATerm v_49 = NULL;
          t = get_path_0(t);
          {
            u_49 = t;
            {
              if(((p_49 != NULL) && (p_49 != u_49)))
                _fail(u_49);
              else
                p_49 = u_49;
              {
                t = not_null(n_49);
                {
                  ATerm w_49 = NULL;
                  t = outedges_0(t);
                  {
                    v_49 = t;
                    {
                      if(((q_49 != NULL) && (q_49 != v_49)))
                        _fail(v_49);
                      else
                        q_49 = v_49;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_49), not_null(q_49));
                        {
                          ATerm x_49 = NULL;
                          t = transitions_0(t);
                          {
                            w_49 = t;
                            {
                              if(((r_49 != NULL) && (r_49 != w_49)))
                                _fail(w_49);
                              else
                                r_49 = w_49;
                              {
                                t = not_null(n_49);
                                {
                                  ATerm y_49 = NULL;
                                  t = default_state_0(t);
                                  {
                                    x_49 = t;
                                    {
                                      if(((s_49 != NULL) && (s_49 != x_49)))
                                        _fail(x_49);
                                      else
                                        s_49 = x_49;
                                      {
                                        t = new_0(t);
                                        {
                                          y_49 = t;
                                          {
                                            if(((t_49 != NULL) && (t_49 != y_49)))
                                              _fail(y_49);
                                            else
                                              t_49 = y_49;
                                            {
                                              ATerm a_14;
                                              a_14 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, not_null(n_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_14, not_null(t_49)));
                                                {
                                                  ATerm g_2 (ATerm t)
                                                  {
                                                    t = term_e_14;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, g_2);
                                                }
                                              }
                                              t = a_14;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(t_49), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_49)), not_null(r_49), not_null(s_49));
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
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  e_51 = t;
  c_51 :
  if(match_cons(e_51, sym_Row_3))
    {
      f_51 = ATgetArgument(e_51, 0);
      g_51 = ATgetArgument(e_51, 1);
      j_51 = ATgetArgument(e_51, 2);
      d_51 :
      if(((ATgetType(g_51) == AT_LIST) && !(ATisEmpty(g_51))))
        {
          h_51 = ATgetFirst((ATermList) g_51);
          i_51 = (ATerm) ATgetNext((ATermList) g_51);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(f_51)), not_null(h_51)), not_null(i_51), not_null(j_51));
        }
      else
        {
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
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  r_51 :
  if(match_cons(x_51, sym_Matrix_1))
    {
      y_51 = ATgetArgument(x_51, 0);
      {
        ATerm a_52 = NULL;
        ATerm b_52 = NULL;
        t = not_null(y_51);
        {
          ATerm f_14 = t;
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
                      ATerm g_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = g_14;
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
              t = f_14;
            }
          {
            t = not_null(y_51);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                b_52 = t;
                if(((a_52 != NULL) && (a_52 != b_52)))
                  _fail(b_52);
                else
                  a_52 = b_52;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(a_52));
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
  ATerm i_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_cons(i_52, sym_Wld_0))
    {
      ATerm k_52 = NULL,r_52 = NULL;
      ATerm h_14;
      h_14 = t;
      {
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(i_52));
        {
          q_52 = t;
          if(((k_52 != NULL) && (k_52 != q_52)))
            _fail(q_52);
          else
            k_52 = q_52;
        }
      }
      t = h_14;
      {
        ATerm s_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_52));
        {
          s_52 = t;
          if(((r_52 != NULL) && (r_52 != s_52)))
            _fail(s_52);
          else
            r_52 = s_52;
        }
        t = not_null(r_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Row_3 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Row_3))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      p_53 = ATgetArgument(m_53, 2);
      {
        ATerm b_54 = NULL,h_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(n_53);
          {
            ATerm n_54 = NULL;
            t = z_99(t);
            {
              h_54 = t;
              {
                t = not_null(o_53);
                {
                  ATerm p_54 = NULL;
                  t = a_100(t);
                  {
                    n_54 = t;
                    {
                      t = not_null(p_53);
                      {
                        ATerm r_54 = NULL;
                        t = b_100(t);
                        {
                          p_54 = t;
                          {
                            ATerm s_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(h_54), not_null(n_54), not_null(p_54)), not_null(b_54));
                            {
                              s_54 = t;
                              if(((r_54 != NULL) && (r_54 != s_54)))
                                _fail(s_54);
                              else
                                r_54 = s_54;
                            }
                            t = not_null(r_54);
                          }
                        }
                      }
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
  ATerm c_55 = NULL,d_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym_Matrix_1))
    {
      d_55 = ATgetArgument(c_55, 0);
      {
        ATerm f_55 = NULL;
        ATerm g_55 = NULL;
        t = not_null(d_55);
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
            g_55 = t;
            if(((f_55 != NULL) && (f_55 != g_55)))
              _fail(g_55);
            else
              f_55 = g_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_55));
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
  ATerm q_55 = NULL,r_55 = NULL;
  q_55 = t;
  p_55 :
  if(match_cons(q_55, sym_Matrix_1))
    {
      r_55 = ATgetArgument(q_55, 0);
      {
        ATerm t_55 = NULL;
        ATerm z_55 = NULL;
        t = not_null(r_55);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
            u_55 = t;
            l_55 :
            if(match_cons(u_55, sym_Row_3))
              {
                v_55 = ATgetArgument(u_55, 0);
                w_55 = ATgetArgument(u_55, 1);
                x_55 = ATgetArgument(u_55, 2);
                m_55 :
                if(((ATgetType(v_55) == AT_LIST) && ATisEmpty(v_55)))
                  {
                    n_55 :
                    if(((ATgetType(w_55) == AT_LIST) && ATisEmpty(w_55)))
                      {
                        t = not_null(x_55);
                      }
                    else
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
            z_55 = t;
            if(((t_55 != NULL) && (t_55 != z_55)))
              _fail(z_55);
            else
              t_55 = z_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_55));
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
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm q_14 = t;
              int r_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  ;
                  LocalPopChoice(r_14);
                }
              else
                {
                  t = q_14;
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  e_56 :
  if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
    {
      g_56 = ATgetFirst((ATermList) f_56);
      h_56 = (ATerm) ATgetNext((ATermList) f_56);
      t = not_null(h_56);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  n_56 :
  if(match_cons(q_56, sym__2))
    {
      r_56 = ATgetArgument(q_56, 0);
      s_56 = ATgetArgument(q_56, 1);
      {
        ATerm s_14;
        s_14 = t;
        {
          ATerm v_56 = NULL;
          ATerm w_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_56), not_null(s_56));
          {
            ATerm w_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(y_14);
              }
            else
              {
                t = w_14;
                t = (ATerm) ATempty;
              }
            {
              w_56 = t;
              if(((v_56 != NULL) && (v_56 != w_56)))
                _fail(w_56);
              else
                v_56 = w_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_56), not_null(s_56), not_null(v_56));
            t = table_put_0(t);
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_121 (ATerm))
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm g_57 = NULL;
    ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
    t = a_121(t);
    {
      g_57 = t;
      {
        if(((f_57 != NULL) && (f_57 != g_57)))
          _fail(g_57);
        else
          f_57 = g_57;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), term_u_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_57 = t;
            c_57 :
            if(((ATgetType(h_57) == AT_LIST) && !(ATisEmpty(h_57))))
              {
                i_57 = ATgetFirst((ATermList) h_57);
                j_57 = (ATerm) ATgetNext((ATermList) h_57);
                {
                  if(((e_57 != NULL) && (e_57 != i_57)))
                    _fail(i_57);
                  else
                    e_57 = i_57;
                  {
                    if(((d_57 != NULL) && (d_57 != j_57)))
                      _fail(j_57);
                    else
                      d_57 = j_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_57), term_u_12, not_null(d_57));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_57);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm k_57 = NULL;
                              k_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), not_null(k_57));
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
  t = b_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm m_112 (ATerm), ATerm n_112 (ATerm))
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_112(t);
      t = n_112(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        t = n_112(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_120 (ATerm))
{
  ATerm t_57 = NULL;
  ATerm g_15;
  g_15 = t;
  {
    ATerm f_58 = NULL;
    ATerm g_58 = NULL;
    t = z_120(t);
    {
      f_58 = t;
      {
        if(((t_57 != NULL) && (t_57 != f_58)))
          _fail(f_58);
        else
          t_57 = f_58;
        {
          ATerm h_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_57), term_u_12);
          {
            ATerm k_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_15);
              }
            else
              {
                t = k_15;
                t = (ATerm) ATempty;
              }
            {
              h_58 = t;
              if(((g_58 != NULL) && (g_58 != h_58)))
                _fail(h_58);
              else
                g_58 = h_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_57), term_u_12, (ATerm) ATinsert(CheckATermList(not_null(g_58)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm b_121 (ATerm), ATerm c_121 (ATerm))
{
  t = begin_scope_1(t, b_121);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, b_121);
      return(t);
    }
    t = restore_always_2(t, c_121, q_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_e_14;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm m_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          ;
          LocalPopChoice(q_15);
        }
      else
        {
          t = m_15;
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
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
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  g_59 :
  if(match_cons(h_59, sym_Cong_2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      {
        ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,g_61 = NULL,i_61 = NULL,n_61 = NULL;
        ATerm x_15;
        x_15 = t;
        {
          ATerm s_59 = NULL;
          t = not_null(j_59);
          {
            ATerm c_60 = NULL;
            t = map_1(t, new_0);
            {
              s_59 = t;
              {
                if(((p_59 != NULL) && (p_59 != s_59)))
                  _fail(s_59);
                else
                  p_59 = s_59;
                {
                  t = not_null(p_59);
                  {
                    ATerm d_60 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      ATerm a_60 = NULL;
                      ATerm b_60 = NULL;
                      b_60 = t;
                      if(((a_60 != NULL) && (a_60 != b_60)))
                        _fail(b_60);
                      else
                        a_60 = b_60;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_60));
                      return(t);
                    }
                    t = map_1(t, u_2);
                    {
                      c_60 = t;
                      {
                        if(((m_59 != NULL) && (m_59 != c_60)))
                          _fail(c_60);
                        else
                          m_59 = c_60;
                        {
                          ATerm e_60 = NULL;
                          t = new_0(t);
                          {
                            d_60 = t;
                            {
                              if(((n_59 != NULL) && (n_59 != d_60)))
                                _fail(d_60);
                              else
                                n_59 = d_60;
                              {
                                t = not_null(j_59);
                                {
                                  ATerm h_60 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    e_60 = t;
                                    {
                                      if(((q_59 != NULL) && (q_59 != e_60)))
                                        _fail(e_60);
                                      else
                                        q_59 = e_60;
                                      {
                                        t = not_null(q_59);
                                        {
                                          ATerm i_60 = NULL,f_61 = NULL;
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm f_60 = NULL;
                                            ATerm g_60 = NULL;
                                            g_60 = t;
                                            if(((f_60 != NULL) && (f_60 != g_60)))
                                              _fail(g_60);
                                            else
                                              f_60 = g_60;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_60));
                                            return(t);
                                          }
                                          t = map_1(t, v_2);
                                          {
                                            h_60 = t;
                                            {
                                              if(((o_59 != NULL) && (o_59 != h_60)))
                                                _fail(h_60);
                                              else
                                                o_59 = h_60;
                                              {
                                                ATerm j_60 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(q_59));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    j_60 = t;
                                                    if(((i_60 != NULL) && (i_60 != j_60)))
                                                      _fail(j_60);
                                                    else
                                                      i_60 = j_60;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_60), not_null(j_59));
                                                  {
                                                    ATerm w_2 (ATerm t)
                                                    {
                                                      ATerm k_60 = NULL,r_60 = NULL,x_60 = NULL,a_61 = NULL,b_61 = NULL;
                                                      k_60 = t;
                                                      a_59 :
                                                      if(match_cons(k_60, sym__2))
                                                        {
                                                          r_60 = ATgetArgument(k_60, 0);
                                                          b_61 = ATgetArgument(k_60, 1);
                                                          b_59 :
                                                          if(match_cons(r_60, sym__2))
                                                            {
                                                              x_60 = ATgetArgument(r_60, 0);
                                                              a_61 = ATgetArgument(r_60, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_61)))));
                                                            }
                                                          else
                                                            {
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
                                                      f_61 = t;
                                                      if(((r_59 != NULL) && (r_59 != f_61)))
                                                        _fail(f_61);
                                                      else
                                                        r_59 = f_61;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_15;
        {
          ATerm y_15;
          y_15 = t;
          {
            ATerm h_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(q_59));
            {
              t = conc_0(t);
              {
                h_61 = t;
                if(((g_61 != NULL) && (g_61 != h_61)))
                  _fail(h_61);
                else
                  g_61 = h_61;
              }
            }
          }
          t = y_15;
          {
            ATerm z_15;
            z_15 = t;
            {
              ATerm m_61 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_59), not_null(m_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_59))));
              {
                t = Mapp2_0(t);
                {
                  m_61 = t;
                  if(((i_61 != NULL) && (i_61 != m_61)))
                    _fail(m_61);
                  else
                    i_61 = m_61;
                }
              }
            }
            t = z_15;
            {
              ATerm o_61 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_59), not_null(o_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_59))));
              {
                t = Bapp2_0(t);
                {
                  o_61 = t;
                  if(((n_61 != NULL) && (n_61 != o_61)))
                    _fail(o_61);
                  else
                    n_61 = o_61;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(g_61)), not_null(n_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_59)), not_null(n_61))));
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
  ATerm u_62 = NULL,v_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym_Build_1))
    {
      v_62 = ATgetArgument(u_62, 0);
      {
        ATerm b_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
            ATerm b_63 = NULL;
            ATerm f_63 = NULL;
            t = new_0(t);
            {
              b_63 = t;
              {
                if(((z_62 != NULL) && (z_62 != b_63)))
                  _fail(b_63);
                else
                  z_62 = b_63;
                {
                  t = not_null(v_62);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
                      c_63 = t;
                      j_62 :
                      if(match_cons(c_63, sym_Anno_2))
                        {
                          d_63 = ATgetArgument(c_63, 0);
                          e_63 = ATgetArgument(c_63, 1);
                          {
                            if(((x_62 != NULL) && (x_62 != d_63)))
                              _fail(d_63);
                            else
                              x_62 = d_63;
                            {
                              if(((y_62 != NULL) && (y_62 != e_63)))
                                _fail(e_63);
                              else
                                y_62 = e_63;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_62));
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
                      f_63 = t;
                      if(((a_63 != NULL) && (a_63 != f_63)))
                        _fail(f_63);
                      else
                        a_63 = f_63;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_62)), not_null(x_62))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_63))));
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = b_16;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
                  ATerm k_63 = NULL;
                  ATerm n_63 = NULL;
                  t = new_0(t);
                  {
                    k_63 = t;
                    {
                      if(((i_63 != NULL) && (i_63 != k_63)))
                        _fail(k_63);
                      else
                        i_63 = k_63;
                      {
                        t = not_null(v_62);
                        {
                          ATerm y_2 (ATerm t)
                          {
                            ATerm l_63 = NULL,m_63 = NULL;
                            l_63 = t;
                            n_62 :
                            if(match_cons(l_63, sym_RootApp_1))
                              {
                                m_63 = ATgetArgument(l_63, 0);
                                {
                                  if(((h_63 != NULL) && (h_63 != m_63)))
                                    _fail(m_63);
                                  else
                                    h_63 = m_63;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_63));
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
                            n_63 = t;
                            if(((j_63 != NULL) && (j_63 != n_63)))
                              _fail(n_63);
                            else
                              j_63 = n_63;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_63)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_63))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_63))));
                  ;
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  {
                    ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
                    ATerm t_63 = NULL;
                    ATerm x_63 = NULL;
                    t = new_0(t);
                    {
                      t_63 = t;
                      {
                        if(((r_63 != NULL) && (r_63 != t_63)))
                          _fail(t_63);
                        else
                          r_63 = t_63;
                        {
                          t = not_null(v_62);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
                              u_63 = t;
                              r_62 :
                              if(match_cons(u_63, sym_App_2))
                                {
                                  v_63 = ATgetArgument(u_63, 0);
                                  w_63 = ATgetArgument(u_63, 1);
                                  {
                                    if(((p_63 != NULL) && (p_63 != v_63)))
                                      _fail(v_63);
                                    else
                                      p_63 = v_63;
                                    {
                                      if(((q_63 != NULL) && (q_63 != w_63)))
                                        _fail(w_63);
                                      else
                                        q_63 = w_63;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_63));
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
                              x_63 = t;
                              if(((s_63 != NULL) && (s_63 != x_63)))
                                _fail(x_63);
                              else
                                s_63 = x_63;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_63)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_63), not_null(q_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_63)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_63))));
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
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym__2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_64)), not_null(n_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  w_64 = t;
  t_64 :
  if(match_cons(w_64, sym__2))
    {
      x_64 = ATgetArgument(w_64, 0);
      a_65 = ATgetArgument(w_64, 1);
      u_64 :
      if(((ATgetType(x_64) == AT_LIST) && !(ATisEmpty(x_64))))
        {
          y_64 = ATgetFirst((ATermList) x_64);
          z_64 = (ATerm) ATgetNext((ATermList) x_64);
          v_64 :
          if(((ATgetType(a_65) == AT_LIST) && !(ATisEmpty(a_65))))
            {
              b_65 = ATgetFirst((ATermList) a_65);
              c_65 = (ATerm) ATgetNext((ATermList) a_65);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_64), not_null(b_65)), (ATerm) ATmakeAppl(sym__2, not_null(z_64), not_null(c_65)));
            }
          else
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
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  j_65 :
  if(match_cons(m_65, sym__2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      k_65 :
      if(((ATgetType(n_65) == AT_LIST) && ATisEmpty(n_65)))
        {
          l_65 :
          if(((ATgetType(o_65) == AT_LIST) && ATisEmpty(o_65)))
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
ATerm zip_1 (ATerm t, ATerm w_113 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_113);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  r_66 = t;
  h_66 :
  if(match_cons(r_66, sym_Call_2))
    {
      s_66 = ATgetArgument(r_66, 0);
      u_66 = ATgetArgument(r_66, 1);
      i_66 :
      if(match_cons(s_66, sym_SVar_1))
        {
          t_66 = ATgetArgument(s_66, 0);
          j_66 :
          if(match_string(t_66, "Anno_Cong__"))
            {
              k_66 :
              if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
                {
                  v_66 = ATgetFirst((ATermList) u_66);
                  y_66 = (ATerm) ATgetNext((ATermList) u_66);
                  l_66 :
                  if(match_cons(v_66, sym_Cong_2))
                    {
                      w_66 = ATgetArgument(v_66, 0);
                      x_66 = ATgetArgument(v_66, 1);
                      m_66 :
                      if(((ATgetType(y_66) == AT_LIST) && !(ATisEmpty(y_66))))
                        {
                          z_66 = ATgetFirst((ATermList) y_66);
                          a_67 = (ATerm) ATgetNext((ATermList) y_66);
                          q_66 :
                          if(((ATgetType(a_67) == AT_LIST) && ATisEmpty(a_67)))
                            {
                              {
                                ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,l_68 = NULL,n_68 = NULL,p_68 = NULL;
                                ATerm n_16;
                                n_16 = t;
                                {
                                  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(x_66)), not_null(z_66));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      o_67 = t;
                                      d_66 :
                                      if(((ATgetType(o_67) == AT_LIST) && !(ATisEmpty(o_67))))
                                        {
                                          p_67 = ATgetFirst((ATermList) o_67);
                                          q_67 = (ATerm) ATgetNext((ATermList) o_67);
                                          {
                                            ATerm t_67 = NULL;
                                            if(((h_67 != NULL) && (h_67 != p_67)))
                                              _fail(p_67);
                                            else
                                              h_67 = p_67;
                                            {
                                              if(((l_67 != NULL) && (l_67 != q_67)))
                                                _fail(q_67);
                                              else
                                                l_67 = q_67;
                                              {
                                                ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
                                                ATerm a_3 (ATerm t)
                                                {
                                                  ATerm r_67 = NULL;
                                                  ATerm s_67 = NULL;
                                                  s_67 = t;
                                                  if(((r_67 != NULL) && (r_67 != s_67)))
                                                    _fail(s_67);
                                                  else
                                                    r_67 = s_67;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_67));
                                                  return(t);
                                                }
                                                t = map_1(t, a_3);
                                                {
                                                  t_67 = t;
                                                  {
                                                    if(((i_67 != NULL) && (i_67 != t_67)))
                                                      _fail(t_67);
                                                    else
                                                      i_67 = t_67;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(x_66)), not_null(z_66));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          u_67 = t;
                                                          c_66 :
                                                          if(((ATgetType(u_67) == AT_LIST) && !(ATisEmpty(u_67))))
                                                            {
                                                              v_67 = ATgetFirst((ATermList) u_67);
                                                              w_67 = (ATerm) ATgetNext((ATermList) u_67);
                                                              {
                                                                ATerm z_67 = NULL;
                                                                if(((j_67 != NULL) && (j_67 != v_67)))
                                                                  _fail(v_67);
                                                                else
                                                                  j_67 = v_67;
                                                                {
                                                                  if(((m_67 != NULL) && (m_67 != w_67)))
                                                                    _fail(w_67);
                                                                  else
                                                                    m_67 = w_67;
                                                                  {
                                                                    ATerm a_68 = NULL,k_68 = NULL;
                                                                    ATerm b_3 (ATerm t)
                                                                    {
                                                                      ATerm x_67 = NULL;
                                                                      ATerm y_67 = NULL;
                                                                      y_67 = t;
                                                                      if(((x_67 != NULL) && (x_67 != y_67)))
                                                                        _fail(y_67);
                                                                      else
                                                                        x_67 = y_67;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_67));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, b_3);
                                                                    {
                                                                      z_67 = t;
                                                                      {
                                                                        if(((k_67 != NULL) && (k_67 != z_67)))
                                                                          _fail(z_67);
                                                                        else
                                                                          k_67 = z_67;
                                                                        {
                                                                          ATerm b_68 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_67), not_null(m_67));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              b_68 = t;
                                                                              if(((a_68 != NULL) && (a_68 != b_68)))
                                                                                _fail(b_68);
                                                                              else
                                                                                a_68 = b_68;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_68), (ATerm) ATinsert(CheckATermList(not_null(x_66)), not_null(z_66)));
                                                                            {
                                                                              ATerm c_3 (ATerm t)
                                                                              {
                                                                                ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
                                                                                c_68 = t;
                                                                                z_65 :
                                                                                if(match_cons(c_68, sym__2))
                                                                                  {
                                                                                    d_68 = ATgetArgument(c_68, 0);
                                                                                    g_68 = ATgetArgument(c_68, 1);
                                                                                    a_66 :
                                                                                    if(match_cons(d_68, sym__2))
                                                                                      {
                                                                                        e_68 = ATgetArgument(d_68, 0);
                                                                                        f_68 = ATgetArgument(d_68, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_68)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                k_68 = t;
                                                                                if(((n_67 != NULL) && (n_67 != k_68)))
                                                                                  _fail(k_68);
                                                                                else
                                                                                  n_67 = k_68;
                                                                              }
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
                                t = n_16;
                                {
                                  ATerm o_16;
                                  o_16 = t;
                                  {
                                    ATerm m_68 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_67), not_null(m_67));
                                    {
                                      t = conc_0(t);
                                      {
                                        m_68 = t;
                                        if(((l_68 != NULL) && (l_68 != m_68)))
                                          _fail(m_68);
                                        else
                                          l_68 = m_68;
                                      }
                                    }
                                  }
                                  t = o_16;
                                  {
                                    ATerm p_16;
                                    p_16 = t;
                                    {
                                      ATerm o_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_66), not_null(i_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_67))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          o_68 = t;
                                          if(((n_68 != NULL) && (n_68 != o_68)))
                                            _fail(o_68);
                                          else
                                            n_68 = o_68;
                                        }
                                      }
                                    }
                                    t = p_16;
                                    {
                                      ATerm q_68 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_66), not_null(k_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          q_68 = t;
                                          if(((p_68 != NULL) && (p_68 != q_68)))
                                            _fail(q_68);
                                          else
                                            p_68 = q_68;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(l_68)), not_null(j_67)), not_null(h_67)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_67)), not_null(p_68))));
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
ATerm As_2 (ATerm t, ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  j_69 :
  if(match_cons(k_69, sym_As_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      {
        ATerm q_69 = NULL,s_69 = NULL;
        ATerm r_69 = NULL;
        t = SSLgetAnnotations(not_null(k_69));
        {
          r_69 = t;
          if(((q_69 != NULL) && (q_69 != r_69)))
            _fail(r_69);
          else
            q_69 = r_69;
        }
        {
          t = not_null(l_69);
          {
            ATerm u_69 = NULL;
            t = u_94(t);
            {
              s_69 = t;
              {
                t = not_null(m_69);
                {
                  ATerm w_69 = NULL;
                  t = v_94(t);
                  {
                    u_69 = t;
                    {
                      ATerm x_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(s_69), not_null(u_69)), not_null(q_69));
                      {
                        x_69 = t;
                        if(((w_69 != NULL) && (w_69 != x_69)))
                          _fail(x_69);
                        else
                          w_69 = x_69;
                      }
                      t = not_null(w_69);
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
ATerm Prim_2 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  j_70 = t;
  i_70 :
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
            t = j_98(t);
            {
              r_70 = t;
              {
                t = not_null(l_70);
                {
                  ATerm v_70 = NULL;
                  t = k_98(t);
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
ATerm Explode_2 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym_Explode_2))
    {
      p_71 = ATgetArgument(o_71, 0);
      q_71 = ATgetArgument(o_71, 1);
      {
        ATerm u_71 = NULL,w_71 = NULL;
        ATerm v_71 = NULL;
        t = SSLgetAnnotations(not_null(o_71));
        {
          v_71 = t;
          if(((u_71 != NULL) && (u_71 != v_71)))
            _fail(v_71);
          else
            u_71 = v_71;
        }
        {
          t = not_null(p_71);
          {
            ATerm y_71 = NULL;
            t = n_94(t);
            {
              w_71 = t;
              {
                t = not_null(q_71);
                {
                  ATerm a_72 = NULL;
                  t = o_94(t);
                  {
                    y_71 = t;
                    {
                      ATerm b_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(w_71), not_null(y_71)), not_null(u_71));
                      {
                        b_72 = t;
                        if(((a_72 != NULL) && (a_72 != b_72)))
                          _fail(b_72);
                        else
                          a_72 = b_72;
                      }
                      t = not_null(a_72);
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
ATerm Op_2 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm))
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
            t = l_94(t);
            {
              v_72 = t;
              {
                t = not_null(p_72);
                {
                  ATerm z_72 = NULL;
                  t = m_94(t);
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
ATerm pat_td_1 (ATerm t, ATerm m_107 (ATerm))
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_107(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm u_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                t = pat_td_1(t, m_107);
                return(t);
              }
              t = fetch_1(t, e_3);
              return(t);
            }
            t = Op_2(t, _id, d_3);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = u_16;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = pat_td_1(t, m_107);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_3);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  {
                    ATerm i_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_3 (ATerm t)
                        {
                          t = pat_td_1(t, m_107);
                          return(t);
                        }
                        t = Explode_2(t, g_3, _id);
                        ;
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm u_17 = t;
                          int v_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = pat_td_1(t, m_107);
                                  return(t);
                                }
                                t = fetch_1(t, i_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, h_3);
                              ;
                              LocalPopChoice(v_17);
                            }
                          else
                            {
                              t = u_17;
                              {
                                ATerm j_3 (ATerm t)
                                {
                                  t = pat_td_1(t, m_107);
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
  ATerm w_73 = NULL,x_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym_Match_1))
    {
      x_73 = ATgetArgument(w_73, 0);
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
            ATerm d_74 = NULL;
            ATerm h_74 = NULL;
            t = new_0(t);
            {
              d_74 = t;
              {
                if(((b_74 != NULL) && (b_74 != d_74)))
                  _fail(d_74);
                else
                  b_74 = d_74;
                {
                  t = not_null(x_73);
                  {
                    ATerm k_3 (ATerm t)
                    {
                      ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
                      e_74 = t;
                      l_73 :
                      if(match_cons(e_74, sym_Anno_2))
                        {
                          f_74 = ATgetArgument(e_74, 0);
                          g_74 = ATgetArgument(e_74, 1);
                          {
                            if(((z_73 != NULL) && (z_73 != f_74)))
                              _fail(f_74);
                            else
                              z_73 = f_74;
                            {
                              if(((a_74 != NULL) && (a_74 != g_74)))
                                _fail(g_74);
                              else
                                a_74 = g_74;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_74)), not_null(z_73));
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
                      h_74 = t;
                      if(((c_74 != NULL) && (c_74 != h_74)))
                        _fail(h_74);
                      else
                        c_74 = h_74;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_74)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_74)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_74))))));
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm z_17 = t;
              int a_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_74 = NULL,k_74 = NULL,p_74 = NULL;
                  ATerm q_74 = NULL;
                  ATerm y_74 = NULL;
                  t = new_0(t);
                  {
                    q_74 = t;
                    {
                      if(((k_74 != NULL) && (k_74 != q_74)))
                        _fail(q_74);
                      else
                        k_74 = q_74;
                      {
                        t = not_null(x_73);
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm w_74 = NULL,x_74 = NULL;
                            w_74 = t;
                            p_73 :
                            if(match_cons(w_74, sym_RootApp_1))
                              {
                                x_74 = ATgetArgument(w_74, 0);
                                {
                                  if(((j_74 != NULL) && (j_74 != x_74)))
                                    _fail(x_74);
                                  else
                                    j_74 = x_74;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_74));
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
                            y_74 = t;
                            if(((p_74 != NULL) && (p_74 != y_74)))
                              _fail(y_74);
                            else
                              p_74 = y_74;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_74)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_74))), not_null(j_74))));
                  ;
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = z_17;
                  {
                    ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
                    ATerm e_75 = NULL;
                    ATerm i_75 = NULL;
                    t = new_0(t);
                    {
                      e_75 = t;
                      {
                        if(((c_75 != NULL) && (c_75 != e_75)))
                          _fail(e_75);
                        else
                          c_75 = e_75;
                        {
                          t = not_null(x_73);
                          {
                            ATerm m_3 (ATerm t)
                            {
                              ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
                              f_75 = t;
                              t_73 :
                              if(match_cons(f_75, sym_App_2))
                                {
                                  g_75 = ATgetArgument(f_75, 0);
                                  h_75 = ATgetArgument(f_75, 1);
                                  {
                                    if(((b_75 != NULL) && (b_75 != g_75)))
                                      _fail(g_75);
                                    else
                                      b_75 = g_75;
                                    {
                                      if(((a_75 != NULL) && (a_75 != h_75)))
                                        _fail(h_75);
                                      else
                                        a_75 = h_75;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_75));
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
                              i_75 = t;
                              if(((d_75 != NULL) && (d_75 != i_75)))
                                _fail(i_75);
                              else
                                d_75 = i_75;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_75)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_75))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_75)), not_null(b_75)))));
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
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  c_76 :
  if(match_cons(i_76, sym_Cong_2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      {
        ATerm n_76 = NULL;
        ATerm r_76 = NULL;
        t = not_null(k_76);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm o_76 = NULL,p_76 = NULL;
            p_76 = t;
            a_76 :
            if(match_cons(p_76, sym_Match_1))
              {
                o_76 = ATgetArgument(p_76, 0);
                t = not_null(o_76);
              }
            else
              {
                if(match_cons(p_76, sym_Id_0))
                  {
                    t = term_v_12;
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
            r_76 = t;
            if(((n_76 != NULL) && (n_76 != r_76)))
              _fail(r_76);
            else
              n_76 = r_76;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_76), not_null(n_76)));
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
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  y_76 :
  if(match_cons(a_77, sym_Scope_2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      z_76 :
      if(((ATgetType(b_77) == AT_LIST) && ATisEmpty(b_77)))
        {
          t = not_null(c_77);
        }
      else
        {
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
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
  f_78 = t;
  l_77 :
  if(match_cons(f_78, sym_Where_1))
    {
      g_78 = ATgetArgument(f_78, 0);
      s_77 :
      if(match_cons(g_78, sym_Seq_2))
        {
          e_78 = ATgetArgument(g_78, 0);
          a_78 = ATgetArgument(g_78, 1);
          t_77 :
          if(match_cons(e_78, sym_Where_1))
            {
              z_77 = ATgetArgument(e_78, 0);
              u_77 :
              if(match_cons(a_78, sym_Seq_2))
                {
                  b_78 = ATgetArgument(a_78, 0);
                  d_78 = ATgetArgument(a_78, 1);
                  w_77 :
                  if(match_cons(b_78, sym_Build_1))
                    {
                      c_78 = ATgetArgument(b_78, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_78)), not_null(d_78))));
                    }
                  else
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
          if(match_cons(g_78, sym_Where_1))
            {
              e_78 = ATgetArgument(g_78, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_78));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(f_78, sym_Test_1))
        {
          g_78 = ATgetArgument(f_78, 0);
          x_77 :
          if(match_cons(g_78, sym_Test_1))
            {
              e_78 = ATgetArgument(g_78, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_78));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_78, sym_Not_1))
            {
              g_78 = ATgetArgument(f_78, 0);
              y_77 :
              if(match_cons(g_78, sym_Not_1))
                {
                  e_78 = ATgetArgument(g_78, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_78));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_78, sym_LChoice_2))
                {
                  g_78 = ATgetArgument(f_78, 0);
                  h_78 = ATgetArgument(f_78, 1);
                  {
                    if(((g_78 != NULL) && (g_78 != h_78)))
                      _fail(h_78);
                    else
                      g_78 = h_78;
                    t = not_null(g_78);
                  }
                }
              else
                {
                  if(match_cons(f_78, sym_Choice_2))
                    {
                      g_78 = ATgetArgument(f_78, 0);
                      h_78 = ATgetArgument(f_78, 1);
                      {
                        if(((g_78 != NULL) && (g_78 != h_78)))
                          _fail(h_78);
                        else
                          g_78 = h_78;
                        t = not_null(g_78);
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
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL;
  d_79 = t;
  z_78 :
  if(match_cons(d_79, sym_LChoice_2))
    {
      e_79 = ATgetArgument(d_79, 0);
      h_79 = ATgetArgument(d_79, 1);
      a_79 :
      if(match_cons(e_79, sym_LChoice_2))
        {
          f_79 = ATgetArgument(e_79, 0);
          g_79 = ATgetArgument(e_79, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_79), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_79), not_null(h_79)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(d_79, sym_Seq_2))
        {
          e_79 = ATgetArgument(d_79, 0);
          h_79 = ATgetArgument(d_79, 1);
          b_79 :
          if(match_cons(e_79, sym_Seq_2))
            {
              f_79 = ATgetArgument(e_79, 0);
              g_79 = ATgetArgument(e_79, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_79), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_79), not_null(h_79)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_79, sym_Choice_2))
            {
              e_79 = ATgetArgument(d_79, 0);
              h_79 = ATgetArgument(d_79, 1);
              c_79 :
              if(match_cons(e_79, sym_Choice_2))
                {
                  f_79 = ATgetArgument(e_79, 0);
                  g_79 = ATgetArgument(e_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_79), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_79), not_null(h_79)));
                }
              else
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
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
  x_80 = t;
  m_80 :
  if(match_cons(x_80, sym_Lets_2))
    {
      y_80 = ATgetArgument(x_80, 0);
      z_80 = ATgetArgument(x_80, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(y_80), not_null(z_80));
    }
  else
    {
      if(match_cons(x_80, sym_LChoices_1))
        {
          y_80 = ATgetArgument(x_80, 0);
          n_80 :
          if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
            {
              u_80 = ATgetFirst((ATermList) y_80);
              v_80 = (ATerm) ATgetNext((ATermList) y_80);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_80), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(v_80)));
            }
          else
            {
              if(((ATgetType(y_80) == AT_LIST) && ATisEmpty(y_80)))
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
          if(match_cons(x_80, sym_Choices_1))
            {
              y_80 = ATgetArgument(x_80, 0);
              o_80 :
              if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
                {
                  u_80 = ATgetFirst((ATermList) y_80);
                  v_80 = (ATerm) ATgetNext((ATermList) y_80);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_80), (ATerm) ATmakeAppl(sym_Choices_1, not_null(v_80)));
                }
              else
                {
                  if(((ATgetType(y_80) == AT_LIST) && ATisEmpty(y_80)))
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
              if(match_cons(x_80, sym_Seqs_1))
                {
                  y_80 = ATgetArgument(x_80, 0);
                  t_80 :
                  if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
                    {
                      u_80 = ATgetFirst((ATermList) y_80);
                      v_80 = (ATerm) ATgetNext((ATermList) y_80);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_80), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_80)));
                    }
                  else
                    {
                      if(((ATgetType(y_80) == AT_LIST) && ATisEmpty(y_80)))
                        {
                          t = term_k_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(x_80, sym_DefaultVarDec_1))
                    {
                      y_80 = ATgetArgument(x_80, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_80), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_18), term_p_18));
                    }
                  else
                    {
                      if(match_cons(x_80, sym_InfixApp_3))
                        {
                          y_80 = ATgetArgument(x_80, 0);
                          z_80 = ATgetArgument(x_80, 1);
                          w_80 = ATgetArgument(x_80, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_80), (ATerm) ATmakeAppl(sym_Op_2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_80)), not_null(y_80))));
                        }
                      else
                        {
                          if(match_cons(x_80, sym_BAM_3))
                            {
                              y_80 = ATgetArgument(x_80, 0);
                              z_80 = ATgetArgument(x_80, 1);
                              w_80 = ATgetArgument(x_80, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(w_80))), not_null(y_80)), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_80))));
                            }
                          else
                            {
                              if(match_cons(x_80, sym_AM_2))
                                {
                                  y_80 = ATgetArgument(x_80, 0);
                                  z_80 = ATgetArgument(x_80, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_80), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_80)));
                                }
                              else
                                {
                                  if(match_cons(x_80, sym_MA_2))
                                    {
                                      y_80 = ATgetArgument(x_80, 0);
                                      z_80 = ATgetArgument(x_80, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_80)), not_null(z_80));
                                    }
                                  else
                                    {
                                      if(match_cons(x_80, sym_BA_2))
                                        {
                                          y_80 = ATgetArgument(x_80, 0);
                                          z_80 = ATgetArgument(x_80, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_80)), not_null(y_80));
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
  ATerm n_83 = NULL,o_83 = NULL;
  n_83 = t;
  l_83 :
  if(match_cons(n_83, sym_Where_1))
    {
      o_83 = ATgetArgument(n_83, 0);
      m_83 :
      if(match_cons(o_83, sym_Fail_0))
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
ATerm F14_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
  t_83 = t;
  r_83 :
  if(match_cons(t_83, sym_LChoice_2))
    {
      u_83 = ATgetArgument(t_83, 0);
      v_83 = ATgetArgument(t_83, 1);
      s_83 :
      if(match_cons(v_83, sym_Fail_0))
        {
          t = not_null(u_83);
        }
      else
        {
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
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
  b_84 = t;
  z_83 :
  if(match_cons(b_84, sym_LChoice_2))
    {
      c_84 = ATgetArgument(b_84, 0);
      d_84 = ATgetArgument(b_84, 1);
      a_84 :
      if(match_cons(c_84, sym_Fail_0))
        {
          t = not_null(d_84);
        }
      else
        {
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
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL;
  j_84 = t;
  h_84 :
  if(match_cons(j_84, sym_Choice_2))
    {
      k_84 = ATgetArgument(j_84, 0);
      l_84 = ATgetArgument(j_84, 1);
      i_84 :
      if(match_cons(l_84, sym_Fail_0))
        {
          t = not_null(k_84);
        }
      else
        {
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
  ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
  r_84 = t;
  p_84 :
  if(match_cons(r_84, sym_Choice_2))
    {
      s_84 = ATgetArgument(r_84, 0);
      t_84 = ATgetArgument(r_84, 1);
      q_84 :
      if(match_cons(s_84, sym_Fail_0))
        {
          t = not_null(t_84);
        }
      else
        {
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
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym_Cong_2))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      {
        t = not_null(b_85);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm e_85 = NULL;
            e_85 = t;
            x_84 :
            if(!(match_cons(e_85, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
        }
        t = term_i_18;
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
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  h_85 :
  if(match_cons(j_85, sym_Path_2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      i_85 :
      if(match_cons(l_85, sym_Fail_0))
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
ATerm F8_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  r_85 = t;
  p_85 :
  if(match_cons(r_85, sym_One_1))
    {
      s_85 = ATgetArgument(r_85, 0);
      q_85 :
      if(match_cons(s_85, sym_Fail_0))
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
ATerm F7_0 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL;
  x_85 = t;
  v_85 :
  if(match_cons(x_85, sym_Some_1))
    {
      y_85 = ATgetArgument(x_85, 0);
      w_85 :
      if(match_cons(y_85, sym_Fail_0))
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
ATerm F6_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
  d_86 = t;
  b_86 :
  if(match_cons(d_86, sym_Rec_2))
    {
      e_86 = ATgetArgument(d_86, 0);
      f_86 = ATgetArgument(d_86, 1);
      c_86 :
      if(match_cons(f_86, sym_Fail_0))
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
ATerm F5_0 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  j_86 :
  if(match_cons(l_86, sym_Scope_2))
    {
      m_86 = ATgetArgument(l_86, 0);
      n_86 = ATgetArgument(l_86, 1);
      k_86 :
      if(match_cons(n_86, sym_Fail_0))
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
ATerm F3_0 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,m_88 = NULL;
  f_87 = t;
  r_86 :
  if(match_cons(f_87, sym_Seq_2))
    {
      g_87 = ATgetArgument(f_87, 0);
      m_88 = ATgetArgument(f_87, 1);
      t_86 :
      if(match_cons(g_87, sym_Fail_0))
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
ATerm F2_0 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL;
  s_88 = t;
  q_88 :
  if(match_cons(s_88, sym_Not_1))
    {
      t_88 = ATgetArgument(s_88, 0);
      r_88 :
      if(match_cons(t_88, sym_Fail_0))
        {
          t = term_k_18;
        }
      else
        {
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
  ATerm y_88 = NULL,z_88 = NULL;
  y_88 = t;
  w_88 :
  if(match_cons(y_88, sym_Test_1))
    {
      z_88 = ATgetArgument(y_88, 0);
      x_88 :
      if(match_cons(z_88, sym_Fail_0))
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = w_18;
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  {
                    ATerm i_19 = t;
                    int j_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(j_19);
                      }
                    else
                      {
                        t = i_19;
                        {
                          ATerm k_19 = t;
                          int l_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(l_19);
                            }
                          else
                            {
                              t = k_19;
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(n_19);
                                  }
                                else
                                  {
                                    t = m_19;
                                    {
                                      ATerm o_19 = t;
                                      int u_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(u_19);
                                        }
                                      else
                                        {
                                          t = o_19;
                                          {
                                            ATerm v_19 = t;
                                            int w_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(w_19);
                                              }
                                            else
                                              {
                                                t = v_19;
                                                {
                                                  ATerm y_19 = t;
                                                  int a_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(a_20);
                                                    }
                                                  else
                                                    {
                                                      t = y_19;
                                                      {
                                                        ATerm b_20 = t;
                                                        int c_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(c_20);
                                                          }
                                                        else
                                                          {
                                                            t = b_20;
                                                            {
                                                              ATerm d_20 = t;
                                                              int e_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(e_20);
                                                                }
                                                              else
                                                                {
                                                                  t = d_20;
                                                                  {
                                                                    ATerm f_20 = t;
                                                                    int g_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(i_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_20;
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
  ATerm e_89 = NULL,f_89 = NULL;
  e_89 = t;
  c_89 :
  if(match_cons(e_89, sym_Match_1))
    {
      f_89 = ATgetArgument(e_89, 0);
      d_89 :
      if(match_cons(f_89, sym_Wld_0))
        {
          t = term_k_18;
        }
      else
        {
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
  ATerm k_89 = NULL,l_89 = NULL;
  k_89 = t;
  i_89 :
  if(match_cons(k_89, sym_Where_1))
    {
      l_89 = ATgetArgument(k_89, 0);
      j_89 :
      if(match_cons(l_89, sym_Id_0))
        {
          t = term_k_18;
        }
      else
        {
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
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  o_89 :
  if(match_cons(j_91, sym_All_1))
    {
      k_91 = ATgetArgument(j_91, 0);
      i_91 :
      if(match_cons(k_91, sym_Id_0))
        {
          t = term_k_18;
        }
      else
        {
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
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
  b_92 = t;
  z_91 :
  if(match_cons(b_92, sym_Rec_2))
    {
      c_92 = ATgetArgument(b_92, 0);
      d_92 = ATgetArgument(b_92, 1);
      a_92 :
      if(match_cons(d_92, sym_Id_0))
        {
          t = term_k_18;
        }
      else
        {
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
          t = term_k_18;
        }
      else
        {
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
          t = term_k_18;
        }
      else
        {
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
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  h_93 :
  if(match_cons(k_93, sym_Seq_2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      i_93 :
      if(match_cons(l_93, sym_Id_0))
        {
          t = not_null(m_93);
        }
      else
        {
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
          t = term_k_18;
        }
      else
        {
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
  ATerm j_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = j_20;
      {
        ATerm p_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = p_20;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
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
                              t = I7_0(t);
                              ;
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm o_21 = t;
                                int p_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(p_21);
                                  }
                                else
                                  {
                                    t = o_21;
                                    {
                                      ATerm q_21 = t;
                                      int r_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(r_21);
                                        }
                                      else
                                        {
                                          t = q_21;
                                          {
                                            ATerm c_22 = t;
                                            int e_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(e_22);
                                              }
                                            else
                                              {
                                                t = c_22;
                                                {
                                                  ATerm f_22 = t;
                                                  int g_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(g_22);
                                                    }
                                                  else
                                                    {
                                                      t = f_22;
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
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            {
              ATerm p_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = p_22;
                  {
                    ATerm v_22 = t;
                    int x_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(x_22);
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm b_23 = t;
                                int d_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(d_23);
                                  }
                                else
                                  {
                                    t = b_23;
                                    {
                                      ATerm e_23 = t;
                                      int i_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(i_23);
                                        }
                                      else
                                        {
                                          t = e_23;
                                          {
                                            ATerm j_23 = t;
                                            int k_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(k_23);
                                              }
                                            else
                                              {
                                                t = j_23;
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
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
  x_95 = t;
  f_95 :
  if(match_cons(x_95, sym_LChoice_2))
    {
      y_95 = ATgetArgument(x_95, 0);
      f_96 = ATgetArgument(x_95, 1);
      g_95 :
      if(match_cons(y_95, sym_Matrix_2))
        {
          z_95 = ATgetArgument(y_95, 0);
          a_96 = ATgetArgument(y_95, 1);
          h_95 :
          if(match_cons(f_96, sym_Choice_2))
            {
              v_95 = ATgetArgument(f_96, 0);
              w_95 = ATgetArgument(f_96, 1);
              i_95 :
              if(match_cons(v_95, sym_Matrix_2))
                {
                  t_95 = ATgetArgument(v_95, 0);
                  u_95 = ATgetArgument(v_95, 1);
                  {
                    ATerm l_96 = NULL,o_96 = NULL;
                    ATerm l_23;
                    l_23 = t;
                    {
                      ATerm n_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                      {
                        t = union_0(t);
                        {
                          n_96 = t;
                          if(((l_96 != NULL) && (l_96 != n_96)))
                            _fail(n_96);
                          else
                            l_96 = n_96;
                        }
                      }
                    }
                    t = l_23;
                    {
                      ATerm p_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                      {
                        t = conc_0(t);
                        {
                          p_96 = t;
                          if(((o_96 != NULL) && (o_96 != p_96)))
                            _fail(p_96);
                          else
                            o_96 = p_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(l_96), not_null(o_96)), not_null(w_95));
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
              if(match_cons(f_96, sym_LChoice_2))
                {
                  v_95 = ATgetArgument(f_96, 0);
                  w_95 = ATgetArgument(f_96, 1);
                  j_95 :
                  if(match_cons(v_95, sym_Matrix_2))
                    {
                      t_95 = ATgetArgument(v_95, 0);
                      u_95 = ATgetArgument(v_95, 1);
                      {
                        ATerm v_96 = NULL,x_96 = NULL;
                        ATerm p_23;
                        p_23 = t;
                        {
                          ATerm w_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                          {
                            t = union_0(t);
                            {
                              w_96 = t;
                              if(((v_96 != NULL) && (v_96 != w_96)))
                                _fail(w_96);
                              else
                                v_96 = w_96;
                            }
                          }
                        }
                        t = p_23;
                        {
                          ATerm y_96 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                          {
                            t = conc_0(t);
                            {
                              y_96 = t;
                              if(((x_96 != NULL) && (x_96 != y_96)))
                                _fail(y_96);
                              else
                                x_96 = y_96;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(v_96), not_null(x_96)), not_null(w_95));
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
                  if(match_cons(f_96, sym_Matrix_2))
                    {
                      v_95 = ATgetArgument(f_96, 0);
                      w_95 = ATgetArgument(f_96, 1);
                      {
                        ATerm d_97 = NULL,k_97 = NULL;
                        ATerm q_23;
                        q_23 = t;
                        {
                          ATerm j_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(v_95));
                          {
                            t = union_0(t);
                            {
                              j_97 = t;
                              if(((d_97 != NULL) && (d_97 != j_97)))
                                _fail(j_97);
                              else
                                d_97 = j_97;
                            }
                          }
                        }
                        t = q_23;
                        {
                          ATerm l_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(w_95));
                          {
                            t = conc_0(t);
                            {
                              l_97 = t;
                              if(((k_97 != NULL) && (k_97 != l_97)))
                                _fail(l_97);
                              else
                                k_97 = l_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(d_97), not_null(k_97));
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
      if(match_cons(x_95, sym_Choice_2))
        {
          y_95 = ATgetArgument(x_95, 0);
          f_96 = ATgetArgument(x_95, 1);
          k_95 :
          if(match_cons(y_95, sym_Matrix_2))
            {
              z_95 = ATgetArgument(y_95, 0);
              a_96 = ATgetArgument(y_95, 1);
              l_95 :
              if(match_cons(f_96, sym_LChoice_2))
                {
                  v_95 = ATgetArgument(f_96, 0);
                  w_95 = ATgetArgument(f_96, 1);
                  m_95 :
                  if(match_cons(v_95, sym_Matrix_2))
                    {
                      t_95 = ATgetArgument(v_95, 0);
                      u_95 = ATgetArgument(v_95, 1);
                      {
                        ATerm u_97 = NULL,w_97 = NULL;
                        ATerm u_23;
                        u_23 = t;
                        {
                          ATerm v_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                          {
                            t = union_0(t);
                            {
                              v_97 = t;
                              if(((u_97 != NULL) && (u_97 != v_97)))
                                _fail(v_97);
                              else
                                u_97 = v_97;
                            }
                          }
                        }
                        t = u_23;
                        {
                          ATerm x_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                          {
                            t = conc_0(t);
                            {
                              x_97 = t;
                              if(((w_97 != NULL) && (w_97 != x_97)))
                                _fail(x_97);
                              else
                                w_97 = x_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(u_97), not_null(w_97)), not_null(w_95));
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
                  if(match_cons(f_96, sym_Choice_2))
                    {
                      v_95 = ATgetArgument(f_96, 0);
                      w_95 = ATgetArgument(f_96, 1);
                      n_95 :
                      if(match_cons(v_95, sym_Matrix_2))
                        {
                          t_95 = ATgetArgument(v_95, 0);
                          u_95 = ATgetArgument(v_95, 1);
                          {
                            ATerm f_98 = NULL,h_98 = NULL;
                            ATerm x_23;
                            x_23 = t;
                            {
                              ATerm g_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(t_95));
                              {
                                t = union_0(t);
                                {
                                  g_98 = t;
                                  if(((f_98 != NULL) && (f_98 != g_98)))
                                    _fail(g_98);
                                  else
                                    f_98 = g_98;
                                }
                              }
                            }
                            t = x_23;
                            {
                              ATerm i_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(u_95));
                              {
                                t = conc_0(t);
                                {
                                  i_98 = t;
                                  if(((h_98 != NULL) && (h_98 != i_98)))
                                    _fail(i_98);
                                  else
                                    h_98 = i_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_98), not_null(h_98)), not_null(w_95));
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
                      if(match_cons(f_96, sym_Matrix_2))
                        {
                          v_95 = ATgetArgument(f_96, 0);
                          w_95 = ATgetArgument(f_96, 1);
                          {
                            ATerm p_98 = NULL,r_98 = NULL;
                            ATerm y_23;
                            y_23 = t;
                            {
                              ATerm q_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(v_95));
                              {
                                t = union_0(t);
                                {
                                  q_98 = t;
                                  if(((p_98 != NULL) && (p_98 != q_98)))
                                    _fail(q_98);
                                  else
                                    p_98 = q_98;
                                }
                              }
                            }
                            t = y_23;
                            {
                              ATerm s_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_96), not_null(w_95));
                              {
                                t = conc_0(t);
                                {
                                  s_98 = t;
                                  if(((r_98 != NULL) && (r_98 != s_98)))
                                    _fail(s_98);
                                  else
                                    r_98 = s_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(p_98), not_null(r_98));
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
          if(match_cons(x_95, sym_Scope_2))
            {
              y_95 = ATgetArgument(x_95, 0);
              f_96 = ATgetArgument(x_95, 1);
              o_95 :
              if(match_cons(f_96, sym_Matrix_2))
                {
                  v_95 = ATgetArgument(f_96, 0);
                  w_95 = ATgetArgument(f_96, 1);
                  {
                    ATerm w_98 = NULL;
                    ATerm c_99 = NULL;
                    t = not_null(w_95);
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
                        x_98 = t;
                        d_95 :
                        if(match_cons(x_98, sym_Row_2))
                          {
                            y_98 = ATgetArgument(x_98, 0);
                            z_98 = ATgetArgument(x_98, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(y_98), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_95), not_null(z_98)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, p_3);
                      {
                        c_99 = t;
                        if(((w_98 != NULL) && (w_98 != c_99)))
                          _fail(c_99);
                        else
                          w_98 = c_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_95), not_null(w_98));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(x_95, sym_Seq_2))
                {
                  y_95 = ATgetArgument(x_95, 0);
                  f_96 = ATgetArgument(x_95, 1);
                  p_95 :
                  if(match_cons(y_95, sym_Matrix_2))
                    {
                      z_95 = ATgetArgument(y_95, 0);
                      a_96 = ATgetArgument(y_95, 1);
                      q_95 :
                      if(((ATgetType(a_96) == AT_LIST) && !(ATisEmpty(a_96))))
                        {
                          b_96 = ATgetFirst((ATermList) a_96);
                          e_96 = (ATerm) ATgetNext((ATermList) a_96);
                          r_95 :
                          if(match_cons(b_96, sym_Row_2))
                            {
                              c_96 = ATgetArgument(b_96, 0);
                              d_96 = ATgetArgument(b_96, 1);
                              s_95 :
                              if(((ATgetType(e_96) == AT_LIST) && ATisEmpty(e_96)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(z_95), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(c_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_96), not_null(f_96)))));
                                }
                              else
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
ATerm foldr_3 (ATerm t, ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm))
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_119(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL;
        n_100 = t;
        m_100 :
        if(((ATgetType(n_100) == AT_LIST) && !(ATisEmpty(n_100))))
          {
            o_100 = ATgetFirst((ATermList) n_100);
            p_100 = (ATerm) ATgetNext((ATermList) n_100);
            {
              ATerm s_100 = NULL,u_100 = NULL;
              ATerm b_24;
              b_24 = t;
              {
                ATerm t_100 = NULL;
                t = not_null(o_100);
                {
                  t = w_119(t);
                  {
                    t_100 = t;
                    if(((s_100 != NULL) && (s_100 != t_100)))
                      _fail(t_100);
                    else
                      s_100 = t_100;
                  }
                }
              }
              t = b_24;
              {
                ATerm v_100 = NULL;
                t = not_null(p_100);
                {
                  t = foldr_3(t, u_119, v_119, w_119);
                  {
                    v_100 = t;
                    if(((u_100 != NULL) && (u_100 != v_100)))
                      _fail(v_100);
                    else
                      u_100 = v_100;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_100), not_null(u_100));
                  t = v_119(t);
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
ATerm crush_3 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm))
{
  ATerm d_101 = NULL;
  ATerm f_101 = NULL;
  d_101 = t;
  {
    ATerm g_101 = NULL;
    ATerm i_101 = NULL,k_101 = NULL,l_101 = NULL;
    t = not_null(d_101);
    {
      g_101 = t;
      {
        t = SSL_explode_term(not_null(g_101));
        {
          i_101 = t;
          c_101 :
          if(match_cons(i_101, sym__2))
            {
              k_101 = ATgetArgument(i_101, 0);
              l_101 = ATgetArgument(i_101, 1);
              if(((f_101 != NULL) && (f_101 != l_101)))
                _fail(l_101);
              else
                f_101 = l_101;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_101);
      t = foldr_3(t, s_117, t_117, u_117);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm q_118 (ATerm))
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_101 = NULL;
      ATerm r_101 = NULL;
      t = q_118(t);
      {
        r_101 = t;
        if(((q_101 != NULL) && (q_101 != r_101)))
          _fail(r_101);
        else
          q_101 = r_101;
      }
      t = (ATerm) ATinsert(ATempty, not_null(q_101));
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = collect_om_1(t, q_118);
          return(t);
        }
        t = crush_3(t, q_3, union_0, r_3);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm r_118 (ATerm))
{
  t = collect_om_1(t, r_118);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm v_101 = NULL,w_101 = NULL;
    v_101 = t;
    u_101 :
    if(match_cons(v_101, sym_Off_1))
      {
        w_101 = ATgetArgument(v_101, 0);
        t = not_null(w_101);
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
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL;
  i_102 = t;
  b_102 :
  if(match_cons(i_102, sym_As_2))
    {
      j_102 = ATgetArgument(i_102, 0);
      l_102 = ATgetArgument(i_102, 1);
      c_102 :
      if(match_cons(j_102, sym_Var_1))
        {
          k_102 = ATgetArgument(j_102, 0);
          d_102 :
          if(match_cons(l_102, sym_As_2))
            {
              m_102 = ATgetArgument(l_102, 0);
              h_102 = ATgetArgument(l_102, 1);
              e_102 :
              if(match_cons(m_102, sym_Off_1))
                {
                  g_102 = ATgetArgument(m_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_102))));
                }
              else
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
          if(match_cons(j_102, sym_Off_1))
            {
              k_102 = ATgetArgument(j_102, 0);
              f_102 :
              if(match_cons(l_102, sym_Var_1))
                {
                  m_102 = ATgetArgument(l_102, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_102)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_102))));
                }
              else
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
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  d_103 = t;
  w_102 :
  if(match_cons(d_103, sym_As_2))
    {
      e_103 = ATgetArgument(d_103, 0);
      g_103 = ATgetArgument(d_103, 1);
      x_102 :
      if(match_cons(e_103, sym_Var_1))
        {
          f_103 = ATgetArgument(e_103, 0);
          y_102 :
          if(match_cons(g_103, sym_As_2))
            {
              h_103 = ATgetArgument(g_103, 0);
              c_103 = ATgetArgument(g_103, 1);
              z_102 :
              if(match_cons(h_103, sym_Off_1))
                {
                  b_103 = ATgetArgument(h_103, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_103)), not_null(c_103));
                }
              else
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
          if(match_cons(e_103, sym_Off_1))
            {
              f_103 = ATgetArgument(e_103, 0);
              a_103 :
              if(match_cons(g_103, sym_Var_1))
                {
                  h_103 = ATgetArgument(g_103, 0);
                  {
                    t = not_null(f_103);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(f_103)), term_v_12);
                  }
                }
              else
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
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
  r_103 = t;
  q_103 :
  if(match_cons(r_103, sym__2))
    {
      s_103 = ATgetArgument(r_103, 0);
      t_103 = ATgetArgument(r_103, 1);
      if(((s_103 != NULL) && (s_103 != t_103)))
        _fail(t_103);
      else
        s_103 = t_103;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_117 (ATerm), ATerm k_117 (ATerm))
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL;
  z_103 = t;
  y_103 :
  if(((ATgetType(z_103) == AT_LIST) && !(ATisEmpty(z_103))))
    {
      a_104 = ATgetFirst((ATermList) z_103);
      b_104 = (ATerm) ATgetNext((ATermList) z_103);
      {
        t = k_117(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm e_104 = NULL;
            e_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_104), not_null(e_104));
              t = j_117(t);
            }
            return(t);
          }
          t = fetch_1(t, t_3);
        }
        t = not_null(b_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL;
  k_104 = t;
  j_104 :
  if(match_cons(k_104, sym__2))
    {
      l_104 = ATgetArgument(k_104, 0);
      m_104 = ATgetArgument(k_104, 1);
      {
        t = not_null(l_104);
        {
          ATerm q_104 (ATerm t)
          {
            ATerm e_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_104);
                ;
                LocalPopChoice(f_24);
              }
            else
              {
                t = e_24;
                {
                  ATerm k_24 = t;
                  int l_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(m_104);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_117, u_3);
                      t = q_104(t);
                      ;
                      LocalPopChoice(l_24);
                    }
                  else
                    {
                      t = k_24;
                      t = Cons_2(t, _id, q_104);
                    }
                }
              }
            return(t);
          }
          t = q_104(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unions_1 (ATerm t, ATerm h_117 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = union_1(t, h_117);
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
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL;
  v_104 = t;
  s_104 :
  if(match_cons(v_104, sym__2))
    {
      w_104 = ATgetArgument(v_104, 0);
      z_104 = ATgetArgument(v_104, 1);
      t_104 :
      if(match_cons(w_104, sym__2))
        {
          x_104 = ATgetArgument(w_104, 0);
          y_104 = ATgetArgument(w_104, 1);
          u_104 :
          if(match_cons(z_104, sym__2))
            {
              a_105 = ATgetArgument(z_104, 0);
              b_105 = ATgetArgument(z_104, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_105)), not_null(x_104)), (ATerm) ATinsert(CheckATermList(not_null(b_105)), not_null(y_104)));
            }
          else
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
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL;
  j_105 = t;
  i_105 :
  if(((ATgetType(j_105) == AT_LIST) && !(ATisEmpty(j_105))))
    {
      k_105 = ATgetFirst((ATermList) j_105);
      l_105 = (ATerm) ATgetNext((ATermList) j_105);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_105), not_null(l_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm r_105 = NULL;
  r_105 = t;
  q_105 :
  if(((ATgetType(r_105) == AT_LIST) && ATisEmpty(r_105)))
    {
      t = term_m_24;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_114 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_114);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm d_118 (ATerm), ATerm e_118 (ATerm))
{
  ATerm h_106 = NULL;
  ATerm k_106 = NULL,l_106 = NULL,r_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,o_107 = NULL;
  h_106 = t;
  {
    ATerm q_24;
    q_24 = t;
    {
      ATerm m_106 = NULL;
      ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL;
      t = not_null(h_106);
      {
        m_106 = t;
        {
          t = SSL_explode_term(not_null(m_106));
          {
            o_106 = t;
            w_105 :
            if(match_cons(o_106, sym__2))
              {
                p_106 = ATgetArgument(o_106, 0);
                q_106 = ATgetArgument(o_106, 1);
                {
                  if(((k_106 != NULL) && (k_106 != p_106)))
                    _fail(p_106);
                  else
                    k_106 = p_106;
                  if(((l_106 != NULL) && (l_106 != q_106)))
                    _fail(q_106);
                  else
                    l_106 = q_106;
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
    t = q_24;
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm s_106 = NULL;
        t = SSLgetAnnotations(not_null(h_106));
        {
          s_106 = t;
          if(((r_106 != NULL) && (r_106 != s_106)))
            _fail(s_106);
          else
            r_106 = s_106;
        }
      }
      t = s_24;
      {
        ATerm v_24;
        v_24 = t;
        {
          ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
          t = not_null(l_106);
          {
            t = unzip_1(t, d_118);
            {
              x_106 = t;
              e_106 :
              if(match_cons(x_106, sym__2))
                {
                  y_106 = ATgetArgument(x_106, 0);
                  z_106 = ATgetArgument(x_106, 1);
                  {
                    ATerm a_107 = NULL,i_107 = NULL,l_107 = NULL,n_107 = NULL;
                    if(((u_106 != NULL) && (u_106 != y_106)))
                      _fail(y_106);
                    else
                      u_106 = y_106;
                    {
                      if(((t_106 != NULL) && (t_106 != z_106)))
                        _fail(z_106);
                      else
                        t_106 = z_106;
                      {
                        ATerm b_107 = NULL,h_107 = NULL;
                        ATerm w_24;
                        w_24 = t;
                        {
                          ATerm c_107 = NULL;
                          ATerm g_107 = NULL;
                          t = SSL_mkterm(not_null(k_106), not_null(u_106));
                          {
                            c_107 = t;
                            {
                              g_107 = t;
                              if(((b_107 != NULL) && (b_107 != g_107)))
                                _fail(g_107);
                              else
                                b_107 = g_107;
                            }
                          }
                        }
                        t = w_24;
                        {
                          t = SSLsetAnnotations(not_null(b_107), not_null(r_106));
                          {
                            h_107 = t;
                            if(((a_107 != NULL) && (a_107 != h_107)))
                              _fail(h_107);
                            else
                              a_107 = h_107;
                          }
                        }
                        {
                          t = not_null(a_107);
                          {
                            t = e_118(t);
                            {
                              i_107 = t;
                              d_106 :
                              if(match_cons(i_107, sym__2))
                                {
                                  l_107 = ATgetArgument(i_107, 0);
                                  n_107 = ATgetArgument(i_107, 1);
                                  {
                                    if(((v_106 != NULL) && (v_106 != l_107)))
                                      _fail(l_107);
                                    else
                                      v_106 = l_107;
                                    if(((w_106 != NULL) && (w_106 != n_107)))
                                      _fail(n_107);
                                    else
                                      w_106 = n_107;
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
        t = v_24;
        {
          ATerm p_107 = NULL,r_107 = NULL;
          ATerm q_107 = NULL;
          t = not_null(t_106);
          {
            t = unions_0(t);
            {
              q_107 = t;
              if(((p_107 != NULL) && (p_107 != q_107)))
                _fail(q_107);
              else
                p_107 = q_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_106), not_null(p_107));
            {
              t = union_0(t);
              {
                r_107 = t;
                if(((o_107 != NULL) && (o_107 != r_107)))
                  _fail(r_107);
                else
                  o_107 = r_107;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_106), not_null(o_107));
        }
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm e_119 (ATerm), ATerm f_119 (ATerm))
{
  ATerm r_108 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm n_108 = NULL,p_108 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm o_108 = NULL;
        t = try_1(t, e_119);
        {
          o_108 = t;
          if(((n_108 != NULL) && (n_108 != o_108)))
            _fail(o_108);
          else
            n_108 = o_108;
        }
      }
      t = x_24;
      {
        ATerm q_108 = NULL;
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_119(t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = (ATerm) ATempty;
          }
        {
          q_108 = t;
          if(((p_108 != NULL) && (p_108 != q_108)))
            _fail(q_108);
          else
            p_108 = q_108;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_108), not_null(p_108));
      }
      return(t);
    }
    t = CollectSplit_2(t, r_108, x_3);
    return(t);
  }
  t = r_108(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm k_107 (ATerm))
{
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
  x_108 = t;
  w_108 :
  if(match_cons(x_108, sym__2))
    {
      y_108 = ATgetArgument(x_108, 0);
      z_108 = ATgetArgument(x_108, 1);
      {
        ATerm c_109 = NULL;
        ATerm d_109 = NULL;
        t = k_107(t);
        {
          d_109 = t;
          if(((c_109 != NULL) && (c_109 != d_109)))
            _fail(d_109);
          else
            c_109 = d_109;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(c_109)), not_null(y_108))), not_null(z_108));
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
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym__2))
    {
      l_109 = ATgetArgument(k_109, 0);
      m_109 = ATgetArgument(k_109, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_109)), not_null(l_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL;
  u_109 = t;
  s_109 :
  if(match_cons(u_109, sym__2))
    {
      v_109 = ATgetArgument(u_109, 0);
      w_109 = ATgetArgument(u_109, 1);
      t_109 :
      if(((ATgetType(w_109) == AT_LIST) && !(ATisEmpty(w_109))))
        {
          x_109 = ATgetFirst((ATermList) w_109);
          y_109 = (ATerm) ATgetNext((ATermList) w_109);
          {
            ATerm c_110 = NULL;
            ATerm d_110 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_109), term_d_13);
            {
              t = add_0(t);
              {
                d_110 = t;
                if(((c_110 != NULL) && (c_110 != d_110)))
                  _fail(d_110);
                else
                  c_110 = d_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_109), not_null(x_109)), (ATerm) ATmakeAppl(sym__2, not_null(c_110), not_null(y_109)));
          }
        }
      else
        {
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
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  j_110 = t;
  h_110 :
  if(match_cons(j_110, sym__2))
    {
      k_110 = ATgetArgument(j_110, 0);
      l_110 = ATgetArgument(j_110, 1);
      i_110 :
      if(((ATgetType(l_110) == AT_LIST) && ATisEmpty(l_110)))
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
ATerm genzip_4 (ATerm t, ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm))
{
  ATerm o_110 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          t = s_113(t);
          {
            t = _2(t, u_113, o_110);
            t = t_113(t);
          }
        }
      }
    return(t);
  }
  t = o_110(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm q_110 = NULL;
  q_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(q_110));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm c_114 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, c_114);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL;
  ATerm v_111 (ATerm t)
  {
    ATerm l_111 = NULL;
    ATerm m_111 = NULL;
    t = not_null(g_111);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(f_111);
          return(t);
        }
        t = Annotate_1(t, z_3);
        return(t);
      }
      t = nzip0_1(t, y_3);
      {
        m_111 = t;
        if(((l_111 != NULL) && (l_111 != m_111)))
          _fail(m_111);
        else
          l_111 = m_111;
      }
    }
    t = not_null(l_111);
    return(t);
  }
  ATerm w_111 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(f_111)), term_v_12);
    return(t);
  }
  ATerm y_111 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_111)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(f_111)), not_null(i_111)));
    return(t);
  }
  ATerm z_111 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(f_111)), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_111), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(f_111)), not_null(i_111))));
    return(t);
  }
  d_111 = t;
  y_110 :
  if(match_cons(d_111, sym_As_2))
    {
      e_111 = ATgetArgument(d_111, 0);
      g_111 = ATgetArgument(d_111, 1);
      z_110 :
      if(match_cons(e_111, sym_Off_1))
        {
          f_111 = ATgetArgument(e_111, 0);
          a_111 :
          if(match_cons(g_111, sym_BuildDefault_1))
            {
              h_111 = ATgetArgument(g_111, 0);
              {
                ATerm c_25 = t;
                int d_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_111(t);
                    ;
                    LocalPopChoice(d_25);
                  }
                else
                  {
                    t = c_25;
                    t = w_111(t);
                  }
              }
            }
          else
            {
              if(match_cons(g_111, sym_As_2))
                {
                  h_111 = ATgetArgument(g_111, 0);
                  i_111 = ATgetArgument(g_111, 1);
                  b_111 :
                  if(match_cons(h_111, sym_Var_1))
                    {
                      c_111 = ATgetArgument(h_111, 0);
                      {
                        ATerm e_25 = t;
                        int f_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_111(t);
                            ;
                            LocalPopChoice(f_25);
                          }
                        else
                          {
                            t = e_25;
                            t = y_111(t);
                          }
                      }
                    }
                  else
                    {
                      t = v_111(t);
                    }
                }
              else
                {
                  if(match_cons(g_111, sym_Op_2))
                    {
                      h_111 = ATgetArgument(g_111, 0);
                      i_111 = ATgetArgument(g_111, 1);
                      {
                        ATerm g_25 = t;
                        int h_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_111(t);
                            ;
                            LocalPopChoice(h_25);
                          }
                        else
                          {
                            t = g_25;
                            t = z_111(t);
                          }
                      }
                    }
                  else
                    {
                      t = v_111(t);
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
ATerm topdown_1 (ATerm t, ATerm f_109 (ATerm))
{
  t = f_109(t);
  {
    ATerm a_4 (ATerm t)
    {
      t = topdown_1(t, f_109);
      return(t);
    }
    t = _all(t, a_4);
  }
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm f_112 = NULL;
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL;
  f_112 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_l_25, (ATerm) ATinsert(ATempty, not_null(f_112)));
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
          h_112 = t;
          e_112 :
          if(match_cons(h_112, sym__2))
            {
              i_112 = ATgetArgument(h_112, 0);
              j_112 = ATgetArgument(h_112, 1);
              {
                ATerm o_112 = NULL;
                ATerm p_112 = NULL;
                t = not_null(i_112);
                {
                  t = collect_offsets_0(t);
                  {
                    p_112 = t;
                    if(((o_112 != NULL) && (o_112 != p_112)))
                      _fail(p_112);
                    else
                      o_112 = p_112;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(o_112), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(i_112), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_112)))));
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
  ATerm x_112 = NULL,y_112 = NULL;
  x_112 = t;
  w_112 :
  if(match_cons(x_112, sym_Match_1))
    {
      y_112 = ATgetArgument(x_112, 0);
      {
        t = not_null(y_112);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_125 (ATerm))
{
  ATerm b_113 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      t = n_125(t);
      t = b_113(t);
      return(t);
    }
    t = try_1(t, c_4);
    return(t);
  }
  t = b_113(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm h_109 (ATerm))
{
  t = h_109(t);
  {
    ATerm d_4 (ATerm t)
    {
      t = downup_1(t, h_109);
      return(t);
    }
    t = _all(t, d_4);
    t = h_109(t);
  }
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm m_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          ;
          LocalPopChoice(q_25);
        }
      else
        {
          t = m_25;
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                ;
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, f_4);
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
ATerm SDef_3 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym_SDef_3))
    {
      k_113 = ATgetArgument(j_113, 0);
      l_113 = ATgetArgument(j_113, 1);
      m_113 = ATgetArgument(j_113, 2);
      {
        ATerm x_113 = NULL,z_113 = NULL;
        ATerm y_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          y_113 = t;
          if(((x_113 != NULL) && (x_113 != y_113)))
            _fail(y_113);
          else
            x_113 = y_113;
        }
        {
          t = not_null(k_113);
          {
            ATerm d_114 = NULL;
            t = u_99(t);
            {
              z_113 = t;
              {
                t = not_null(l_113);
                {
                  ATerm g_114 = NULL;
                  t = v_99(t);
                  {
                    d_114 = t;
                    {
                      t = not_null(m_113);
                      {
                        ATerm i_114 = NULL;
                        t = w_99(t);
                        {
                          g_114 = t;
                          {
                            ATerm j_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_113), not_null(d_114), not_null(g_114)), not_null(x_113));
                            {
                              j_114 = t;
                              if(((i_114 != NULL) && (i_114 != j_114)))
                                _fail(j_114);
                              else
                                i_114 = j_114;
                            }
                            t = not_null(i_114);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm v_114 = NULL,w_114 = NULL;
  v_114 = t;
  u_114 :
  if(match_cons(v_114, sym_Strategies_1))
    {
      w_114 = ATgetArgument(v_114, 0);
      {
        ATerm z_114 = NULL,b_115 = NULL;
        ATerm a_115 = NULL;
        t = SSLgetAnnotations(not_null(v_114));
        {
          a_115 = t;
          if(((z_114 != NULL) && (z_114 != a_115)))
            _fail(a_115);
          else
            z_114 = a_115;
        }
        {
          t = not_null(w_114);
          {
            ATerm d_115 = NULL;
            t = j_93(t);
            {
              b_115 = t;
              {
                ATerm f_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_115)), not_null(z_114));
                {
                  f_115 = t;
                  if(((d_115 != NULL) && (d_115 != f_115)))
                    _fail(f_115);
                  else
                    d_115 = f_115;
                }
                t = not_null(d_115);
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
ATerm Specification_1 (ATerm t, ATerm o_93 (ATerm))
{
  ATerm x_115 = NULL,y_115 = NULL;
  x_115 = t;
  u_115 :
  if(match_cons(x_115, sym_Specification_1))
    {
      y_115 = ATgetArgument(x_115, 0);
      {
        ATerm b_116 = NULL,d_116 = NULL;
        ATerm c_116 = NULL;
        t = SSLgetAnnotations(not_null(x_115));
        {
          c_116 = t;
          if(((b_116 != NULL) && (b_116 != c_116)))
            _fail(c_116);
          else
            b_116 = c_116;
        }
        {
          t = not_null(y_115);
          {
            ATerm f_116 = NULL;
            t = o_93(t);
            {
              d_116 = t;
              {
                ATerm g_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_116)), not_null(b_116));
                {
                  g_116 = t;
                  if(((f_116 != NULL) && (f_116 != g_116)))
                    _fail(g_116);
                  else
                    f_116 = g_116;
                }
                t = not_null(f_116);
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
ATerm apply_to_bodies_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          ATerm n_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, j_107);
            return(t);
          }
          t = map_1(t, n_4);
          return(t);
        }
        t = Strategies_1(t, j_4);
        return(t);
      }
      t = Cons_2(t, i_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, h_4);
    return(t);
  }
  t = Specification_1(t, g_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm))
{
  ATerm t_116 = NULL,u_116 = NULL,v_116 = NULL;
  t_116 = t;
  s_116 :
  if(match_cons(t_116, sym__2))
    {
      u_116 = ATgetArgument(t_116, 0);
      v_116 = ATgetArgument(t_116, 1);
      {
        ATerm z_116 = NULL,d_117 = NULL;
        ATerm a_117 = NULL;
        t = SSLgetAnnotations(not_null(t_116));
        {
          a_117 = t;
          if(((z_116 != NULL) && (z_116 != a_117)))
            _fail(a_117);
          else
            z_116 = a_117;
        }
        {
          t = not_null(u_116);
          {
            ATerm i_117 = NULL;
            t = w_91(t);
            {
              d_117 = t;
              {
                t = not_null(v_116);
                {
                  ATerm m_117 = NULL;
                  t = x_91(t);
                  {
                    i_117 = t;
                    {
                      ATerm n_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_117), not_null(i_117)), not_null(z_116));
                      {
                        n_117 = t;
                        if(((m_117 != NULL) && (m_117 != n_117)))
                          _fail(n_117);
                        else
                          m_117 = n_117;
                      }
                      t = not_null(m_117);
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
  ATerm y_25;
  y_25 = t;
  {
    ATerm z_117 = NULL;
    ATerm a_118 = NULL;
    t = term_b_26;
    {
      t = whoami_0(t);
      {
        a_118 = t;
        if(((z_117 != NULL) && (z_117 != a_118)))
          _fail(a_118);
        else
          z_117 = a_118;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), not_null(z_117)), term_d_26));
      {
        t = printnl_0(t);
        {
          t = term_d_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL;
  g_118 = t;
  f_118 :
  if(match_cons(g_118, sym__2))
    {
      h_118 = ATgetArgument(g_118, 0);
      i_118 = ATgetArgument(g_118, 1);
      {
        ATerm f_26;
        f_26 = t;
        t = SSL_printnl(not_null(h_118), not_null(i_118));
        t = f_26;
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
  ATerm n_118 = NULL;
  n_118 = t;
  t = SSL_implode_string(not_null(n_118));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
        u_118 = t;
        t_118 :
        if(((ATgetType(u_118) == AT_LIST) && !(ATisEmpty(u_118))))
          {
            v_118 = ATgetFirst((ATermList) u_118);
            w_118 = (ATerm) ATgetNext((ATermList) u_118);
            {
              t = not_null(v_118);
              {
                ATerm o_4 (ATerm t)
                {
                  t = not_null(w_118);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_4);
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
  ATerm k_119 = NULL;
  ATerm m_119 = NULL;
  k_119 = t;
  {
    ATerm n_119 = NULL;
    ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL;
    t = not_null(k_119);
    {
      n_119 = t;
      {
        t = SSL_explode_term(not_null(n_119));
        {
          p_119 = t;
          i_119 :
          if(match_cons(p_119, sym__2))
            {
              q_119 = ATgetArgument(p_119, 0);
              r_119 = ATgetArgument(p_119, 1);
              j_119 :
              if(match_string(q_119, ""))
                {
                  if(((m_119 != NULL) && (m_119 != r_119)))
                    _fail(r_119);
                  else
                    m_119 = r_119;
                }
              else
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
      t = not_null(m_119);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_115 (ATerm))
{
  ATerm a_120 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_120);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        {
          t = Nil_0(t);
          t = v_115(t);
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
          ATerm p_4 (ATerm t)
          {
            t = not_null(f_120);
            return(t);
          }
          t = at_end_1(t, p_4);
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
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
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
ATerm eval_config_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_4);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            {
              ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
              t_120 = t;
              s_120 :
              if(match_cons(t_120, sym_Path_1))
                {
                  u_120 = ATgetArgument(t_120, 0);
                  t = not_null(u_120);
                }
              else
                {
                  if(match_cons(t_120, sym_Var_1))
                    {
                      u_120 = ATgetArgument(t_120, 0);
                      {
                        t = not_null(u_120);
                        {
                          ATerm q_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm s_4 (ATerm t)
                                {
                                  t = term_v_26;
                                  return(t);
                                }
                                t = debug_1(t, s_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_120, sym_Prefix_2))
                        {
                          u_120 = ATgetArgument(t_120, 0);
                          v_120 = ATgetArgument(t_120, 1);
                          {
                            ATerm f_121 = NULL,i_121 = NULL;
                            ATerm z_26;
                            z_26 = t;
                            {
                              ATerm g_121 = NULL;
                              t = not_null(u_120);
                              {
                                t = eval_config_0(t);
                                {
                                  g_121 = t;
                                  if(((f_121 != NULL) && (f_121 != g_121)))
                                    _fail(g_121);
                                  else
                                    f_121 = g_121;
                                }
                              }
                            }
                            t = z_26;
                            {
                              ATerm j_121 = NULL;
                              t = not_null(v_120);
                              {
                                t = eval_config_0(t);
                                {
                                  j_121 = t;
                                  if(((i_121 != NULL) && (i_121 != j_121)))
                                    _fail(j_121);
                                  else
                                    i_121 = j_121;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_121), not_null(i_121));
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
  ATerm r_121 = NULL;
  r_121 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(r_121));
    {
      t = table_get_0(t);
      {
        ATerm t_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_27;
            d_27 = t;
            {
              ATerm a_122 = NULL;
              ATerm b_122 = NULL;
              b_122 = t;
              if(((a_122 != NULL) && (a_122 != b_122)))
                _fail(b_122);
              else
                a_122 = b_122;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_27, not_null(r_121), not_null(a_122));
                t = table_put_0(t);
              }
            }
            t = d_27;
          }
          return(t);
        }
        t = try_1(t, t_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_132 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_27;
    h_27 = t;
    {
      ATerm h_122 = NULL;
      ATerm i_122 = NULL;
      t = term_k_27;
      {
        t = get_config_0(t);
        {
          i_122 = t;
          if(((h_122 != NULL) && (h_122 != i_122)))
            _fail(i_122);
          else
            h_122 = i_122;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_122), term_l_27);
        t = geq_0(t);
      }
    }
    t = h_27;
    t = c_132(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  r_122 = t;
  p_122 :
  if(match_cons(r_122, sym__2))
    {
      s_122 = ATgetArgument(r_122, 0);
      t_122 = ATgetArgument(r_122, 1);
      q_122 :
      if(match_cons(t_122, sym_Stream_1))
        {
          u_122 = ATgetArgument(t_122, 0);
          {
            ATerm x_122 = NULL;
            t = SSL_fputc(not_null(s_122), not_null(u_122));
            {
              ATerm y_122 = NULL;
              y_122 = t;
              if(((x_122 != NULL) && (x_122 != y_122)))
                _fail(y_122);
              else
                x_122 = y_122;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_122));
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
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL;
  g_123 = t;
  e_123 :
  if(match_cons(g_123, sym__2))
    {
      h_123 = ATgetArgument(g_123, 0);
      j_123 = ATgetArgument(g_123, 1);
      f_123 :
      if(match_cons(h_123, sym_Stream_1))
        {
          i_123 = ATgetArgument(h_123, 0);
          {
            ATerm m_123 = NULL;
            t = SSL_write_term_to_stream_text(not_null(i_123), not_null(j_123));
            {
              ATerm n_123 = NULL;
              n_123 = t;
              if(((m_123 != NULL) && (m_123 != n_123)))
                _fail(n_123);
              else
                m_123 = n_123;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_123));
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
  ATerm v_4 (ATerm t)
  {
    ATerm r_123 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm s_123 = NULL;
      s_123 = t;
      if(((r_123 != NULL) && (r_123 != s_123)))
        _fail(s_123);
      else
        r_123 = s_123;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(r_123));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, v_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL;
  c_124 = t;
  a_124 :
  if(match_cons(c_124, sym__2))
    {
      d_124 = ATgetArgument(c_124, 0);
      f_124 = ATgetArgument(c_124, 1);
      b_124 :
      if(match_cons(d_124, sym_Stream_1))
        {
          e_124 = ATgetArgument(d_124, 0);
          {
            ATerm i_124 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(e_124), not_null(f_124));
            {
              ATerm j_124 = NULL;
              j_124 = t;
              if(((i_124 != NULL) && (i_124 != j_124)))
                _fail(j_124);
              else
                i_124 = j_124;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_124));
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
ATerm WriteToFile_1 (ATerm t, ATerm y_130 (ATerm))
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL;
  q_124 = t;
  p_124 :
  if(match_cons(q_124, sym__2))
    {
      r_124 = ATgetArgument(q_124, 0);
      s_124 = ATgetArgument(q_124, 1);
      {
        ATerm v_124 = NULL,y_124 = NULL;
        t = not_null(r_124);
        {
          ATerm w_124 = NULL;
          w_124 = t;
          if(((v_124 != NULL) && (v_124 != w_124)))
            _fail(w_124);
          else
            v_124 = w_124;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_124), term_n_27);
            {
              t = open_stream_0(t);
              {
                ATerm z_124 = NULL;
                z_124 = t;
                if(((y_124 != NULL) && (y_124 != z_124)))
                  _fail(z_124);
                else
                  y_124 = z_124;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_124), not_null(s_124));
                  {
                    t = y_130(t);
                    {
                      t = fclose_0(t);
                      t = not_null(s_124);
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
  ATerm h_125 = NULL;
  ATerm o_27;
  o_27 = t;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm i_125 = NULL,j_125 = NULL;
            i_125 = t;
            e_125 :
            if(match_cons(i_125, sym_Output_1))
              {
                j_125 = ATgetArgument(i_125, 0);
                if(((h_125 != NULL) && (h_125 != j_125)))
                  _fail(j_125);
                else
                  h_125 = j_125;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_4);
          ;
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm k_125 = NULL;
            t = term_r_27;
            {
              k_125 = t;
              if(((h_125 != NULL) && (h_125 != k_125)))
                _fail(k_125);
              else
                h_125 = k_125;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_4, _id);
  }
  t = o_27;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(h_125);
        return(t);
      }
      t = split_2(t, z_4, _id);
      return(t);
    }
    t = _2(t, _id, y_4);
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_5 (ATerm t)
          {
            ATerm b_5 (ATerm t)
            {
              ATerm l_125 = NULL;
              l_125 = t;
              g_125 :
              if(!(match_cons(l_125, sym_Binary_0)))
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
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_134 (ATerm))
{
  ATerm t_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL;
  ATerm u_27;
  u_27 = t;
  t = dtime_0(t);
  t = u_27;
  {
    t = a_134(t);
    {
      ATerm v_27;
      v_27 = t;
      {
        ATerm u_125 = NULL;
        t = dtime_0(t);
        {
          u_125 = t;
          if(((t_125 != NULL) && (t_125 != u_125)))
            _fail(u_125);
          else
            t_125 = u_125;
        }
      }
      t = v_27;
      {
        v_125 = t;
        s_125 :
        if(match_cons(v_125, sym__2))
          {
            w_125 = ATgetArgument(v_125, 0);
            x_125 = ATgetArgument(v_125, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_125))), not_null(x_125));
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
  ATerm l_126 = NULL,m_126 = NULL;
  ATerm s_126 (ATerm t)
  {
    t = SSL_fclose(not_null(m_126));
    return(t);
  }
  m_126 = t;
  k_126 :
  if(match_cons(m_126, sym_Stream_1))
    {
      l_126 = ATgetArgument(m_126, 0);
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(l_126));
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = s_126(t);
          }
      }
    }
  else
    {
      t = s_126(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL;
  v_126 = t;
  u_126 :
  if(match_cons(v_126, sym_Stream_1))
    {
      w_126 = ATgetArgument(v_126, 0);
      t = SSL_read_term_from_stream(not_null(w_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_130 (ATerm))
{
  ATerm y_27;
  y_27 = t;
  {
    ATerm b_127 = NULL,d_127 = NULL;
    ATerm z_27;
    z_27 = t;
    {
      ATerm c_127 = NULL;
      t = k_130(t);
      {
        c_127 = t;
        if(((b_127 != NULL) && (b_127 != c_127)))
          _fail(c_127);
        else
          b_127 = c_127;
      }
    }
    t = z_27;
    {
      ATerm e_127 = NULL;
      e_127 = t;
      if(((d_127 != NULL) && (d_127 != e_127)))
        _fail(e_127);
      else
        d_127 = e_127;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_127)), not_null(b_127)));
        t = printnl_0(t);
      }
    }
  }
  t = y_27;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_127 = NULL,l_127 = NULL,m_127 = NULL;
  k_127 = t;
  j_127 :
  if(match_cons(k_127, sym__2))
    {
      l_127 = ATgetArgument(k_127, 0);
      m_127 = ATgetArgument(k_127, 1);
      {
        ATerm p_127 = NULL;
        t = SSL_fopen(not_null(l_127), not_null(m_127));
        {
          ATerm q_127 = NULL;
          q_127 = t;
          if(((p_127 != NULL) && (p_127 != q_127)))
            _fail(q_127);
          else
            p_127 = q_127;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_127));
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
  ATerm u_127 = NULL;
  u_127 = t;
  t = SSL_is_string(not_null(u_127));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_127 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_127 = NULL;
    z_127 = t;
    if(((y_127 != NULL) && (y_127 != z_127)))
      _fail(z_127);
    else
      y_127 = z_127;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_127));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_128 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_128 = NULL;
    d_128 = t;
    if(((c_128 != NULL) && (c_128 != d_128)))
      _fail(d_128);
    else
      c_128 = d_128;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_128));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_128 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_128 = NULL;
    h_128 = t;
    if(((g_128 != NULL) && (g_128 != h_128)))
      _fail(h_128);
    else
      g_128 = h_128;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_128));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_128 = NULL;
  n_128 = t;
  m_128 :
  if(match_cons(n_128, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_128, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_128, sym_stdin_0))
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
  ATerm x_128 = NULL;
  ATerm z_128 = NULL,a_129 = NULL;
  x_128 = t;
  {
    ATerm b_129 = NULL;
    ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL,h_129 = NULL;
    t = not_null(x_128);
    {
      b_129 = t;
      {
        t = SSL_explode_term(not_null(b_129));
        {
          d_129 = t;
          u_128 :
          if(match_cons(d_129, sym__2))
            {
              e_129 = ATgetArgument(d_129, 0);
              f_129 = ATgetArgument(d_129, 1);
              v_128 :
              if(match_string(e_129, ""))
                {
                  w_128 :
                  if(((ATgetType(f_129) == AT_LIST) && !(ATisEmpty(f_129))))
                    {
                      g_129 = ATgetFirst((ATermList) f_129);
                      h_129 = (ATerm) ATgetNext((ATermList) f_129);
                      {
                        if(((a_129 != NULL) && (a_129 != g_129)))
                          _fail(g_129);
                        else
                          a_129 = g_129;
                        if(((z_128 != NULL) && (z_128 != h_129)))
                          _fail(h_129);
                        else
                          z_128 = h_129;
                      }
                    }
                  else
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
    t = not_null(a_129);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_129 = NULL,q_129 = NULL,r_129 = NULL;
  p_129 = t;
  o_129 :
  if(match_cons(p_129, sym__2))
    {
      q_129 = ATgetArgument(p_129, 0);
      r_129 = ATgetArgument(p_129, 1);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm i_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm s_129 = NULL,t_129 = NULL;
                    s_129 = t;
                    n_129 :
                    if(match_cons(s_129, sym_Path_1))
                      {
                        t_129 = ATgetArgument(s_129, 0);
                        t = not_null(t_129);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, c_5, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = i_28;
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
  ATerm b_130 = NULL;
  ATerm m_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_129 = NULL;
      ATerm a_130 = NULL;
      a_130 = t;
      if(((z_129 != NULL) && (z_129 != a_130)))
        _fail(a_130);
      else
        z_129 = a_130;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_129), term_t_28);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = m_28;
      {
        ATerm d_5 (ATerm t)
        {
          t = term_u_28;
          return(t);
        }
        t = debug_1(t, d_5);
        _fail(t);
      }
    }
  {
    ATerm v_28;
    v_28 = t;
    {
      ATerm c_130 = NULL;
      t = read_from_stream_0(t);
      {
        c_130 = t;
        if(((b_130 != NULL) && (b_130 != c_130)))
          _fail(c_130);
        else
          b_130 = c_130;
      }
    }
    t = v_28;
    {
      t = fclose_0(t);
      t = not_null(b_130);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_112 (ATerm), ATerm s_112 (ATerm))
{
  ATerm h_130 = NULL,j_130 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm i_130 = NULL;
    t = r_112(t);
    {
      i_130 = t;
      if(((h_130 != NULL) && (h_130 != i_130)))
        _fail(i_130);
      else
        h_130 = i_130;
    }
  }
  t = w_28;
  {
    ATerm l_130 = NULL;
    t = s_112(t);
    {
      l_130 = t;
      if(((j_130 != NULL) && (j_130 != l_130)))
        _fail(l_130);
      else
        j_130 = l_130;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_130), not_null(j_130));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_130 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 (ATerm t)
        {
          ATerm s_130 = NULL,t_130 = NULL;
          s_130 = t;
          p_130 :
          if(match_cons(s_130, sym_Input_1))
            {
              t_130 = ATgetArgument(s_130, 0);
              if(((r_130 != NULL) && (r_130 != t_130)))
                _fail(t_130);
              else
                r_130 = t_130;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_5);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        {
          ATerm u_130 = NULL;
          t = term_a_29;
          {
            u_130 = t;
            if(((r_130 != NULL) && (r_130 != u_130)))
              _fail(u_130);
            else
              r_130 = u_130;
          }
        }
      }
  }
  t = x_28;
  {
    ATerm f_5 (ATerm t)
    {
      t = not_null(r_130);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_5);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm a_131 = NULL;
    a_131 = t;
    x_130 :
    if(!(match_string(a_131, "-k")))
      {
        if(!(match_string(a_131, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm b_29;
    b_29 = t;
    {
      ATerm b_131 = NULL;
      ATerm c_131 = NULL;
      t = string_to_int_0(t);
      {
        c_131 = t;
        if(((b_131 != NULL) && (b_131 != c_131)))
          _fail(c_131);
        else
          b_131 = c_131;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_29, not_null(b_131));
        t = set_config_0(t);
      }
    }
    t = b_29;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_d_29;
    return(t);
  }
  t = ArgOption_3(t, g_5, h_5, i_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_131 = NULL;
  f_131 = t;
  t = SSL_string_to_int(not_null(f_131));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm n_131 = NULL;
        n_131 = t;
        i_131 :
        if(!(match_string(n_131, "-S")))
          {
            if(!(match_string(n_131, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_g_29;
        t = set_config_0(t);
        t = term_h_29;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_i_29;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm o_131 = NULL;
              o_131 = t;
              j_131 :
              if(!(match_string(o_131, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              ATerm r_131 = NULL;
              ATerm l_29;
              l_29 = t;
              {
                ATerm p_131 = NULL;
                ATerm q_131 = NULL;
                t = string_to_int_0(t);
                {
                  q_131 = t;
                  if(((p_131 != NULL) && (p_131 != q_131)))
                    _fail(q_131);
                  else
                    p_131 = q_131;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_27, not_null(p_131));
                  t = set_config_0(t);
                }
              }
              t = l_29;
              {
                ATerm s_131 = NULL;
                s_131 = t;
                if(((r_131 != NULL) && (r_131 != s_131)))
                  _fail(s_131);
                else
                  r_131 = s_131;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_131));
              }
              return(t);
            }
            ATerm o_5 (ATerm t)
            {
              t = term_m_29;
              return(t);
            }
            t = ArgOption_3(t, m_5, n_5, o_5);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm p_5 (ATerm t)
              {
                ATerm t_131 = NULL;
                t_131 = t;
                m_131 :
                if(!(match_string(t_131, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                t = term_r_29;
                t = set_config_0(t);
                t = term_v_29;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_y_29;
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
  ATerm z_29 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = z_29;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm z_131 = NULL;
    z_131 = t;
    w_131 :
    if(!(match_string(z_131, "-o")))
      {
        if(!(match_string(z_131, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm e_132 = NULL;
    ATerm g_30;
    g_30 = t;
    {
      ATerm a_132 = NULL;
      ATerm d_132 = NULL;
      d_132 = t;
      if(((a_132 != NULL) && (a_132 != d_132)))
        _fail(d_132);
      else
        a_132 = d_132;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_30, not_null(a_132));
        t = set_config_0(t);
      }
    }
    t = g_30;
    {
      ATerm f_132 = NULL;
      f_132 = t;
      if(((e_132 != NULL) && (e_132 != f_132)))
        _fail(f_132);
      else
        e_132 = f_132;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_132));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_l_30;
    return(t);
  }
  t = ArgOption_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm v_5 (ATerm t)
        {
          ATerm j_132 = NULL;
          j_132 = t;
          i_132 :
          if(!(match_string(j_132, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_5 (ATerm t)
        {
          t = term_r_30;
          t = set_config_0(t);
          t = term_s_30;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_t_30;
          return(t);
        }
        t = Option_3(t, v_5, w_5, x_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL;
  p_132 = t;
  n_132 :
  if(match_string(p_132, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(p_132) == AT_LIST) && !(ATisEmpty(p_132))))
        {
          q_132 = ATgetFirst((ATermList) p_132);
          r_132 = (ATerm) ATgetNext((ATermList) p_132);
          o_132 :
          if(((ATgetType(r_132) == AT_LIST) && !(ATisEmpty(r_132))))
            {
              s_132 = ATgetFirst((ATermList) r_132);
              t_132 = (ATerm) ATgetNext((ATermList) r_132);
              {
                ATerm x_132 = NULL;
                ATerm u_30;
                u_30 = t;
                {
                  t = not_null(q_132);
                  t = k_0(t);
                }
                t = u_30;
                {
                  ATerm y_132 = NULL;
                  t = not_null(s_132);
                  {
                    t = m_0(t);
                    {
                      y_132 = t;
                      if(((x_132 != NULL) && (x_132 != y_132)))
                        _fail(y_132);
                      else
                        x_132 = y_132;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_132)), not_null(x_132));
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
    ATerm f_133 = NULL;
    f_133 = t;
    c_133 :
    if(!(match_string(f_133, "-i")))
      {
        if(!(match_string(f_133, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm i_133 = NULL;
    ATerm v_30;
    v_30 = t;
    {
      ATerm g_133 = NULL;
      ATerm h_133 = NULL;
      h_133 = t;
      if(((g_133 != NULL) && (g_133 != h_133)))
        _fail(h_133);
      else
        g_133 = h_133;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_30, not_null(g_133));
        t = set_config_0(t);
      }
    }
    t = v_30;
    {
      ATerm j_133 = NULL;
      j_133 = t;
      if(((i_133 != NULL) && (i_133 != j_133)))
        _fail(j_133);
      else
        i_133 = j_133;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_133));
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_x_30;
    return(t);
  }
  t = ArgOption_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_133 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_133 = NULL;
    t = term_b_26;
    {
      t = whoami_0(t);
      {
        o_133 = t;
        if(((n_133 != NULL) && (n_133 != o_133)))
          _fail(o_133);
        else
          n_133 = o_133;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATinsert(ATempty, term_d_31), not_null(n_133)));
      {
        t = printnl_0(t);
        {
          t = term_d_13;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_31;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_133 = NULL;
  r_133 = t;
  t = SSL_TicksToSeconds(not_null(r_133));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL;
  w_133 = t;
  v_133 :
  if(match_cons(w_133, sym__2))
    {
      x_133 = ATgetArgument(w_133, 0);
      y_133 = ATgetArgument(w_133, 1);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_133), not_null(y_133));
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = SSL_addr(not_null(x_133), not_null(y_133));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_119 (ATerm), ATerm t_119 (ATerm))
{
  ATerm n_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_119(t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = n_31;
      {
        ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL;
        m_134 = t;
        g_134 :
        if(((ATgetType(m_134) == AT_LIST) && !(ATisEmpty(m_134))))
          {
            n_134 = ATgetFirst((ATermList) m_134);
            o_134 = (ATerm) ATgetNext((ATermList) m_134);
            {
              ATerm v_134 = NULL;
              ATerm w_134 = NULL;
              t = not_null(o_134);
              {
                t = foldr_2(t, s_119, t_119);
                {
                  w_134 = t;
                  if(((v_134 != NULL) && (v_134 != w_134)))
                    _fail(w_134);
                  else
                    v_134 = w_134;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_134), not_null(v_134));
                t = t_119(t);
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
ATerm crush_2 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm))
{
  ATerm i_135 = NULL;
  ATerm k_135 = NULL;
  i_135 = t;
  {
    ATerm l_135 = NULL;
    ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
    t = not_null(i_135);
    {
      l_135 = t;
      {
        t = SSL_explode_term(not_null(l_135));
        {
          n_135 = t;
          h_135 :
          if(match_cons(n_135, sym__2))
            {
              o_135 = ATgetArgument(n_135, 0);
              p_135 = ATgetArgument(n_135, 1);
              if(((k_135 != NULL) && (k_135 != p_135)))
                _fail(p_135);
              else
                k_135 = p_135;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_135);
      t = foldr_2(t, q_117, r_117);
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
      t = term_q_12;
      return(t);
    }
    t = crush_2(t, b_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL;
  v_135 = t;
  u_135 :
  if(match_cons(v_135, sym__2))
    {
      w_135 = ATgetArgument(v_135, 0);
      x_135 = ATgetArgument(v_135, 1);
      {
        ATerm r_31;
        r_31 = t;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_135), not_null(x_135));
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = SSL_gtr(not_null(w_135), not_null(x_135));
            }
        }
        t = r_31;
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
  ATerm e_136 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_136 = NULL,g_136 = NULL,h_136 = NULL;
      f_136 = t;
      d_136 :
      if(match_cons(f_136, sym__2))
        {
          g_136 = ATgetArgument(f_136, 0);
          h_136 = ATgetArgument(f_136, 1);
          {
            if(((e_136 != NULL) && (e_136 != g_136)))
              _fail(g_136);
            else
              e_136 = g_136;
            if(((e_136 != NULL) && (e_136 != h_136)))
              _fail(h_136);
            else
              e_136 = h_136;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_132 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm w_31;
    w_31 = t;
    {
      ATerm k_136 = NULL;
      ATerm l_136 = NULL;
      t = term_k_27;
      {
        t = get_config_0(t);
        {
          l_136 = t;
          if(((k_136 != NULL) && (k_136 != l_136)))
            _fail(l_136);
          else
            k_136 = l_136;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_136), term_d_13);
        t = geq_0(t);
      }
    }
    t = w_31;
    t = b_132(t);
    return(t);
  }
  t = try_1(t, c_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm p_136 = NULL,r_136 = NULL;
    ATerm z_31;
    z_31 = t;
    {
      ATerm q_136 = NULL;
      t = run_time_0(t);
      {
        q_136 = t;
        if(((p_136 != NULL) && (p_136 != q_136)))
          _fail(q_136);
        else
          p_136 = q_136;
      }
    }
    t = z_31;
    {
      ATerm s_136 = NULL;
      t = term_b_26;
      {
        t = whoami_0(t);
        {
          s_136 = t;
          if(((r_136 != NULL) && (r_136 != s_136)))
            _fail(s_136);
          else
            r_136 = s_136;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_32), not_null(p_136)), term_e_32), not_null(r_136)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_q_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_137 = NULL;
  f_137 = t;
  e_137 :
  if(match_cons(f_137, sym_Version_0))
    {
      ATerm h_137 = NULL,j_137 = NULL;
      ATerm g_32;
      g_32 = t;
      {
        ATerm i_137 = NULL;
        t = SSLgetAnnotations(not_null(f_137));
        {
          i_137 = t;
          if(((h_137 != NULL) && (h_137 != i_137)))
            _fail(i_137);
          else
            h_137 = i_137;
        }
      }
      t = g_32;
      {
        ATerm k_137 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_137));
        {
          k_137 = t;
          if(((j_137 != NULL) && (j_137 != k_137)))
            _fail(k_137);
          else
            j_137 = k_137;
        }
        t = not_null(j_137);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_134 (ATerm))
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm m_32 = t;
          int r_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(r_32);
            }
          else
            {
              t = m_32;
              {
                ATerm s_32 = t;
                int t_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_32);
                  }
                else
                  {
                    t = s_32;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_6);
      }
    }
  t = y_134(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_137 = NULL;
  q_137 = t;
  t = SSL_table_create(not_null(q_137));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_137 = NULL;
  u_137 = t;
  {
    ATerm u_32;
    u_32 = t;
    {
      t = term_v_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, not_null(u_137));
          t = table_put_0(t);
        }
      }
    }
    t = u_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_138 = NULL;
  a_138 = t;
  t = SSL_table_destroy(not_null(a_138));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_138 = NULL;
  e_138 = t;
  t = SSL_exit(not_null(e_138));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_115 (ATerm))
{
  ATerm h_138 (ATerm t)
  {
    ATerm x_32 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = x_32;
        t = Cons_2(t, g_115, h_138);
      }
    return(t);
  }
  t = h_138(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
  q_138 = t;
  n_138 :
  if(((ATgetType(q_138) == AT_LIST) && !(ATisEmpty(q_138))))
    {
      o_138 = ATgetFirst((ATermList) q_138);
      p_138 = (ATerm) ATgetNext((ATermList) q_138);
      {
        ATerm t_138 = NULL;
        t = not_null(p_138);
        {
          ATerm d_33;
          d_33 = t;
          {
            ATerm u_138 = NULL,w_138 = NULL,y_138 = NULL;
            ATerm g_33;
            g_33 = t;
            {
              ATerm v_138 = NULL;
              t = i_0(t);
              {
                v_138 = t;
                if(((u_138 != NULL) && (u_138 != v_138)))
                  _fail(v_138);
                else
                  u_138 = v_138;
              }
            }
            t = g_33;
            {
              ATerm x_138 = NULL;
              t = not_null(o_138);
              {
                t = g_0(t);
                {
                  x_138 = t;
                  if(((w_138 != NULL) && (w_138 != x_138)))
                    _fail(x_138);
                  else
                    w_138 = x_138;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_138)), not_null(w_138));
                {
                  y_138 = t;
                  if(((t_138 != NULL) && (t_138 != y_138)))
                    _fail(y_138);
                  else
                    t_138 = y_138;
                }
              }
            }
          }
          t = d_33;
          {
            ATerm f_6 (ATerm t)
            {
              t = not_null(t_138);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_138) == AT_LIST) && ATisEmpty(q_138)))
        {
          {
            t = term_b_26;
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
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_107 (ATerm))
{
  ATerm j_139 = NULL,k_139 = NULL;
  j_139 = t;
  i_139 :
  if(match_cons(j_139, sym_Program_1))
    {
      k_139 = ATgetArgument(j_139, 0);
      {
        ATerm n_139 = NULL,p_139 = NULL;
        ATerm o_139 = NULL;
        t = SSLgetAnnotations(not_null(j_139));
        {
          o_139 = t;
          if(((n_139 != NULL) && (n_139 != o_139)))
            _fail(o_139);
          else
            n_139 = o_139;
        }
        {
          t = not_null(k_139);
          {
            ATerm r_139 = NULL;
            t = d_107(t);
            {
              p_139 = t;
              {
                ATerm s_139 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_139)), not_null(n_139));
                {
                  s_139 = t;
                  if(((r_139 != NULL) && (r_139 != s_139)))
                    _fail(s_139);
                  else
                    r_139 = s_139;
                }
                t = not_null(r_139);
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
  ATerm b_140 = NULL;
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_140 = NULL;
      t = term_e_31;
      {
        t = get_config_0(t);
        {
          c_140 = t;
          if(((b_140 != NULL) && (b_140 != c_140)))
            _fail(c_140);
          else
            b_140 = c_140;
        }
      }
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm h_6 (ATerm t)
        {
          ATerm i_6 (ATerm t)
          {
            ATerm d_140 = NULL;
            d_140 = t;
            if(((b_140 != NULL) && (b_140 != d_140)))
              _fail(d_140);
            else
              b_140 = d_140;
            return(t);
          }
          t = Program_1(t, i_6);
          return(t);
        }
        t = option_defined_1(t, h_6);
      }
    }
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(b_140);
        return(t);
      }
      t = short_description_1(t, k_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_6);
    {
      t = term_j_33;
      {
        t = echo_0(t);
        {
          t = term_m_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm e_140 = NULL;
                  ATerm f_140 = NULL;
                  f_140 = t;
                  if(((e_140 != NULL) && (e_140 != f_140)))
                    _fail(f_140);
                  else
                    e_140 = f_140;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_140)), term_s_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_6);
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm g_140 = NULL;
                    ATerm h_140 = NULL;
                    ATerm n_6 (ATerm t)
                    {
                      t = not_null(b_140);
                      return(t);
                    }
                    t = long_description_1(t, n_6);
                    {
                      h_140 = t;
                      if(((g_140 != NULL) && (g_140 != h_140)))
                        _fail(h_140);
                      else
                        g_140 = h_140;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_140)), term_t_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_6);
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
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_107 (ATerm))
{
  ATerm r_140 = NULL,s_140 = NULL;
  r_140 = t;
  q_140 :
  if(match_cons(r_140, sym_Undefined_1))
    {
      s_140 = ATgetArgument(r_140, 0);
      {
        ATerm v_140 = NULL,x_140 = NULL;
        ATerm w_140 = NULL;
        t = SSLgetAnnotations(not_null(r_140));
        {
          w_140 = t;
          if(((v_140 != NULL) && (v_140 != w_140)))
            _fail(w_140);
          else
            v_140 = w_140;
        }
        {
          t = not_null(s_140);
          {
            ATerm z_140 = NULL;
            t = e_107(t);
            {
              x_140 = t;
              {
                ATerm a_141 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_140)), not_null(v_140));
                {
                  a_141 = t;
                  if(((z_140 != NULL) && (z_140 != a_141)))
                    _fail(a_141);
                  else
                    z_140 = a_141;
                }
                t = not_null(z_140);
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
ATerm fetch_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm f_141 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_115, _id);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = Cons_2(t, _id, f_141);
      }
    return(t);
  }
  t = f_141(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_135 (ATerm))
{
  t = fetch_1(t, y_135);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_141 = NULL,i_141 = NULL,j_141 = NULL;
  h_141 = t;
  g_141 :
  if(((ATgetType(h_141) == AT_LIST) && ATisEmpty(h_141)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_141) == AT_LIST) && !(ATisEmpty(h_141))))
        {
          i_141 = ATgetFirst((ATermList) h_141);
          j_141 = (ATerm) ATgetNext((ATermList) h_141);
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
  ATerm d_34;
  d_34 = t;
  {
    ATerm m_141 = NULL;
    ATerm p_141 = NULL;
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm n_141 = NULL;
          ATerm o_141 = NULL;
          o_141 = t;
          if(((n_141 != NULL) && (n_141 != o_141)))
            _fail(o_141);
          else
            n_141 = o_141;
          t = (ATerm) ATinsert(ATempty, not_null(n_141));
        }
      }
    {
      p_141 = t;
      if(((m_141 != NULL) && (m_141 != p_141)))
        _fail(p_141);
      else
        m_141 = p_141;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_27, not_null(m_141));
      t = printnl_0(t);
    }
  }
  t = d_34;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_e_31;
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
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_141 = NULL;
  w_141 = t;
  v_141 :
  if(match_cons(w_141, sym_Help_0))
    {
      ATerm y_141 = NULL,a_142 = NULL;
      ATerm u_34;
      u_34 = t;
      {
        ATerm z_141 = NULL;
        t = SSLgetAnnotations(not_null(w_141));
        {
          z_141 = t;
          if(((y_141 != NULL) && (y_141 != z_141)))
            _fail(z_141);
          else
            y_141 = z_141;
        }
      }
      t = u_34;
      {
        ATerm b_142 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_141));
        {
          b_142 = t;
          if(((a_142 != NULL) && (a_142 != b_142)))
            _fail(b_142);
          else
            a_142 = b_142;
        }
        t = not_null(a_142);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_111 (ATerm))
{
  ATerm v_34 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_111(t);
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = v_34;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 (ATerm t)
      {
        ATerm h_142 = NULL;
        h_142 = t;
        f_142 :
        if(!(match_string(h_142, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = term_m_35;
        t = set_config_0(t);
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = term_o_35;
        return(t);
      }
      t = Option_3(t, o_6, p_6, q_6);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm r_6 (ATerm t)
        {
          ATerm i_142 = NULL;
          i_142 = t;
          g_142 :
          if(!(match_string(i_142, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          t = term_m_35;
          {
            t = set_config_0(t);
            {
              t = term_q_35;
              t = set_config_0(t);
            }
          }
          t = term_r_35;
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = term_s_35;
          return(t);
        }
        t = Option_3(t, r_6, s_6, t_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_142 = NULL,m_142 = NULL,n_142 = NULL;
  l_142 = t;
  k_142 :
  if(match_cons(l_142, sym__2))
    {
      m_142 = ATgetArgument(l_142, 0);
      n_142 = ATgetArgument(l_142, 1);
      t = SSL_table_get(not_null(m_142), not_null(n_142));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL;
  u_142 = t;
  t_142 :
  if(match_cons(u_142, sym__3))
    {
      v_142 = ATgetArgument(u_142, 0);
      w_142 = ATgetArgument(u_142, 1);
      x_142 = ATgetArgument(u_142, 2);
      {
        ATerm t_35;
        t_35 = t;
        {
          ATerm b_143 = NULL;
          ATerm c_143 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_142), not_null(w_142));
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                t = (ATerm) ATempty;
              }
            {
              c_143 = t;
              if(((b_143 != NULL) && (b_143 != c_143)))
                _fail(c_143);
              else
                b_143 = c_143;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_142), not_null(w_142), (ATerm) ATinsert(CheckATermList(not_null(b_143)), not_null(x_142)));
            t = table_put_0(t);
          }
        }
        t = t_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_137 (ATerm))
{
  ATerm g_143 = NULL;
  ATerm h_143 = NULL;
  t = term_b_26;
  {
    t = d_137(t);
    {
      h_143 = t;
      if(((g_143 != NULL) && (g_143 != h_143)))
        _fail(h_143);
      else
        g_143 = h_143;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_33, term_l_33, not_null(g_143));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_143 = NULL,o_143 = NULL,p_143 = NULL;
  n_143 = t;
  m_143 :
  if(match_string(n_143, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_143) == AT_LIST) && !(ATisEmpty(n_143))))
        {
          o_143 = ATgetFirst((ATermList) n_143);
          p_143 = (ATerm) ATgetNext((ATermList) n_143);
          {
            ATerm s_143 = NULL;
            ATerm x_35;
            x_35 = t;
            {
              t = not_null(o_143);
              t = a_0(t);
            }
            t = x_35;
            {
              ATerm t_143 = NULL;
              t = term_b_26;
              {
                t = b_0(t);
                {
                  t_143 = t;
                  if(((s_143 != NULL) && (s_143 != t_143)))
                    _fail(t_143);
                  else
                    s_143 = t_143;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_143)), not_null(s_143));
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
  ATerm u_6 (ATerm t)
  {
    ATerm y_143 = NULL;
    y_143 = t;
    x_143 :
    if(!(match_string(y_143, "--help")))
      {
        if(!(match_string(y_143, "-h")))
          {
            if(!(match_string(y_143, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = term_y_35;
    {
      t = set_config_0(t);
      t = term_b_36;
    }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_e_36;
    return(t);
  }
  t = Option_3(t, u_6, v_6, w_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
  b_144 = t;
  a_144 :
  if(((ATgetType(b_144) == AT_LIST) && !(ATisEmpty(b_144))))
    {
      c_144 = ATgetFirst((ATermList) b_144);
      d_144 = (ATerm) ATgetNext((ATermList) b_144);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_144)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_144)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_93 (ATerm), ATerm g_93 (ATerm))
{
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL;
  n_144 = t;
  m_144 :
  if(((ATgetType(n_144) == AT_LIST) && !(ATisEmpty(n_144))))
    {
      o_144 = ATgetFirst((ATermList) n_144);
      p_144 = (ATerm) ATgetNext((ATermList) n_144);
      {
        ATerm t_144 = NULL,v_144 = NULL;
        ATerm u_144 = NULL;
        t = SSLgetAnnotations(not_null(n_144));
        {
          u_144 = t;
          if(((t_144 != NULL) && (t_144 != u_144)))
            _fail(u_144);
          else
            t_144 = u_144;
        }
        {
          t = not_null(o_144);
          {
            ATerm x_144 = NULL;
            t = f_93(t);
            {
              v_144 = t;
              {
                t = not_null(p_144);
                {
                  ATerm z_144 = NULL;
                  t = g_93(t);
                  {
                    x_144 = t;
                    {
                      ATerm a_145 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_144)), not_null(v_144)), not_null(t_144));
                      {
                        a_145 = t;
                        if(((z_144 != NULL) && (z_144 != a_145)))
                          _fail(a_145);
                        else
                          z_144 = a_145;
                      }
                      t = not_null(z_144);
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
  ATerm k_145 = NULL;
  k_145 = t;
  j_145 :
  if(((ATgetType(k_145) == AT_LIST) && ATisEmpty(k_145)))
    {
      {
        ATerm m_145 = NULL,o_145 = NULL;
        ATerm h_36;
        h_36 = t;
        {
          ATerm n_145 = NULL;
          t = SSLgetAnnotations(not_null(k_145));
          {
            n_145 = t;
            if(((m_145 != NULL) && (m_145 != n_145)))
              _fail(n_145);
            else
              m_145 = n_145;
          }
        }
        t = h_36;
        {
          ATerm p_145 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_145));
          {
            p_145 = t;
            if(((o_145 != NULL) && (o_145 != p_145)))
              _fail(p_145);
            else
              o_145 = p_145;
          }
          t = not_null(o_145);
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
  ATerm v_145 = NULL,w_145 = NULL,x_145 = NULL;
  v_145 = t;
  u_145 :
  if(match_cons(v_145, sym__2))
    {
      w_145 = ATgetArgument(v_145, 0);
      x_145 = ATgetArgument(v_145, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_27, not_null(w_145), not_null(x_145));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_137 (ATerm))
{
  ATerm i_36;
  i_36 = t;
  {
    ATerm x_6 (ATerm t)
    {
      t = term_r_36;
      t = b_137(t);
      return(t);
    }
    t = try_1(t, x_6);
  }
  t = i_36;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm f_146 = NULL;
      ATerm t_36;
      t_36 = t;
      {
        ATerm d_146 = NULL;
        ATerm e_146 = NULL;
        e_146 = t;
        if(((d_146 != NULL) && (d_146 != e_146)))
          _fail(e_146);
        else
          d_146 = e_146;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(d_146));
          t = set_config_0(t);
        }
      }
      t = t_36;
      {
        ATerm g_146 = NULL;
        g_146 = t;
        if(((f_146 != NULL) && (f_146 != g_146)))
          _fail(g_146);
        else
          f_146 = g_146;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_146));
      }
      return(t);
    }
    ATerm z_6 (ATerm t)
    {
      ATerm x_36 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              {
                t = b_137(t);
                t = Cons_2(t, _id, z_6);
              }
            }
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = x_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_6, z_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL;
  ATerm e_37;
  e_37 = t;
  {
    ATerm p_146 = NULL,q_146 = NULL,r_146 = NULL,s_146 = NULL;
    p_146 = t;
    l_146 :
    if(match_cons(p_146, sym__3))
      {
        q_146 = ATgetArgument(p_146, 0);
        r_146 = ATgetArgument(p_146, 1);
        s_146 = ATgetArgument(p_146, 2);
        {
          if(((m_146 != NULL) && (m_146 != q_146)))
            _fail(q_146);
          else
            m_146 = q_146;
          {
            if(((n_146 != NULL) && (n_146 != r_146)))
              _fail(r_146);
            else
              n_146 = r_146;
            {
              if(((o_146 != NULL) && (o_146 != s_146)))
                _fail(s_146);
              else
                o_146 = s_146;
              t = SSL_table_put(not_null(m_146), not_null(n_146), not_null(o_146));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_137 (ATerm))
{
  ATerm v_146 = NULL;
  ATerm f_37;
  f_37 = t;
  {
    t = term_g_37;
    t = table_put_0(t);
  }
  t = f_37;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_137(t);
          ;
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          {
            ATerm j_37 = t;
            int k_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(k_37);
              }
            else
              {
                t = j_37;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, a_7);
    {
      ATerm b_7 (ATerm t)
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_37;
            n_37 = t;
            {
              ATerm o_37 = t;
              int p_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_37);
                }
              else
                {
                  t = o_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_37;
            {
              t = system_usage_0(t);
              {
                t = term_q_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm q_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_37;
                  s_37 = t;
                  {
                    t = term_l_35;
                    t = get_config_0(t);
                  }
                  t = s_37;
                  {
                    t = system_about_0(t);
                    {
                      t = term_q_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(r_37);
                }
              else
                {
                  t = q_37;
                  {
                    ATerm c_7 (ATerm t)
                    {
                      ATerm d_7 (ATerm t)
                      {
                        ATerm w_146 = NULL;
                        w_146 = t;
                        if(((v_146 != NULL) && (v_146 != w_146)))
                          _fail(w_146);
                        else
                          v_146 = w_146;
                        return(t);
                      }
                      t = Undefined_1(t, d_7);
                      return(t);
                    }
                    t = option_defined_1(t, c_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_146)), term_t_37));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_d_13;
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
      t = try_1(t, b_7);
      {
        ATerm u_37;
        u_37 = t;
        {
          t = term_k_33;
          t = table_destroy_0(t);
        }
        t = u_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm))
{
  t = parse_options_1(t, a_135);
  {
    t = store_options_0(t);
    {
      t = c_135(t);
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_135);
            ;
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            {
              ATerm x_37 = t;
              int y_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_135(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(y_37);
                }
              else
                {
                  t = x_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_134(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_134);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, e_7, r_134, s_134, f_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm l_134 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm h_7 (ATerm t)
    {
      ATerm b_38;
      b_38 = t;
      {
        ATerm z_146 = NULL;
        ATerm a_147 = NULL;
        t = term_e_31;
        {
          t = get_config_0(t);
          {
            a_147 = t;
            if(((z_146 != NULL) && (z_146 != a_147)))
              _fail(a_147);
            else
              z_146 = a_147;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_26, (ATerm) ATinsert(ATempty, not_null(z_146)));
          t = printnl_0(t);
        }
      }
      t = b_38;
      return(t);
    }
    t = if_verbose2_1(t, h_7);
    return(t);
  }
  t = iowrap_4(t, j_134, k_134, l_134, g_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_134 (ATerm), ATerm i_134 (ATerm))
{
  t = iowrap_3(t, h_134, i_134, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_134 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    t = _2(t, _id, e_134);
    return(t);
  }
  t = iowrap_2(t, k_7, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, l_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
