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
ATerm term_c_35;
ATerm term_k_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_k_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_e_22;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_a_13;
ATerm term_j_11;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Op_2, term_z_13, (ATerm) ATempty);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_i_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_o_20);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_o_20);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_e_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_o_20);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_o_20);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_o_20);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__3, term_d_30, term_e_30, (ATerm) ATempty);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm isect_1 (ATerm, ATerm b_117 (ATerm));
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm n_96 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm));
ATerm tboundin_3 (ATerm, ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm h_117 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm));
ATerm crush_3 (ATerm, ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm));
ATerm free_vars_3 (ATerm, ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_109 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
ATerm SubsVar_2 (ATerm, ATerm f_109 (ATerm), ATerm g_109 (ATerm));
ATerm alltd_1 (ATerm, ATerm z_110 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_108 (ATerm), ATerm r_108 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_108 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm l_117 (ATerm), ATerm m_117 (ATerm));
ATerm diff_1 (ATerm, ATerm d_117 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_126 (ATerm), ATerm f_126 (ATerm));
ATerm for_3 (ATerm, ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm l_110 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm));
ATerm zip_1 (ATerm, ATerm y_113 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm v_94 (ATerm), ATerm w_94 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm));
ATerm Op_2 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm));
ATerm pat_td_1 (ATerm, ATerm o_107 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm p_125 (ATerm));
ATerm downup_1 (ATerm, ATerm j_109 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm Strategies_1 (ATerm, ATerm k_93 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_93 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm l_107 (ATerm));
ATerm _2 (ATerm, ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_115 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_132 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm a_131 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_134 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_130 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_112 (ATerm), ATerm u_112 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_119 (ATerm), ATerm v_119 (ATerm));
ATerm crush_2 (ATerm, ATerm s_117 (ATerm), ATerm t_117 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_132 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_135 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_137 (ATerm));
ATerm map_1 (ATerm, ATerm i_115 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_137 (ATerm));
ATerm Program_1 (ATerm, ATerm f_107 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_115 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_136 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_111 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_137 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_137 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_137 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm n_134 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_134 (ATerm), ATerm k_134 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_134 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, c_0);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm b_117 (ATerm))
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
            ATerm v_5 = t;
            int w_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(w_5);
              }
            else
              {
                t = v_5;
                {
                  ATerm x_5 = t;
                  int y_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_5;
                      z_5 = t;
                      {
                        ATerm e_0 (ATerm t)
                        {
                          t = not_null(p_4);
                          return(t);
                        }
                        t = HdMember_p__2(t, b_117, e_0);
                      }
                      t = z_5;
                      t = Cons_2(t, _id, a_5);
                      ;
                      LocalPopChoice(y_5);
                    }
                  else
                    {
                      t = x_5;
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
ATerm DynamicRules_1 (ATerm t, ATerm n_96 (ATerm))
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
            t = n_96(t);
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
ATerm Scope_2 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm))
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
            t = q_97(t);
            {
              j_6 = t;
              {
                t = not_null(d_6);
                {
                  ATerm n_6 = NULL;
                  t = r_97(t);
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
ATerm tboundin_3 (ATerm t, ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm))
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, k_108, i_108);
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = DynamicRules_1(t, i_108);
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
ATerm union_1 (ATerm t, ATerm h_117 (ATerm))
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
            ATerm g_6 = t;
            int k_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_8);
                ;
                LocalPopChoice(k_6);
              }
            else
              {
                t = g_6;
                {
                  ATerm m_6 = t;
                  int p_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_0 (ATerm t)
                      {
                        t = not_null(b_8);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_117, f_0);
                      t = f_8(t);
                      ;
                      LocalPopChoice(p_6);
                    }
                  else
                    {
                      t = m_6;
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
ATerm foldr_3 (ATerm t, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_119(t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
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
              ATerm s_6;
              s_6 = t;
              {
                ATerm q_8 = NULL;
                t = not_null(l_8);
                {
                  t = y_119(t);
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                }
              }
              t = s_6;
              {
                ATerm s_8 = NULL;
                t = not_null(m_8);
                {
                  t = foldr_3(t, w_119, x_119, y_119);
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
                  t = x_119(t);
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
ATerm crush_3 (ATerm t, ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm))
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
      t = foldr_3(t, u_117, v_117, w_117);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_9 (ATerm t)
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        ;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        {
          ATerm y_6 = t;
          int z_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL;
              ATerm a_7;
              a_7 = t;
              {
                ATerm n_9 = NULL;
                t = z_123(t);
                {
                  n_9 = t;
                  if(((m_9 != NULL) && (m_9 != n_9)))
                    _fail(n_9);
                  else
                    m_9 = n_9;
                }
              }
              t = a_7;
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = not_null(m_9);
                    return(t);
                  }
                  t = split_2(t, o_9, l_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm j_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = a_124(t, h_0, o_9, j_0);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_0, union_0, _id);
                }
              }
              ;
              LocalPopChoice(z_6);
            }
          else
            {
              t = y_6;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_0, union_0, o_9);
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
  ATerm r_0 (ATerm t)
  {
    ATerm b_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = b_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, r_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  w_9 = t;
  u_9 :
  if(match_cons(w_9, sym_Scope_2))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      v_9 :
      if(match_cons(y_9, sym_Seq_2))
        {
          z_9 = ATgetArgument(y_9, 0);
          a_10 = ATgetArgument(y_9, 1);
          {
            ATerm e_10 = NULL,f_10 = NULL;
            ATerm g_10 = NULL,i_10 = NULL;
            ATerm h_10 = NULL;
            t = not_null(z_9);
            {
              t = tvars_0(t);
              {
                h_10 = t;
                if(((g_10 != NULL) && (g_10 != h_10)))
                  _fail(h_10);
                else
                  g_10 = h_10;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), not_null(x_9));
              {
                ATerm j_10 = NULL;
                t = isect_0(t);
                {
                  i_10 = t;
                  {
                    if(((e_10 != NULL) && (e_10 != i_10)))
                      _fail(i_10);
                    else
                      e_10 = i_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(e_10));
                      {
                        t = diff_0(t);
                        {
                          j_10 = t;
                          {
                            if(((f_10 != NULL) && (f_10 != j_10)))
                              _fail(j_10);
                            else
                              f_10 = j_10;
                            {
                              ATerm l_7 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
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
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_10), not_null(a_10))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_109 (ATerm))
{
  t = h_109(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = topdown_1(t, h_109);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  ATerm h_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_10), not_null(v_10)));
    return(t);
  }
  ATerm i_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_10), not_null(a_11)));
    return(t);
  }
  w_10 = t;
  q_10 :
  if(match_cons(w_10, sym_Seq_2))
    {
      x_10 = ATgetArgument(w_10, 0);
      a_11 = ATgetArgument(w_10, 1);
      r_10 :
      if(match_cons(a_11, sym_Scope_2))
        {
          u_10 = ATgetArgument(a_11, 0);
          v_10 = ATgetArgument(a_11, 1);
          s_10 :
          if(match_cons(x_10, sym_Scope_2))
            {
              y_10 = ATgetArgument(x_10, 0);
              z_10 = ATgetArgument(x_10, 1);
              {
                ATerm m_7 = t;
                int n_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_11(t);
                    ;
                    LocalPopChoice(n_7);
                  }
                else
                  {
                    t = m_7;
                    t = i_11(t);
                  }
              }
            }
          else
            {
              t = h_11(t);
            }
        }
      else
        {
          t_10 :
          if(match_cons(x_10, sym_Scope_2))
            {
              y_10 = ATgetArgument(x_10, 0);
              z_10 = ATgetArgument(x_10, 1);
              t = i_11(t);
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
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  r_11 = t;
  l_11 :
  if(match_cons(r_11, sym__2))
    {
      s_11 = ATgetArgument(r_11, 0);
      u_11 = ATgetArgument(r_11, 1);
      m_11 :
      if(match_cons(s_11, sym_Build_1))
        {
          t_11 = ATgetArgument(s_11, 0);
          n_11 :
          if(match_cons(u_11, sym_Where_1))
            {
              v_11 = ATgetArgument(u_11, 0);
              o_11 :
              if(match_cons(v_11, sym_Prim_2))
                {
                  p_11 = ATgetArgument(v_11, 0);
                  q_11 = ATgetArgument(v_11, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_11), not_null(q_11));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(u_11, sym_Prim_2))
                {
                  v_11 = ATgetArgument(u_11, 0);
                  w_11 = ATgetArgument(u_11, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_11), not_null(w_11));
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
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  m_12 = t;
  h_12 :
  if(match_cons(m_12, sym__2))
    {
      n_12 = ATgetArgument(m_12, 0);
      p_12 = ATgetArgument(m_12, 1);
      i_12 :
      if(match_cons(n_12, sym_Build_1))
        {
          o_12 = ATgetArgument(n_12, 0);
          j_12 :
          if(match_cons(p_12, sym_Where_1))
            {
              q_12 = ATgetArgument(p_12, 0);
              k_12 :
              if(match_cons(q_12, sym_Build_1))
                {
                  l_12 = ATgetArgument(q_12, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_12));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(p_12, sym_Build_1))
                {
                  q_12 = ATgetArgument(p_12, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_12));
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
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  g_13 = t;
  b_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      l_13 = ATgetArgument(g_13, 1);
      c_13 :
      if(match_cons(h_13, sym_Build_1))
        {
          i_13 = ATgetArgument(h_13, 0);
          d_13 :
          if(match_cons(i_13, sym_Op_2))
            {
              j_13 = ATgetArgument(i_13, 0);
              k_13 = ATgetArgument(i_13, 1);
              e_13 :
              if(match_cons(l_13, sym_Match_1))
                {
                  m_13 = ATgetArgument(l_13, 0);
                  f_13 :
                  if(match_cons(m_13, sym_Op_2))
                    {
                      n_13 = ATgetArgument(m_13, 0);
                      o_13 = ATgetArgument(m_13, 1);
                      {
                        ATerm r_13 = NULL,s_13 = NULL;
                        if(((j_13 != NULL) && (j_13 != n_13)))
                          _fail(n_13);
                        else
                          j_13 = n_13;
                        {
                          if(((r_13 != NULL) && (r_13 != o_13)))
                            _fail(o_13);
                          else
                            r_13 = o_13;
                          {
                            ATerm y_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(r_13));
                            {
                              ATerm u_0 (ATerm t)
                              {
                                ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
                                t_13 = t;
                                z_12 :
                                if(match_cons(t_13, sym__2))
                                  {
                                    u_13 = ATgetArgument(t_13, 0);
                                    v_13 = ATgetArgument(t_13, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_13)), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_13)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, u_0);
                              {
                                y_13 = t;
                                if(((s_13 != NULL) && (s_13 != y_13)))
                                  _fail(y_13);
                                else
                                  s_13 = y_13;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_13)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_13), not_null(k_13))));
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
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  i_14 = t;
  d_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      n_14 = ATgetArgument(i_14, 1);
      e_14 :
      if(match_cons(j_14, sym_Build_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          f_14 :
          if(match_cons(k_14, sym_Op_2))
            {
              l_14 = ATgetArgument(k_14, 0);
              m_14 = ATgetArgument(k_14, 1);
              g_14 :
              if(match_cons(n_14, sym_Match_1))
                {
                  o_14 = ATgetArgument(n_14, 0);
                  h_14 :
                  if(match_cons(o_14, sym_Op_2))
                    {
                      p_14 = ATgetArgument(o_14, 0);
                      q_14 = ATgetArgument(o_14, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(p_14));
                        {
                          ATerm o_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = o_7;
                            }
                        }
                        t = term_p_7;
                      }
                    }
                  else
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
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
              ATerm x_7 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = x_7;
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  ATerm r_15 (ATerm t)
  {
    ATerm o_15 = NULL;
    ATerm p_15 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(g_15));
    {
      t = BMF_0(t);
      {
        p_15 = t;
        if(((o_15 != NULL) && (o_15 != p_15)))
          _fail(p_15);
        else
          o_15 = p_15;
      }
    }
    t = not_null(o_15);
    return(t);
  }
  e_15 = t;
  a_15 :
  if(match_cons(e_15, sym_Seq_2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      b_15 :
      if(match_cons(g_15, sym_Seq_2))
        {
          c_15 = ATgetArgument(g_15, 0);
          d_15 = ATgetArgument(g_15, 1);
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_15 = NULL;
                ATerm l_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(c_15));
                {
                  t = BMF_0(t);
                  {
                    l_15 = t;
                    if(((k_15 != NULL) && (k_15 != l_15)))
                      _fail(l_15);
                    else
                      k_15 = l_15;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_15), not_null(d_15));
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                t = r_15(t);
              }
          }
        }
      else
        {
          t = r_15(t);
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  z_15 = t;
  v_15 :
  if(match_cons(z_15, sym_Seq_2))
    {
      a_16 = ATgetArgument(z_15, 0);
      c_16 = ATgetArgument(z_15, 1);
      w_15 :
      if(match_cons(a_16, sym_Build_1))
        {
          b_16 = ATgetArgument(a_16, 0);
          x_15 :
          if(match_cons(c_16, sym_Seq_2))
            {
              d_16 = ATgetArgument(c_16, 0);
              f_16 = ATgetArgument(c_16, 1);
              y_15 :
              if(match_cons(d_16, sym_Build_1))
                {
                  e_16 = ATgetArgument(d_16, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_16)), not_null(f_16));
                }
              else
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
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  o_16 = t;
  m_16 :
  if(match_cons(o_16, sym_Scope_2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      n_16 :
      if(match_cons(q_16, sym_Scope_2))
        {
          r_16 = ATgetArgument(q_16, 0);
          s_16 = ATgetArgument(q_16, 1);
          {
            ATerm w_16 = NULL;
            ATerm x_16 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(r_16));
            {
              t = conc_0(t);
              {
                x_16 = t;
                if(((w_16 != NULL) && (w_16 != x_16)))
                  _fail(x_16);
                else
                  w_16 = x_16;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_16), not_null(s_16));
          }
        }
      else
        {
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
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_Var_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      t = not_null(d_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
        }
      else
        {
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
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
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_109 (ATerm), ATerm g_109 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = f_109(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = g_109(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm z_110 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm i_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = i_8;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_108 (ATerm), ATerm r_108 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, q_108, w_0);
              t = r_108(t);
              return(t);
            }
            t = alltd_1(t, v_0);
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
ATerm substitute_1 (ATerm t, ATerm s_108 (ATerm))
{
  t = substitute_2(t, s_108, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      if(((y_19 != NULL) && (y_19 != z_19)))
        _fail(z_19);
      else
        y_19 = z_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_117 (ATerm), ATerm m_117 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
    {
      g_20 = ATgetFirst((ATermList) f_20);
      h_20 = (ATerm) ATgetNext((ATermList) f_20);
      {
        t = m_117(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm k_20 = NULL;
            k_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(k_20));
              t = l_117(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(h_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm d_117 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        t = not_null(r_20);
        {
          ATerm w_20 (ATerm t)
          {
            ATerm o_8 = t;
            int t_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(t_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm u_8 = t;
                  int v_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(s_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_117, y_0);
                      t = w_20(t);
                      ;
                      LocalPopChoice(v_8);
                    }
                  else
                    {
                      t = u_8;
                      t = Cons_2(t, _id, w_20);
                    }
                }
              }
            return(t);
          }
          t = w_20(t);
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
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  a_21 = t;
  y_20 :
  if(match_cons(a_21, sym__2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      z_20 :
      if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
        {
          d_21 = ATgetFirst((ATermList) c_21);
          e_21 = (ATerm) ATgetNext((ATermList) c_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_21)), not_null(d_21)), not_null(e_21));
        }
      else
        {
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
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  t_21 = t;
  r_21 :
  if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
    {
      u_21 = ATgetFirst((ATermList) t_21);
      x_21 = (ATerm) ATgetNext((ATermList) t_21);
      s_21 :
      if(match_cons(u_21, sym__2))
        {
          v_21 = ATgetArgument(u_21, 0);
          w_21 = ATgetArgument(u_21, 1);
          {
            ATerm b_22 = NULL,c_22 = NULL,i_22 = NULL,o_22 = NULL;
            ATerm w_8;
            w_8 = t;
            {
              ATerm d_22 = NULL;
              ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
              t = not_null(w_21);
              {
                d_22 = t;
                {
                  t = SSL_explode_term(not_null(d_22));
                  {
                    f_22 = t;
                    m_21 :
                    if(match_cons(f_22, sym__2))
                      {
                        g_22 = ATgetArgument(f_22, 0);
                        h_22 = ATgetArgument(f_22, 1);
                        {
                          if(((b_22 != NULL) && (b_22 != g_22)))
                            _fail(g_22);
                          else
                            b_22 = g_22;
                          if(((c_22 != NULL) && (c_22 != h_22)))
                            _fail(h_22);
                          else
                            c_22 = h_22;
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
              ATerm x_8;
              x_8 = t;
              {
                ATerm j_22 = NULL;
                ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
                t = not_null(v_21);
                {
                  j_22 = t;
                  {
                    t = SSL_explode_term(not_null(j_22));
                    {
                      l_22 = t;
                      p_21 :
                      if(match_cons(l_22, sym__2))
                        {
                          m_22 = ATgetArgument(l_22, 0);
                          n_22 = ATgetArgument(l_22, 1);
                          {
                            if(((b_22 != NULL) && (b_22 != m_22)))
                              _fail(m_22);
                            else
                              b_22 = m_22;
                            if(((i_22 != NULL) && (i_22 != n_22)))
                              _fail(n_22);
                            else
                              i_22 = n_22;
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
                ATerm p_22 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(c_22));
                {
                  t = zip_1(t, _id);
                  {
                    p_22 = t;
                    if(((o_22 != NULL) && (o_22 != p_22)))
                      _fail(p_22);
                    else
                      o_22 = p_22;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(x_21));
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
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  z_22 = t;
  x_22 :
  if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
    {
      a_23 = ATgetFirst((ATermList) z_22);
      d_23 = (ATerm) ATgetNext((ATermList) z_22);
      y_22 :
      if(match_cons(a_23, sym__2))
        {
          b_23 = ATgetArgument(a_23, 0);
          c_23 = ATgetArgument(a_23, 1);
          {
            ATerm f_23 = NULL;
            if(((b_23 != NULL) && (b_23 != c_23)))
              _fail(c_23);
            else
              b_23 = c_23;
            {
              if(((f_23 != NULL) && (f_23 != d_23)))
                _fail(d_23);
              else
                f_23 = d_23;
              t = not_null(f_23);
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
ATerm while_not_2 (ATerm t, ATerm e_126 (ATerm), ATerm f_126 (ATerm))
{
  ATerm h_23 (ATerm t)
  {
    ATerm y_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_126(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = y_8;
        {
          t = f_126(t);
          t = h_23(t);
        }
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm))
{
  t = h_126(t);
  t = while_not_2(t, i_126, j_126);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm e_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm j_23 = NULL;
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_23));
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              ATerm l_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = l_9;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, c_1);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, z_0, a_1, b_1);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = e_9;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm l_110 (ATerm))
{
  ATerm m_23 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110(t);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = _one(t, m_23);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        ATerm s_9;
        s_9 = t;
        {
          t = not_null(s_23);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm v_23 = NULL;
              v_23 = t;
              if(((r_23 != NULL) && (r_23 != v_23)))
                _fail(v_23);
              else
                r_23 = v_23;
              return(t);
            }
            t = oncetd_1(t, d_1);
          }
        }
        t = s_9;
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
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym_Var_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      {
        ATerm t_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_24 = NULL,r_24 = NULL;
            ATerm q_24 = NULL;
            t = SSLgetAnnotations(not_null(l_24));
            {
              q_24 = t;
              if(((p_24 != NULL) && (p_24 != q_24)))
                _fail(q_24);
              else
                p_24 = q_24;
            }
            {
              t = not_null(m_24);
              {
                ATerm t_24 = NULL;
                t = p_0(t);
                {
                  r_24 = t;
                  {
                    ATerm u_24 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_24)), not_null(p_24));
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
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = t_9;
            {
              ATerm c_10 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_24 = NULL,z_24 = NULL;
                  ATerm y_24 = NULL;
                  t = SSLgetAnnotations(not_null(l_24));
                  {
                    y_24 = t;
                    if(((x_24 != NULL) && (x_24 != y_24)))
                      _fail(y_24);
                    else
                      x_24 = y_24;
                  }
                  {
                    t = not_null(m_24);
                    {
                      ATerm b_25 = NULL;
                      t = p_0(t);
                      {
                        z_24 = t;
                        {
                          ATerm c_25 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), not_null(x_24));
                          {
                            c_25 = t;
                            if(((b_25 != NULL) && (b_25 != c_25)))
                              _fail(c_25);
                            else
                              b_25 = c_25;
                          }
                          t = not_null(b_25);
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
                    ATerm f_25 = NULL,h_25 = NULL;
                    ATerm g_25 = NULL;
                    t = SSLgetAnnotations(not_null(l_24));
                    {
                      g_25 = t;
                      if(((f_25 != NULL) && (f_25 != g_25)))
                        _fail(g_25);
                      else
                        f_25 = g_25;
                    }
                    {
                      t = not_null(m_24);
                      {
                        ATerm j_25 = NULL;
                        t = p_0(t);
                        {
                          h_25 = t;
                          {
                            ATerm k_25 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_25)), not_null(f_25));
                            {
                              k_25 = t;
                              if(((j_25 != NULL) && (j_25 != k_25)))
                                _fail(k_25);
                              else
                                j_25 = k_25;
                            }
                            t = not_null(j_25);
                          }
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
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  o_27 = t;
  n_26 :
  if(match_cons(o_27, sym_Seq_2))
    {
      p_27 = ATgetArgument(o_27, 0);
      r_27 = ATgetArgument(o_27, 1);
      o_26 :
      if(match_cons(p_27, sym_Assign_1))
        {
          q_27 = ATgetArgument(p_27, 0);
          p_26 :
          if(match_cons(q_27, sym_Var_1))
            {
              h_27 = ATgetArgument(q_27, 0);
              q_26 :
              if(match_cons(r_27, sym_Seq_2))
                {
                  s_27 = ATgetArgument(r_27, 0);
                  t_27 = ATgetArgument(r_27, 1);
                  r_26 :
                  if(match_cons(s_27, sym_Build_1))
                    {
                      k_27 = ATgetArgument(s_27, 0);
                      s_26 :
                      if(match_cons(k_27, sym_Var_1))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          {
                            ATerm z_27 = NULL;
                            if(((h_27 != NULL) && (h_27 != l_27)))
                              _fail(l_27);
                            else
                              h_27 = l_27;
                            {
                              if(((z_27 != NULL) && (z_27 != t_27)))
                                _fail(t_27);
                              else
                                z_27 = t_27;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27))), not_null(z_27));
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
          if(match_cons(p_27, sym_Build_1))
            {
              q_27 = ATgetArgument(p_27, 0);
              t_26 :
              if(match_cons(r_27, sym_Scope_2))
                {
                  s_27 = ATgetArgument(r_27, 0);
                  t_27 = ATgetArgument(r_27, 1);
                  u_26 :
                  if(match_cons(t_27, sym_Seq_2))
                    {
                      u_27 = ATgetArgument(t_27, 0);
                      x_27 = ATgetArgument(t_27, 1);
                      v_26 :
                      if(match_cons(u_27, sym_Assign_1))
                        {
                          v_27 = ATgetArgument(u_27, 0);
                          w_26 :
                          if(match_cons(v_27, sym_Var_1))
                            {
                              w_27 = ATgetArgument(v_27, 0);
                              {
                                ATerm k_10 = t;
                                int l_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_29 = NULL,e_29 = NULL;
                                    ATerm m_10;
                                    m_10 = t;
                                    {
                                      ATerm d_29 = NULL;
                                      t = not_null(q_27);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(s_27));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), (ATerm) ATinsert(ATempty, not_null(w_27)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  d_29 = t;
                                                  if(((c_29 != NULL) && (c_29 != d_29)))
                                                    _fail(d_29);
                                                  else
                                                    c_29 = d_29;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = m_10;
                                    {
                                      ATerm f_29 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm)ATinsert(ATempty, not_null(q_27)), not_null(x_27));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          f_29 = t;
                                          if(((e_29 != NULL) && (e_29 != f_29)))
                                            _fail(f_29);
                                          else
                                            e_29 = f_29;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_29), not_null(e_29)));
                                    }
                                    ;
                                    LocalPopChoice(l_10);
                                  }
                                else
                                  {
                                    t = k_10;
                                    {
                                      ATerm k_29 = NULL,m_29 = NULL;
                                      ATerm n_10;
                                      n_10 = t;
                                      {
                                        ATerm l_29 = NULL;
                                        t = not_null(q_27);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(s_27));
                                            {
                                              t = is_subterm_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), (ATerm) ATinsert(ATempty, not_null(w_27)));
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
                                      t = n_10;
                                      {
                                        ATerm n_29 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm)ATinsert(ATempty, not_null(q_27)), not_null(x_27));
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_29), not_null(m_29)));
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
      if(match_cons(o_27, sym_Scope_2))
        {
          p_27 = ATgetArgument(o_27, 0);
          r_27 = ATgetArgument(o_27, 1);
          x_26 :
          if(match_cons(r_27, sym_Seq_2))
            {
              s_27 = ATgetArgument(r_27, 0);
              t_27 = ATgetArgument(r_27, 1);
              y_26 :
              if(match_cons(s_27, sym_Assign_1))
                {
                  k_27 = ATgetArgument(s_27, 0);
                  z_26 :
                  if(match_cons(k_27, sym_Var_1))
                    {
                      l_27 = ATgetArgument(k_27, 0);
                      a_27 :
                      if(match_cons(t_27, sym_Seq_2))
                        {
                          u_27 = ATgetArgument(t_27, 0);
                          x_27 = ATgetArgument(t_27, 1);
                          b_27 :
                          if(match_cons(u_27, sym_Assign_2))
                            {
                              v_27 = ATgetArgument(u_27, 0);
                              i_27 = ATgetArgument(u_27, 1);
                              c_27 :
                              if(match_cons(v_27, sym_Var_1))
                                {
                                  w_27 = ATgetArgument(v_27, 0);
                                  d_27 :
                                  if(match_cons(i_27, sym_Var_1))
                                    {
                                      j_27 = ATgetArgument(i_27, 0);
                                      {
                                        ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL;
                                        if(((l_27 != NULL) && (l_27 != j_27)))
                                          _fail(j_27);
                                        else
                                          l_27 = j_27;
                                        {
                                          if(((d_28 != NULL) && (d_28 != x_27)))
                                            _fail(x_27);
                                          else
                                            d_28 = x_27;
                                          {
                                            ATerm o_10;
                                            o_10 = t;
                                            {
                                              ATerm f_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(p_27));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(p_27));
                                                  {
                                                    t = is_subterm_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), (ATerm) ATinsert(ATempty, not_null(w_27)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          f_28 = t;
                                                          if(((e_28 != NULL) && (e_28 != f_28)))
                                                            _fail(f_28);
                                                          else
                                                            e_28 = f_28;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = o_10;
                                            {
                                              ATerm h_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))), not_null(d_28));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  h_28 = t;
                                                  if(((g_28 != NULL) && (g_28 != h_28)))
                                                    _fail(h_28);
                                                  else
                                                    g_28 = h_28;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))), not_null(g_28)));
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
                              if(match_cons(u_27, sym_Assign_1))
                                {
                                  v_27 = ATgetArgument(u_27, 0);
                                  e_27 :
                                  if(match_cons(v_27, sym_Var_1))
                                    {
                                      w_27 = ATgetArgument(v_27, 0);
                                      {
                                        ATerm m_28 = NULL,o_28 = NULL;
                                        ATerm p_10;
                                        p_10 = t;
                                        {
                                          ATerm n_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(p_27));
                                          {
                                            t = is_subterm_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(p_27));
                                              {
                                                t = is_subterm_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), (ATerm) ATinsert(ATempty, not_null(w_27)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      n_28 = t;
                                                      if(((m_28 != NULL) && (m_28 != n_28)))
                                                        _fail(n_28);
                                                      else
                                                        m_28 = n_28;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = p_10;
                                        {
                                          ATerm p_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))), not_null(x_27));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              p_28 = t;
                                              if(((o_28 != NULL) && (o_28 != p_28)))
                                                _fail(p_28);
                                              else
                                                o_28 = p_28;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))), not_null(o_28)));
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
                  if(match_cons(s_27, sym_Assign_2))
                    {
                      k_27 = ATgetArgument(s_27, 0);
                      m_27 = ATgetArgument(s_27, 1);
                      f_27 :
                      if(match_cons(k_27, sym_Var_1))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          g_27 :
                          if(match_cons(m_27, sym_Var_1))
                            {
                              n_27 = ATgetArgument(m_27, 0);
                              {
                                ATerm u_28 = NULL,w_28 = NULL;
                                ATerm b_11;
                                b_11 = t;
                                {
                                  ATerm v_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(p_27));
                                  {
                                    t = is_subterm_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), (ATerm) ATinsert(ATempty, not_null(l_27)));
                                      {
                                        t = diff_0(t);
                                        {
                                          v_28 = t;
                                          if(((u_28 != NULL) && (u_28 != v_28)))
                                            _fail(v_28);
                                          else
                                            u_28 = v_28;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = b_11;
                                {
                                  ATerm x_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_27))), not_null(t_27));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      x_28 = t;
                                      if(((w_28 != NULL) && (w_28 != x_28)))
                                        _fail(x_28);
                                      else
                                        w_28 = x_28;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_28), not_null(w_28));
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
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  h_30 = t;
  f_30 :
  if(match_cons(h_30, sym_Seq_2))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      g_30 :
      if(match_cons(j_30, sym_Let_2))
        {
          k_30 = ATgetArgument(j_30, 0);
          l_30 = ATgetArgument(j_30, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_30), not_null(l_30)));
        }
      else
        {
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
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym_Cong_2))
    {
      i_31 = ATgetArgument(h_31, 0);
      j_31 = ATgetArgument(h_31, 1);
      {
        ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,m_32 = NULL,o_32 = NULL,q_32 = NULL;
        ATerm c_11;
        c_11 = t;
        {
          ATerm s_31 = NULL;
          t = not_null(j_31);
          {
            ATerm v_31 = NULL;
            t = map_1(t, new_0);
            {
              s_31 = t;
              {
                if(((p_31 != NULL) && (p_31 != s_31)))
                  _fail(s_31);
                else
                  p_31 = s_31;
                {
                  t = not_null(p_31);
                  {
                    ATerm w_31 = NULL;
                    ATerm e_1 (ATerm t)
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
                    t = map_1(t, e_1);
                    {
                      v_31 = t;
                      {
                        if(((m_31 != NULL) && (m_31 != v_31)))
                          _fail(v_31);
                        else
                          m_31 = v_31;
                        {
                          ATerm x_31 = NULL;
                          t = new_0(t);
                          {
                            w_31 = t;
                            {
                              if(((n_31 != NULL) && (n_31 != w_31)))
                                _fail(w_31);
                              else
                                n_31 = w_31;
                              {
                                t = not_null(j_31);
                                {
                                  ATerm a_32 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    x_31 = t;
                                    {
                                      if(((q_31 != NULL) && (q_31 != x_31)))
                                        _fail(x_31);
                                      else
                                        q_31 = x_31;
                                      {
                                        t = not_null(q_31);
                                        {
                                          ATerm b_32 = NULL,l_32 = NULL;
                                          ATerm f_1 (ATerm t)
                                          {
                                            ATerm y_31 = NULL;
                                            ATerm z_31 = NULL;
                                            z_31 = t;
                                            if(((y_31 != NULL) && (y_31 != z_31)))
                                              _fail(z_31);
                                            else
                                              y_31 = z_31;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_31));
                                            return(t);
                                          }
                                          t = map_1(t, f_1);
                                          {
                                            a_32 = t;
                                            {
                                              if(((o_31 != NULL) && (o_31 != a_32)))
                                                _fail(a_32);
                                              else
                                                o_31 = a_32;
                                              {
                                                ATerm c_32 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), not_null(q_31));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    c_32 = t;
                                                    if(((b_32 != NULL) && (b_32 != c_32)))
                                                      _fail(c_32);
                                                    else
                                                      b_32 = c_32;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(j_31));
                                                  {
                                                    ATerm g_1 (ATerm t)
                                                    {
                                                      ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
                                                      d_32 = t;
                                                      a_31 :
                                                      if(match_cons(d_32, sym__2))
                                                        {
                                                          e_32 = ATgetArgument(d_32, 0);
                                                          h_32 = ATgetArgument(d_32, 1);
                                                          b_31 :
                                                          if(match_cons(e_32, sym__2))
                                                            {
                                                              f_32 = ATgetArgument(e_32, 0);
                                                              g_32 = ATgetArgument(e_32, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_32))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, g_1);
                                                    {
                                                      l_32 = t;
                                                      if(((r_31 != NULL) && (r_31 != l_32)))
                                                        _fail(l_32);
                                                      else
                                                        r_31 = l_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = c_11;
        {
          ATerm d_11;
          d_11 = t;
          {
            ATerm n_32 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), not_null(q_31));
            {
              t = conc_0(t);
              {
                n_32 = t;
                if(((m_32 != NULL) && (m_32 != n_32)))
                  _fail(n_32);
                else
                  m_32 = n_32;
              }
            }
          }
          t = d_11;
          {
            ATerm e_11;
            e_11 = t;
            {
              ATerm p_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_31), not_null(m_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))));
              {
                t = Mapp2_0(t);
                {
                  p_32 = t;
                  if(((o_32 != NULL) && (o_32 != p_32)))
                    _fail(p_32);
                  else
                    o_32 = p_32;
                }
              }
            }
            t = e_11;
            {
              ATerm r_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_31), not_null(o_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))));
              {
                t = Bapp2_0(t);
                {
                  r_32 = t;
                  if(((q_32 != NULL) && (q_32 != r_32)))
                    _fail(r_32);
                  else
                    q_32 = r_32;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_32)), not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_31)), not_null(q_32))));
            }
          }
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
  ATerm w_33 = NULL,x_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym_Build_1))
    {
      x_33 = ATgetArgument(w_33, 0);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
            ATerm d_34 = NULL;
            ATerm h_34 = NULL;
            t = new_0(t);
            {
              d_34 = t;
              {
                if(((b_34 != NULL) && (b_34 != d_34)))
                  _fail(d_34);
                else
                  b_34 = d_34;
                {
                  t = not_null(x_33);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
                      e_34 = t;
                      l_33 :
                      if(match_cons(e_34, sym_Anno_2))
                        {
                          f_34 = ATgetArgument(e_34, 0);
                          g_34 = ATgetArgument(e_34, 1);
                          {
                            if(((z_33 != NULL) && (z_33 != f_34)))
                              _fail(f_34);
                            else
                              z_33 = f_34;
                            {
                              if(((a_34 != NULL) && (a_34 != g_34)))
                                _fail(g_34);
                              else
                                a_34 = g_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_34));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, h_1);
                    {
                      h_34 = t;
                      if(((c_34 != NULL) && (c_34 != h_34)))
                        _fail(h_34);
                      else
                        c_34 = h_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_34)), not_null(z_33))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_34))));
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm k_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
                  ATerm m_34 = NULL;
                  ATerm p_34 = NULL;
                  t = new_0(t);
                  {
                    m_34 = t;
                    {
                      if(((k_34 != NULL) && (k_34 != m_34)))
                        _fail(m_34);
                      else
                        k_34 = m_34;
                      {
                        t = not_null(x_33);
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm n_34 = NULL,o_34 = NULL;
                            n_34 = t;
                            p_33 :
                            if(match_cons(n_34, sym_RootApp_1))
                              {
                                o_34 = ATgetArgument(n_34, 0);
                                {
                                  if(((j_34 != NULL) && (j_34 != o_34)))
                                    _fail(o_34);
                                  else
                                    j_34 = o_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34));
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
                            p_34 = t;
                            if(((l_34 != NULL) && (l_34 != p_34)))
                              _fail(p_34);
                            else
                              l_34 = p_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_34))));
                  ;
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
                    ATerm v_34 = NULL;
                    ATerm z_34 = NULL;
                    t = new_0(t);
                    {
                      v_34 = t;
                      {
                        if(((t_34 != NULL) && (t_34 != v_34)))
                          _fail(v_34);
                        else
                          t_34 = v_34;
                        {
                          t = not_null(x_33);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
                              w_34 = t;
                              t_33 :
                              if(match_cons(w_34, sym_App_2))
                                {
                                  x_34 = ATgetArgument(w_34, 0);
                                  y_34 = ATgetArgument(w_34, 1);
                                  {
                                    if(((r_34 != NULL) && (r_34 != x_34)))
                                      _fail(x_34);
                                    else
                                      r_34 = x_34;
                                    {
                                      if(((s_34 != NULL) && (s_34 != y_34)))
                                        _fail(y_34);
                                      else
                                        s_34 = y_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_34));
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
                              z_34 = t;
                              if(((u_34 != NULL) && (u_34 != z_34)))
                                _fail(z_34);
                              else
                                u_34 = z_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_34), not_null(s_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_34))));
                  }
                }
            }
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
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym__2))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_35)), not_null(p_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  y_35 = t;
  v_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      c_36 = ATgetArgument(y_35, 1);
      w_35 :
      if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
        {
          a_36 = ATgetFirst((ATermList) z_35);
          b_36 = (ATerm) ATgetNext((ATermList) z_35);
          x_35 :
          if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
            {
              d_36 = ATgetFirst((ATermList) c_36);
              e_36 = (ATerm) ATgetNext((ATermList) c_36);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(a_36), not_null(d_36)), (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(e_36)));
            }
          else
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
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  l_36 :
  if(match_cons(o_36, sym__2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      m_36 :
      if(((ATgetType(p_36) == AT_LIST) && ATisEmpty(p_36)))
        {
          n_36 :
          if(((ATgetType(q_36) == AT_LIST) && ATisEmpty(q_36)))
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
ATerm genzip_4 (ATerm t, ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm))
{
  ATerm s_36 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_113(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          t = u_113(t);
          {
            t = _2(t, w_113, s_36);
            t = v_113(t);
          }
        }
      }
    return(t);
  }
  t = s_36(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm y_113 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, y_113);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  r_37 = t;
  k_37 :
  if(match_cons(r_37, sym_Call_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      u_37 = ATgetArgument(r_37, 1);
      l_37 :
      if(match_cons(s_37, sym_SVar_1))
        {
          t_37 = ATgetArgument(s_37, 0);
          m_37 :
          if(match_string(t_37, "Anno_Cong__"))
            {
              n_37 :
              if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
                {
                  v_37 = ATgetFirst((ATermList) u_37);
                  y_37 = (ATerm) ATgetNext((ATermList) u_37);
                  o_37 :
                  if(match_cons(v_37, sym_Cong_2))
                    {
                      w_37 = ATgetArgument(v_37, 0);
                      x_37 = ATgetArgument(v_37, 1);
                      p_37 :
                      if(((ATgetType(y_37) == AT_LIST) && !(ATisEmpty(y_37))))
                        {
                          z_37 = ATgetFirst((ATermList) y_37);
                          a_38 = (ATerm) ATgetNext((ATermList) y_37);
                          q_37 :
                          if(((ATgetType(a_38) == AT_LIST) && ATisEmpty(a_38)))
                            {
                              {
                                ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,i_39 = NULL,k_39 = NULL,m_39 = NULL;
                                ATerm a_12;
                                a_12 = t;
                                {
                                  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(z_37));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      l_38 = t;
                                      g_37 :
                                      if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
                                        {
                                          m_38 = ATgetFirst((ATermList) l_38);
                                          n_38 = (ATerm) ATgetNext((ATermList) l_38);
                                          {
                                            ATerm q_38 = NULL;
                                            if(((e_38 != NULL) && (e_38 != m_38)))
                                              _fail(m_38);
                                            else
                                              e_38 = m_38;
                                            {
                                              if(((i_38 != NULL) && (i_38 != n_38)))
                                                _fail(n_38);
                                              else
                                                i_38 = n_38;
                                              {
                                                ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
                                                ATerm k_1 (ATerm t)
                                                {
                                                  ATerm o_38 = NULL;
                                                  ATerm p_38 = NULL;
                                                  p_38 = t;
                                                  if(((o_38 != NULL) && (o_38 != p_38)))
                                                    _fail(p_38);
                                                  else
                                                    o_38 = p_38;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38));
                                                  return(t);
                                                }
                                                t = map_1(t, k_1);
                                                {
                                                  q_38 = t;
                                                  {
                                                    if(((f_38 != NULL) && (f_38 != q_38)))
                                                      _fail(q_38);
                                                    else
                                                      f_38 = q_38;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(z_37));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          r_38 = t;
                                                          f_37 :
                                                          if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
                                                            {
                                                              s_38 = ATgetFirst((ATermList) r_38);
                                                              t_38 = (ATerm) ATgetNext((ATermList) r_38);
                                                              {
                                                                ATerm w_38 = NULL;
                                                                if(((g_38 != NULL) && (g_38 != s_38)))
                                                                  _fail(s_38);
                                                                else
                                                                  g_38 = s_38;
                                                                {
                                                                  if(((j_38 != NULL) && (j_38 != t_38)))
                                                                    _fail(t_38);
                                                                  else
                                                                    j_38 = t_38;
                                                                  {
                                                                    ATerm x_38 = NULL,h_39 = NULL;
                                                                    ATerm l_1 (ATerm t)
                                                                    {
                                                                      ATerm u_38 = NULL;
                                                                      ATerm v_38 = NULL;
                                                                      v_38 = t;
                                                                      if(((u_38 != NULL) && (u_38 != v_38)))
                                                                        _fail(v_38);
                                                                      else
                                                                        u_38 = v_38;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, l_1);
                                                                    {
                                                                      w_38 = t;
                                                                      {
                                                                        if(((h_38 != NULL) && (h_38 != w_38)))
                                                                          _fail(w_38);
                                                                        else
                                                                          h_38 = w_38;
                                                                        {
                                                                          ATerm y_38 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(j_38));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              y_38 = t;
                                                                              if(((x_38 != NULL) && (x_38 != y_38)))
                                                                                _fail(y_38);
                                                                              else
                                                                                x_38 = y_38;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(z_37)));
                                                                            {
                                                                              ATerm m_1 (ATerm t)
                                                                              {
                                                                                ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
                                                                                z_38 = t;
                                                                                c_37 :
                                                                                if(match_cons(z_38, sym__2))
                                                                                  {
                                                                                    a_39 = ATgetArgument(z_38, 0);
                                                                                    d_39 = ATgetArgument(z_38, 1);
                                                                                    d_37 :
                                                                                    if(match_cons(a_39, sym__2))
                                                                                      {
                                                                                        b_39 = ATgetArgument(a_39, 0);
                                                                                        c_39 = ATgetArgument(a_39, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_39))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_39)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, m_1);
                                                                              {
                                                                                h_39 = t;
                                                                                if(((k_38 != NULL) && (k_38 != h_39)))
                                                                                  _fail(h_39);
                                                                                else
                                                                                  k_38 = h_39;
                                                                              }
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
                                t = a_12;
                                {
                                  ATerm b_12;
                                  b_12 = t;
                                  {
                                    ATerm j_39 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(j_38));
                                    {
                                      t = conc_0(t);
                                      {
                                        j_39 = t;
                                        if(((i_39 != NULL) && (i_39 != j_39)))
                                          _fail(j_39);
                                        else
                                          i_39 = j_39;
                                      }
                                    }
                                  }
                                  t = b_12;
                                  {
                                    ATerm c_12;
                                    c_12 = t;
                                    {
                                      ATerm l_39 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_37), not_null(f_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_38))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          l_39 = t;
                                          if(((k_39 != NULL) && (k_39 != l_39)))
                                            _fail(l_39);
                                          else
                                            k_39 = l_39;
                                        }
                                      }
                                    }
                                    t = c_12;
                                    {
                                      ATerm n_39 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(w_37), not_null(h_38)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_38))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          n_39 = t;
                                          if(((m_39 != NULL) && (m_39 != n_39)))
                                            _fail(n_39);
                                          else
                                            m_39 = n_39;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(i_39)), not_null(g_38)), not_null(e_38)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(k_38)), not_null(m_39))));
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
ATerm As_2 (ATerm t, ATerm v_94 (ATerm), ATerm w_94 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_As_2))
    {
      i_40 = ATgetArgument(h_40, 0);
      j_40 = ATgetArgument(h_40, 1);
      {
        ATerm n_40 = NULL,p_40 = NULL;
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm r_40 = NULL;
            t = v_94(t);
            {
              p_40 = t;
              {
                t = not_null(j_40);
                {
                  ATerm t_40 = NULL;
                  t = w_94(t);
                  {
                    r_40 = t;
                    {
                      ATerm u_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(p_40), not_null(r_40)), not_null(n_40));
                      {
                        u_40 = t;
                        if(((t_40 != NULL) && (t_40 != u_40)))
                          _fail(u_40);
                        else
                          t_40 = u_40;
                      }
                      t = not_null(t_40);
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
ATerm Prim_2 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_Prim_2))
    {
      h_41 = ATgetArgument(g_41, 0);
      i_41 = ATgetArgument(g_41, 1);
      {
        ATerm m_41 = NULL,o_41 = NULL;
        ATerm n_41 = NULL;
        t = SSLgetAnnotations(not_null(g_41));
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
        {
          t = not_null(h_41);
          {
            ATerm q_41 = NULL;
            t = k_98(t);
            {
              o_41 = t;
              {
                t = not_null(i_41);
                {
                  ATerm s_41 = NULL;
                  t = l_98(t);
                  {
                    q_41 = t;
                    {
                      ATerm t_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(o_41), not_null(q_41)), not_null(m_41));
                      {
                        t_41 = t;
                        if(((s_41 != NULL) && (s_41 != t_41)))
                          _fail(t_41);
                        else
                          s_41 = t_41;
                      }
                      t = not_null(s_41);
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
ATerm Explode_2 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Explode_2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm l_42 = NULL,n_42 = NULL;
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(f_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        {
          t = not_null(g_42);
          {
            ATerm p_42 = NULL;
            t = o_94(t);
            {
              n_42 = t;
              {
                t = not_null(h_42);
                {
                  ATerm w_42 = NULL;
                  t = p_94(t);
                  {
                    p_42 = t;
                    {
                      ATerm x_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(n_42), not_null(p_42)), not_null(l_42));
                      {
                        x_42 = t;
                        if(((w_42 != NULL) && (w_42 != x_42)))
                          _fail(x_42);
                        else
                          w_42 = x_42;
                      }
                      t = not_null(w_42);
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
ATerm Op_2 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm))
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  w_43 :
  if(match_cons(g_44, sym_Op_2))
    {
      h_44 = ATgetArgument(g_44, 0);
      i_44 = ATgetArgument(g_44, 1);
      {
        ATerm m_44 = NULL,j_45 = NULL;
        ATerm n_44 = NULL;
        t = SSLgetAnnotations(not_null(g_44));
        {
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
        }
        {
          t = not_null(h_44);
          {
            ATerm l_45 = NULL;
            t = m_94(t);
            {
              j_45 = t;
              {
                t = not_null(i_44);
                {
                  ATerm n_45 = NULL;
                  t = n_94(t);
                  {
                    l_45 = t;
                    {
                      ATerm o_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(l_45)), not_null(m_44));
                      {
                        o_45 = t;
                        if(((n_45 != NULL) && (n_45 != o_45)))
                          _fail(o_45);
                        else
                          n_45 = o_45;
                      }
                      t = not_null(n_45);
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
ATerm pat_td_1 (ATerm t, ATerm o_107 (ATerm))
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_107(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                t = pat_td_1(t, o_107);
                return(t);
              }
              t = fetch_1(t, o_1);
              return(t);
            }
            t = Op_2(t, _id, n_1);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm r_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = pat_td_1(t, o_107);
                    return(t);
                  }
                  t = Explode_2(t, _id, p_1);
                  ;
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = r_12;
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = pat_td_1(t, o_107);
                          return(t);
                        }
                        t = Explode_2(t, q_1, _id);
                        ;
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        {
                          ATerm v_12 = t;
                          int w_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_1 (ATerm t)
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = pat_td_1(t, o_107);
                                  return(t);
                                }
                                t = fetch_1(t, s_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, r_1);
                              ;
                              LocalPopChoice(w_12);
                            }
                          else
                            {
                              t = v_12;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = pat_td_1(t, o_107);
                                  return(t);
                                }
                                t = As_2(t, _id, t_1);
                              }
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
  ATerm u_46 = NULL,v_46 = NULL;
  u_46 = t;
  r_46 :
  if(match_cons(u_46, sym_Match_1))
    {
      v_46 = ATgetArgument(u_46, 0);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
            ATerm m_47 = NULL;
            ATerm q_47 = NULL;
            t = new_0(t);
            {
              m_47 = t;
              {
                if(((k_47 != NULL) && (k_47 != m_47)))
                  _fail(m_47);
                else
                  k_47 = m_47;
                {
                  t = not_null(v_46);
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
                      n_47 = t;
                      e_46 :
                      if(match_cons(n_47, sym_Anno_2))
                        {
                          o_47 = ATgetArgument(n_47, 0);
                          p_47 = ATgetArgument(n_47, 1);
                          {
                            if(((i_47 != NULL) && (i_47 != o_47)))
                              _fail(o_47);
                            else
                              i_47 = o_47;
                            {
                              if(((j_47 != NULL) && (j_47 != p_47)))
                                _fail(p_47);
                              else
                                j_47 = p_47;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_47)), not_null(i_47));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, u_1);
                    {
                      q_47 = t;
                      if(((l_47 != NULL) && (l_47 != q_47)))
                        _fail(q_47);
                      else
                        l_47 = q_47;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_47)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_47)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_47))))));
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_47 = NULL,t_47 = NULL,w_47 = NULL;
                  ATerm x_47 = NULL;
                  ATerm a_48 = NULL;
                  t = new_0(t);
                  {
                    x_47 = t;
                    {
                      if(((t_47 != NULL) && (t_47 != x_47)))
                        _fail(x_47);
                      else
                        t_47 = x_47;
                      {
                        t = not_null(v_46);
                        {
                          ATerm v_1 (ATerm t)
                          {
                            ATerm y_47 = NULL,z_47 = NULL;
                            y_47 = t;
                            i_46 :
                            if(match_cons(y_47, sym_RootApp_1))
                              {
                                z_47 = ATgetArgument(y_47, 0);
                                {
                                  if(((s_47 != NULL) && (s_47 != z_47)))
                                    _fail(z_47);
                                  else
                                    s_47 = z_47;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_47));
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
                            a_48 = t;
                            if(((w_47 != NULL) && (w_47 != a_48)))
                              _fail(a_48);
                            else
                              w_47 = a_48;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_47))), not_null(s_47))));
                  ;
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  {
                    ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
                    ATerm g_48 = NULL;
                    ATerm k_48 = NULL;
                    t = new_0(t);
                    {
                      g_48 = t;
                      {
                        if(((e_48 != NULL) && (e_48 != g_48)))
                          _fail(g_48);
                        else
                          e_48 = g_48;
                        {
                          t = not_null(v_46);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
                              h_48 = t;
                              p_46 :
                              if(match_cons(h_48, sym_App_2))
                                {
                                  i_48 = ATgetArgument(h_48, 0);
                                  j_48 = ATgetArgument(h_48, 1);
                                  {
                                    if(((d_48 != NULL) && (d_48 != i_48)))
                                      _fail(i_48);
                                    else
                                      d_48 = i_48;
                                    {
                                      if(((c_48 != NULL) && (c_48 != j_48)))
                                        _fail(j_48);
                                      else
                                        c_48 = j_48;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_48));
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
                              k_48 = t;
                              if(((f_48 != NULL) && (f_48 != k_48)))
                                _fail(k_48);
                              else
                                f_48 = k_48;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_48)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_48)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_48)), not_null(d_48)))));
                  }
                }
            }
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
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_Cong_2))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      {
        ATerm i_49 = NULL;
        ATerm m_49 = NULL;
        t = not_null(f_49);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm j_49 = NULL,k_49 = NULL;
            k_49 = t;
            a_49 :
            if(match_cons(k_49, sym_Match_1))
              {
                j_49 = ATgetArgument(k_49, 0);
                t = not_null(j_49);
              }
            else
              {
                if(match_cons(k_49, sym_Id_0))
                  {
                    t = term_w_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, x_1);
          {
            m_49 = t;
            if(((i_49 != NULL) && (i_49 != m_49)))
              _fail(m_49);
            else
              i_49 = m_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(e_49), not_null(i_49)));
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
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  s_49 :
  if(match_cons(u_49, sym_Scope_2))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      t_49 :
      if(((ATgetType(v_49) == AT_LIST) && ATisEmpty(v_49)))
        {
          t = not_null(w_49);
        }
      else
        {
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
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  j_50 :
  if(match_cons(y_50, sym_Where_1))
    {
      z_50 = ATgetArgument(y_50, 0);
      k_50 :
      if(match_cons(z_50, sym_Seq_2))
        {
          x_50 = ATgetArgument(z_50, 0);
          t_50 = ATgetArgument(z_50, 1);
          n_50 :
          if(match_cons(x_50, sym_Where_1))
            {
              s_50 = ATgetArgument(x_50, 0);
              o_50 :
              if(match_cons(t_50, sym_Seq_2))
                {
                  u_50 = ATgetArgument(t_50, 0);
                  w_50 = ATgetArgument(t_50, 1);
                  p_50 :
                  if(match_cons(u_50, sym_Build_1))
                    {
                      v_50 = ATgetArgument(u_50, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_50)), not_null(w_50))));
                    }
                  else
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
          if(match_cons(z_50, sym_Where_1))
            {
              x_50 = ATgetArgument(z_50, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(x_50));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(y_50, sym_Test_1))
        {
          z_50 = ATgetArgument(y_50, 0);
          q_50 :
          if(match_cons(z_50, sym_Test_1))
            {
              x_50 = ATgetArgument(z_50, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_50));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_50, sym_Not_1))
            {
              z_50 = ATgetArgument(y_50, 0);
              r_50 :
              if(match_cons(z_50, sym_Not_1))
                {
                  x_50 = ATgetArgument(z_50, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_50));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(y_50, sym_LChoice_2))
                {
                  z_50 = ATgetArgument(y_50, 0);
                  a_51 = ATgetArgument(y_50, 1);
                  {
                    if(((z_50 != NULL) && (z_50 != a_51)))
                      _fail(a_51);
                    else
                      z_50 = a_51;
                    t = not_null(z_50);
                  }
                }
              else
                {
                  if(match_cons(y_50, sym_Choice_2))
                    {
                      z_50 = ATgetArgument(y_50, 0);
                      a_51 = ATgetArgument(y_50, 1);
                      {
                        if(((z_50 != NULL) && (z_50 != a_51)))
                          _fail(a_51);
                        else
                          z_50 = a_51;
                        t = not_null(z_50);
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
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  b_52 = t;
  s_51 :
  if(match_cons(b_52, sym_LChoice_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      f_52 = ATgetArgument(b_52, 1);
      y_51 :
      if(match_cons(c_52, sym_LChoice_2))
        {
          d_52 = ATgetArgument(c_52, 0);
          e_52 = ATgetArgument(c_52, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_52), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_52), not_null(f_52)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(b_52, sym_Seq_2))
        {
          c_52 = ATgetArgument(b_52, 0);
          f_52 = ATgetArgument(b_52, 1);
          z_51 :
          if(match_cons(c_52, sym_Seq_2))
            {
              d_52 = ATgetArgument(c_52, 0);
              e_52 = ATgetArgument(c_52, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_52), not_null(f_52)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(b_52, sym_Choice_2))
            {
              c_52 = ATgetArgument(b_52, 0);
              f_52 = ATgetArgument(b_52, 1);
              a_52 :
              if(match_cons(c_52, sym_Choice_2))
                {
                  d_52 = ATgetArgument(c_52, 0);
                  e_52 = ATgetArgument(c_52, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_52), (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_52), not_null(f_52)));
                }
              else
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
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
  a_54 = t;
  t_53 :
  if(match_cons(a_54, sym_Lets_2))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_54), not_null(c_54));
    }
  else
    {
      if(match_cons(a_54, sym_LChoices_1))
        {
          b_54 = ATgetArgument(a_54, 0);
          u_53 :
          if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
            {
              x_53 = ATgetFirst((ATermList) b_54);
              y_53 = (ATerm) ATgetNext((ATermList) b_54);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_53), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_53)));
            }
          else
            {
              if(((ATgetType(b_54) == AT_LIST) && ATisEmpty(b_54)))
                {
                  t = term_p_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(a_54, sym_Choices_1))
            {
              b_54 = ATgetArgument(a_54, 0);
              v_53 :
              if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
                {
                  x_53 = ATgetFirst((ATermList) b_54);
                  y_53 = (ATerm) ATgetNext((ATermList) b_54);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_53), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_53)));
                }
              else
                {
                  if(((ATgetType(b_54) == AT_LIST) && ATisEmpty(b_54)))
                    {
                      t = term_p_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(a_54, sym_Seqs_1))
                {
                  b_54 = ATgetArgument(a_54, 0);
                  w_53 :
                  if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
                    {
                      x_53 = ATgetFirst((ATermList) b_54);
                      y_53 = (ATerm) ATgetNext((ATermList) b_54);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_53), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_53)));
                    }
                  else
                    {
                      if(((ATgetType(b_54) == AT_LIST) && ATisEmpty(b_54)))
                        {
                          t = term_x_13;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(a_54, sym_DefaultVarDec_1))
                    {
                      b_54 = ATgetArgument(a_54, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_54), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14));
                    }
                  else
                    {
                      if(match_cons(a_54, sym_InfixApp_3))
                        {
                          b_54 = ATgetArgument(a_54, 0);
                          c_54 = ATgetArgument(a_54, 1);
                          z_53 = ATgetArgument(a_54, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_54), (ATerm) ATmakeAppl(sym_Op_2, term_c_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_53)), not_null(b_54))));
                        }
                      else
                        {
                          if(match_cons(a_54, sym_BAM_3))
                            {
                              b_54 = ATgetArgument(a_54, 0);
                              c_54 = ATgetArgument(a_54, 1);
                              z_53 = ATgetArgument(a_54, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(z_53))), not_null(b_54)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_54))));
                            }
                          else
                            {
                              if(match_cons(a_54, sym_AM_2))
                                {
                                  b_54 = ATgetArgument(a_54, 0);
                                  c_54 = ATgetArgument(a_54, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_54), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_54)));
                                }
                              else
                                {
                                  if(match_cons(a_54, sym_MA_2))
                                    {
                                      b_54 = ATgetArgument(a_54, 0);
                                      c_54 = ATgetArgument(a_54, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_54)), not_null(c_54));
                                    }
                                  else
                                    {
                                      if(match_cons(a_54, sym_BA_2))
                                        {
                                          b_54 = ATgetArgument(a_54, 0);
                                          c_54 = ATgetArgument(a_54, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_54)), not_null(b_54));
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
  ATerm w_55 = NULL,x_55 = NULL;
  w_55 = t;
  u_55 :
  if(match_cons(w_55, sym_Where_1))
    {
      x_55 = ATgetArgument(w_55, 0);
      v_55 :
      if(match_cons(x_55, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  a_56 :
  if(match_cons(c_56, sym_LChoice_2))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      b_56 :
      if(match_cons(e_56, sym_Fail_0))
        {
          t = not_null(d_56);
        }
      else
        {
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
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  i_56 :
  if(match_cons(l_56, sym_LChoice_2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      j_56 :
      if(match_cons(m_56, sym_Fail_0))
        {
          t = not_null(n_56);
        }
      else
        {
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
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  v_56 = t;
  t_56 :
  if(match_cons(v_56, sym_Choice_2))
    {
      w_56 = ATgetArgument(v_56, 0);
      x_56 = ATgetArgument(v_56, 1);
      u_56 :
      if(match_cons(x_56, sym_Fail_0))
        {
          t = not_null(w_56);
        }
      else
        {
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
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  b_57 :
  if(match_cons(d_57, sym_Choice_2))
    {
      e_57 = ATgetArgument(d_57, 0);
      f_57 = ATgetArgument(d_57, 1);
      c_57 :
      if(match_cons(e_57, sym_Fail_0))
        {
          t = not_null(f_57);
        }
      else
        {
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
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_Cong_2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      {
        t = not_null(n_57);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm s_57 = NULL;
            s_57 = t;
            j_57 :
            if(!(match_cons(s_57, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, y_1);
        }
        t = term_p_7;
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
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  w_57 :
  if(match_cons(y_57, sym_Path_2))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      x_57 :
      if(match_cons(a_58, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm g_58 = NULL,h_58 = NULL;
  g_58 = t;
  e_58 :
  if(match_cons(g_58, sym_One_1))
    {
      h_58 = ATgetArgument(g_58, 0);
      f_58 :
      if(match_cons(h_58, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  n_58 :
  if(match_cons(p_58, sym_Some_1))
    {
      q_58 = ATgetArgument(p_58, 0);
      o_58 :
      if(match_cons(q_58, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  t_58 :
  if(match_cons(v_58, sym_Rec_2))
    {
      w_58 = ATgetArgument(v_58, 0);
      x_58 = ATgetArgument(v_58, 1);
      u_58 :
      if(match_cons(x_58, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  d_59 = t;
  b_59 :
  if(match_cons(d_59, sym_Scope_2))
    {
      e_59 = ATgetArgument(d_59, 0);
      f_59 = ATgetArgument(d_59, 1);
      c_59 :
      if(match_cons(f_59, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  j_59 :
  if(match_cons(l_59, sym_Seq_2))
    {
      m_59 = ATgetArgument(l_59, 0);
      n_59 = ATgetArgument(l_59, 1);
      k_59 :
      if(match_cons(m_59, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm t_59 = NULL,b_60 = NULL;
  t_59 = t;
  r_59 :
  if(match_cons(t_59, sym_Not_1))
    {
      b_60 = ATgetArgument(t_59, 0);
      s_59 :
      if(match_cons(b_60, sym_Fail_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm g_60 = NULL,h_60 = NULL;
  g_60 = t;
  e_60 :
  if(match_cons(g_60, sym_Test_1))
    {
      h_60 = ATgetArgument(g_60, 0);
      f_60 :
      if(match_cons(h_60, sym_Fail_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
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
                  t = F3_0(t);
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
                        t = F5_0(t);
                        ;
                        LocalPopChoice(y_14);
                      }
                    else
                      {
                        t = x_14;
                        {
                          ATerm z_14 = t;
                          int h_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(h_15);
                            }
                          else
                            {
                              t = z_14;
                              {
                                ATerm i_15 = t;
                                int j_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(j_15);
                                  }
                                else
                                  {
                                    t = i_15;
                                    {
                                      ATerm m_15 = t;
                                      int n_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(n_15);
                                        }
                                      else
                                        {
                                          t = m_15;
                                          {
                                            ATerm q_15 = t;
                                            int s_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(s_15);
                                              }
                                            else
                                              {
                                                t = q_15;
                                                {
                                                  ATerm t_15 = t;
                                                  int u_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(u_15);
                                                    }
                                                  else
                                                    {
                                                      t = t_15;
                                                      {
                                                        ATerm g_16 = t;
                                                        int h_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(h_16);
                                                          }
                                                        else
                                                          {
                                                            t = g_16;
                                                            {
                                                              ATerm i_16 = t;
                                                              int j_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_16);
                                                                }
                                                              else
                                                                {
                                                                  t = i_16;
                                                                  {
                                                                    ATerm k_16 = t;
                                                                    int l_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(l_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_16;
                                                                        {
                                                                          ATerm t_16 = t;
                                                                          int u_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(u_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_16;
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
  ATerm m_60 = NULL,n_60 = NULL;
  m_60 = t;
  k_60 :
  if(match_cons(m_60, sym_Match_1))
    {
      n_60 = ATgetArgument(m_60, 0);
      l_60 :
      if(match_cons(n_60, sym_Wld_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm s_60 = NULL,t_60 = NULL;
  s_60 = t;
  q_60 :
  if(match_cons(s_60, sym_Where_1))
    {
      t_60 = ATgetArgument(s_60, 0);
      r_60 :
      if(match_cons(t_60, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm y_60 = NULL,z_60 = NULL;
  y_60 = t;
  w_60 :
  if(match_cons(y_60, sym_All_1))
    {
      z_60 = ATgetArgument(y_60, 0);
      x_60 :
      if(match_cons(z_60, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  e_61 = t;
  c_61 :
  if(match_cons(e_61, sym_Rec_2))
    {
      f_61 = ATgetArgument(e_61, 0);
      g_61 = ATgetArgument(e_61, 1);
      d_61 :
      if(match_cons(g_61, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
  m_61 = t;
  k_61 :
  if(match_cons(m_61, sym_Scope_2))
    {
      n_61 = ATgetArgument(m_61, 0);
      o_61 = ATgetArgument(m_61, 1);
      l_61 :
      if(match_cons(o_61, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  s_61 :
  if(match_cons(u_61, sym_LChoice_2))
    {
      v_61 = ATgetArgument(u_61, 0);
      w_61 = ATgetArgument(u_61, 1);
      t_61 :
      if(match_cons(v_61, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL;
  d_62 = t;
  b_62 :
  if(match_cons(d_62, sym_Seq_2))
    {
      e_62 = ATgetArgument(d_62, 0);
      f_62 = ATgetArgument(d_62, 1);
      c_62 :
      if(match_cons(f_62, sym_Id_0))
        {
          t = not_null(e_62);
        }
      else
        {
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
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  j_62 :
  if(match_cons(l_62, sym_Seq_2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      k_62 :
      if(match_cons(m_62, sym_Id_0))
        {
          t = not_null(n_62);
        }
      else
        {
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
  ATerm t_62 = NULL,u_62 = NULL;
  t_62 = t;
  r_62 :
  if(match_cons(t_62, sym_Not_1))
    {
      u_62 = ATgetArgument(t_62, 0);
      s_62 :
      if(match_cons(u_62, sym_Id_0))
        {
          t = term_p_7;
        }
      else
        {
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
  ATerm z_62 = NULL,a_63 = NULL;
  z_62 = t;
  x_62 :
  if(match_cons(z_62, sym_Test_1))
    {
      a_63 = ATgetArgument(z_62, 0);
      y_62 :
      if(match_cons(a_63, sym_Id_0))
        {
          t = term_x_13;
        }
      else
        {
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
  ATerm v_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = v_16;
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
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  {
                    ATerm g_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = g_17;
                        {
                          ATerm p_17 = t;
                          int q_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(q_17);
                            }
                          else
                            {
                              t = p_17;
                              {
                                ATerm r_17 = t;
                                int c_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(c_18);
                                  }
                                else
                                  {
                                    t = r_17;
                                    {
                                      ATerm e_18 = t;
                                      int f_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
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
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(h_18);
                                              }
                                            else
                                              {
                                                t = g_18;
                                                {
                                                  ATerm i_18 = t;
                                                  int k_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(k_18);
                                                    }
                                                  else
                                                    {
                                                      t = i_18;
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
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm r_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = r_18;
            {
              ATerm u_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = u_18;
                  {
                    ATerm b_19 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = b_19;
                        {
                          ATerm e_19 = t;
                          int f_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(f_19);
                            }
                          else
                            {
                              t = e_19;
                              {
                                ATerm g_19 = t;
                                int h_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(h_19);
                                  }
                                else
                                  {
                                    t = g_19;
                                    {
                                      ATerm k_19 = t;
                                      int l_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
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
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(n_19);
                                              }
                                            else
                                              {
                                                t = m_19;
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
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
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
                        t = FuseScope_0(t);
                        ;
                        LocalPopChoice(d_20);
                      }
                    else
                      {
                        t = c_20;
                        {
                          ATerm i_20 = t;
                          int j_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              ;
                              LocalPopChoice(j_20);
                            }
                          else
                            {
                              t = i_20;
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
ATerm repeat_1 (ATerm t, ATerm p_125 (ATerm))
{
  ATerm c_63 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = p_125(t);
      t = c_63(t);
      return(t);
    }
    t = try_1(t, z_1);
    return(t);
  }
  t = c_63(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm j_109 (ATerm))
{
  t = j_109(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = downup_1(t, j_109);
      return(t);
    }
    t = _all(t, a_2);
    t = j_109(t);
  }
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, c_2);
    return(t);
  }
  t = downup_1(t, b_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym_SDef_3))
    {
      l_63 = ATgetArgument(k_63, 0);
      m_63 = ATgetArgument(k_63, 1);
      n_63 = ATgetArgument(k_63, 2);
      {
        ATerm s_63 = NULL,u_63 = NULL;
        ATerm t_63 = NULL;
        t = SSLgetAnnotations(not_null(k_63));
        {
          t_63 = t;
          if(((s_63 != NULL) && (s_63 != t_63)))
            _fail(t_63);
          else
            s_63 = t_63;
        }
        {
          t = not_null(l_63);
          {
            ATerm w_63 = NULL;
            t = v_99(t);
            {
              u_63 = t;
              {
                t = not_null(m_63);
                {
                  ATerm y_63 = NULL;
                  t = w_99(t);
                  {
                    w_63 = t;
                    {
                      t = not_null(n_63);
                      {
                        ATerm a_64 = NULL;
                        t = x_99(t);
                        {
                          y_63 = t;
                          {
                            ATerm b_64 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_63), not_null(w_63), not_null(y_63)), not_null(s_63));
                            {
                              b_64 = t;
                              if(((a_64 != NULL) && (a_64 != b_64)))
                                _fail(b_64);
                              else
                                a_64 = b_64;
                            }
                            t = not_null(a_64);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm n_64 = NULL,o_64 = NULL;
  n_64 = t;
  m_64 :
  if(match_cons(n_64, sym_Strategies_1))
    {
      o_64 = ATgetArgument(n_64, 0);
      {
        ATerm r_64 = NULL,t_64 = NULL;
        ATerm s_64 = NULL;
        t = SSLgetAnnotations(not_null(n_64));
        {
          s_64 = t;
          if(((r_64 != NULL) && (r_64 != s_64)))
            _fail(s_64);
          else
            r_64 = s_64;
        }
        {
          t = not_null(o_64);
          {
            ATerm v_64 = NULL;
            t = k_93(t);
            {
              t_64 = t;
              {
                ATerm w_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_64)), not_null(r_64));
                {
                  w_64 = t;
                  if(((v_64 != NULL) && (v_64 != w_64)))
                    _fail(w_64);
                  else
                    v_64 = w_64;
                }
                t = not_null(v_64);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm g_65 = NULL,h_65 = NULL;
  g_65 = t;
  f_65 :
  if(match_cons(g_65, sym_Specification_1))
    {
      h_65 = ATgetArgument(g_65, 0);
      {
        ATerm k_65 = NULL,m_65 = NULL;
        ATerm l_65 = NULL;
        t = SSLgetAnnotations(not_null(g_65));
        {
          l_65 = t;
          if(((k_65 != NULL) && (k_65 != l_65)))
            _fail(l_65);
          else
            k_65 = l_65;
        }
        {
          t = not_null(h_65);
          {
            ATerm o_65 = NULL;
            t = p_93(t);
            {
              m_65 = t;
              {
                ATerm p_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_65)), not_null(k_65));
                {
                  p_65 = t;
                  if(((o_65 != NULL) && (o_65 != p_65)))
                    _fail(p_65);
                  else
                    o_65 = p_65;
                }
                t = not_null(o_65);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm l_107 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm h_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, l_107);
            return(t);
          }
          t = map_1(t, h_2);
          return(t);
        }
        t = Strategies_1(t, g_2);
        return(t);
      }
      t = Cons_2(t, f_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_2);
    return(t);
  }
  t = Specification_1(t, d_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym__2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      {
        ATerm g_66 = NULL,i_66 = NULL;
        ATerm h_66 = NULL;
        t = SSLgetAnnotations(not_null(a_66));
        {
          h_66 = t;
          if(((g_66 != NULL) && (g_66 != h_66)))
            _fail(h_66);
          else
            g_66 = h_66;
        }
        {
          t = not_null(b_66);
          {
            ATerm k_66 = NULL;
            t = x_91(t);
            {
              i_66 = t;
              {
                t = not_null(c_66);
                {
                  ATerm m_66 = NULL;
                  t = y_91(t);
                  {
                    k_66 = t;
                    {
                      ATerm n_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_66), not_null(k_66)), not_null(g_66));
                      {
                        n_66 = t;
                        if(((m_66 != NULL) && (m_66 != n_66)))
                          _fail(n_66);
                        else
                          m_66 = n_66;
                      }
                      t = not_null(m_66);
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
  ATerm n_20;
  n_20 = t;
  {
    ATerm x_66 = NULL;
    ATerm y_66 = NULL;
    t = term_o_20;
    {
      t = whoami_0(t);
      {
        y_66 = t;
        if(((x_66 != NULL) && (x_66 != y_66)))
          _fail(y_66);
        else
          x_66 = y_66;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_20), not_null(x_66)), term_u_20));
      {
        t = printnl_0(t);
        {
          t = term_x_20;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  c_67 = t;
  b_67 :
  if(match_cons(c_67, sym__2))
    {
      d_67 = ATgetArgument(c_67, 0);
      e_67 = ATgetArgument(c_67, 1);
      {
        ATerm f_21;
        f_21 = t;
        t = SSL_printnl(not_null(d_67), not_null(e_67));
        t = f_21;
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
  ATerm j_67 = NULL;
  j_67 = t;
  t = SSL_implode_string(not_null(j_67));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
        o_67 = t;
        n_67 :
        if(((ATgetType(o_67) == AT_LIST) && !(ATisEmpty(o_67))))
          {
            p_67 = ATgetFirst((ATermList) o_67);
            q_67 = (ATerm) ATgetNext((ATermList) o_67);
            {
              t = not_null(p_67);
              {
                ATerm i_2 (ATerm t)
                {
                  t = not_null(q_67);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_2);
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
  ATerm a_68 = NULL;
  ATerm c_68 = NULL;
  a_68 = t;
  {
    ATerm d_68 = NULL;
    ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
    t = not_null(a_68);
    {
      d_68 = t;
      {
        t = SSL_explode_term(not_null(d_68));
        {
          f_68 = t;
          y_67 :
          if(match_cons(f_68, sym__2))
            {
              g_68 = ATgetArgument(f_68, 0);
              h_68 = ATgetArgument(f_68, 1);
              z_67 :
              if(match_string(g_68, ""))
                {
                  if(((c_68 != NULL) && (c_68 != h_68)))
                    _fail(h_68);
                  else
                    c_68 = h_68;
                }
              else
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
      t = not_null(c_68);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_115 (ATerm))
{
  ATerm l_68 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_68);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          t = Nil_0(t);
          t = x_115(t);
        }
      }
    return(t);
  }
  t = l_68(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
  o_68 = t;
  n_68 :
  if(match_cons(o_68, sym__2))
    {
      p_68 = ATgetArgument(o_68, 0);
      q_68 = ATgetArgument(o_68, 1);
      {
        t = not_null(p_68);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(q_68);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  t = SSL_explode_string(not_null(v_68));
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
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm q_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_2);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = q_21;
            {
              ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
              e_69 = t;
              d_69 :
              if(match_cons(e_69, sym_Path_1))
                {
                  f_69 = ATgetArgument(e_69, 0);
                  t = not_null(f_69);
                }
              else
                {
                  if(match_cons(e_69, sym_Var_1))
                    {
                      f_69 = ATgetArgument(e_69, 0);
                      {
                        t = not_null(f_69);
                        {
                          ATerm z_21 = t;
                          int a_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_22);
                            }
                          else
                            {
                              t = z_21;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = term_e_22;
                                  return(t);
                                }
                                t = debug_1(t, l_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_69, sym_Prefix_2))
                        {
                          f_69 = ATgetArgument(e_69, 0);
                          g_69 = ATgetArgument(e_69, 1);
                          {
                            ATerm l_69 = NULL,n_69 = NULL;
                            ATerm k_22;
                            k_22 = t;
                            {
                              ATerm m_69 = NULL;
                              t = not_null(f_69);
                              {
                                t = eval_config_0(t);
                                {
                                  m_69 = t;
                                  if(((l_69 != NULL) && (l_69 != m_69)))
                                    _fail(m_69);
                                  else
                                    l_69 = m_69;
                                }
                              }
                            }
                            t = k_22;
                            {
                              ATerm o_69 = NULL;
                              t = not_null(g_69);
                              {
                                t = eval_config_0(t);
                                {
                                  o_69 = t;
                                  if(((n_69 != NULL) && (n_69 != o_69)))
                                    _fail(o_69);
                                  else
                                    n_69 = o_69;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_69), not_null(n_69));
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
  ATerm w_69 = NULL;
  w_69 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(w_69));
    {
      t = table_get_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_22;
            r_22 = t;
            {
              ATerm y_69 = NULL;
              ATerm z_69 = NULL;
              z_69 = t;
              if(((y_69 != NULL) && (y_69 != z_69)))
                _fail(z_69);
              else
                y_69 = z_69;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_22, not_null(w_69), not_null(y_69));
                t = table_put_0(t);
              }
            }
            t = r_22;
          }
          return(t);
        }
        t = try_1(t, m_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_132 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm s_22;
    s_22 = t;
    {
      ATerm d_70 = NULL;
      ATerm e_70 = NULL;
      t = term_t_22;
      {
        t = get_config_0(t);
        {
          e_70 = t;
          if(((d_70 != NULL) && (d_70 != e_70)))
            _fail(e_70);
          else
            d_70 = e_70;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_70), term_u_22);
        t = geq_0(t);
      }
    }
    t = s_22;
    t = e_132(t);
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  k_70 = t;
  i_70 :
  if(match_cons(k_70, sym__2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      j_70 :
      if(match_cons(m_70, sym_Stream_1))
        {
          n_70 = ATgetArgument(m_70, 0);
          {
            ATerm q_70 = NULL;
            t = SSL_fputc(not_null(l_70), not_null(n_70));
            {
              ATerm r_70 = NULL;
              r_70 = t;
              if(((q_70 != NULL) && (q_70 != r_70)))
                _fail(r_70);
              else
                q_70 = r_70;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_70));
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
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL;
  y_70 = t;
  w_70 :
  if(match_cons(y_70, sym__2))
    {
      z_70 = ATgetArgument(y_70, 0);
      b_71 = ATgetArgument(y_70, 1);
      x_70 :
      if(match_cons(z_70, sym_Stream_1))
        {
          a_71 = ATgetArgument(z_70, 0);
          {
            ATerm k_71 = NULL;
            t = SSL_write_term_to_stream_text(not_null(a_71), not_null(b_71));
            {
              ATerm l_71 = NULL;
              l_71 = t;
              if(((k_71 != NULL) && (k_71 != l_71)))
                _fail(l_71);
              else
                k_71 = l_71;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_71));
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
  ATerm o_2 (ATerm t)
  {
    ATerm p_71 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm q_71 = NULL;
      q_71 = t;
      if(((p_71 != NULL) && (p_71 != q_71)))
        _fail(q_71);
      else
        p_71 = q_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(p_71));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, o_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  w_71 = t;
  u_71 :
  if(match_cons(w_71, sym__2))
    {
      x_71 = ATgetArgument(w_71, 0);
      z_71 = ATgetArgument(w_71, 1);
      v_71 :
      if(match_cons(x_71, sym_Stream_1))
        {
          y_71 = ATgetArgument(x_71, 0);
          {
            ATerm c_72 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(y_71), not_null(z_71));
            {
              ATerm d_72 = NULL;
              d_72 = t;
              if(((c_72 != NULL) && (c_72 != d_72)))
                _fail(d_72);
              else
                c_72 = d_72;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_72));
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
ATerm WriteToFile_1 (ATerm t, ATerm a_131 (ATerm))
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  j_72 :
  if(match_cons(k_72, sym__2))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      {
        ATerm p_72 = NULL,r_72 = NULL;
        t = not_null(l_72);
        {
          ATerm q_72 = NULL;
          q_72 = t;
          if(((p_72 != NULL) && (p_72 != q_72)))
            _fail(q_72);
          else
            p_72 = q_72;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_72), term_w_22);
            {
              t = open_stream_0(t);
              {
                ATerm s_72 = NULL;
                s_72 = t;
                if(((r_72 != NULL) && (r_72 != s_72)))
                  _fail(s_72);
                else
                  r_72 = s_72;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_72), not_null(m_72));
                  {
                    t = a_131(t);
                    {
                      t = fclose_0(t);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_73 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm g_23 = t;
      int i_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
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
          t = option_defined_1(t, q_2);
          ;
          LocalPopChoice(i_23);
        }
      else
        {
          t = g_23;
          {
            ATerm d_73 = NULL;
            t = term_k_23;
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
    t = _2(t, p_2, _id);
  }
  t = e_23;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(a_73);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm l_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
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
            t = option_defined_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_23);
        }
      else
        {
          t = l_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_134 (ATerm))
{
  ATerm k_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
  ATerm o_23;
  o_23 = t;
  t = dtime_0(t);
  t = o_23;
  {
    t = c_134(t);
    {
      ATerm t_23;
      t_23 = t;
      {
        ATerm l_73 = NULL;
        t = dtime_0(t);
        {
          l_73 = t;
          if(((k_73 != NULL) && (k_73 != l_73)))
            _fail(l_73);
          else
            k_73 = l_73;
        }
      }
      t = t_23;
      {
        m_73 = t;
        j_73 :
        if(match_cons(m_73, sym__2))
          {
            n_73 = ATgetArgument(m_73, 0);
            o_73 = ATgetArgument(m_73, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_73)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_73))), not_null(o_73));
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
  ATerm w_73 = NULL,x_73 = NULL;
  ATerm d_74 (ATerm t)
  {
    t = SSL_fclose(not_null(x_73));
    return(t);
  }
  x_73 = t;
  v_73 :
  if(match_cons(x_73, sym_Stream_1))
    {
      w_73 = ATgetArgument(x_73, 0);
      {
        ATerm u_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(w_73));
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = u_23;
            t = d_74(t);
          }
      }
    }
  else
    {
      t = d_74(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  g_74 = t;
  f_74 :
  if(match_cons(g_74, sym_Stream_1))
    {
      h_74 = ATgetArgument(g_74, 0);
      t = SSL_read_term_from_stream(not_null(h_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_130 (ATerm))
{
  ATerm x_23;
  x_23 = t;
  {
    ATerm q_74 = NULL,x_74 = NULL;
    ATerm y_23;
    y_23 = t;
    {
      ATerm r_74 = NULL;
      t = m_130(t);
      {
        r_74 = t;
        if(((q_74 != NULL) && (q_74 != r_74)))
          _fail(r_74);
        else
          q_74 = r_74;
      }
    }
    t = y_23;
    {
      ATerm y_74 = NULL;
      y_74 = t;
      if(((x_74 != NULL) && (x_74 != y_74)))
        _fail(y_74);
      else
        x_74 = y_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_74)), not_null(q_74)));
        t = printnl_0(t);
      }
    }
  }
  t = x_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  d_75 :
  if(match_cons(e_75, sym__2))
    {
      f_75 = ATgetArgument(e_75, 0);
      g_75 = ATgetArgument(e_75, 1);
      {
        ATerm j_75 = NULL;
        t = SSL_fopen(not_null(f_75), not_null(g_75));
        {
          ATerm k_75 = NULL;
          k_75 = t;
          if(((j_75 != NULL) && (j_75 != k_75)))
            _fail(k_75);
          else
            j_75 = k_75;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_75));
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
  ATerm o_75 = NULL;
  o_75 = t;
  t = SSL_is_string(not_null(o_75));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_75 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_75 = NULL;
    t_75 = t;
    if(((s_75 != NULL) && (s_75 != t_75)))
      _fail(t_75);
    else
      s_75 = t_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_75));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm y_75 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm z_75 = NULL;
    z_75 = t;
    if(((y_75 != NULL) && (y_75 != z_75)))
      _fail(z_75);
    else
      y_75 = z_75;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_75));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm c_76 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm d_76 = NULL;
    d_76 = t;
    if(((c_76 != NULL) && (c_76 != d_76)))
      _fail(d_76);
    else
      c_76 = d_76;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_76));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm o_76 = NULL;
  o_76 = t;
  n_76 :
  if(match_cons(o_76, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(o_76, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(o_76, sym_stdin_0))
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
  ATerm z_76 = NULL;
  ATerm b_77 = NULL,c_77 = NULL;
  z_76 = t;
  {
    ATerm d_77 = NULL;
    ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
    t = not_null(z_76);
    {
      d_77 = t;
      {
        t = SSL_explode_term(not_null(d_77));
        {
          f_77 = t;
          v_76 :
          if(match_cons(f_77, sym__2))
            {
              g_77 = ATgetArgument(f_77, 0);
              h_77 = ATgetArgument(f_77, 1);
              w_76 :
              if(match_string(g_77, ""))
                {
                  y_76 :
                  if(((ATgetType(h_77) == AT_LIST) && !(ATisEmpty(h_77))))
                    {
                      i_77 = ATgetFirst((ATermList) h_77);
                      j_77 = (ATerm) ATgetNext((ATermList) h_77);
                      {
                        if(((c_77 != NULL) && (c_77 != i_77)))
                          _fail(i_77);
                        else
                          c_77 = i_77;
                        if(((b_77 != NULL) && (b_77 != j_77)))
                          _fail(j_77);
                        else
                          b_77 = j_77;
                      }
                    }
                  else
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
    t = not_null(c_77);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym__2))
    {
      z_77 = ATgetArgument(y_77, 0);
      a_78 = ATgetArgument(y_77, 1);
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm b_78 = NULL,c_78 = NULL;
                    b_78 = t;
                    v_77 :
                    if(match_cons(b_78, sym_Path_1))
                      {
                        c_78 = ATgetArgument(b_78, 0);
                        t = not_null(c_78);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
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
  ATerm k_78 = NULL;
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_78 = NULL;
      ATerm j_78 = NULL;
      j_78 = t;
      if(((i_78 != NULL) && (i_78 != j_78)))
        _fail(j_78);
      else
        i_78 = j_78;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_78), term_f_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_g_24;
          return(t);
        }
        t = debug_1(t, w_2);
        _fail(t);
      }
    }
  {
    ATerm h_24;
    h_24 = t;
    {
      ATerm l_78 = NULL;
      t = read_from_stream_0(t);
      {
        l_78 = t;
        if(((k_78 != NULL) && (k_78 != l_78)))
          _fail(l_78);
        else
          k_78 = l_78;
      }
    }
    t = h_24;
    {
      t = fclose_0(t);
      t = not_null(k_78);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_112 (ATerm), ATerm u_112 (ATerm))
{
  ATerm q_78 = NULL,s_78 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm r_78 = NULL;
    t = t_112(t);
    {
      r_78 = t;
      if(((q_78 != NULL) && (q_78 != r_78)))
        _fail(r_78);
      else
        q_78 = r_78;
    }
  }
  t = i_24;
  {
    ATerm t_78 = NULL;
    t = u_112(t);
    {
      t_78 = t;
      if(((s_78 != NULL) && (s_78 != t_78)))
        _fail(t_78);
      else
        s_78 = t_78;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_78), not_null(s_78));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_78 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm a_79 = NULL,b_79 = NULL;
          a_79 = t;
          x_78 :
          if(match_cons(a_79, sym_Input_1))
            {
              b_79 = ATgetArgument(a_79, 0);
              if(((z_78 != NULL) && (z_78 != b_79)))
                _fail(b_79);
              else
                z_78 = b_79;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm c_79 = NULL;
          t = term_s_24;
          {
            c_79 = t;
            if(((z_78 != NULL) && (z_78 != c_79)))
              _fail(c_79);
            else
              z_78 = c_79;
          }
        }
      }
  }
  t = j_24;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(z_78);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm h_79 = NULL;
    h_79 = t;
    f_79 :
    if(!(match_string(h_79, "-k")))
      {
        if(!(match_string(h_79, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm v_24;
    v_24 = t;
    {
      ATerm i_79 = NULL;
      ATerm j_79 = NULL;
      t = string_to_int_0(t);
      {
        j_79 = t;
        if(((i_79 != NULL) && (i_79 != j_79)))
          _fail(j_79);
        else
          i_79 = j_79;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_24, not_null(i_79));
        t = set_config_0(t);
      }
    }
    t = v_24;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_a_25;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_79 = NULL;
  m_79 = t;
  t = SSL_string_to_int(not_null(m_79));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm u_79 = NULL;
        u_79 = t;
        p_79 :
        if(!(match_string(u_79, "-S")))
          {
            if(!(match_string(u_79, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_l_25;
        t = set_config_0(t);
        t = term_m_25;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_n_25;
        return(t);
      }
      t = Option_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm v_79 = NULL;
              v_79 = t;
              q_79 :
              if(!(match_string(v_79, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm y_79 = NULL;
              ATerm q_25;
              q_25 = t;
              {
                ATerm w_79 = NULL;
                ATerm x_79 = NULL;
                t = string_to_int_0(t);
                {
                  x_79 = t;
                  if(((w_79 != NULL) && (w_79 != x_79)))
                    _fail(x_79);
                  else
                    w_79 = x_79;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(w_79));
                  t = set_config_0(t);
                }
              }
              t = q_25;
              {
                ATerm z_79 = NULL;
                z_79 = t;
                if(((y_79 != NULL) && (y_79 != z_79)))
                  _fail(z_79);
                else
                  y_79 = z_79;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_79));
              }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = term_r_25;
              return(t);
            }
            t = ArgOption_3(t, f_3, g_3, h_3);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm i_3 (ATerm t)
              {
                ATerm a_80 = NULL;
                a_80 = t;
                t_79 :
                if(!(match_string(a_80, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_t_25;
                t = set_config_0(t);
                t = term_u_25;
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = term_v_25;
                return(t);
              }
              t = Option_3(t, i_3, j_3, k_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm l_80 = NULL;
    l_80 = t;
    i_80 :
    if(!(match_string(l_80, "-o")))
      {
        if(!(match_string(l_80, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm o_80 = NULL;
    ATerm y_25;
    y_25 = t;
    {
      ATerm m_80 = NULL;
      ATerm n_80 = NULL;
      n_80 = t;
      if(((m_80 != NULL) && (m_80 != n_80)))
        _fail(n_80);
      else
        m_80 = n_80;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(m_80));
        t = set_config_0(t);
      }
    }
    t = y_25;
    {
      ATerm p_80 = NULL;
      p_80 = t;
      if(((o_80 != NULL) && (o_80 != p_80)))
        _fail(p_80);
      else
        o_80 = p_80;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_80));
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm x_80 = NULL;
          x_80 = t;
          w_80 :
          if(!(match_string(x_80, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_e_26;
          t = set_config_0(t);
          t = term_f_26;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_g_26;
          return(t);
        }
        t = Option_3(t, p_3, q_3, r_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
  d_81 = t;
  b_81 :
  if(match_string(d_81, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(d_81) == AT_LIST) && !(ATisEmpty(d_81))))
        {
          e_81 = ATgetFirst((ATermList) d_81);
          f_81 = (ATerm) ATgetNext((ATermList) d_81);
          c_81 :
          if(((ATgetType(f_81) == AT_LIST) && !(ATisEmpty(f_81))))
            {
              g_81 = ATgetFirst((ATermList) f_81);
              h_81 = (ATerm) ATgetNext((ATermList) f_81);
              {
                ATerm l_81 = NULL;
                ATerm h_26;
                h_26 = t;
                {
                  t = not_null(e_81);
                  t = k_0(t);
                }
                t = h_26;
                {
                  ATerm m_81 = NULL;
                  t = not_null(g_81);
                  {
                    t = m_0(t);
                    {
                      m_81 = t;
                      if(((l_81 != NULL) && (l_81 != m_81)))
                        _fail(m_81);
                      else
                        l_81 = m_81;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_81)), not_null(l_81));
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
  ATerm s_3 (ATerm t)
  {
    ATerm m_82 = NULL;
    m_82 = t;
    a_82 :
    if(!(match_string(m_82, "-i")))
      {
        if(!(match_string(m_82, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm h_83 = NULL;
    ATerm i_26;
    i_26 = t;
    {
      ATerm f_83 = NULL;
      ATerm g_83 = NULL;
      g_83 = t;
      if(((f_83 != NULL) && (f_83 != g_83)))
        _fail(g_83);
      else
        f_83 = g_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(f_83));
        t = set_config_0(t);
      }
    }
    t = i_26;
    {
      ATerm o_84 = NULL;
      o_84 = t;
      if(((h_83 != NULL) && (h_83 != o_84)))
        _fail(o_84);
      else
        h_83 = o_84;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_83));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = ArgOption_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm y_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = y_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm s_84 = NULL;
  t = report_run_time_0(t);
  {
    ATerm t_84 = NULL;
    t = term_o_20;
    {
      t = whoami_0(t);
      {
        t_84 = t;
        if(((s_84 != NULL) && (s_84 != t_84)))
          _fail(t_84);
        else
          s_84 = t_84;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, term_b_28), not_null(s_84)));
      {
        t = printnl_0(t);
        {
          t = term_x_20;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_c_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_84 = NULL;
  w_84 = t;
  t = SSL_TicksToSeconds(not_null(w_84));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
  b_85 = t;
  a_85 :
  if(match_cons(b_85, sym__2))
    {
      c_85 = ATgetArgument(b_85, 0);
      d_85 = ATgetArgument(b_85, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_85), not_null(d_85));
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            t = SSL_addr(not_null(c_85), not_null(d_85));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_119 (ATerm), ATerm v_119 (ATerm))
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_119(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
        k_85 = t;
        j_85 :
        if(((ATgetType(k_85) == AT_LIST) && !(ATisEmpty(k_85))))
          {
            l_85 = ATgetFirst((ATermList) k_85);
            m_85 = (ATerm) ATgetNext((ATermList) k_85);
            {
              ATerm p_85 = NULL;
              ATerm q_85 = NULL;
              t = not_null(m_85);
              {
                t = foldr_2(t, u_119, v_119);
                {
                  q_85 = t;
                  if(((p_85 != NULL) && (p_85 != q_85)))
                    _fail(q_85);
                  else
                    p_85 = q_85;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_85), not_null(p_85));
                t = v_119(t);
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
ATerm crush_2 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm))
{
  ATerm x_85 = NULL;
  ATerm z_85 = NULL;
  x_85 = t;
  {
    ATerm a_86 = NULL;
    ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
    t = not_null(x_85);
    {
      a_86 = t;
      {
        t = SSL_explode_term(not_null(a_86));
        {
          f_86 = t;
          w_85 :
          if(match_cons(f_86, sym__2))
            {
              g_86 = ATgetArgument(f_86, 0);
              h_86 = ATgetArgument(f_86, 1);
              if(((z_85 != NULL) && (z_85 != h_86)))
                _fail(h_86);
              else
                z_85 = h_86;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_85);
      t = foldr_2(t, s_117, t_117);
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
    ATerm v_3 (ATerm t)
    {
      t = term_i_25;
      return(t);
    }
    t = crush_2(t, v_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  n_86 = t;
  m_86 :
  if(match_cons(n_86, sym__2))
    {
      o_86 = ATgetArgument(n_86, 0);
      p_86 = ATgetArgument(n_86, 1);
      {
        ATerm q_28;
        q_28 = t;
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_86), not_null(p_86));
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              t = SSL_gtr(not_null(o_86), not_null(p_86));
            }
        }
        t = q_28;
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
  ATerm h_87 = NULL;
  ATerm t_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL;
      q_89 = t;
      g_87 :
      if(match_cons(q_89, sym__2))
        {
          r_89 = ATgetArgument(q_89, 0);
          s_89 = ATgetArgument(q_89, 1);
          {
            if(((h_87 != NULL) && (h_87 != r_89)))
              _fail(r_89);
            else
              h_87 = r_89;
            if(((h_87 != NULL) && (h_87 != s_89)))
              _fail(s_89);
            else
              h_87 = s_89;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = t_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_132 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm z_28;
    z_28 = t;
    {
      ATerm v_89 = NULL;
      ATerm w_89 = NULL;
      t = term_t_22;
      {
        t = get_config_0(t);
        {
          w_89 = t;
          if(((v_89 != NULL) && (v_89 != w_89)))
            _fail(w_89);
          else
            v_89 = w_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_89), term_x_20);
        t = geq_0(t);
      }
    }
    t = z_28;
    t = d_132(t);
    return(t);
  }
  t = try_1(t, w_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm a_90 = NULL,c_90 = NULL;
    ATerm a_29;
    a_29 = t;
    {
      ATerm b_90 = NULL;
      t = run_time_0(t);
      {
        b_90 = t;
        if(((a_90 != NULL) && (a_90 != b_90)))
          _fail(b_90);
        else
          a_90 = b_90;
      }
    }
    t = a_29;
    {
      ATerm d_90 = NULL;
      t = term_o_20;
      {
        t = whoami_0(t);
        {
          d_90 = t;
          if(((c_90 != NULL) && (c_90 != d_90)))
            _fail(d_90);
          else
            c_90 = d_90;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), not_null(a_90)), term_b_29), not_null(c_90)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_i_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_90 = NULL;
  k_90 = t;
  j_90 :
  if(match_cons(k_90, sym_Version_0))
    {
      ATerm m_90 = NULL,o_90 = NULL;
      ATerm h_29;
      h_29 = t;
      {
        ATerm n_90 = NULL;
        t = SSLgetAnnotations(not_null(k_90));
        {
          n_90 = t;
          if(((m_90 != NULL) && (m_90 != n_90)))
            _fail(n_90);
          else
            m_90 = n_90;
        }
      }
      t = h_29;
      {
        ATerm p_90 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_90));
        {
          p_90 = t;
          if(((o_90 != NULL) && (o_90 != p_90)))
            _fail(p_90);
          else
            o_90 = p_90;
        }
        t = not_null(o_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_135 (ATerm))
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_29;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              {
                ATerm r_29 = t;
                int s_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(s_29);
                  }
                else
                  {
                    t = r_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
      }
    }
  t = a_135(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_90 = NULL;
  u_90 = t;
  t = SSL_table_create(not_null(u_90));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_90 = NULL;
  y_90 = t;
  {
    ATerm t_29;
    t_29 = t;
    {
      t = term_u_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, not_null(y_90));
          t = table_put_0(t);
        }
      }
    }
    t = t_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_91 = NULL;
  c_91 = t;
  t = SSL_table_destroy(not_null(c_91));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  t = SSL_exit(not_null(g_91));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_137 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_115 (ATerm))
{
  ATerm j_91 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = Cons_2(t, i_115, j_91);
      }
    return(t);
  }
  t = j_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL;
  s_91 = t;
  p_91 :
  if(((ATgetType(s_91) == AT_LIST) && !(ATisEmpty(s_91))))
    {
      q_91 = ATgetFirst((ATermList) s_91);
      r_91 = (ATerm) ATgetNext((ATermList) s_91);
      {
        ATerm v_91 = NULL;
        t = not_null(r_91);
        {
          ATerm y_29;
          y_29 = t;
          {
            ATerm w_91 = NULL,a_92 = NULL,c_92 = NULL;
            ATerm z_29;
            z_29 = t;
            {
              ATerm z_91 = NULL;
              t = i_0(t);
              {
                z_91 = t;
                if(((w_91 != NULL) && (w_91 != z_91)))
                  _fail(z_91);
                else
                  w_91 = z_91;
              }
            }
            t = z_29;
            {
              ATerm b_92 = NULL;
              t = not_null(q_91);
              {
                t = g_0(t);
                {
                  b_92 = t;
                  if(((a_92 != NULL) && (a_92 != b_92)))
                    _fail(b_92);
                  else
                    a_92 = b_92;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_91)), not_null(a_92));
                {
                  c_92 = t;
                  if(((v_91 != NULL) && (v_91 != c_92)))
                    _fail(c_92);
                  else
                    v_91 = c_92;
                }
              }
            }
          }
          t = y_29;
          {
            ATerm z_3 (ATerm t)
            {
              t = not_null(v_91);
              return(t);
            }
            t = reverse_acc_2(t, g_0, z_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_91) == AT_LIST) && ATisEmpty(s_91)))
        {
          {
            t = term_o_20;
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
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_137 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm n_92 = NULL,o_92 = NULL;
  n_92 = t;
  m_92 :
  if(match_cons(n_92, sym_Program_1))
    {
      o_92 = ATgetArgument(n_92, 0);
      {
        ATerm r_92 = NULL,t_92 = NULL;
        ATerm s_92 = NULL;
        t = SSLgetAnnotations(not_null(n_92));
        {
          s_92 = t;
          if(((r_92 != NULL) && (r_92 != s_92)))
            _fail(s_92);
          else
            r_92 = s_92;
        }
        {
          t = not_null(o_92);
          {
            ATerm v_92 = NULL;
            t = f_107(t);
            {
              t_92 = t;
              {
                ATerm w_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_92)), not_null(r_92));
                {
                  w_92 = t;
                  if(((v_92 != NULL) && (v_92 != w_92)))
                    _fail(w_92);
                  else
                    v_92 = w_92;
                }
                t = not_null(v_92);
              }
            }
          }
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
  ATerm f_93 = NULL;
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_93 = NULL;
      t = term_c_28;
      {
        t = get_config_0(t);
        {
          i_93 = t;
          if(((f_93 != NULL) && (f_93 != i_93)))
            _fail(i_93);
          else
            f_93 = i_93;
        }
      }
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm j_93 = NULL;
            j_93 = t;
            if(((f_93 != NULL) && (f_93 != j_93)))
              _fail(j_93);
            else
              f_93 = j_93;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = option_defined_1(t, b_4);
      }
    }
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(f_93);
        return(t);
      }
      t = short_description_1(t, h_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_4);
    {
      t = term_c_30;
      {
        t = echo_0(t);
        {
          t = term_m_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm l_93 = NULL;
                  ATerm m_93 = NULL;
                  m_93 = t;
                  if(((l_93 != NULL) && (l_93 != m_93)))
                    _fail(m_93);
                  else
                    l_93 = m_93;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_93)), term_n_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_4);
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm n_93 = NULL;
                    ATerm o_93 = NULL;
                    ATerm k_4 (ATerm t)
                    {
                      t = not_null(f_93);
                      return(t);
                    }
                    t = long_description_1(t, k_4);
                    {
                      o_93 = t;
                      if(((n_93 != NULL) && (n_93 != o_93)))
                        _fail(o_93);
                      else
                        n_93 = o_93;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_93)), term_o_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_4);
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
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_107 (ATerm))
{
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  y_93 :
  if(match_cons(z_93, sym_Undefined_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      {
        ATerm d_94 = NULL,f_94 = NULL;
        ATerm e_94 = NULL;
        t = SSLgetAnnotations(not_null(z_93));
        {
          e_94 = t;
          if(((d_94 != NULL) && (d_94 != e_94)))
            _fail(e_94);
          else
            d_94 = e_94;
        }
        {
          t = not_null(a_94);
          {
            ATerm h_94 = NULL;
            t = g_107(t);
            {
              f_94 = t;
              {
                ATerm i_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_94)), not_null(d_94));
                {
                  i_94 = t;
                  if(((h_94 != NULL) && (h_94 != i_94)))
                    _fail(i_94);
                  else
                    h_94 = i_94;
                }
                t = not_null(h_94);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_115 (ATerm))
{
  ATerm r_94 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_115, _id);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = Cons_2(t, _id, r_94);
      }
    return(t);
  }
  t = r_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_136 (ATerm))
{
  t = fetch_1(t, a_136);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,x_94 = NULL;
  t_94 = t;
  s_94 :
  if(((ATgetType(t_94) == AT_LIST) && ATisEmpty(t_94)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_94) == AT_LIST) && !(ATisEmpty(t_94))))
        {
          u_94 = ATgetFirst((ATermList) t_94);
          x_94 = (ATerm) ATgetNext((ATermList) t_94);
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
  ATerm t_30;
  t_30 = t;
  {
    ATerm a_95 = NULL;
    ATerm d_95 = NULL;
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        {
          ATerm b_95 = NULL;
          ATerm c_95 = NULL;
          c_95 = t;
          if(((b_95 != NULL) && (b_95 != c_95)))
            _fail(c_95);
          else
            b_95 = c_95;
          t = (ATerm) ATinsert(ATempty, not_null(b_95));
        }
      }
    {
      d_95 = t;
      if(((a_95 != NULL) && (a_95 != d_95)))
        _fail(d_95);
      else
        a_95 = d_95;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_23, not_null(a_95));
      t = printnl_0(t);
    }
  }
  t = t_30;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_c_28;
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
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym_Help_0))
    {
      ATerm m_95 = NULL,o_95 = NULL;
      ATerm y_30;
      y_30 = t;
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
      t = y_30;
      {
        ATerm p_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_95));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_111 (ATerm))
{
  ATerm z_30 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_111(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = z_30;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        ATerm v_95 = NULL;
        v_95 = t;
        t_95 :
        if(!(match_string(v_95, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_k_31;
        t = set_config_0(t);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_l_31;
        return(t);
      }
      t = Option_3(t, l_4, m_4, n_4);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm w_95 = NULL;
          w_95 = t;
          u_95 :
          if(!(match_string(w_95, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_k_31;
          {
            t = set_config_0(t);
            {
              t = term_j_32;
              t = set_config_0(t);
            }
          }
          t = term_k_32;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_s_32;
          return(t);
        }
        t = Option_3(t, o_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
  z_95 = t;
  y_95 :
  if(match_cons(z_95, sym__2))
    {
      a_96 = ATgetArgument(z_95, 0);
      b_96 = ATgetArgument(z_95, 1);
      t = SSL_table_get(not_null(a_96), not_null(b_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  i_96 = t;
  h_96 :
  if(match_cons(i_96, sym__3))
    {
      j_96 = ATgetArgument(i_96, 0);
      k_96 = ATgetArgument(i_96, 1);
      l_96 = ATgetArgument(i_96, 2);
      {
        ATerm t_32;
        t_32 = t;
        {
          ATerm q_96 = NULL;
          ATerm r_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_96), not_null(k_96));
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
                t = (ATerm) ATempty;
              }
            {
              r_96 = t;
              if(((q_96 != NULL) && (q_96 != r_96)))
                _fail(r_96);
              else
                q_96 = r_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_96), not_null(k_96), (ATerm) ATinsert(CheckATermList(not_null(q_96)), not_null(l_96)));
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
ATerm register_usage_1 (ATerm t, ATerm f_137 (ATerm))
{
  ATerm v_96 = NULL;
  ATerm w_96 = NULL;
  t = term_o_20;
  {
    t = f_137(t);
    {
      w_96 = t;
      if(((v_96 != NULL) && (v_96 != w_96)))
        _fail(w_96);
      else
        v_96 = w_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_30, term_e_30, not_null(v_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
  c_97 = t;
  b_97 :
  if(match_string(c_97, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(c_97) == AT_LIST) && !(ATisEmpty(c_97))))
        {
          d_97 = ATgetFirst((ATermList) c_97);
          e_97 = (ATerm) ATgetNext((ATermList) c_97);
          {
            ATerm h_97 = NULL;
            ATerm w_32;
            w_32 = t;
            {
              t = not_null(d_97);
              t = a_0(t);
            }
            t = w_32;
            {
              ATerm i_97 = NULL;
              t = term_o_20;
              {
                t = b_0(t);
                {
                  i_97 = t;
                  if(((h_97 != NULL) && (h_97 != i_97)))
                    _fail(i_97);
                  else
                    h_97 = i_97;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_97)), not_null(h_97));
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
  ATerm s_4 (ATerm t)
  {
    ATerm n_97 = NULL;
    n_97 = t;
    m_97 :
    if(!(match_string(n_97, "--help")))
      {
        if(!(match_string(n_97, "-h")))
          {
            if(!(match_string(n_97, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_x_32;
    {
      t = set_config_0(t);
      t = term_y_32;
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_z_32;
    return(t);
  }
  t = Option_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
  s_97 = t;
  p_97 :
  if(((ATgetType(s_97) == AT_LIST) && !(ATisEmpty(s_97))))
    {
      t_97 = ATgetFirst((ATermList) s_97);
      u_97 = (ATerm) ATgetNext((ATermList) s_97);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm))
{
  ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL;
  e_98 = t;
  d_98 :
  if(((ATgetType(e_98) == AT_LIST) && !(ATisEmpty(e_98))))
    {
      f_98 = ATgetFirst((ATermList) e_98);
      g_98 = (ATerm) ATgetNext((ATermList) e_98);
      {
        ATerm m_98 = NULL,o_98 = NULL;
        ATerm n_98 = NULL;
        t = SSLgetAnnotations(not_null(e_98));
        {
          n_98 = t;
          if(((m_98 != NULL) && (m_98 != n_98)))
            _fail(n_98);
          else
            m_98 = n_98;
        }
        {
          t = not_null(f_98);
          {
            ATerm q_98 = NULL;
            t = g_93(t);
            {
              o_98 = t;
              {
                t = not_null(g_98);
                {
                  ATerm s_98 = NULL;
                  t = h_93(t);
                  {
                    q_98 = t;
                    {
                      ATerm t_98 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_98)), not_null(o_98)), not_null(m_98));
                      {
                        t_98 = t;
                        if(((s_98 != NULL) && (s_98 != t_98)))
                          _fail(t_98);
                        else
                          s_98 = t_98;
                      }
                      t = not_null(s_98);
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
  ATerm d_99 = NULL;
  d_99 = t;
  c_99 :
  if(((ATgetType(d_99) == AT_LIST) && ATisEmpty(d_99)))
    {
      {
        ATerm f_99 = NULL,h_99 = NULL;
        ATerm a_33;
        a_33 = t;
        {
          ATerm g_99 = NULL;
          t = SSLgetAnnotations(not_null(d_99));
          {
            g_99 = t;
            if(((f_99 != NULL) && (f_99 != g_99)))
              _fail(g_99);
            else
              f_99 = g_99;
          }
        }
        t = a_33;
        {
          ATerm i_99 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_99));
          {
            i_99 = t;
            if(((h_99 != NULL) && (h_99 != i_99)))
              _fail(i_99);
            else
              h_99 = i_99;
          }
          t = not_null(h_99);
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
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
  o_99 = t;
  n_99 :
  if(match_cons(o_99, sym__2))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_22, not_null(p_99), not_null(q_99));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_137 (ATerm))
{
  ATerm b_33;
  b_33 = t;
  {
    ATerm y_4 (ATerm t)
    {
      t = term_c_33;
      t = d_137(t);
      return(t);
    }
    t = try_1(t, y_4);
  }
  t = b_33;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm b_100 = NULL;
      ATerm d_33;
      d_33 = t;
      {
        ATerm z_99 = NULL;
        ATerm a_100 = NULL;
        a_100 = t;
        if(((z_99 != NULL) && (z_99 != a_100)))
          _fail(a_100);
        else
          z_99 = a_100;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_28, not_null(z_99));
          t = set_config_0(t);
        }
      }
      t = d_33;
      {
        ATerm c_100 = NULL;
        c_100 = t;
        if(((b_100 != NULL) && (b_100 != c_100)))
          _fail(c_100);
        else
          b_100 = c_100;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_100));
      }
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              {
                t = d_137(t);
                t = Cons_2(t, _id, b_5);
              }
            }
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_4, b_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  ATerm i_33;
  i_33 = t;
  {
    ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
    l_100 = t;
    h_100 :
    if(match_cons(l_100, sym__3))
      {
        m_100 = ATgetArgument(l_100, 0);
        n_100 = ATgetArgument(l_100, 1);
        o_100 = ATgetArgument(l_100, 2);
        {
          if(((i_100 != NULL) && (i_100 != m_100)))
            _fail(m_100);
          else
            i_100 = m_100;
          {
            if(((j_100 != NULL) && (j_100 != n_100)))
              _fail(n_100);
            else
              j_100 = n_100;
            {
              if(((k_100 != NULL) && (k_100 != o_100)))
                _fail(o_100);
              else
                k_100 = o_100;
              t = SSL_table_put(not_null(i_100), not_null(j_100), not_null(k_100));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_137 (ATerm))
{
  ATerm r_100 = NULL;
  ATerm j_33;
  j_33 = t;
  {
    t = term_k_33;
    t = table_put_0(t);
  }
  t = j_33;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_137(t);
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm o_33 = t;
            int q_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(q_33);
              }
            else
              {
                t = o_33;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, c_5);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_33;
            u_33 = t;
            {
              ATerm y_33 = t;
              int i_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_34);
                }
              else
                {
                  t = y_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = u_33;
            {
              t = system_usage_0(t);
              {
                t = term_i_25;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            {
              ATerm q_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_35;
                  b_35 = t;
                  {
                    t = term_f_31;
                    t = get_config_0(t);
                  }
                  t = b_35;
                  {
                    t = system_about_0(t);
                    {
                      t = term_i_25;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = q_34;
                  {
                    ATerm e_5 (ATerm t)
                    {
                      ATerm f_5 (ATerm t)
                      {
                        ATerm s_100 = NULL;
                        s_100 = t;
                        if(((r_100 != NULL) && (r_100 != s_100)))
                          _fail(s_100);
                        else
                          r_100 = s_100;
                        return(t);
                      }
                      t = Undefined_1(t, f_5);
                      return(t);
                    }
                    t = option_defined_1(t, e_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_100)), term_c_35));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_x_20;
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
      t = try_1(t, d_5);
      {
        ATerm d_35;
        d_35 = t;
        {
          t = term_d_30;
          t = table_destroy_0(t);
        }
        t = d_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm))
{
  t = parse_options_1(t, c_135);
  {
    t = store_options_0(t);
    {
      t = e_135(t);
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_135);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_135(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_134(t);
        ;
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_134);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_5, t_134, u_134, k_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm n_134 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm k_35;
      k_35 = t;
      {
        ATerm v_100 = NULL;
        ATerm w_100 = NULL;
        t = term_c_28;
        {
          t = get_config_0(t);
          {
            w_100 = t;
            if(((v_100 != NULL) && (v_100 != w_100)))
              _fail(w_100);
            else
              v_100 = w_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATempty, not_null(v_100)));
          t = printnl_0(t);
        }
      }
      t = k_35;
      return(t);
    }
    t = if_verbose2_1(t, r_5);
    return(t);
  }
  t = iowrap_4(t, l_134, m_134, n_134, o_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_134 (ATerm), ATerm k_134 (ATerm))
{
  t = iowrap_3(t, j_134, k_134, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_134 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    t = _2(t, _id, g_134);
    return(t);
  }
  t = iowrap_2(t, s_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
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
    t = apply_to_bodies_1(t, u_5);
    return(t);
  }
  t = iowrap_1(t, t_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
