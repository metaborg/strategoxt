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
Symbol sym_Cong_2;
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
Symbol sym_WaitStatus_3;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_x_37;
ATerm term_k_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_p_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_t_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_i_20;
ATerm term_l_18;
ATerm term_q_17;
ATerm term_t_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_c_14;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Op_2, term_y_20, (ATerm) ATempty);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_r_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_d_7);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_d_7);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_d_7);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_m_36, term_d_7);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_p_34, term_d_7);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__3, term_m_35, term_r_35, (ATerm) ATempty);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_116 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_104 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_103 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_93 (ATerm), ATerm v_93 (ATerm));
ATerm Let_2 (ATerm, ATerm x_92 (ATerm), ATerm y_92 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_103 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_92 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm x_112 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_113 (ATerm), ATerm c_113 (ATerm));
ATerm diff_1 (ATerm, ATerm t_112 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_121 (ATerm), ATerm v_121 (ATerm));
ATerm for_3 (ATerm, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm w_117 (ATerm), ATerm x_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm q_117 (ATerm), ATerm r_117 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm b_118 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm u_118 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm e_118 (ATerm));
ATerm rename_4 (ATerm, ATerm l_117 (ATerm, ATerm (ATerm)), ATerm m_117 (ATerm), ATerm n_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_117 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_116 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_107 (ATerm), ATerm u_107 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_116 (ATerm));
ATerm scope_2 (ATerm, ATerm t_116 (ATerm), ATerm u_116 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_116 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm));
ATerm crush_3 (ATerm, ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm n_93 (ATerm), ATerm o_93 (ATerm));
ATerm Choice_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm Cong_2 (ATerm, ATerm x_88 (ATerm), ATerm y_88 (ATerm));
ATerm Match_1 (ATerm, ATerm e_93 (ATerm));
ATerm Seq_2 (ATerm, ATerm l_93 (ATerm), ATerm m_93 (ATerm));
ATerm Scope_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm Build_1 (ATerm, ATerm f_93 (ATerm));
ATerm SVar_1 (ATerm, ATerm w_92 (ATerm));
ATerm Call_2 (ATerm, ATerm z_92 (ATerm), ATerm a_93 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_105 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm));
ATerm zip_1 (ATerm, ATerm d_109 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm m_90 (ATerm), ATerm n_90 (ATerm));
ATerm Prim_2 (ATerm, ATerm b_94 (ATerm), ATerm c_94 (ATerm));
ATerm Explode_2 (ATerm, ATerm f_90 (ATerm), ATerm g_90 (ATerm));
ATerm Op_2 (ATerm, ATerm d_90 (ATerm), ATerm e_90 (ATerm));
ATerm pat_td_1 (ATerm, ATerm v_129 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm f_121 (ATerm));
ATerm downup_1 (ATerm, ATerm o_104 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_89 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_89 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_111 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_124 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm s_131 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_126 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_131 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_107 (ATerm), ATerm z_107 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_115 (ATerm), ATerm l_115 (ATerm));
ATerm crush_2 (ATerm, ATerm i_113 (ATerm), ATerm j_113 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_124 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_127 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_129 (ATerm));
ATerm map_1 (ATerm, ATerm n_110 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_129 (ATerm));
ATerm Program_1 (ATerm, ATerm a_101 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_101 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_110 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_128 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_107 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_129 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_88 (ATerm), ATerm w_88 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_129 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_129 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_127 (ATerm), ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_126 (ATerm), ATerm q_126 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_126 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,o_6 = NULL;
  h_4 = t;
  g_4 :
  if(match_cons(h_4, sym__2))
    {
      i_4 = ATgetArgument(h_4, 0);
      o_6 = ATgetArgument(h_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(o_6));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm x_116 (ATerm))
{
  ATerm r_7 = NULL;
  ATerm t_7 = NULL;
  r_7 = t;
  {
    ATerm x_7 = NULL;
    t = term_d_7;
    {
      t = x_116(t);
      {
        x_7 = t;
        if(((t_7 != NULL) && (t_7 != x_7)))
          _fail(x_7);
        else
          t_7 = x_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), not_null(r_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  g_8 = t;
  e_8 :
  if(match_cons(g_8, sym_Call_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      j_8 = ATgetArgument(g_8, 1);
      f_8 :
      if(match_cons(h_8, sym_SVar_1))
        {
          i_8 = ATgetArgument(h_8, 0);
          {
            ATerm n_8 = NULL;
            ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_8)), (ATerm) ATempty);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_e_7;
                return(t);
              }
              t = rewrite_1(t, f_0);
              {
                o_8 = t;
                c_8 :
                if(match_cons(o_8, sym_Defined_2))
                  {
                    p_8 = ATgetArgument(o_8, 0);
                    q_8 = ATgetArgument(o_8, 1);
                    d_8 :
                    if(match_string(p_8, "n_0"))
                      {
                        if(((n_8 != NULL) && (n_8 != q_8)))
                          _fail(q_8);
                        else
                          n_8 = q_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_8)), not_null(j_8));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  a_9 = t;
  x_8 :
  if(match_cons(a_9, sym_Call_2))
    {
      b_9 = ATgetArgument(a_9, 0);
      d_9 = ATgetArgument(a_9, 1);
      y_8 :
      if(match_cons(b_9, sym_SVar_1))
        {
          c_9 = ATgetArgument(b_9, 0);
          z_8 :
          if(((ATgetType(d_9) == AT_LIST) && ATisEmpty(d_9)))
            {
              {
                ATerm g_9 = NULL;
                ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
                t = not_null(a_9);
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = term_f_7;
                    return(t);
                  }
                  t = rewrite_1(t, h_0);
                  {
                    h_9 = t;
                    v_8 :
                    if(match_cons(h_9, sym_Defined_2))
                      {
                        i_9 = ATgetArgument(h_9, 0);
                        j_9 = ATgetArgument(h_9, 1);
                        w_8 :
                        if(match_string(i_9, "k_0"))
                          {
                            if(((g_9 != NULL) && (g_9 != j_9)))
                              _fail(j_9);
                            else
                              g_9 = j_9;
                          }
                        else
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
                {
                  t = not_null(g_9);
                  t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm m_104 (ATerm))
{
  t = m_104(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, m_104);
      return(t);
    }
    t = _all(t, p_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  b_10 = t;
  o_9 :
  if(match_cons(b_10, sym__2))
    {
      c_10 = ATgetArgument(b_10, 0);
      j_10 = ATgetArgument(b_10, 1);
      p_9 :
      if(match_cons(c_10, sym_VarDec_2))
        {
          d_10 = ATgetArgument(c_10, 0);
          e_10 = ATgetArgument(c_10, 1);
          q_9 :
          if(match_cons(e_10, sym_FunType_2))
            {
              f_10 = ATgetArgument(e_10, 0);
              i_10 = ATgetArgument(e_10, 1);
              r_9 :
              if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
                {
                  g_10 = ATgetFirst((ATermList) f_10);
                  h_10 = (ATerm) ATgetNext((ATermList) f_10);
                  s_9 :
                  if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
                    {
                      w_9 = ATgetFirst((ATermList) h_10);
                      x_9 = (ATerm) ATgetNext((ATermList) h_10);
                      t_9 :
                      if(match_cons(j_10, sym_Call_2))
                        {
                          y_9 = ATgetArgument(j_10, 0);
                          a_10 = ATgetArgument(j_10, 1);
                          u_9 :
                          if(match_cons(y_9, sym_SVar_1))
                            {
                              z_9 = ATgetArgument(y_9, 0);
                              v_9 :
                              if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                                {
                                  {
                                    ATerm g_7;
                                    g_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_10)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_7, not_null(z_9)));
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = term_e_7;
                                          return(t);
                                        }
                                        t = assert_1(t, q_0);
                                      }
                                    }
                                    t = g_7;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                        {
                          {
                            ATerm i_7;
                            i_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_10)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_j_7, not_null(j_10)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_f_7;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = i_7;
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
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_f_7;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_e_7;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
      v_10 = t;
      r_10 :
      if(match_cons(v_10, sym__3))
        {
          w_10 = ATgetArgument(v_10, 0);
          x_10 = ATgetArgument(v_10, 1);
          y_10 = ATgetArgument(v_10, 2);
          {
            if(((s_10 != NULL) && (s_10 != w_10)))
              _fail(w_10);
            else
              s_10 = w_10;
            {
              if(((t_10 != NULL) && (t_10 != x_10)))
                _fail(x_10);
              else
                t_10 = x_10;
              {
                if(((u_10 != NULL) && (u_10 != y_10)))
                  _fail(y_10);
                else
                  u_10 = y_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(t_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(u_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm k_7 = t;
                            int l_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(l_7);
                              }
                            else
                              {
                                t = k_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, x_0);
                          return(t);
                        }
                        t = topdown_1(t, w_0);
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
    t = scope_2(t, u_0, v_0);
    return(t);
  }
  t = scope_2(t, s_0, t_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
    {
      d_11 = ATgetFirst((ATermList) c_11);
      e_11 = (ATerm) ATgetNext((ATermList) c_11);
      t = not_null(d_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, q_103);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
            n_11 = t;
            i_11 :
            if(match_cons(n_11, sym__2))
              {
                o_11 = ATgetArgument(n_11, 0);
                s_11 = ATgetArgument(n_11, 1);
                j_11 :
                if(match_cons(o_11, sym_SDef_3))
                  {
                    p_11 = ATgetArgument(o_11, 0);
                    q_11 = ATgetArgument(o_11, 1);
                    r_11 = ATgetArgument(o_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_11), not_null(q_11), not_null(r_11));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, z_0);
        }
        return(t);
      }
      t = Let_2(t, y_0, _id);
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
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, q_103);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
                  w_11 = t;
                  l_11 :
                  if(match_cons(w_11, sym__2))
                    {
                      x_11 = ATgetArgument(w_11, 0);
                      a_12 = ATgetArgument(w_11, 1);
                      m_11 :
                      if(match_cons(x_11, sym_VarDec_2))
                        {
                          y_11 = ATgetArgument(x_11, 0);
                          z_11 = ATgetArgument(x_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_12), not_null(z_11));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, b_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, a_1, _id);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = q_103(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, c_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm u_93 (ATerm), ATerm v_93 (ATerm))
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_Rec_2))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      {
        ATerm s_12 = NULL,u_12 = NULL;
        ATerm t_12 = NULL;
        t = SSLgetAnnotations(not_null(m_12));
        {
          t_12 = t;
          if(((s_12 != NULL) && (s_12 != t_12)))
            _fail(t_12);
          else
            s_12 = t_12;
        }
        {
          t = not_null(n_12);
          {
            ATerm w_12 = NULL;
            t = u_93(t);
            {
              u_12 = t;
              {
                t = not_null(o_12);
                {
                  ATerm y_12 = NULL;
                  t = v_93(t);
                  {
                    w_12 = t;
                    {
                      ATerm z_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_12), not_null(w_12)), not_null(s_12));
                      {
                        z_12 = t;
                        if(((y_12 != NULL) && (y_12 != z_12)))
                          _fail(z_12);
                        else
                          y_12 = z_12;
                      }
                      t = not_null(y_12);
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
ATerm Let_2 (ATerm t, ATerm x_92 (ATerm), ATerm y_92 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Let_2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm r_13 = NULL,t_13 = NULL;
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(l_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
        {
          t = not_null(m_13);
          {
            ATerm v_13 = NULL;
            t = x_92(t);
            {
              t_13 = t;
              {
                t = not_null(n_13);
                {
                  ATerm x_13 = NULL;
                  t = y_92(t);
                  {
                    v_13 = t;
                    {
                      ATerm y_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_13), not_null(v_13)), not_null(r_13));
                      {
                        y_13 = t;
                        if(((x_13 != NULL) && (x_13 != y_13)))
                          _fail(y_13);
                        else
                          x_13 = y_13;
                      }
                      t = not_null(x_13);
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
ATerm sboundin_3 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm))
{
  ATerm q_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_103, r_103);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = q_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, t_103, t_103, r_103);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = Rec_2(t, t_103, r_103);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Rec_2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_SDef_3))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      t_14 = ATgetArgument(q_14, 2);
      {
        t = not_null(s_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
            x_14 = t;
            o_14 :
            if(match_cons(x_14, sym_VarDec_2))
              {
                y_14 = ATgetArgument(x_14, 0);
                z_14 = ATgetArgument(x_14, 1);
                t = not_null(y_14);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_1);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym_Let_2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        t = not_null(i_15);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
            m_15 = t;
            f_15 :
            if(match_cons(m_15, sym_SDef_3))
              {
                n_15 = ATgetArgument(m_15, 0);
                o_15 = ATgetArgument(m_15, 1);
                p_15 = ATgetArgument(m_15, 2);
                t = not_null(n_15);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_1);
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
  ATerm f_1 (ATerm t)
  {
    ATerm w_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = w_7;
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_103 (ATerm))
{
  t = Scope_2(t, m_103, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_DynamicRules_1))
    {
      b_16 = ATgetArgument(a_16, 0);
      {
        ATerm e_16 = NULL,g_16 = NULL;
        ATerm f_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        {
          t = not_null(b_16);
          {
            ATerm i_16 = NULL;
            t = e_92(t);
            {
              g_16 = t;
              {
                ATerm j_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(g_16)), not_null(e_16));
                {
                  j_16 = t;
                  if(((i_16 != NULL) && (i_16 != j_16)))
                    _fail(j_16);
                  else
                    i_16 = j_16;
                }
                t = not_null(i_16);
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
ATerm tboundin_3 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm))
{
  ATerm b_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_103, n_103);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = b_8;
      t = DynamicRules_1(t, n_103);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_DynamicRules_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      {
        t = not_null(r_16);
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
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_Var_1))
    {
      x_16 = ATgetArgument(w_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(x_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        t = not_null(d_17);
        {
          ATerm i_17 (ATerm t)
          {
            ATerm l_8 = t;
            int m_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_17);
                ;
                LocalPopChoice(m_8);
              }
            else
              {
                t = l_8;
                {
                  ATerm r_8 = t;
                  int s_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(e_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_112, g_1);
                      t = i_17(t);
                      ;
                      LocalPopChoice(s_8);
                    }
                  else
                    {
                      t = r_8;
                      t = Cons_2(t, _id, i_17);
                    }
                }
              }
            return(t);
          }
          t = i_17(t);
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
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_113 (ATerm), ATerm c_113 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
    {
      u_17 = ATgetFirst((ATermList) t_17);
      v_17 = (ATerm) ATgetNext((ATermList) t_17);
      {
        t = c_113(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm y_17 = NULL;
            y_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(y_17));
              t = b_113(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(v_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm t_112 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        t = not_null(f_18);
        {
          ATerm k_18 (ATerm t)
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
                  ATerm e_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(g_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_112, i_1);
                      t = k_18(t);
                      ;
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = e_9;
                      t = Cons_2(t, _id, k_18);
                    }
                }
              }
            return(t);
          }
          t = k_18(t);
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  m_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      n_18 :
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          r_18 = ATgetFirst((ATermList) q_18);
          s_18 = (ATerm) ATgetNext((ATermList) q_18);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_18)), not_null(r_18)), not_null(s_18));
        }
      else
        {
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  h_19 = t;
  f_19 :
  if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
    {
      i_19 = ATgetFirst((ATermList) h_19);
      l_19 = (ATerm) ATgetNext((ATermList) h_19);
      g_19 :
      if(match_cons(i_19, sym__2))
        {
          j_19 = ATgetArgument(i_19, 0);
          k_19 = ATgetArgument(i_19, 1);
          {
            ATerm p_19 = NULL,q_19 = NULL,w_19 = NULL,c_20 = NULL;
            ATerm k_9;
            k_9 = t;
            {
              ATerm r_19 = NULL;
              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
              t = not_null(k_19);
              {
                r_19 = t;
                {
                  t = SSL_explode_term(not_null(r_19));
                  {
                    t_19 = t;
                    a_19 :
                    if(match_cons(t_19, sym__2))
                      {
                        u_19 = ATgetArgument(t_19, 0);
                        v_19 = ATgetArgument(t_19, 1);
                        {
                          if(((p_19 != NULL) && (p_19 != u_19)))
                            _fail(u_19);
                          else
                            p_19 = u_19;
                          if(((q_19 != NULL) && (q_19 != v_19)))
                            _fail(v_19);
                          else
                            q_19 = v_19;
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
                ATerm x_19 = NULL;
                ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
                t = not_null(j_19);
                {
                  x_19 = t;
                  {
                    t = SSL_explode_term(not_null(x_19));
                    {
                      z_19 = t;
                      d_19 :
                      if(match_cons(z_19, sym__2))
                        {
                          a_20 = ATgetArgument(z_19, 0);
                          b_20 = ATgetArgument(z_19, 1);
                          {
                            if(((p_19 != NULL) && (p_19 != a_20)))
                              _fail(a_20);
                            else
                              p_19 = a_20;
                            if(((w_19 != NULL) && (w_19 != b_20)))
                              _fail(b_20);
                            else
                              w_19 = b_20;
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
                ATerm d_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(q_19));
                {
                  t = zip_1(t, _id);
                  {
                    d_20 = t;
                    if(((c_20 != NULL) && (c_20 != d_20)))
                      _fail(d_20);
                    else
                      c_20 = d_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(l_19));
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
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  n_20 = t;
  l_20 :
  if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
    {
      o_20 = ATgetFirst((ATermList) n_20);
      r_20 = (ATerm) ATgetNext((ATermList) n_20);
      m_20 :
      if(match_cons(o_20, sym__2))
        {
          p_20 = ATgetArgument(o_20, 0);
          q_20 = ATgetArgument(o_20, 1);
          {
            ATerm t_20 = NULL;
            if(((p_20 != NULL) && (p_20 != q_20)))
              _fail(q_20);
            else
              p_20 = q_20;
            {
              if(((t_20 != NULL) && (t_20 != r_20)))
                _fail(r_20);
              else
                t_20 = r_20;
              t = not_null(t_20);
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
ATerm while_not_2 (ATerm t, ATerm u_121 (ATerm), ATerm v_121 (ATerm))
{
  ATerm v_20 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_121(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          t = v_121(t);
          t = v_20(t);
        }
      }
    return(t);
  }
  t = v_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm))
{
  t = x_121(t);
  t = while_not_2(t, y_121, z_121);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_20));
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, m_1);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_21 (ATerm t)
  {
    ATerm q_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_119(t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = q_10;
        {
          ATerm a_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_21 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm c_21 = NULL;
                t = p_119(t);
                {
                  c_21 = t;
                  if(((b_21 != NULL) && (b_21 != c_21)))
                    _fail(c_21);
                  else
                    b_21 = c_21;
                }
              }
              t = g_11;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(b_21);
                    return(t);
                  }
                  t = split_2(t, d_21, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = q_119(t, n_1, d_21, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = a_11;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, d_21);
              }
            }
        }
      }
    return(t);
  }
  t = d_21(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm h_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = h_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  h_21 :
  if(match_cons(m_21, sym_LRule_1))
    {
      n_21 = ATgetArgument(m_21, 0);
      i_21 :
      if(match_cons(n_21, sym_Rule_3))
        {
          j_21 = ATgetArgument(n_21, 0);
          k_21 = ATgetArgument(n_21, 1);
          l_21 = ATgetArgument(n_21, 2);
          {
            t = not_null(j_21);
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
      if(match_cons(m_21, sym_Scope_2))
        {
          n_21 = ATgetArgument(m_21, 0);
          o_21 = ATgetArgument(m_21, 1);
          t = not_null(n_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Var_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_22 = NULL,p_22 = NULL;
            ATerm o_22 = NULL;
            t = SSLgetAnnotations(not_null(j_22));
            {
              o_22 = t;
              if(((n_22 != NULL) && (n_22 != o_22)))
                _fail(o_22);
              else
                n_22 = o_22;
            }
            {
              t = not_null(k_22);
              {
                ATerm r_22 = NULL;
                t = o_0(t);
                {
                  p_22 = t;
                  {
                    ATerm s_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_22)), not_null(n_22));
                    {
                      s_22 = t;
                      if(((r_22 != NULL) && (r_22 != s_22)))
                        _fail(s_22);
                      else
                        r_22 = s_22;
                    }
                    t = not_null(r_22);
                  }
                }
              }
            }
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm v_11 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_22 = NULL,x_22 = NULL;
                  ATerm w_22 = NULL;
                  t = SSLgetAnnotations(not_null(j_22));
                  {
                    w_22 = t;
                    if(((v_22 != NULL) && (v_22 != w_22)))
                      _fail(w_22);
                    else
                      v_22 = w_22;
                  }
                  {
                    t = not_null(k_22);
                    {
                      ATerm z_22 = NULL;
                      t = o_0(t);
                      {
                        x_22 = t;
                        {
                          ATerm a_23 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_22)), not_null(v_22));
                          {
                            a_23 = t;
                            if(((z_22 != NULL) && (z_22 != a_23)))
                              _fail(a_23);
                            else
                              z_22 = a_23;
                          }
                          t = not_null(z_22);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm d_23 = NULL,f_23 = NULL;
                    ATerm e_23 = NULL;
                    t = SSLgetAnnotations(not_null(j_22));
                    {
                      e_23 = t;
                      if(((d_23 != NULL) && (d_23 != e_23)))
                        _fail(e_23);
                      else
                        d_23 = e_23;
                    }
                    {
                      t = not_null(k_22);
                      {
                        ATerm h_23 = NULL;
                        t = o_0(t);
                        {
                          f_23 = t;
                          {
                            ATerm i_23 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_23)), not_null(d_23));
                            {
                              i_23 = t;
                              if(((h_23 != NULL) && (h_23 != i_23)))
                                _fail(i_23);
                              else
                                h_23 = i_23;
                            }
                            t = not_null(h_23);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm w_117 (ATerm), ATerm x_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym__3))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      c_24 = ATgetArgument(z_23, 2);
      {
        t = not_null(a_24);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm g_24 = NULL;
            g_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(c_24));
              t = w_117(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm i_24 = NULL;
            i_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(b_24));
              t = w_117(t);
            }
            return(t);
          }
          t = x_117(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm q_117 (ATerm), ATerm r_117 (ATerm, ATerm (ATerm)))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym__2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,h_25 = NULL;
        ATerm c_12;
        c_12 = t;
        {
          ATerm c_25 = NULL;
          t = not_null(v_24);
          {
            ATerm d_25 = NULL;
            t = q_117(t);
            {
              c_25 = t;
              {
                if(((z_24 != NULL) && (z_24 != c_25)))
                  _fail(c_25);
                else
                  z_24 = c_25;
                {
                  ATerm e_25 = NULL,g_25 = NULL;
                  t = map_1(t, new_0);
                  {
                    d_25 = t;
                    {
                      if(((a_25 != NULL) && (a_25 != d_25)))
                        _fail(d_25);
                      else
                        a_25 = d_25;
                      {
                        ATerm f_25 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(a_25));
                        {
                          t = zip_1(t, _id);
                          {
                            f_25 = t;
                            if(((e_25 != NULL) && (e_25 != f_25)))
                              _fail(f_25);
                            else
                              e_25 = f_25;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), not_null(w_24));
                          {
                            t = conc_0(t);
                            {
                              g_25 = t;
                              if(((b_25 != NULL) && (b_25 != g_25)))
                                _fail(g_25);
                              else
                                b_25 = g_25;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = c_12;
        {
          ATerm i_25 = NULL;
          t = not_null(v_24);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(a_25);
              return(t);
            }
            t = r_117(t, v_1);
            {
              i_25 = t;
              if(((h_25 != NULL) && (h_25 != i_25)))
                _fail(i_25);
              else
                h_25 = i_25;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(h_25), not_null(w_24), not_null(b_25));
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
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  s_25 = t;
  q_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      r_25 :
      if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
        {
          v_25 = ATgetFirst((ATermList) u_25);
          w_25 = (ATerm) ATgetNext((ATermList) u_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(w_25));
        }
      else
        {
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
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  e_26 = t;
  b_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      c_26 :
      if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
        {
          h_26 = ATgetFirst((ATermList) g_26);
          k_26 = (ATerm) ATgetNext((ATermList) g_26);
          d_26 :
          if(match_cons(h_26, sym__2))
            {
              i_26 = ATgetArgument(h_26, 0);
              j_26 = ATgetArgument(h_26, 1);
              {
                ATerm m_26 = NULL;
                if(((f_26 != NULL) && (f_26 != i_26)))
                  _fail(i_26);
                else
                  f_26 = i_26;
                {
                  if(((m_26 != NULL) && (m_26 != j_26)))
                    _fail(j_26);
                  else
                    m_26 = j_26;
                  t = not_null(m_26);
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm b_118 (ATerm, ATerm (ATerm)))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym__2))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      {
        t = not_null(s_26);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(t_26);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = b_118(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm u_118 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        t = not_null(b_27);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm f_27 = NULL;
            f_27 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(c_27));
              t = u_118(t);
            }
            return(t);
          }
          t = _all(t, y_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm e_118 (ATerm))
{
  ATerm j_27 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_118(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = all_dist_1(t, j_27);
      }
    return(t);
  }
  t = j_27(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm l_117 (ATerm, ATerm (ATerm)), ATerm m_117 (ATerm), ATerm n_117 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_117 (ATerm, ATerm (ATerm)))
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), (ATerm) ATempty);
    {
      ATerm o_27 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, l_117);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              {
                t = RnBinding_2(t, m_117, o_117);
                t = DistBinding_2(t, o_27, n_117);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = o_27(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm p_27 (ATerm t, ATerm q_27 (ATerm))
  {
    t = Scope_2(t, q_27, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, p_27);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  ATerm l_30 (ATerm t)
  {
    ATerm y_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty);
    {
      ATerm a_2 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        y_28 = t;
        x_27 :
        if(match_cons(y_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_12;
    return(t);
  }
  ATerm m_30 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
    t = not_null(s_28);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        f_29 = t;
        d_28 :
        if(match_cons(f_29, sym_Defined_2))
          {
            g_29 = ATgetArgument(f_29, 0);
            h_29 = ATgetArgument(f_29, 1);
            e_28 :
            if(match_string(g_29, "g_0"))
              {
                ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
                if(((b_29 != NULL) && (b_29 != h_29)))
                  _fail(h_29);
                else
                  b_29 = h_29;
                {
                  t = not_null(b_29);
                  {
                    t = strename_0(t);
                    {
                      i_29 = t;
                      b_28 :
                      if(match_cons(i_29, sym_SDef_3))
                        {
                          j_29 = ATgetArgument(i_29, 0);
                          k_29 = ATgetArgument(i_29, 1);
                          n_29 = ATgetArgument(i_29, 2);
                          c_28 :
                          if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
                            {
                              l_29 = ATgetFirst((ATermList) k_29);
                              m_29 = (ATerm) ATgetNext((ATermList) k_29);
                              {
                                ATerm o_29 = NULL;
                                if(((u_28 != NULL) && (u_28 != j_29)))
                                  _fail(j_29);
                                else
                                  u_28 = j_29;
                                {
                                  if(((c_29 != NULL) && (c_29 != k_29)))
                                    _fail(k_29);
                                  else
                                    c_29 = k_29;
                                  {
                                    if(((d_29 != NULL) && (d_29 != n_29)))
                                      _fail(n_29);
                                    else
                                      d_29 = n_29;
                                    {
                                      t = new_0(t);
                                      {
                                        o_29 = t;
                                        {
                                          if(((e_29 != NULL) && (e_29 != o_29)))
                                            _fail(o_29);
                                          else
                                            e_29 = o_29;
                                          {
                                            ATerm p_12;
                                            p_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty), term_k_12);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = term_j_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = p_12;
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
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_29), not_null(c_29), not_null(d_29))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_29)), (ATerm) ATempty));
    return(t);
  }
  ATerm n_30 (ATerm t)
  {
    ATerm r_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        r_29 = t;
        g_28 :
        if(match_cons(r_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_12;
    return(t);
  }
  ATerm o_30 (ATerm t)
  {
    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        z_29 = t;
        l_28 :
        if(match_cons(z_29, sym_Defined_2))
          {
            a_30 = ATgetArgument(z_29, 0);
            b_30 = ATgetArgument(z_29, 1);
            m_28 :
            if(match_string(a_30, "d_0"))
              {
                ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
                if(((v_29 != NULL) && (v_29 != b_30)))
                  _fail(b_30);
                else
                  v_29 = b_30;
                {
                  t = not_null(v_29);
                  {
                    t = strename_0(t);
                    {
                      c_30 = t;
                      k_28 :
                      if(match_cons(c_30, sym_SDef_3))
                        {
                          d_30 = ATgetArgument(c_30, 0);
                          e_30 = ATgetArgument(c_30, 1);
                          f_30 = ATgetArgument(c_30, 2);
                          {
                            ATerm g_30 = NULL;
                            if(((u_28 != NULL) && (u_28 != d_30)))
                              _fail(d_30);
                            else
                              u_28 = d_30;
                            {
                              if(((w_29 != NULL) && (w_29 != e_30)))
                                _fail(e_30);
                              else
                                w_29 = e_30;
                              {
                                if(((x_29 != NULL) && (x_29 != f_30)))
                                  _fail(f_30);
                                else
                                  x_29 = f_30;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_29), not_null(v_28), not_null(x_29));
                                  {
                                    t = substitute_args_0(t);
                                    {
                                      g_30 = t;
                                      {
                                        if(((y_29 != NULL) && (y_29 != g_30)))
                                          _fail(g_30);
                                        else
                                          y_29 = g_30;
                                        {
                                          ATerm q_12;
                                          q_12 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty), term_k_12);
                                            {
                                              ATerm f_2 (ATerm t)
                                              {
                                                t = term_j_12;
                                                return(t);
                                              }
                                              t = assert_1(t, f_2);
                                            }
                                          }
                                          t = q_12;
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
            else
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
    t = not_null(y_29);
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    ATerm k_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_28)), (ATerm) ATempty);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_j_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        k_30 = t;
        o_28 :
        if(match_cons(k_30, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_12;
    return(t);
  }
  s_28 = t;
  p_28 :
  if(match_cons(s_28, sym_Call_2))
    {
      t_28 = ATgetArgument(s_28, 0);
      v_28 = ATgetArgument(s_28, 1);
      q_28 :
      if(match_cons(t_28, sym_SVar_1))
        {
          u_28 = ATgetArgument(t_28, 0);
          r_28 :
          if(((ATgetType(v_28) == AT_LIST) && ATisEmpty(v_28)))
            {
              {
                ATerm r_12 = t;
                int v_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_30(t);
                    ;
                    LocalPopChoice(v_12);
                  }
                else
                  {
                    t = r_12;
                    {
                      ATerm x_12 = t;
                      int a_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_30(t);
                          ;
                          LocalPopChoice(a_13);
                        }
                      else
                        {
                          t = x_12;
                          {
                            ATerm b_13 = t;
                            int c_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_30(t);
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
                                      t = o_30(t);
                                      ;
                                      LocalPopChoice(e_13);
                                    }
                                  else
                                    {
                                      t = d_13;
                                      t = p_30(t);
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
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(t);
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
                        t = n_30(t);
                        ;
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = h_13;
                        {
                          ATerm j_13 = t;
                          int o_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_30(t);
                              ;
                              LocalPopChoice(o_13);
                            }
                          else
                            {
                              t = j_13;
                              t = p_30(t);
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym_SDef_3))
    {
      c_31 = ATgetArgument(b_31, 0);
      d_31 = ATgetArgument(b_31, 1);
      e_31 = ATgetArgument(b_31, 2);
      {
        ATerm p_13;
        p_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_31)), (ATerm) ATempty), term_k_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_j_12;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = p_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
    {
      k_31 = ATgetFirst((ATermList) j_31);
      l_31 = (ATerm) ATgetNext((ATermList) j_31);
      t = not_null(l_31);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        ATerm q_13;
        q_13 = t;
        {
          ATerm w_31 = NULL;
          ATerm x_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(t_31));
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                t = (ATerm) ATempty;
              }
            {
              x_31 = t;
              if(((w_31 != NULL) && (w_31 != x_31)))
                _fail(x_31);
              else
                w_31 = x_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_31), not_null(t_31), not_null(w_31));
            t = table_put_0(t);
          }
        }
        t = q_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_116 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm h_32 = NULL;
    ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
    t = s_116(t);
    {
      h_32 = t;
      {
        if(((g_32 != NULL) && (g_32 != h_32)))
          _fail(h_32);
        else
          g_32 = h_32;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), term_c_14);
              t = table_get_0(t);
              ;
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_32 = t;
            d_32 :
            if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
              {
                j_32 = ATgetFirst((ATermList) i_32);
                k_32 = (ATerm) ATgetNext((ATermList) i_32);
                {
                  if(((f_32 != NULL) && (f_32 != j_32)))
                    _fail(j_32);
                  else
                    f_32 = j_32;
                  {
                    if(((e_32 != NULL) && (e_32 != k_32)))
                      _fail(k_32);
                    else
                      e_32 = k_32;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_32), term_c_14, not_null(e_32));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_32);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm l_32 = NULL;
                              l_32 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), not_null(l_32));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = z_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_107 (ATerm), ATerm u_107 (ATerm))
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_107(t);
      t = u_107(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        t = u_107(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_116 (ATerm))
{
  ATerm s_32 = NULL;
  ATerm j_14;
  j_14 = t;
  {
    ATerm t_32 = NULL;
    ATerm u_32 = NULL;
    t = r_116(t);
    {
      t_32 = t;
      {
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
        {
          ATerm v_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_32), term_c_14);
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = (ATerm) ATempty;
              }
            {
              v_32 = t;
              if(((u_32 != NULL) && (u_32 != v_32)))
                _fail(v_32);
              else
                u_32 = v_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_32), term_c_14, (ATerm) ATinsert(CheckATermList(not_null(u_32)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = j_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm t_116 (ATerm), ATerm u_116 (ATerm))
{
  t = begin_scope_1(t, t_116);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, t_116);
      return(t);
    }
    t = restore_always_2(t, u_116, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_j_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_116 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym__2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      {
        ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
        ATerm u_14;
        u_14 = t;
        {
          ATerm m_33 = NULL;
          ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
          t = v_116(t);
          {
            m_33 = t;
            {
              if(((j_33 != NULL) && (j_33 != m_33)))
                _fail(m_33);
              else
                j_33 = m_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_33), not_null(f_33), not_null(g_33));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), term_c_14);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_33 = t;
                      c_33 :
                      if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
                        {
                          o_33 = ATgetFirst((ATermList) n_33);
                          p_33 = (ATerm) ATgetNext((ATermList) n_33);
                          {
                            if(((k_33 != NULL) && (k_33 != o_33)))
                              _fail(o_33);
                            else
                              k_33 = o_33;
                            {
                              if(((l_33 != NULL) && (l_33 != p_33)))
                                _fail(p_33);
                              else
                                l_33 = p_33;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_33), term_c_14, (ATerm) ATinsert(CheckATermList(not_null(l_33)), (ATerm) ATinsert(CheckATermList(not_null(k_33)), not_null(f_33))));
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
        t = u_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym_SDef_3))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      y_33 = ATgetArgument(v_33, 2);
      {
        ATerm a_15;
        a_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_33)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_15, not_null(v_33)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_j_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = a_15;
        {
          ATerm c_15;
          c_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_33)), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_15, not_null(v_33)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_j_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = c_15;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm))
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_115(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        g_34 = t;
        f_34 :
        if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
          {
            h_34 = ATgetFirst((ATermList) g_34);
            i_34 = (ATerm) ATgetNext((ATermList) g_34);
            {
              ATerm l_34 = NULL,n_34 = NULL;
              ATerm q_15;
              q_15 = t;
              {
                ATerm m_34 = NULL;
                t = not_null(h_34);
                {
                  t = o_115(t);
                  {
                    m_34 = t;
                    if(((l_34 != NULL) && (l_34 != m_34)))
                      _fail(m_34);
                    else
                      l_34 = m_34;
                  }
                }
              }
              t = q_15;
              {
                ATerm o_34 = NULL;
                t = not_null(i_34);
                {
                  t = foldr_3(t, m_115, n_115, o_115);
                  {
                    o_34 = t;
                    if(((n_34 != NULL) && (n_34 != o_34)))
                      _fail(o_34);
                    else
                      n_34 = o_34;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), not_null(n_34));
                  t = n_115(t);
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
ATerm crush_3 (ATerm t, ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm))
{
  ATerm w_34 = NULL;
  ATerm y_34 = NULL;
  w_34 = t;
  {
    ATerm z_34 = NULL;
    ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
    t = not_null(w_34);
    {
      z_34 = t;
      {
        t = SSL_explode_term(not_null(z_34));
        {
          b_35 = t;
          v_34 :
          if(match_cons(b_35, sym__2))
            {
              c_35 = ATgetArgument(b_35, 0);
              d_35 = ATgetArgument(b_35, 1);
              if(((y_34 != NULL) && (y_34 != d_35)))
                _fail(d_35);
              else
                y_34 = d_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_34);
      t = foldr_3(t, k_113, l_113, m_113);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        t = term_t_15;
        return(t);
      }
      t = crush_3(t, o_2, add_0, term_size_0);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm h_35 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = term_t_15;
            return(t);
          }
          t = crush_3(t, p_2, add_0, h_35);
          return(t);
        }
        t = h_35(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm n_93 (ATerm), ATerm o_93 (ATerm))
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_LChoice_2))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      {
        ATerm g_37 = NULL,i_37 = NULL;
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(o_35));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
        {
          t = not_null(p_35);
          {
            ATerm i_38 = NULL;
            t = n_93(t);
            {
              i_37 = t;
              {
                t = not_null(q_35);
                {
                  ATerm k_38 = NULL;
                  t = o_93(t);
                  {
                    i_38 = t;
                    {
                      ATerm l_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(i_37), not_null(i_38)), not_null(g_37));
                      {
                        l_38 = t;
                        if(((k_38 != NULL) && (k_38 != l_38)))
                          _fail(l_38);
                        else
                          k_38 = l_38;
                      }
                      t = not_null(k_38);
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
ATerm Choice_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Choice_2))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      {
        ATerm e_39 = NULL,g_39 = NULL;
        ATerm f_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        {
          t = not_null(y_38);
          {
            ATerm i_39 = NULL;
            t = l_92(t);
            {
              g_39 = t;
              {
                t = not_null(z_38);
                {
                  ATerm k_39 = NULL;
                  t = m_92(t);
                  {
                    i_39 = t;
                    {
                      ATerm l_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(g_39), not_null(i_39)), not_null(e_39));
                      {
                        l_39 = t;
                        if(((k_39 != NULL) && (k_39 != l_39)))
                          _fail(l_39);
                        else
                          k_39 = l_39;
                      }
                      t = not_null(k_39);
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
ATerm Cong_2 (ATerm t, ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym_Cong_2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      {
        ATerm f_40 = NULL,h_40 = NULL;
        ATerm g_40 = NULL;
        t = SSLgetAnnotations(not_null(z_39));
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
        {
          t = not_null(a_40);
          {
            ATerm j_40 = NULL;
            t = x_88(t);
            {
              h_40 = t;
              {
                t = not_null(b_40);
                {
                  ATerm l_40 = NULL;
                  t = y_88(t);
                  {
                    j_40 = t;
                    {
                      ATerm m_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(h_40), not_null(j_40)), not_null(f_40));
                      {
                        m_40 = t;
                        if(((l_40 != NULL) && (l_40 != m_40)))
                          _fail(m_40);
                        else
                          l_40 = m_40;
                      }
                      t = not_null(l_40);
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
ATerm Match_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_Match_1))
    {
      y_40 = ATgetArgument(x_40, 0);
      {
        ATerm b_41 = NULL,d_41 = NULL;
        ATerm c_41 = NULL;
        t = SSLgetAnnotations(not_null(x_40));
        {
          c_41 = t;
          if(((b_41 != NULL) && (b_41 != c_41)))
            _fail(c_41);
          else
            b_41 = c_41;
        }
        {
          t = not_null(y_40);
          {
            ATerm f_41 = NULL;
            t = e_93(t);
            {
              d_41 = t;
              {
                ATerm g_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(d_41)), not_null(b_41));
                {
                  g_41 = t;
                  if(((f_41 != NULL) && (f_41 != g_41)))
                    _fail(g_41);
                  else
                    f_41 = g_41;
                }
                t = not_null(f_41);
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
ATerm Seq_2 (ATerm t, ATerm l_93 (ATerm), ATerm m_93 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym_Seq_2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        ATerm b_42 = NULL,d_42 = NULL;
        ATerm c_42 = NULL;
        t = SSLgetAnnotations(not_null(r_41));
        {
          c_42 = t;
          if(((b_42 != NULL) && (b_42 != c_42)))
            _fail(c_42);
          else
            b_42 = c_42;
        }
        {
          t = not_null(s_41);
          {
            ATerm f_42 = NULL;
            t = l_93(t);
            {
              d_42 = t;
              {
                t = not_null(t_41);
                {
                  ATerm j_42 = NULL;
                  t = m_93(t);
                  {
                    f_42 = t;
                    {
                      ATerm k_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(d_42), not_null(f_42)), not_null(b_42));
                      {
                        k_42 = t;
                        if(((j_42 != NULL) && (j_42 != k_42)))
                          _fail(k_42);
                        else
                          j_42 = k_42;
                      }
                      t = not_null(j_42);
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
ATerm Scope_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym_Scope_2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      {
        ATerm c_43 = NULL,e_43 = NULL;
        ATerm d_43 = NULL;
        t = SSLgetAnnotations(not_null(w_42));
        {
          d_43 = t;
          if(((c_43 != NULL) && (c_43 != d_43)))
            _fail(d_43);
          else
            c_43 = d_43;
        }
        {
          t = not_null(x_42);
          {
            ATerm g_43 = NULL;
            t = h_93(t);
            {
              e_43 = t;
              {
                t = not_null(y_42);
                {
                  ATerm i_43 = NULL;
                  t = i_93(t);
                  {
                    g_43 = t;
                    {
                      ATerm j_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_43), not_null(g_43)), not_null(c_43));
                      {
                        j_43 = t;
                        if(((i_43 != NULL) && (i_43 != j_43)))
                          _fail(j_43);
                        else
                          i_43 = j_43;
                      }
                      t = not_null(i_43);
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
ATerm Build_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm z_43 = NULL,a_44 = NULL;
  z_43 = t;
  y_43 :
  if(match_cons(z_43, sym_Build_1))
    {
      a_44 = ATgetArgument(z_43, 0);
      {
        ATerm d_44 = NULL,f_44 = NULL;
        ATerm e_44 = NULL;
        t = SSLgetAnnotations(not_null(z_43));
        {
          e_44 = t;
          if(((d_44 != NULL) && (d_44 != e_44)))
            _fail(e_44);
          else
            d_44 = e_44;
        }
        {
          t = not_null(a_44);
          {
            ATerm m_44 = NULL;
            t = f_93(t);
            {
              f_44 = t;
              {
                ATerm n_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(f_44)), not_null(d_44));
                {
                  n_44 = t;
                  if(((m_44 != NULL) && (m_44 != n_44)))
                    _fail(n_44);
                  else
                    m_44 = n_44;
                }
                t = not_null(m_44);
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
ATerm SVar_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_SVar_1))
    {
      y_44 = ATgetArgument(x_44, 0);
      {
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_45 = NULL;
        t = SSLgetAnnotations(not_null(x_44));
        {
          c_45 = t;
          if(((b_45 != NULL) && (b_45 != c_45)))
            _fail(c_45);
          else
            b_45 = c_45;
        }
        {
          t = not_null(y_44);
          {
            ATerm f_45 = NULL;
            t = w_92(t);
            {
              d_45 = t;
              {
                ATerm g_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(d_45)), not_null(b_45));
                {
                  g_45 = t;
                  if(((f_45 != NULL) && (f_45 != g_45)))
                    _fail(g_45);
                  else
                    f_45 = g_45;
                }
                t = not_null(f_45);
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
ATerm Call_2 (ATerm t, ATerm z_92 (ATerm), ATerm a_93 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  x_45 :
  if(match_cons(a_46, sym_Call_2))
    {
      b_46 = ATgetArgument(a_46, 0);
      c_46 = ATgetArgument(a_46, 1);
      {
        ATerm g_46 = NULL,i_46 = NULL;
        ATerm h_46 = NULL;
        t = SSLgetAnnotations(not_null(a_46));
        {
          h_46 = t;
          if(((g_46 != NULL) && (g_46 != h_46)))
            _fail(h_46);
          else
            g_46 = h_46;
        }
        {
          t = not_null(b_46);
          {
            ATerm k_46 = NULL;
            t = z_92(t);
            {
              i_46 = t;
              {
                t = not_null(c_46);
                {
                  ATerm m_46 = NULL;
                  t = a_93(t);
                  {
                    k_46 = t;
                    {
                      ATerm n_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(i_46), not_null(k_46)), not_null(g_46));
                      {
                        n_46 = t;
                        if(((m_46 != NULL) && (m_46 != n_46)))
                          _fail(n_46);
                        else
                          m_46 = n_46;
                      }
                      t = not_null(m_46);
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
ATerm Fail_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  e_47 :
  if(match_cons(f_47, sym_Fail_0))
    {
      ATerm h_47 = NULL,j_47 = NULL;
      ATerm u_15;
      u_15 = t;
      {
        ATerm i_47 = NULL;
        t = SSLgetAnnotations(not_null(f_47));
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
      }
      t = u_15;
      {
        ATerm k_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(h_47));
        {
          k_47 = t;
          if(((j_47 != NULL) && (j_47 != k_47)))
            _fail(k_47);
          else
            j_47 = k_47;
        }
        t = not_null(j_47);
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
  ATerm s_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym_Id_0))
    {
      ATerm u_47 = NULL,w_47 = NULL;
      ATerm v_15;
      v_15 = t;
      {
        ATerm v_47 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          v_47 = t;
          if(((u_47 != NULL) && (u_47 != v_47)))
            _fail(v_47);
          else
            u_47 = v_47;
        }
      }
      t = v_15;
      {
        ATerm x_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(u_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        t = not_null(w_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm b_48 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm y_15 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              ;
              LocalPopChoice(c_16);
            }
          else
            {
              t = y_15;
              {
                ATerm d_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    ;
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = d_16;
                    {
                      ATerm k_16 = t;
                      int l_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          ;
                          LocalPopChoice(l_16);
                        }
                      else
                        {
                          t = k_16;
                          {
                            ATerm m_16 = t;
                            int n_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                ;
                                LocalPopChoice(n_16);
                              }
                            else
                              {
                                t = m_16;
                                {
                                  ATerm o_16 = t;
                                  int s_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      ;
                                      LocalPopChoice(s_16);
                                    }
                                  else
                                    {
                                      t = o_16;
                                      {
                                        ATerm t_16 = t;
                                        int u_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            ;
                                            LocalPopChoice(u_16);
                                          }
                                        else
                                          {
                                            t = t_16;
                                            {
                                              ATerm y_16 = t;
                                              int z_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  ;
                                                  LocalPopChoice(z_16);
                                                }
                                              else
                                                {
                                                  t = y_16;
                                                  {
                                                    ATerm a_17 = t;
                                                    int f_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        ;
                                                        LocalPopChoice(f_17);
                                                      }
                                                    else
                                                      {
                                                        t = a_17;
                                                        {
                                                          ATerm g_17 = t;
                                                          int h_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              ;
                                                              LocalPopChoice(h_17);
                                                            }
                                                          else
                                                            {
                                                              t = g_17;
                                                              {
                                                                ATerm j_17 = t;
                                                                int o_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, b_48, b_48);
                                                                    ;
                                                                    LocalPopChoice(o_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_17;
                                                                    t = LChoice_2(t, b_48, b_48);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = b_48(t);
  {
    ATerm p_17;
    p_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_q_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = p_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm c_48 (ATerm t)
  {
    ATerm r_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_105(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = r_17;
        t = _one(t, c_48);
      }
    return(t);
  }
  t = c_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_SDef_3))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      n_48 = ATgetArgument(k_48, 2);
      {
        ATerm s_48 = NULL,u_48 = NULL;
        ATerm t_48 = NULL;
        t = SSLgetAnnotations(not_null(k_48));
        {
          t_48 = t;
          if(((s_48 != NULL) && (s_48 != t_48)))
            _fail(t_48);
          else
            s_48 = t_48;
        }
        {
          t = not_null(l_48);
          {
            ATerm w_48 = NULL;
            t = m_95(t);
            {
              u_48 = t;
              {
                t = not_null(m_48);
                {
                  ATerm y_48 = NULL;
                  t = n_95(t);
                  {
                    w_48 = t;
                    {
                      t = not_null(n_48);
                      {
                        ATerm b_49 = NULL;
                        t = o_95(t);
                        {
                          y_48 = t;
                          {
                            ATerm c_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_48), not_null(w_48), not_null(y_48)), not_null(s_48));
                            {
                              c_49 = t;
                              if(((b_49 != NULL) && (b_49 != c_49)))
                                _fail(c_49);
                              else
                                b_49 = c_49;
                            }
                            t = not_null(b_49);
                          }
                        }
                      }
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
ATerm inlineable_0 (ATerm t)
{
  ATerm r_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm t_49 = NULL;
    ATerm x_17 = t;
    if((PushChoice() == 0))
      {
        ATerm s_49 = NULL;
        s_49 = t;
        l_49 :
        if(!(match_string(s_49, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_17;
      }
    {
      t_49 = t;
      if(((r_49 != NULL) && (r_49 != t_49)))
        _fail(t_49);
      else
        r_49 = t_49;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm a_18 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
            u_49 = t;
            o_49 :
            if(match_cons(u_49, sym_Call_2))
              {
                v_49 = ATgetArgument(u_49, 0);
                x_49 = ATgetArgument(u_49, 1);
                p_49 :
                if(match_cons(v_49, sym_SVar_1))
                  {
                    w_49 = ATgetArgument(v_49, 0);
                    q_49 :
                    if(((ATgetType(x_49) == AT_LIST) && ATisEmpty(x_49)))
                      {
                        if(((r_49 != NULL) && (r_49 != w_49)))
                          _fail(w_49);
                        else
                          r_49 = w_49;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, b_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_18;
        }
    }
    t = z_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym_Cong_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      {
        ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,y_52 = NULL,a_53 = NULL,i_53 = NULL;
        ATerm b_18;
        b_18 = t;
        {
          ATerm x_51 = NULL;
          t = not_null(o_51);
          {
            ATerm a_52 = NULL;
            t = map_1(t, new_0);
            {
              x_51 = t;
              {
                if(((u_51 != NULL) && (u_51 != x_51)))
                  _fail(x_51);
                else
                  u_51 = x_51;
                {
                  t = not_null(u_51);
                  {
                    ATerm b_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm y_51 = NULL;
                      ATerm z_51 = NULL;
                      z_51 = t;
                      if(((y_51 != NULL) && (y_51 != z_51)))
                        _fail(z_51);
                      else
                        y_51 = z_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      a_52 = t;
                      {
                        if(((r_51 != NULL) && (r_51 != a_52)))
                          _fail(a_52);
                        else
                          r_51 = a_52;
                        {
                          ATerm c_52 = NULL;
                          t = new_0(t);
                          {
                            b_52 = t;
                            {
                              if(((s_51 != NULL) && (s_51 != b_52)))
                                _fail(b_52);
                              else
                                s_51 = b_52;
                              {
                                t = not_null(o_51);
                                {
                                  ATerm f_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    c_52 = t;
                                    {
                                      if(((v_51 != NULL) && (v_51 != c_52)))
                                        _fail(c_52);
                                      else
                                        v_51 = c_52;
                                      {
                                        t = not_null(v_51);
                                        {
                                          ATerm g_52 = NULL,x_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm d_52 = NULL;
                                            ATerm e_52 = NULL;
                                            e_52 = t;
                                            if(((d_52 != NULL) && (d_52 != e_52)))
                                              _fail(e_52);
                                            else
                                              d_52 = e_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            f_52 = t;
                                            {
                                              if(((t_51 != NULL) && (t_51 != f_52)))
                                                _fail(f_52);
                                              else
                                                t_51 = f_52;
                                              {
                                                ATerm h_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_51), not_null(v_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    h_52 = t;
                                                    if(((g_52 != NULL) && (g_52 != h_52)))
                                                      _fail(h_52);
                                                    else
                                                      g_52 = h_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_52), not_null(o_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm i_52 = NULL,j_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
                                                      i_52 = t;
                                                      x_50 :
                                                      if(match_cons(i_52, sym__2))
                                                        {
                                                          j_52 = ATgetArgument(i_52, 0);
                                                          t_52 = ATgetArgument(i_52, 1);
                                                          y_50 :
                                                          if(match_cons(j_52, sym__2))
                                                            {
                                                              r_52 = ATgetArgument(j_52, 0);
                                                              s_52 = ATgetArgument(j_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_52)))));
                                                            }
                                                          else
                                                            {
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
                                                      x_52 = t;
                                                      if(((w_51 != NULL) && (w_51 != x_52)))
                                                        _fail(x_52);
                                                      else
                                                        w_51 = x_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = b_18;
        {
          ATerm c_18;
          c_18 = t;
          {
            ATerm z_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_51), not_null(v_51));
            {
              t = conc_0(t);
              {
                z_52 = t;
                if(((y_52 != NULL) && (y_52 != z_52)))
                  _fail(z_52);
                else
                  y_52 = z_52;
              }
            }
          }
          t = c_18;
          {
            ATerm h_18;
            h_18 = t;
            {
              ATerm b_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_51), not_null(r_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))));
              {
                t = Mapp2_0(t);
                {
                  b_53 = t;
                  if(((a_53 != NULL) && (a_53 != b_53)))
                    _fail(b_53);
                  else
                    a_53 = b_53;
                }
              }
            }
            t = h_18;
            {
              ATerm o_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_51), not_null(t_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))));
              {
                t = Bapp2_0(t);
                {
                  o_53 = t;
                  if(((i_53 != NULL) && (i_53 != o_53)))
                    _fail(o_53);
                  else
                    i_53 = o_53;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(y_52)), not_null(s_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_51)), not_null(i_53))));
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
  ATerm z_54 = NULL,a_55 = NULL;
  z_54 = t;
  y_54 :
  if(match_cons(z_54, sym_Build_1))
    {
      a_55 = ATgetArgument(z_54, 0);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL;
            ATerm g_55 = NULL;
            ATerm k_55 = NULL;
            t = new_0(t);
            {
              g_55 = t;
              {
                if(((e_55 != NULL) && (e_55 != g_55)))
                  _fail(g_55);
                else
                  e_55 = g_55;
                {
                  t = not_null(a_55);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
                      h_55 = t;
                      n_54 :
                      if(match_cons(h_55, sym_Anno_2))
                        {
                          i_55 = ATgetArgument(h_55, 0);
                          j_55 = ATgetArgument(h_55, 1);
                          {
                            if(((c_55 != NULL) && (c_55 != i_55)))
                              _fail(i_55);
                            else
                              c_55 = i_55;
                            {
                              if(((d_55 != NULL) && (d_55 != j_55)))
                                _fail(j_55);
                              else
                                d_55 = j_55;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_55));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, f_3);
                    {
                      k_55 = t;
                      if(((f_55 != NULL) && (f_55 != k_55)))
                        _fail(k_55);
                      else
                        f_55 = k_55;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_55)), not_null(c_55))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_55))));
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
                  ATerm p_55 = NULL;
                  ATerm s_55 = NULL;
                  t = new_0(t);
                  {
                    p_55 = t;
                    {
                      if(((n_55 != NULL) && (n_55 != p_55)))
                        _fail(p_55);
                      else
                        n_55 = p_55;
                      {
                        t = not_null(a_55);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm q_55 = NULL,r_55 = NULL;
                            q_55 = t;
                            s_54 :
                            if(match_cons(q_55, sym_RootApp_1))
                              {
                                r_55 = ATgetArgument(q_55, 0);
                                {
                                  if(((m_55 != NULL) && (m_55 != r_55)))
                                    _fail(r_55);
                                  else
                                    m_55 = r_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_55));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, g_3);
                          {
                            s_55 = t;
                            if(((o_55 != NULL) && (o_55 != s_55)))
                              _fail(s_55);
                            else
                              o_55 = s_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_55))));
                  ;
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  {
                    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
                    ATerm y_55 = NULL;
                    ATerm c_56 = NULL;
                    t = new_0(t);
                    {
                      y_55 = t;
                      {
                        if(((w_55 != NULL) && (w_55 != y_55)))
                          _fail(y_55);
                        else
                          w_55 = y_55;
                        {
                          t = not_null(a_55);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
                              z_55 = t;
                              w_54 :
                              if(match_cons(z_55, sym_App_2))
                                {
                                  a_56 = ATgetArgument(z_55, 0);
                                  b_56 = ATgetArgument(z_55, 1);
                                  {
                                    if(((u_55 != NULL) && (u_55 != a_56)))
                                      _fail(a_56);
                                    else
                                      u_55 = a_56;
                                    {
                                      if(((v_55 != NULL) && (v_55 != b_56)))
                                        _fail(b_56);
                                      else
                                        v_55 = b_56;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_55));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, h_3);
                            {
                              c_56 = t;
                              if(((x_55 != NULL) && (x_55 != c_56)))
                                _fail(c_56);
                              else
                                x_55 = c_56;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_55), not_null(v_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_55))));
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
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  q_56 :
  if(match_cons(r_56, sym__2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_56)), not_null(s_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  b_57 = t;
  y_56 :
  if(match_cons(b_57, sym__2))
    {
      c_57 = ATgetArgument(b_57, 0);
      f_57 = ATgetArgument(b_57, 1);
      z_56 :
      if(((ATgetType(c_57) == AT_LIST) && !(ATisEmpty(c_57))))
        {
          d_57 = ATgetFirst((ATermList) c_57);
          e_57 = (ATerm) ATgetNext((ATermList) c_57);
          a_57 :
          if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
            {
              g_57 = ATgetFirst((ATermList) f_57);
              h_57 = (ATerm) ATgetNext((ATermList) f_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_57), not_null(g_57)), (ATerm) ATmakeAppl(sym__2, not_null(e_57), not_null(h_57)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  o_57 :
  if(match_cons(r_57, sym__2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      p_57 :
      if(((ATgetType(s_57) == AT_LIST) && ATisEmpty(s_57)))
        {
          q_57 :
          if(((ATgetType(t_57) == AT_LIST) && ATisEmpty(t_57)))
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
ATerm genzip_4 (ATerm t, ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm))
{
  ATerm v_57 (ATerm t)
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_108(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          t = z_108(t);
          {
            t = _2(t, b_109, v_57);
            t = a_109(t);
          }
        }
      }
    return(t);
  }
  t = v_57(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_109 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_109);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  u_58 = t;
  n_58 :
  if(match_cons(u_58, sym_Call_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      x_58 = ATgetArgument(u_58, 1);
      o_58 :
      if(match_cons(v_58, sym_SVar_1))
        {
          w_58 = ATgetArgument(v_58, 0);
          p_58 :
          if(match_string(w_58, "Anno_Cong__"))
            {
              q_58 :
              if(((ATgetType(x_58) == AT_LIST) && !(ATisEmpty(x_58))))
                {
                  y_58 = ATgetFirst((ATermList) x_58);
                  b_59 = (ATerm) ATgetNext((ATermList) x_58);
                  r_58 :
                  if(match_cons(y_58, sym_Cong_2))
                    {
                      z_58 = ATgetArgument(y_58, 0);
                      a_59 = ATgetArgument(y_58, 1);
                      s_58 :
                      if(((ATgetType(b_59) == AT_LIST) && !(ATisEmpty(b_59))))
                        {
                          c_59 = ATgetFirst((ATermList) b_59);
                          d_59 = (ATerm) ATgetNext((ATermList) b_59);
                          t_58 :
                          if(((ATgetType(d_59) == AT_LIST) && ATisEmpty(d_59)))
                            {
                              {
                                ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,o_60 = NULL,q_60 = NULL,s_60 = NULL;
                                ATerm x_18;
                                x_18 = t;
                                {
                                  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(a_59)), not_null(c_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      r_59 = t;
                                      j_58 :
                                      if(((ATgetType(r_59) == AT_LIST) && !(ATisEmpty(r_59))))
                                        {
                                          s_59 = ATgetFirst((ATermList) r_59);
                                          t_59 = (ATerm) ATgetNext((ATermList) r_59);
                                          {
                                            ATerm w_59 = NULL;
                                            if(((k_59 != NULL) && (k_59 != s_59)))
                                              _fail(s_59);
                                            else
                                              k_59 = s_59;
                                            {
                                              if(((o_59 != NULL) && (o_59 != t_59)))
                                                _fail(t_59);
                                              else
                                                o_59 = t_59;
                                              {
                                                ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm u_59 = NULL;
                                                  ATerm v_59 = NULL;
                                                  v_59 = t;
                                                  if(((u_59 != NULL) && (u_59 != v_59)))
                                                    _fail(v_59);
                                                  else
                                                    u_59 = v_59;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_59));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  w_59 = t;
                                                  {
                                                    if(((l_59 != NULL) && (l_59 != w_59)))
                                                      _fail(w_59);
                                                    else
                                                      l_59 = w_59;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(a_59)), not_null(c_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          x_59 = t;
                                                          i_58 :
                                                          if(((ATgetType(x_59) == AT_LIST) && !(ATisEmpty(x_59))))
                                                            {
                                                              y_59 = ATgetFirst((ATermList) x_59);
                                                              z_59 = (ATerm) ATgetNext((ATermList) x_59);
                                                              {
                                                                ATerm c_60 = NULL;
                                                                if(((m_59 != NULL) && (m_59 != y_59)))
                                                                  _fail(y_59);
                                                                else
                                                                  m_59 = y_59;
                                                                {
                                                                  if(((p_59 != NULL) && (p_59 != z_59)))
                                                                    _fail(z_59);
                                                                  else
                                                                    p_59 = z_59;
                                                                  {
                                                                    ATerm d_60 = NULL,n_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
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
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      c_60 = t;
                                                                      {
                                                                        if(((n_59 != NULL) && (n_59 != c_60)))
                                                                          _fail(c_60);
                                                                        else
                                                                          n_59 = c_60;
                                                                        {
                                                                          ATerm e_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_59), not_null(p_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              e_60 = t;
                                                                              if(((d_60 != NULL) && (d_60 != e_60)))
                                                                                _fail(e_60);
                                                                              else
                                                                                d_60 = e_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_60), (ATerm) ATinsert(CheckATermList(not_null(a_59)), not_null(c_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
                                                                                f_60 = t;
                                                                                f_58 :
                                                                                if(match_cons(f_60, sym__2))
                                                                                  {
                                                                                    g_60 = ATgetArgument(f_60, 0);
                                                                                    j_60 = ATgetArgument(f_60, 1);
                                                                                    g_58 :
                                                                                    if(match_cons(g_60, sym__2))
                                                                                      {
                                                                                        h_60 = ATgetArgument(g_60, 0);
                                                                                        i_60 = ATgetArgument(g_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_60)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, k_3);
                                                                              {
                                                                                n_60 = t;
                                                                                if(((q_59 != NULL) && (q_59 != n_60)))
                                                                                  _fail(n_60);
                                                                                else
                                                                                  q_59 = n_60;
                                                                              }
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
                                t = x_18;
                                {
                                  ATerm y_18;
                                  y_18 = t;
                                  {
                                    ATerm p_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_59), not_null(p_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        p_60 = t;
                                        if(((o_60 != NULL) && (o_60 != p_60)))
                                          _fail(p_60);
                                        else
                                          o_60 = p_60;
                                      }
                                    }
                                  }
                                  t = y_18;
                                  {
                                    ATerm z_18;
                                    z_18 = t;
                                    {
                                      ATerm r_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(z_58), not_null(l_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          r_60 = t;
                                          if(((q_60 != NULL) && (q_60 != r_60)))
                                            _fail(r_60);
                                          else
                                            q_60 = r_60;
                                        }
                                      }
                                    }
                                    t = z_18;
                                    {
                                      ATerm t_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(z_58), not_null(n_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          t_60 = t;
                                          if(((s_60 != NULL) && (s_60 != t_60)))
                                            _fail(t_60);
                                          else
                                            s_60 = t_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(o_60)), not_null(m_59)), not_null(k_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_59)), not_null(s_60))));
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
ATerm As_2 (ATerm t, ATerm m_90 (ATerm), ATerm n_90 (ATerm))
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
  v_61 = t;
  u_61 :
  if(match_cons(v_61, sym_As_2))
    {
      w_61 = ATgetArgument(v_61, 0);
      x_61 = ATgetArgument(v_61, 1);
      {
        ATerm b_62 = NULL,d_62 = NULL;
        ATerm c_62 = NULL;
        t = SSLgetAnnotations(not_null(v_61));
        {
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
        }
        {
          t = not_null(w_61);
          {
            ATerm f_62 = NULL;
            t = m_90(t);
            {
              d_62 = t;
              {
                t = not_null(x_61);
                {
                  ATerm h_62 = NULL;
                  t = n_90(t);
                  {
                    f_62 = t;
                    {
                      ATerm i_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_62), not_null(f_62)), not_null(b_62));
                      {
                        i_62 = t;
                        if(((h_62 != NULL) && (h_62 != i_62)))
                          _fail(i_62);
                        else
                          h_62 = i_62;
                      }
                      t = not_null(h_62);
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
ATerm Prim_2 (ATerm t, ATerm b_94 (ATerm), ATerm c_94 (ATerm))
{
  ATerm a_63 = NULL,c_63 = NULL,d_63 = NULL;
  a_63 = t;
  z_62 :
  if(match_cons(a_63, sym_Prim_2))
    {
      c_63 = ATgetArgument(a_63, 0);
      d_63 = ATgetArgument(a_63, 1);
      {
        ATerm h_63 = NULL,j_63 = NULL;
        ATerm i_63 = NULL;
        t = SSLgetAnnotations(not_null(a_63));
        {
          i_63 = t;
          if(((h_63 != NULL) && (h_63 != i_63)))
            _fail(i_63);
          else
            h_63 = i_63;
        }
        {
          t = not_null(c_63);
          {
            ATerm l_63 = NULL;
            t = b_94(t);
            {
              j_63 = t;
              {
                t = not_null(d_63);
                {
                  ATerm n_63 = NULL;
                  t = c_94(t);
                  {
                    l_63 = t;
                    {
                      ATerm o_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_63), not_null(l_63)), not_null(h_63));
                      {
                        o_63 = t;
                        if(((n_63 != NULL) && (n_63 != o_63)))
                          _fail(o_63);
                        else
                          n_63 = o_63;
                      }
                      t = not_null(n_63);
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
ATerm Explode_2 (ATerm t, ATerm f_90 (ATerm), ATerm g_90 (ATerm))
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  z_63 :
  if(match_cons(a_64, sym_Explode_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      {
        ATerm g_64 = NULL,i_64 = NULL;
        ATerm h_64 = NULL;
        t = SSLgetAnnotations(not_null(a_64));
        {
          h_64 = t;
          if(((g_64 != NULL) && (g_64 != h_64)))
            _fail(h_64);
          else
            g_64 = h_64;
        }
        {
          t = not_null(b_64);
          {
            ATerm k_64 = NULL;
            t = f_90(t);
            {
              i_64 = t;
              {
                t = not_null(c_64);
                {
                  ATerm m_64 = NULL;
                  t = g_90(t);
                  {
                    k_64 = t;
                    {
                      ATerm n_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_64), not_null(k_64)), not_null(g_64));
                      {
                        n_64 = t;
                        if(((m_64 != NULL) && (m_64 != n_64)))
                          _fail(n_64);
                        else
                          m_64 = n_64;
                      }
                      t = not_null(m_64);
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
ATerm Op_2 (ATerm t, ATerm d_90 (ATerm), ATerm e_90 (ATerm))
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym_Op_2))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      {
        ATerm f_65 = NULL,h_65 = NULL;
        ATerm g_65 = NULL;
        t = SSLgetAnnotations(not_null(z_64));
        {
          g_65 = t;
          if(((f_65 != NULL) && (f_65 != g_65)))
            _fail(g_65);
          else
            f_65 = g_65;
        }
        {
          t = not_null(a_65);
          {
            ATerm o_65 = NULL;
            t = d_90(t);
            {
              h_65 = t;
              {
                t = not_null(b_65);
                {
                  ATerm q_65 = NULL;
                  t = e_90(t);
                  {
                    o_65 = t;
                    {
                      ATerm r_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(h_65), not_null(o_65)), not_null(f_65));
                      {
                        r_65 = t;
                        if(((q_65 != NULL) && (q_65 != r_65)))
                          _fail(r_65);
                        else
                          q_65 = r_65;
                      }
                      t = not_null(q_65);
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
ATerm pat_td_1 (ATerm t, ATerm v_129 (ATerm))
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_129(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm e_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, v_129);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = e_19;
            {
              ATerm n_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, v_129);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  ;
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = n_19;
                  {
                    ATerm s_19 = t;
                    int y_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, v_129);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        ;
                        LocalPopChoice(y_19);
                      }
                    else
                      {
                        t = s_19;
                        {
                          ATerm e_20 = t;
                          int f_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, v_129);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              ;
                              LocalPopChoice(f_20);
                            }
                          else
                            {
                              t = e_20;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, v_129);
                                  return(t);
                                }
                                t = As_2(t, _id, r_3);
                              }
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
  ATerm r_66 = NULL,s_66 = NULL;
  r_66 = t;
  q_66 :
  if(match_cons(r_66, sym_Match_1))
    {
      s_66 = ATgetArgument(r_66, 0);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_67 = NULL,f_67 = NULL,p_67 = NULL,q_67 = NULL;
            ATerm r_67 = NULL;
            ATerm d_68 = NULL;
            t = new_0(t);
            {
              r_67 = t;
              {
                if(((p_67 != NULL) && (p_67 != r_67)))
                  _fail(r_67);
                else
                  p_67 = r_67;
                {
                  t = not_null(s_66);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
                      a_68 = t;
                      g_66 :
                      if(match_cons(a_68, sym_Anno_2))
                        {
                          b_68 = ATgetArgument(a_68, 0);
                          c_68 = ATgetArgument(a_68, 1);
                          {
                            if(((e_67 != NULL) && (e_67 != b_68)))
                              _fail(b_68);
                            else
                              e_67 = b_68;
                            {
                              if(((f_67 != NULL) && (f_67 != c_68)))
                                _fail(c_68);
                              else
                                f_67 = c_68;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_67)), not_null(e_67));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, s_3);
                    {
                      d_68 = t;
                      if(((q_67 != NULL) && (q_67 != d_68)))
                        _fail(d_68);
                      else
                        q_67 = d_68;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_67)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_67)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_67))))));
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
                  ATerm i_68 = NULL;
                  ATerm l_68 = NULL;
                  t = new_0(t);
                  {
                    i_68 = t;
                    {
                      if(((g_68 != NULL) && (g_68 != i_68)))
                        _fail(i_68);
                      else
                        g_68 = i_68;
                      {
                        t = not_null(s_66);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm j_68 = NULL,k_68 = NULL;
                            j_68 = t;
                            k_66 :
                            if(match_cons(j_68, sym_RootApp_1))
                              {
                                k_68 = ATgetArgument(j_68, 0);
                                {
                                  if(((f_68 != NULL) && (f_68 != k_68)))
                                    _fail(k_68);
                                  else
                                    f_68 = k_68;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_68));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, t_3);
                          {
                            l_68 = t;
                            if(((h_68 != NULL) && (h_68 != l_68)))
                              _fail(l_68);
                            else
                              h_68 = l_68;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_68))), not_null(f_68))));
                  ;
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  {
                    ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
                    ATerm r_68 = NULL;
                    ATerm v_68 = NULL;
                    t = new_0(t);
                    {
                      r_68 = t;
                      {
                        if(((p_68 != NULL) && (p_68 != r_68)))
                          _fail(r_68);
                        else
                          p_68 = r_68;
                        {
                          t = not_null(s_66);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
                              s_68 = t;
                              o_66 :
                              if(match_cons(s_68, sym_App_2))
                                {
                                  t_68 = ATgetArgument(s_68, 0);
                                  u_68 = ATgetArgument(s_68, 1);
                                  {
                                    if(((o_68 != NULL) && (o_68 != t_68)))
                                      _fail(t_68);
                                    else
                                      o_68 = t_68;
                                    {
                                      if(((n_68 != NULL) && (n_68 != u_68)))
                                        _fail(u_68);
                                      else
                                        n_68 = u_68;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_68));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, u_3);
                            {
                              v_68 = t;
                              if(((q_68 != NULL) && (q_68 != v_68)))
                                _fail(v_68);
                              else
                                q_68 = v_68;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_68))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_68)), not_null(o_68)))));
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
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_Cong_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      {
        ATerm t_69 = NULL;
        ATerm x_69 = NULL;
        t = not_null(q_69);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm u_69 = NULL,v_69 = NULL;
            v_69 = t;
            l_69 :
            if(match_cons(v_69, sym_Match_1))
              {
                u_69 = ATgetArgument(v_69, 0);
                t = not_null(u_69);
              }
            else
              {
                if(match_cons(v_69, sym_Id_0))
                  {
                    t = term_s_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, v_3);
          {
            x_69 = t;
            if(((t_69 != NULL) && (t_69 != x_69)))
              _fail(x_69);
            else
              t_69 = x_69;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_69), not_null(t_69)));
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
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  d_70 :
  if(match_cons(f_70, sym_Scope_2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      e_70 :
      if(((ATgetType(g_70) == AT_LIST) && ATisEmpty(g_70)))
        {
          t = not_null(h_70);
        }
      else
        {
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
  ATerm q_71 = NULL,r_71 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  f_72 = t;
  e_71 :
  if(match_cons(f_72, sym_Where_1))
    {
      g_72 = ATgetArgument(f_72, 0);
      f_71 :
      if(match_cons(g_72, sym_Seq_2))
        {
          e_72 = ATgetArgument(g_72, 0);
          r_71 = ATgetArgument(g_72, 1);
          g_71 :
          if(match_cons(e_72, sym_Where_1))
            {
              q_71 = ATgetArgument(e_72, 0);
              h_71 :
              if(match_cons(r_71, sym_Seq_2))
                {
                  b_72 = ATgetArgument(r_71, 0);
                  d_72 = ATgetArgument(r_71, 1);
                  i_71 :
                  if(match_cons(b_72, sym_Build_1))
                    {
                      c_72 = ATgetArgument(b_72, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_72)), not_null(d_72))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_72, sym_Where_1))
            {
              e_72 = ATgetArgument(g_72, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_72));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(f_72, sym_Test_1))
        {
          g_72 = ATgetArgument(f_72, 0);
          o_71 :
          if(match_cons(g_72, sym_Test_1))
            {
              e_72 = ATgetArgument(g_72, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_72));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_72, sym_Not_1))
            {
              g_72 = ATgetArgument(f_72, 0);
              p_71 :
              if(match_cons(g_72, sym_Not_1))
                {
                  e_72 = ATgetArgument(g_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_72));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_72, sym_LChoice_2))
                {
                  g_72 = ATgetArgument(f_72, 0);
                  h_72 = ATgetArgument(f_72, 1);
                  {
                    if(((g_72 != NULL) && (g_72 != h_72)))
                      _fail(h_72);
                    else
                      g_72 = h_72;
                    t = not_null(g_72);
                  }
                }
              else
                {
                  if(match_cons(f_72, sym_Choice_2))
                    {
                      g_72 = ATgetArgument(f_72, 0);
                      h_72 = ATgetArgument(f_72, 1);
                      {
                        if(((g_72 != NULL) && (g_72 != h_72)))
                          _fail(h_72);
                        else
                          g_72 = h_72;
                        t = not_null(g_72);
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
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
  y_73 = t;
  u_73 :
  if(match_cons(y_73, sym_LChoice_2))
    {
      z_73 = ATgetArgument(y_73, 0);
      c_74 = ATgetArgument(y_73, 1);
      v_73 :
      if(match_cons(z_73, sym_LChoice_2))
        {
          a_74 = ATgetArgument(z_73, 0);
          b_74 = ATgetArgument(z_73, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_74), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_74), not_null(c_74)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_73, sym_Seq_2))
        {
          z_73 = ATgetArgument(y_73, 0);
          c_74 = ATgetArgument(y_73, 1);
          w_73 :
          if(match_cons(z_73, sym_Seq_2))
            {
              a_74 = ATgetArgument(z_73, 0);
              b_74 = ATgetArgument(z_73, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_74), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_74), not_null(c_74)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_73, sym_Choice_2))
            {
              z_73 = ATgetArgument(y_73, 0);
              c_74 = ATgetArgument(y_73, 1);
              x_73 :
              if(match_cons(z_73, sym_Choice_2))
                {
                  a_74 = ATgetArgument(z_73, 0);
                  b_74 = ATgetArgument(z_73, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_74), (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_74), not_null(c_74)));
                }
              else
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
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
  k_75 = t;
  d_75 :
  if(match_cons(k_75, sym_Lets_2))
    {
      l_75 = ATgetArgument(k_75, 0);
      m_75 = ATgetArgument(k_75, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_75), not_null(m_75));
    }
  else
    {
      if(match_cons(k_75, sym_LChoices_1))
        {
          l_75 = ATgetArgument(k_75, 0);
          e_75 :
          if(((ATgetType(l_75) == AT_LIST) && !(ATisEmpty(l_75))))
            {
              h_75 = ATgetFirst((ATermList) l_75);
              i_75 = (ATerm) ATgetNext((ATermList) l_75);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_75), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_75)));
            }
          else
            {
              if(((ATgetType(l_75) == AT_LIST) && ATisEmpty(l_75)))
                {
                  t = term_u_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(k_75, sym_Choices_1))
            {
              l_75 = ATgetArgument(k_75, 0);
              f_75 :
              if(((ATgetType(l_75) == AT_LIST) && !(ATisEmpty(l_75))))
                {
                  h_75 = ATgetFirst((ATermList) l_75);
                  i_75 = (ATerm) ATgetNext((ATermList) l_75);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_75)));
                }
              else
                {
                  if(((ATgetType(l_75) == AT_LIST) && ATisEmpty(l_75)))
                    {
                      t = term_u_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(k_75, sym_Seqs_1))
                {
                  l_75 = ATgetArgument(k_75, 0);
                  g_75 :
                  if(((ATgetType(l_75) == AT_LIST) && !(ATisEmpty(l_75))))
                    {
                      h_75 = ATgetFirst((ATermList) l_75);
                      i_75 = (ATerm) ATgetNext((ATermList) l_75);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_75), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_75)));
                    }
                  else
                    {
                      if(((ATgetType(l_75) == AT_LIST) && ATisEmpty(l_75)))
                        {
                          t = term_w_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(k_75, sym_DefaultVarDec_1))
                    {
                      l_75 = ATgetArgument(k_75, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_21), term_a_21));
                    }
                  else
                    {
                      if(match_cons(k_75, sym_InfixApp_3))
                        {
                          l_75 = ATgetArgument(k_75, 0);
                          m_75 = ATgetArgument(k_75, 1);
                          j_75 = ATgetArgument(k_75, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_75), (ATerm) ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_75)), not_null(l_75))));
                        }
                      else
                        {
                          if(match_cons(k_75, sym_BAM_3))
                            {
                              l_75 = ATgetArgument(k_75, 0);
                              m_75 = ATgetArgument(k_75, 1);
                              j_75 = ATgetArgument(k_75, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_75))), not_null(l_75)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_75))));
                            }
                          else
                            {
                              if(match_cons(k_75, sym_AM_2))
                                {
                                  l_75 = ATgetArgument(k_75, 0);
                                  m_75 = ATgetArgument(k_75, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_75)));
                                }
                              else
                                {
                                  if(match_cons(k_75, sym_MA_2))
                                    {
                                      l_75 = ATgetArgument(k_75, 0);
                                      m_75 = ATgetArgument(k_75, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_75)), not_null(m_75));
                                    }
                                  else
                                    {
                                      if(match_cons(k_75, sym_BA_2))
                                        {
                                          l_75 = ATgetArgument(k_75, 0);
                                          m_75 = ATgetArgument(k_75, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_75)), not_null(l_75));
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
  ATerm y_76 = NULL,z_76 = NULL;
  y_76 = t;
  w_76 :
  if(match_cons(y_76, sym_Where_1))
    {
      z_76 = ATgetArgument(y_76, 0);
      x_76 :
      if(match_cons(z_76, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  c_77 :
  if(match_cons(e_77, sym_LChoice_2))
    {
      f_77 = ATgetArgument(e_77, 0);
      g_77 = ATgetArgument(e_77, 1);
      d_77 :
      if(match_cons(g_77, sym_Fail_0))
        {
          t = not_null(f_77);
        }
      else
        {
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
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
  m_77 = t;
  k_77 :
  if(match_cons(m_77, sym_LChoice_2))
    {
      n_77 = ATgetArgument(m_77, 0);
      o_77 = ATgetArgument(m_77, 1);
      l_77 :
      if(match_cons(n_77, sym_Fail_0))
        {
          t = not_null(o_77);
        }
      else
        {
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
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  u_77 = t;
  s_77 :
  if(match_cons(u_77, sym_Choice_2))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      t_77 :
      if(match_cons(w_77, sym_Fail_0))
        {
          t = not_null(v_77);
        }
      else
        {
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
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
  c_78 = t;
  a_78 :
  if(match_cons(c_78, sym_Choice_2))
    {
      d_78 = ATgetArgument(c_78, 0);
      e_78 = ATgetArgument(c_78, 1);
      b_78 :
      if(match_cons(d_78, sym_Fail_0))
        {
          t = not_null(e_78);
        }
      else
        {
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
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
  k_78 = t;
  j_78 :
  if(match_cons(k_78, sym_Cong_2))
    {
      l_78 = ATgetArgument(k_78, 0);
      m_78 = ATgetArgument(k_78, 1);
      {
        t = not_null(m_78);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm p_78 = NULL;
            p_78 = t;
            i_78 :
            if(!(match_cons(p_78, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_u_20;
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
  ATerm v_78 = NULL,h_79 = NULL,i_79 = NULL;
  v_78 = t;
  s_78 :
  if(match_cons(v_78, sym_Path_2))
    {
      h_79 = ATgetArgument(v_78, 0);
      i_79 = ATgetArgument(v_78, 1);
      t_78 :
      if(match_cons(i_79, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm t_80 = NULL,u_80 = NULL;
  t_80 = t;
  r_80 :
  if(match_cons(t_80, sym_One_1))
    {
      u_80 = ATgetArgument(t_80, 0);
      s_80 :
      if(match_cons(u_80, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm z_80 = NULL,a_81 = NULL;
  z_80 = t;
  x_80 :
  if(match_cons(z_80, sym_Some_1))
    {
      a_81 = ATgetArgument(z_80, 0);
      y_80 :
      if(match_cons(a_81, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
  f_81 = t;
  d_81 :
  if(match_cons(f_81, sym_Rec_2))
    {
      g_81 = ATgetArgument(f_81, 0);
      h_81 = ATgetArgument(f_81, 1);
      e_81 :
      if(match_cons(h_81, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  n_81 = t;
  l_81 :
  if(match_cons(n_81, sym_Scope_2))
    {
      o_81 = ATgetArgument(n_81, 0);
      p_81 = ATgetArgument(n_81, 1);
      m_81 :
      if(match_cons(p_81, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  t_81 :
  if(match_cons(v_81, sym_Seq_2))
    {
      w_81 = ATgetArgument(v_81, 0);
      x_81 = ATgetArgument(v_81, 1);
      u_81 :
      if(match_cons(w_81, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm d_82 = NULL,e_82 = NULL;
  d_82 = t;
  b_82 :
  if(match_cons(d_82, sym_Not_1))
    {
      e_82 = ATgetArgument(d_82, 0);
      c_82 :
      if(match_cons(e_82, sym_Fail_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm j_82 = NULL,k_82 = NULL;
  j_82 = t;
  h_82 :
  if(match_cons(j_82, sym_Test_1))
    {
      k_82 = ATgetArgument(j_82, 0);
      i_82 :
      if(match_cons(k_82, sym_Fail_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = r_21;
                  {
                    ATerm t_21 = t;
                    int u_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(u_21);
                      }
                    else
                      {
                        t = t_21;
                        {
                          ATerm v_21 = t;
                          int w_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(w_21);
                            }
                          else
                            {
                              t = v_21;
                              {
                                ATerm x_21 = t;
                                int y_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(y_21);
                                  }
                                else
                                  {
                                    t = x_21;
                                    {
                                      ATerm z_21 = t;
                                      int a_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(a_22);
                                        }
                                      else
                                        {
                                          t = z_21;
                                          {
                                            ATerm b_22 = t;
                                            int c_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(c_22);
                                              }
                                            else
                                              {
                                                t = b_22;
                                                {
                                                  ATerm d_22 = t;
                                                  int e_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(e_22);
                                                    }
                                                  else
                                                    {
                                                      t = d_22;
                                                      {
                                                        ATerm f_22 = t;
                                                        int g_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(g_22);
                                                          }
                                                        else
                                                          {
                                                            t = f_22;
                                                            {
                                                              ATerm h_22 = t;
                                                              int l_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_22);
                                                                }
                                                              else
                                                                {
                                                                  t = h_22;
                                                                  {
                                                                    ATerm m_22 = t;
                                                                    int q_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(q_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_22;
                                                                        {
                                                                          ATerm t_22 = t;
                                                                          int u_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(u_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_22;
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
  ATerm p_82 = NULL,q_82 = NULL;
  p_82 = t;
  n_82 :
  if(match_cons(p_82, sym_Match_1))
    {
      q_82 = ATgetArgument(p_82, 0);
      o_82 :
      if(match_cons(q_82, sym_Wld_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm v_82 = NULL,w_82 = NULL;
  v_82 = t;
  t_82 :
  if(match_cons(v_82, sym_Where_1))
    {
      w_82 = ATgetArgument(v_82, 0);
      u_82 :
      if(match_cons(w_82, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm b_83 = NULL,c_83 = NULL;
  b_83 = t;
  z_82 :
  if(match_cons(b_83, sym_All_1))
    {
      c_83 = ATgetArgument(b_83, 0);
      a_83 :
      if(match_cons(c_83, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL;
  h_83 = t;
  f_83 :
  if(match_cons(h_83, sym_Rec_2))
    {
      i_83 = ATgetArgument(h_83, 0);
      j_83 = ATgetArgument(h_83, 1);
      g_83 :
      if(match_cons(j_83, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
  v_83 = t;
  t_83 :
  if(match_cons(v_83, sym_Scope_2))
    {
      w_83 = ATgetArgument(v_83, 0);
      x_83 = ATgetArgument(v_83, 1);
      u_83 :
      if(match_cons(x_83, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL;
  d_84 = t;
  b_84 :
  if(match_cons(d_84, sym_LChoice_2))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      c_84 :
      if(match_cons(e_84, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  l_84 = t;
  j_84 :
  if(match_cons(l_84, sym_Seq_2))
    {
      m_84 = ATgetArgument(l_84, 0);
      n_84 = ATgetArgument(l_84, 1);
      k_84 :
      if(match_cons(n_84, sym_Id_0))
        {
          t = not_null(m_84);
        }
      else
        {
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
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  r_84 :
  if(match_cons(t_84, sym_Seq_2))
    {
      u_84 = ATgetArgument(t_84, 0);
      v_84 = ATgetArgument(t_84, 1);
      s_84 :
      if(match_cons(u_84, sym_Id_0))
        {
          t = not_null(v_84);
        }
      else
        {
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
  ATerm b_85 = NULL,c_85 = NULL;
  b_85 = t;
  z_84 :
  if(match_cons(b_85, sym_Not_1))
    {
      c_85 = ATgetArgument(b_85, 0);
      a_85 :
      if(match_cons(c_85, sym_Id_0))
        {
          t = term_u_20;
        }
      else
        {
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
  ATerm h_85 = NULL,i_85 = NULL;
  h_85 = t;
  f_85 :
  if(match_cons(h_85, sym_Test_1))
    {
      i_85 = ATgetArgument(h_85, 0);
      g_85 :
      if(match_cons(i_85, sym_Id_0))
        {
          t = term_w_20;
        }
      else
        {
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
  ATerm y_22 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = y_22;
      {
        ATerm c_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = c_23;
            {
              ATerm j_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(k_23);
                }
              else
                {
                  t = j_23;
                  {
                    ATerm l_23 = t;
                    int m_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(m_23);
                      }
                    else
                      {
                        t = l_23;
                        {
                          ATerm n_23 = t;
                          int o_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(o_23);
                            }
                          else
                            {
                              t = n_23;
                              {
                                ATerm p_23 = t;
                                int q_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(q_23);
                                  }
                                else
                                  {
                                    t = p_23;
                                    {
                                      ATerm r_23 = t;
                                      int s_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(s_23);
                                        }
                                      else
                                        {
                                          t = r_23;
                                          {
                                            ATerm t_23 = t;
                                            int u_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(u_23);
                                              }
                                            else
                                              {
                                                t = t_23;
                                                {
                                                  ATerm v_23 = t;
                                                  int w_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(w_23);
                                                    }
                                                  else
                                                    {
                                                      t = v_23;
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
  ATerm x_23 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = x_23;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm h_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = h_24;
                  {
                    ATerm k_24 = t;
                    int l_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(l_24);
                      }
                    else
                      {
                        t = k_24;
                        {
                          ATerm m_24 = t;
                          int n_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(n_24);
                            }
                          else
                            {
                              t = m_24;
                              {
                                ATerm o_24 = t;
                                int p_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(p_24);
                                  }
                                else
                                  {
                                    t = o_24;
                                    {
                                      ATerm q_24 = t;
                                      int r_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(r_24);
                                        }
                                      else
                                        {
                                          t = q_24;
                                          {
                                            ATerm s_24 = t;
                                            int x_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(x_24);
                                              }
                                            else
                                              {
                                                t = s_24;
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
ATerm repeat_1 (ATerm t, ATerm f_121 (ATerm))
{
  ATerm k_85 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = f_121(t);
      t = k_85(t);
      return(t);
    }
    t = try_1(t, x_3);
    return(t);
  }
  t = k_85(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm o_104 (ATerm))
{
  t = o_104(t);
  {
    ATerm y_3 (ATerm t)
    {
      t = downup_1(t, o_104);
      return(t);
    }
    t = _all(t, y_3);
    t = o_104(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, z_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm b_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, b_4);
    }
    return(t);
  }
  t = map_1(t, a_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm q_85 = NULL,r_85 = NULL;
  q_85 = t;
  p_85 :
  if(match_cons(q_85, sym_Strategies_1))
    {
      r_85 = ATgetArgument(q_85, 0);
      {
        ATerm u_85 = NULL,w_85 = NULL;
        ATerm v_85 = NULL;
        t = SSLgetAnnotations(not_null(q_85));
        {
          v_85 = t;
          if(((u_85 != NULL) && (u_85 != v_85)))
            _fail(v_85);
          else
            u_85 = v_85;
        }
        {
          t = not_null(r_85);
          {
            ATerm y_85 = NULL;
            t = b_89(t);
            {
              w_85 = t;
              {
                ATerm z_85 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_85)), not_null(u_85));
                {
                  z_85 = t;
                  if(((y_85 != NULL) && (y_85 != z_85)))
                    _fail(z_85);
                  else
                    y_85 = z_85;
                }
                t = not_null(y_85);
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
ATerm Specification_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm s_86 = NULL,t_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym_Specification_1))
    {
      t_86 = ATgetArgument(s_86, 0);
      {
        ATerm w_86 = NULL,y_86 = NULL;
        ATerm x_86 = NULL;
        t = SSLgetAnnotations(not_null(s_86));
        {
          x_86 = t;
          if(((w_86 != NULL) && (w_86 != x_86)))
            _fail(x_86);
          else
            w_86 = x_86;
        }
        {
          t = not_null(t_86);
          {
            ATerm a_87 = NULL;
            t = g_89(t);
            {
              y_86 = t;
              {
                ATerm b_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_86)), not_null(w_86));
                {
                  b_87 = t;
                  if(((a_87 != NULL) && (a_87 != b_87)))
                    _fail(b_87);
                  else
                    a_87 = b_87;
                }
                t = not_null(a_87);
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
ATerm inline_strategies_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, e_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, d_4);
    return(t);
  }
  t = Specification_1(t, c_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  l_87 :
  if(match_cons(o_87, sym__2))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      {
        ATerm u_87 = NULL,w_87 = NULL;
        ATerm v_87 = NULL;
        t = SSLgetAnnotations(not_null(o_87));
        {
          v_87 = t;
          if(((u_87 != NULL) && (u_87 != v_87)))
            _fail(v_87);
          else
            u_87 = v_87;
        }
        {
          t = not_null(p_87);
          {
            ATerm y_87 = NULL;
            t = m_87(t);
            {
              w_87 = t;
              {
                t = not_null(q_87);
                {
                  ATerm a_88 = NULL;
                  t = n_87(t);
                  {
                    y_87 = t;
                    {
                      ATerm b_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_87), not_null(y_87)), not_null(u_87));
                      {
                        b_88 = t;
                        if(((a_88 != NULL) && (a_88 != b_88)))
                          _fail(b_88);
                        else
                          a_88 = b_88;
                      }
                      t = not_null(a_88);
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
  ATerm y_24;
  y_24 = t;
  {
    ATerm i_88 = NULL;
    ATerm j_88 = NULL;
    t = term_d_7;
    {
      t = whoami_0(t);
      {
        j_88 = t;
        if(((i_88 != NULL) && (i_88 != j_88)))
          _fail(j_88);
        else
          i_88 = j_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_25), not_null(i_88)), term_k_25));
      {
        t = printnl_0(t);
        {
          t = term_t_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  m_88 :
  if(match_cons(n_88, sym__2))
    {
      o_88 = ATgetArgument(n_88, 0);
      p_88 = ATgetArgument(n_88, 1);
      {
        ATerm m_25;
        m_25 = t;
        t = SSL_printnl(not_null(o_88), not_null(p_88));
        t = m_25;
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
  ATerm u_88 = NULL;
  u_88 = t;
  t = SSL_implode_string(not_null(u_88));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm e_89 = NULL,f_89 = NULL,h_89 = NULL;
        e_89 = t;
        d_89 :
        if(((ATgetType(e_89) == AT_LIST) && !(ATisEmpty(e_89))))
          {
            f_89 = ATgetFirst((ATermList) e_89);
            h_89 = (ATerm) ATgetNext((ATermList) e_89);
            {
              t = not_null(f_89);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(h_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_4);
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
  ATerm r_89 = NULL;
  ATerm t_89 = NULL;
  r_89 = t;
  {
    ATerm u_89 = NULL;
    ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
    t = not_null(r_89);
    {
      u_89 = t;
      {
        t = SSL_explode_term(not_null(u_89));
        {
          w_89 = t;
          p_89 :
          if(match_cons(w_89, sym__2))
            {
              x_89 = ATgetArgument(w_89, 0);
              y_89 = ATgetArgument(w_89, 1);
              q_89 :
              if(match_string(x_89, ""))
                {
                  if(((t_89 != NULL) && (t_89 != y_89)))
                    _fail(y_89);
                  else
                    t_89 = y_89;
                }
              else
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
      t = not_null(t_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_111 (ATerm))
{
  ATerm c_90 (ATerm t)
  {
    ATerm p_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_90);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = p_25;
        {
          t = Nil_0(t);
          t = c_111(t);
        }
      }
    return(t);
  }
  t = c_90(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
  j_90 = t;
  i_90 :
  if(match_cons(j_90, sym__2))
    {
      k_90 = ATgetArgument(j_90, 0);
      l_90 = ATgetArgument(j_90, 1);
      {
        t = not_null(k_90);
        {
          ATerm j_4 (ATerm t)
          {
            t = not_null(l_90);
            return(t);
          }
          t = at_end_1(t, j_4);
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
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  t = SSL_explode_string(not_null(s_90));
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
  ATerm a_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = a_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_4);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            {
              ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
              b_91 = t;
              a_91 :
              if(match_cons(b_91, sym_Path_1))
                {
                  c_91 = ATgetArgument(b_91, 0);
                  t = not_null(c_91);
                }
              else
                {
                  if(match_cons(b_91, sym_Var_1))
                    {
                      c_91 = ATgetArgument(b_91, 0);
                      {
                        t = not_null(c_91);
                        {
                          ATerm p_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = p_26;
                              {
                                ATerm l_4 (ATerm t)
                                {
                                  t = term_v_26;
                                  return(t);
                                }
                                t = debug_1(t, l_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_91, sym_Prefix_2))
                        {
                          c_91 = ATgetArgument(b_91, 0);
                          d_91 = ATgetArgument(b_91, 1);
                          {
                            ATerm i_91 = NULL,k_91 = NULL;
                            ATerm w_26;
                            w_26 = t;
                            {
                              ATerm j_91 = NULL;
                              t = not_null(c_91);
                              {
                                t = eval_config_0(t);
                                {
                                  j_91 = t;
                                  if(((i_91 != NULL) && (i_91 != j_91)))
                                    _fail(j_91);
                                  else
                                    i_91 = j_91;
                                }
                              }
                            }
                            t = w_26;
                            {
                              ATerm l_91 = NULL;
                              t = not_null(d_91);
                              {
                                t = eval_config_0(t);
                                {
                                  l_91 = t;
                                  if(((k_91 != NULL) && (k_91 != l_91)))
                                    _fail(l_91);
                                  else
                                    k_91 = l_91;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_91), not_null(k_91));
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
  ATerm t_91 = NULL;
  t_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(t_91));
    {
      t = table_get_0(t);
      {
        ATerm m_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_26;
            y_26 = t;
            {
              ATerm v_91 = NULL;
              ATerm w_91 = NULL;
              w_91 = t;
              if(((v_91 != NULL) && (v_91 != w_91)))
                _fail(w_91);
              else
                v_91 = w_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(t_91), not_null(v_91));
                t = table_put_0(t);
              }
            }
            t = y_26;
          }
          return(t);
        }
        t = try_1(t, m_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm d_27;
    d_27 = t;
    {
      ATerm a_92 = NULL;
      ATerm b_92 = NULL;
      t = term_e_27;
      {
        t = get_config_0(t);
        {
          b_92 = t;
          if(((a_92 != NULL) && (a_92 != b_92)))
            _fail(b_92);
          else
            a_92 = b_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_92), term_g_27);
        t = geq_0(t);
      }
    }
    t = d_27;
    t = p_124(t);
    return(t);
  }
  t = try_1(t, n_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,n_92 = NULL;
  i_92 = t;
  g_92 :
  if(match_cons(i_92, sym__2))
    {
      j_92 = ATgetArgument(i_92, 0);
      k_92 = ATgetArgument(i_92, 1);
      h_92 :
      if(match_cons(k_92, sym_Stream_1))
        {
          n_92 = ATgetArgument(k_92, 0);
          {
            ATerm q_92 = NULL;
            t = SSL_fputc(not_null(j_92), not_null(n_92));
            {
              ATerm r_92 = NULL;
              r_92 = t;
              if(((q_92 != NULL) && (q_92 != r_92)))
                _fail(r_92);
              else
                q_92 = r_92;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_92));
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
  ATerm d_93 = NULL,g_93 = NULL,j_93 = NULL,k_93 = NULL;
  d_93 = t;
  b_93 :
  if(match_cons(d_93, sym__2))
    {
      g_93 = ATgetArgument(d_93, 0);
      k_93 = ATgetArgument(d_93, 1);
      c_93 :
      if(match_cons(g_93, sym_Stream_1))
        {
          j_93 = ATgetArgument(g_93, 0);
          {
            ATerm r_93 = NULL;
            t = SSL_write_term_to_stream_text(not_null(j_93), not_null(k_93));
            {
              ATerm s_93 = NULL;
              s_93 = t;
              if(((r_93 != NULL) && (r_93 != s_93)))
                _fail(s_93);
              else
                r_93 = s_93;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_93));
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
  ATerm o_4 (ATerm t)
  {
    ATerm y_93 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm z_93 = NULL;
      z_93 = t;
      if(((y_93 != NULL) && (y_93 != z_93)))
        _fail(z_93);
      else
        y_93 = z_93;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(y_93));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, o_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  h_94 = t;
  f_94 :
  if(match_cons(h_94, sym__2))
    {
      i_94 = ATgetArgument(h_94, 0);
      k_94 = ATgetArgument(h_94, 1);
      g_94 :
      if(match_cons(i_94, sym_Stream_1))
        {
          j_94 = ATgetArgument(i_94, 0);
          {
            ATerm n_94 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(j_94), not_null(k_94));
            {
              ATerm o_94 = NULL;
              o_94 = t;
              if(((n_94 != NULL) && (n_94 != o_94)))
                _fail(o_94);
              else
                n_94 = o_94;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_94));
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
ATerm WriteToFile_1 (ATerm t, ATerm s_131 (ATerm))
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  u_94 :
  if(match_cons(v_94, sym__2))
    {
      w_94 = ATgetArgument(v_94, 0);
      x_94 = ATgetArgument(v_94, 1);
      {
        ATerm a_95 = NULL,c_95 = NULL;
        t = not_null(w_94);
        {
          ATerm b_95 = NULL;
          b_95 = t;
          if(((a_95 != NULL) && (a_95 != b_95)))
            _fail(b_95);
          else
            a_95 = b_95;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_95), term_h_27);
            {
              t = open_stream_0(t);
              {
                ATerm d_95 = NULL;
                d_95 = t;
                if(((c_95 != NULL) && (c_95 != d_95)))
                  _fail(d_95);
                else
                  c_95 = d_95;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_95), not_null(x_94));
                  {
                    t = s_131(t);
                    {
                      t = fclose_0(t);
                      t = not_null(x_94);
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
  ATerm l_95 = NULL;
  ATerm i_27;
  i_27 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm k_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            ATerm p_95 = NULL,q_95 = NULL;
            p_95 = t;
            i_95 :
            if(match_cons(p_95, sym_Output_1))
              {
                q_95 = ATgetArgument(p_95, 0);
                if(((l_95 != NULL) && (l_95 != q_95)))
                  _fail(q_95);
                else
                  l_95 = q_95;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_4);
          ;
          LocalPopChoice(m_27);
        }
      else
        {
          t = k_27;
          {
            ATerm r_95 = NULL;
            t = term_n_27;
            {
              r_95 = t;
              if(((l_95 != NULL) && (l_95 != r_95)))
                _fail(r_95);
              else
                l_95 = r_95;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_4, _id);
  }
  t = i_27;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = not_null(l_95);
        return(t);
      }
      t = split_2(t, s_4, _id);
      return(t);
    }
    t = _2(t, _id, r_4);
    {
      ATerm r_27 = t;
      int s_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm s_95 = NULL;
              s_95 = t;
              k_95 :
              if(!(match_cons(s_95, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_4);
            return(t);
          }
          t = _2(t, t_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(s_27);
        }
      else
        {
          t = r_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm i_126 (ATerm))
{
  ATerm y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
  ATerm t_27;
  t_27 = t;
  t = dtime_0(t);
  t = t_27;
  {
    t = i_126(t);
    {
      ATerm u_27;
      u_27 = t;
      {
        ATerm z_95 = NULL;
        t = dtime_0(t);
        {
          z_95 = t;
          if(((y_95 != NULL) && (y_95 != z_95)))
            _fail(z_95);
          else
            y_95 = z_95;
        }
      }
      t = u_27;
      {
        a_96 = t;
        x_95 :
        if(match_cons(a_96, sym__2))
          {
            b_96 = ATgetArgument(a_96, 0);
            c_96 = ATgetArgument(a_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_95))), not_null(c_96));
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
  ATerm k_96 = NULL,l_96 = NULL;
  ATerm r_96 (ATerm t)
  {
    t = SSL_fclose(not_null(l_96));
    return(t);
  }
  l_96 = t;
  j_96 :
  if(match_cons(l_96, sym_Stream_1))
    {
      k_96 = ATgetArgument(l_96, 0);
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_96));
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = r_96(t);
          }
      }
    }
  else
    {
      t = r_96(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL;
  u_96 = t;
  t_96 :
  if(match_cons(u_96, sym_Stream_1))
    {
      v_96 = ATgetArgument(u_96, 0);
      t = SSL_read_term_from_stream(not_null(v_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_131 (ATerm))
{
  ATerm y_27;
  y_27 = t;
  {
    ATerm a_97 = NULL,c_97 = NULL;
    ATerm z_27;
    z_27 = t;
    {
      ATerm b_97 = NULL;
      t = e_131(t);
      {
        b_97 = t;
        if(((a_97 != NULL) && (a_97 != b_97)))
          _fail(b_97);
        else
          a_97 = b_97;
      }
    }
    t = z_27;
    {
      ATerm d_97 = NULL;
      d_97 = t;
      if(((c_97 != NULL) && (c_97 != d_97)))
        _fail(d_97);
      else
        c_97 = d_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), not_null(a_97)));
        t = printnl_0(t);
      }
    }
  }
  t = y_27;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
  j_97 = t;
  i_97 :
  if(match_cons(j_97, sym__2))
    {
      k_97 = ATgetArgument(j_97, 0);
      l_97 = ATgetArgument(j_97, 1);
      {
        ATerm o_97 = NULL;
        t = SSL_fopen(not_null(k_97), not_null(l_97));
        {
          ATerm p_97 = NULL;
          p_97 = t;
          if(((o_97 != NULL) && (o_97 != p_97)))
            _fail(p_97);
          else
            o_97 = p_97;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_97));
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
  ATerm t_97 = NULL;
  t_97 = t;
  t = SSL_is_string(not_null(t_97));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm x_97 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_97 = NULL;
    y_97 = t;
    if(((x_97 != NULL) && (x_97 != y_97)))
      _fail(y_97);
    else
      x_97 = y_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_97));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm b_98 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_98 = NULL;
    c_98 = t;
    if(((b_98 != NULL) && (b_98 != c_98)))
      _fail(c_98);
    else
      b_98 = c_98;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_98));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm f_98 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_98 = NULL;
    g_98 = t;
    if(((f_98 != NULL) && (f_98 != g_98)))
      _fail(g_98);
    else
      f_98 = g_98;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_98));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_98 = NULL;
  m_98 = t;
  l_98 :
  if(match_cons(m_98, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_98, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_98, sym_stdin_0))
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
  ATerm w_98 = NULL;
  ATerm y_98 = NULL,z_98 = NULL;
  w_98 = t;
  {
    ATerm a_99 = NULL;
    ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL;
    t = not_null(w_98);
    {
      a_99 = t;
      {
        t = SSL_explode_term(not_null(a_99));
        {
          c_99 = t;
          t_98 :
          if(match_cons(c_99, sym__2))
            {
              d_99 = ATgetArgument(c_99, 0);
              e_99 = ATgetArgument(c_99, 1);
              u_98 :
              if(match_string(d_99, ""))
                {
                  v_98 :
                  if(((ATgetType(e_99) == AT_LIST) && !(ATisEmpty(e_99))))
                    {
                      f_99 = ATgetFirst((ATermList) e_99);
                      g_99 = (ATerm) ATgetNext((ATermList) e_99);
                      {
                        if(((z_98 != NULL) && (z_98 != f_99)))
                          _fail(f_99);
                        else
                          z_98 = f_99;
                        if(((y_98 != NULL) && (y_98 != g_99)))
                          _fail(g_99);
                        else
                          y_98 = g_99;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(z_98);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
  o_99 = t;
  n_99 :
  if(match_cons(o_99, sym__2))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      {
        ATerm a_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = a_28;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm r_99 = NULL,s_99 = NULL;
                    r_99 = t;
                    m_99 :
                    if(match_cons(r_99, sym_Path_1))
                      {
                        s_99 = ATgetArgument(r_99, 0);
                        t = not_null(s_99);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = h_28;
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
  ATerm a_100 = NULL;
  ATerm j_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_99 = NULL;
      ATerm z_99 = NULL;
      z_99 = t;
      if(((y_99 != NULL) && (y_99 != z_99)))
        _fail(z_99);
      else
        y_99 = z_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_99), term_w_28);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = j_28;
      {
        ATerm w_4 (ATerm t)
        {
          t = term_x_28;
          return(t);
        }
        t = debug_1(t, w_4);
        _fail(t);
      }
    }
  {
    ATerm z_28;
    z_28 = t;
    {
      ATerm b_100 = NULL;
      t = read_from_stream_0(t);
      {
        b_100 = t;
        if(((a_100 != NULL) && (a_100 != b_100)))
          _fail(b_100);
        else
          a_100 = b_100;
      }
    }
    t = z_28;
    {
      t = fclose_0(t);
      t = not_null(a_100);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_107 (ATerm), ATerm z_107 (ATerm))
{
  ATerm g_100 = NULL,i_100 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    ATerm h_100 = NULL;
    t = y_107(t);
    {
      h_100 = t;
      if(((g_100 != NULL) && (g_100 != h_100)))
        _fail(h_100);
      else
        g_100 = h_100;
    }
  }
  t = a_29;
  {
    ATerm j_100 = NULL;
    t = z_107(t);
    {
      j_100 = t;
      if(((i_100 != NULL) && (i_100 != j_100)))
        _fail(j_100);
      else
        i_100 = j_100;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_100), not_null(i_100));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_100 = NULL;
  ATerm p_29;
  p_29 = t;
  {
    ATerm q_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 (ATerm t)
        {
          ATerm q_100 = NULL,r_100 = NULL;
          q_100 = t;
          n_100 :
          if(match_cons(q_100, sym_Input_1))
            {
              r_100 = ATgetArgument(q_100, 0);
              if(((p_100 != NULL) && (p_100 != r_100)))
                _fail(r_100);
              else
                p_100 = r_100;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_4);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = q_29;
        {
          ATerm s_100 = NULL;
          t = term_t_29;
          {
            s_100 = t;
            if(((p_100 != NULL) && (p_100 != s_100)))
              _fail(s_100);
            else
              p_100 = s_100;
          }
        }
      }
  }
  t = p_29;
  {
    ATerm y_4 (ATerm t)
    {
      t = not_null(p_100);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm x_100 = NULL;
    x_100 = t;
    v_100 :
    if(!(match_string(x_100, "-k")))
      {
        if(!(match_string(x_100, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm u_29;
    u_29 = t;
    {
      ATerm y_100 = NULL;
      ATerm z_100 = NULL;
      t = string_to_int_0(t);
      {
        z_100 = t;
        if(((y_100 != NULL) && (y_100 != z_100)))
          _fail(z_100);
        else
          y_100 = z_100;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_30, not_null(y_100));
        t = set_config_0(t);
      }
    }
    t = u_29;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_i_30;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  t = SSL_string_to_int(not_null(e_101));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm m_101 = NULL;
        m_101 = t;
        h_101 :
        if(!(match_string(m_101, "-S")))
          {
            if(!(match_string(m_101, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_s_30;
        t = set_config_0(t);
        t = term_t_30;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_u_30;
        return(t);
      }
      t = Option_3(t, c_5, d_5, e_5);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = j_30;
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm n_101 = NULL;
              n_101 = t;
              i_101 :
              if(!(match_string(n_101, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm q_101 = NULL;
              ATerm x_30;
              x_30 = t;
              {
                ATerm o_101 = NULL;
                ATerm p_101 = NULL;
                t = string_to_int_0(t);
                {
                  p_101 = t;
                  if(((o_101 != NULL) && (o_101 != p_101)))
                    _fail(p_101);
                  else
                    o_101 = p_101;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_27, not_null(o_101));
                  t = set_config_0(t);
                }
              }
              t = x_30;
              {
                ATerm r_101 = NULL;
                r_101 = t;
                if(((q_101 != NULL) && (q_101 != r_101)))
                  _fail(r_101);
                else
                  q_101 = r_101;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_101));
              }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_y_30;
              return(t);
            }
            t = ArgOption_3(t, f_5, g_5, h_5);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm s_101 = NULL;
                s_101 = t;
                l_101 :
                if(!(match_string(s_101, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = term_f_31;
                t = set_config_0(t);
                t = term_g_31;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_h_31;
                return(t);
              }
              t = Option_3(t, i_5, j_5, k_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm y_101 = NULL;
    y_101 = t;
    v_101 :
    if(!(match_string(y_101, "-o")))
      {
        if(!(match_string(y_101, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm b_102 = NULL;
    ATerm o_31;
    o_31 = t;
    {
      ATerm z_101 = NULL;
      ATerm a_102 = NULL;
      a_102 = t;
      if(((z_101 != NULL) && (z_101 != a_102)))
        _fail(a_102);
      else
        z_101 = a_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(z_101));
        t = set_config_0(t);
      }
    }
    t = o_31;
    {
      ATerm c_102 = NULL;
      c_102 = t;
      if(((b_102 != NULL) && (b_102 != c_102)))
        _fail(c_102);
      else
        b_102 = c_102;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_102));
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  t = ArgOption_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = v_31;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm g_102 = NULL;
          g_102 = t;
          f_102 :
          if(!(match_string(g_102, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_a_32;
          t = set_config_0(t);
          t = term_b_32;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_c_32;
          return(t);
        }
        t = Option_3(t, o_5, p_5, q_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
  m_102 = t;
  k_102 :
  if(match_string(m_102, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(m_102) == AT_LIST) && !(ATisEmpty(m_102))))
        {
          n_102 = ATgetFirst((ATermList) m_102);
          o_102 = (ATerm) ATgetNext((ATermList) m_102);
          l_102 :
          if(((ATgetType(o_102) == AT_LIST) && !(ATisEmpty(o_102))))
            {
              p_102 = ATgetFirst((ATermList) o_102);
              q_102 = (ATerm) ATgetNext((ATermList) o_102);
              {
                ATerm x_102 = NULL;
                ATerm m_32;
                m_32 = t;
                {
                  t = not_null(n_102);
                  t = j_0(t);
                }
                t = m_32;
                {
                  ATerm y_102 = NULL;
                  t = not_null(p_102);
                  {
                    t = l_0(t);
                    {
                      y_102 = t;
                      if(((x_102 != NULL) && (x_102 != y_102)))
                        _fail(y_102);
                      else
                        x_102 = y_102;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_102)), not_null(x_102));
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
  ATerm r_5 (ATerm t)
  {
    ATerm f_103 = NULL;
    f_103 = t;
    c_103 :
    if(!(match_string(f_103, "-i")))
      {
        if(!(match_string(f_103, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm i_103 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm g_103 = NULL;
      ATerm h_103 = NULL;
      h_103 = t;
      if(((g_103 != NULL) && (g_103 != h_103)))
        _fail(h_103);
      else
        g_103 = h_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_32, not_null(g_103));
        t = set_config_0(t);
      }
    }
    t = n_32;
    {
      ATerm j_103 = NULL;
      j_103 = t;
      if(((i_103 != NULL) && (i_103 != j_103)))
        _fail(j_103);
      else
        i_103 = j_103;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_103));
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_p_32;
    return(t);
  }
  t = ArgOption_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm v_103 = NULL;
  t = report_run_time_0(t);
  {
    ATerm w_103 = NULL;
    t = term_d_7;
    {
      t = whoami_0(t);
      {
        w_103 = t;
        if(((v_103 != NULL) && (v_103 != w_103)))
          _fail(w_103);
        else
          v_103 = w_103;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATempty, term_y_32), not_null(v_103)));
      {
        t = printnl_0(t);
        {
          t = term_t_15;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_z_32;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_103 = NULL;
  z_103 = t;
  t = SSL_TicksToSeconds(not_null(z_103));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL;
  e_104 = t;
  d_104 :
  if(match_cons(e_104, sym__2))
    {
      f_104 = ATgetArgument(e_104, 0);
      g_104 = ATgetArgument(e_104, 1);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_104), not_null(g_104));
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = SSL_addr(not_null(f_104), not_null(g_104));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_115 (ATerm), ATerm l_115 (ATerm))
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_115(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
        p_104 = t;
        n_104 :
        if(((ATgetType(p_104) == AT_LIST) && !(ATisEmpty(p_104))))
          {
            q_104 = ATgetFirst((ATermList) p_104);
            r_104 = (ATerm) ATgetNext((ATermList) p_104);
            {
              ATerm u_104 = NULL;
              ATerm v_104 = NULL;
              t = not_null(r_104);
              {
                t = foldr_2(t, k_115, l_115);
                {
                  v_104 = t;
                  if(((u_104 != NULL) && (u_104 != v_104)))
                    _fail(v_104);
                  else
                    u_104 = v_104;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_104), not_null(u_104));
                t = l_115(t);
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
ATerm crush_2 (ATerm t, ATerm i_113 (ATerm), ATerm j_113 (ATerm))
{
  ATerm c_105 = NULL;
  ATerm e_105 = NULL;
  c_105 = t;
  {
    ATerm f_105 = NULL;
    ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
    t = not_null(c_105);
    {
      f_105 = t;
      {
        t = SSL_explode_term(not_null(f_105));
        {
          h_105 = t;
          b_105 :
          if(match_cons(h_105, sym__2))
            {
              i_105 = ATgetArgument(h_105, 0);
              j_105 = ATgetArgument(h_105, 1);
              if(((e_105 != NULL) && (e_105 != j_105)))
                _fail(j_105);
              else
                e_105 = j_105;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_105);
      t = foldr_2(t, i_113, j_113);
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
    ATerm u_5 (ATerm t)
    {
      t = term_r_30;
      return(t);
    }
    t = crush_2(t, u_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_105 = NULL,s_105 = NULL,t_105 = NULL;
  p_105 = t;
  o_105 :
  if(match_cons(p_105, sym__2))
    {
      s_105 = ATgetArgument(p_105, 0);
      t_105 = ATgetArgument(p_105, 1);
      {
        ATerm q_33;
        q_33 = t;
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_105), not_null(t_105));
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              t = SSL_gtr(not_null(s_105), not_null(t_105));
            }
        }
        t = q_33;
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
  ATerm z_105 = NULL;
  ATerm t_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL;
      a_106 = t;
      y_105 :
      if(match_cons(a_106, sym__2))
        {
          b_106 = ATgetArgument(a_106, 0);
          c_106 = ATgetArgument(a_106, 1);
          {
            if(((z_105 != NULL) && (z_105 != b_106)))
              _fail(b_106);
            else
              z_105 = b_106;
            if(((z_105 != NULL) && (z_105 != c_106)))
              _fail(c_106);
            else
              z_105 = c_106;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = t_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm a_34;
    a_34 = t;
    {
      ATerm f_106 = NULL;
      ATerm g_106 = NULL;
      t = term_e_27;
      {
        t = get_config_0(t);
        {
          g_106 = t;
          if(((f_106 != NULL) && (f_106 != g_106)))
            _fail(g_106);
          else
            f_106 = g_106;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_106), term_t_15);
        t = geq_0(t);
      }
    }
    t = a_34;
    t = o_124(t);
    return(t);
  }
  t = try_1(t, v_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm k_106 = NULL,m_106 = NULL;
    ATerm b_34;
    b_34 = t;
    {
      ATerm l_106 = NULL;
      t = run_time_0(t);
      {
        l_106 = t;
        if(((k_106 != NULL) && (k_106 != l_106)))
          _fail(l_106);
        else
          k_106 = l_106;
      }
    }
    t = b_34;
    {
      ATerm n_106 = NULL;
      t = term_d_7;
      {
        t = whoami_0(t);
        {
          n_106 = t;
          if(((m_106 != NULL) && (m_106 != n_106)))
            _fail(n_106);
          else
            m_106 = n_106;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_34), not_null(k_106)), term_c_34), not_null(m_106)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_r_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_106 = NULL;
  u_106 = t;
  t_106 :
  if(match_cons(u_106, sym_Version_0))
    {
      ATerm w_106 = NULL,y_106 = NULL;
      ATerm e_34;
      e_34 = t;
      {
        ATerm x_106 = NULL;
        t = SSLgetAnnotations(not_null(u_106));
        {
          x_106 = t;
          if(((w_106 != NULL) && (w_106 != x_106)))
            _fail(x_106);
          else
            w_106 = x_106;
        }
      }
      t = e_34;
      {
        ATerm z_106 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_106));
        {
          z_106 = t;
          if(((y_106 != NULL) && (y_106 != z_106)))
            _fail(z_106);
          else
            y_106 = z_106;
        }
        t = not_null(y_106);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_127 (ATerm))
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_34;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm x_5 (ATerm t)
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              {
                ATerm s_34 = t;
                int t_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_34);
                  }
                else
                  {
                    t = s_34;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, x_5);
      }
    }
  t = g_127(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_107 = NULL;
  f_107 = t;
  t = SSL_table_create(not_null(f_107));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_107 = NULL;
  j_107 = t;
  {
    ATerm u_34;
    u_34 = t;
    {
      t = term_x_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_34, term_a_35, not_null(j_107));
          t = table_put_0(t);
        }
      }
    }
    t = u_34;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  t = SSL_table_destroy(not_null(n_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_107 = NULL;
  r_107 = t;
  t = SSL_exit(not_null(r_107));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_129 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm w_107 (ATerm t)
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = Cons_2(t, n_110, w_107);
      }
    return(t);
  }
  t = w_107(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  h_108 = t;
  e_108 :
  if(((ATgetType(h_108) == AT_LIST) && !(ATisEmpty(h_108))))
    {
      f_108 = ATgetFirst((ATermList) h_108);
      g_108 = (ATerm) ATgetNext((ATermList) h_108);
      {
        ATerm k_108 = NULL;
        t = not_null(g_108);
        {
          ATerm g_35;
          g_35 = t;
          {
            ATerm l_108 = NULL,n_108 = NULL,p_108 = NULL;
            ATerm i_35;
            i_35 = t;
            {
              ATerm m_108 = NULL;
              t = i_0(t);
              {
                m_108 = t;
                if(((l_108 != NULL) && (l_108 != m_108)))
                  _fail(m_108);
                else
                  l_108 = m_108;
              }
            }
            t = i_35;
            {
              ATerm o_108 = NULL;
              t = not_null(f_108);
              {
                t = e_0(t);
                {
                  o_108 = t;
                  if(((n_108 != NULL) && (n_108 != o_108)))
                    _fail(o_108);
                  else
                    n_108 = o_108;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_108)), not_null(n_108));
                {
                  p_108 = t;
                  if(((k_108 != NULL) && (k_108 != p_108)))
                    _fail(p_108);
                  else
                    k_108 = p_108;
                }
              }
            }
          }
          t = g_35;
          {
            ATerm y_5 (ATerm t)
            {
              t = not_null(k_108);
              return(t);
            }
            t = reverse_acc_2(t, e_0, y_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_108) == AT_LIST) && ATisEmpty(h_108)))
        {
          {
            t = term_d_7;
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
  ATerm z_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_129 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_101 (ATerm))
{
  ATerm g_109 = NULL,h_109 = NULL;
  g_109 = t;
  f_109 :
  if(match_cons(g_109, sym_Program_1))
    {
      h_109 = ATgetArgument(g_109, 0);
      {
        ATerm k_109 = NULL,m_109 = NULL;
        ATerm l_109 = NULL;
        t = SSLgetAnnotations(not_null(g_109));
        {
          l_109 = t;
          if(((k_109 != NULL) && (k_109 != l_109)))
            _fail(l_109);
          else
            k_109 = l_109;
        }
        {
          t = not_null(h_109);
          {
            ATerm o_109 = NULL;
            t = a_101(t);
            {
              m_109 = t;
              {
                ATerm p_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_109)), not_null(k_109));
                {
                  p_109 = t;
                  if(((o_109 != NULL) && (o_109 != p_109)))
                    _fail(p_109);
                  else
                    o_109 = p_109;
                }
                t = not_null(o_109);
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
  ATerm y_109 = NULL;
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_109 = NULL;
      t = term_z_32;
      {
        t = get_config_0(t);
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
      }
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm b_6 (ATerm t)
          {
            ATerm a_110 = NULL;
            a_110 = t;
            if(((y_109 != NULL) && (y_109 != a_110)))
              _fail(a_110);
            else
              y_109 = a_110;
            return(t);
          }
          t = Program_1(t, b_6);
          return(t);
        }
        t = option_defined_1(t, a_6);
      }
    }
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        t = not_null(y_109);
        return(t);
      }
      t = short_description_1(t, d_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_6);
    {
      t = term_l_35;
      {
        t = echo_0(t);
        {
          t = term_s_35;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm b_110 = NULL;
                  ATerm c_110 = NULL;
                  c_110 = t;
                  if(((b_110 != NULL) && (b_110 != c_110)))
                    _fail(c_110);
                  else
                    b_110 = c_110;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_110)), term_t_35);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm d_110 = NULL;
                    ATerm e_110 = NULL;
                    ATerm g_6 (ATerm t)
                    {
                      t = not_null(y_109);
                      return(t);
                    }
                    t = long_description_1(t, g_6);
                    {
                      e_110 = t;
                      if(((d_110 != NULL) && (d_110 != e_110)))
                        _fail(e_110);
                      else
                        d_110 = e_110;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_110)), term_u_35);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_6);
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
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm r_110 = NULL,s_110 = NULL;
  r_110 = t;
  q_110 :
  if(match_cons(r_110, sym_Undefined_1))
    {
      s_110 = ATgetArgument(r_110, 0);
      {
        ATerm v_110 = NULL,z_110 = NULL;
        ATerm y_110 = NULL;
        t = SSLgetAnnotations(not_null(r_110));
        {
          y_110 = t;
          if(((v_110 != NULL) && (v_110 != y_110)))
            _fail(y_110);
          else
            v_110 = y_110;
        }
        {
          t = not_null(s_110);
          {
            ATerm b_111 = NULL;
            t = b_101(t);
            {
              z_110 = t;
              {
                ATerm e_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_110)), not_null(v_110));
                {
                  e_111 = t;
                  if(((b_111 != NULL) && (b_111 != e_111)))
                    _fail(e_111);
                  else
                    b_111 = e_111;
                }
                t = not_null(b_111);
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
ATerm fetch_1 (ATerm t, ATerm w_110 (ATerm))
{
  ATerm j_111 (ATerm t)
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_110, _id);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = Cons_2(t, _id, j_111);
      }
    return(t);
  }
  t = j_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_128 (ATerm))
{
  t = fetch_1(t, g_128);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL;
  l_111 = t;
  k_111 :
  if(((ATgetType(l_111) == AT_LIST) && ATisEmpty(l_111)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_111) == AT_LIST) && !(ATisEmpty(l_111))))
        {
          m_111 = ATgetFirst((ATermList) l_111);
          n_111 = (ATerm) ATgetNext((ATermList) l_111);
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
  ATerm z_35;
  z_35 = t;
  {
    ATerm q_111 = NULL;
    ATerm t_111 = NULL;
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        {
          ATerm r_111 = NULL;
          ATerm s_111 = NULL;
          s_111 = t;
          if(((r_111 != NULL) && (r_111 != s_111)))
            _fail(s_111);
          else
            r_111 = s_111;
          t = (ATerm) ATinsert(ATempty, not_null(r_111));
        }
      }
    {
      t_111 = t;
      if(((q_111 != NULL) && (q_111 != t_111)))
        _fail(t_111);
      else
        q_111 = t_111;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_27, not_null(q_111));
      t = printnl_0(t);
    }
  }
  t = z_35;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_z_32;
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
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_112 = NULL;
  a_112 = t;
  z_111 :
  if(match_cons(a_112, sym_Help_0))
    {
      ATerm c_112 = NULL,e_112 = NULL;
      ATerm e_36;
      e_36 = t;
      {
        ATerm d_112 = NULL;
        t = SSLgetAnnotations(not_null(a_112));
        {
          d_112 = t;
          if(((c_112 != NULL) && (c_112 != d_112)))
            _fail(d_112);
          else
            c_112 = d_112;
        }
      }
      t = e_36;
      {
        ATerm f_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_112));
        {
          f_112 = t;
          if(((e_112 != NULL) && (e_112 != f_112)))
            _fail(f_112);
          else
            e_112 = f_112;
        }
        t = not_null(e_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_107 (ATerm))
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_107(t);
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm l_112 = NULL;
        l_112 = t;
        j_112 :
        if(!(match_string(l_112, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = term_k_36;
        t = set_config_0(t);
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = term_l_36;
        return(t);
      }
      t = Option_3(t, h_6, i_6, j_6);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm m_112 = NULL;
          m_112 = t;
          k_112 :
          if(!(match_string(m_112, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_6 (ATerm t)
        {
          t = term_k_36;
          {
            t = set_config_0(t);
            {
              t = term_n_36;
              t = set_config_0(t);
            }
          }
          t = term_o_36;
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = term_p_36;
          return(t);
        }
        t = Option_3(t, k_6, l_6, m_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL;
  p_112 = t;
  o_112 :
  if(match_cons(p_112, sym__2))
    {
      q_112 = ATgetArgument(p_112, 0);
      r_112 = ATgetArgument(p_112, 1);
      t = SSL_table_get(not_null(q_112), not_null(r_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL;
  e_113 = t;
  d_113 :
  if(match_cons(e_113, sym__3))
    {
      f_113 = ATgetArgument(e_113, 0);
      g_113 = ATgetArgument(e_113, 1);
      h_113 = ATgetArgument(e_113, 2);
      {
        ATerm q_36;
        q_36 = t;
        {
          ATerm q_113 = NULL;
          ATerm r_113 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_113), not_null(g_113));
          {
            ATerm r_36 = t;
            int s_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_36);
              }
            else
              {
                t = r_36;
                t = (ATerm) ATempty;
              }
            {
              r_113 = t;
              if(((q_113 != NULL) && (q_113 != r_113)))
                _fail(r_113);
              else
                q_113 = r_113;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_113), not_null(g_113), (ATerm) ATinsert(CheckATermList(not_null(q_113)), not_null(h_113)));
            t = table_put_0(t);
          }
        }
        t = q_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_129 (ATerm))
{
  ATerm v_113 = NULL;
  ATerm w_113 = NULL;
  t = term_d_7;
  {
    t = l_129(t);
    {
      w_113 = t;
      if(((v_113 != NULL) && (v_113 != w_113)))
        _fail(w_113);
      else
        v_113 = w_113;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_35, term_r_35, not_null(v_113));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL;
  c_114 = t;
  b_114 :
  if(match_string(c_114, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(c_114) == AT_LIST) && !(ATisEmpty(c_114))))
        {
          d_114 = ATgetFirst((ATermList) c_114);
          e_114 = (ATerm) ATgetNext((ATermList) c_114);
          {
            ATerm h_114 = NULL;
            ATerm t_36;
            t_36 = t;
            {
              t = not_null(d_114);
              t = a_0(t);
            }
            t = t_36;
            {
              ATerm i_114 = NULL;
              t = term_d_7;
              {
                t = b_0(t);
                {
                  i_114 = t;
                  if(((h_114 != NULL) && (h_114 != i_114)))
                    _fail(i_114);
                  else
                    h_114 = i_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_114)), not_null(h_114));
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
  ATerm n_6 (ATerm t)
  {
    ATerm n_114 = NULL;
    n_114 = t;
    m_114 :
    if(!(match_string(n_114, "--help")))
      {
        if(!(match_string(n_114, "-h")))
          {
            if(!(match_string(n_114, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_u_36;
    {
      t = set_config_0(t);
      t = term_v_36;
    }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = Option_3(t, n_6, p_6, q_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL;
  q_114 = t;
  p_114 :
  if(((ATgetType(q_114) == AT_LIST) && !(ATisEmpty(q_114))))
    {
      r_114 = ATgetFirst((ATermList) q_114);
      s_114 = (ATerm) ATgetNext((ATermList) q_114);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_114)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_114)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_88 (ATerm), ATerm w_88 (ATerm))
{
  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL;
  d_115 = t;
  c_115 :
  if(((ATgetType(d_115) == AT_LIST) && !(ATisEmpty(d_115))))
    {
      e_115 = ATgetFirst((ATermList) d_115);
      f_115 = (ATerm) ATgetNext((ATermList) d_115);
      {
        ATerm j_115 = NULL,q_115 = NULL;
        ATerm p_115 = NULL;
        t = SSLgetAnnotations(not_null(d_115));
        {
          p_115 = t;
          if(((j_115 != NULL) && (j_115 != p_115)))
            _fail(p_115);
          else
            j_115 = p_115;
        }
        {
          t = not_null(e_115);
          {
            ATerm s_115 = NULL;
            t = v_88(t);
            {
              q_115 = t;
              {
                t = not_null(f_115);
                {
                  ATerm u_115 = NULL;
                  t = w_88(t);
                  {
                    s_115 = t;
                    {
                      ATerm v_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_115)), not_null(q_115)), not_null(j_115));
                      {
                        v_115 = t;
                        if(((u_115 != NULL) && (u_115 != v_115)))
                          _fail(v_115);
                        else
                          u_115 = v_115;
                      }
                      t = not_null(u_115);
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
  ATerm f_116 = NULL;
  f_116 = t;
  e_116 :
  if(((ATgetType(f_116) == AT_LIST) && ATisEmpty(f_116)))
    {
      {
        ATerm h_116 = NULL,j_116 = NULL;
        ATerm x_36;
        x_36 = t;
        {
          ATerm i_116 = NULL;
          t = SSLgetAnnotations(not_null(f_116));
          {
            i_116 = t;
            if(((h_116 != NULL) && (h_116 != i_116)))
              _fail(i_116);
            else
              h_116 = i_116;
          }
        }
        t = x_36;
        {
          ATerm k_116 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_116));
          {
            k_116 = t;
            if(((j_116 != NULL) && (j_116 != k_116)))
              _fail(k_116);
            else
              j_116 = k_116;
          }
          t = not_null(j_116);
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
  ATerm q_116 = NULL,w_116 = NULL,y_116 = NULL;
  q_116 = t;
  p_116 :
  if(match_cons(q_116, sym__2))
    {
      w_116 = ATgetArgument(q_116, 0);
      y_116 = ATgetArgument(q_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(w_116), not_null(y_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_129 (ATerm))
{
  ATerm y_36;
  y_36 = t;
  {
    ATerm r_6 (ATerm t)
    {
      t = term_z_36;
      t = j_129(t);
      return(t);
    }
    t = try_1(t, r_6);
  }
  t = y_36;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm g_117 = NULL;
      ATerm a_37;
      a_37 = t;
      {
        ATerm e_117 = NULL;
        ATerm f_117 = NULL;
        f_117 = t;
        if(((e_117 != NULL) && (e_117 != f_117)))
          _fail(f_117);
        else
          e_117 = f_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_32, not_null(e_117));
          t = set_config_0(t);
        }
      }
      t = a_37;
      {
        ATerm h_117 = NULL;
        h_117 = t;
        if(((g_117 != NULL) && (g_117 != h_117)))
          _fail(h_117);
        else
          g_117 = h_117;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_117));
      }
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm b_37 = t;
      int c_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_37 = t;
          int e_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_37);
            }
          else
            {
              t = d_37;
              {
                t = j_129(t);
                t = Cons_2(t, _id, t_6);
              }
            }
          ;
          LocalPopChoice(c_37);
        }
      else
        {
          t = b_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_6, t_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,y_117 = NULL;
  ATerm f_37;
  f_37 = t;
  {
    ATerm z_117 = NULL,a_118 = NULL,c_118 = NULL,d_118 = NULL;
    z_117 = t;
    t_117 :
    if(match_cons(z_117, sym__3))
      {
        a_118 = ATgetArgument(z_117, 0);
        c_118 = ATgetArgument(z_117, 1);
        d_118 = ATgetArgument(z_117, 2);
        {
          if(((u_117 != NULL) && (u_117 != a_118)))
            _fail(a_118);
          else
            u_117 = a_118;
          {
            if(((v_117 != NULL) && (v_117 != c_118)))
              _fail(c_118);
            else
              v_117 = c_118;
            {
              if(((y_117 != NULL) && (y_117 != d_118)))
                _fail(d_118);
              else
                y_117 = d_118;
              t = SSL_table_put(not_null(u_117), not_null(v_117), not_null(y_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_129 (ATerm))
{
  ATerm i_118 = NULL;
  ATerm j_37;
  j_37 = t;
  {
    t = term_k_37;
    t = table_put_0(t);
  }
  t = j_37;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm l_37 = t;
      int m_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_129(t);
          ;
          LocalPopChoice(m_37);
        }
      else
        {
          t = l_37;
          {
            ATerm n_37 = t;
            int o_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(o_37);
              }
            else
              {
                t = n_37;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, u_6);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_37;
            r_37 = t;
            {
              ATerm s_37 = t;
              int t_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_37);
                }
              else
                {
                  t = s_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_37;
            {
              t = system_usage_0(t);
              {
                t = term_r_30;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm u_37 = t;
              int v_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_37;
                  w_37 = t;
                  {
                    t = term_j_36;
                    t = get_config_0(t);
                  }
                  t = w_37;
                  {
                    t = system_about_0(t);
                    {
                      t = term_r_30;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(v_37);
                }
              else
                {
                  t = u_37;
                  {
                    ATerm w_6 (ATerm t)
                    {
                      ATerm x_6 (ATerm t)
                      {
                        ATerm j_118 = NULL;
                        j_118 = t;
                        if(((i_118 != NULL) && (i_118 != j_118)))
                          _fail(j_118);
                        else
                          i_118 = j_118;
                        return(t);
                      }
                      t = Undefined_1(t, x_6);
                      return(t);
                    }
                    t = option_defined_1(t, w_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_118)), term_x_37));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_t_15;
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
      t = try_1(t, v_6);
      {
        ATerm y_37;
        y_37 = t;
        {
          t = term_m_35;
          t = table_destroy_0(t);
        }
        t = y_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_127 (ATerm), ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm))
{
  t = parse_options_1(t, i_127);
  {
    t = store_options_0(t);
    {
      t = k_127(t);
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_127);
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            {
              ATerm b_38 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_127(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = b_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_126(t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, x_126);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_6, z_126, a_127, z_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm f_38;
      f_38 = t;
      {
        ATerm m_118 = NULL;
        ATerm n_118 = NULL;
        t = term_z_32;
        {
          t = get_config_0(t);
          {
            n_118 = t;
            if(((m_118 != NULL) && (m_118 != n_118)))
              _fail(n_118);
            else
              m_118 = n_118;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATempty, not_null(m_118)));
          t = printnl_0(t);
        }
      }
      t = f_38;
      return(t);
    }
    t = if_verbose2_1(t, b_7);
    return(t);
  }
  t = iowrap_4(t, r_126, s_126, t_126, a_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_126 (ATerm), ATerm q_126 (ATerm))
{
  t = iowrap_3(t, p_126, q_126, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_126 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = _2(t, _id, m_126);
    return(t);
  }
  t = iowrap_2(t, c_7, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
